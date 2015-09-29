#line 3813 "mod_fastcgi.c"
void *_coverage_fout ;
#line 214 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned int size_t;
#line 34 "/usr/include/bits/types.h"
typedef unsigned char __u_char;
#line 35 "/usr/include/bits/types.h"
typedef unsigned short __u_short;
#line 36 "/usr/include/bits/types.h"
typedef unsigned int __u_int;
#line 37 "/usr/include/bits/types.h"
typedef unsigned long __u_long;
#line 40 "/usr/include/bits/types.h"
typedef signed char __int8_t;
#line 41 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t;
#line 42 "/usr/include/bits/types.h"
typedef short __int16_t;
#line 43 "/usr/include/bits/types.h"
typedef unsigned short __uint16_t;
#line 44 "/usr/include/bits/types.h"
typedef int __int32_t;
#line 45 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t;
#line 50 "/usr/include/bits/types.h"
typedef long long __int64_t;
#line 51 "/usr/include/bits/types.h"
typedef unsigned long long __uint64_t;
#line 59 "/usr/include/bits/types.h"
typedef long long __quad_t;
#line 60 "/usr/include/bits/types.h"
typedef unsigned long long __u_quad_t;
#line 137 "/usr/include/bits/types.h"
typedef __u_quad_t __dev_t;
#line 138 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;
#line 139 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;
#line 140 "/usr/include/bits/types.h"
typedef unsigned long __ino_t;
#line 141 "/usr/include/bits/types.h"
typedef __u_quad_t __ino64_t;
#line 142 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;
#line 143 "/usr/include/bits/types.h"
typedef unsigned int __nlink_t;
#line 144 "/usr/include/bits/types.h"
typedef long __off_t;
#line 145 "/usr/include/bits/types.h"
typedef __quad_t __off64_t;
#line 146 "/usr/include/bits/types.h"
typedef int __pid_t;
#line 147 "/usr/include/bits/types.h"
struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};
#line 147 "/usr/include/bits/types.h"
typedef struct __anonstruct___fsid_t_1 __fsid_t;
#line 148 "/usr/include/bits/types.h"
typedef long __clock_t;
#line 149 "/usr/include/bits/types.h"
typedef unsigned long __rlim_t;
#line 150 "/usr/include/bits/types.h"
typedef __u_quad_t __rlim64_t;
#line 151 "/usr/include/bits/types.h"
typedef unsigned int __id_t;
#line 152 "/usr/include/bits/types.h"
typedef long __time_t;
#line 153 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;
#line 154 "/usr/include/bits/types.h"
typedef long __suseconds_t;
#line 156 "/usr/include/bits/types.h"
typedef int __daddr_t;
#line 157 "/usr/include/bits/types.h"
typedef long __swblk_t;
#line 158 "/usr/include/bits/types.h"
typedef int __key_t;
#line 161 "/usr/include/bits/types.h"
typedef int __clockid_t;
#line 164 "/usr/include/bits/types.h"
typedef void *__timer_t;
#line 167 "/usr/include/bits/types.h"
typedef long __blksize_t;
#line 172 "/usr/include/bits/types.h"
typedef long __blkcnt_t;
#line 173 "/usr/include/bits/types.h"
typedef __quad_t __blkcnt64_t;
#line 176 "/usr/include/bits/types.h"
typedef unsigned long __fsblkcnt_t;
#line 177 "/usr/include/bits/types.h"
typedef __u_quad_t __fsblkcnt64_t;
#line 180 "/usr/include/bits/types.h"
typedef unsigned long __fsfilcnt_t;
#line 181 "/usr/include/bits/types.h"
typedef __u_quad_t __fsfilcnt64_t;
#line 183 "/usr/include/bits/types.h"
typedef int __ssize_t;
#line 187 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;
#line 188 "/usr/include/bits/types.h"
typedef __quad_t *__qaddr_t;
#line 189 "/usr/include/bits/types.h"
typedef char *__caddr_t;
#line 192 "/usr/include/bits/types.h"
typedef int __intptr_t;
#line 195 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;
#line 35 "/usr/include/sys/types.h"
typedef __u_char u_char;
#line 36 "/usr/include/sys/types.h"
typedef __u_short u_short;
#line 37 "/usr/include/sys/types.h"
typedef __u_int u_int;
#line 38 "/usr/include/sys/types.h"
typedef __u_long u_long;
#line 39 "/usr/include/sys/types.h"
typedef __quad_t quad_t;
#line 40 "/usr/include/sys/types.h"
typedef __u_quad_t u_quad_t;
#line 41 "/usr/include/sys/types.h"
typedef __fsid_t fsid_t;
#line 46 "/usr/include/sys/types.h"
typedef __loff_t loff_t;
#line 52 "/usr/include/sys/types.h"
typedef __ino64_t ino_t;
#line 62 "/usr/include/sys/types.h"
typedef __dev_t dev_t;
#line 67 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
#line 72 "/usr/include/sys/types.h"
typedef __mode_t mode_t;
#line 77 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;
#line 82 "/usr/include/sys/types.h"
typedef __uid_t uid_t;
#line 90 "/usr/include/sys/types.h"
typedef __off64_t off_t;
#line 100 "/usr/include/sys/types.h"
typedef __pid_t pid_t;
#line 105 "/usr/include/sys/types.h"
typedef __id_t id_t;
#line 110 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;
#line 116 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
#line 117 "/usr/include/sys/types.h"
typedef __caddr_t caddr_t;
#line 123 "/usr/include/sys/types.h"
typedef __key_t key_t;
#line 77 "/usr/include/time.h"
typedef __time_t time_t;
#line 93 "/usr/include/time.h"
typedef __clockid_t clockid_t;
#line 105 "/usr/include/time.h"
typedef __timer_t timer_t;
#line 151 "/usr/include/sys/types.h"
typedef unsigned long ulong;
#line 152 "/usr/include/sys/types.h"
typedef unsigned short ushort;
#line 153 "/usr/include/sys/types.h"
typedef unsigned int uint;
#line 195 "/usr/include/sys/types.h"
typedef char int8_t;
#line 196 "/usr/include/sys/types.h"
typedef short int16_t;
#line 197 "/usr/include/sys/types.h"
typedef int int32_t;
#line 198 "/usr/include/sys/types.h"
typedef long long int64_t;
#line 201 "/usr/include/sys/types.h"
typedef unsigned char u_int8_t;
#line 202 "/usr/include/sys/types.h"
typedef unsigned short u_int16_t;
#line 203 "/usr/include/sys/types.h"
typedef unsigned int u_int32_t;
#line 204 "/usr/include/sys/types.h"
typedef unsigned long long u_int64_t;
#line 206 "/usr/include/sys/types.h"
typedef int register_t;
#line 24 "/usr/include/bits/sigset.h"
typedef int __sig_atomic_t;
#line 29 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
#line 29 "/usr/include/bits/sigset.h"
typedef struct __anonstruct___sigset_t_2 __sigset_t;
#line 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
#line 121 "/usr/include/time.h"
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
#line 69 "/usr/include/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 49 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;
#line 55 "/usr/include/sys/select.h"
typedef long __fd_mask;
#line 67 "/usr/include/sys/select.h"
struct __anonstruct_fd_set_3 {
   __fd_mask __fds_bits[1024U / (8U * sizeof(__fd_mask ))] ;
};
#line 67 "/usr/include/sys/select.h"
typedef struct __anonstruct_fd_set_3 fd_set;
#line 85 "/usr/include/sys/select.h"
typedef __fd_mask fd_mask;
#line 248 "/usr/include/sys/types.h"
typedef __blkcnt64_t blkcnt_t;
#line 252 "/usr/include/sys/types.h"
typedef __fsblkcnt64_t fsblkcnt_t;
#line 256 "/usr/include/sys/types.h"
typedef __fsfilcnt64_t fsfilcnt_t;
#line 36 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long pthread_t;
#line 39 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_attr_t_4 {
   char __size[36] ;
   long __align ;
};
#line 39 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_attr_t_4 pthread_attr_t;
#line 46 "/usr/include/bits/pthreadtypes.h"
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
#line 46 "/usr/include/bits/pthreadtypes.h"
typedef struct __pthread_internal_slist __pthread_slist_t;
#line 54 "/usr/include/bits/pthreadtypes.h"
union __anonunion____missing_field_name_6 {
   int __spins ;
   __pthread_slist_t __list ;
};
#line 54 "/usr/include/bits/pthreadtypes.h"
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_6 __annonCompField1 ;
};
#line 54 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_mutex_t_5 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
#line 54 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutex_t_5 pthread_mutex_t;
#line 75 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_mutexattr_t_7 {
   char __size[4] ;
   long __align ;
};
#line 75 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutexattr_t_7 pthread_mutexattr_t;
#line 84 "/usr/include/bits/pthreadtypes.h"
struct __anonstruct___data_9 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
#line 84 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_cond_t_8 {
   struct __anonstruct___data_9 __data ;
   char __size[48] ;
   long long __align ;
};
#line 84 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_cond_t_8 pthread_cond_t;
#line 101 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_condattr_t_10 {
   char __size[4] ;
   long __align ;
};
#line 101 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_condattr_t_10 pthread_condattr_t;
#line 109 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;
#line 113 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t;
#line 119 "/usr/include/bits/pthreadtypes.h"
struct __anonstruct___data_12 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   unsigned int __flags ;
   int __writer ;
};
#line 119 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_rwlock_t_11 {
   struct __anonstruct___data_12 __data ;
   char __size[32] ;
   long __align ;
};
#line 119 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlock_t_11 pthread_rwlock_t;
#line 138 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_rwlockattr_t_13 {
   char __size[8] ;
   long __align ;
};
#line 138 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlockattr_t_13 pthread_rwlockattr_t;
#line 148 "/usr/include/bits/pthreadtypes.h"
typedef int volatile   pthread_spinlock_t;
#line 153 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_barrier_t_14 {
   char __size[20] ;
   long __align ;
};
#line 153 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_barrier_t_14 pthread_barrier_t;
#line 159 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_barrierattr_t_15 {
   char __size[4] ;
   int __align ;
};
#line 159 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_barrierattr_t_15 pthread_barrierattr_t;
#line 226 "/usr/include/unistd.h"
typedef __useconds_t useconds_t;
#line 238 "/usr/include/unistd.h"
typedef __intptr_t intptr_t;
#line 245 "/usr/include/unistd.h"
typedef __socklen_t socklen_t;
#line 26 "/usr/include/bits/confname.h"
enum __anonenum_16 {
    _PC_LINK_MAX = 0,
    _PC_MAX_CANON = 1,
    _PC_MAX_INPUT = 2,
    _PC_NAME_MAX = 3,
    _PC_PATH_MAX = 4,
    _PC_PIPE_BUF = 5,
    _PC_CHOWN_RESTRICTED = 6,
    _PC_NO_TRUNC = 7,
    _PC_VDISABLE = 8,
    _PC_SYNC_IO = 9,
    _PC_ASYNC_IO = 10,
    _PC_PRIO_IO = 11,
    _PC_SOCK_MAXBUF = 12,
    _PC_FILESIZEBITS = 13,
    _PC_REC_INCR_XFER_SIZE = 14,
    _PC_REC_MAX_XFER_SIZE = 15,
    _PC_REC_MIN_XFER_SIZE = 16,
    _PC_REC_XFER_ALIGN = 17,
    _PC_ALLOC_SIZE_MIN = 18,
    _PC_SYMLINK_MAX = 19,
    _PC_2_SYMLINKS = 20
} ;
#line 73
enum __anonenum_17 {
    _SC_ARG_MAX = 0,
    _SC_CHILD_MAX = 1,
    _SC_CLK_TCK = 2,
    _SC_NGROUPS_MAX = 3,
    _SC_OPEN_MAX = 4,
    _SC_STREAM_MAX = 5,
    _SC_TZNAME_MAX = 6,
    _SC_JOB_CONTROL = 7,
    _SC_SAVED_IDS = 8,
    _SC_REALTIME_SIGNALS = 9,
    _SC_PRIORITY_SCHEDULING = 10,
    _SC_TIMERS = 11,
    _SC_ASYNCHRONOUS_IO = 12,
    _SC_PRIORITIZED_IO = 13,
    _SC_SYNCHRONIZED_IO = 14,
    _SC_FSYNC = 15,
    _SC_MAPPED_FILES = 16,
    _SC_MEMLOCK = 17,
    _SC_MEMLOCK_RANGE = 18,
    _SC_MEMORY_PROTECTION = 19,
    _SC_MESSAGE_PASSING = 20,
    _SC_SEMAPHORES = 21,
    _SC_SHARED_MEMORY_OBJECTS = 22,
    _SC_AIO_LISTIO_MAX = 23,
    _SC_AIO_MAX = 24,
    _SC_AIO_PRIO_DELTA_MAX = 25,
    _SC_DELAYTIMER_MAX = 26,
    _SC_MQ_OPEN_MAX = 27,
    _SC_MQ_PRIO_MAX = 28,
    _SC_VERSION = 29,
    _SC_PAGESIZE = 30,
    _SC_RTSIG_MAX = 31,
    _SC_SEM_NSEMS_MAX = 32,
    _SC_SEM_VALUE_MAX = 33,
    _SC_SIGQUEUE_MAX = 34,
    _SC_TIMER_MAX = 35,
    _SC_BC_BASE_MAX = 36,
    _SC_BC_DIM_MAX = 37,
    _SC_BC_SCALE_MAX = 38,
    _SC_BC_STRING_MAX = 39,
    _SC_COLL_WEIGHTS_MAX = 40,
    _SC_EQUIV_CLASS_MAX = 41,
    _SC_EXPR_NEST_MAX = 42,
    _SC_LINE_MAX = 43,
    _SC_RE_DUP_MAX = 44,
    _SC_CHARCLASS_NAME_MAX = 45,
    _SC_2_VERSION = 46,
    _SC_2_C_BIND = 47,
    _SC_2_C_DEV = 48,
    _SC_2_FORT_DEV = 49,
    _SC_2_FORT_RUN = 50,
    _SC_2_SW_DEV = 51,
    _SC_2_LOCALEDEF = 52,
    _SC_PII = 53,
    _SC_PII_XTI = 54,
    _SC_PII_SOCKET = 55,
    _SC_PII_INTERNET = 56,
    _SC_PII_OSI = 57,
    _SC_POLL = 58,
    _SC_SELECT = 59,
    _SC_UIO_MAXIOV = 60,
    _SC_IOV_MAX = 60,
    _SC_PII_INTERNET_STREAM = 61,
    _SC_PII_INTERNET_DGRAM = 62,
    _SC_PII_OSI_COTS = 63,
    _SC_PII_OSI_CLTS = 64,
    _SC_PII_OSI_M = 65,
    _SC_T_IOV_MAX = 66,
    _SC_THREADS = 67,
    _SC_THREAD_SAFE_FUNCTIONS = 68,
    _SC_GETGR_R_SIZE_MAX = 69,
    _SC_GETPW_R_SIZE_MAX = 70,
    _SC_LOGIN_NAME_MAX = 71,
    _SC_TTY_NAME_MAX = 72,
    _SC_THREAD_DESTRUCTOR_ITERATIONS = 73,
    _SC_THREAD_KEYS_MAX = 74,
    _SC_THREAD_STACK_MIN = 75,
    _SC_THREAD_THREADS_MAX = 76,
    _SC_THREAD_ATTR_STACKADDR = 77,
    _SC_THREAD_ATTR_STACKSIZE = 78,
    _SC_THREAD_PRIORITY_SCHEDULING = 79,
    _SC_THREAD_PRIO_INHERIT = 80,
    _SC_THREAD_PRIO_PROTECT = 81,
    _SC_THREAD_PROCESS_SHARED = 82,
    _SC_NPROCESSORS_CONF = 83,
    _SC_NPROCESSORS_ONLN = 84,
    _SC_PHYS_PAGES = 85,
    _SC_AVPHYS_PAGES = 86,
    _SC_ATEXIT_MAX = 87,
    _SC_PASS_MAX = 88,
    _SC_XOPEN_VERSION = 89,
    _SC_XOPEN_XCU_VERSION = 90,
    _SC_XOPEN_UNIX = 91,
    _SC_XOPEN_CRYPT = 92,
    _SC_XOPEN_ENH_I18N = 93,
    _SC_XOPEN_SHM = 94,
    _SC_2_CHAR_TERM = 95,
    _SC_2_C_VERSION = 96,
    _SC_2_UPE = 97,
    _SC_XOPEN_XPG2 = 98,
    _SC_XOPEN_XPG3 = 99,
    _SC_XOPEN_XPG4 = 100,
    _SC_CHAR_BIT = 101,
    _SC_CHAR_MAX = 102,
    _SC_CHAR_MIN = 103,
    _SC_INT_MAX = 104,
    _SC_INT_MIN = 105,
    _SC_LONG_BIT = 106,
    _SC_WORD_BIT = 107,
    _SC_MB_LEN_MAX = 108,
    _SC_NZERO = 109,
    _SC_SSIZE_MAX = 110,
    _SC_SCHAR_MAX = 111,
    _SC_SCHAR_MIN = 112,
    _SC_SHRT_MAX = 113,
    _SC_SHRT_MIN = 114,
    _SC_UCHAR_MAX = 115,
    _SC_UINT_MAX = 116,
    _SC_ULONG_MAX = 117,
    _SC_USHRT_MAX = 118,
    _SC_NL_ARGMAX = 119,
    _SC_NL_LANGMAX = 120,
    _SC_NL_MSGMAX = 121,
    _SC_NL_NMAX = 122,
    _SC_NL_SETMAX = 123,
    _SC_NL_TEXTMAX = 124,
    _SC_XBS5_ILP32_OFF32 = 125,
    _SC_XBS5_ILP32_OFFBIG = 126,
    _SC_XBS5_LP64_OFF64 = 127,
    _SC_XBS5_LPBIG_OFFBIG = 128,
    _SC_XOPEN_LEGACY = 129,
    _SC_XOPEN_REALTIME = 130,
    _SC_XOPEN_REALTIME_THREADS = 131,
    _SC_ADVISORY_INFO = 132,
    _SC_BARRIERS = 133,
    _SC_BASE = 134,
    _SC_C_LANG_SUPPORT = 135,
    _SC_C_LANG_SUPPORT_R = 136,
    _SC_CLOCK_SELECTION = 137,
    _SC_CPUTIME = 138,
    _SC_THREAD_CPUTIME = 139,
    _SC_DEVICE_IO = 140,
    _SC_DEVICE_SPECIFIC = 141,
    _SC_DEVICE_SPECIFIC_R = 142,
    _SC_FD_MGMT = 143,
    _SC_FIFO = 144,
    _SC_PIPE = 145,
    _SC_FILE_ATTRIBUTES = 146,
    _SC_FILE_LOCKING = 147,
    _SC_FILE_SYSTEM = 148,
    _SC_MONOTONIC_CLOCK = 149,
    _SC_MULTI_PROCESS = 150,
    _SC_SINGLE_PROCESS = 151,
    _SC_NETWORKING = 152,
    _SC_READER_WRITER_LOCKS = 153,
    _SC_SPIN_LOCKS = 154,
    _SC_REGEXP = 155,
    _SC_REGEX_VERSION = 156,
    _SC_SHELL = 157,
    _SC_SIGNALS = 158,
    _SC_SPAWN = 159,
    _SC_SPORADIC_SERVER = 160,
    _SC_THREAD_SPORADIC_SERVER = 161,
    _SC_SYSTEM_DATABASE = 162,
    _SC_SYSTEM_DATABASE_R = 163,
    _SC_TIMEOUTS = 164,
    _SC_TYPED_MEMORY_OBJECTS = 165,
    _SC_USER_GROUPS = 166,
    _SC_USER_GROUPS_R = 167,
    _SC_2_PBS = 168,
    _SC_2_PBS_ACCOUNTING = 169,
    _SC_2_PBS_LOCATE = 170,
    _SC_2_PBS_MESSAGE = 171,
    _SC_2_PBS_TRACK = 172,
    _SC_SYMLOOP_MAX = 173,
    _SC_STREAMS = 174,
    _SC_2_PBS_CHECKPOINT = 175,
    _SC_V6_ILP32_OFF32 = 176,
    _SC_V6_ILP32_OFFBIG = 177,
    _SC_V6_LP64_OFF64 = 178,
    _SC_V6_LPBIG_OFFBIG = 179,
    _SC_HOST_NAME_MAX = 180,
    _SC_TRACE = 181,
    _SC_TRACE_EVENT_FILTER = 182,
    _SC_TRACE_INHERIT = 183,
    _SC_TRACE_LOG = 184,
    _SC_LEVEL1_ICACHE_SIZE = 185,
    _SC_LEVEL1_ICACHE_ASSOC = 186,
    _SC_LEVEL1_ICACHE_LINESIZE = 187,
    _SC_LEVEL1_DCACHE_SIZE = 188,
    _SC_LEVEL1_DCACHE_ASSOC = 189,
    _SC_LEVEL1_DCACHE_LINESIZE = 190,
    _SC_LEVEL2_CACHE_SIZE = 191,
    _SC_LEVEL2_CACHE_ASSOC = 192,
    _SC_LEVEL2_CACHE_LINESIZE = 193,
    _SC_LEVEL3_CACHE_SIZE = 194,
    _SC_LEVEL3_CACHE_ASSOC = 195,
    _SC_LEVEL3_CACHE_LINESIZE = 196,
    _SC_LEVEL4_CACHE_SIZE = 197,
    _SC_LEVEL4_CACHE_ASSOC = 198,
    _SC_LEVEL4_CACHE_LINESIZE = 199,
    _SC_IPV6 = 235,
    _SC_RAW_SOCKETS = 236
} ;
#line 506
enum __anonenum_18 {
    _CS_PATH = 0,
    _CS_V6_WIDTH_RESTRICTED_ENVS = 1,
    _CS_GNU_LIBC_VERSION = 2,
    _CS_GNU_LIBPTHREAD_VERSION = 3,
    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS = 1001,
    _CS_LFS_LIBS = 1002,
    _CS_LFS_LINTFLAGS = 1003,
    _CS_LFS64_CFLAGS = 1004,
    _CS_LFS64_LDFLAGS = 1005,
    _CS_LFS64_LIBS = 1006,
    _CS_LFS64_LINTFLAGS = 1007,
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS = 1101,
    _CS_XBS5_ILP32_OFF32_LIBS = 1102,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS = 1103,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS = 1104,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS = 1105,
    _CS_XBS5_ILP32_OFFBIG_LIBS = 1106,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS = 1107,
    _CS_XBS5_LP64_OFF64_CFLAGS = 1108,
    _CS_XBS5_LP64_OFF64_LDFLAGS = 1109,
    _CS_XBS5_LP64_OFF64_LIBS = 1110,
    _CS_XBS5_LP64_OFF64_LINTFLAGS = 1111,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS = 1112,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS = 1113,
    _CS_XBS5_LPBIG_OFFBIG_LIBS = 1114,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS = 1115,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS = 1116,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS = 1117,
    _CS_POSIX_V6_ILP32_OFF32_LIBS = 1118,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS = 1119,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS = 1120,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS = 1121,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS = 1122,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS = 1123,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS = 1124,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS = 1125,
    _CS_POSIX_V6_LP64_OFF64_LIBS = 1126,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS = 1127,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS = 1128,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS = 1129,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS = 1130,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS = 1131
} ;
#line 141 "/usr/include/bits/fcntl.h"
struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
#line 326 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef long wchar_t;
#line 98 "/usr/include/stdlib.h"
struct __anonstruct_div_t_19 {
   int quot ;
   int rem ;
};
#line 98 "/usr/include/stdlib.h"
typedef struct __anonstruct_div_t_19 div_t;
#line 106 "/usr/include/stdlib.h"
struct __anonstruct_ldiv_t_20 {
   long quot ;
   long rem ;
};
#line 106 "/usr/include/stdlib.h"
typedef struct __anonstruct_ldiv_t_20 ldiv_t;
#line 118 "/usr/include/stdlib.h"
struct __anonstruct_lldiv_t_21 {
   long long quot ;
   long long rem ;
};
#line 118 "/usr/include/stdlib.h"
typedef struct __anonstruct_lldiv_t_21 lldiv_t;
#line 467 "/usr/include/stdlib.h"
struct random_data {
   int32_t *fptr ;
   int32_t *rptr ;
   int32_t *state ;
   int rand_type ;
   int rand_deg ;
   int rand_sep ;
   int32_t *end_ptr ;
};
#line 536 "/usr/include/stdlib.h"
struct drand48_data {
   unsigned short __x[3] ;
   unsigned short __old_x[3] ;
   unsigned short __c ;
   unsigned short __init ;
   unsigned long long __a ;
};
#line 763 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(void const   * , void const   * );
#line 48 "/usr/include/ctype.h"
enum __anonenum_22 {
    _ISupper = 256,
    _ISlower = 512,
    _ISalpha = 1024,
    _ISdigit = 2048,
    _ISxdigit = 4096,
    _ISspace = 8192,
    _ISprint = 16384,
    _ISgraph = 32768,
    _ISblank = 1,
    _IScntrl = 2,
    _ISpunct = 4,
    _ISalnum = 8
} ;
#line 41 "/usr/include/signal.h"
typedef __sig_atomic_t sig_atomic_t;
#line 75 "/usr/include/signal.h"
typedef void (*__sighandler_t)(int  );
#line 201 "/usr/include/signal.h"
typedef void (*sig_t)(int  );
#line 33 "/usr/include/bits/siginfo.h"
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
#line 33 "/usr/include/bits/siginfo.h"
typedef union sigval sigval_t;
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__kill_24 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__timer_25 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__rt_26 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigchld_27 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigfault_28 {
   void *si_addr ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigpoll_29 {
   long si_band ;
   int si_fd ;
};
#line 51 "/usr/include/bits/siginfo.h"
union __anonunion__sifields_23 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_24 _kill ;
   struct __anonstruct__timer_25 _timer ;
   struct __anonstruct__rt_26 _rt ;
   struct __anonstruct__sigchld_27 _sigchld ;
   struct __anonstruct__sigfault_28 _sigfault ;
   struct __anonstruct__sigpoll_29 _sigpoll ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_23 _sifields ;
};
#line 51 "/usr/include/bits/siginfo.h"
typedef struct siginfo siginfo_t;
#line 129
enum __anonenum_30 {
    SI_ASYNCNL = -60,
    SI_TKILL = -6,
    SI_SIGIO = -5,
    SI_ASYNCIO = -4,
    SI_MESGQ = -3,
    SI_TIMER = -2,
    SI_QUEUE = -1,
    SI_USER = 0,
    SI_KERNEL = 128
} ;
#line 153
enum __anonenum_31 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
#line 174
enum __anonenum_32 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
#line 195
enum __anonenum_33 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
#line 204
enum __anonenum_34 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
#line 215
enum __anonenum_35 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
#line 224
enum __anonenum_36 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
#line 241
enum __anonenum_37 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
#line 273 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigev_thread_39 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
#line 273 "/usr/include/bits/siginfo.h"
union __anonunion__sigev_un_38 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_39 _sigev_thread ;
};
#line 273 "/usr/include/bits/siginfo.h"
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_38 _sigev_un ;
};
#line 273 "/usr/include/bits/siginfo.h"
typedef struct sigevent sigevent_t;
#line 300
enum __anonenum_40 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
#line 25 "/usr/include/bits/sigaction.h"
union __anonunion___sigaction_handler_41 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
#line 25 "/usr/include/bits/sigaction.h"
struct sigaction {
   union __anonunion___sigaction_handler_41 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
#line 308 "/usr/include/signal.h"
struct sigvec {
   void (*sv_handler)(int  ) ;
   int sv_mask ;
   int sv_flags ;
};
#line 19 "/usr/include/asm/sigcontext.h"
struct _fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
#line 24 "/usr/include/asm/sigcontext.h"
struct _fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};
#line 30 "/usr/include/asm/sigcontext.h"
struct _xmmreg {
   unsigned long element[4] ;
};
#line 34 "/usr/include/asm/sigcontext.h"
struct _fpstate {
   unsigned long cw ;
   unsigned long sw ;
   unsigned long tag ;
   unsigned long ipoff ;
   unsigned long cssel ;
   unsigned long dataoff ;
   unsigned long datasel ;
   struct _fpreg _st[8] ;
   unsigned short status ;
   unsigned short magic ;
   unsigned long _fxsr_env[6] ;
   unsigned long mxcsr ;
   unsigned long reserved ;
   struct _fpxreg _fxsr_st[8] ;
   struct _xmmreg _xmm[8] ;
   unsigned long padding[56] ;
};
#line 58 "/usr/include/asm/sigcontext.h"
struct sigcontext {
   unsigned short gs ;
   unsigned short __gsh ;
   unsigned short fs ;
   unsigned short __fsh ;
   unsigned short es ;
   unsigned short __esh ;
   unsigned short ds ;
   unsigned short __dsh ;
   unsigned long edi ;
   unsigned long esi ;
   unsigned long ebp ;
   unsigned long esp ;
   unsigned long ebx ;
   unsigned long edx ;
   unsigned long ecx ;
   unsigned long eax ;
   unsigned long trapno ;
   unsigned long err ;
   unsigned long eip ;
   unsigned short cs ;
   unsigned short __csh ;
   unsigned long eflags ;
   unsigned long esp_at_signal ;
   unsigned short ss ;
   unsigned short __ssh ;
   struct _fpstate *fpstate ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
#line 26 "/usr/include/bits/sigstack.h"
struct sigstack {
   void *ss_sp ;
   int ss_onstack ;
};
#line 34
enum __anonenum_42 {
    SS_ONSTACK = 1,
    SS_DISABLE = 2
} ;
#line 50 "/usr/include/bits/sigstack.h"
struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};
#line 50 "/usr/include/bits/sigstack.h"
typedef struct sigaltstack stack_t;
#line 25 "settings.h"
enum __anonenum_handler_t_43 {
    HANDLER_UNSET = 0,
    HANDLER_GO_ON = 1,
    HANDLER_FINISHED = 2,
    HANDLER_COMEBACK = 3,
    HANDLER_WAIT_FOR_EVENT = 4,
    HANDLER_ERROR = 5,
    HANDLER_WAIT_FOR_FD = 6
} ;
#line 25 "settings.h"
typedef enum __anonenum_handler_t_43 handler_t;
#line 13 "buffer.h"
struct __anonstruct_buffer_44 {
   char *ptr ;
   size_t used ;
   size_t size ;
};
#line 13 "buffer.h"
typedef struct __anonstruct_buffer_44 buffer;
#line 20 "buffer.h"
struct __anonstruct_buffer_array_45 {
   buffer **ptr ;
   size_t used ;
   size_t size ;
};
#line 20 "buffer.h"
typedef struct __anonstruct_buffer_array_45 buffer_array;
#line 27 "buffer.h"
struct __anonstruct_read_buffer_46 {
   char *ptr ;
   size_t offset ;
   size_t used ;
   size_t size ;
};
#line 27 "buffer.h"
typedef struct __anonstruct_read_buffer_46 read_buffer;
#line 86
enum __anonenum_buffer_encoding_t_47 {
    ENCODING_UNSET = 0,
    ENCODING_REL_URI = 1,
    ENCODING_REL_URI_PART = 2,
    ENCODING_HTML = 3,
    ENCODING_MINIMAL_XML = 4,
    ENCODING_HEX = 5,
    ENCODING_HTTP_HEADER = 6
} ;
#line 86 "buffer.h"
typedef enum __anonenum_buffer_encoding_t_47 buffer_encoding_t;
#line 57 "/usr/include/sys/time.h"
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
#line 63 "/usr/include/sys/time.h"
typedef struct timezone * __restrict  __timezone_ptr_t;
#line 93
enum __itimer_which {
    ITIMER_REAL = 0,
    ITIMER_VIRTUAL = 1,
    ITIMER_PROF = 2
} ;
#line 109 "/usr/include/sys/time.h"
struct itimerval {
   struct timeval it_interval ;
   struct timeval it_value ;
};
#line 122 "/usr/include/sys/time.h"
typedef int __itimer_which_t;
#line 36 "/usr/include/bits/stat.h"
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t __st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off64_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt64_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __ino64_t st_ino ;
};
#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 50 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 59 "/usr/include/stdint.h"
typedef unsigned long long uint64_t;
#line 66 "/usr/include/stdint.h"
typedef signed char int_least8_t;
#line 67 "/usr/include/stdint.h"
typedef short int_least16_t;
#line 68 "/usr/include/stdint.h"
typedef int int_least32_t;
#line 73 "/usr/include/stdint.h"
typedef long long int_least64_t;
#line 77 "/usr/include/stdint.h"
typedef unsigned char uint_least8_t;
#line 78 "/usr/include/stdint.h"
typedef unsigned short uint_least16_t;
#line 79 "/usr/include/stdint.h"
typedef unsigned int uint_least32_t;
#line 84 "/usr/include/stdint.h"
typedef unsigned long long uint_least64_t;
#line 91 "/usr/include/stdint.h"
typedef signed char int_fast8_t;
#line 97 "/usr/include/stdint.h"
typedef int int_fast16_t;
#line 98 "/usr/include/stdint.h"
typedef int int_fast32_t;
#line 100 "/usr/include/stdint.h"
typedef long long int_fast64_t;
#line 104 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;
#line 110 "/usr/include/stdint.h"
typedef unsigned int uint_fast16_t;
#line 111 "/usr/include/stdint.h"
typedef unsigned int uint_fast32_t;
#line 113 "/usr/include/stdint.h"
typedef unsigned long long uint_fast64_t;
#line 129 "/usr/include/stdint.h"
typedef unsigned int uintptr_t;
#line 139 "/usr/include/stdint.h"
typedef long long intmax_t;
#line 141 "/usr/include/stdint.h"
typedef unsigned long long uintmax_t;
#line 35 "/usr/include/inttypes.h"
typedef long __gwchar_t;
#line 288 "/usr/include/inttypes.h"
struct __anonstruct_imaxdiv_t_48 {
   long long quot ;
   long long rem ;
};
#line 288 "/usr/include/inttypes.h"
typedef struct __anonstruct_imaxdiv_t_48 imaxdiv_t;
#line 195 "/usr/include/pcre.h"
struct real_pcre;
#line 195
struct real_pcre;
#line 195
struct real_pcre;
#line 196 "/usr/include/pcre.h"
typedef struct real_pcre pcre;
#line 210 "/usr/include/pcre.h"
struct pcre_extra {
   unsigned long flags ;
   void *study_data ;
   unsigned long match_limit ;
   void *callout_data ;
   unsigned char const   *tables ;
   unsigned long match_limit_recursion ;
};
#line 210 "/usr/include/pcre.h"
typedef struct pcre_extra pcre_extra;
#line 224 "/usr/include/pcre.h"
struct pcre_callout_block {
   int version ;
   int callout_number ;
   int *offset_vector ;
   char const   *subject ;
   int subject_length ;
   int start_match ;
   int current_position ;
   int capture_top ;
   int capture_last ;
   void *callout_data ;
   int pattern_position ;
   int next_item_length ;
};
#line 224 "/usr/include/pcre.h"
typedef struct pcre_callout_block pcre_callout_block;
#line 15 "array.h"
enum __anonenum_data_type_t_49 {
    TYPE_UNSET = 0,
    TYPE_STRING = 1,
    TYPE_COUNT = 2,
    TYPE_ARRAY = 3,
    TYPE_INTEGER = 4,
    TYPE_FASTCGI = 5,
    TYPE_CONFIG = 6
} ;
#line 15 "array.h"
typedef enum __anonenum_data_type_t_49 data_type_t;
#line 26 "array.h"
struct data_unset {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
};
#line 26 "array.h"
typedef struct data_unset data_unset;
#line 30 "array.h"
struct __anonstruct_array_50 {
   data_unset **data ;
   size_t *sorted ;
   size_t used ;
   size_t size ;
   size_t unique_ndx ;
   size_t next_power_of_2 ;
   int is_weakref ;
};
#line 30 "array.h"
typedef struct __anonstruct_array_50 array;
#line 44 "array.h"
struct __anonstruct_data_count_51 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   int count ;
};
#line 44 "array.h"
typedef struct __anonstruct_data_count_51 data_count;
#line 52 "array.h"
struct __anonstruct_data_string_52 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   buffer *value ;
};
#line 52 "array.h"
typedef struct __anonstruct_data_string_52 data_string;
#line 61 "array.h"
struct __anonstruct_data_array_53 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   array *value ;
};
#line 61 "array.h"
typedef struct __anonstruct_data_array_53 data_array;
#line 72
enum __anonenum_config_cond_t_54 {
    CONFIG_COND_UNSET = 0,
    CONFIG_COND_EQ = 1,
    CONFIG_COND_MATCH = 2,
    CONFIG_COND_NE = 3,
    CONFIG_COND_NOMATCH = 4
} ;
#line 72 "array.h"
typedef enum __anonenum_config_cond_t_54 config_cond_t;
#line 83
enum __anonenum_comp_key_t_55 {
    COMP_UNSET = 0,
    COMP_SERVER_SOCKET = 1,
    COMP_HTTP_URL = 2,
    COMP_HTTP_HOST = 3,
    COMP_HTTP_REFERER = 4,
    COMP_HTTP_USERAGENT = 5,
    COMP_HTTP_COOKIE = 6,
    COMP_HTTP_REMOTEIP = 7,
    COMP_HTTP_QUERYSTRING = 8,
    COMP_LAST_ELEMENT = 9
} ;
#line 83 "array.h"
typedef enum __anonenum_comp_key_t_55 comp_key_t;
#line 102
struct _data_config;
#line 102
struct _data_config;
#line 102 "array.h"
typedef struct _data_config data_config;
#line 103 "array.h"
struct _data_config {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   array *value ;
   buffer *comp_key ;
   comp_key_t comp ;
   config_cond_t cond ;
   buffer *op ;
   int context_ndx ;
   array *childs ;
   data_config *parent ;
   data_config *prev ;
   data_config *next ;
   buffer *string ;
   pcre *regex ;
   pcre_extra *regex_study ;
};
#line 131 "array.h"
struct __anonstruct_data_integer_56 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   int value ;
};
#line 131 "array.h"
typedef struct __anonstruct_data_integer_56 data_integer;
#line 139 "array.h"
struct __anonstruct_data_fastcgi_57 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   buffer *host ;
   unsigned short port ;
   time_t disable_ts ;
   int is_disabled ;
   size_t balance ;
   int usage ;
   int last_used_ndx ;
};
#line 139 "array.h"
typedef struct __anonstruct_data_fastcgi_57 data_fastcgi;
#line 7 "chunk.h"
enum __anonenum_type_58 {
    UNUSED_CHUNK = 0,
    MEM_CHUNK = 1,
    FILE_CHUNK = 2
} ;
#line 7 "chunk.h"
struct __anonstruct_mmap_60 {
   char *start ;
   size_t length ;
   off_t offset ;
};
#line 7 "chunk.h"
struct __anonstruct_file_59 {
   buffer *name ;
   off_t start ;
   off_t length ;
   int fd ;
   struct __anonstruct_mmap_60 mmap ;
   int is_temp ;
};
#line 7 "chunk.h"
struct chunk {
   enum __anonenum_type_58 type ;
   buffer *mem ;
   struct __anonstruct_file_59 file ;
   off_t offset ;
   struct chunk *next ;
};
#line 7 "chunk.h"
typedef struct chunk chunk;
#line 37 "chunk.h"
struct __anonstruct_chunkqueue_61 {
   chunk *first ;
   chunk *last ;
   chunk *unused ;
   size_t unused_chunks ;
   array *tempdirs ;
   off_t bytes_in ;
   off_t bytes_out ;
};
#line 37 "chunk.h"
typedef struct __anonstruct_chunkqueue_61 chunkqueue;
#line 12 "keyvalue.h"
enum __anonenum_http_method_t_62 {
    HTTP_METHOD_UNSET = -1,
    HTTP_METHOD_GET = 0,
    HTTP_METHOD_POST = 1,
    HTTP_METHOD_HEAD = 2,
    HTTP_METHOD_OPTIONS = 3,
    HTTP_METHOD_PROPFIND = 4,
    HTTP_METHOD_MKCOL = 5,
    HTTP_METHOD_PUT = 6,
    HTTP_METHOD_DELETE = 7,
    HTTP_METHOD_COPY = 8,
    HTTP_METHOD_MOVE = 9,
    HTTP_METHOD_PROPPATCH = 10,
    HTTP_METHOD_REPORT = 11,
    HTTP_METHOD_CHECKOUT = 12,
    HTTP_METHOD_CHECKIN = 13,
    HTTP_METHOD_VERSION_CONTROL = 14,
    HTTP_METHOD_UNCHECKOUT = 15,
    HTTP_METHOD_MKACTIVITY = 16,
    HTTP_METHOD_MERGE = 17,
    HTTP_METHOD_LOCK = 18,
    HTTP_METHOD_UNLOCK = 19,
    HTTP_METHOD_LABEL = 20,
    HTTP_METHOD_CONNECT = 21
} ;
#line 12 "keyvalue.h"
typedef enum __anonenum_http_method_t_62 http_method_t;
#line 38
enum __anonenum_http_version_t_63 {
    HTTP_VERSION_UNSET = -1,
    HTTP_VERSION_1_0 = 0,
    HTTP_VERSION_1_1 = 1
} ;
#line 38 "keyvalue.h"
typedef enum __anonenum_http_version_t_63 http_version_t;
#line 40 "keyvalue.h"
struct __anonstruct_keyvalue_64 {
   int key ;
   char *value ;
};
#line 40 "keyvalue.h"
typedef struct __anonstruct_keyvalue_64 keyvalue;
#line 46 "keyvalue.h"
struct __anonstruct_s_keyvalue_65 {
   char *key ;
   char *value ;
};
#line 46 "keyvalue.h"
typedef struct __anonstruct_s_keyvalue_65 s_keyvalue;
#line 52 "keyvalue.h"
struct __anonstruct_pcre_keyvalue_66 {
   pcre *key ;
   pcre_extra *key_extra ;
   buffer *value ;
};
#line 52 "keyvalue.h"
typedef struct __anonstruct_pcre_keyvalue_66 pcre_keyvalue;
#line 61
enum __anonenum_httpauth_type_67 {
    HTTP_AUTH_BASIC = 0,
    HTTP_AUTH_DIGEST = 1
} ;
#line 61 "keyvalue.h"
typedef enum __anonenum_httpauth_type_67 httpauth_type;
#line 63 "keyvalue.h"
struct __anonstruct_httpauth_keyvalue_68 {
   char *key ;
   char *realm ;
   httpauth_type type ;
};
#line 63 "keyvalue.h"
typedef struct __anonstruct_httpauth_keyvalue_68 httpauth_keyvalue;
#line 77 "keyvalue.h"
struct __anonstruct_keyvalue_buffer_69 {
   keyvalue **kv ;
   size_t used ;
   size_t size ;
};
#line 77 "keyvalue.h"
typedef struct __anonstruct_keyvalue_buffer_69 keyvalue_buffer;
#line 78 "keyvalue.h"
struct __anonstruct_s_keyvalue_buffer_70 {
   s_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
#line 78 "keyvalue.h"
typedef struct __anonstruct_s_keyvalue_buffer_70 s_keyvalue_buffer;
#line 79 "keyvalue.h"
struct __anonstruct_httpauth_keyvalue_buffer_71 {
   httpauth_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
#line 79 "keyvalue.h"
typedef struct __anonstruct_httpauth_keyvalue_buffer_71 httpauth_keyvalue_buffer;
#line 80 "keyvalue.h"
struct __anonstruct_pcre_keyvalue_buffer_72 {
   pcre_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
#line 80 "keyvalue.h"
typedef struct __anonstruct_pcre_keyvalue_buffer_72 pcre_keyvalue_buffer;
#line 152 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef int ptrdiff_t;
#line 6 "bitset.h"
struct __anonstruct_bitset_73 {
   size_t *bits ;
   size_t nbits ;
};
#line 6 "bitset.h"
typedef struct __anonstruct_bitset_73 bitset;
#line 34 "/usr/include/sys/epoll.h"
enum EPOLL_EVENTS {
    EPOLLIN = 1,
    EPOLLPRI = 2,
    EPOLLOUT = 4,
    EPOLLRDNORM = 64,
    EPOLLRDBAND = 128,
    EPOLLWRNORM = 256,
    EPOLLWRBAND = 512,
    EPOLLMSG = 1024,
    EPOLLERR = 8,
    EPOLLHUP = 16,
    EPOLLONESHOT = 1073741824,
    EPOLLET = (-0x7FFFFFFF-1)
} ;
#line 69 "/usr/include/sys/epoll.h"
union epoll_data {
   void *ptr ;
   int fd ;
   uint32_t u32 ;
   uint64_t u64 ;
};
#line 69 "/usr/include/sys/epoll.h"
typedef union epoll_data epoll_data_t;
#line 77 "/usr/include/sys/epoll.h"
struct epoll_event {
   uint32_t events ;
   epoll_data_t data ;
};
#line 37 "/usr/include/sys/poll.h"
typedef unsigned long nfds_t;
#line 40 "/usr/include/sys/poll.h"
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
#line 61 "fdevent.h"
typedef handler_t (*fdevent_handler)(void *srv , void *ctx , int revents );
#line 70
enum __anonenum_fd_event_t_74 {
    FD_EVENT_TYPE_UNSET = -1,
    FD_EVENT_TYPE_CONNECTION = 0,
    FD_EVENT_TYPE_FCGI_CONNECTION = 1,
    FD_EVENT_TYPE_DIRWATCH = 2,
    FD_EVENT_TYPE_CGI_CONNECTION = 3
} ;
#line 70 "fdevent.h"
typedef enum __anonenum_fd_event_t_74 fd_event_t;
#line 77
enum __anonenum_fdevent_handler_t_75 {
    FDEVENT_HANDLER_UNSET = 0,
    FDEVENT_HANDLER_SELECT = 1,
    FDEVENT_HANDLER_POLL = 2,
    FDEVENT_HANDLER_LINUX_RTSIG = 3,
    FDEVENT_HANDLER_LINUX_SYSEPOLL = 4,
    FDEVENT_HANDLER_SOLARIS_DEVPOLL = 5,
    FDEVENT_HANDLER_FREEBSD_KQUEUE = 6,
    FDEVENT_HANDLER_SOLARIS_PORT = 7
} ;
#line 77 "fdevent.h"
typedef enum __anonenum_fdevent_handler_t_75 fdevent_handler_t;
#line 91 "fdevent.h"
struct __anonstruct_fd_conn_76 {
   int fd ;
   void *conn ;
   fd_event_t fd_type ;
   int events ;
   int revents ;
};
#line 91 "fdevent.h"
typedef struct __anonstruct_fd_conn_76 fd_conn;
#line 99 "fdevent.h"
struct __anonstruct_fd_conn_buffer_77 {
   fd_conn *ptr ;
   size_t size ;
   size_t used ;
};
#line 99 "fdevent.h"
typedef struct __anonstruct_fd_conn_buffer_77 fd_conn_buffer;
#line 111 "fdevent.h"
struct _fdnode {
   handler_t (*handler)(void *srv , void *ctx , int revents ) ;
   void *ctx ;
   int fd ;
   struct _fdnode *prev ;
   struct _fdnode *next ;
};
#line 111 "fdevent.h"
typedef struct _fdnode fdnode;
#line 119 "fdevent.h"
struct __anonstruct_buffer_int_78 {
   int *ptr ;
   size_t used ;
   size_t size ;
};
#line 119 "fdevent.h"
typedef struct __anonstruct_buffer_int_78 buffer_int;
#line 130 "fdevent.h"
struct fdevents {
   fdevent_handler_t type ;
   fdnode **fdarray ;
   size_t maxfds ;
   int in_sigio ;
   int signum ;
   sigset_t sigset ;
   siginfo_t siginfo ;
   bitset *sigbset ;
   int epoll_fd ;
   struct epoll_event *epoll_events ;
   struct pollfd *pollfds ;
   size_t size ;
   size_t used ;
   buffer_int unused ;
   fd_set select_read ;
   fd_set select_write ;
   fd_set select_error ;
   fd_set select_set_read ;
   fd_set select_set_write ;
   fd_set select_set_error ;
   int select_max_fd ;
   int (*reset)(struct fdevents *ev ) ;
   void (*free)(struct fdevents *ev ) ;
   int (*event_add)(struct fdevents *ev , int fde_ndx , int fd , int events ) ;
   int (*event_del)(struct fdevents *ev , int fde_ndx , int fd ) ;
   int (*event_get_revent)(struct fdevents *ev , size_t ndx ) ;
   int (*event_get_fd)(struct fdevents *ev , size_t ndx ) ;
   int (*event_next_fdndx)(struct fdevents *ev , int ndx ) ;
   int (*poll)(struct fdevents *ev , int timeout_ms ) ;
   int (*fcntl_set)(struct fdevents *ev , int fd ) ;
};
#line 130 "fdevent.h"
typedef struct fdevents fdevents;
#line 44 "/usr/include/bits/uio.h"
struct iovec {
   void *iov_base ;
   size_t iov_len ;
};
#line 42 "/usr/include/bits/socket.h"
enum __socket_type {
    SOCK_STREAM = 1,
    SOCK_DGRAM = 2,
    SOCK_RAW = 3,
    SOCK_RDM = 4,
    SOCK_SEQPACKET = 5,
    SOCK_PACKET = 10
} ;
#line 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short sa_family_t;
#line 146 "/usr/include/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
#line 163 "/usr/include/bits/socket.h"
struct sockaddr_storage {
   sa_family_t ss_family ;
   __uint32_t __ss_align ;
   char __ss_padding[128U - 2U * sizeof(__uint32_t )] ;
};
#line 172
enum __anonenum_79 {
    MSG_OOB = 1,
    MSG_PEEK = 2,
    MSG_DONTROUTE = 4,
    MSG_CTRUNC = 8,
    MSG_PROXY = 16,
    MSG_TRUNC = 32,
    MSG_DONTWAIT = 64,
    MSG_EOR = 128,
    MSG_WAITALL = 256,
    MSG_FIN = 512,
    MSG_SYN = 1024,
    MSG_CONFIRM = 2048,
    MSG_RST = 4096,
    MSG_ERRQUEUE = 8192,
    MSG_NOSIGNAL = 16384,
    MSG_MORE = 32768
} ;
#line 216 "/usr/include/bits/socket.h"
struct msghdr {
   void *msg_name ;
   socklen_t msg_namelen ;
   struct iovec *msg_iov ;
   size_t msg_iovlen ;
   void *msg_control ;
   size_t msg_controllen ;
   int msg_flags ;
};
#line 234 "/usr/include/bits/socket.h"
struct cmsghdr {
   size_t cmsg_len ;
   int cmsg_level ;
   int cmsg_type ;
   unsigned char __cmsg_data[] ;
};
#line 291
enum __anonenum_80 {
    SCM_RIGHTS = 1,
    SCM_CREDENTIALS = 2
} ;
#line 303 "/usr/include/bits/socket.h"
struct ucred {
   pid_t pid ;
   uid_t uid ;
   gid_t gid ;
};
#line 315 "/usr/include/bits/socket.h"
struct linger {
   int l_onoff ;
   int l_linger ;
};
#line 40 "/usr/include/sys/socket.h"
struct osockaddr {
   unsigned short sa_family ;
   unsigned char sa_data[14] ;
};
#line 49
enum __anonenum_81 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;
#line 28 "/usr/include/bits/ioctl-types.h"
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
#line 37 "/usr/include/bits/ioctl-types.h"
struct termio {
   unsigned short c_iflag ;
   unsigned short c_oflag ;
   unsigned short c_cflag ;
   unsigned short c_lflag ;
   unsigned char c_line ;
   unsigned char c_cc[8] ;
};
#line 31 "/usr/include/netinet/in.h"
enum __anonenum_82 {
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
    IPPROTO_MAX = 256
} ;
#line 92 "/usr/include/netinet/in.h"
typedef uint16_t in_port_t;
#line 95
enum __anonenum_83 {
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
} ;
#line 136 "/usr/include/netinet/in.h"
typedef uint32_t in_addr_t;
#line 137 "/usr/include/netinet/in.h"
struct in_addr {
   in_addr_t s_addr ;
};
#line 193 "/usr/include/netinet/in.h"
union __anonunion_in6_u_84 {
   uint8_t u6_addr8[16] ;
   uint16_t u6_addr16[8] ;
   uint32_t u6_addr32[4] ;
};
#line 193 "/usr/include/netinet/in.h"
struct in6_addr {
   union __anonunion_in6_u_84 in6_u ;
};
#line 219 "/usr/include/netinet/in.h"
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};
#line 233 "/usr/include/netinet/in.h"
struct sockaddr_in6 {
   sa_family_t sin6_family ;
   in_port_t sin6_port ;
   uint32_t sin6_flowinfo ;
   struct in6_addr sin6_addr ;
   uint32_t sin6_scope_id ;
};
#line 244 "/usr/include/netinet/in.h"
struct ip_mreq {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
};
#line 253 "/usr/include/netinet/in.h"
struct ip_mreq_source {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
   struct in_addr imr_sourceaddr ;
};
#line 266 "/usr/include/netinet/in.h"
struct ipv6_mreq {
   struct in6_addr ipv6mr_multiaddr ;
   unsigned int ipv6mr_interface ;
};
#line 277 "/usr/include/netinet/in.h"
struct group_req {
   uint32_t gr_interface ;
   struct sockaddr_storage gr_group ;
};
#line 286 "/usr/include/netinet/in.h"
struct group_source_req {
   uint32_t gsr_interface ;
   struct sockaddr_storage gsr_group ;
   struct sockaddr_storage gsr_source ;
};
#line 300 "/usr/include/netinet/in.h"
struct ip_msfilter {
   struct in_addr imsf_multiaddr ;
   struct in_addr imsf_interface ;
   uint32_t imsf_fmode ;
   uint32_t imsf_numsrc ;
   struct in_addr imsf_slist[1] ;
};
#line 321 "/usr/include/netinet/in.h"
struct group_filter {
   uint32_t gf_interface ;
   struct sockaddr_storage gf_group ;
   uint32_t gf_fmode ;
   uint32_t gf_numsrc ;
   struct sockaddr_storage gf_slist[1] ;
};
#line 82 "/usr/include/bits/in.h"
struct ip_opts {
   struct in_addr ip_dst ;
   char ip_opts[40] ;
};
#line 89 "/usr/include/bits/in.h"
struct ip_mreqn {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_address ;
   int imr_ifindex ;
};
#line 97 "/usr/include/bits/in.h"
struct in_pktinfo {
   int ipi_ifindex ;
   struct in_addr ipi_spec_dst ;
   struct in_addr ipi_addr ;
};
#line 456 "/usr/include/netinet/in.h"
struct in6_pktinfo {
   struct in6_addr ipi6_addr ;
   unsigned int ipi6_ifindex ;
};
#line 463 "/usr/include/netinet/in.h"
struct ip6_mtuinfo {
   struct sockaddr_in6 ip6m_addr ;
   uint32_t ip6m_mtu ;
};
#line 90 "/usr/include/netinet/tcp.h"
struct tcphdr {
   u_int16_t source ;
   u_int16_t dest ;
   u_int32_t seq ;
   u_int32_t ack_seq ;
   u_int16_t res1 : 4 ;
   u_int16_t doff : 4 ;
   u_int16_t fin : 1 ;
   u_int16_t syn : 1 ;
   u_int16_t rst : 1 ;
   u_int16_t psh : 1 ;
   u_int16_t ack : 1 ;
   u_int16_t urg : 1 ;
   u_int16_t res2 : 2 ;
   u_int16_t window ;
   u_int16_t check ;
   u_int16_t urg_ptr ;
};
#line 125
enum __anonenum_85 {
    TCP_ESTABLISHED = 1,
    TCP_SYN_SENT = 2,
    TCP_SYN_RECV = 3,
    TCP_FIN_WAIT1 = 4,
    TCP_FIN_WAIT2 = 5,
    TCP_TIME_WAIT = 6,
    TCP_CLOSE = 7,
    TCP_CLOSE_WAIT = 8,
    TCP_LAST_ACK = 9,
    TCP_LISTEN = 10,
    TCP_CLOSING = 11
} ;
#line 177
enum tcp_ca_state {
    TCP_CA_Open = 0,
    TCP_CA_Disorder = 1,
    TCP_CA_CWR = 2,
    TCP_CA_Recovery = 3,
    TCP_CA_Loss = 4
} ;
#line 186 "/usr/include/netinet/tcp.h"
struct tcp_info {
   u_int8_t tcpi_state ;
   u_int8_t tcpi_ca_state ;
   u_int8_t tcpi_retransmits ;
   u_int8_t tcpi_probes ;
   u_int8_t tcpi_backoff ;
   u_int8_t tcpi_options ;
   u_int8_t tcpi_snd_wscale : 4 ;
   u_int8_t tcpi_rcv_wscale : 4 ;
   u_int32_t tcpi_rto ;
   u_int32_t tcpi_ato ;
   u_int32_t tcpi_snd_mss ;
   u_int32_t tcpi_rcv_mss ;
   u_int32_t tcpi_unacked ;
   u_int32_t tcpi_sacked ;
   u_int32_t tcpi_lost ;
   u_int32_t tcpi_retrans ;
   u_int32_t tcpi_fackets ;
   u_int32_t tcpi_last_data_sent ;
   u_int32_t tcpi_last_ack_sent ;
   u_int32_t tcpi_last_data_recv ;
   u_int32_t tcpi_last_ack_recv ;
   u_int32_t tcpi_pmtu ;
   u_int32_t tcpi_rcv_ssthresh ;
   u_int32_t tcpi_rtt ;
   u_int32_t tcpi_rttvar ;
   u_int32_t tcpi_snd_ssthresh ;
   u_int32_t tcpi_snd_cwnd ;
   u_int32_t tcpi_advmss ;
   u_int32_t tcpi_reordering ;
};
#line 30 "/usr/include/sys/un.h"
struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
};
#line 46 "/usr/include/rpc/netdb.h"
struct rpcent {
   char *r_name ;
   char **r_aliases ;
   int r_number ;
};
#line 27 "/usr/include/bits/netdb.h"
struct netent {
   char *n_name ;
   char **n_aliases ;
   int n_addrtype ;
   uint32_t n_net ;
};
#line 96 "/usr/include/netdb.h"
struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};
#line 251 "/usr/include/netdb.h"
struct servent {
   char *s_name ;
   char **s_aliases ;
   int s_port ;
   char *s_proto ;
};
#line 321 "/usr/include/netdb.h"
struct protoent {
   char *p_name ;
   char **p_aliases ;
   int p_proto ;
};
#line 538 "/usr/include/netdb.h"
struct addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct addrinfo *ai_next ;
};
#line 4 "splaytree.h"
struct tree_node {
   struct tree_node *left ;
   struct tree_node *right ;
   int key ;
   int size ;
   void *data ;
};
#line 4 "splaytree.h"
typedef struct tree_node splay_tree;
#line 10 "etag.h"
enum __anonenum_etag_flags_t_86 {
    ETAG_USE_INODE = 1,
    ETAG_USE_MTIME = 2,
    ETAG_USE_SIZE = 4
} ;
#line 10 "etag.h"
typedef enum __anonenum_etag_flags_t_86 etag_flags_t;
#line 84 "base.h"
enum __anonenum_config_values_type_t_87 {
    T_CONFIG_UNSET = 0,
    T_CONFIG_STRING = 1,
    T_CONFIG_SHORT = 2,
    T_CONFIG_BOOLEAN = 3,
    T_CONFIG_ARRAY = 4,
    T_CONFIG_LOCAL = 5,
    T_CONFIG_DEPRECATED = 6,
    T_CONFIG_UNSUPPORTED = 7
} ;
#line 84 "base.h"
typedef enum __anonenum_config_values_type_t_87 config_values_type_t;
#line 94
enum __anonenum_config_scope_type_t_88 {
    T_CONFIG_SCOPE_UNSET = 0,
    T_CONFIG_SCOPE_SERVER = 1,
    T_CONFIG_SCOPE_CONNECTION = 2
} ;
#line 94 "base.h"
typedef enum __anonenum_config_scope_type_t_88 config_scope_type_t;
#line 99 "base.h"
struct __anonstruct_config_values_t_89 {
   char const   *key ;
   void *destination ;
   config_values_type_t type ;
   config_scope_type_t scope ;
};
#line 99 "base.h"
typedef struct __anonstruct_config_values_t_89 config_values_t;
#line 107
enum __anonenum_connection_type_90 {
    DIRECT = 0,
    EXTERNAL = 1
} ;
#line 107 "base.h"
typedef enum __anonenum_connection_type_90 connection_type;
#line 109 "base.h"
struct __anonstruct_request_handler_91 {
   char *key ;
   connection_type type ;
   char *value ;
};
#line 109 "base.h"
typedef struct __anonstruct_request_handler_91 request_handler;
#line 115 "base.h"
struct __anonstruct_fcgi_connections_92 {
   char *key ;
   char *host ;
   unsigned short port ;
   int used ;
   short factor ;
};
#line 115 "base.h"
typedef struct __anonstruct_fcgi_connections_92 fcgi_connections;
#line 124 "base.h"
union __anonunion_sock_addr_93 {
   struct sockaddr_in6 ipv6 ;
   struct sockaddr_in ipv4 ;
   struct sockaddr_un un ;
   struct sockaddr plain ;
};
#line 124 "base.h"
typedef union __anonunion_sock_addr_93 sock_addr;
#line 142 "base.h"
struct __anonstruct_request_94 {
   buffer *request ;
   buffer *uri ;
   buffer *orig_uri ;
   http_method_t http_method ;
   http_version_t http_version ;
   buffer *request_line ;
   buffer *http_host ;
   char const   *http_range ;
   char const   *http_content_type ;
   char const   *http_if_modified_since ;
   char const   *http_if_none_match ;
   array *headers ;
   size_t content_length ;
   int accept_encoding ;
   buffer *pathinfo ;
};
#line 142 "base.h"
typedef struct __anonstruct_request_94 request;
#line 174
enum __anonenum_transfer_encoding_96 {
    HTTP_TRANSFER_ENCODING_IDENTITY = 0,
    HTTP_TRANSFER_ENCODING_CHUNKED = 1
} ;
#line 174 "base.h"
struct __anonstruct_response_95 {
   off_t content_length ;
   int keep_alive ;
   array *headers ;
   enum __anonenum_transfer_encoding_96 transfer_encoding ;
};
#line 174 "base.h"
typedef struct __anonstruct_response_95 response;
#line 185 "base.h"
struct __anonstruct_request_uri_97 {
   buffer *scheme ;
   buffer *authority ;
   buffer *path ;
   buffer *path_raw ;
   buffer *query ;
};
#line 185 "base.h"
typedef struct __anonstruct_request_uri_97 request_uri;
#line 193 "base.h"
struct __anonstruct_physical_98 {
   buffer *path ;
   buffer *basedir ;
   buffer *doc_root ;
   buffer *rel_path ;
   buffer *etag ;
};
#line 193 "base.h"
typedef struct __anonstruct_physical_98 physical;
#line 203 "base.h"
struct __anonstruct_stat_cache_entry_99 {
   buffer *name ;
   buffer *etag ;
   struct stat st ;
   time_t stat_ts ;
   char is_symlink ;
   buffer *content_type ;
};
#line 203 "base.h"
typedef struct __anonstruct_stat_cache_entry_99 stat_cache_entry;
#line 223 "base.h"
struct __anonstruct_stat_cache_100 {
   splay_tree *files ;
   buffer *dir_name ;
   buffer *hash_key ;
};
#line 223 "base.h"
typedef struct __anonstruct_stat_cache_100 stat_cache;
#line 236 "base.h"
struct __anonstruct_specific_config_101 {
   array *mimetypes ;
   buffer *document_root ;
   buffer *server_name ;
   buffer *error_handler ;
   buffer *server_tag ;
   buffer *dirlist_encoding ;
   buffer *errorfile_prefix ;
   unsigned short max_keep_alive_requests ;
   unsigned short max_keep_alive_idle ;
   unsigned short max_read_idle ;
   unsigned short max_write_idle ;
   unsigned short use_xattr ;
   unsigned short follow_symlink ;
   unsigned short range_requests ;
   unsigned short log_file_not_found ;
   unsigned short log_request_header ;
   unsigned short log_request_handling ;
   unsigned short log_response_header ;
   unsigned short log_condition_handling ;
   buffer *ssl_pemfile ;
   buffer *ssl_ca_file ;
   buffer *ssl_cipher_list ;
   unsigned short ssl_use_sslv2 ;
   unsigned short use_ipv6 ;
   unsigned short is_ssl ;
   unsigned short allow_http11 ;
   unsigned short etag_use_inode ;
   unsigned short etag_use_mtime ;
   unsigned short etag_use_size ;
   unsigned short force_lowercase_filenames ;
   unsigned short max_request_size ;
   unsigned short kbytes_per_second ;
   unsigned short global_kbytes_per_second ;
   off_t global_bytes_per_second_cnt ;
   off_t *global_bytes_per_second_cnt_ptr ;
};
#line 236 "base.h"
typedef struct __anonstruct_specific_config_101 specific_config;
#line 307
enum __anonenum_connection_state_t_102 {
    CON_STATE_CONNECT = 0,
    CON_STATE_REQUEST_START = 1,
    CON_STATE_READ = 2,
    CON_STATE_REQUEST_END = 3,
    CON_STATE_READ_POST = 4,
    CON_STATE_HANDLE_REQUEST = 5,
    CON_STATE_RESPONSE_START = 6,
    CON_STATE_WRITE = 7,
    CON_STATE_RESPONSE_END = 8,
    CON_STATE_ERROR = 9,
    CON_STATE_CLOSE = 10
} ;
#line 307 "base.h"
typedef enum __anonenum_connection_state_t_102 connection_state_t;
#line 321
enum __anonenum_cond_result_t_103 {
    COND_RESULT_UNSET = 0,
    COND_RESULT_FALSE = 1,
    COND_RESULT_TRUE = 2
} ;
#line 321 "base.h"
typedef enum __anonenum_cond_result_t_103 cond_result_t;
#line 322 "base.h"
struct __anonstruct_cond_cache_t_104 {
   cond_result_t result ;
   int patterncount ;
   int matches[30] ;
   buffer *comp_value ;
   comp_key_t comp_type ;
};
#line 322 "base.h"
typedef struct __anonstruct_cond_cache_t_104 cond_cache_t;
#line 331 "base.h"
struct __anonstruct_connection_105 {
   connection_state_t state ;
   time_t read_idle_ts ;
   time_t close_timeout_ts ;
   time_t write_request_ts ;
   time_t connection_start ;
   time_t request_start ;
   struct timeval start_tv ;
   size_t request_count ;
   size_t loops_per_request ;
   int fd ;
   int fde_ndx ;
   int ndx ;
   int is_readable ;
   int is_writable ;
   int keep_alive ;
   int file_started ;
   int file_finished ;
   chunkqueue *write_queue ;
   chunkqueue *read_queue ;
   chunkqueue *request_content_queue ;
   int traffic_limit_reached ;
   off_t bytes_written ;
   off_t bytes_written_cur_second ;
   off_t bytes_read ;
   off_t bytes_header ;
   int http_status ;
   sock_addr dst_addr ;
   buffer *dst_addr_buf ;
   buffer *parse_request ;
   unsigned int parsed_response ;
   request request ;
   request_uri uri ;
   physical physical ;
   response response ;
   size_t header_len ;
   buffer *authed_user ;
   array *environment ;
   int got_response ;
   int in_joblist ;
   connection_type mode ;
   void **plugin_ctx ;
   specific_config conf ;
   cond_cache_t *cond_cache ;
   buffer *server_name ;
   buffer *error_handler ;
   int error_handler_saved_status ;
   int in_error_handler ;
   void *srv_socket ;
   etag_flags_t etag_flags ;
   int conditional_is_valid[9] ;
};
#line 331 "base.h"
typedef struct __anonstruct_connection_105 connection;
#line 425 "base.h"
struct __anonstruct_connections_106 {
   connection **ptr ;
   size_t size ;
   size_t used ;
};
#line 425 "base.h"
typedef struct __anonstruct_connections_106 connections;
#line 433 "base.h"
union __anonunion_addr_108 {
   struct in6_addr ipv6 ;
   struct in_addr ipv4 ;
};
#line 433 "base.h"
struct __anonstruct_inet_ntop_cache_type_107 {
   int family ;
   union __anonunion_addr_108 addr ;
   char b2[47] ;
   time_t ts ;
};
#line 433 "base.h"
typedef struct __anonstruct_inet_ntop_cache_type_107 inet_ntop_cache_type;
#line 445 "base.h"
struct __anonstruct_realpath_cache_type_109 {
   buffer *uri ;
   time_t mtime ;
   int http_status ;
};
#line 445 "base.h"
typedef struct __anonstruct_realpath_cache_type_109 realpath_cache_type;
#line 451 "base.h"
struct __anonstruct_mtime_cache_type_110 {
   time_t mtime ;
   buffer *str ;
};
#line 451 "base.h"
typedef struct __anonstruct_mtime_cache_type_110 mtime_cache_type;
#line 456 "base.h"
struct __anonstruct_buffer_plugin_111 {
   void *ptr ;
   size_t used ;
   size_t size ;
};
#line 456 "base.h"
typedef struct __anonstruct_buffer_plugin_111 buffer_plugin;
#line 462
enum __anonenum_stat_cache_engine_113 {
    STAT_CACHE_ENGINE_UNSET = 0,
    STAT_CACHE_ENGINE_NONE = 1,
    STAT_CACHE_ENGINE_SIMPLE = 2
} ;
#line 462 "base.h"
struct __anonstruct_server_config_112 {
   unsigned short port ;
   buffer *bindhost ;
   buffer *errorlog_file ;
   unsigned short errorlog_use_syslog ;
   unsigned short dont_daemonize ;
   buffer *changeroot ;
   buffer *username ;
   buffer *groupname ;
   buffer *pid_file ;
   buffer *event_handler ;
   buffer *modules_dir ;
   buffer *network_backend ;
   array *modules ;
   array *upload_tempdirs ;
   unsigned short max_worker ;
   unsigned short max_fds ;
   unsigned short max_conns ;
   unsigned short max_request_size ;
   unsigned short log_request_header_on_error ;
   unsigned short log_state_handling ;
   enum __anonenum_stat_cache_engine_113 stat_cache_engine ;
   unsigned short enable_cores ;
};
#line 462 "base.h"
typedef struct __anonstruct_server_config_112 server_config;
#line 501 "base.h"
struct __anonstruct_server_socket_114 {
   sock_addr addr ;
   int fd ;
   int fde_ndx ;
   buffer *ssl_pemfile ;
   buffer *ssl_ca_file ;
   buffer *ssl_cipher_list ;
   unsigned short ssl_use_sslv2 ;
   unsigned short use_ipv6 ;
   unsigned short is_ssl ;
   buffer *srv_token ;
};
#line 501 "base.h"
typedef struct __anonstruct_server_socket_114 server_socket;
#line 520 "base.h"
struct __anonstruct_server_socket_array_115 {
   server_socket **ptr ;
   size_t size ;
   size_t used ;
};
#line 520 "base.h"
typedef struct __anonstruct_server_socket_array_115 server_socket_array;
#line 527
enum __anonenum_errorlog_mode_116 {
    ERRORLOG_STDERR = 0,
    ERRORLOG_FILE = 1,
    ERRORLOG_SYSLOG = 2
} ;
#line 527 "base.h"
struct server {
   server_socket_array srv_sockets ;
   int errorlog_fd ;
   enum __anonenum_errorlog_mode_116 errorlog_mode ;
   buffer *errorlog_buf ;
   fdevents *ev ;
   fdevents *ev_ins ;
   buffer_plugin plugins ;
   void *plugin_slots ;
   int con_opened ;
   int con_read ;
   int con_written ;
   int con_closed ;
   int ssl_is_init ;
   int max_fds ;
   int cur_fds ;
   int want_fds ;
   int sockets_disabled ;
   size_t max_conns ;
   buffer *parse_full_path ;
   buffer *response_header ;
   buffer *response_range ;
   buffer *tmp_buf ;
   buffer *tmp_chunk_len ;
   buffer *empty_string ;
   buffer *cond_check_buf ;
   inet_ntop_cache_type inet_ntop_cache[4] ;
   mtime_cache_type mtime_cache[16] ;
   array *split_vals ;
   time_t cur_ts ;
   time_t last_generated_date_ts ;
   time_t last_generated_debug_ts ;
   time_t startup_ts ;
   buffer *ts_debug_str ;
   buffer *ts_date_str ;
   array *config ;
   array *config_touched ;
   array *config_context ;
   specific_config **config_storage ;
   server_config srvconf ;
   short config_deprecated ;
   short config_unsupported ;
   connections *conns ;
   connections *joblist ;
   connections *fdwaitqueue ;
   stat_cache *stat_cache ;
   array *status ;
   fdevent_handler_t event_handler ;
   int (*network_backend_write)(struct server *srv , connection *con , int fd ,
                                chunkqueue *cq ) ;
   int (*network_backend_read)(struct server *srv , connection *con , int fd ,
                               chunkqueue *cq ) ;
   uid_t uid ;
   gid_t gid ;
};
#line 527 "base.h"
typedef struct server server;
#line 6 "server.h"
struct __anonstruct_two_strings_117 {
   char *key ;
   char *value ;
};
#line 6 "server.h"
typedef struct __anonstruct_two_strings_117 two_strings;
#line 11
enum __anonenum_config_var_t_118 {
    CONFIG_UNSET = 0,
    CONFIG_DOCUMENT_ROOT = 1
} ;
#line 11 "server.h"
typedef enum __anonenum_config_var_t_118 config_var_t;
#line 61 "/usr/include/time.h"
typedef __clock_t clock_t;
#line 134 "/usr/include/time.h"
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const   *tm_zone ;
};
#line 162 "/usr/include/time.h"
struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};
#line 169
struct sigevent;
#line 29 "plugin.h"
struct __anonstruct_plugin_119 {
   size_t version ;
   buffer *name ;
   void *(*init)() ;
   handler_t (*set_defaults)(server *srv , void *p_d ) ;
   handler_t (*cleanup)(server *srv , void *p_d ) ;
   handler_t (*handle_trigger)(server *srv , void *p_d ) ;
   handler_t (*handle_sighup)(server *srv , void *p_d ) ;
   handler_t (*handle_uri_raw)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_uri_clean)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_docroot)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_physical)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_request_done)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_connection_close)(server *srv , connection *con ,
                                        void *p_d ) ;
   handler_t (*handle_joblist)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_subrequest_start)(server *srv , connection *con ,
                                        void *p_d ) ;
   handler_t (*handle_subrequest)(server *srv , connection *con , void *p_d ) ;
   handler_t (*connection_reset)(server *srv , connection *con , void *p_d ) ;
   void *data ;
   void *lib ;
};
#line 29 "plugin.h"
typedef struct __anonstruct_plugin_119 plugin;
#line 23 "fastcgi.h"
struct __anonstruct_FCGI_Header_120 {
   unsigned char version ;
   unsigned char type ;
   unsigned char requestIdB1 ;
   unsigned char requestIdB0 ;
   unsigned char contentLengthB1 ;
   unsigned char contentLengthB0 ;
   unsigned char paddingLength ;
   unsigned char reserved ;
};
#line 23 "fastcgi.h"
typedef struct __anonstruct_FCGI_Header_120 FCGI_Header;
#line 69 "fastcgi.h"
struct __anonstruct_FCGI_BeginRequestBody_121 {
   unsigned char roleB1 ;
   unsigned char roleB0 ;
   unsigned char flags ;
   unsigned char reserved[5] ;
};
#line 69 "fastcgi.h"
typedef struct __anonstruct_FCGI_BeginRequestBody_121 FCGI_BeginRequestBody;
#line 76 "fastcgi.h"
struct __anonstruct_FCGI_BeginRequestRecord_122 {
   FCGI_Header header ;
   FCGI_BeginRequestBody body ;
};
#line 76 "fastcgi.h"
typedef struct __anonstruct_FCGI_BeginRequestRecord_122 FCGI_BeginRequestRecord;
#line 94 "fastcgi.h"
struct __anonstruct_FCGI_EndRequestBody_123 {
   unsigned char appStatusB3 ;
   unsigned char appStatusB2 ;
   unsigned char appStatusB1 ;
   unsigned char appStatusB0 ;
   unsigned char protocolStatus ;
   unsigned char reserved[3] ;
};
#line 94 "fastcgi.h"
typedef struct __anonstruct_FCGI_EndRequestBody_123 FCGI_EndRequestBody;
#line 103 "fastcgi.h"
struct __anonstruct_FCGI_EndRequestRecord_124 {
   FCGI_Header header ;
   FCGI_EndRequestBody body ;
};
#line 103 "fastcgi.h"
typedef struct __anonstruct_FCGI_EndRequestRecord_124 FCGI_EndRequestRecord;
#line 125 "fastcgi.h"
struct __anonstruct_FCGI_UnknownTypeBody_125 {
   unsigned char type ;
   unsigned char reserved[7] ;
};
#line 125 "fastcgi.h"
typedef struct __anonstruct_FCGI_UnknownTypeBody_125 FCGI_UnknownTypeBody;
#line 130 "fastcgi.h"
struct __anonstruct_FCGI_UnknownTypeRecord_126 {
   FCGI_Header header ;
   FCGI_UnknownTypeBody body ;
};
#line 130 "fastcgi.h"
typedef struct __anonstruct_FCGI_UnknownTypeRecord_126 FCGI_UnknownTypeRecord;
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 65 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE;
#line 355 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned int wint_t;
#line 76 "/usr/include/wchar.h"
union __anonunion___value_128 {
   wint_t __wch ;
   char __wchb[4] ;
};
#line 76 "/usr/include/wchar.h"
struct __anonstruct___mbstate_t_127 {
   int __count ;
   union __anonunion___value_128 __value ;
};
#line 76 "/usr/include/wchar.h"
typedef struct __anonstruct___mbstate_t_127 __mbstate_t;
#line 26 "/usr/include/_G_config.h"
struct __anonstruct__G_fpos_t_129 {
   __off_t __pos ;
   __mbstate_t __state ;
};
#line 26 "/usr/include/_G_config.h"
typedef struct __anonstruct__G_fpos_t_129 _G_fpos_t;
#line 31 "/usr/include/_G_config.h"
struct __anonstruct__G_fpos64_t_130 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
#line 31 "/usr/include/_G_config.h"
typedef struct __anonstruct__G_fpos64_t_130 _G_fpos64_t;
#line 37 "/usr/include/gconv.h"
enum __anonenum_131 {
    __GCONV_OK = 0,
    __GCONV_NOCONV = 1,
    __GCONV_NODB = 2,
    __GCONV_NOMEM = 3,
    __GCONV_EMPTY_INPUT = 4,
    __GCONV_FULL_OUTPUT = 5,
    __GCONV_ILLEGAL_INPUT = 6,
    __GCONV_INCOMPLETE_INPUT = 7,
    __GCONV_ILLEGAL_DESCRIPTOR = 8,
    __GCONV_INTERNAL_ERROR = 9
} ;
#line 55
enum __anonenum_132 {
    __GCONV_IS_LAST = 1,
    __GCONV_IGNORE_ERRORS = 2
} ;
#line 63
struct __gconv_step;
#line 63
struct __gconv_step;
#line 63
struct __gconv_step;
#line 64
struct __gconv_step_data;
#line 64
struct __gconv_step_data;
#line 64
struct __gconv_step_data;
#line 65
struct __gconv_loaded_object;
#line 65
struct __gconv_loaded_object;
#line 65
struct __gconv_loaded_object;
#line 66
struct __gconv_trans_data;
#line 66
struct __gconv_trans_data;
#line 66
struct __gconv_trans_data;
#line 70 "/usr/include/gconv.h"
typedef int (*__gconv_fct)(struct __gconv_step * , struct __gconv_step_data * ,
                           unsigned char const   ** , unsigned char const   * ,
                           unsigned char ** , size_t * , int  , int  );
#line 75 "/usr/include/gconv.h"
typedef wint_t (*__gconv_btowc_fct)(struct __gconv_step * , unsigned char  );
#line 78 "/usr/include/gconv.h"
typedef int (*__gconv_init_fct)(struct __gconv_step * );
#line 79 "/usr/include/gconv.h"
typedef void (*__gconv_end_fct)(struct __gconv_step * );
#line 83 "/usr/include/gconv.h"
typedef int (*__gconv_trans_fct)(struct __gconv_step * ,
                                 struct __gconv_step_data * , void * ,
                                 unsigned char const   * ,
                                 unsigned char const   ** ,
                                 unsigned char const   * , unsigned char ** ,
                                 size_t * );
#line 91 "/usr/include/gconv.h"
typedef int (*__gconv_trans_context_fct)(void * , unsigned char const   * ,
                                         unsigned char const   * ,
                                         unsigned char * , unsigned char * );
#line 96 "/usr/include/gconv.h"
typedef int (*__gconv_trans_query_fct)(char const   * , char const   *** ,
                                       size_t * );
#line 100 "/usr/include/gconv.h"
typedef int (*__gconv_trans_init_fct)(void ** , char const   * );
#line 101 "/usr/include/gconv.h"
typedef void (*__gconv_trans_end_fct)(void * );
#line 103 "/usr/include/gconv.h"
struct __gconv_trans_data {
   int (*__trans_fct)(struct __gconv_step * , struct __gconv_step_data * ,
                      void * , unsigned char const   * ,
                      unsigned char const   ** , unsigned char const   * ,
                      unsigned char ** , size_t * ) ;
   int (*__trans_context_fct)(void * , unsigned char const   * ,
                              unsigned char const   * , unsigned char * ,
                              unsigned char * ) ;
   void (*__trans_end_fct)(void * ) ;
   void *__data ;
   struct __gconv_trans_data *__next ;
};
#line 115 "/usr/include/gconv.h"
struct __gconv_step {
   struct __gconv_loaded_object *__shlib_handle ;
   char const   *__modname ;
   int __counter ;
   char *__from_name ;
   char *__to_name ;
   int (*__fct)(struct __gconv_step * , struct __gconv_step_data * ,
                unsigned char const   ** , unsigned char const   * ,
                unsigned char ** , size_t * , int  , int  ) ;
   wint_t (*__btowc_fct)(struct __gconv_step * , unsigned char  ) ;
   int (*__init_fct)(struct __gconv_step * ) ;
   void (*__end_fct)(struct __gconv_step * ) ;
   int __min_needed_from ;
   int __max_needed_from ;
   int __min_needed_to ;
   int __max_needed_to ;
   int __stateful ;
   void *__data ;
};
#line 145 "/usr/include/gconv.h"
struct __gconv_step_data {
   unsigned char *__outbuf ;
   unsigned char *__outbufend ;
   int __flags ;
   int __invocation_counter ;
   int __internal_use ;
   __mbstate_t *__statep ;
   __mbstate_t __state ;
   struct __gconv_trans_data *__trans ;
};
#line 172 "/usr/include/gconv.h"
struct __gconv_info {
   size_t __nsteps ;
   struct __gconv_step *__steps ;
   struct __gconv_step_data __data[] ;
};
#line 172 "/usr/include/gconv.h"
typedef struct __gconv_info *__gconv_t;
#line 45 "/usr/include/_G_config.h"
struct __anonstruct___combined_134 {
   struct __gconv_info __cd ;
   struct __gconv_step_data __data ;
};
#line 45 "/usr/include/_G_config.h"
union __anonunion__G_iconv_t_133 {
   struct __gconv_info __cd ;
   struct __anonstruct___combined_134 __combined ;
};
#line 45 "/usr/include/_G_config.h"
typedef union __anonunion__G_iconv_t_133 _G_iconv_t;
#line 55 "/usr/include/_G_config.h"
typedef short _G_int16_t;
#line 56 "/usr/include/_G_config.h"
typedef int _G_int32_t;
#line 57 "/usr/include/_G_config.h"
typedef unsigned short _G_uint16_t;
#line 58 "/usr/include/_G_config.h"
typedef unsigned int _G_uint32_t;
#line 43 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 167 "/usr/include/libio.h"
struct _IO_jump_t;
#line 167
struct _IO_jump_t;
#line 167
struct _IO_jump_t;
#line 167
struct _IO_FILE;
#line 177 "/usr/include/libio.h"
typedef void _IO_lock_t;
#line 183 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
#line 203
enum __codecvt_result {
    __codecvt_ok = 0,
    __codecvt_partial = 1,
    __codecvt_error = 2,
    __codecvt_noconv = 3
} ;
#line 268 "/usr/include/libio.h"
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
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
};
#line 338 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
#line 341
struct _IO_FILE_plus;
#line 341
struct _IO_FILE_plus;
#line 341
struct _IO_FILE_plus;
#line 361 "/usr/include/libio.h"
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
#line 369 "/usr/include/libio.h"
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );
#line 378 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
#line 381 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie );
#line 93 "/usr/include/stdio.h"
typedef _G_fpos64_t fpos_t;
#line 33 "/usr/include/bits/resource.h"
enum __rlimit_resource {
    RLIMIT_CPU = 0,
    RLIMIT_FSIZE = 1,
    RLIMIT_DATA = 2,
    RLIMIT_STACK = 3,
    RLIMIT_CORE = 4,
    __RLIMIT_RSS = 5,
    RLIMIT_NOFILE = 7,
    __RLIMIT_OFILE = 7,
    RLIMIT_AS = 9,
    __RLIMIT_NPROC = 6,
    __RLIMIT_MEMLOCK = 8,
    __RLIMIT_LOCKS = 10,
    __RLIMIT_SIGPENDING = 11,
    __RLIMIT_MSGQUEUE = 12,
    __RLIMIT_NICE = 13,
    __RLIMIT_RTPRIO = 14,
    __RLIMIT_NLIMITS = 15,
    __RLIM_NLIMITS = 15
} ;
#line 129 "/usr/include/bits/resource.h"
typedef __rlim64_t rlim_t;
#line 135 "/usr/include/bits/resource.h"
struct rlimit {
   rlim_t rlim_cur ;
   rlim_t rlim_max ;
};
#line 154
enum __rusage_who {
    RUSAGE_SELF = 0,
    RUSAGE_CHILDREN = -1
} ;
#line 169 "/usr/include/bits/resource.h"
struct rusage {
   struct timeval ru_utime ;
   struct timeval ru_stime ;
   long ru_maxrss ;
   long ru_ixrss ;
   long ru_idrss ;
   long ru_isrss ;
   long ru_minflt ;
   long ru_majflt ;
   long ru_nswap ;
   long ru_inblock ;
   long ru_oublock ;
   long ru_msgsnd ;
   long ru_msgrcv ;
   long ru_nsignals ;
   long ru_nvcsw ;
   long ru_nivcsw ;
};
#line 217
enum __priority_which {
    PRIO_PROCESS = 0,
    PRIO_PGRP = 1,
    PRIO_USER = 2
} ;
#line 43 "/usr/include/sys/resource.h"
typedef int __rlimit_resource_t;
#line 44 "/usr/include/sys/resource.h"
typedef int __rusage_who_t;
#line 45 "/usr/include/sys/resource.h"
typedef int __priority_which_t;
#line 63 "/usr/include/sys/wait.h"
union wait;
#line 63
union wait;
#line 63 "/usr/include/sys/wait.h"
union __anonunion___WAIT_STATUS_135 {
   union wait *__uptr ;
   int *__iptr ;
};
#line 63 "/usr/include/sys/wait.h"
typedef union __anonunion___WAIT_STATUS_135  __attribute__((__transparent_union__)) __WAIT_STATUS;
#line 67 "/usr/include/bits/waitstatus.h"
struct __anonstruct___wait_terminated_136 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
#line 67 "/usr/include/bits/waitstatus.h"
struct __anonstruct___wait_stopped_137 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
#line 67 "/usr/include/bits/waitstatus.h"
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_136 __wait_terminated ;
   struct __anonstruct___wait_stopped_137 __wait_stopped ;
};
#line 102 "/usr/include/sys/wait.h"
enum __anonenum_idtype_t_138 {
    P_ALL = 0,
    P_PID = 1,
    P_PGID = 2
} ;
#line 102 "/usr/include/sys/wait.h"
typedef enum __anonenum_idtype_t_138 idtype_t;
#line 162
struct rusage;
#line 62 "mod_fastcgi.c"
enum __anonenum_state_139 {
    PROC_STATE_UNSET = 0,
    PROC_STATE_RUNNING = 1,
    PROC_STATE_OVERLOADED = 2,
    PROC_STATE_DIED_WAIT_FOR_PID = 3,
    PROC_STATE_DIED = 4,
    PROC_STATE_KILLED = 5
} ;
#line 62 "mod_fastcgi.c"
struct fcgi_proc {
   size_t id ;
   buffer *unixsocket ;
   unsigned int port ;
   buffer *connection_name ;
   pid_t pid ;
   size_t load ;
   time_t last_used ;
   size_t requests ;
   struct fcgi_proc *prev ;
   struct fcgi_proc *next ;
   time_t disabled_until ;
   int is_local ;
   enum __anonenum_state_139 state ;
};
#line 62 "mod_fastcgi.c"
typedef struct fcgi_proc fcgi_proc;
#line 93 "mod_fastcgi.c"
struct __anonstruct_fcgi_extension_host_140 {
   buffer *id ;
   fcgi_proc *first ;
   fcgi_proc *unused_procs ;
   unsigned short min_procs ;
   unsigned short max_procs ;
   size_t num_procs ;
   size_t active_procs ;
   unsigned short max_load_per_proc ;
   unsigned short idle_timeout ;
   unsigned short disable_time ;
   size_t max_requests_per_proc ;
   buffer *host ;
   unsigned short port ;
   buffer *unixsocket ;
   buffer *bin_path ;
   array *bin_env ;
   array *bin_env_copy ;
   buffer *docroot ;
   unsigned short mode ;
   unsigned short check_local ;
   unsigned short break_scriptfilename_for_php ;
   unsigned short allow_xsendfile ;
   ssize_t load ;
   size_t max_id ;
   buffer *strip_request_uri ;
   unsigned short kill_signal ;
};
#line 93 "mod_fastcgi.c"
typedef struct __anonstruct_fcgi_extension_host_140 fcgi_extension_host;
#line 274 "mod_fastcgi.c"
struct __anonstruct_fcgi_extension_141 {
   buffer *key ;
   int note_is_sent ;
   int last_used_ndx ;
   fcgi_extension_host **hosts ;
   size_t used ;
   size_t size ;
};
#line 274 "mod_fastcgi.c"
typedef struct __anonstruct_fcgi_extension_141 fcgi_extension;
#line 286 "mod_fastcgi.c"
struct __anonstruct_fcgi_exts_142 {
   fcgi_extension **exts ;
   size_t used ;
   size_t size ;
};
#line 286 "mod_fastcgi.c"
typedef struct __anonstruct_fcgi_exts_142 fcgi_exts;
#line 294 "mod_fastcgi.c"
struct __anonstruct_plugin_config_143 {
   fcgi_exts *exts ;
   array *ext_mapping ;
   int debug ;
};
#line 294 "mod_fastcgi.c"
typedef struct __anonstruct_plugin_config_143 plugin_config;
#line 302 "mod_fastcgi.c"
struct __anonstruct_buffer_uint_144 {
   size_t *ptr ;
   size_t used ;
   size_t size ;
};
#line 302 "mod_fastcgi.c"
typedef struct __anonstruct_buffer_uint_144 buffer_uint;
#line 308 "mod_fastcgi.c"
struct __anonstruct_char_array_145 {
   char **ptr ;
   size_t size ;
   size_t used ;
};
#line 308 "mod_fastcgi.c"
typedef struct __anonstruct_char_array_145 char_array;
#line 316 "mod_fastcgi.c"
struct __anonstruct_plugin_data_146 {
   size_t id ;
   buffer_uint fcgi_request_id ;
   buffer *fcgi_env ;
   buffer *path ;
   buffer *parse_response ;
   buffer *statuskey ;
   plugin_config **config_storage ;
   plugin_config conf ;
};
#line 316 "mod_fastcgi.c"
typedef struct __anonstruct_plugin_data_146 plugin_data;
#line 333
enum __anonenum_fcgi_connection_state_t_147 {
    FCGI_STATE_UNSET = 0,
    FCGI_STATE_INIT = 1,
    FCGI_STATE_CONNECT_DELAYED = 2,
    FCGI_STATE_PREPARE_WRITE = 3,
    FCGI_STATE_WRITE = 4,
    FCGI_STATE_READ = 5
} ;
#line 333 "mod_fastcgi.c"
typedef enum __anonenum_fcgi_connection_state_t_147 fcgi_connection_state_t;
#line 342 "mod_fastcgi.c"
struct __anonstruct_handler_ctx_148 {
   fcgi_proc *proc ;
   fcgi_extension_host *host ;
   fcgi_extension *ext ;
   fcgi_connection_state_t state ;
   time_t state_timestamp ;
   int reconnects ;
   chunkqueue *rb ;
   chunkqueue *wb ;
   buffer *response_header ;
   size_t request_id ;
   int fd ;
   int fde_ndx ;
   pid_t pid ;
   int got_proc ;
   int send_content_body ;
   plugin_config conf ;
   connection *remote_conn ;
   plugin_data *plugin_data ;
};
#line 342 "mod_fastcgi.c"
typedef struct __anonstruct_handler_ctx_148 handler_ctx;
#line 1023 "mod_fastcgi.c"
union __anonunion_149 {
   int __in ;
   int __i ;
};
#line 1033 "mod_fastcgi.c"
union __anonunion_150 {
   int __in ;
   int __i ;
};
#line 1037 "mod_fastcgi.c"
union __anonunion_151 {
   int __in ;
   int __i ;
};
#line 1032 "mod_fastcgi.c"
union __anonunion_152 {
   int __in ;
   int __i ;
};
#line 1022 "mod_fastcgi.c"
union __anonunion_153 {
   int __in ;
   int __i ;
};
#line 1622
enum __anonenum_connection_result_t_154 {
    CONNECTION_UNSET = 0,
    CONNECTION_OK = 1,
    CONNECTION_DELAYED = 2,
    CONNECTION_OVERLOADED = 3,
    CONNECTION_DEAD = 4
} ;
#line 1622 "mod_fastcgi.c"
typedef enum __anonenum_connection_result_t_154 connection_result_t;
#line 2287 "mod_fastcgi.c"
struct __anonstruct_fastcgi_response_packet_155 {
   buffer *b ;
   size_t len ;
   int type ;
   int padding ;
   size_t request_id ;
};
#line 2287 "mod_fastcgi.c"
typedef struct __anonstruct_fastcgi_response_packet_155 fastcgi_response_packet;
#line 2637 "mod_fastcgi.c"
union __anonunion_156 {
   int __in ;
   int __i ;
};
#line 2636 "mod_fastcgi.c"
union __anonunion_157 {
   int __in ;
   int __i ;
};
#line 2630 "mod_fastcgi.c"
union __anonunion_158 {
   int __in ;
   int __i ;
};
#line 3188 "mod_fastcgi.c"
union __anonunion_159 {
   int __in ;
   int __i ;
};
#line 3192 "mod_fastcgi.c"
union __anonunion_160 {
   int __in ;
   int __i ;
};
#line 3191 "mod_fastcgi.c"
union __anonunion_161 {
   int __in ;
   int __i ;
};
#line 3187 "mod_fastcgi.c"
union __anonunion_162 {
   int __in ;
   int __i ;
};
#line 3785 "mod_fastcgi.c"
union __anonunion_163 {
   int __in ;
   int __i ;
};
#line 3791 "mod_fastcgi.c"
union __anonunion_164 {
   int __in ;
   int __i ;
};
#line 3790 "mod_fastcgi.c"
union __anonunion_165 {
   int __in ;
   int __i ;
};
#line 3789 "mod_fastcgi.c"
union __anonunion_166 {
   int __in ;
   int __i ;
};
#line 3783 "mod_fastcgi.c"
union __anonunion_167 {
   int __in ;
   int __i ;
};
/* compiler builtin: 
   void __builtin_varargs_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_strcmp(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void *__builtin___memmove_chk(void * , void const   * , unsigned int  ,
                                 unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin_strpbrk(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void *__builtin_memcpy(void * , void const   * , unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_exp(double  ) ;  */
/* compiler builtin: 
   long double __builtin_nanl(char const   * ) ;  */
/* compiler builtin: 
   double __builtin_cos(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strchr(char * , int  ) ;  */
/* compiler builtin: 
   float __builtin_atan2f(float  , float  ) ;  */
/* compiler builtin: 
   void *__builtin___memcpy_chk(void * , void const   * , unsigned int  ,
                                unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_asin(double  ) ;  */
/* compiler builtin: 
   int __builtin_ctz(unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin_stpcpy(char * , char const   * ) ;  */
/* compiler builtin: 
   double __builtin_nans(char const   * ) ;  */
/* compiler builtin: 
   long double __builtin_atan2l(long double  , long double  ) ;  */
/* compiler builtin: 
   float __builtin_logf(float  ) ;  */
/* compiler builtin: 
   int __builtin___fprintf_chk(void * , int  , char const   *  , ...) ;  */
/* compiler builtin: 
   int __builtin___vsprintf_chk(char * , int  , unsigned int  , char const   * ,
                                __builtin_va_list  ) ;  */
/* compiler builtin: 
   char *__builtin___strncpy_chk(char * , char const   * , unsigned int  ,
                                 unsigned int  ) ;  */
/* compiler builtin: 
   float __builtin_log10f(float  ) ;  */
/* compiler builtin: 
   double __builtin_atan(double  ) ;  */
/* compiler builtin: 
   void *__builtin_alloca(unsigned int  ) ;  */
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_strncmp(char const   * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_sin(double  ) ;  */
/* compiler builtin: 
   long double __builtin_logl(long double  ) ;  */
/* compiler builtin: 
   float __builtin_coshf(float  ) ;  */
/* compiler builtin: 
   void *__builtin___mempcpy_chk(void * , void const   * , unsigned int  ,
                                 unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin___strcat_chk(char * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   float __builtin_nansf(char const   * ) ;  */
/* compiler builtin: 
   void *__builtin_memset(void * , int  , int  ) ;  */
/* compiler builtin: 
   void __builtin_va_copy(__builtin_va_list  , __builtin_va_list  ) ;  */
/* compiler builtin: 
   float __builtin_sinhf(float  ) ;  */
/* compiler builtin: 
   long double __builtin_log10l(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_coshl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_ffs(unsigned int  ) ;  */
/* compiler builtin: 
   float __builtin_asinf(float  ) ;  */
/* compiler builtin: 
   long double __builtin_nansl(char const   * ) ;  */
/* compiler builtin: 
   double __builtin_frexp(double  , int * ) ;  */
/* compiler builtin: 
   double __builtin_tan(double  ) ;  */
/* compiler builtin: 
   long double __builtin_sinhl(long double  ) ;  */
/* compiler builtin: 
   float __builtin_frexpf(float  , int * ) ;  */
/* compiler builtin: 
   long double __builtin_asinl(long double  ) ;  */
/* compiler builtin: 
   void *__builtin_frame_address(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_floor(double  ) ;  */
/* compiler builtin: 
   float __builtin_tanhf(float  ) ;  */
/* compiler builtin: 
   int __builtin_parityl(unsigned long  ) ;  */
/* compiler builtin: 
   int __builtin_clzl(unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_powi(double  , int  ) ;  */
/* compiler builtin: 
   long double __builtin_frexpl(long double  , int * ) ;  */
/* compiler builtin: 
   float __builtin_atanf(float  ) ;  */
/* compiler builtin: 
   float __builtin_huge_valf(void) ;  */
/* compiler builtin: 
   float __builtin_sqrtf(float  ) ;  */
/* compiler builtin: 
   float __builtin_fmodf(float  ) ;  */
/* compiler builtin: 
   unsigned int __builtin_object_size(void * , int  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned int  , void * ) ;  */
/* compiler builtin: 
   void __builtin_stdarg_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   long double __builtin_tanhl(long double  ) ;  */
/* compiler builtin: 
   double __builtin_nan(char const   * ) ;  */
/* compiler builtin: 
   void __builtin_return(void const   * ) ;  */
/* compiler builtin: 
   long double __builtin_atanl(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_huge_vall(void) ;  */
/* compiler builtin: 
   float __builtin_inff(void) ;  */
/* compiler builtin: 
   long double __builtin_sqrtl(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_fmodl(long double  ) ;  */
/* compiler builtin: 
   int __builtin___printf_chk(int  , char const   *  , ...) ;  */
/* compiler builtin: 
   float __builtin_floorf(float  ) ;  */
/* compiler builtin: 
   float __builtin_fabsf(float  ) ;  */
/* compiler builtin: 
   int __builtin_popcountll(unsigned long long  ) ;  */
/* compiler builtin: 
   int __builtin___sprintf_chk(char * , int  , unsigned int  , char const   * 
                               , ...) ;  */
/* compiler builtin: 
   int __builtin___vprintf_chk(int  , char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin___snprintf_chk(char * , unsigned int  , int  , unsigned int  ,
                                char const   *  , ...) ;  */
/* compiler builtin: 
   long double __builtin_infl(void) ;  */
/* compiler builtin: 
   void *__builtin_mempcpy(void * , void const   * , unsigned int  ) ;  */
/* compiler builtin: 
   long double __builtin_floorl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_ctzl(unsigned long  ) ;  */
/* compiler builtin: 
   long double __builtin_fabsl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_clz(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_fabs(double  ) ;  */
/* compiler builtin: 
   int __builtin_popcount(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_ceil(double  ) ;  */
/* compiler builtin: 
   double __builtin_ldexp(double  , int  ) ;  */
/* compiler builtin: 
   float __builtin_sinf(float  ) ;  */
/* compiler builtin: 
   float __builtin_acosf(float  ) ;  */
/* compiler builtin: 
   int __builtin___vsnprintf_chk(char * , unsigned int  , int  , unsigned int  ,
                                 char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   double __builtin_sinh(double  ) ;  */
/* compiler builtin: 
   int __builtin_ffsll(unsigned long long  ) ;  */
/* compiler builtin: 
   char *__builtin___strcpy_chk(char * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_inf(void) ;  */
/* compiler builtin: 
   void __builtin_prefetch(void const   *  , ...) ;  */
/* compiler builtin: 
   long double __builtin_sinl(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_acosl(long double  ) ;  */
/* compiler builtin: 
   double __builtin_sqrt(double  ) ;  */
/* compiler builtin: 
   double __builtin_fmod(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strcpy(char * , char const   * ) ;  */
/* compiler builtin: 
   float __builtin_ceilf(float  ) ;  */
/* compiler builtin: 
   void *__builtin_return_address(unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin___stpcpy_chk(char * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   float __builtin_tanf(float  ) ;  */
/* compiler builtin: 
   int __builtin_parityll(unsigned long long  ) ;  */
/* compiler builtin: 
   float __builtin_ldexpf(float  , int  ) ;  */
/* compiler builtin: 
   int __builtin_types_compatible_p(unsigned int  , unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_log10(double  ) ;  */
/* compiler builtin: 
   float __builtin_expf(float  ) ;  */
/* compiler builtin: 
   int __builtin_clzll(unsigned long long  ) ;  */
/* compiler builtin: 
   double __builtin_tanh(double  ) ;  */
/* compiler builtin: 
   int __builtin_constant_p(int  ) ;  */
/* compiler builtin: 
   long double __builtin_ceill(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_tanl(long double  ) ;  */
/* compiler builtin: 
   double __builtin_log(double  ) ;  */
/* compiler builtin: 
   long double __builtin_ldexpl(long double  , int  ) ;  */
/* compiler builtin: 
   long double __builtin_expl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_popcountl(unsigned long  ) ;  */
/* compiler builtin: 
   void *__builtin___memset_chk(void * , int  , unsigned int  , unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin___strncat_chk(char * , char const   * , unsigned int  ,
                                 unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_huge_val(void) ;  */
/* compiler builtin: 
   __builtin_va_list __builtin_next_arg(void) ;  */
/* compiler builtin: 
   float __builtin_powif(float  , int  ) ;  */
/* compiler builtin: 
   int __builtin___vfprintf_chk(void * , int  , char const   * ,
                                __builtin_va_list  ) ;  */
/* compiler builtin: 
   float __builtin_modff(float  , float * ) ;  */
/* compiler builtin: 
   double __builtin_atan2(double  , double  ) ;  */
/* compiler builtin: 
   char *__builtin_strncpy(char * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   long double __builtin_powil(long double  , int  ) ;  */
/* compiler builtin: 
   float __builtin_cosf(float  ) ;  */
/* compiler builtin: 
   unsigned int __builtin_strspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   long double __builtin_modfl(long double  , long double * ) ;  */
/* compiler builtin: 
   int __builtin_parity(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_cosh(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strncat(char * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   long __builtin_expect(long  , long  ) ;  */
/* compiler builtin: 
   double __builtin_acos(double  ) ;  */
/* compiler builtin: 
   long double __builtin_cosl(long double  ) ;  */
/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_ctzll(unsigned long long  ) ;  */
/* compiler builtin: 
   unsigned int __builtin_strcspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   int __builtin_ffsl(unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_nanf(char const   * ) ;  */
#line 109 "/usr/include/sys/select.h"
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
#line 121
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
#line 31 "/usr/include/sys/sysmacros.h"
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
#line 34
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
#line 37
__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
#line 42
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
#line 42 "/usr/include/sys/sysmacros.h"
__inline static unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 

  {
#line 42
  fprintf(_coverage_fout, "1\n");
#line 42
  fflush(_coverage_fout);
#line 45
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
#line 48
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
#line 48 "/usr/include/sys/sysmacros.h"
__inline static unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 

  {
#line 48
  fprintf(_coverage_fout, "2\n");
#line 48
  fflush(_coverage_fout);
#line 51
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
#line 54
__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
#line 54 "/usr/include/sys/sysmacros.h"
__inline static unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 

  {
#line 54
  fprintf(_coverage_fout, "3\n");
#line 54
  fflush(_coverage_fout);
#line 57
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
#line 258 "/usr/include/unistd.h"
extern  __attribute__((__nothrow__)) int access(char const   *__name ,
                                                int __type )  __attribute__((__nonnull__(1))) ;
#line 304
extern  __attribute__((__nothrow__)) __off64_t lseek(int __fd ,
                                                     __off64_t __offset ,
                                                     int __whence )  __asm__("lseek64")  ;
#line 320
extern int close(int __fd ) ;
#line 327
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
#line 333
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
#line 384
extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
#line 393
extern  __attribute__((__nothrow__)) unsigned int alarm(unsigned int __seconds ) ;
#line 405
extern unsigned int sleep(unsigned int __seconds ) ;
#line 412
extern  __attribute__((__nothrow__)) __useconds_t ualarm(__useconds_t __value ,
                                                         __useconds_t __interval ) ;
#line 420
extern int usleep(__useconds_t __useconds ) ;
#line 429
extern int pause(void) ;
#line 433
extern  __attribute__((__nothrow__)) int chown(char const   *__file ,
                                               __uid_t __owner ,
                                               __gid_t __group )  __attribute__((__nonnull__(1))) ;
#line 438
extern  __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner ,
                                                __gid_t __group ) ;
#line 443
extern  __attribute__((__nothrow__)) int lchown(char const   *__file ,
                                                __uid_t __owner ,
                                                __gid_t __group )  __attribute__((__nonnull__(1))) ;
#line 457
extern  __attribute__((__nothrow__)) int chdir(char const   *__path )  __attribute__((__nonnull__(1))) ;
#line 461
extern  __attribute__((__nothrow__)) int fchdir(int __fd ) ;
#line 471
extern  __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;
#line 484
extern  __attribute__((__nothrow__)) char *getwd(char *__buf )  __attribute__((__nonnull__(1),
__deprecated__)) ;
#line 490
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
#line 493
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
#line 496
extern char **__environ ;
#line 504
extern  __attribute__((__nothrow__)) int execve(char const   *__path ,
                                                char * const  *__argv ,
                                                char * const  *__envp )  __attribute__((__nonnull__(1))) ;
#line 516
extern  __attribute__((__nothrow__)) int execv(char const   *__path ,
                                               char * const  *__argv )  __attribute__((__nonnull__(1))) ;
#line 521
extern  __attribute__((__nothrow__)) int execle(char const   *__path ,
                                                char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;
#line 526
extern  __attribute__((__nothrow__)) int execl(char const   *__path ,
                                               char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;
#line 531
extern  __attribute__((__nothrow__)) int execvp(char const   *__file ,
                                                char * const  *__argv )  __attribute__((__nonnull__(1))) ;
#line 537
extern  __attribute__((__nothrow__)) int execlp(char const   *__file ,
                                                char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;
#line 543
extern  __attribute__((__nothrow__)) int nice(int __inc ) ;
#line 548
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
#line 557
extern  __attribute__((__nothrow__)) long pathconf(char const   *__path ,
                                                   int __name )  __attribute__((__nonnull__(1))) ;
#line 561
extern  __attribute__((__nothrow__)) long fpathconf(int __fd , int __name ) ;
#line 564
extern  __attribute__((__nothrow__)) long sysconf(int __name ) ;
#line 568
extern  __attribute__((__nothrow__)) size_t confstr(int __name , char *__buf ,
                                                    size_t __len ) ;
#line 573
extern  __attribute__((__nothrow__)) __pid_t getpid(void) ;
#line 576
extern  __attribute__((__nothrow__)) __pid_t getppid(void) ;
#line 581
extern  __attribute__((__nothrow__)) __pid_t getpgrp(void) ;
#line 591
extern  __attribute__((__nothrow__)) __pid_t __getpgid(__pid_t __pid ) ;
#line 600
extern  __attribute__((__nothrow__)) int setpgid(__pid_t __pid , __pid_t __pgid ) ;
#line 617
extern  __attribute__((__nothrow__)) int setpgrp(void) ;
#line 634
extern  __attribute__((__nothrow__)) __pid_t setsid(void) ;
#line 642
extern  __attribute__((__nothrow__)) __uid_t getuid(void) ;
#line 645
extern  __attribute__((__nothrow__)) __uid_t geteuid(void) ;
#line 648
extern  __attribute__((__nothrow__)) __gid_t getgid(void) ;
#line 651
extern  __attribute__((__nothrow__)) __gid_t getegid(void) ;
#line 656
extern  __attribute__((__nothrow__)) int getgroups(int __size , __gid_t *__list ) ;
#line 667
extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
#line 672
extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid ,
                                                  __uid_t __euid ) ;
#line 677
extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
#line 684
extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
#line 689
extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid ,
                                                  __gid_t __egid ) ;
#line 694
extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
#line 723
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
#line 730
extern  __attribute__((__nothrow__)) __pid_t vfork(void) ;
#line 736
extern  __attribute__((__nothrow__)) char *ttyname(int __fd ) ;
#line 740
extern  __attribute__((__nothrow__)) int ttyname_r(int __fd , char *__buf ,
                                                   size_t __buflen )  __attribute__((__nonnull__(2))) ;
#line 745
extern  __attribute__((__nothrow__)) int isatty(int __fd ) ;
#line 751
extern  __attribute__((__nothrow__)) int ttyslot(void) ;
#line 756
extern  __attribute__((__nothrow__)) int link(char const   *__from ,
                                              char const   *__to )  __attribute__((__nonnull__(1,2))) ;
#line 769
extern  __attribute__((__nothrow__)) int symlink(char const   *__from ,
                                                 char const   *__to )  __attribute__((__nonnull__(1,2))) ;
#line 775
extern  __attribute__((__nothrow__)) ssize_t readlink(char const   * __restrict  __path ,
                                                      char * __restrict  __buf ,
                                                      size_t __len )  __attribute__((__nonnull__(1,2))) ;
#line 792
extern  __attribute__((__nothrow__)) int unlink(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 801
extern  __attribute__((__nothrow__)) int rmdir(char const   *__path )  __attribute__((__nonnull__(1))) ;
#line 805
extern  __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd ) ;
#line 808
extern  __attribute__((__nothrow__)) int tcsetpgrp(int __fd , __pid_t __pgrp_id ) ;
#line 815
extern char *getlogin(void) ;
#line 823
extern int getlogin_r(char *__name , size_t __name_len )  __attribute__((__nonnull__(1))) ;
#line 828
extern  __attribute__((__nothrow__)) int setlogin(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 59 "/usr/include/getopt.h"
extern char *optarg ;
#line 73
extern int optind ;
#line 78
extern int opterr ;
#line 82
extern int optopt ;
#line 152
extern  __attribute__((__nothrow__)) int getopt(int ___argc ,
                                                char * const  *___argv ,
                                                char const   *__shortopts ) ;
#line 845 "/usr/include/unistd.h"
extern  __attribute__((__nothrow__)) int gethostname(char *__name ,
                                                     size_t __len )  __attribute__((__nonnull__(1))) ;
#line 852
extern  __attribute__((__nothrow__)) int sethostname(char const   *__name ,
                                                     size_t __len )  __attribute__((__nonnull__(1))) ;
#line 857
extern  __attribute__((__nothrow__)) int sethostid(long __id ) ;
#line 863
extern  __attribute__((__nothrow__)) int getdomainname(char *__name ,
                                                       size_t __len )  __attribute__((__nonnull__(1))) ;
#line 865
extern  __attribute__((__nothrow__)) int setdomainname(char const   *__name ,
                                                       size_t __len )  __attribute__((__nonnull__(1))) ;
#line 872
extern  __attribute__((__nothrow__)) int vhangup(void) ;
#line 875
extern  __attribute__((__nothrow__)) int revoke(char const   *__file )  __attribute__((__nonnull__(1))) ;
#line 883
extern  __attribute__((__nothrow__)) int profil(unsigned short *__sample_buffer ,
                                                size_t __size ,
                                                size_t __offset ,
                                                unsigned int __scale )  __attribute__((__nonnull__(1))) ;
#line 891
extern  __attribute__((__nothrow__)) int acct(char const   *__name ) ;
#line 895
extern  __attribute__((__nothrow__)) char *getusershell(void) ;
#line 896
extern  __attribute__((__nothrow__)) void endusershell(void) ;
#line 897
extern  __attribute__((__nothrow__)) void setusershell(void) ;
#line 903
extern  __attribute__((__nothrow__)) int daemon(int __nochdir , int __noclose ) ;
#line 910
extern  __attribute__((__nothrow__)) int chroot(char const   *__path )  __attribute__((__nonnull__(1))) ;
#line 914
extern char *getpass(char const   *__prompt )  __attribute__((__nonnull__(1))) ;
#line 923
extern int fsync(int __fd ) ;
#line 930
extern long gethostid(void) ;
#line 933
extern  __attribute__((__nothrow__)) void sync(void) ;
#line 938
extern  __attribute__((__nothrow__)) int getpagesize(void)  __attribute__((__const__)) ;
#line 943
extern  __attribute__((__nothrow__)) int getdtablesize(void) ;
#line 952
extern  __attribute__((__nothrow__)) int truncate(char const   *__file ,
                                                  __off64_t __length )  __asm__("truncate64") __attribute__((__nonnull__(1))) ;
#line 973
extern  __attribute__((__nothrow__)) int ftruncate(int __fd ,
                                                   __off64_t __length )  __asm__("ftruncate64")  ;
#line 990
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
#line 996
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
#line 1011
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
#line 1037
extern int lockf(int __fd , int __cmd , __off64_t __len )  __asm__("lockf64")  ;
#line 1065
extern int fdatasync(int __fildes ) ;
#line 43 "/usr/include/bits/errno.h"
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
#line 76 "/usr/include/fcntl.h"
extern int fcntl(int __fd , int __cmd  , ...) ;
#line 88
extern int open(char const   *__file , int __oflag  , ...)  __asm__("open64") __attribute__((__nonnull__(1))) ;
#line 133
extern int creat(char const   *__file , __mode_t __mode )  __asm__("creat64") __attribute__((__nonnull__(1))) ;
#line 180
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off64_t __offset ,
                                                       __off64_t __len ,
                                                       int __advise )  __asm__("posix_fadvise64")  ;
#line 201
extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len )  __asm__("posix_fallocate64")  ;
#line 38 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest ,
                                                  void const   * __restrict  __src ,
                                                  size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 43
extern  __attribute__((__nothrow__)) void *memmove(void *__dest ,
                                                   void const   *__src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 51
extern  __attribute__((__nothrow__)) void *memccpy(void * __restrict  __dest ,
                                                   void const   * __restrict  __src ,
                                                   int __c , size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 59
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c ,
                                                  size_t __n )  __attribute__((__nonnull__(1))) ;
#line 62
extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 ,
                                                void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 66
extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c ,
                                                  size_t __n )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 84
extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 87
extern  __attribute__((__nothrow__)) char *strncpy(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 92
extern  __attribute__((__nothrow__)) char *strcat(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 95
extern  __attribute__((__nothrow__)) char *strncat(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 99
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 ,
                                                char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 102
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 ,
                                                 char const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 106
extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 ,
                                                 char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 109
extern  __attribute__((__nothrow__)) size_t strxfrm(char * __restrict  __dest ,
                                                    char const   * __restrict  __src ,
                                                    size_t __n )  __attribute__((__nonnull__(2))) ;
#line 130
extern  __attribute__((__nothrow__)) char *strdup(char const   *__s )  __attribute__((__nonnull__(1),
__malloc__)) ;
#line 167
extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 170
extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 184
extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s ,
                                                    char const   *__reject )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 188
extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 191
extern  __attribute__((__nothrow__)) char *strpbrk(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 194
extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack ,
                                                  char const   *__needle )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 199
extern  __attribute__((__nothrow__)) char *strtok(char * __restrict  __s ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(2))) ;
#line 205
extern  __attribute__((__nothrow__)) char *__strtok_r(char * __restrict  __s ,
                                                      char const   * __restrict  __delim ,
                                                      char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
#line 210
extern  __attribute__((__nothrow__)) char *strtok_r(char * __restrict  __s ,
                                                    char const   * __restrict  __delim ,
                                                    char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
#line 242
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 256
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
#line 270
extern  __attribute__((__nothrow__)) int strerror_r(int __errnum , char *__buf ,
                                                    size_t __buflen )  __asm__("__xpg_strerror_r") __attribute__((__nonnull__(2))) ;
#line 294
extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 298
extern  __attribute__((__nothrow__)) void bcopy(void const   *__src ,
                                                void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 302
extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 305
extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 ,
                                              void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 309
extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 313
extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 318
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
#line 331
extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 335
extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 ,
                                                     char const   *__s2 ,
                                                     size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 354
extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;
#line 394 "/usr/include/bits/string2.h"
extern void *__rawmemchr(void const   *__s , int __c ) ;
#line 969
__inline static size_t __strcspn_c1(char const   *__s , int __reject ) ;
#line 970 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c1(char const   *__s , int __reject ) 
{ register size_t __result ;

  {
#line 970
  fprintf(_coverage_fout, "7\n");
#line 970
  fflush(_coverage_fout);
#line 973
  __result = 0U;
#line 970
  fprintf(_coverage_fout, "8\n");
#line 970
  fflush(_coverage_fout);
#line 974
  while (1) {
#line 974
    fprintf(_coverage_fout, "5\n");
#line 974
    fflush(_coverage_fout);
#line 974
    if ((int const   )*(__s + __result) != 0) {
#line 974
      fprintf(_coverage_fout, "4\n");
#line 974
      fflush(_coverage_fout);
#line 974
      if (! ((int const   )*(__s + __result) != (int const   )__reject)) {
#line 974
        break;
      }
    } else {
#line 974
      break;
    }
#line 974
    fprintf(_coverage_fout, "6\n");
#line 974
    fflush(_coverage_fout);
#line 975
    __result ++;
  }
#line 970
  fprintf(_coverage_fout, "9\n");
#line 970
  fflush(_coverage_fout);
#line 976
  return (__result);
}
}
#line 979
__inline static size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) ;
#line 981 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) 
{ register size_t __result ;

  {
#line 981
  fprintf(_coverage_fout, "14\n");
#line 981
  fflush(_coverage_fout);
#line 984
  __result = 0U;
#line 981
  fprintf(_coverage_fout, "15\n");
#line 981
  fflush(_coverage_fout);
#line 985
  while (1) {
#line 985
    fprintf(_coverage_fout, "12\n");
#line 985
    fflush(_coverage_fout);
#line 985
    if ((int const   )*(__s + __result) != 0) {
#line 985
      fprintf(_coverage_fout, "11\n");
#line 985
      fflush(_coverage_fout);
#line 985
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
#line 985
        fprintf(_coverage_fout, "10\n");
#line 985
        fflush(_coverage_fout);
#line 985
        if (! ((int const   )*(__s + __result) != (int const   )__reject2)) {
#line 985
          break;
        }
      } else {
#line 985
        break;
      }
    } else {
#line 985
      break;
    }
#line 985
    fprintf(_coverage_fout, "13\n");
#line 985
    fflush(_coverage_fout);
#line 987
    __result ++;
  }
#line 981
  fprintf(_coverage_fout, "16\n");
#line 981
  fflush(_coverage_fout);
#line 988
  return (__result);
}
}
#line 991
__inline static size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) ;
#line 993 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) 
{ register size_t __result ;

  {
#line 993
  fprintf(_coverage_fout, "22\n");
#line 993
  fflush(_coverage_fout);
#line 997
  __result = 0U;
#line 993
  fprintf(_coverage_fout, "23\n");
#line 993
  fflush(_coverage_fout);
#line 998
  while (1) {
#line 998
    fprintf(_coverage_fout, "20\n");
#line 998
    fflush(_coverage_fout);
#line 998
    if ((int const   )*(__s + __result) != 0) {
#line 998
      fprintf(_coverage_fout, "19\n");
#line 998
      fflush(_coverage_fout);
#line 998
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
#line 998
        fprintf(_coverage_fout, "18\n");
#line 998
        fflush(_coverage_fout);
#line 998
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
#line 998
          fprintf(_coverage_fout, "17\n");
#line 998
          fflush(_coverage_fout);
#line 998
          if (! ((int const   )*(__s + __result) != (int const   )__reject3)) {
#line 998
            break;
          }
        } else {
#line 998
          break;
        }
      } else {
#line 998
        break;
      }
    } else {
#line 998
      break;
    }
#line 998
    fprintf(_coverage_fout, "21\n");
#line 998
    fflush(_coverage_fout);
#line 1000
    __result ++;
  }
#line 993
  fprintf(_coverage_fout, "24\n");
#line 993
  fflush(_coverage_fout);
#line 1001
  return (__result);
}
}
#line 1045
__inline static size_t __strspn_c1(char const   *__s , int __accept ) ;
#line 1046 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c1(char const   *__s , int __accept ) 
{ register size_t __result ;

  {
#line 1046
  fprintf(_coverage_fout, "27\n");
#line 1046
  fflush(_coverage_fout);
#line 1049
  __result = 0U;
#line 1046
  fprintf(_coverage_fout, "28\n");
#line 1046
  fflush(_coverage_fout);
#line 1051
  while (1) {
#line 1051
    fprintf(_coverage_fout, "25\n");
#line 1051
    fflush(_coverage_fout);
#line 1051
    if (! ((int const   )*(__s + __result) == (int const   )__accept)) {
#line 1051
      break;
    }
#line 1051
    fprintf(_coverage_fout, "26\n");
#line 1051
    fflush(_coverage_fout);
#line 1052
    __result ++;
  }
#line 1046
  fprintf(_coverage_fout, "29\n");
#line 1046
  fflush(_coverage_fout);
#line 1053
  return (__result);
}
}
#line 1056
__inline static size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
#line 1058 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ register size_t __result ;

  {
#line 1058
  fprintf(_coverage_fout, "33\n");
#line 1058
  fflush(_coverage_fout);
#line 1061
  __result = 0U;
#line 1058
  fprintf(_coverage_fout, "34\n");
#line 1058
  fflush(_coverage_fout);
#line 1063
  while (1) {
#line 1063
    fprintf(_coverage_fout, "31\n");
#line 1063
    fflush(_coverage_fout);
#line 1063
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
#line 1063
      fprintf(_coverage_fout, "30\n");
#line 1063
      fflush(_coverage_fout);
#line 1063
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
#line 1063
        break;
      }
    }
#line 1063
    fprintf(_coverage_fout, "32\n");
#line 1063
    fflush(_coverage_fout);
#line 1064
    __result ++;
  }
#line 1058
  fprintf(_coverage_fout, "35\n");
#line 1058
  fflush(_coverage_fout);
#line 1065
  return (__result);
}
}
#line 1068
__inline static size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
#line 1070 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ register size_t __result ;

  {
#line 1070
  fprintf(_coverage_fout, "40\n");
#line 1070
  fflush(_coverage_fout);
#line 1073
  __result = 0U;
#line 1070
  fprintf(_coverage_fout, "41\n");
#line 1070
  fflush(_coverage_fout);
#line 1075
  while (1) {
#line 1075
    fprintf(_coverage_fout, "38\n");
#line 1075
    fflush(_coverage_fout);
#line 1075
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
#line 1075
      fprintf(_coverage_fout, "37\n");
#line 1075
      fflush(_coverage_fout);
#line 1075
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
#line 1075
        fprintf(_coverage_fout, "36\n");
#line 1075
        fflush(_coverage_fout);
#line 1075
        if (! ((int const   )*(__s + __result) == (int const   )__accept3)) {
#line 1075
          break;
        }
      }
    }
#line 1075
    fprintf(_coverage_fout, "39\n");
#line 1075
    fflush(_coverage_fout);
#line 1077
    __result ++;
  }
#line 1070
  fprintf(_coverage_fout, "42\n");
#line 1070
  fflush(_coverage_fout);
#line 1078
  return (__result);
}
}
#line 1121
__inline static char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
#line 1123 "/usr/include/bits/string2.h"
__inline static char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ char *tmp ;

  {
#line 1123
  fprintf(_coverage_fout, "49\n");
#line 1123
  fflush(_coverage_fout);
#line 1127
  while (1) {
#line 1127
    fprintf(_coverage_fout, "45\n");
#line 1127
    fflush(_coverage_fout);
#line 1127
    if ((int const   )*__s != 0) {
#line 1127
      fprintf(_coverage_fout, "44\n");
#line 1127
      fflush(_coverage_fout);
#line 1127
      if ((int const   )*__s != (int const   )__accept1) {
#line 1127
        fprintf(_coverage_fout, "43\n");
#line 1127
        fflush(_coverage_fout);
#line 1127
        if (! ((int const   )*__s != (int const   )__accept2)) {
#line 1127
          break;
        }
      } else {
#line 1127
        break;
      }
    } else {
#line 1127
      break;
    }
#line 1127
    fprintf(_coverage_fout, "46\n");
#line 1127
    fflush(_coverage_fout);
#line 1128
    __s ++;
  }
#line 1123
  fprintf(_coverage_fout, "50\n");
#line 1123
  fflush(_coverage_fout);
#line 1129
  if ((int const   )*__s == 0) {
#line 1129
    fprintf(_coverage_fout, "47\n");
#line 1129
    fflush(_coverage_fout);
#line 1129
    tmp = (char *)((void *)0);
  } else {
#line 1129
    fprintf(_coverage_fout, "48\n");
#line 1129
    fflush(_coverage_fout);
#line 1129
    tmp = (char *)((unsigned int )__s);
  }
#line 1123
  fprintf(_coverage_fout, "51\n");
#line 1123
  fflush(_coverage_fout);
#line 1129
  return (tmp);
}
}
#line 1132
__inline static char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
#line 1134 "/usr/include/bits/string2.h"
__inline static char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ char *tmp ;

  {
#line 1134
  fprintf(_coverage_fout, "59\n");
#line 1134
  fflush(_coverage_fout);
#line 1139
  while (1) {
#line 1139
    fprintf(_coverage_fout, "55\n");
#line 1139
    fflush(_coverage_fout);
#line 1139
    if ((int const   )*__s != 0) {
#line 1139
      fprintf(_coverage_fout, "54\n");
#line 1139
      fflush(_coverage_fout);
#line 1139
      if ((int const   )*__s != (int const   )__accept1) {
#line 1139
        fprintf(_coverage_fout, "53\n");
#line 1139
        fflush(_coverage_fout);
#line 1139
        if ((int const   )*__s != (int const   )__accept2) {
#line 1139
          fprintf(_coverage_fout, "52\n");
#line 1139
          fflush(_coverage_fout);
#line 1139
          if (! ((int const   )*__s != (int const   )__accept3)) {
#line 1139
            break;
          }
        } else {
#line 1139
          break;
        }
      } else {
#line 1139
        break;
      }
    } else {
#line 1139
      break;
    }
#line 1139
    fprintf(_coverage_fout, "56\n");
#line 1139
    fflush(_coverage_fout);
#line 1141
    __s ++;
  }
#line 1134
  fprintf(_coverage_fout, "60\n");
#line 1134
  fflush(_coverage_fout);
#line 1142
  if ((int const   )*__s == 0) {
#line 1142
    fprintf(_coverage_fout, "57\n");
#line 1142
    fflush(_coverage_fout);
#line 1142
    tmp = (char *)((void *)0);
  } else {
#line 1142
    fprintf(_coverage_fout, "58\n");
#line 1142
    fflush(_coverage_fout);
#line 1142
    tmp = (char *)((unsigned int )__s);
  }
#line 1134
  fprintf(_coverage_fout, "61\n");
#line 1134
  fflush(_coverage_fout);
#line 1142
  return (tmp);
}
}
#line 1173
__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
#line 1174 "/usr/include/bits/string2.h"
__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
#line 1174
  fprintf(_coverage_fout, "72\n");
#line 1174
  fflush(_coverage_fout);
#line 1178
  if ((unsigned int )__s == (unsigned int )((void *)0)) {
#line 1178
    fprintf(_coverage_fout, "62\n");
#line 1178
    fflush(_coverage_fout);
#line 1179
    __s = *__nextp;
  }
#line 1174
  fprintf(_coverage_fout, "73\n");
#line 1174
  fflush(_coverage_fout);
#line 1180
  while (1) {
#line 1180
    fprintf(_coverage_fout, "63\n");
#line 1180
    fflush(_coverage_fout);
#line 1180
    if (! ((int )*__s == (int )__sep)) {
#line 1180
      break;
    }
#line 1180
    fprintf(_coverage_fout, "64\n");
#line 1180
    fflush(_coverage_fout);
#line 1181
    __s ++;
  }
#line 1174
  fprintf(_coverage_fout, "74\n");
#line 1174
  fflush(_coverage_fout);
#line 1182
  __result = (char *)((void *)0);
#line 1174
  fprintf(_coverage_fout, "75\n");
#line 1174
  fflush(_coverage_fout);
#line 1183
  if ((int )*__s != 0) {
#line 1183
    fprintf(_coverage_fout, "69\n");
#line 1183
    fflush(_coverage_fout);
#line 1185
    tmp = __s;
#line 1185
    __s ++;
#line 1185
    __result = tmp;
#line 1183
    fprintf(_coverage_fout, "70\n");
#line 1183
    fflush(_coverage_fout);
#line 1186
    while (1) {
#line 1186
      fprintf(_coverage_fout, "66\n");
#line 1186
      fflush(_coverage_fout);
#line 1186
      if (! ((int )*__s != 0)) {
#line 1186
        break;
      }
#line 1186
      fprintf(_coverage_fout, "67\n");
#line 1186
      fflush(_coverage_fout);
#line 1187
      tmp___0 = __s;
#line 1187
      __s ++;
#line 1186
      fprintf(_coverage_fout, "68\n");
#line 1186
      fflush(_coverage_fout);
#line 1187
      if ((int )*tmp___0 == (int )__sep) {
#line 1187
        fprintf(_coverage_fout, "65\n");
#line 1187
        fflush(_coverage_fout);
#line 1189
        *(__s + -1) = (char )'\000';
#line 1190
        break;
      }
    }
#line 1183
    fprintf(_coverage_fout, "71\n");
#line 1183
    fflush(_coverage_fout);
#line 1192
    *__nextp = __s;
  }
#line 1174
  fprintf(_coverage_fout, "76\n");
#line 1174
  fflush(_coverage_fout);
#line 1194
  return (__result);
}
}
#line 1205
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
#line 1223
__inline static char *__strsep_1c(char **__s , char __reject ) ;
#line 1224 "/usr/include/bits/string2.h"
__inline static char *__strsep_1c(char **__s , char __reject ) 
{ register char *__retval ;
  char *tmp ;
  void *tmp___0 ;
  char *tmp___1 ;

  {
#line 1224
  fprintf(_coverage_fout, "81\n");
#line 1224
  fflush(_coverage_fout);
#line 1227
  __retval = *__s;
#line 1224
  fprintf(_coverage_fout, "82\n");
#line 1224
  fflush(_coverage_fout);
#line 1228
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    {
#line 1228
    fprintf(_coverage_fout, "77\n");
#line 1228
    fflush(_coverage_fout);
#line 1228
    tmp___1 = __builtin_strchr(__retval, (int )__reject);
#line 1228
    fprintf(_coverage_fout, "78\n");
#line 1228
    fflush(_coverage_fout);
#line 1228
    *__s = tmp___1;
    }
#line 1228
    fprintf(_coverage_fout, "80\n");
#line 1228
    fflush(_coverage_fout);
#line 1228
    if ((unsigned int )*__s != (unsigned int )((void *)0)) {
#line 1228
      fprintf(_coverage_fout, "79\n");
#line 1228
      fflush(_coverage_fout);
#line 1229
      tmp = *__s;
#line 1229
      (*__s) ++;
#line 1229
      *tmp = (char )'\000';
    }
  }
#line 1224
  fprintf(_coverage_fout, "83\n");
#line 1224
  fflush(_coverage_fout);
#line 1230
  return (__retval);
}
}
#line 1233
__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
#line 1234 "/usr/include/bits/string2.h"
__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
#line 1234
  fprintf(_coverage_fout, "94\n");
#line 1234
  fflush(_coverage_fout);
#line 1237
  __retval = *__s;
#line 1234
  fprintf(_coverage_fout, "95\n");
#line 1234
  fflush(_coverage_fout);
#line 1238
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
#line 1238
    fprintf(_coverage_fout, "91\n");
#line 1238
    fflush(_coverage_fout);
#line 1240
    __cp = __retval;
#line 1238
    fprintf(_coverage_fout, "92\n");
#line 1238
    fflush(_coverage_fout);
#line 1241
    while (1) {
#line 1241
      fprintf(_coverage_fout, "88\n");
#line 1241
      fflush(_coverage_fout);
#line 1243
      if ((int )*__cp == 0) {
#line 1243
        fprintf(_coverage_fout, "84\n");
#line 1243
        fflush(_coverage_fout);
#line 1245
        __cp = (char *)((void *)0);
#line 1246
        break;
      }
#line 1241
      fprintf(_coverage_fout, "89\n");
#line 1241
      fflush(_coverage_fout);
#line 1248
      if ((int )*__cp == (int )__reject1) {
#line 1248
        fprintf(_coverage_fout, "85\n");
#line 1248
        fflush(_coverage_fout);
#line 1250
        tmp = __cp;
#line 1250
        __cp ++;
#line 1250
        *tmp = (char )'\000';
#line 1251
        break;
      } else {
#line 1248
        fprintf(_coverage_fout, "87\n");
#line 1248
        fflush(_coverage_fout);
#line 1248
        if ((int )*__cp == (int )__reject2) {
#line 1248
          fprintf(_coverage_fout, "86\n");
#line 1248
          fflush(_coverage_fout);
#line 1250
          tmp = __cp;
#line 1250
          __cp ++;
#line 1250
          *tmp = (char )'\000';
#line 1251
          break;
        }
      }
#line 1241
      fprintf(_coverage_fout, "90\n");
#line 1241
      fflush(_coverage_fout);
#line 1253
      __cp ++;
    }
#line 1238
    fprintf(_coverage_fout, "93\n");
#line 1238
    fflush(_coverage_fout);
#line 1255
    *__s = __cp;
  }
#line 1234
  fprintf(_coverage_fout, "96\n");
#line 1234
  fflush(_coverage_fout);
#line 1257
  return (__retval);
}
}
#line 1260
__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) ;
#line 1262 "/usr/include/bits/string2.h"
__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
#line 1262
  fprintf(_coverage_fout, "109\n");
#line 1262
  fflush(_coverage_fout);
#line 1265
  __retval = *__s;
#line 1262
  fprintf(_coverage_fout, "110\n");
#line 1262
  fflush(_coverage_fout);
#line 1266
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
#line 1266
    fprintf(_coverage_fout, "106\n");
#line 1266
    fflush(_coverage_fout);
#line 1268
    __cp = __retval;
#line 1266
    fprintf(_coverage_fout, "107\n");
#line 1266
    fflush(_coverage_fout);
#line 1269
    while (1) {
#line 1269
      fprintf(_coverage_fout, "103\n");
#line 1269
      fflush(_coverage_fout);
#line 1271
      if ((int )*__cp == 0) {
#line 1271
        fprintf(_coverage_fout, "97\n");
#line 1271
        fflush(_coverage_fout);
#line 1273
        __cp = (char *)((void *)0);
#line 1274
        break;
      }
#line 1269
      fprintf(_coverage_fout, "104\n");
#line 1269
      fflush(_coverage_fout);
#line 1276
      if ((int )*__cp == (int )__reject1) {
#line 1276
        fprintf(_coverage_fout, "98\n");
#line 1276
        fflush(_coverage_fout);
#line 1278
        tmp = __cp;
#line 1278
        __cp ++;
#line 1278
        *tmp = (char )'\000';
#line 1279
        break;
      } else {
#line 1276
        fprintf(_coverage_fout, "102\n");
#line 1276
        fflush(_coverage_fout);
#line 1276
        if ((int )*__cp == (int )__reject2) {
#line 1276
          fprintf(_coverage_fout, "99\n");
#line 1276
          fflush(_coverage_fout);
#line 1278
          tmp = __cp;
#line 1278
          __cp ++;
#line 1278
          *tmp = (char )'\000';
#line 1279
          break;
        } else {
#line 1276
          fprintf(_coverage_fout, "101\n");
#line 1276
          fflush(_coverage_fout);
#line 1276
          if ((int )*__cp == (int )__reject3) {
#line 1276
            fprintf(_coverage_fout, "100\n");
#line 1276
            fflush(_coverage_fout);
#line 1278
            tmp = __cp;
#line 1278
            __cp ++;
#line 1278
            *tmp = (char )'\000';
#line 1279
            break;
          }
        }
      }
#line 1269
      fprintf(_coverage_fout, "105\n");
#line 1269
      fflush(_coverage_fout);
#line 1281
      __cp ++;
    }
#line 1266
    fprintf(_coverage_fout, "108\n");
#line 1266
    fflush(_coverage_fout);
#line 1283
    *__s = __cp;
  }
#line 1262
  fprintf(_coverage_fout, "111\n");
#line 1262
  fflush(_coverage_fout);
#line 1285
  return (__retval);
}
}
#line 589 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
#line 591
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
#line 1304 "/usr/include/bits/string2.h"
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
#line 1323
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
#line 140 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
#line 145
__inline static  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 148
__inline static  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 151
__inline static  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 158
__inline static  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 165
__inline static  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 173
__inline static  __attribute__((__nothrow__)) float strtof(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 176
__inline static  __attribute__((__nothrow__)) long double strtold(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 184
__inline static  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr ,
                                                          char ** __restrict  __endptr ,
                                                          int __base )  __attribute__((__nonnull__(1))) ;
#line 188
__inline static  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __base )  __attribute__((__nonnull__(1))) ;
#line 196
__inline static  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr ,
                                                               char ** __restrict  __endptr ,
                                                               int __base )  __attribute__((__nonnull__(1))) ;
#line 201
__inline static  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr ,
                                                                         char ** __restrict  __endptr ,
                                                                         int __base )  __attribute__((__nonnull__(1))) ;
#line 210
__inline static  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ,
                                                                int __base )  __attribute__((__nonnull__(1))) ;
#line 215
__inline static  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr ,
                                                                          char ** __restrict  __endptr ,
                                                                          int __base )  __attribute__((__nonnull__(1))) ;
#line 279
extern  __attribute__((__nothrow__)) double __strtod_internal(char const   * __restrict  __nptr ,
                                                              char ** __restrict  __endptr ,
                                                              int __group )  __attribute__((__nonnull__(1))) ;
#line 282
extern  __attribute__((__nothrow__)) float __strtof_internal(char const   * __restrict  __nptr ,
                                                             char ** __restrict  __endptr ,
                                                             int __group )  __attribute__((__nonnull__(1))) ;
#line 285
extern  __attribute__((__nothrow__)) long double __strtold_internal(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __group )  __attribute__((__nonnull__(1))) ;
#line 290
extern  __attribute__((__nothrow__)) long __strtol_internal(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr ,
                                                            int __base ,
                                                            int __group )  __attribute__((__nonnull__(1))) ;
#line 297
extern  __attribute__((__nothrow__)) unsigned long __strtoul_internal(char const   * __restrict  __nptr ,
                                                                      char ** __restrict  __endptr ,
                                                                      int __base ,
                                                                      int __group )  __attribute__((__nonnull__(1))) ;
#line 306
extern  __attribute__((__nothrow__)) long long __strtoll_internal(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr ,
                                                                  int __base ,
                                                                  int __group )  __attribute__((__nonnull__(1))) ;
#line 314
extern  __attribute__((__nothrow__)) unsigned long long __strtoull_internal(char const   * __restrict  __nptr ,
                                                                            char ** __restrict  __endptr ,
                                                                            int __base ,
                                                                            int __group )  __attribute__((__nonnull__(1))) ;
#line 327
__inline static  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 327 "/usr/include/stdlib.h"
__inline static double strtod(char const   * __restrict  __nptr ,
                              char ** __restrict  __endptr ) 
{ double tmp ;

  {
  {
#line 330
  fprintf(_coverage_fout, "112\n");
#line 330
  fflush(_coverage_fout);
#line 330
  tmp = __strtod_internal(__nptr, __endptr, 0);
  }
#line 327
  fprintf(_coverage_fout, "113\n");
#line 327
  fflush(_coverage_fout);
#line 330
  return (tmp);
}
}
#line 332
__inline static  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr ,
                                                          char ** __restrict  __endptr ,
                                                          int __base )  __attribute__((__nonnull__(1))) ;
#line 332 "/usr/include/stdlib.h"
__inline static long strtol(char const   * __restrict  __nptr ,
                            char ** __restrict  __endptr , int __base ) 
{ long tmp ;

  {
  {
#line 336
  fprintf(_coverage_fout, "114\n");
#line 336
  fflush(_coverage_fout);
#line 336
  tmp = __strtol_internal(__nptr, __endptr, __base, 0);
  }
#line 332
  fprintf(_coverage_fout, "115\n");
#line 332
  fflush(_coverage_fout);
#line 336
  return (tmp);
}
}
#line 338
__inline static  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __base )  __attribute__((__nonnull__(1))) ;
#line 338 "/usr/include/stdlib.h"
__inline static unsigned long strtoul(char const   * __restrict  __nptr ,
                                      char ** __restrict  __endptr , int __base ) 
{ unsigned long tmp ;

  {
  {
#line 342
  fprintf(_coverage_fout, "116\n");
#line 342
  fflush(_coverage_fout);
#line 342
  tmp = __strtoul_internal(__nptr, __endptr, __base, 0);
  }
#line 338
  fprintf(_coverage_fout, "117\n");
#line 338
  fflush(_coverage_fout);
#line 342
  return (tmp);
}
}
#line 348
__inline static  __attribute__((__nothrow__)) float strtof(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 348 "/usr/include/stdlib.h"
__inline static float strtof(char const   * __restrict  __nptr ,
                             char ** __restrict  __endptr ) 
{ float tmp ;

  {
  {
#line 351
  fprintf(_coverage_fout, "118\n");
#line 351
  fflush(_coverage_fout);
#line 351
  tmp = __strtof_internal(__nptr, __endptr, 0);
  }
#line 348
  fprintf(_coverage_fout, "119\n");
#line 348
  fflush(_coverage_fout);
#line 351
  return (tmp);
}
}
#line 354
__inline static  __attribute__((__nothrow__)) long double strtold(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 354 "/usr/include/stdlib.h"
__inline static long double strtold(char const   * __restrict  __nptr ,
                                    char ** __restrict  __endptr ) 
{ long double tmp ;

  {
  {
#line 357
  fprintf(_coverage_fout, "120\n");
#line 357
  fflush(_coverage_fout);
#line 357
  tmp = __strtold_internal(__nptr, __endptr, 0);
  }
#line 354
  fprintf(_coverage_fout, "121\n");
#line 354
  fflush(_coverage_fout);
#line 357
  return (tmp);
}
}
#line 364
__inline static  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr ,
                                                               char ** __restrict  __endptr ,
                                                               int __base )  __attribute__((__nonnull__(1))) ;
#line 364 "/usr/include/stdlib.h"
__inline static long long strtoq(char const   * __restrict  __nptr ,
                                 char ** __restrict  __endptr , int __base ) 
{ long long tmp ;

  {
  {
#line 368
  fprintf(_coverage_fout, "122\n");
#line 368
  fflush(_coverage_fout);
#line 368
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  }
#line 364
  fprintf(_coverage_fout, "123\n");
#line 364
  fflush(_coverage_fout);
#line 368
  return (tmp);
}
}
#line 370
__inline static  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr ,
                                                                         char ** __restrict  __endptr ,
                                                                         int __base )  __attribute__((__nonnull__(1))) ;
#line 370 "/usr/include/stdlib.h"
__inline static unsigned long long strtouq(char const   * __restrict  __nptr ,
                                           char ** __restrict  __endptr ,
                                           int __base ) 
{ unsigned long long tmp ;

  {
  {
#line 374
  fprintf(_coverage_fout, "124\n");
#line 374
  fflush(_coverage_fout);
#line 374
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  }
#line 370
  fprintf(_coverage_fout, "125\n");
#line 370
  fflush(_coverage_fout);
#line 374
  return (tmp);
}
}
#line 380
__inline static  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ,
                                                                int __base )  __attribute__((__nonnull__(1))) ;
#line 380 "/usr/include/stdlib.h"
__inline static long long strtoll(char const   * __restrict  __nptr ,
                                  char ** __restrict  __endptr , int __base ) 
{ long long tmp ;

  {
  {
#line 384
  fprintf(_coverage_fout, "126\n");
#line 384
  fflush(_coverage_fout);
#line 384
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  }
#line 380
  fprintf(_coverage_fout, "127\n");
#line 380
  fflush(_coverage_fout);
#line 384
  return (tmp);
}
}
#line 386
__inline static  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr ,
                                                                          char ** __restrict  __endptr ,
                                                                          int __base )  __attribute__((__nonnull__(1))) ;
#line 386 "/usr/include/stdlib.h"
__inline static unsigned long long strtoull(char const   * __restrict  __nptr ,
                                            char ** __restrict  __endptr ,
                                            int __base ) 
{ unsigned long long tmp ;

  {
  {
#line 390
  fprintf(_coverage_fout, "128\n");
#line 390
  fflush(_coverage_fout);
#line 390
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  }
#line 386
  fprintf(_coverage_fout, "129\n");
#line 386
  fflush(_coverage_fout);
#line 390
  return (tmp);
}
}
#line 396
__inline static  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 396 "/usr/include/stdlib.h"
__inline static double atof(char const   *__nptr ) 
{ double tmp ;

  {
  {
#line 399
  fprintf(_coverage_fout, "130\n");
#line 399
  fflush(_coverage_fout);
#line 399
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  }
#line 396
  fprintf(_coverage_fout, "131\n");
#line 396
  fflush(_coverage_fout);
#line 399
  return (tmp);
}
}
#line 401
__inline static  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 401 "/usr/include/stdlib.h"
__inline static int atoi(char const   *__nptr ) 
{ long tmp ;

  {
  {
#line 404
  fprintf(_coverage_fout, "132\n");
#line 404
  fflush(_coverage_fout);
#line 404
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  }
#line 401
  fprintf(_coverage_fout, "133\n");
#line 401
  fflush(_coverage_fout);
#line 404
  return ((int )tmp);
}
}
#line 406
__inline static  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 406 "/usr/include/stdlib.h"
__inline static long atol(char const   *__nptr ) 
{ long tmp ;

  {
  {
#line 409
  fprintf(_coverage_fout, "134\n");
#line 409
  fflush(_coverage_fout);
#line 409
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  }
#line 406
  fprintf(_coverage_fout, "135\n");
#line 406
  fflush(_coverage_fout);
#line 409
  return (tmp);
}
}
#line 415
__inline static  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 415 "/usr/include/stdlib.h"
__inline static long long atoll(char const   *__nptr ) 
{ long long tmp ;

  {
  {
#line 418
  fprintf(_coverage_fout, "136\n");
#line 418
  fflush(_coverage_fout);
#line 418
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  }
#line 415
  fprintf(_coverage_fout, "137\n");
#line 415
  fflush(_coverage_fout);
#line 418
  return (tmp);
}
}
#line 429
extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;
#line 432
extern  __attribute__((__nothrow__)) long a64l(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 445
extern  __attribute__((__nothrow__)) long random(void) ;
#line 448
extern  __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;
#line 454
extern  __attribute__((__nothrow__)) char *initstate(unsigned int __seed ,
                                                     char *__statebuf ,
                                                     size_t __statelen )  __attribute__((__nonnull__(2))) ;
#line 459
extern  __attribute__((__nothrow__)) char *setstate(char *__statebuf )  __attribute__((__nonnull__(1))) ;
#line 478
extern  __attribute__((__nothrow__)) int random_r(struct random_data * __restrict  __buf ,
                                                  int32_t * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 481
extern  __attribute__((__nothrow__)) int srandom_r(unsigned int __seed ,
                                                   struct random_data *__buf )  __attribute__((__nonnull__(2))) ;
#line 484
extern  __attribute__((__nothrow__)) int initstate_r(unsigned int __seed ,
                                                     char * __restrict  __statebuf ,
                                                     size_t __statelen ,
                                                     struct random_data * __restrict  __buf )  __attribute__((__nonnull__(2,4))) ;
#line 489
extern  __attribute__((__nothrow__)) int setstate_r(char * __restrict  __statebuf ,
                                                    struct random_data * __restrict  __buf )  __attribute__((__nonnull__(1,2))) ;
#line 498
extern  __attribute__((__nothrow__)) int rand(void) ;
#line 500
extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;
#line 505
extern  __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;
#line 513
extern  __attribute__((__nothrow__)) double drand48(void) ;
#line 514
extern  __attribute__((__nothrow__)) double erand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
#line 517
extern  __attribute__((__nothrow__)) long lrand48(void) ;
#line 518
extern  __attribute__((__nothrow__)) long nrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
#line 522
extern  __attribute__((__nothrow__)) long mrand48(void) ;
#line 523
extern  __attribute__((__nothrow__)) long jrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
#line 527
extern  __attribute__((__nothrow__)) void srand48(long __seedval ) ;
#line 528
extern  __attribute__((__nothrow__)) unsigned short *seed48(unsigned short *__seed16v )  __attribute__((__nonnull__(1))) ;
#line 530
extern  __attribute__((__nothrow__)) void lcong48(unsigned short *__param )  __attribute__((__nonnull__(1))) ;
#line 546
extern  __attribute__((__nothrow__)) int drand48_r(struct drand48_data * __restrict  __buffer ,
                                                   double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 548
extern  __attribute__((__nothrow__)) int erand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 553
extern  __attribute__((__nothrow__)) int lrand48_r(struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 556
extern  __attribute__((__nothrow__)) int nrand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 562
extern  __attribute__((__nothrow__)) int mrand48_r(struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 565
extern  __attribute__((__nothrow__)) int jrand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 571
extern  __attribute__((__nothrow__)) int srand48_r(long __seedval ,
                                                   struct drand48_data *__buffer )  __attribute__((__nonnull__(2))) ;
#line 574
extern  __attribute__((__nothrow__)) int seed48_r(unsigned short *__seed16v ,
                                                  struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;
#line 577
extern  __attribute__((__nothrow__)) int lcong48_r(unsigned short *__param ,
                                                   struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;
#line 600
extern  __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size )  __attribute__((__warn_unused_result__,
__malloc__)) ;
#line 603
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
#line 608
extern  __attribute__((__nothrow__)) void cfree(void *__ptr ) ;
#line 33 "/usr/include/alloca.h"
extern  __attribute__((__nothrow__)) void *alloca(size_t __size ) ;
#line 617 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) void *valloc(size_t __size )  __attribute__((__malloc__)) ;
#line 622
extern  __attribute__((__nothrow__)) int posix_memalign(void **__memptr ,
                                                        size_t __alignment ,
                                                        size_t __size )  __attribute__((__nonnull__(1))) ;
#line 628
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
#line 632
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1))) ;
#line 638
extern  __attribute__((__nothrow__)) int on_exit(void (*__func)(int __status ,
                                                                void *__arg ) ,
                                                 void *__arg )  __attribute__((__nonnull__(1))) ;
#line 646
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
#line 653
extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
#line 660
extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 665
extern  __attribute__((__nothrow__)) char *__secure_getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 672
extern  __attribute__((__nothrow__)) int putenv(char *__string )  __attribute__((__nonnull__(1))) ;
#line 678
extern  __attribute__((__nothrow__)) int setenv(char const   *__name ,
                                                char const   *__value ,
                                                int __replace )  __attribute__((__nonnull__(2))) ;
#line 682
extern  __attribute__((__nothrow__)) int unsetenv(char const   *__name ) ;
#line 689
extern  __attribute__((__nothrow__)) int clearenv(void) ;
#line 698
extern  __attribute__((__nothrow__)) char *mktemp(char *__template )  __attribute__((__nonnull__(1))) ;
#line 712
extern int mkstemp(char *__template )  __asm__("mkstemp64") __attribute__((__nonnull__(1))) ;
#line 729
extern  __attribute__((__nothrow__)) char *mkdtemp(char *__template )  __attribute__((__nonnull__(1))) ;
#line 738
extern int system(char const   *__command ) ;
#line 755
extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name ,
                                                    char * __restrict  __resolved ) ;
#line 773
extern void *bsearch(void const   *__key , void const   *__base ,
                     size_t __nmemb , size_t __size ,
                     int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,2,5))) ;
#line 779
extern void qsort(void *__base , size_t __nmemb , size_t __size ,
                  int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,4))) ;
#line 784
extern  __attribute__((__nothrow__)) int abs(int __x )  __attribute__((__const__)) ;
#line 785
extern  __attribute__((__nothrow__)) long labs(long __x )  __attribute__((__const__)) ;
#line 789
extern  __attribute__((__nothrow__)) long long llabs(long long __x )  __attribute__((__const__)) ;
#line 798
extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;
#line 800
extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;
#line 806
extern  __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer ,
                                                   long long __denom )  __attribute__((__const__)) ;
#line 820
extern  __attribute__((__nothrow__)) char *ecvt(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
#line 826
extern  __attribute__((__nothrow__)) char *fcvt(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
#line 832
extern  __attribute__((__nothrow__)) char *gcvt(double __value , int __ndigit ,
                                                char *__buf )  __attribute__((__nonnull__(3))) ;
#line 838
extern  __attribute__((__nothrow__)) char *qecvt(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
#line 841
extern  __attribute__((__nothrow__)) char *qfcvt(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
#line 844
extern  __attribute__((__nothrow__)) char *qgcvt(long double __value ,
                                                 int __ndigit , char *__buf )  __attribute__((__nonnull__(3))) ;
#line 850
extern  __attribute__((__nothrow__)) int ecvt_r(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign ,
                                                char * __restrict  __buf ,
                                                size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
#line 853
extern  __attribute__((__nothrow__)) int fcvt_r(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign ,
                                                char * __restrict  __buf ,
                                                size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
#line 857
extern  __attribute__((__nothrow__)) int qecvt_r(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign ,
                                                 char * __restrict  __buf ,
                                                 size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
#line 861
extern  __attribute__((__nothrow__)) int qfcvt_r(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign ,
                                                 char * __restrict  __buf ,
                                                 size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
#line 872
extern  __attribute__((__nothrow__)) int mblen(char const   *__s , size_t __n ) ;
#line 875
extern  __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict  __pwc ,
                                                char const   * __restrict  __s ,
                                                size_t __n ) ;
#line 879
extern  __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;
#line 883
extern  __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict  __pwcs ,
                                                     char const   * __restrict  __s ,
                                                     size_t __n ) ;
#line 886
extern  __attribute__((__nothrow__)) size_t wcstombs(char * __restrict  __s ,
                                                     wchar_t const   * __restrict  __pwcs ,
                                                     size_t __n ) ;
#line 897
extern  __attribute__((__nothrow__)) int rpmatch(char const   *__response )  __attribute__((__nonnull__(1))) ;
#line 925
extern int posix_openpt(int __oflag ) ;
#line 960
extern  __attribute__((__nothrow__)) int getloadavg(double *__loadavg ,
                                                    int __nelem )  __attribute__((__nonnull__(1))) ;
#line 81 "/usr/include/ctype.h"
extern unsigned short const   **__ctype_b_loc(void)  __attribute__((__const__)) ;
#line 83
extern __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__const__)) ;
#line 85
extern __int32_t const   **__ctype_toupper_loc(void)  __attribute__((__const__)) ;
#line 102
extern  __attribute__((__nothrow__)) int isalnum(int  ) ;
#line 103
extern  __attribute__((__nothrow__)) int isalpha(int  ) ;
#line 104
extern  __attribute__((__nothrow__)) int iscntrl(int  ) ;
#line 105
extern  __attribute__((__nothrow__)) int isdigit(int  ) ;
#line 106
extern  __attribute__((__nothrow__)) int islower(int  ) ;
#line 107
extern  __attribute__((__nothrow__)) int isgraph(int  ) ;
#line 108
extern  __attribute__((__nothrow__)) int isprint(int  ) ;
#line 109
extern  __attribute__((__nothrow__)) int ispunct(int  ) ;
#line 110
extern  __attribute__((__nothrow__)) int isspace(int  ) ;
#line 111
extern  __attribute__((__nothrow__)) int isupper(int  ) ;
#line 112
extern  __attribute__((__nothrow__)) int isxdigit(int  ) ;
#line 116
__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;
#line 119
__inline static  __attribute__((__nothrow__)) int toupper(int __c ) ;
#line 128
extern  __attribute__((__nothrow__)) int isblank(int  ) ;
#line 142
extern  __attribute__((__nothrow__)) int isascii(int __c ) ;
#line 146
extern  __attribute__((__nothrow__)) int toascii(int __c ) ;
#line 150
extern  __attribute__((__nothrow__)) int _toupper(int  ) ;
#line 151
extern  __attribute__((__nothrow__)) int _tolower(int  ) ;
#line 190
__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;
#line 190 "/usr/include/ctype.h"
__inline static int tolower(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
#line 190
  fprintf(_coverage_fout, "143\n");
#line 190
  fflush(_coverage_fout);
#line 193
  if (__c >= -128) {
#line 193
    fprintf(_coverage_fout, "141\n");
#line 193
    fflush(_coverage_fout);
#line 193
    if (__c < 256) {
      {
#line 193
      fprintf(_coverage_fout, "138\n");
#line 193
      fflush(_coverage_fout);
#line 193
      tmp___1 = __ctype_tolower_loc();
#line 193
      fprintf(_coverage_fout, "139\n");
#line 193
      fflush(_coverage_fout);
#line 193
      tmp___0 = (int )*(*tmp___1 + __c);
      }
    } else {
#line 193
      fprintf(_coverage_fout, "140\n");
#line 193
      fflush(_coverage_fout);
#line 193
      tmp___0 = (int )((int const   )__c);
    }
  } else {
#line 193
    fprintf(_coverage_fout, "142\n");
#line 193
    fflush(_coverage_fout);
#line 193
    tmp___0 = (int )((int const   )__c);
  }
#line 190
  fprintf(_coverage_fout, "144\n");
#line 190
  fflush(_coverage_fout);
#line 193
  return (tmp___0);
}
}
#line 196
__inline static  __attribute__((__nothrow__)) int toupper(int __c ) ;
#line 196 "/usr/include/ctype.h"
__inline static int toupper(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
#line 196
  fprintf(_coverage_fout, "150\n");
#line 196
  fflush(_coverage_fout);
#line 199
  if (__c >= -128) {
#line 199
    fprintf(_coverage_fout, "148\n");
#line 199
    fflush(_coverage_fout);
#line 199
    if (__c < 256) {
      {
#line 199
      fprintf(_coverage_fout, "145\n");
#line 199
      fflush(_coverage_fout);
#line 199
      tmp___1 = __ctype_toupper_loc();
#line 199
      fprintf(_coverage_fout, "146\n");
#line 199
      fflush(_coverage_fout);
#line 199
      tmp___0 = (int )*(*tmp___1 + __c);
      }
    } else {
#line 199
      fprintf(_coverage_fout, "147\n");
#line 199
      fflush(_coverage_fout);
#line 199
      tmp___0 = (int )((int const   )__c);
    }
  } else {
#line 199
    fprintf(_coverage_fout, "149\n");
#line 199
    fflush(_coverage_fout);
#line 199
    tmp___0 = (int )((int const   )__c);
  }
#line 196
  fprintf(_coverage_fout, "151\n");
#line 196
  fflush(_coverage_fout);
#line 199
  return (tmp___0);
}
}
#line 69 "/usr/include/assert.h"
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_fail(char const   *__assertion ,
                                  char const   *__file , unsigned int __line ,
                                  char const   *__function ) ;
#line 74
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_perror_fail(int __errnum , char const   *__file ,
                                         unsigned int __line ,
                                         char const   *__function ) ;
#line 82
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert(char const   *__assertion , char const   *__file ,
                             int __line ) ;
#line 104 "/usr/include/bits/sigset.h"
__inline static int __sigismember(__sigset_t const   *__set , int __sig ) ;
#line 105
__inline static int __sigaddset(__sigset_t *__set , int __sig ) ;
#line 106
__inline static int __sigdelset(__sigset_t *__set , int __sig ) ;
#line 118 "/usr/include/bits/sigset.h"
__inline static int __sigismember(__sigset_t const   *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
#line 118
  fprintf(_coverage_fout, "154\n");
#line 118
  fflush(_coverage_fout);
#line 118
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
#line 118
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
#line 118
  fprintf(_coverage_fout, "155\n");
#line 118
  fflush(_coverage_fout);
#line 118
  if (__set->__val[__word] & __mask) {
#line 118
    fprintf(_coverage_fout, "152\n");
#line 118
    fflush(_coverage_fout);
#line 118
    tmp = 1;
  } else {
#line 118
    fprintf(_coverage_fout, "153\n");
#line 118
    fflush(_coverage_fout);
#line 118
    tmp = 0;
  }
#line 118
  fprintf(_coverage_fout, "156\n");
#line 118
  fflush(_coverage_fout);
#line 118
  return (tmp);
}
}
#line 119 "/usr/include/bits/sigset.h"
__inline static int __sigaddset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
#line 119
  fprintf(_coverage_fout, "157\n");
#line 119
  fflush(_coverage_fout);
#line 119
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
#line 119
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
#line 119
  __set->__val[__word] |= __mask;
#line 119
  fprintf(_coverage_fout, "158\n");
#line 119
  fflush(_coverage_fout);
#line 119
  return (0);
}
}
#line 120 "/usr/include/bits/sigset.h"
__inline static int __sigdelset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
#line 120
  fprintf(_coverage_fout, "159\n");
#line 120
  fflush(_coverage_fout);
#line 120
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
#line 120
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
#line 120
  __set->__val[__word] &= ~ __mask;
#line 120
  fprintf(_coverage_fout, "160\n");
#line 120
  fflush(_coverage_fout);
#line 120
  return (0);
}
}
#line 80 "/usr/include/signal.h"
extern  __attribute__((__nothrow__)) __sighandler_t __sysv_signal(int __sig ,
                                                                  void (*__handler)(int  ) ) ;
#line 92
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig ,
                                                           void (*__handler)(int  ) ) ;
#line 117
extern  __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig ) ;
#line 124
extern  __attribute__((__nothrow__)) int killpg(__pid_t __pgrp , int __sig ) ;
#line 129
extern  __attribute__((__nothrow__)) int raise(int __sig ) ;
#line 134
extern  __attribute__((__nothrow__)) __sighandler_t ssignal(int __sig ,
                                                            void (*__handler)(int  ) ) ;
#line 136
extern  __attribute__((__nothrow__)) int gsignal(int __sig ) ;
#line 141
extern void psignal(int __sig , char const   *__s ) ;
#line 153
extern int __sigpause(int __sig_or_mask , int __is_sig ) ;
#line 181
extern  __attribute__((__nothrow__)) int sigblock(int __mask )  __attribute__((__deprecated__)) ;
#line 184
extern  __attribute__((__nothrow__)) int sigsetmask(int __mask )  __attribute__((__deprecated__)) ;
#line 187
extern  __attribute__((__nothrow__)) int siggetmask(void)  __attribute__((__deprecated__)) ;
#line 216
extern  __attribute__((__nothrow__)) int sigemptyset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
#line 219
extern  __attribute__((__nothrow__)) int sigfillset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
#line 222
extern  __attribute__((__nothrow__)) int sigaddset(sigset_t *__set ,
                                                   int __signo )  __attribute__((__nonnull__(1))) ;
#line 225
extern  __attribute__((__nothrow__)) int sigdelset(sigset_t *__set ,
                                                   int __signo )  __attribute__((__nonnull__(1))) ;
#line 228
extern  __attribute__((__nothrow__)) int sigismember(sigset_t const   *__set ,
                                                     int __signo )  __attribute__((__nonnull__(1))) ;
#line 249
extern  __attribute__((__nothrow__)) int sigprocmask(int __how ,
                                                     sigset_t const   * __restrict  __set ,
                                                     sigset_t * __restrict  __oset ) ;
#line 257
extern int sigsuspend(sigset_t const   *__set )  __attribute__((__nonnull__(1))) ;
#line 260
extern  __attribute__((__nothrow__)) int sigaction(int __sig ,
                                                   struct sigaction  const  * __restrict  __act ,
                                                   struct sigaction * __restrict  __oact ) ;
#line 264
extern  __attribute__((__nothrow__)) int sigpending(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
#line 271
extern int sigwait(sigset_t const   * __restrict  __set ,
                   int * __restrict  __sig )  __attribute__((__nonnull__(1,2))) ;
#line 279
extern int sigwaitinfo(sigset_t const   * __restrict  __set ,
                       siginfo_t * __restrict  __info )  __attribute__((__nonnull__(1))) ;
#line 287
extern int sigtimedwait(sigset_t const   * __restrict  __set ,
                        siginfo_t * __restrict  __info ,
                        struct timespec  const  * __restrict  __timeout )  __attribute__((__nonnull__(1))) ;
#line 294
extern  __attribute__((__nothrow__)) int sigqueue(__pid_t __pid , int __sig ,
                                                  union sigval __val ) ;
#line 304
extern char const   * const  _sys_siglist[65] ;
#line 305
extern char const   * const  sys_siglist[65] ;
#line 328
extern  __attribute__((__nothrow__)) int sigvec(int __sig ,
                                                struct sigvec  const  *__vec ,
                                                struct sigvec *__ovec ) ;
#line 336
extern  __attribute__((__nothrow__)) int sigreturn(struct sigcontext *__scp ) ;
#line 346
extern  __attribute__((__nothrow__)) int siginterrupt(int __sig ,
                                                      int __interrupt ) ;
#line 357
extern  __attribute__((__nothrow__)) int sigstack(struct sigstack *__ss ,
                                                  struct sigstack *__oss )  __attribute__((__deprecated__)) ;
#line 362
extern  __attribute__((__nothrow__)) int sigaltstack(struct sigaltstack  const  * __restrict  __ss ,
                                                     struct sigaltstack * __restrict  __oss ) ;
#line 31 "/usr/include/bits/sigthread.h"
extern  __attribute__((__nothrow__)) int pthread_sigmask(int __how ,
                                                         __sigset_t const   * __restrict  __newmask ,
                                                         __sigset_t * __restrict  __oldmask ) ;
#line 36
extern  __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid ,
                                                      int __signo ) ;
#line 394 "/usr/include/signal.h"
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;
#line 396
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;
#line 36 "buffer.h"
extern buffer_array *buffer_array_init(void) ;
#line 37
extern void buffer_array_free(buffer_array *b ) ;
#line 38
extern void buffer_array_reset(buffer_array *b ) ;
#line 39
extern buffer *buffer_array_append_get_buffer(buffer_array *b ) ;
#line 41
extern buffer *buffer_init(void) ;
#line 42
extern buffer *buffer_init_buffer(buffer *b ) ;
#line 43
extern buffer *buffer_init_string(char const   *str ) ;
#line 44
extern void buffer_free(buffer *b ) ;
#line 45
extern void buffer_reset(buffer *b ) ;
#line 47
extern int buffer_prepare_copy(buffer *b , size_t size ) ;
#line 48
extern int buffer_prepare_append(buffer *b , size_t size ) ;
#line 50
extern int buffer_copy_string(buffer *b , char const   *s ) ;
#line 51
extern int buffer_copy_string_len(buffer *b , char const   *s , size_t s_len ) ;
#line 52
extern int buffer_copy_string_buffer(buffer *b , buffer const   *src ) ;
#line 53
extern int buffer_copy_string_hex(buffer *b , char const   *in , size_t in_len ) ;
#line 55
extern int buffer_copy_long(buffer *b , long val ) ;
#line 57
extern int buffer_copy_memory(buffer *b , char const   *s , size_t s_len ) ;
#line 59
extern int buffer_append_string(buffer *b , char const   *s ) ;
#line 60
extern int buffer_append_string_len(buffer *b , char const   *s , size_t s_len ) ;
#line 61
extern int buffer_append_string_buffer(buffer *b , buffer const   *src ) ;
#line 62
extern int buffer_append_string_lfill(buffer *b , char const   *s ,
                                      size_t maxlen ) ;
#line 63
extern int buffer_append_string_rfill(buffer *b , char const   *s ,
                                      size_t maxlen ) ;
#line 65
extern int buffer_append_long_hex(buffer *b , unsigned long len ) ;
#line 66
extern int buffer_append_long(buffer *b , long val ) ;
#line 72
extern int buffer_copy_off_t(buffer *b , off_t val ) ;
#line 73
extern int buffer_append_off_t(buffer *b , off_t val ) ;
#line 76
extern int buffer_append_memory(buffer *b , char const   *s , size_t s_len ) ;
#line 78
extern char *buffer_search_string_len(buffer *b , char const   *needle ,
                                      size_t len ) ;
#line 80
extern int buffer_is_empty(buffer *b ) ;
#line 81
extern int buffer_is_equal(buffer *a , buffer *b ) ;
#line 82
extern int buffer_is_equal_right_len(buffer *a , buffer *b , size_t len ) ;
#line 83
extern int buffer_is_equal_string(buffer *a , char const   *s , size_t b_len ) ;
#line 84
extern int buffer_caseless_compare(char const   *a , size_t a_len ,
                                   char const   *b , size_t b_len ) ;
#line 96
extern int buffer_append_string_encoded(buffer *b , char const   *s ,
                                        size_t s_len ,
                                        buffer_encoding_t encoding ) ;
#line 98
extern int buffer_urldecode_path(buffer *url ) ;
#line 99
extern int buffer_urldecode_query(buffer *url ) ;
#line 100
extern int buffer_path_simplify(buffer *dest , buffer *src ) ;
#line 102
extern int buffer_to_lower(buffer *b ) ;
#line 103
extern int buffer_to_upper(buffer *b ) ;
#line 106
extern int LI_ltostr(char *buf , long val ) ;
#line 107
extern char hex2int(unsigned char c ) ;
#line 108
extern char int2hex(char i ) ;
#line 110
extern int light_isdigit(int c ) ;
#line 111
extern int light_isxdigit(int c ) ;
#line 112
extern int light_isalpha(int c ) ;
#line 113
extern int light_isalnum(int c ) ;
#line 73 "/usr/include/sys/time.h"
extern  __attribute__((__nothrow__)) int gettimeofday(struct timeval * __restrict  __tv ,
                                                      __timezone_ptr_t __tz )  __attribute__((__nonnull__(1))) ;
#line 79
extern  __attribute__((__nothrow__)) int settimeofday(struct timeval  const  *__tv ,
                                                      struct timezone  const  *__tz )  __attribute__((__nonnull__(1))) ;
#line 87
extern  __attribute__((__nothrow__)) int adjtime(struct timeval  const  *__delta ,
                                                 struct timeval *__olddelta ) ;
#line 127
extern  __attribute__((__nothrow__)) int getitimer(__itimer_which_t __which ,
                                                   struct itimerval *__value ) ;
#line 133
extern  __attribute__((__nothrow__)) int setitimer(__itimer_which_t __which ,
                                                   struct itimerval  const  * __restrict  __new ,
                                                   struct itimerval * __restrict  __old ) ;
#line 140
extern  __attribute__((__nothrow__)) int utimes(char const   *__file ,
                                                struct timeval  const  *__tvp )  __attribute__((__nonnull__(1))) ;
#line 145
extern  __attribute__((__nothrow__)) int lutimes(char const   *__file ,
                                                 struct timeval  const  *__tvp )  __attribute__((__nonnull__(1))) ;
#line 149
extern  __attribute__((__nothrow__)) int futimes(int __fd ,
                                                 struct timeval  const  *__tvp ) ;
#line 217 "/usr/include/sys/stat.h"
__inline static  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path ,
                                                       struct stat * __restrict  __statbuf )  __asm__("stat64") __attribute__((__nonnull__(1,2))) ;
#line 220
__inline static  __attribute__((__nothrow__)) int fstat(int __fd ,
                                                        struct stat *__statbuf )  __asm__("fstat64") __attribute__((__nonnull__(2))) ;
#line 265
__inline static  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path ,
                                                        struct stat * __restrict  __statbuf )  __asm__("lstat64") __attribute__((__nonnull__(1,2))) ;
#line 282
extern  __attribute__((__nothrow__)) int chmod(char const   *__file ,
                                               __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 289
extern  __attribute__((__nothrow__)) int lchmod(char const   *__file ,
                                                __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 295
extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;
#line 309
extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;
#line 318
extern  __attribute__((__nothrow__)) int mkdir(char const   *__path ,
                                               __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 333
__inline static  __attribute__((__nothrow__)) int mknod(char const   *__path ,
                                                        __mode_t __mode ,
                                                        __dev_t __dev )  __attribute__((__nonnull__(1))) ;
#line 347
extern  __attribute__((__nothrow__)) int mkfifo(char const   *__path ,
                                                __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 408
extern  __attribute__((__nothrow__)) int __fxstat(int __ver , int __fildes ,
                                                  struct stat *__stat_buf )  __asm__("__fxstat64") __attribute__((__nonnull__(3))) ;
#line 411
extern  __attribute__((__nothrow__)) int __xstat(int __ver ,
                                                 char const   *__filename ,
                                                 struct stat *__stat_buf )  __asm__("__xstat64") __attribute__((__nonnull__(2,3))) ;
#line 414
extern  __attribute__((__nothrow__)) int __lxstat(int __ver ,
                                                  char const   *__filename ,
                                                  struct stat *__stat_buf )  __asm__("__lxstat64") __attribute__((__nonnull__(2,3))) ;
#line 417
extern  __attribute__((__nothrow__)) int __fxstatat(int __ver , int __fildes ,
                                                    char const   *__filename ,
                                                    struct stat *__stat_buf ,
                                                    int __flag )  __asm__("__fxstatat64") __attribute__((__nonnull__(3,4))) ;
#line 440
extern  __attribute__((__nothrow__)) int __xmknod(int __ver ,
                                                  char const   *__path ,
                                                  __mode_t __mode ,
                                                  __dev_t *__dev )  __attribute__((__nonnull__(2,4))) ;
#line 443
extern  __attribute__((__nothrow__)) int __xmknodat(int __ver , int __fd ,
                                                    char const   *__path ,
                                                    __mode_t __mode ,
                                                    __dev_t *__dev )  __attribute__((__nonnull__(3,5))) ;
#line 450
__inline static  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path ,
                                                       struct stat * __restrict  __statbuf )  __asm__("stat64") __attribute__((__nonnull__(1,2))) ;
#line 450 "/usr/include/sys/stat.h"
__inline static int stat(char const   * __restrict  __path ,
                         struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  {
#line 453
  fprintf(_coverage_fout, "161\n");
#line 453
  fflush(_coverage_fout);
#line 453
  tmp = __xstat(3, (char const   *)__path, (struct stat *)__statbuf);
  }
#line 450
  fprintf(_coverage_fout, "162\n");
#line 450
  fflush(_coverage_fout);
#line 453
  return (tmp);
}
}
#line 457
__inline static  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path ,
                                                        struct stat * __restrict  __statbuf )  __asm__("lstat64") __attribute__((__nonnull__(1,2))) ;
#line 457 "/usr/include/sys/stat.h"
__inline static int lstat(char const   * __restrict  __path ,
                          struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  {
#line 460
  fprintf(_coverage_fout, "163\n");
#line 460
  fflush(_coverage_fout);
#line 460
  tmp = __lxstat(3, (char const   *)__path, (struct stat *)__statbuf);
  }
#line 457
  fprintf(_coverage_fout, "164\n");
#line 457
  fflush(_coverage_fout);
#line 460
  return (tmp);
}
}
#line 464
__inline static  __attribute__((__nothrow__)) int fstat(int __fd ,
                                                        struct stat *__statbuf )  __asm__("fstat64") __attribute__((__nonnull__(2))) ;
#line 464 "/usr/include/sys/stat.h"
__inline static int fstat(int __fd , struct stat *__statbuf ) 
{ int tmp ;

  {
  {
#line 467
  fprintf(_coverage_fout, "165\n");
#line 467
  fflush(_coverage_fout);
#line 467
  tmp = __fxstat(3, __fd, __statbuf);
  }
#line 464
  fprintf(_coverage_fout, "166\n");
#line 464
  fflush(_coverage_fout);
#line 467
  return (tmp);
}
}
#line 480
__inline static  __attribute__((__nothrow__)) int mknod(char const   *__path ,
                                                        __mode_t __mode ,
                                                        __dev_t __dev )  __attribute__((__nonnull__(1))) ;
#line 480 "/usr/include/sys/stat.h"
__inline static int mknod(char const   *__path , __mode_t __mode ,
                          __dev_t __dev ) 
{ int tmp ;

  {
  {
#line 483
  fprintf(_coverage_fout, "167\n");
#line 483
  fflush(_coverage_fout);
#line 483
  tmp = __xmknod(1, __path, __mode, & __dev);
  }
#line 480
  fprintf(_coverage_fout, "168\n");
#line 480
  fflush(_coverage_fout);
#line 483
  return (tmp);
}
}
#line 298 "/usr/include/inttypes.h"
extern  __attribute__((__nothrow__)) intmax_t imaxabs(intmax_t __n )  __attribute__((__const__)) ;
#line 301
extern  __attribute__((__nothrow__)) imaxdiv_t imaxdiv(intmax_t __numer ,
                                                       intmax_t __denom )  __attribute__((__const__)) ;
#line 305
__inline static  __attribute__((__nothrow__)) intmax_t strtoimax(char const   * __restrict  nptr ,
                                                                 char ** __restrict  endptr ,
                                                                 int base ) ;
#line 309
__inline static  __attribute__((__nothrow__)) uintmax_t strtoumax(char const   * __restrict  nptr ,
                                                                  char ** __restrict  endptr ,
                                                                  int base ) ;
#line 313
__inline static  __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                 __gwchar_t ** __restrict  endptr ,
                                                                 int base ) ;
#line 318
__inline static  __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                  __gwchar_t ** __restrict  endptr ,
                                                                  int base ) ;
#line 396
__inline static  __attribute__((__nothrow__)) intmax_t strtoimax(char const   * __restrict  nptr ,
                                                                 char ** __restrict  endptr ,
                                                                 int base ) ;
#line 396 "/usr/include/inttypes.h"
__inline static intmax_t strtoimax(char const   * __restrict  nptr ,
                                   char ** __restrict  endptr , int base ) 
{ long long tmp ;

  {
  {
#line 400
  fprintf(_coverage_fout, "169\n");
#line 400
  fflush(_coverage_fout);
#line 400
  tmp = __strtoll_internal(nptr, endptr, base, 0);
  }
#line 396
  fprintf(_coverage_fout, "170\n");
#line 396
  fflush(_coverage_fout);
#line 400
  return (tmp);
}
}
#line 414
__inline static  __attribute__((__nothrow__)) uintmax_t strtoumax(char const   * __restrict  nptr ,
                                                                  char ** __restrict  endptr ,
                                                                  int base ) ;
#line 414 "/usr/include/inttypes.h"
__inline static uintmax_t strtoumax(char const   * __restrict  nptr ,
                                    char ** __restrict  endptr , int base ) 
{ unsigned long long tmp ;

  {
  {
#line 418
  fprintf(_coverage_fout, "171\n");
#line 418
  fflush(_coverage_fout);
#line 418
  tmp = __strtoull_internal(nptr, endptr, base, 0);
  }
#line 414
  fprintf(_coverage_fout, "172\n");
#line 414
  fflush(_coverage_fout);
#line 418
  return (tmp);
}
}
#line 424
extern  __attribute__((__nothrow__)) long long __wcstoll_internal(__gwchar_t const   * __restrict  __nptr ,
                                                                  __gwchar_t ** __restrict  __endptr ,
                                                                  int __base ,
                                                                  int __group ) ;
#line 430
__inline static  __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                 __gwchar_t ** __restrict  endptr ,
                                                                 int base ) ;
#line 430 "/usr/include/inttypes.h"
__inline static intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                   __gwchar_t ** __restrict  endptr , int base ) 
{ long long tmp ;

  {
  {
#line 434
  fprintf(_coverage_fout, "173\n");
#line 434
  fflush(_coverage_fout);
#line 434
  tmp = __wcstoll_internal(nptr, endptr, base, 0);
  }
#line 430
  fprintf(_coverage_fout, "174\n");
#line 430
  fflush(_coverage_fout);
#line 434
  return (tmp);
}
}
#line 441
extern  __attribute__((__nothrow__)) unsigned long long __wcstoull_internal(__gwchar_t const   * __restrict  __nptr ,
                                                                            __gwchar_t ** __restrict  __endptr ,
                                                                            int __base ,
                                                                            int __group ) ;
#line 449
__inline static  __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                  __gwchar_t ** __restrict  endptr ,
                                                                  int base ) ;
#line 449 "/usr/include/inttypes.h"
__inline static uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                    __gwchar_t ** __restrict  endptr , int base ) 
{ unsigned long long tmp ;

  {
  {
#line 453
  fprintf(_coverage_fout, "175\n");
#line 453
  fflush(_coverage_fout);
#line 453
  tmp = __wcstoull_internal(nptr, endptr, base, 0);
  }
#line 449
  fprintf(_coverage_fout, "176\n");
#line 449
  fflush(_coverage_fout);
#line 453
  return (tmp);
}
}
#line 249 "/usr/include/pcre.h"
extern void *(*pcre_malloc)(size_t  ) ;
#line 250
extern void (*pcre_free)(void * ) ;
#line 251
extern void *(*pcre_stack_malloc)(size_t  ) ;
#line 252
extern void (*pcre_stack_free)(void * ) ;
#line 253
extern int (*pcre_callout)(pcre_callout_block * ) ;
#line 264
extern pcre *pcre_compile(char const   * , int  , char const   ** , int * ,
                          unsigned char const   * ) ;
#line 266
extern pcre *pcre_compile2(char const   * , int  , int * , char const   ** ,
                           int * , unsigned char const   * ) ;
#line 268
extern int pcre_config(int  , void * ) ;
#line 269
extern int pcre_copy_named_substring(pcre const   * , char const   * , int * ,
                                     int  , char const   * , char * , int  ) ;
#line 271
extern int pcre_copy_substring(char const   * , int * , int  , int  , char * ,
                               int  ) ;
#line 273
extern int pcre_dfa_exec(pcre const   * , pcre_extra const   * ,
                         char const   * , int  , int  , int  , int * , int  ,
                         int * , int  ) ;
#line 275
extern int pcre_exec(pcre const   * , pcre_extra const   * , char const   * ,
                     int  , int  , int  , int * , int  ) ;
#line 277
extern void pcre_free_substring(char const   * ) ;
#line 278
extern void pcre_free_substring_list(char const   ** ) ;
#line 279
extern int pcre_fullinfo(pcre const   * , pcre_extra const   * , int  , void * ) ;
#line 281
extern int pcre_get_named_substring(pcre const   * , char const   * , int * ,
                                    int  , char const   * , char const   ** ) ;
#line 283
extern int pcre_get_stringnumber(pcre const   * , char const   * ) ;
#line 284
extern int pcre_get_stringtable_entries(pcre const   * , char const   * ,
                                        char ** , char ** ) ;
#line 286
extern int pcre_get_substring(char const   * , int * , int  , int  ,
                              char const   ** ) ;
#line 288
extern int pcre_get_substring_list(char const   * , int * , int  ,
                                   char const   *** ) ;
#line 290
extern int pcre_info(pcre const   * , int * , int * ) ;
#line 291
extern unsigned char const   *pcre_maketables(void) ;
#line 292
extern int pcre_refcount(pcre * , int  ) ;
#line 293
extern pcre_extra *pcre_study(pcre const   * , int  , char const   ** ) ;
#line 294
extern char const   *pcre_version(void) ;
#line 50 "array.h"
extern data_count *data_count_init(void) ;
#line 58
extern data_string *data_string_init(void) ;
#line 59
extern data_string *data_response_init(void) ;
#line 67
extern data_array *data_array_init(void) ;
#line 129
extern data_config *data_config_init(void) ;
#line 137
extern data_integer *data_integer_init(void) ;
#line 154
extern data_fastcgi *data_fastcgi_init(void) ;
#line 156
extern array *array_init(void) ;
#line 157
extern array *array_init_array(array *a ) ;
#line 158
extern void array_free(array *a ) ;
#line 159
extern void array_reset(array *a ) ;
#line 160
extern int array_insert_unique(array *a , data_unset *str ) ;
#line 161
extern data_unset *array_pop(array *a ) ;
#line 162
extern int array_print(array *a , int depth ) ;
#line 163
extern data_unset *array_get_unused_element(array *a , data_type_t t ) ;
#line 164
extern data_unset *array_get_element(array *a , char const   *key ) ;
#line 165
extern data_unset *array_replace(array *a , data_unset *du ) ;
#line 166
extern int array_strcasecmp(char const   *a , size_t a_len , char const   *b ,
                            size_t b_len ) ;
#line 167
extern void array_print_indent(int depth ) ;
#line 168
extern size_t array_get_max_key_length(array *a ) ;
#line 49 "chunk.h"
extern chunkqueue *chunkqueue_init(void) ;
#line 50
extern int chunkqueue_set_tempdirs(chunkqueue *c , array *tempdirs ) ;
#line 51
extern int chunkqueue_append_file(chunkqueue *c , buffer *fn , off_t offset ,
                                  off_t len ) ;
#line 52
extern int chunkqueue_append_mem(chunkqueue *c , char const   *mem , size_t len ) ;
#line 53
extern int chunkqueue_append_buffer(chunkqueue *c , buffer *mem ) ;
#line 54
extern int chunkqueue_append_buffer_weak(chunkqueue *c , buffer *mem ) ;
#line 55
extern int chunkqueue_prepend_buffer(chunkqueue *c , buffer *mem ) ;
#line 57
extern buffer *chunkqueue_get_append_buffer(chunkqueue *c ) ;
#line 58
extern buffer *chunkqueue_get_prepend_buffer(chunkqueue *c ) ;
#line 59
extern chunk *chunkqueue_get_append_tempfile(chunkqueue *cq ) ;
#line 61
extern int chunkqueue_remove_finished_chunks(chunkqueue *cq ) ;
#line 63
extern off_t chunkqueue_length(chunkqueue *c ) ;
#line 64
extern off_t chunkqueue_written(chunkqueue *c ) ;
#line 65
extern void chunkqueue_free(chunkqueue *c ) ;
#line 66
extern void chunkqueue_reset(chunkqueue *c ) ;
#line 68
extern int chunkqueue_is_empty(chunkqueue *c ) ;
#line 82 "keyvalue.h"
extern char const   *get_http_status_name(int i ) ;
#line 83
extern char const   *get_http_version_name(int i ) ;
#line 84
extern char const   *get_http_method_name(http_method_t i ) ;
#line 85
extern char const   *get_http_status_body_name(int i ) ;
#line 86
extern int get_http_version_key(char const   *s ) ;
#line 87
extern http_method_t get_http_method_key(char const   *s ) ;
#line 89
extern char const   *keyvalue_get_value(keyvalue *kv , int k ) ;
#line 90
extern int keyvalue_get_key(keyvalue *kv , char const   *s ) ;
#line 92
extern keyvalue_buffer *keyvalue_buffer_init(void) ;
#line 93
extern int keyvalue_buffer_append(keyvalue_buffer *kvb , int k ,
                                  char const   *value ) ;
#line 94
extern void keyvalue_buffer_free(keyvalue_buffer *kvb ) ;
#line 96
extern s_keyvalue_buffer *s_keyvalue_buffer_init(void) ;
#line 97
extern int s_keyvalue_buffer_append(s_keyvalue_buffer *kvb , char const   *key ,
                                    char const   *value ) ;
#line 98
extern void s_keyvalue_buffer_free(s_keyvalue_buffer *kvb ) ;
#line 100
extern httpauth_keyvalue_buffer *httpauth_keyvalue_buffer_init(void) ;
#line 101
extern int httpauth_keyvalue_buffer_append(httpauth_keyvalue_buffer *kvb ,
                                           char const   *key ,
                                           char const   *realm ,
                                           httpauth_type type ) ;
#line 102
extern void httpauth_keyvalue_buffer_free(httpauth_keyvalue_buffer *kvb ) ;
#line 104
extern pcre_keyvalue_buffer *pcre_keyvalue_buffer_init(void) ;
#line 105
extern int pcre_keyvalue_buffer_append(pcre_keyvalue_buffer *kvb ,
                                       char const   *key , char const   *value ) ;
#line 106
extern void pcre_keyvalue_buffer_free(pcre_keyvalue_buffer *kvb ) ;
#line 11 "bitset.h"
extern bitset *bitset_init(size_t nbits ) ;
#line 12
extern void bitset_reset(bitset *set ) ;
#line 13
extern void bitset_free(bitset *set ) ;
#line 15
extern void bitset_clear_bit(bitset *set , size_t pos ) ;
#line 16
extern void bitset_set_bit(bitset *set , size_t pos ) ;
#line 17
extern int bitset_test_bit(bitset *set , size_t pos ) ;
#line 90 "/usr/include/sys/epoll.h"
extern  __attribute__((__nothrow__)) int epoll_create(int __size ) ;
#line 99
extern  __attribute__((__nothrow__)) int epoll_ctl(int __epfd , int __op ,
                                                   int __fd ,
                                                   struct epoll_event *__event ) ;
#line 113
extern int epoll_wait(int __epfd , struct epoll_event *__events ,
                      int __maxevents , int __timeout ) ;
#line 122
extern int epoll_pwait(int __epfd , struct epoll_event *__events ,
                       int __maxevents , int __timeout ,
                       __sigset_t const   *__ss ) ;
#line 58 "/usr/include/sys/poll.h"
extern int poll(struct pollfd *__fds , nfds_t __nfds , int __timeout ) ;
#line 193 "fdevent.h"
extern fdevents *fdevent_init(size_t maxfds , fdevent_handler_t type ) ;
#line 194
extern int fdevent_reset(fdevents *ev ) ;
#line 195
extern void fdevent_free(fdevents *ev ) ;
#line 197
extern int fdevent_event_add(fdevents *ev , int *fde_ndx , int fd , int events ) ;
#line 198
extern int fdevent_event_del(fdevents *ev , int *fde_ndx , int fd ) ;
#line 199
extern int fdevent_event_get_revent(fdevents *ev , size_t ndx ) ;
#line 200
extern int fdevent_event_get_fd(fdevents *ev , size_t ndx ) ;
#line 201
extern fdevent_handler fdevent_get_handler(fdevents *ev , int fd ) ;
#line 202
extern void *fdevent_get_context(fdevents *ev , int fd ) ;
#line 204
extern int fdevent_event_next_fdndx(fdevents *ev , int ndx ) ;
#line 206
extern int fdevent_poll(fdevents *ev , int timeout_ms ) ;
#line 208
extern int fdevent_register(fdevents *ev , int fd ,
                            handler_t (*handler)(void *srv , void *ctx ,
                                                 int revents ) , void *ctx ) ;
#line 209
extern int fdevent_unregister(fdevents *ev , int fd ) ;
#line 211
extern int fdevent_fcntl_set(fdevents *ev , int fd ) ;
#line 213
extern int fdevent_select_init(fdevents *ev ) ;
#line 214
extern int fdevent_poll_init(fdevents *ev ) ;
#line 215
extern int fdevent_linux_rtsig_init(fdevents *ev ) ;
#line 216
extern int fdevent_linux_sysepoll_init(fdevents *ev ) ;
#line 217
extern int fdevent_solaris_devpoll_init(fdevents *ev ) ;
#line 218
extern int fdevent_freebsd_kqueue_init(fdevents *ev ) ;
#line 40 "/usr/include/sys/uio.h"
extern ssize_t readv(int __fd , struct iovec  const  *__iovec , int __count ) ;
#line 50
extern ssize_t writev(int __fd , struct iovec  const  *__iovec , int __count ) ;
#line 264 "/usr/include/bits/socket.h"
__inline static  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
#line 270
__inline static  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
#line 270 "/usr/include/bits/socket.h"
__inline static struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                              struct cmsghdr *__cmsg ) 
{ 

  {
#line 270
  fprintf(_coverage_fout, "181\n");
#line 270
  fflush(_coverage_fout);
#line 273
  if (__cmsg->cmsg_len < sizeof(struct cmsghdr )) {
#line 273
    fprintf(_coverage_fout, "177\n");
#line 273
    fflush(_coverage_fout);
#line 275
    return ((struct cmsghdr *)0);
  }
#line 270
  fprintf(_coverage_fout, "182\n");
#line 270
  fflush(_coverage_fout);
#line 277
  __cmsg = (struct cmsghdr *)((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U)));
#line 270
  fprintf(_coverage_fout, "183\n");
#line 270
  fflush(_coverage_fout);
#line 279
  if ((unsigned int )((unsigned char *)(__cmsg + 1)) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
#line 279
    fprintf(_coverage_fout, "178\n");
#line 279
    fflush(_coverage_fout);
#line 284
    return ((struct cmsghdr *)0);
  } else {
#line 279
    fprintf(_coverage_fout, "180\n");
#line 279
    fflush(_coverage_fout);
#line 279
    if ((unsigned int )((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U))) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
#line 279
      fprintf(_coverage_fout, "179\n");
#line 279
      fflush(_coverage_fout);
#line 284
      return ((struct cmsghdr *)0);
    }
  }
#line 270
  fprintf(_coverage_fout, "184\n");
#line 270
  fflush(_coverage_fout);
#line 285
  return (__cmsg);
}
}
#line 100 "/usr/include/sys/socket.h"
extern  __attribute__((__nothrow__)) int socket(int __domain , int __type ,
                                                int __protocol ) ;
#line 106
extern  __attribute__((__nothrow__)) int socketpair(int __domain , int __type ,
                                                    int __protocol , int *__fds ) ;
#line 110
extern  __attribute__((__nothrow__)) int bind(int __fd ,
                                              struct sockaddr  const  *__addr ,
                                              socklen_t __len ) ;
#line 114
extern  __attribute__((__nothrow__)) int getsockname(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;
#line 124
extern int connect(int __fd , struct sockaddr  const  *__addr , socklen_t __len ) ;
#line 128
extern  __attribute__((__nothrow__)) int getpeername(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;
#line 136
extern ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags ) ;
#line 143
extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;
#line 150
extern ssize_t sendto(int __fd , void const   *__buf , size_t __n ,
                      int __flags , struct sockaddr  const  *__addr ,
                      socklen_t __addr_len ) ;
#line 161
extern ssize_t recvfrom(int __fd , void * __restrict  __buf , size_t __n ,
                        int __flags , struct sockaddr * __restrict  __addr ,
                        socklen_t * __restrict  __addr_len ) ;
#line 171
extern ssize_t sendmsg(int __fd , struct msghdr  const  *__message ,
                       int __flags ) ;
#line 179
extern ssize_t recvmsg(int __fd , struct msghdr *__message , int __flags ) ;
#line 185
extern  __attribute__((__nothrow__)) int getsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void * __restrict  __optval ,
                                                    socklen_t * __restrict  __optlen ) ;
#line 192
extern  __attribute__((__nothrow__)) int setsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void const   *__optval ,
                                                    socklen_t __optlen ) ;
#line 199
extern  __attribute__((__nothrow__)) int listen(int __fd , int __n ) ;
#line 209
extern int accept(int __fd , struct sockaddr * __restrict  __addr ,
                  socklen_t * __restrict  __addr_len ) ;
#line 218
extern  __attribute__((__nothrow__)) int shutdown(int __fd , int __how ) ;
#line 223
extern  __attribute__((__nothrow__)) int sockatmark(int __fd ) ;
#line 231
extern  __attribute__((__nothrow__)) int isfdtype(int __fd , int __fdtype ) ;
#line 51 "/usr/include/asm-generic/ioctl.h"
extern unsigned int __invalid_size_argument_for_IOC ;
#line 42 "/usr/include/sys/ioctl.h"
extern  __attribute__((__nothrow__)) int ioctl(int __fd ,
                                               unsigned long __request  , ...) ;
#line 206 "/usr/include/netinet/in.h"
extern struct in6_addr  const  in6addr_any ;
#line 207
extern struct in6_addr  const  in6addr_loopback ;
#line 354
extern  __attribute__((__nothrow__)) uint32_t ntohl(uint32_t __netlong )  __attribute__((__const__)) ;
#line 355
extern  __attribute__((__nothrow__)) uint16_t ntohs(uint16_t __netshort )  __attribute__((__const__)) ;
#line 357
extern  __attribute__((__nothrow__)) uint32_t htonl(uint32_t __hostlong )  __attribute__((__const__)) ;
#line 359
extern  __attribute__((__nothrow__)) uint16_t htons(uint16_t __hostshort )  __attribute__((__const__)) ;
#line 428
extern  __attribute__((__nothrow__)) int bindresvport(int __sockfd ,
                                                      struct sockaddr_in *__sock_in ) ;
#line 431
extern  __attribute__((__nothrow__)) int bindresvport6(int __sockfd ,
                                                       struct sockaddr_in6 *__sock_in ) ;
#line 35 "/usr/include/arpa/inet.h"
extern  __attribute__((__nothrow__)) in_addr_t inet_addr(char const   *__cp ) ;
#line 38
extern  __attribute__((__nothrow__)) in_addr_t inet_lnaof(struct in_addr __in ) ;
#line 42
extern  __attribute__((__nothrow__)) struct in_addr inet_makeaddr(in_addr_t __net ,
                                                                  in_addr_t __host ) ;
#line 46
extern  __attribute__((__nothrow__)) in_addr_t inet_netof(struct in_addr __in ) ;
#line 50
extern  __attribute__((__nothrow__)) in_addr_t inet_network(char const   *__cp ) ;
#line 54
extern  __attribute__((__nothrow__)) char *inet_ntoa(struct in_addr __in ) ;
#line 59
extern  __attribute__((__nothrow__)) int inet_pton(int __af ,
                                                   char const   * __restrict  __cp ,
                                                   void * __restrict  __buf ) ;
#line 65
extern  __attribute__((__nothrow__)) char const   *inet_ntop(int __af ,
                                                             void const   * __restrict  __cp ,
                                                             char * __restrict  __buf ,
                                                             socklen_t __len ) ;
#line 74
extern  __attribute__((__nothrow__)) int inet_aton(char const   *__cp ,
                                                   struct in_addr *__inp ) ;
#line 78
extern  __attribute__((__nothrow__)) char *inet_neta(in_addr_t __net ,
                                                     char *__buf , size_t __len ) ;
#line 83
extern  __attribute__((__nothrow__)) char *inet_net_ntop(int __af ,
                                                         void const   *__cp ,
                                                         int __bits ,
                                                         char *__buf ,
                                                         size_t __len ) ;
#line 89
extern  __attribute__((__nothrow__)) int inet_net_pton(int __af ,
                                                       char const   *__cp ,
                                                       void *__buf ,
                                                       size_t __len ) ;
#line 95
extern  __attribute__((__nothrow__)) unsigned int inet_nsap_addr(char const   *__cp ,
                                                                 unsigned char *__buf ,
                                                                 int __len ) ;
#line 100
extern  __attribute__((__nothrow__)) char *inet_nsap_ntoa(int __len ,
                                                          unsigned char const   *__cp ,
                                                          char *__buf ) ;
#line 53 "/usr/include/rpc/netdb.h"
extern  __attribute__((__nothrow__)) void setrpcent(int __stayopen ) ;
#line 54
extern  __attribute__((__nothrow__)) void endrpcent(void) ;
#line 55
extern  __attribute__((__nothrow__)) struct rpcent *getrpcbyname(char const   *__name ) ;
#line 56
extern  __attribute__((__nothrow__)) struct rpcent *getrpcbynumber(int __number ) ;
#line 57
extern  __attribute__((__nothrow__)) struct rpcent *getrpcent(void) ;
#line 60
extern  __attribute__((__nothrow__)) int getrpcbyname_r(char const   *__name ,
                                                        struct rpcent *__result_buf ,
                                                        char *__buffer ,
                                                        size_t __buflen ,
                                                        struct rpcent **__result ) ;
#line 64
extern  __attribute__((__nothrow__)) int getrpcbynumber_r(int __number ,
                                                          struct rpcent *__result_buf ,
                                                          char *__buffer ,
                                                          size_t __buflen ,
                                                          struct rpcent **__result ) ;
#line 68
extern  __attribute__((__nothrow__)) int getrpcent_r(struct rpcent *__result_buf ,
                                                     char *__buffer ,
                                                     size_t __buflen ,
                                                     struct rpcent **__result ) ;
#line 61 "/usr/include/netdb.h"
extern  __attribute__((__nothrow__)) int *__h_errno_location(void)  __attribute__((__const__)) ;
#line 88
extern  __attribute__((__nothrow__)) void herror(char const   *__str ) ;
#line 91
extern  __attribute__((__nothrow__)) char const   *hstrerror(int __err_num ) ;
#line 111
extern void sethostent(int __stay_open ) ;
#line 117
extern void endhostent(void) ;
#line 124
extern struct hostent *gethostent(void) ;
#line 131
extern struct hostent *gethostbyaddr(void const   *__addr , __socklen_t __len ,
                                     int __type ) ;
#line 138
extern struct hostent *gethostbyname(char const   *__name ) ;
#line 149
extern struct hostent *gethostbyname2(char const   *__name , int __af ) ;
#line 161
extern int gethostent_r(struct hostent * __restrict  __result_buf ,
                        char * __restrict  __buf , size_t __buflen ,
                        struct hostent ** __restrict  __result ,
                        int * __restrict  __h_errnop ) ;
#line 166
extern int gethostbyaddr_r(void const   * __restrict  __addr ,
                           __socklen_t __len , int __type ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;
#line 173
extern int gethostbyname_r(char const   * __restrict  __name ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;
#line 179
extern int gethostbyname2_r(char const   * __restrict  __name , int __af ,
                            struct hostent * __restrict  __result_buf ,
                            char * __restrict  __buf , size_t __buflen ,
                            struct hostent ** __restrict  __result ,
                            int * __restrict  __h_errnop ) ;
#line 192
extern void setnetent(int __stay_open ) ;
#line 198
extern void endnetent(void) ;
#line 205
extern struct netent *getnetent(void) ;
#line 212
extern struct netent *getnetbyaddr(uint32_t __net , int __type ) ;
#line 218
extern struct netent *getnetbyname(char const   *__name ) ;
#line 231
extern int getnetent_r(struct netent * __restrict  __result_buf ,
                       char * __restrict  __buf , size_t __buflen ,
                       struct netent ** __restrict  __result ,
                       int * __restrict  __h_errnop ) ;
#line 236
extern int getnetbyaddr_r(uint32_t __net , int __type ,
                          struct netent * __restrict  __result_buf ,
                          char * __restrict  __buf , size_t __buflen ,
                          struct netent ** __restrict  __result ,
                          int * __restrict  __h_errnop ) ;
#line 242
extern int getnetbyname_r(char const   * __restrict  __name ,
                          struct netent * __restrict  __result_buf ,
                          char * __restrict  __buf , size_t __buflen ,
                          struct netent ** __restrict  __result ,
                          int * __restrict  __h_errnop ) ;
#line 264
extern void setservent(int __stay_open ) ;
#line 270
extern void endservent(void) ;
#line 277
extern struct servent *getservent(void) ;
#line 284
extern struct servent *getservbyname(char const   *__name ,
                                     char const   *__proto ) ;
#line 292
extern struct servent *getservbyport(int __port , char const   *__proto ) ;
#line 303
extern int getservent_r(struct servent * __restrict  __result_buf ,
                        char * __restrict  __buf , size_t __buflen ,
                        struct servent ** __restrict  __result ) ;
#line 307
extern int getservbyname_r(char const   * __restrict  __name ,
                           char const   * __restrict  __proto ,
                           struct servent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct servent ** __restrict  __result ) ;
#line 313
extern int getservbyport_r(int __port , char const   * __restrict  __proto ,
                           struct servent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct servent ** __restrict  __result ) ;
#line 333
extern void setprotoent(int __stay_open ) ;
#line 339
extern void endprotoent(void) ;
#line 346
extern struct protoent *getprotoent(void) ;
#line 352
extern struct protoent *getprotobyname(char const   *__name ) ;
#line 358
extern struct protoent *getprotobynumber(int __proto ) ;
#line 369
extern int getprotoent_r(struct protoent * __restrict  __result_buf ,
                         char * __restrict  __buf , size_t __buflen ,
                         struct protoent ** __restrict  __result ) ;
#line 373
extern int getprotobyname_r(char const   * __restrict  __name ,
                            struct protoent * __restrict  __result_buf ,
                            char * __restrict  __buf , size_t __buflen ,
                            struct protoent ** __restrict  __result ) ;
#line 378
extern int getprotobynumber_r(int __proto ,
                              struct protoent * __restrict  __result_buf ,
                              char * __restrict  __buf , size_t __buflen ,
                              struct protoent ** __restrict  __result ) ;
#line 390
extern int setnetgrent(char const   *__netgroup ) ;
#line 398
extern void endnetgrent(void) ;
#line 407
extern int getnetgrent(char ** __restrict  __hostp ,
                       char ** __restrict  __userp ,
                       char ** __restrict  __domainp ) ;
#line 418
extern int innetgr(char const   *__netgroup , char const   *__host ,
                   char const   *__user , char const   *domain ) ;
#line 427
extern int getnetgrent_r(char ** __restrict  __hostp ,
                         char ** __restrict  __userp ,
                         char ** __restrict  __domainp ,
                         char * __restrict  __buffer , size_t __buflen ) ;
#line 446
extern int rcmd(char ** __restrict  __ahost , unsigned short __rport ,
                char const   * __restrict  __locuser ,
                char const   * __restrict  __remuser ,
                char const   * __restrict  __cmd , int * __restrict  __fd2p ) ;
#line 458
extern int rcmd_af(char ** __restrict  __ahost , unsigned short __rport ,
                   char const   * __restrict  __locuser ,
                   char const   * __restrict  __remuser ,
                   char const   * __restrict  __cmd , int * __restrict  __fd2p ,
                   sa_family_t __af ) ;
#line 474
extern int rexec(char ** __restrict  __ahost , int __rport ,
                 char const   * __restrict  __name ,
                 char const   * __restrict  __pass ,
                 char const   * __restrict  __cmd , int * __restrict  __fd2p ) ;
#line 486
extern int rexec_af(char ** __restrict  __ahost , int __rport ,
                    char const   * __restrict  __name ,
                    char const   * __restrict  __pass ,
                    char const   * __restrict  __cmd ,
                    int * __restrict  __fd2p , sa_family_t __af ) ;
#line 500
extern int ruserok(char const   *__rhost , int __suser ,
                   char const   *__remuser , char const   *__locuser ) ;
#line 510
extern int ruserok_af(char const   *__rhost , int __suser ,
                      char const   *__remuser , char const   *__locuser ,
                      sa_family_t __af ) ;
#line 522
extern int rresvport(int *__alport ) ;
#line 531
extern int rresvport_af(int *__alport , sa_family_t __af ) ;
#line 631
extern int getaddrinfo(char const   * __restrict  __name ,
                       char const   * __restrict  __service ,
                       struct addrinfo  const  * __restrict  __req ,
                       struct addrinfo ** __restrict  __pai ) ;
#line 637
extern  __attribute__((__nothrow__)) void freeaddrinfo(struct addrinfo *__ai ) ;
#line 640
extern  __attribute__((__nothrow__)) char const   *gai_strerror(int __ecode ) ;
#line 646
extern int getnameinfo(struct sockaddr  const  * __restrict  __sa ,
                       socklen_t __salen , char * __restrict  __host ,
                       socklen_t __hostlen , char * __restrict  __serv ,
                       socklen_t __servlen , unsigned int __flags ) ;
#line 13 "splaytree.h"
extern splay_tree *splaytree_splay(splay_tree *t , int key ) ;
#line 14
extern splay_tree *splaytree_insert(splay_tree *t , int key , void *data ) ;
#line 15
extern splay_tree *splaytree_delete(splay_tree *t , int key ) ;
#line 16
extern splay_tree *splaytree_size(splay_tree *t ) ;
#line 12 "etag.h"
extern int etag_is_equal(buffer *etag , char const   *matches ) ;
#line 13
extern int etag_create(buffer *etag , struct stat *st , etag_flags_t flags ) ;
#line 14
extern int etag_mutate(buffer *mut , buffer *etag ) ;
#line 64 "base.h"
extern char **environ ;
#line 13 "server.h"
extern int config_read(server *srv , char const   *fn ) ;
#line 14
extern int config_set_defaults(server *srv ) ;
#line 15
extern buffer *config_get_value_buffer(server *srv , connection *con ,
                                       config_var_t field ) ;
#line 8 "log.h"
extern int log_error_open(server *srv ) ;
#line 9
extern int log_error_close(server *srv ) ;
#line 10
extern int log_error_write(server *srv , char const   *filename ,
                           unsigned int line , char const   *fmt  , ...) ;
#line 11
extern int log_error_cycle(server *srv ) ;
#line 7 "http_chunk.h"
extern int http_chunk_append_mem(server *srv , connection *con ,
                                 char const   *mem , size_t len ) ;
#line 8
extern int http_chunk_append_buffer(server *srv , connection *con , buffer *mem ) ;
#line 9
extern int http_chunk_append_file(server *srv , connection *con , buffer *fn ,
                                  off_t offset , off_t len ) ;
#line 10
extern off_t http_chunkqueue_length(server *srv , connection *con ) ;
#line 7 "connections.h"
extern connection *connection_init(server *srv ) ;
#line 8
extern int connection_reset(server *srv , connection *con ) ;
#line 9
extern void connections_free(server *srv ) ;
#line 11
extern connection *connection_accept(server *srv , server_socket *srv_sock ) ;
#line 12
extern int connection_close(server *srv , connection *con ) ;
#line 14
extern int connection_set_state(server *srv , connection *con ,
                                connection_state_t state ) ;
#line 15
extern char const   *connection_get_state(connection_state_t state ) ;
#line 16
extern char const   *connection_get_short_state(connection_state_t state ) ;
#line 17
extern int connection_state_machine(server *srv , connection *con ) ;
#line 184 "/usr/include/time.h"
extern  __attribute__((__nothrow__)) clock_t clock(void) ;
#line 187
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
#line 190
extern  __attribute__((__nothrow__)) double difftime(time_t __time1 ,
                                                     time_t __time0 )  __attribute__((__const__)) ;
#line 194
extern  __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;
#line 200
extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
#line 232
extern  __attribute__((__nothrow__)) struct tm *gmtime(time_t const   *__timer ) ;
#line 236
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer ) ;
#line 242
extern  __attribute__((__nothrow__)) struct tm *gmtime_r(time_t const   * __restrict  __timer ,
                                                         struct tm * __restrict  __tp ) ;
#line 247
extern  __attribute__((__nothrow__)) struct tm *localtime_r(time_t const   * __restrict  __timer ,
                                                            struct tm * __restrict  __tp ) ;
#line 254
extern  __attribute__((__nothrow__)) char *asctime(struct tm  const  *__tp ) ;
#line 257
extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer ) ;
#line 265
extern  __attribute__((__nothrow__)) char *asctime_r(struct tm  const  * __restrict  __tp ,
                                                     char * __restrict  __buf ) ;
#line 269
extern  __attribute__((__nothrow__)) char *ctime_r(time_t const   * __restrict  __timer ,
                                                   char * __restrict  __buf ) ;
#line 275
extern char *__tzname[2] ;
#line 276
extern int __daylight ;
#line 277
extern long __timezone ;
#line 282
extern char *tzname[2] ;
#line 286
extern  __attribute__((__nothrow__)) void tzset(void) ;
#line 290
extern int daylight ;
#line 291
extern long timezone ;
#line 297
extern  __attribute__((__nothrow__)) int stime(time_t const   *__when ) ;
#line 312
extern  __attribute__((__nothrow__)) time_t timegm(struct tm *__tp ) ;
#line 315
extern  __attribute__((__nothrow__)) time_t timelocal(struct tm *__tp ) ;
#line 318
extern  __attribute__((__nothrow__)) int dysize(int __year )  __attribute__((__const__)) ;
#line 327
extern int nanosleep(struct timespec  const  *__requested_time ,
                     struct timespec *__remaining ) ;
#line 332
extern  __attribute__((__nothrow__)) int clock_getres(clockid_t __clock_id ,
                                                      struct timespec *__res ) ;
#line 335
extern  __attribute__((__nothrow__)) int clock_gettime(clockid_t __clock_id ,
                                                       struct timespec *__tp ) ;
#line 338
extern  __attribute__((__nothrow__)) int clock_settime(clockid_t __clock_id ,
                                                       struct timespec  const  *__tp ) ;
#line 346
extern int clock_nanosleep(clockid_t __clock_id , int __flags ,
                           struct timespec  const  *__req ,
                           struct timespec *__rem ) ;
#line 351
extern  __attribute__((__nothrow__)) int clock_getcpuclockid(pid_t __pid ,
                                                             clockid_t *__clock_id ) ;
#line 356
extern  __attribute__((__nothrow__)) int timer_create(clockid_t __clock_id ,
                                                      struct sigevent * __restrict  __evp ,
                                                      timer_t * __restrict  __timerid ) ;
#line 361
extern  __attribute__((__nothrow__)) int timer_delete(timer_t __timerid ) ;
#line 364
extern  __attribute__((__nothrow__)) int timer_settime(timer_t __timerid ,
                                                       int __flags ,
                                                       struct itimerspec  const  * __restrict  __value ,
                                                       struct itimerspec * __restrict  __ovalue ) ;
#line 369
extern  __attribute__((__nothrow__)) int timer_gettime(timer_t __timerid ,
                                                       struct itimerspec *__value ) ;
#line 373
extern  __attribute__((__nothrow__)) int timer_getoverrun(timer_t __timerid ) ;
#line 8 "response.h"
extern int http_response_parse(server *srv , connection *con ) ;
#line 9
extern int http_response_write_header(server *srv , connection *con ) ;
#line 11
extern int response_header_insert(server *srv , connection *con ,
                                  char const   *key , size_t keylen ,
                                  char const   *value , size_t vallen ) ;
#line 12
extern int response_header_overwrite(server *srv , connection *con ,
                                     char const   *key , size_t keylen ,
                                     char const   *value , size_t vallen ) ;
#line 14
extern handler_t http_response_prepare(server *srv , connection *con ) ;
#line 15
extern int http_response_redirect_to_directory(server *srv , connection *con ) ;
#line 16
extern int http_response_handle_cachable(server *srv , connection *con ,
                                         buffer *mtime ) ;
#line 18
extern buffer *strftime_cache_get(server *srv , time_t last_mod ) ;
#line 6 "joblist.h"
extern int joblist_append(server *srv , connection *con ) ;
#line 7
extern void joblist_free(server *srv , connections *joblist ) ;
#line 9
extern int fdwaitqueue_append(server *srv , connection *con ) ;
#line 10
extern void fdwaitqueue_free(server *srv , connections *fdwaitqueue ) ;
#line 11
extern connection *fdwaitqueue_unshift(server *srv , connections *fdwaitqueue ) ;
#line 64 "plugin.h"
extern int plugins_load(server *srv ) ;
#line 65
extern void plugins_free(server *srv ) ;
#line 67
extern handler_t plugins_call_handle_uri_raw(server *srv , connection *con ) ;
#line 68
extern handler_t plugins_call_handle_uri_clean(server *srv , connection *con ) ;
#line 69
extern handler_t plugins_call_handle_subrequest_start(server *srv ,
                                                      connection *con ) ;
#line 70
extern handler_t plugins_call_handle_subrequest(server *srv , connection *con ) ;
#line 71
extern handler_t plugins_call_handle_request_done(server *srv , connection *con ) ;
#line 72
extern handler_t plugins_call_handle_docroot(server *srv , connection *con ) ;
#line 73
extern handler_t plugins_call_handle_physical(server *srv , connection *con ) ;
#line 74
extern handler_t plugins_call_handle_connection_close(server *srv ,
                                                      connection *con ) ;
#line 75
extern handler_t plugins_call_handle_joblist(server *srv , connection *con ) ;
#line 76
extern handler_t plugins_call_connection_reset(server *srv , connection *con ) ;
#line 78
extern handler_t plugins_call_handle_trigger(server *srv ) ;
#line 79
extern handler_t plugins_call_handle_sighup(server *srv ) ;
#line 81
extern handler_t plugins_call_init(server *srv ) ;
#line 82
extern handler_t plugins_call_set_defaults(server *srv ) ;
#line 83
extern handler_t plugins_call_cleanup(server *srv ) ;
#line 85
extern int config_insert_values_global(server *srv , array *ca ,
                                       config_values_t const   *cv ) ;
#line 86
extern int config_insert_values_internal(server *srv , array *ca ,
                                         config_values_t const   *cv ) ;
#line 87
extern int config_setup_connection(server *srv , connection *con ) ;
#line 88
extern int config_patch_connection(server *srv , connection *con ,
                                   comp_key_t comp ) ;
#line 89
extern int config_check_cond(server *srv , connection *con , data_config *dc ) ;
#line 90
extern int config_append_cond_match_buffer(connection *con , data_config *dc ,
                                           buffer *buf , int n ) ;
#line 5 "inet_ntop_cache.h"
extern char const   *inet_ntop_cache_get_ip(server *srv , sock_addr *addr ) ;
#line 6 "stat_cache.h"
extern stat_cache *stat_cache_init(void) ;
#line 7
extern void stat_cache_free(stat_cache *fc ) ;
#line 9
extern handler_t stat_cache_get_entry(server *srv , connection *con ,
                                      buffer *name , stat_cache_entry **fce ) ;
#line 10
extern handler_t stat_cache_handle_fdevent(void *_srv , void *_fce , int revent ) ;
#line 12
extern int stat_cache_trigger_cleanup(server *srv ) ;
#line 9 "status_counter.h"
extern data_integer *status_counter_get_counter(server *srv , char const   *s ,
                                                size_t len ) ;
#line 10
extern int status_counter_inc(server *srv , char const   *s , size_t len ) ;
#line 11
extern int status_counter_dec(server *srv , char const   *s , size_t len ) ;
#line 12
extern int status_counter_set(server *srv , char const   *s , size_t len ,
                              int val ) ;
#line 343 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
#line 344
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
#line 345
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
#line 413
extern int __underflow(_IO_FILE * ) ;
#line 414
extern int __uflow(_IO_FILE * ) ;
#line 415
extern int __overflow(_IO_FILE * , int  ) ;
#line 416
extern wint_t __wunderflow(_IO_FILE * ) ;
#line 417
extern wint_t __wuflow(_IO_FILE * ) ;
#line 418
extern wint_t __woverflow(_IO_FILE * , wint_t  ) ;
#line 451
extern int _IO_getc(_IO_FILE *__fp ) ;
#line 452
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
#line 453
extern  __attribute__((__nothrow__)) int _IO_feof(_IO_FILE *__fp ) ;
#line 454
extern  __attribute__((__nothrow__)) int _IO_ferror(_IO_FILE *__fp ) ;
#line 456
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
#line 462
extern  __attribute__((__nothrow__)) void _IO_flockfile(_IO_FILE * ) ;
#line 463
extern  __attribute__((__nothrow__)) void _IO_funlockfile(_IO_FILE * ) ;
#line 464
extern  __attribute__((__nothrow__)) int _IO_ftrylockfile(_IO_FILE * ) ;
#line 481
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   ,
                       __gnuc_va_list  , int * __restrict   ) ;
#line 483
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   ,
                        __gnuc_va_list  ) ;
#line 485
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
#line 486
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
#line 488
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
#line 489
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
#line 491
extern  __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
#line 145 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
#line 146
extern struct _IO_FILE *stdout ;
#line 147
extern struct _IO_FILE *stderr ;
#line 157
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
#line 159
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
#line 177
extern FILE *tmpfile(void)  __asm__("tmpfile64")  ;
#line 188
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
#line 194
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
#line 206
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
#line 216
extern int fclose(FILE *__stream ) ;
#line 221
extern int fflush(FILE *__stream ) ;
#line 231
extern int fflush_unlocked(FILE *__stream ) ;
#line 262
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
#line 265
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;
#line 285
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
#line 309
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
#line 313
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
#line 320
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
#line 324
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
#line 333
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
#line 339
extern int printf(char const   * __restrict  __format  , ...) ;
#line 341
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
#line 348
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
#line 354
__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;
#line 356
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
#line 363
extern  __attribute__((__nothrow__)) int snprintf(char * __restrict  __s ,
                                                  size_t __maxlen ,
                                                  char const   * __restrict  __format 
                                                  , ...) ;
#line 367
extern  __attribute__((__nothrow__)) int vsnprintf(char * __restrict  __s ,
                                                   size_t __maxlen ,
                                                   char const   * __restrict  __format ,
                                                   __gnuc_va_list __arg ) ;
#line 405
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;
#line 411
extern int scanf(char const   * __restrict  __format  , ...) ;
#line 413
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;
#line 423
extern int vfscanf(FILE * __restrict  __s ,
                   char const   * __restrict  __format , __gnuc_va_list __arg ) ;
#line 431
extern int vscanf(char const   * __restrict  __format , __gnuc_va_list __arg ) ;
#line 435
extern  __attribute__((__nothrow__)) int vsscanf(char const   * __restrict  __s ,
                                                 char const   * __restrict  __format ,
                                                 __gnuc_va_list __arg ) ;
#line 447
extern int fgetc(FILE *__stream ) ;
#line 448
extern int getc(FILE *__stream ) ;
#line 454
__inline static int getchar(void) ;
#line 466
__inline static int getc_unlocked(FILE *__fp ) ;
#line 467
__inline static int getchar_unlocked(void) ;
#line 477
__inline static int fgetc_unlocked(FILE *__fp ) ;
#line 489
extern int fputc(int __c , FILE *__stream ) ;
#line 490
extern int putc(int __c , FILE *__stream ) ;
#line 496
__inline static int putchar(int __c ) ;
#line 510
__inline static int fputc_unlocked(int __c , FILE *__stream ) ;
#line 518
__inline static int putc_unlocked(int __c , FILE *__stream ) ;
#line 519
__inline static int putchar_unlocked(int __c ) ;
#line 526
extern int getw(FILE *__stream ) ;
#line 529
extern int putw(int __w , FILE *__stream ) ;
#line 538
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
#line 546
extern char *gets(char *__s ) ;
#line 596
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
#line 602
extern int puts(char const   *__s ) ;
#line 609
extern int ungetc(int __c , FILE *__stream ) ;
#line 616
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
#line 622
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
#line 644
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;
#line 646
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;
#line 656
extern int fseek(FILE *__stream , long __off , int __whence ) ;
#line 661
extern long ftell(FILE *__stream ) ;
#line 666
extern void rewind(FILE *__stream ) ;
#line 688
extern int fseeko(FILE *__stream , __off64_t __off , int __whence )  __asm__("fseeko64")  ;
#line 691
extern __off64_t ftello(FILE *__stream )  __asm__("ftello64")  ;
#line 713
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos )  __asm__("fgetpos64")  ;
#line 715
extern int fsetpos(FILE *__stream , fpos_t const   *__pos )  __asm__("fsetpos64")  ;
#line 733
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
#line 735
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
#line 737
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
#line 742
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
#line 743
__inline static  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
#line 744
__inline static  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
#line 753
extern void perror(char const   *__s ) ;
#line 27 "/usr/include/bits/sys_errlist.h"
extern int sys_nerr ;
#line 28
extern char const   * const  sys_errlist[] ;
#line 765 "/usr/include/stdio.h"
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
#line 770
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
#line 780
extern FILE *popen(char const   *__command , char const   *__modes ) ;
#line 786
extern int pclose(FILE *__stream ) ;
#line 792
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
#line 820
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
#line 824
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
#line 827
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
#line 33 "/usr/include/bits/stdio.h"
__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ int tmp ;

  {
  {
#line 36
  fprintf(_coverage_fout, "185\n");
#line 36
  fflush(_coverage_fout);
#line 36
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  }
#line 33
  fprintf(_coverage_fout, "186\n");
#line 33
  fflush(_coverage_fout);
#line 36
  return (tmp);
}
}
#line 40 "/usr/include/bits/stdio.h"
__inline static int getchar(void) 
{ int tmp ;

  {
  {
#line 43
  fprintf(_coverage_fout, "187\n");
#line 43
  fflush(_coverage_fout);
#line 43
  tmp = _IO_getc(stdin);
  }
#line 40
  fprintf(_coverage_fout, "188\n");
#line 40
  fflush(_coverage_fout);
#line 43
  return (tmp);
}
}
#line 49 "/usr/include/bits/stdio.h"
__inline static int fgetc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 52
  fprintf(_coverage_fout, "189\n");
#line 52
  fflush(_coverage_fout);
#line 52
  tmp___4 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  }
#line 49
  fprintf(_coverage_fout, "192\n");
#line 49
  fflush(_coverage_fout);
#line 52
  if (tmp___4) {
    {
#line 52
    fprintf(_coverage_fout, "190\n");
#line 52
    fflush(_coverage_fout);
#line 52
    tmp___2 = __uflow(__fp);
    }
  } else {
#line 52
    fprintf(_coverage_fout, "191\n");
#line 52
    fflush(_coverage_fout);
#line 52
    tmp___3 = __fp->_IO_read_ptr;
#line 52
    (__fp->_IO_read_ptr) ++;
#line 52
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
#line 49
  fprintf(_coverage_fout, "193\n");
#line 49
  fflush(_coverage_fout);
#line 52
  return (tmp___2);
}
}
#line 59 "/usr/include/bits/stdio.h"
__inline static int getc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 62
  fprintf(_coverage_fout, "194\n");
#line 62
  fflush(_coverage_fout);
#line 62
  tmp___4 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  }
#line 59
  fprintf(_coverage_fout, "197\n");
#line 59
  fflush(_coverage_fout);
#line 62
  if (tmp___4) {
    {
#line 62
    fprintf(_coverage_fout, "195\n");
#line 62
    fflush(_coverage_fout);
#line 62
    tmp___2 = __uflow(__fp);
    }
  } else {
#line 62
    fprintf(_coverage_fout, "196\n");
#line 62
    fflush(_coverage_fout);
#line 62
    tmp___3 = __fp->_IO_read_ptr;
#line 62
    (__fp->_IO_read_ptr) ++;
#line 62
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
#line 59
  fprintf(_coverage_fout, "198\n");
#line 59
  fflush(_coverage_fout);
#line 62
  return (tmp___2);
}
}
#line 66 "/usr/include/bits/stdio.h"
__inline static int getchar_unlocked(void) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 69
  fprintf(_coverage_fout, "199\n");
#line 69
  fflush(_coverage_fout);
#line 69
  tmp___4 = __builtin_expect((long )((unsigned int )stdin->_IO_read_ptr >= (unsigned int )stdin->_IO_read_end),
                             0L);
  }
#line 66
  fprintf(_coverage_fout, "202\n");
#line 66
  fflush(_coverage_fout);
#line 69
  if (tmp___4) {
    {
#line 69
    fprintf(_coverage_fout, "200\n");
#line 69
    fflush(_coverage_fout);
#line 69
    tmp___2 = __uflow(stdin);
    }
  } else {
#line 69
    fprintf(_coverage_fout, "201\n");
#line 69
    fflush(_coverage_fout);
#line 69
    tmp___3 = stdin->_IO_read_ptr;
#line 69
    (stdin->_IO_read_ptr) ++;
#line 69
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
#line 66
  fprintf(_coverage_fout, "203\n");
#line 66
  fflush(_coverage_fout);
#line 69
  return (tmp___2);
}
}
#line 75 "/usr/include/bits/stdio.h"
__inline static int putchar(int __c ) 
{ int tmp ;

  {
  {
#line 78
  fprintf(_coverage_fout, "204\n");
#line 78
  fflush(_coverage_fout);
#line 78
  tmp = _IO_putc(__c, stdout);
  }
#line 75
  fprintf(_coverage_fout, "205\n");
#line 75
  fflush(_coverage_fout);
#line 78
  return (tmp);
}
}
#line 84 "/usr/include/bits/stdio.h"
__inline static int fputc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 87
  fprintf(_coverage_fout, "206\n");
#line 87
  fflush(_coverage_fout);
#line 87
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  }
#line 84
  fprintf(_coverage_fout, "209\n");
#line 84
  fflush(_coverage_fout);
#line 87
  if (tmp___4) {
    {
#line 87
    fprintf(_coverage_fout, "207\n");
#line 87
    fflush(_coverage_fout);
#line 87
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
    }
  } else {
#line 87
    fprintf(_coverage_fout, "208\n");
#line 87
    fflush(_coverage_fout);
#line 87
    tmp___3 = __stream->_IO_write_ptr;
#line 87
    (__stream->_IO_write_ptr) ++;
#line 87
    *tmp___3 = (char )__c;
#line 87
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
#line 84
  fprintf(_coverage_fout, "210\n");
#line 84
  fflush(_coverage_fout);
#line 87
  return (tmp___2);
}
}
#line 94 "/usr/include/bits/stdio.h"
__inline static int putc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 97
  fprintf(_coverage_fout, "211\n");
#line 97
  fflush(_coverage_fout);
#line 97
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  }
#line 94
  fprintf(_coverage_fout, "214\n");
#line 94
  fflush(_coverage_fout);
#line 97
  if (tmp___4) {
    {
#line 97
    fprintf(_coverage_fout, "212\n");
#line 97
    fflush(_coverage_fout);
#line 97
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
    }
  } else {
#line 97
    fprintf(_coverage_fout, "213\n");
#line 97
    fflush(_coverage_fout);
#line 97
    tmp___3 = __stream->_IO_write_ptr;
#line 97
    (__stream->_IO_write_ptr) ++;
#line 97
    *tmp___3 = (char )__c;
#line 97
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
#line 94
  fprintf(_coverage_fout, "215\n");
#line 94
  fflush(_coverage_fout);
#line 97
  return (tmp___2);
}
}
#line 101 "/usr/include/bits/stdio.h"
__inline static int putchar_unlocked(int __c ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 104
  fprintf(_coverage_fout, "216\n");
#line 104
  fflush(_coverage_fout);
#line 104
  tmp___4 = __builtin_expect((long )((unsigned int )stdout->_IO_write_ptr >= (unsigned int )stdout->_IO_write_end),
                             0L);
  }
#line 101
  fprintf(_coverage_fout, "219\n");
#line 101
  fflush(_coverage_fout);
#line 104
  if (tmp___4) {
    {
#line 104
    fprintf(_coverage_fout, "217\n");
#line 104
    fflush(_coverage_fout);
#line 104
    tmp___2 = __overflow(stdout, (int )((unsigned char )__c));
    }
  } else {
#line 104
    fprintf(_coverage_fout, "218\n");
#line 104
    fflush(_coverage_fout);
#line 104
    tmp___3 = stdout->_IO_write_ptr;
#line 104
    (stdout->_IO_write_ptr) ++;
#line 104
    *tmp___3 = (char )__c;
#line 104
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
#line 101
  fprintf(_coverage_fout, "220\n");
#line 101
  fflush(_coverage_fout);
#line 104
  return (tmp___2);
}
}
#line 121
__inline static  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
#line 121 "/usr/include/bits/stdio.h"
__inline static int feof_unlocked(FILE *__stream ) 
{ 

  {
#line 121
  fprintf(_coverage_fout, "221\n");
#line 121
  fflush(_coverage_fout);
#line 124
  return ((__stream->_flags & 16) != 0);
}
}
#line 128
__inline static  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
#line 128 "/usr/include/bits/stdio.h"
__inline static int ferror_unlocked(FILE *__stream ) 
{ 

  {
#line 128
  fprintf(_coverage_fout, "222\n");
#line 128
  fflush(_coverage_fout);
#line 131
  return ((__stream->_flags & 32) != 0);
}
}
#line 55 "/usr/include/sys/resource.h"
extern  __attribute__((__nothrow__)) int getrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit *__rlimits )  __asm__("getrlimit64")  ;
#line 74
extern  __attribute__((__nothrow__)) int setrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit  const  *__rlimits )  __asm__("setrlimit64")  ;
#line 88
extern  __attribute__((__nothrow__)) int getrusage(__rusage_who_t __who ,
                                                   struct rusage *__usage ) ;
#line 94
extern  __attribute__((__nothrow__)) int getpriority(__priority_which_t __which ,
                                                     id_t __who ) ;
#line 98
extern  __attribute__((__nothrow__)) int setpriority(__priority_which_t __which ,
                                                     id_t __who , int __prio ) ;
#line 116 "/usr/include/sys/wait.h"
extern __pid_t wait(union wait *__stat_loc ) ;
#line 139
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
#line 155
extern int waitid(idtype_t __idtype , __id_t __id , siginfo_t *__infop ,
                  int __options ) ;
#line 169
extern  __attribute__((__nothrow__)) __pid_t wait3(union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;
#line 175
extern  __attribute__((__nothrow__)) __pid_t wait4(__pid_t __pid ,
                                                   union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;
#line 374 "mod_fastcgi.c"
static handler_t fcgi_handle_fdevent(void *s , void *ctx , int revents ) ;
#line 376 "mod_fastcgi.c"
int fastcgi_status_copy_procname(buffer *b , fcgi_extension_host *host ,
                                 fcgi_proc *proc ) 
{ 

  {
  {
#line 377
  fprintf(_coverage_fout, "223\n");
#line 377
  fflush(_coverage_fout);
#line 377
  buffer_copy_string(b, "fastcgi.backend.");
#line 377
  fprintf(_coverage_fout, "224\n");
#line 377
  fflush(_coverage_fout);
#line 378
  buffer_append_string_buffer(b, (buffer const   *)host->id);
  }
#line 376
  fprintf(_coverage_fout, "227\n");
#line 376
  fflush(_coverage_fout);
#line 379
  if (proc) {
    {
#line 380
    fprintf(_coverage_fout, "225\n");
#line 380
    fflush(_coverage_fout);
#line 380
    buffer_append_string(b, ".");
#line 380
    fprintf(_coverage_fout, "226\n");
#line 380
    fflush(_coverage_fout);
#line 381
    buffer_append_long(b, (long )proc->id);
    }
  }
#line 376
  fprintf(_coverage_fout, "228\n");
#line 376
  fflush(_coverage_fout);
#line 384
  return (0);
}
}
#line 387 "mod_fastcgi.c"
int fastcgi_status_init(server *srv , buffer *b , fcgi_extension_host *host ,
                        fcgi_proc *proc ) 
{ size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;

  {
  {
#line 393
  fprintf(_coverage_fout, "229\n");
#line 393
  fflush(_coverage_fout);
#line 393
  fastcgi_status_copy_procname(b, host, proc);
#line 393
  fprintf(_coverage_fout, "230\n");
#line 393
  fflush(_coverage_fout);
#line 393
  buffer_append_string(b, ".disabled");
  }
#line 387
  fprintf(_coverage_fout, "259\n");
#line 387
  fflush(_coverage_fout);
#line 393
  if (b->used) {
#line 393
    fprintf(_coverage_fout, "231\n");
#line 393
    fflush(_coverage_fout);
#line 393
    tmp = b->used - 1U;
  } else {
#line 393
    fprintf(_coverage_fout, "232\n");
#line 393
    fflush(_coverage_fout);
#line 393
    tmp = 0U;
  }
  {
#line 393
  fprintf(_coverage_fout, "233\n");
#line 393
  fflush(_coverage_fout);
#line 393
  status_counter_set(srv, (char const   *)b->ptr, tmp, 0);
#line 393
  fprintf(_coverage_fout, "234\n");
#line 393
  fflush(_coverage_fout);
#line 394
  fastcgi_status_copy_procname(b, host, proc);
#line 393
  fprintf(_coverage_fout, "235\n");
#line 393
  fflush(_coverage_fout);
#line 394
  buffer_append_string(b, ".died");
  }
#line 387
  fprintf(_coverage_fout, "260\n");
#line 387
  fflush(_coverage_fout);
#line 394
  if (b->used) {
#line 394
    fprintf(_coverage_fout, "236\n");
#line 394
    fflush(_coverage_fout);
#line 394
    tmp___0 = b->used - 1U;
  } else {
#line 394
    fprintf(_coverage_fout, "237\n");
#line 394
    fflush(_coverage_fout);
#line 394
    tmp___0 = 0U;
  }
  {
#line 394
  fprintf(_coverage_fout, "238\n");
#line 394
  fflush(_coverage_fout);
#line 394
  status_counter_set(srv, (char const   *)b->ptr, tmp___0, 0);
#line 394
  fprintf(_coverage_fout, "239\n");
#line 394
  fflush(_coverage_fout);
#line 395
  fastcgi_status_copy_procname(b, host, proc);
#line 394
  fprintf(_coverage_fout, "240\n");
#line 394
  fflush(_coverage_fout);
#line 395
  buffer_append_string(b, ".overloaded");
  }
#line 387
  fprintf(_coverage_fout, "261\n");
#line 387
  fflush(_coverage_fout);
#line 395
  if (b->used) {
#line 395
    fprintf(_coverage_fout, "241\n");
#line 395
    fflush(_coverage_fout);
#line 395
    tmp___1 = b->used - 1U;
  } else {
#line 395
    fprintf(_coverage_fout, "242\n");
#line 395
    fflush(_coverage_fout);
#line 395
    tmp___1 = 0U;
  }
  {
#line 395
  fprintf(_coverage_fout, "243\n");
#line 395
  fflush(_coverage_fout);
#line 395
  status_counter_set(srv, (char const   *)b->ptr, tmp___1, 0);
#line 395
  fprintf(_coverage_fout, "244\n");
#line 395
  fflush(_coverage_fout);
#line 396
  fastcgi_status_copy_procname(b, host, proc);
#line 395
  fprintf(_coverage_fout, "245\n");
#line 395
  fflush(_coverage_fout);
#line 396
  buffer_append_string(b, ".connected");
  }
#line 387
  fprintf(_coverage_fout, "262\n");
#line 387
  fflush(_coverage_fout);
#line 396
  if (b->used) {
#line 396
    fprintf(_coverage_fout, "246\n");
#line 396
    fflush(_coverage_fout);
#line 396
    tmp___2 = b->used - 1U;
  } else {
#line 396
    fprintf(_coverage_fout, "247\n");
#line 396
    fflush(_coverage_fout);
#line 396
    tmp___2 = 0U;
  }
  {
#line 396
  fprintf(_coverage_fout, "248\n");
#line 396
  fflush(_coverage_fout);
#line 396
  status_counter_set(srv, (char const   *)b->ptr, tmp___2, 0);
#line 396
  fprintf(_coverage_fout, "249\n");
#line 396
  fflush(_coverage_fout);
#line 397
  fastcgi_status_copy_procname(b, host, proc);
#line 396
  fprintf(_coverage_fout, "250\n");
#line 396
  fflush(_coverage_fout);
#line 397
  buffer_append_string(b, ".load");
  }
#line 387
  fprintf(_coverage_fout, "263\n");
#line 387
  fflush(_coverage_fout);
#line 397
  if (b->used) {
#line 397
    fprintf(_coverage_fout, "251\n");
#line 397
    fflush(_coverage_fout);
#line 397
    tmp___3 = b->used - 1U;
  } else {
#line 397
    fprintf(_coverage_fout, "252\n");
#line 397
    fflush(_coverage_fout);
#line 397
    tmp___3 = 0U;
  }
  {
#line 397
  fprintf(_coverage_fout, "253\n");
#line 397
  fflush(_coverage_fout);
#line 397
  status_counter_set(srv, (char const   *)b->ptr, tmp___3, 0);
#line 397
  fprintf(_coverage_fout, "254\n");
#line 397
  fflush(_coverage_fout);
#line 406
  fastcgi_status_copy_procname(b, host, (fcgi_proc *)((void *)0));
#line 397
  fprintf(_coverage_fout, "255\n");
#line 397
  fflush(_coverage_fout);
#line 406
  buffer_append_string(b, ".load");
  }
#line 387
  fprintf(_coverage_fout, "264\n");
#line 387
  fflush(_coverage_fout);
#line 406
  if (b->used) {
#line 406
    fprintf(_coverage_fout, "256\n");
#line 406
    fflush(_coverage_fout);
#line 406
    tmp___4 = b->used - 1U;
  } else {
#line 406
    fprintf(_coverage_fout, "257\n");
#line 406
    fflush(_coverage_fout);
#line 406
    tmp___4 = 0U;
  }
  {
#line 406
  fprintf(_coverage_fout, "258\n");
#line 406
  fflush(_coverage_fout);
#line 406
  status_counter_set(srv, (char const   *)b->ptr, tmp___4, 0);
  }
#line 387
  fprintf(_coverage_fout, "265\n");
#line 387
  fflush(_coverage_fout);
#line 410
  return (0);
}
}
#line 413 "mod_fastcgi.c"
static handler_ctx *handler_ctx_init(void) 
{ handler_ctx *hctx ;
  void *tmp ;

  {
  {
#line 416
  fprintf(_coverage_fout, "266\n");
#line 416
  fflush(_coverage_fout);
#line 416
  tmp = calloc(1U, sizeof(*hctx));
#line 416
  fprintf(_coverage_fout, "267\n");
#line 416
  fflush(_coverage_fout);
#line 416
  hctx = (handler_ctx *)tmp;
  }
#line 413
  fprintf(_coverage_fout, "279\n");
#line 413
  fflush(_coverage_fout);
#line 417
  if (! hctx) {
    {
#line 417
    fprintf(_coverage_fout, "268\n");
#line 417
    fflush(_coverage_fout);
#line 417
    __assert_fail("hctx", "mod_fastcgi.c", 417U, "handler_ctx_init");
    }
  }
  {
#line 419
  fprintf(_coverage_fout, "269\n");
#line 419
  fflush(_coverage_fout);
#line 419
  hctx->fde_ndx = -1;
#line 419
  fprintf(_coverage_fout, "270\n");
#line 419
  fflush(_coverage_fout);
#line 421
  hctx->response_header = buffer_init();
#line 419
  fprintf(_coverage_fout, "271\n");
#line 419
  fflush(_coverage_fout);
#line 423
  hctx->request_id = 0U;
#line 419
  fprintf(_coverage_fout, "272\n");
#line 419
  fflush(_coverage_fout);
#line 424
  hctx->state = (enum __anonenum_fcgi_connection_state_t_147 )1;
#line 419
  fprintf(_coverage_fout, "273\n");
#line 419
  fflush(_coverage_fout);
#line 425
  hctx->proc = (fcgi_proc *)((void *)0);
#line 419
  fprintf(_coverage_fout, "274\n");
#line 419
  fflush(_coverage_fout);
#line 427
  hctx->fd = -1;
#line 419
  fprintf(_coverage_fout, "275\n");
#line 419
  fflush(_coverage_fout);
#line 429
  hctx->reconnects = 0;
#line 419
  fprintf(_coverage_fout, "276\n");
#line 419
  fflush(_coverage_fout);
#line 430
  hctx->send_content_body = 1;
#line 419
  fprintf(_coverage_fout, "277\n");
#line 419
  fflush(_coverage_fout);
#line 432
  hctx->rb = chunkqueue_init();
#line 419
  fprintf(_coverage_fout, "278\n");
#line 419
  fflush(_coverage_fout);
#line 433
  hctx->wb = chunkqueue_init();
  }
#line 413
  fprintf(_coverage_fout, "280\n");
#line 413
  fflush(_coverage_fout);
#line 435
  return (hctx);
}
}
#line 438 "mod_fastcgi.c"
static void handler_ctx_free(handler_ctx *hctx ) 
{ 

  {
#line 438
  fprintf(_coverage_fout, "286\n");
#line 438
  fflush(_coverage_fout);
#line 439
  if (hctx->host) {
#line 439
    fprintf(_coverage_fout, "281\n");
#line 439
    fflush(_coverage_fout);
#line 440
    ((hctx->host)->load) --;
#line 441
    hctx->host = (fcgi_extension_host *)((void *)0);
  }
  {
#line 444
  fprintf(_coverage_fout, "282\n");
#line 444
  fflush(_coverage_fout);
#line 444
  buffer_free(hctx->response_header);
#line 444
  fprintf(_coverage_fout, "283\n");
#line 444
  fflush(_coverage_fout);
#line 446
  chunkqueue_free(hctx->rb);
#line 444
  fprintf(_coverage_fout, "284\n");
#line 444
  fflush(_coverage_fout);
#line 447
  chunkqueue_free(hctx->wb);
#line 444
  fprintf(_coverage_fout, "285\n");
#line 444
  fflush(_coverage_fout);
#line 449
  free((void *)hctx);
  }
#line 438
  fprintf(_coverage_fout, "287\n");
#line 438
  fflush(_coverage_fout);
#line 450
  return;
}
}
#line 452 "mod_fastcgi.c"
fcgi_proc *fastcgi_process_init(void) 
{ fcgi_proc *f ;
  void *tmp ;

  {
  {
#line 455
  fprintf(_coverage_fout, "288\n");
#line 455
  fflush(_coverage_fout);
#line 455
  tmp = calloc(1U, sizeof(*f));
#line 455
  fprintf(_coverage_fout, "289\n");
#line 455
  fflush(_coverage_fout);
#line 455
  f = (fcgi_proc *)tmp;
#line 455
  fprintf(_coverage_fout, "290\n");
#line 455
  fflush(_coverage_fout);
#line 456
  f->unixsocket = buffer_init();
#line 455
  fprintf(_coverage_fout, "291\n");
#line 455
  fflush(_coverage_fout);
#line 457
  f->connection_name = buffer_init();
#line 455
  fprintf(_coverage_fout, "292\n");
#line 455
  fflush(_coverage_fout);
#line 459
  f->prev = (struct fcgi_proc *)((void *)0);
#line 455
  fprintf(_coverage_fout, "293\n");
#line 455
  fflush(_coverage_fout);
#line 460
  f->next = (struct fcgi_proc *)((void *)0);
  }
#line 452
  fprintf(_coverage_fout, "294\n");
#line 452
  fflush(_coverage_fout);
#line 462
  return (f);
}
}
#line 465 "mod_fastcgi.c"
void fastcgi_process_free(fcgi_proc *f ) 
{ 

  {
#line 465
  fprintf(_coverage_fout, "300\n");
#line 465
  fflush(_coverage_fout);
#line 466
  if (! f) {
#line 466
    fprintf(_coverage_fout, "295\n");
#line 466
    fflush(_coverage_fout);
#line 466
    return;
  }
  {
#line 468
  fprintf(_coverage_fout, "296\n");
#line 468
  fflush(_coverage_fout);
#line 468
  fastcgi_process_free(f->next);
#line 468
  fprintf(_coverage_fout, "297\n");
#line 468
  fflush(_coverage_fout);
#line 470
  buffer_free(f->unixsocket);
#line 468
  fprintf(_coverage_fout, "298\n");
#line 468
  fflush(_coverage_fout);
#line 471
  buffer_free(f->connection_name);
#line 468
  fprintf(_coverage_fout, "299\n");
#line 468
  fflush(_coverage_fout);
#line 473
  free((void *)f);
  }
#line 465
  fprintf(_coverage_fout, "301\n");
#line 465
  fflush(_coverage_fout);
#line 474
  return;
}
}
#line 476 "mod_fastcgi.c"
fcgi_extension_host *fastcgi_host_init(void) 
{ fcgi_extension_host *f ;
  void *tmp ;

  {
  {
#line 479
  fprintf(_coverage_fout, "302\n");
#line 479
  fflush(_coverage_fout);
#line 479
  tmp = calloc(1U, sizeof(*f));
#line 479
  fprintf(_coverage_fout, "303\n");
#line 479
  fflush(_coverage_fout);
#line 479
  f = (fcgi_extension_host *)tmp;
#line 479
  fprintf(_coverage_fout, "304\n");
#line 479
  fflush(_coverage_fout);
#line 481
  f->id = buffer_init();
#line 479
  fprintf(_coverage_fout, "305\n");
#line 479
  fflush(_coverage_fout);
#line 482
  f->host = buffer_init();
#line 479
  fprintf(_coverage_fout, "306\n");
#line 479
  fflush(_coverage_fout);
#line 483
  f->unixsocket = buffer_init();
#line 479
  fprintf(_coverage_fout, "307\n");
#line 479
  fflush(_coverage_fout);
#line 484
  f->docroot = buffer_init();
#line 479
  fprintf(_coverage_fout, "308\n");
#line 479
  fflush(_coverage_fout);
#line 485
  f->bin_path = buffer_init();
#line 479
  fprintf(_coverage_fout, "309\n");
#line 479
  fflush(_coverage_fout);
#line 486
  f->bin_env = array_init();
#line 479
  fprintf(_coverage_fout, "310\n");
#line 479
  fflush(_coverage_fout);
#line 487
  f->bin_env_copy = array_init();
#line 479
  fprintf(_coverage_fout, "311\n");
#line 479
  fflush(_coverage_fout);
#line 488
  f->strip_request_uri = buffer_init();
  }
#line 476
  fprintf(_coverage_fout, "312\n");
#line 476
  fflush(_coverage_fout);
#line 490
  return (f);
}
}
#line 493 "mod_fastcgi.c"
void fastcgi_host_free(fcgi_extension_host *h ) 
{ 

  {
#line 493
  fprintf(_coverage_fout, "325\n");
#line 493
  fflush(_coverage_fout);
#line 494
  if (! h) {
#line 494
    fprintf(_coverage_fout, "313\n");
#line 494
    fflush(_coverage_fout);
#line 494
    return;
  }
  {
#line 496
  fprintf(_coverage_fout, "314\n");
#line 496
  fflush(_coverage_fout);
#line 496
  buffer_free(h->id);
#line 496
  fprintf(_coverage_fout, "315\n");
#line 496
  fflush(_coverage_fout);
#line 497
  buffer_free(h->host);
#line 496
  fprintf(_coverage_fout, "316\n");
#line 496
  fflush(_coverage_fout);
#line 498
  buffer_free(h->unixsocket);
#line 496
  fprintf(_coverage_fout, "317\n");
#line 496
  fflush(_coverage_fout);
#line 499
  buffer_free(h->docroot);
#line 496
  fprintf(_coverage_fout, "318\n");
#line 496
  fflush(_coverage_fout);
#line 500
  buffer_free(h->bin_path);
#line 496
  fprintf(_coverage_fout, "319\n");
#line 496
  fflush(_coverage_fout);
#line 501
  buffer_free(h->strip_request_uri);
#line 496
  fprintf(_coverage_fout, "320\n");
#line 496
  fflush(_coverage_fout);
#line 502
  array_free(h->bin_env);
#line 496
  fprintf(_coverage_fout, "321\n");
#line 496
  fflush(_coverage_fout);
#line 503
  array_free(h->bin_env_copy);
#line 496
  fprintf(_coverage_fout, "322\n");
#line 496
  fflush(_coverage_fout);
#line 505
  fastcgi_process_free(h->first);
#line 496
  fprintf(_coverage_fout, "323\n");
#line 496
  fflush(_coverage_fout);
#line 506
  fastcgi_process_free(h->unused_procs);
#line 496
  fprintf(_coverage_fout, "324\n");
#line 496
  fflush(_coverage_fout);
#line 508
  free((void *)h);
  }
#line 493
  fprintf(_coverage_fout, "326\n");
#line 493
  fflush(_coverage_fout);
#line 510
  return;
}
}
#line 512 "mod_fastcgi.c"
fcgi_exts *fastcgi_extensions_init(void) 
{ fcgi_exts *f ;
  void *tmp ;

  {
  {
#line 515
  fprintf(_coverage_fout, "327\n");
#line 515
  fflush(_coverage_fout);
#line 515
  tmp = calloc(1U, sizeof(*f));
#line 515
  fprintf(_coverage_fout, "328\n");
#line 515
  fflush(_coverage_fout);
#line 515
  f = (fcgi_exts *)tmp;
  }
#line 512
  fprintf(_coverage_fout, "329\n");
#line 512
  fflush(_coverage_fout);
#line 517
  return (f);
}
}
#line 520 "mod_fastcgi.c"
void fastcgi_extensions_free(fcgi_exts *f ) 
{ size_t i ;
  fcgi_extension *fe ;
  size_t j ;
  fcgi_extension_host *h ;

  {
#line 520
  fprintf(_coverage_fout, "344\n");
#line 520
  fflush(_coverage_fout);
#line 523
  if (! f) {
#line 523
    fprintf(_coverage_fout, "330\n");
#line 523
    fflush(_coverage_fout);
#line 523
    return;
  }
#line 520
  fprintf(_coverage_fout, "345\n");
#line 520
  fflush(_coverage_fout);
#line 525
  i = 0U;
#line 520
  fprintf(_coverage_fout, "346\n");
#line 520
  fflush(_coverage_fout);
#line 525
  while (1) {
#line 525
    fprintf(_coverage_fout, "339\n");
#line 525
    fflush(_coverage_fout);
#line 525
    if (! (i < f->used)) {
#line 525
      break;
    }
#line 525
    fprintf(_coverage_fout, "340\n");
#line 525
    fflush(_coverage_fout);
#line 529
    fe = *(f->exts + i);
#line 531
    j = 0U;
#line 525
    fprintf(_coverage_fout, "341\n");
#line 525
    fflush(_coverage_fout);
#line 531
    while (1) {
#line 531
      fprintf(_coverage_fout, "334\n");
#line 531
      fflush(_coverage_fout);
#line 531
      if (! (j < fe->used)) {
#line 531
        break;
      }
      {
#line 534
      fprintf(_coverage_fout, "331\n");
#line 534
      fflush(_coverage_fout);
#line 534
      h = *(fe->hosts + j);
#line 534
      fprintf(_coverage_fout, "332\n");
#line 534
      fflush(_coverage_fout);
#line 536
      fastcgi_host_free(h);
#line 534
      fprintf(_coverage_fout, "333\n");
#line 534
      fflush(_coverage_fout);
#line 531
      j ++;
      }
    }
    {
#line 539
    fprintf(_coverage_fout, "335\n");
#line 539
    fflush(_coverage_fout);
#line 539
    buffer_free(fe->key);
#line 539
    fprintf(_coverage_fout, "336\n");
#line 539
    fflush(_coverage_fout);
#line 540
    free((void *)fe->hosts);
#line 539
    fprintf(_coverage_fout, "337\n");
#line 539
    fflush(_coverage_fout);
#line 542
    free((void *)fe);
#line 539
    fprintf(_coverage_fout, "338\n");
#line 539
    fflush(_coverage_fout);
#line 525
    i ++;
    }
  }
  {
#line 545
  fprintf(_coverage_fout, "342\n");
#line 545
  fflush(_coverage_fout);
#line 545
  free((void *)f->exts);
#line 545
  fprintf(_coverage_fout, "343\n");
#line 545
  fflush(_coverage_fout);
#line 547
  free((void *)f);
  }
#line 520
  fprintf(_coverage_fout, "347\n");
#line 520
  fflush(_coverage_fout);
#line 548
  return;
}
}
#line 550 "mod_fastcgi.c"
int fastcgi_extension_insert(fcgi_exts *ext , buffer *key ,
                             fcgi_extension_host *fh ) 
{ fcgi_extension *fe ;
  size_t i ;
  int tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  size_t tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  size_t tmp___6 ;

  {
#line 550
  fprintf(_coverage_fout, "384\n");
#line 550
  fflush(_coverage_fout);
#line 556
  i = 0U;
#line 550
  fprintf(_coverage_fout, "385\n");
#line 550
  fflush(_coverage_fout);
#line 556
  while (1) {
#line 556
    fprintf(_coverage_fout, "349\n");
#line 556
    fflush(_coverage_fout);
#line 556
    if (! (i < ext->used)) {
#line 556
      break;
    }
    {
#line 557
    fprintf(_coverage_fout, "348\n");
#line 557
    fflush(_coverage_fout);
#line 557
    tmp = buffer_is_equal(key, (*(ext->exts + i))->key);
    }
#line 556
    fprintf(_coverage_fout, "350\n");
#line 556
    fflush(_coverage_fout);
#line 557
    if (tmp) {
#line 558
      break;
    }
#line 556
    fprintf(_coverage_fout, "351\n");
#line 556
    fflush(_coverage_fout);
#line 556
    i ++;
  }
#line 550
  fprintf(_coverage_fout, "386\n");
#line 550
  fflush(_coverage_fout);
#line 562
  if (i == ext->used) {
    {
#line 564
    fprintf(_coverage_fout, "352\n");
#line 564
    fflush(_coverage_fout);
#line 564
    tmp___0 = calloc(1U, sizeof(*fe));
#line 564
    fprintf(_coverage_fout, "353\n");
#line 564
    fflush(_coverage_fout);
#line 564
    fe = (fcgi_extension *)tmp___0;
    }
#line 562
    fprintf(_coverage_fout, "369\n");
#line 562
    fflush(_coverage_fout);
#line 565
    if (! fe) {
      {
#line 565
      fprintf(_coverage_fout, "354\n");
#line 565
      fflush(_coverage_fout);
#line 565
      __assert_fail("fe", "mod_fastcgi.c", 565U, "fastcgi_extension_insert");
      }
    }
    {
#line 566
    fprintf(_coverage_fout, "355\n");
#line 566
    fflush(_coverage_fout);
#line 566
    fe->key = buffer_init();
#line 566
    fprintf(_coverage_fout, "356\n");
#line 566
    fflush(_coverage_fout);
#line 567
    fe->last_used_ndx = -1;
#line 566
    fprintf(_coverage_fout, "357\n");
#line 566
    fflush(_coverage_fout);
#line 568
    buffer_copy_string_buffer(fe->key, (buffer const   *)key);
    }
#line 562
    fprintf(_coverage_fout, "370\n");
#line 562
    fflush(_coverage_fout);
#line 572
    if (ext->size == 0U) {
      {
#line 573
      fprintf(_coverage_fout, "358\n");
#line 573
      fflush(_coverage_fout);
#line 573
      ext->size = 8U;
#line 573
      fprintf(_coverage_fout, "359\n");
#line 573
      fflush(_coverage_fout);
#line 574
      tmp___1 = malloc(ext->size * sizeof(*(ext->exts)));
#line 573
      fprintf(_coverage_fout, "360\n");
#line 573
      fflush(_coverage_fout);
#line 574
      ext->exts = (fcgi_extension **)tmp___1;
      }
#line 572
      fprintf(_coverage_fout, "362\n");
#line 572
      fflush(_coverage_fout);
#line 575
      if (! ext->exts) {
        {
#line 575
        fprintf(_coverage_fout, "361\n");
#line 575
        fflush(_coverage_fout);
#line 575
        __assert_fail("ext->exts", "mod_fastcgi.c", 575U,
                      "fastcgi_extension_insert");
        }
      }
    } else {
#line 572
      fprintf(_coverage_fout, "368\n");
#line 572
      fflush(_coverage_fout);
#line 576
      if (ext->used == ext->size) {
        {
#line 577
        fprintf(_coverage_fout, "363\n");
#line 577
        fflush(_coverage_fout);
#line 577
        ext->size += 8U;
#line 577
        fprintf(_coverage_fout, "364\n");
#line 577
        fflush(_coverage_fout);
#line 578
        tmp___2 = realloc((void *)ext->exts, ext->size * sizeof(*(ext->exts)));
#line 577
        fprintf(_coverage_fout, "365\n");
#line 577
        fflush(_coverage_fout);
#line 578
        ext->exts = (fcgi_extension **)tmp___2;
        }
#line 576
        fprintf(_coverage_fout, "367\n");
#line 576
        fflush(_coverage_fout);
#line 579
        if (! ext->exts) {
          {
#line 579
          fprintf(_coverage_fout, "366\n");
#line 579
          fflush(_coverage_fout);
#line 579
          __assert_fail("ext->exts", "mod_fastcgi.c", 579U,
                        "fastcgi_extension_insert");
          }
        }
      }
    }
#line 562
    fprintf(_coverage_fout, "371\n");
#line 562
    fflush(_coverage_fout);
#line 581
    tmp___3 = ext->used;
#line 581
    (ext->used) ++;
#line 581
    *(ext->exts + tmp___3) = fe;
  } else {
#line 562
    fprintf(_coverage_fout, "372\n");
#line 562
    fflush(_coverage_fout);
#line 583
    fe = *(ext->exts + i);
  }
#line 550
  fprintf(_coverage_fout, "387\n");
#line 550
  fflush(_coverage_fout);
#line 586
  if (fe->size == 0U) {
    {
#line 587
    fprintf(_coverage_fout, "373\n");
#line 587
    fflush(_coverage_fout);
#line 587
    fe->size = 4U;
#line 587
    fprintf(_coverage_fout, "374\n");
#line 587
    fflush(_coverage_fout);
#line 588
    tmp___4 = malloc(fe->size * sizeof(*(fe->hosts)));
#line 587
    fprintf(_coverage_fout, "375\n");
#line 587
    fflush(_coverage_fout);
#line 588
    fe->hosts = (fcgi_extension_host **)tmp___4;
    }
#line 586
    fprintf(_coverage_fout, "377\n");
#line 586
    fflush(_coverage_fout);
#line 589
    if (! fe->hosts) {
      {
#line 589
      fprintf(_coverage_fout, "376\n");
#line 589
      fflush(_coverage_fout);
#line 589
      __assert_fail("fe->hosts", "mod_fastcgi.c", 589U,
                    "fastcgi_extension_insert");
      }
    }
  } else {
#line 586
    fprintf(_coverage_fout, "383\n");
#line 586
    fflush(_coverage_fout);
#line 590
    if (fe->size == fe->used) {
      {
#line 591
      fprintf(_coverage_fout, "378\n");
#line 591
      fflush(_coverage_fout);
#line 591
      fe->size += 4U;
#line 591
      fprintf(_coverage_fout, "379\n");
#line 591
      fflush(_coverage_fout);
#line 592
      tmp___5 = realloc((void *)fe->hosts, fe->size * sizeof(*(fe->hosts)));
#line 591
      fprintf(_coverage_fout, "380\n");
#line 591
      fflush(_coverage_fout);
#line 592
      fe->hosts = (fcgi_extension_host **)tmp___5;
      }
#line 590
      fprintf(_coverage_fout, "382\n");
#line 590
      fflush(_coverage_fout);
#line 593
      if (! fe->hosts) {
        {
#line 593
        fprintf(_coverage_fout, "381\n");
#line 593
        fflush(_coverage_fout);
#line 593
        __assert_fail("fe->hosts", "mod_fastcgi.c", 593U,
                      "fastcgi_extension_insert");
        }
      }
    }
  }
#line 550
  fprintf(_coverage_fout, "388\n");
#line 550
  fflush(_coverage_fout);
#line 596
  tmp___6 = fe->used;
#line 596
  (fe->used) ++;
#line 596
  *(fe->hosts + tmp___6) = fh;
#line 550
  fprintf(_coverage_fout, "389\n");
#line 550
  fflush(_coverage_fout);
#line 598
  return (0);
}
}
#line 602 "mod_fastcgi.c"
static void *mod_fastcgi_init(void) 
{ plugin_data *p ;
  void *tmp ;

  {
  {
#line 605
  fprintf(_coverage_fout, "390\n");
#line 605
  fflush(_coverage_fout);
#line 605
  tmp = calloc(1U, sizeof(*p));
#line 605
  fprintf(_coverage_fout, "391\n");
#line 605
  fflush(_coverage_fout);
#line 605
  p = (plugin_data *)tmp;
#line 605
  fprintf(_coverage_fout, "392\n");
#line 605
  fflush(_coverage_fout);
#line 607
  p->fcgi_env = buffer_init();
#line 605
  fprintf(_coverage_fout, "393\n");
#line 605
  fflush(_coverage_fout);
#line 609
  p->path = buffer_init();
#line 605
  fprintf(_coverage_fout, "394\n");
#line 605
  fflush(_coverage_fout);
#line 610
  p->parse_response = buffer_init();
#line 605
  fprintf(_coverage_fout, "395\n");
#line 605
  fflush(_coverage_fout);
#line 612
  p->statuskey = buffer_init();
  }
#line 602
  fprintf(_coverage_fout, "396\n");
#line 602
  fflush(_coverage_fout);
#line 614
  return ((void *)p);
}
}
#line 618 "mod_fastcgi.c"
static handler_t mod_fastcgi_free(server *srv , void *p_d ) 
{ plugin_data *p ;
  buffer_uint *r ;
  size_t i ;
  size_t j ;
  size_t n ;
  plugin_config *s ;
  fcgi_exts *exts ;
  fcgi_extension *ex ;
  fcgi_proc *proc ;
  fcgi_extension_host *host ;
  int tmp ;
  int tmp___0 ;

  {
#line 618
  fprintf(_coverage_fout, "441\n");
#line 618
  fflush(_coverage_fout);
#line 619
  p = (plugin_data *)p_d;
#line 620
  r = & p->fcgi_request_id;
#line 618
  fprintf(_coverage_fout, "442\n");
#line 618
  fflush(_coverage_fout);
#line 624
  if (r->ptr) {
    {
#line 624
    fprintf(_coverage_fout, "397\n");
#line 624
    fflush(_coverage_fout);
#line 624
    free((void *)r->ptr);
    }
  }
  {
#line 626
  fprintf(_coverage_fout, "398\n");
#line 626
  fflush(_coverage_fout);
#line 626
  buffer_free(p->fcgi_env);
#line 626
  fprintf(_coverage_fout, "399\n");
#line 626
  fflush(_coverage_fout);
#line 627
  buffer_free(p->path);
#line 626
  fprintf(_coverage_fout, "400\n");
#line 626
  fflush(_coverage_fout);
#line 628
  buffer_free(p->parse_response);
#line 626
  fprintf(_coverage_fout, "401\n");
#line 626
  fflush(_coverage_fout);
#line 629
  buffer_free(p->statuskey);
  }
#line 618
  fprintf(_coverage_fout, "443\n");
#line 618
  fflush(_coverage_fout);
#line 631
  if (p->config_storage) {
#line 631
    fprintf(_coverage_fout, "438\n");
#line 631
    fflush(_coverage_fout);
#line 633
    i = 0U;
#line 631
    fprintf(_coverage_fout, "439\n");
#line 631
    fflush(_coverage_fout);
#line 633
    while (1) {
#line 633
      fprintf(_coverage_fout, "431\n");
#line 633
      fflush(_coverage_fout);
#line 633
      if (! (i < (srv->config_context)->used)) {
#line 633
        break;
      }
#line 633
      fprintf(_coverage_fout, "432\n");
#line 633
      fflush(_coverage_fout);
#line 634
      s = *(p->config_storage + i);
#line 633
      fprintf(_coverage_fout, "433\n");
#line 633
      fflush(_coverage_fout);
#line 637
      if (! s) {
        goto __Cont;
      }
#line 633
      fprintf(_coverage_fout, "434\n");
#line 633
      fflush(_coverage_fout);
#line 639
      exts = s->exts;
#line 641
      j = 0U;
#line 633
      fprintf(_coverage_fout, "435\n");
#line 633
      fflush(_coverage_fout);
#line 641
      while (1) {
#line 641
        fprintf(_coverage_fout, "424\n");
#line 641
        fflush(_coverage_fout);
#line 641
        if (! (j < exts->used)) {
#line 641
          break;
        }
#line 641
        fprintf(_coverage_fout, "425\n");
#line 641
        fflush(_coverage_fout);
#line 644
        ex = *(exts->exts + j);
#line 646
        n = 0U;
#line 641
        fprintf(_coverage_fout, "426\n");
#line 641
        fflush(_coverage_fout);
#line 646
        while (1) {
#line 646
          fprintf(_coverage_fout, "418\n");
#line 646
          fflush(_coverage_fout);
#line 646
          if (! (n < ex->used)) {
#line 646
            break;
          }
#line 646
          fprintf(_coverage_fout, "419\n");
#line 646
          fflush(_coverage_fout);
#line 650
          host = *(ex->hosts + n);
#line 652
          proc = host->first;
#line 646
          fprintf(_coverage_fout, "420\n");
#line 646
          fflush(_coverage_fout);
#line 652
          while (1) {
#line 652
            fprintf(_coverage_fout, "406\n");
#line 652
            fflush(_coverage_fout);
#line 652
            if (! proc) {
#line 652
              break;
            }
#line 652
            fprintf(_coverage_fout, "407\n");
#line 652
            fflush(_coverage_fout);
#line 653
            if (proc->pid != 0) {
              {
#line 654
              fprintf(_coverage_fout, "402\n");
#line 654
              fflush(_coverage_fout);
#line 654
              kill(proc->pid, (int )host->kill_signal);
              }
            }
#line 652
            fprintf(_coverage_fout, "408\n");
#line 652
            fflush(_coverage_fout);
#line 657
            if (proc->is_local) {
              {
#line 657
              fprintf(_coverage_fout, "403\n");
#line 657
              fflush(_coverage_fout);
#line 657
              tmp = buffer_is_empty(proc->unixsocket);
              }
#line 657
              fprintf(_coverage_fout, "405\n");
#line 657
              fflush(_coverage_fout);
#line 657
              if (! tmp) {
                {
#line 659
                fprintf(_coverage_fout, "404\n");
#line 659
                fflush(_coverage_fout);
#line 659
                unlink((char const   *)(proc->unixsocket)->ptr);
                }
              }
            }
#line 652
            fprintf(_coverage_fout, "409\n");
#line 652
            fflush(_coverage_fout);
#line 652
            proc = proc->next;
          }
#line 646
          fprintf(_coverage_fout, "421\n");
#line 646
          fflush(_coverage_fout);
#line 663
          proc = host->unused_procs;
#line 646
          fprintf(_coverage_fout, "422\n");
#line 646
          fflush(_coverage_fout);
#line 663
          while (1) {
#line 663
            fprintf(_coverage_fout, "414\n");
#line 663
            fflush(_coverage_fout);
#line 663
            if (! proc) {
#line 663
              break;
            }
#line 663
            fprintf(_coverage_fout, "415\n");
#line 663
            fflush(_coverage_fout);
#line 664
            if (proc->pid != 0) {
              {
#line 665
              fprintf(_coverage_fout, "410\n");
#line 665
              fflush(_coverage_fout);
#line 665
              kill(proc->pid, (int )host->kill_signal);
              }
            }
#line 663
            fprintf(_coverage_fout, "416\n");
#line 663
            fflush(_coverage_fout);
#line 667
            if (proc->is_local) {
              {
#line 667
              fprintf(_coverage_fout, "411\n");
#line 667
              fflush(_coverage_fout);
#line 667
              tmp___0 = buffer_is_empty(proc->unixsocket);
              }
#line 667
              fprintf(_coverage_fout, "413\n");
#line 667
              fflush(_coverage_fout);
#line 667
              if (! tmp___0) {
                {
#line 669
                fprintf(_coverage_fout, "412\n");
#line 669
                fflush(_coverage_fout);
#line 669
                unlink((char const   *)(proc->unixsocket)->ptr);
                }
              }
            }
#line 663
            fprintf(_coverage_fout, "417\n");
#line 663
            fflush(_coverage_fout);
#line 663
            proc = proc->next;
          }
#line 646
          fprintf(_coverage_fout, "423\n");
#line 646
          fflush(_coverage_fout);
#line 646
          n ++;
        }
#line 641
        fprintf(_coverage_fout, "427\n");
#line 641
        fflush(_coverage_fout);
#line 641
        j ++;
      }
      {
#line 675
      fprintf(_coverage_fout, "428\n");
#line 675
      fflush(_coverage_fout);
#line 675
      fastcgi_extensions_free(s->exts);
#line 675
      fprintf(_coverage_fout, "429\n");
#line 675
      fflush(_coverage_fout);
#line 676
      array_free(s->ext_mapping);
#line 675
      fprintf(_coverage_fout, "430\n");
#line 675
      fflush(_coverage_fout);
#line 678
      free((void *)s);
      }
#line 633
      fprintf(_coverage_fout, "436\n");
#line 633
      fflush(_coverage_fout);
      __Cont: 
#line 633
      i ++;
    }
    {
#line 680
    fprintf(_coverage_fout, "437\n");
#line 680
    fflush(_coverage_fout);
#line 680
    free((void *)p->config_storage);
    }
  }
  {
#line 683
  fprintf(_coverage_fout, "440\n");
#line 683
  fflush(_coverage_fout);
#line 683
  free((void *)p);
  }
#line 618
  fprintf(_coverage_fout, "444\n");
#line 618
  fflush(_coverage_fout);
#line 685
  return ((enum __anonenum_handler_t_43 )1);
}
}
#line 688 "mod_fastcgi.c"
static int env_add(char_array *env , char const   *key , size_t key_len ,
                   char const   *val , size_t val_len ) 
{ char *dst ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  size_t tmp___2 ;

  {
#line 688
  fprintf(_coverage_fout, "460\n");
#line 688
  fflush(_coverage_fout);
#line 691
  if (! key) {
#line 691
    fprintf(_coverage_fout, "445\n");
#line 691
    fflush(_coverage_fout);
#line 691
    return (-1);
  } else {
#line 691
    fprintf(_coverage_fout, "447\n");
#line 691
    fflush(_coverage_fout);
#line 691
    if (! val) {
#line 691
      fprintf(_coverage_fout, "446\n");
#line 691
      fflush(_coverage_fout);
#line 691
      return (-1);
    }
  }
  {
#line 693
  fprintf(_coverage_fout, "448\n");
#line 693
  fflush(_coverage_fout);
#line 693
  tmp = malloc((key_len + val_len) + 3U);
#line 693
  fprintf(_coverage_fout, "449\n");
#line 693
  fflush(_coverage_fout);
#line 693
  dst = (char *)tmp;
#line 693
  fprintf(_coverage_fout, "450\n");
#line 693
  fflush(_coverage_fout);
#line 694
  memcpy((void */* __restrict  */)((void *)dst),
         (void const   */* __restrict  */)((void const   *)key), key_len);
#line 693
  fprintf(_coverage_fout, "451\n");
#line 693
  fflush(_coverage_fout);
#line 695
  *(dst + key_len) = (char )'=';
#line 693
  fprintf(_coverage_fout, "452\n");
#line 693
  fflush(_coverage_fout);
#line 697
  memcpy((void */* __restrict  */)((void *)((dst + key_len) + 1)),
         (void const   */* __restrict  */)((void const   *)val), val_len + 1U);
  }
#line 688
  fprintf(_coverage_fout, "461\n");
#line 688
  fflush(_coverage_fout);
#line 699
  if (env->size == 0U) {
    {
#line 700
    fprintf(_coverage_fout, "453\n");
#line 700
    fflush(_coverage_fout);
#line 700
    env->size = 16U;
#line 700
    fprintf(_coverage_fout, "454\n");
#line 700
    fflush(_coverage_fout);
#line 701
    tmp___0 = malloc(env->size * sizeof(*(env->ptr)));
#line 700
    fprintf(_coverage_fout, "455\n");
#line 700
    fflush(_coverage_fout);
#line 701
    env->ptr = (char **)tmp___0;
    }
  } else {
#line 699
    fprintf(_coverage_fout, "459\n");
#line 699
    fflush(_coverage_fout);
#line 702
    if (env->size == env->used + 1U) {
      {
#line 703
      fprintf(_coverage_fout, "456\n");
#line 703
      fflush(_coverage_fout);
#line 703
      env->size += 16U;
#line 703
      fprintf(_coverage_fout, "457\n");
#line 703
      fflush(_coverage_fout);
#line 704
      tmp___1 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
#line 703
      fprintf(_coverage_fout, "458\n");
#line 703
      fflush(_coverage_fout);
#line 704
      env->ptr = (char **)tmp___1;
      }
    }
  }
#line 688
  fprintf(_coverage_fout, "462\n");
#line 688
  fflush(_coverage_fout);
#line 707
  tmp___2 = env->used;
#line 707
  (env->used) ++;
#line 707
  *(env->ptr + tmp___2) = dst;
#line 688
  fprintf(_coverage_fout, "463\n");
#line 688
  fflush(_coverage_fout);
#line 709
  return (0);
}
}
#line 712 "mod_fastcgi.c"
static int parse_binpath(char_array *env , buffer *b ) 
{ char *start ;
  size_t i ;
  void *tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  size_t tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  size_t tmp___7 ;

  {
#line 712
  fprintf(_coverage_fout, "490\n");
#line 712
  fflush(_coverage_fout);
#line 717
  start = b->ptr;
#line 718
  i = 0U;
#line 712
  fprintf(_coverage_fout, "491\n");
#line 712
  fflush(_coverage_fout);
#line 718
  while (1) {
#line 718
    fprintf(_coverage_fout, "474\n");
#line 718
    fflush(_coverage_fout);
#line 718
    if (! (i < b->used - 1U)) {
#line 718
      break;
    }
#line 719
    switch ((int )*(b->ptr + i)) {
#line 719
    fprintf(_coverage_fout, "471\n");
#line 719
    fflush(_coverage_fout);
    case 32: 
    case 9: 
#line 724
    if (env->size == 0U) {
      {
#line 725
      fprintf(_coverage_fout, "464\n");
#line 725
      fflush(_coverage_fout);
#line 725
      env->size = 16U;
#line 725
      fprintf(_coverage_fout, "465\n");
#line 725
      fflush(_coverage_fout);
#line 726
      tmp = malloc(env->size * sizeof(*(env->ptr)));
#line 725
      fprintf(_coverage_fout, "466\n");
#line 725
      fflush(_coverage_fout);
#line 726
      env->ptr = (char **)tmp;
      }
    } else {
#line 724
      fprintf(_coverage_fout, "470\n");
#line 724
      fflush(_coverage_fout);
#line 727
      if (env->size == env->used) {
        {
#line 728
        fprintf(_coverage_fout, "467\n");
#line 728
        fflush(_coverage_fout);
#line 728
        env->size += 16U;
#line 728
        fprintf(_coverage_fout, "468\n");
#line 728
        fflush(_coverage_fout);
#line 729
        tmp___0 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
#line 728
        fprintf(_coverage_fout, "469\n");
#line 728
        fflush(_coverage_fout);
#line 729
        env->ptr = (char **)tmp___0;
        }
      }
    }
#line 719
    fprintf(_coverage_fout, "472\n");
#line 719
    fflush(_coverage_fout);
#line 732
    *(b->ptr + i) = (char )'\000';
#line 734
    tmp___1 = env->used;
#line 734
    (env->used) ++;
#line 734
    *(env->ptr + tmp___1) = start;
#line 736
    start = (b->ptr + i) + 1;
#line 737
    break;
#line 719
    fprintf(_coverage_fout, "473\n");
#line 719
    fflush(_coverage_fout);
    default: ;
#line 739
    break;
    }
#line 718
    fprintf(_coverage_fout, "475\n");
#line 718
    fflush(_coverage_fout);
#line 718
    i ++;
  }
#line 712
  fprintf(_coverage_fout, "492\n");
#line 712
  fflush(_coverage_fout);
#line 743
  if (env->size == 0U) {
    {
#line 744
    fprintf(_coverage_fout, "476\n");
#line 744
    fflush(_coverage_fout);
#line 744
    env->size = 16U;
#line 744
    fprintf(_coverage_fout, "477\n");
#line 744
    fflush(_coverage_fout);
#line 745
    tmp___2 = malloc(env->size * sizeof(*(env->ptr)));
#line 744
    fprintf(_coverage_fout, "478\n");
#line 744
    fflush(_coverage_fout);
#line 745
    env->ptr = (char **)tmp___2;
    }
  } else {
#line 743
    fprintf(_coverage_fout, "482\n");
#line 743
    fflush(_coverage_fout);
#line 746
    if (env->size == env->used) {
      {
#line 747
      fprintf(_coverage_fout, "479\n");
#line 747
      fflush(_coverage_fout);
#line 747
      env->size += 16U;
#line 747
      fprintf(_coverage_fout, "480\n");
#line 747
      fflush(_coverage_fout);
#line 748
      tmp___3 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
#line 747
      fprintf(_coverage_fout, "481\n");
#line 747
      fflush(_coverage_fout);
#line 748
      env->ptr = (char **)tmp___3;
      }
    }
  }
#line 712
  fprintf(_coverage_fout, "493\n");
#line 712
  fflush(_coverage_fout);
#line 752
  tmp___4 = env->used;
#line 752
  (env->used) ++;
#line 752
  *(env->ptr + tmp___4) = start;
#line 712
  fprintf(_coverage_fout, "494\n");
#line 712
  fflush(_coverage_fout);
#line 754
  if (env->size == 0U) {
    {
#line 755
    fprintf(_coverage_fout, "483\n");
#line 755
    fflush(_coverage_fout);
#line 755
    env->size = 16U;
#line 755
    fprintf(_coverage_fout, "484\n");
#line 755
    fflush(_coverage_fout);
#line 756
    tmp___5 = malloc(env->size * sizeof(*(env->ptr)));
#line 755
    fprintf(_coverage_fout, "485\n");
#line 755
    fflush(_coverage_fout);
#line 756
    env->ptr = (char **)tmp___5;
    }
  } else {
#line 754
    fprintf(_coverage_fout, "489\n");
#line 754
    fflush(_coverage_fout);
#line 757
    if (env->size == env->used) {
      {
#line 758
      fprintf(_coverage_fout, "486\n");
#line 758
      fflush(_coverage_fout);
#line 758
      env->size += 16U;
#line 758
      fprintf(_coverage_fout, "487\n");
#line 758
      fflush(_coverage_fout);
#line 759
      tmp___6 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
#line 758
      fprintf(_coverage_fout, "488\n");
#line 758
      fflush(_coverage_fout);
#line 759
      env->ptr = (char **)tmp___6;
      }
    }
  }
#line 712
  fprintf(_coverage_fout, "495\n");
#line 712
  fflush(_coverage_fout);
#line 763
  tmp___7 = env->used;
#line 763
  (env->used) ++;
#line 763
  *(env->ptr + tmp___7) = (char *)((void *)0);
#line 712
  fprintf(_coverage_fout, "496\n");
#line 712
  fflush(_coverage_fout);
#line 765
  return (0);
}
}
#line 768 "mod_fastcgi.c"
static int fcgi_spawn_connection(server *srv , plugin_data *p ,
                                 fcgi_extension_host *host , fcgi_proc *proc ) 
{ int fcgi_fd ;
  int socket_type ;
  int status ;
  struct timeval tv ;
  struct sockaddr_un fcgi_addr_un ;
  struct sockaddr_in fcgi_addr_in ;
  struct sockaddr *fcgi_addr ;
  socklen_t servlen ;
  size_t tmp ;
  register unsigned int __v ;
  register unsigned int __x ;
  struct hostent *he ;
  register unsigned int __v___0 ;
  register unsigned int __x___0 ;
  int *tmp___0 ;
  int tmp___1 ;
  register unsigned short __v___1 ;
  register unsigned short __x___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  char *tmp___4 ;
  pid_t child ;
  int val ;
  int *tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  char *tmp___8 ;
  int *tmp___9 ;
  char *tmp___10 ;
  int tmp___11 ;
  int *tmp___12 ;
  char *tmp___13 ;
  int tmp___14 ;
  int *tmp___15 ;
  char *tmp___16 ;
  int tmp___17 ;
  size_t i ;
  char *c ;
  char_array env ;
  char_array arg ;
  data_string *ds ;
  char *ge ;
  size_t tmp___18 ;
  size_t tmp___19 ;
  char *eq ;
  size_t tmp___20 ;
  void *tmp___21 ;
  char *tmp___22 ;
  data_string *ds___0 ;
  size_t tmp___23 ;
  size_t tmp___24 ;
  size_t tmp___25 ;
  size_t tmp___26 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___30 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___34 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___42 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___46 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___47 ;
  int tmp___48 ;
  size_t tmp___49 ;
  size_t tmp___50 ;
  int *tmp___51 ;
  char *tmp___52 ;
  int tmp___53 ;
  int *tmp___54 ;
  char *tmp___55 ;
  int *tmp___56 ;
  __pid_t tmp___57 ;
  int *tmp___58 ;
  char *tmp___59 ;
  union __anonunion_149 __constr_expr_0 ;
  union __anonunion_150 __constr_expr_1 ;
  union __anonunion_151 __constr_expr_2 ;
  union __anonunion_152 __constr_expr_3 ;
  union __anonunion_153 __constr_expr_4 ;
  int tmp___60 ;

  {
#line 768
  fprintf(_coverage_fout, "693\n");
#line 768
  fflush(_coverage_fout);
#line 774
  tv.tv_sec = 0L;
#line 774
  tv.tv_usec = 100000L;
#line 768
  fprintf(_coverage_fout, "694\n");
#line 768
  fflush(_coverage_fout);
#line 787
  if (p->conf.debug) {
    {
#line 788
    fprintf(_coverage_fout, "497\n");
#line 788
    fflush(_coverage_fout);
#line 788
    log_error_write(srv, "mod_fastcgi.c", 788U, "sdb", "new proc, socket:",
                    proc->port, proc->unixsocket);
    }
  }
  {
#line 792
  fprintf(_coverage_fout, "498\n");
#line 792
  fflush(_coverage_fout);
#line 792
  tmp___2 = buffer_is_empty(proc->unixsocket);
  }
#line 768
  fprintf(_coverage_fout, "695\n");
#line 768
  fflush(_coverage_fout);
#line 792
  if (tmp___2) {
    {
#line 817
    fprintf(_coverage_fout, "499\n");
#line 817
    fflush(_coverage_fout);
#line 817
    fcgi_addr_in.sin_family = (unsigned short)2;
#line 817
    fprintf(_coverage_fout, "500\n");
#line 817
    fflush(_coverage_fout);
#line 819
    tmp___1 = buffer_is_empty(host->host);
    }
#line 792
    fprintf(_coverage_fout, "527\n");
#line 792
    fflush(_coverage_fout);
#line 819
    if (tmp___1) {
#line 819
      fprintf(_coverage_fout, "501\n");
#line 819
      fflush(_coverage_fout);
#line 820
      __x = 0U;
#line 820
      __asm__  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
#line 820
      fcgi_addr_in.sin_addr.s_addr = __v;
    } else {
      {
#line 825
      fprintf(_coverage_fout, "502\n");
#line 825
      fflush(_coverage_fout);
#line 825
      __x___0 = 0U;
#line 825
      fprintf(_coverage_fout, "503\n");
#line 825
      fflush(_coverage_fout);
#line 825
      __asm__  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
#line 825
      fprintf(_coverage_fout, "504\n");
#line 825
      fflush(_coverage_fout);
#line 825
      fcgi_addr_in.sin_addr.s_addr = __v___0;
#line 825
      fprintf(_coverage_fout, "505\n");
#line 825
      fflush(_coverage_fout);
#line 828
      he = gethostbyname((char const   *)(host->host)->ptr);
      }
#line 819
      fprintf(_coverage_fout, "514\n");
#line 819
      fflush(_coverage_fout);
#line 828
      if ((unsigned int )((void *)0) == (unsigned int )he) {
        {
#line 829
        fprintf(_coverage_fout, "506\n");
#line 829
        fflush(_coverage_fout);
#line 829
        tmp___0 = __h_errno_location();
#line 829
        fprintf(_coverage_fout, "507\n");
#line 829
        fflush(_coverage_fout);
#line 829
        log_error_write(srv, "mod_fastcgi.c", 829U, "sdb",
                        "gethostbyname failed: ", *tmp___0, host->host);
        }
#line 828
        fprintf(_coverage_fout, "508\n");
#line 828
        fflush(_coverage_fout);
#line 832
        return (-1);
      }
#line 819
      fprintf(_coverage_fout, "515\n");
#line 819
      fflush(_coverage_fout);
#line 835
      if (he->h_addrtype != 2) {
        {
#line 836
        fprintf(_coverage_fout, "509\n");
#line 836
        fflush(_coverage_fout);
#line 836
        log_error_write(srv, "mod_fastcgi.c", 836U, "sd",
                        "addr-type != AF_INET: ", he->h_addrtype);
        }
#line 835
        fprintf(_coverage_fout, "510\n");
#line 835
        fflush(_coverage_fout);
#line 837
        return (-1);
      }
#line 819
      fprintf(_coverage_fout, "516\n");
#line 819
      fflush(_coverage_fout);
#line 840
      if ((unsigned int )he->h_length != sizeof(struct in_addr )) {
        {
#line 841
        fprintf(_coverage_fout, "511\n");
#line 841
        fflush(_coverage_fout);
#line 841
        log_error_write(srv, "mod_fastcgi.c", 841U, "sd",
                        "addr-length != sizeof(in_addr): ", he->h_length);
        }
#line 840
        fprintf(_coverage_fout, "512\n");
#line 840
        fflush(_coverage_fout);
#line 842
        return (-1);
      }
      {
#line 845
      fprintf(_coverage_fout, "513\n");
#line 845
      fflush(_coverage_fout);
#line 845
      memcpy((void */* __restrict  */)((void *)(& fcgi_addr_in.sin_addr.s_addr)),
             (void const   */* __restrict  */)((void const   *)*(he->h_addr_list + 0)),
             (unsigned int )he->h_length);
      }
    }
    {
#line 848
    fprintf(_coverage_fout, "517\n");
#line 848
    fflush(_coverage_fout);
#line 848
    __x___1 = (unsigned short )proc->port;
#line 848
    fprintf(_coverage_fout, "518\n");
#line 848
    fflush(_coverage_fout);
#line 848
    __asm__  ("rorw $8, %w0": "=r" (__v___1): "0" (__x___1): "cc");
#line 848
    fprintf(_coverage_fout, "519\n");
#line 848
    fflush(_coverage_fout);
#line 848
    fcgi_addr_in.sin_port = __v___1;
#line 848
    fprintf(_coverage_fout, "520\n");
#line 848
    fflush(_coverage_fout);
#line 849
    servlen = sizeof(fcgi_addr_in);
#line 848
    fprintf(_coverage_fout, "521\n");
#line 848
    fflush(_coverage_fout);
#line 851
    socket_type = 2;
#line 848
    fprintf(_coverage_fout, "522\n");
#line 848
    fflush(_coverage_fout);
#line 852
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_in);
#line 848
    fprintf(_coverage_fout, "523\n");
#line 848
    fflush(_coverage_fout);
#line 854
    buffer_copy_string(proc->connection_name, "tcp:");
#line 848
    fprintf(_coverage_fout, "524\n");
#line 848
    fflush(_coverage_fout);
#line 855
    buffer_append_string_buffer(proc->connection_name,
                                (buffer const   *)host->host);
#line 848
    fprintf(_coverage_fout, "525\n");
#line 848
    fflush(_coverage_fout);
#line 856
    buffer_append_string(proc->connection_name, ":");
#line 848
    fprintf(_coverage_fout, "526\n");
#line 848
    fflush(_coverage_fout);
#line 857
    buffer_append_long(proc->connection_name, (long )proc->port);
    }
  } else {
    {
#line 793
    fprintf(_coverage_fout, "528\n");
#line 793
    fflush(_coverage_fout);
#line 793
    memset((void *)(& fcgi_addr), 0, sizeof(fcgi_addr));
#line 793
    fprintf(_coverage_fout, "529\n");
#line 793
    fflush(_coverage_fout);
#line 796
    fcgi_addr_un.sun_family = (unsigned short)1;
#line 793
    fprintf(_coverage_fout, "530\n");
#line 793
    fflush(_coverage_fout);
#line 797
    strcpy((char */* __restrict  */)(fcgi_addr_un.sun_path),
           (char const   */* __restrict  */)((char const   *)(proc->unixsocket)->ptr));
#line 793
    fprintf(_coverage_fout, "531\n");
#line 793
    fflush(_coverage_fout);
#line 800
    tmp = strlen((char const   *)(fcgi_addr_un.sun_path));
#line 793
    fprintf(_coverage_fout, "532\n");
#line 793
    fflush(_coverage_fout);
#line 800
    servlen = (unsigned int )(((struct sockaddr_un *)0)->sun_path) + tmp;
#line 793
    fprintf(_coverage_fout, "533\n");
#line 793
    fflush(_coverage_fout);
#line 805
    socket_type = 1;
#line 793
    fprintf(_coverage_fout, "534\n");
#line 793
    fflush(_coverage_fout);
#line 806
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_un);
#line 793
    fprintf(_coverage_fout, "535\n");
#line 793
    fflush(_coverage_fout);
#line 808
    buffer_copy_string(proc->connection_name, "unix:");
#line 793
    fprintf(_coverage_fout, "536\n");
#line 793
    fflush(_coverage_fout);
#line 809
    buffer_append_string_buffer(proc->connection_name,
                                (buffer const   *)proc->unixsocket);
    }
  }
  {
#line 860
  fprintf(_coverage_fout, "537\n");
#line 860
  fflush(_coverage_fout);
#line 860
  fcgi_fd = socket(socket_type, 1, 0);
  }
#line 768
  fprintf(_coverage_fout, "696\n");
#line 768
  fflush(_coverage_fout);
#line 860
  if (-1 == fcgi_fd) {
    {
#line 861
    fprintf(_coverage_fout, "538\n");
#line 861
    fflush(_coverage_fout);
#line 861
    tmp___3 = __errno_location();
#line 861
    fprintf(_coverage_fout, "539\n");
#line 861
    fflush(_coverage_fout);
#line 861
    tmp___4 = strerror(*tmp___3);
#line 861
    fprintf(_coverage_fout, "540\n");
#line 861
    fflush(_coverage_fout);
#line 861
    log_error_write(srv, "mod_fastcgi.c", 861U, "ss", "failed:", tmp___4);
    }
#line 860
    fprintf(_coverage_fout, "541\n");
#line 860
    fflush(_coverage_fout);
#line 863
    return (-1);
  }
  {
#line 866
  fprintf(_coverage_fout, "542\n");
#line 866
  fflush(_coverage_fout);
#line 866
  tmp___60 = connect(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
  }
#line 768
  fprintf(_coverage_fout, "697\n");
#line 768
  fflush(_coverage_fout);
#line 866
  if (-1 == tmp___60) {
    {
#line 871
    fprintf(_coverage_fout, "543\n");
#line 871
    fflush(_coverage_fout);
#line 871
    tmp___5 = __errno_location();
    }
#line 866
    fprintf(_coverage_fout, "682\n");
#line 866
    fflush(_coverage_fout);
#line 871
    if (*tmp___5 != 2) {
      {
#line 871
      fprintf(_coverage_fout, "544\n");
#line 871
      fflush(_coverage_fout);
#line 871
      tmp___6 = buffer_is_empty(proc->unixsocket);
      }
#line 871
      fprintf(_coverage_fout, "546\n");
#line 871
      fflush(_coverage_fout);
#line 871
      if (! tmp___6) {
        {
#line 873
        fprintf(_coverage_fout, "545\n");
#line 873
        fflush(_coverage_fout);
#line 873
        unlink((char const   *)(proc->unixsocket)->ptr);
        }
      }
    }
    {
#line 876
    fprintf(_coverage_fout, "547\n");
#line 876
    fflush(_coverage_fout);
#line 876
    close(fcgi_fd);
#line 876
    fprintf(_coverage_fout, "548\n");
#line 876
    fflush(_coverage_fout);
#line 879
    fcgi_fd = socket(socket_type, 1, 0);
    }
#line 866
    fprintf(_coverage_fout, "683\n");
#line 866
    fflush(_coverage_fout);
#line 879
    if (-1 == fcgi_fd) {
      {
#line 880
      fprintf(_coverage_fout, "549\n");
#line 880
      fflush(_coverage_fout);
#line 880
      tmp___7 = __errno_location();
#line 880
      fprintf(_coverage_fout, "550\n");
#line 880
      fflush(_coverage_fout);
#line 880
      tmp___8 = strerror(*tmp___7);
#line 880
      fprintf(_coverage_fout, "551\n");
#line 880
      fflush(_coverage_fout);
#line 880
      log_error_write(srv, "mod_fastcgi.c", 880U, "ss", "socket failed:",
                      tmp___8);
      }
#line 879
      fprintf(_coverage_fout, "552\n");
#line 879
      fflush(_coverage_fout);
#line 882
      return (-1);
    }
    {
#line 885
    fprintf(_coverage_fout, "553\n");
#line 885
    fflush(_coverage_fout);
#line 885
    val = 1;
#line 885
    fprintf(_coverage_fout, "554\n");
#line 885
    fflush(_coverage_fout);
#line 886
    tmp___11 = setsockopt(fcgi_fd, 1, 2, (void const   *)(& val), sizeof(val));
    }
#line 866
    fprintf(_coverage_fout, "684\n");
#line 866
    fflush(_coverage_fout);
#line 886
    if (tmp___11 < 0) {
      {
#line 887
      fprintf(_coverage_fout, "555\n");
#line 887
      fflush(_coverage_fout);
#line 887
      tmp___9 = __errno_location();
#line 887
      fprintf(_coverage_fout, "556\n");
#line 887
      fflush(_coverage_fout);
#line 887
      tmp___10 = strerror(*tmp___9);
#line 887
      fprintf(_coverage_fout, "557\n");
#line 887
      fflush(_coverage_fout);
#line 887
      log_error_write(srv, "mod_fastcgi.c", 887U, "ss", "socketsockopt failed:",
                      tmp___10);
      }
#line 886
      fprintf(_coverage_fout, "558\n");
#line 886
      fflush(_coverage_fout);
#line 889
      return (-1);
    }
    {
#line 893
    fprintf(_coverage_fout, "559\n");
#line 893
    fflush(_coverage_fout);
#line 893
    tmp___14 = bind(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
    }
#line 866
    fprintf(_coverage_fout, "685\n");
#line 866
    fflush(_coverage_fout);
#line 893
    if (-1 == tmp___14) {
      {
#line 894
      fprintf(_coverage_fout, "560\n");
#line 894
      fflush(_coverage_fout);
#line 894
      tmp___12 = __errno_location();
#line 894
      fprintf(_coverage_fout, "561\n");
#line 894
      fflush(_coverage_fout);
#line 894
      tmp___13 = strerror(*tmp___12);
#line 894
      fprintf(_coverage_fout, "562\n");
#line 894
      fflush(_coverage_fout);
#line 894
      log_error_write(srv, "mod_fastcgi.c", 894U, "sbs", "bind failed for:",
                      proc->connection_name, tmp___13);
      }
#line 893
      fprintf(_coverage_fout, "563\n");
#line 893
      fflush(_coverage_fout);
#line 898
      return (-1);
    }
    {
#line 901
    fprintf(_coverage_fout, "564\n");
#line 901
    fflush(_coverage_fout);
#line 901
    tmp___17 = listen(fcgi_fd, 1024);
    }
#line 866
    fprintf(_coverage_fout, "686\n");
#line 866
    fflush(_coverage_fout);
#line 901
    if (-1 == tmp___17) {
      {
#line 902
      fprintf(_coverage_fout, "565\n");
#line 902
      fflush(_coverage_fout);
#line 902
      tmp___15 = __errno_location();
#line 902
      fprintf(_coverage_fout, "566\n");
#line 902
      fflush(_coverage_fout);
#line 902
      tmp___16 = strerror(*tmp___15);
#line 902
      fprintf(_coverage_fout, "567\n");
#line 902
      fflush(_coverage_fout);
#line 902
      log_error_write(srv, "mod_fastcgi.c", 902U, "ss", "listen failed:",
                      tmp___16);
      }
#line 901
      fprintf(_coverage_fout, "568\n");
#line 901
      fflush(_coverage_fout);
#line 904
      return (-1);
    }
    {
#line 908
    fprintf(_coverage_fout, "569\n");
#line 908
    fflush(_coverage_fout);
#line 908
    child = fork();
    }
#line 908
    switch (child) {
#line 908
    fprintf(_coverage_fout, "670\n");
#line 908
    fflush(_coverage_fout);
    case 0: 
#line 910
    i = 0U;
#line 916
    env.ptr = (char **)((void *)0);
#line 917
    env.size = 0U;
#line 918
    env.used = 0U;
#line 920
    arg.ptr = (char **)((void *)0);
#line 921
    arg.size = 0U;
#line 922
    arg.used = 0U;
#line 908
    fprintf(_coverage_fout, "671\n");
#line 908
    fflush(_coverage_fout);
#line 924
    if (fcgi_fd != 0) {
      {
#line 925
      fprintf(_coverage_fout, "570\n");
#line 925
      fflush(_coverage_fout);
#line 925
      close(0);
#line 925
      fprintf(_coverage_fout, "571\n");
#line 925
      fflush(_coverage_fout);
#line 926
      dup2(fcgi_fd, 0);
#line 925
      fprintf(_coverage_fout, "572\n");
#line 925
      fflush(_coverage_fout);
#line 927
      close(fcgi_fd);
      }
    }
#line 908
    fprintf(_coverage_fout, "672\n");
#line 908
    fflush(_coverage_fout);
#line 931
    i = 3U;
#line 908
    fprintf(_coverage_fout, "673\n");
#line 908
    fflush(_coverage_fout);
#line 931
    while (1) {
#line 931
      fprintf(_coverage_fout, "575\n");
#line 931
      fflush(_coverage_fout);
#line 931
      if (! (i < 256U)) {
#line 931
        break;
      }
      {
#line 932
      fprintf(_coverage_fout, "573\n");
#line 932
      fflush(_coverage_fout);
#line 932
      close((int )i);
#line 932
      fprintf(_coverage_fout, "574\n");
#line 932
      fflush(_coverage_fout);
#line 931
      i ++;
      }
    }
#line 908
    fprintf(_coverage_fout, "674\n");
#line 908
    fflush(_coverage_fout);
#line 936
    if ((host->bin_env_copy)->used) {
#line 936
      fprintf(_coverage_fout, "586\n");
#line 936
      fflush(_coverage_fout);
#line 937
      i = 0U;
#line 936
      fprintf(_coverage_fout, "587\n");
#line 936
      fflush(_coverage_fout);
#line 937
      while (1) {
#line 937
        fprintf(_coverage_fout, "583\n");
#line 937
        fflush(_coverage_fout);
#line 937
        if (! (i < (host->bin_env_copy)->used)) {
#line 937
          break;
        }
        {
#line 938
        fprintf(_coverage_fout, "576\n");
#line 938
        fflush(_coverage_fout);
#line 938
        ds = (data_string *)*((host->bin_env_copy)->data + i);
#line 938
        fprintf(_coverage_fout, "577\n");
#line 938
        fflush(_coverage_fout);
#line 941
        ge = getenv((char const   *)(ds->value)->ptr);
        }
#line 937
        fprintf(_coverage_fout, "584\n");
#line 937
        fflush(_coverage_fout);
#line 941
        if ((unsigned int )((void *)0) != (unsigned int )ge) {
          {
#line 942
          fprintf(_coverage_fout, "578\n");
#line 942
          fflush(_coverage_fout);
#line 942
          tmp___18 = strlen((char const   *)ge);
          }
#line 941
          fprintf(_coverage_fout, "582\n");
#line 941
          fflush(_coverage_fout);
#line 942
          if ((ds->value)->used) {
#line 942
            fprintf(_coverage_fout, "579\n");
#line 942
            fflush(_coverage_fout);
#line 942
            tmp___19 = (ds->value)->used - 1U;
          } else {
#line 942
            fprintf(_coverage_fout, "580\n");
#line 942
            fflush(_coverage_fout);
#line 942
            tmp___19 = 0U;
          }
          {
#line 942
          fprintf(_coverage_fout, "581\n");
#line 942
          fflush(_coverage_fout);
#line 942
          env_add(& env, (char const   *)(ds->value)->ptr, tmp___19,
                  (char const   *)ge, tmp___18);
          }
        }
#line 937
        fprintf(_coverage_fout, "585\n");
#line 937
        fflush(_coverage_fout);
#line 937
        i ++;
      }
    } else {
#line 936
      fprintf(_coverage_fout, "595\n");
#line 936
      fflush(_coverage_fout);
#line 946
      i = 0U;
#line 936
      fprintf(_coverage_fout, "596\n");
#line 936
      fflush(_coverage_fout);
#line 946
      while (1) {
#line 946
        fprintf(_coverage_fout, "592\n");
#line 946
        fflush(_coverage_fout);
#line 946
        if (! *(environ + i)) {
#line 946
          break;
        }
        {
#line 949
        fprintf(_coverage_fout, "588\n");
#line 949
        fflush(_coverage_fout);
#line 949
        tmp___22 = __builtin_strchr(*(environ + i), '=');
#line 949
        fprintf(_coverage_fout, "589\n");
#line 949
        fflush(_coverage_fout);
#line 949
        eq = tmp___22;
        }
#line 946
        fprintf(_coverage_fout, "593\n");
#line 946
        fflush(_coverage_fout);
#line 949
        if ((unsigned int )((void *)0) != (unsigned int )eq) {
          {
#line 950
          fprintf(_coverage_fout, "590\n");
#line 950
          fflush(_coverage_fout);
#line 950
          tmp___20 = strlen((char const   *)(eq + 1));
#line 950
          fprintf(_coverage_fout, "591\n");
#line 950
          fflush(_coverage_fout);
#line 950
          env_add(& env, (char const   *)*(environ + i),
                  (unsigned int )(eq - *(environ + i)),
                  (char const   *)(eq + 1), tmp___20);
          }
        }
#line 946
        fprintf(_coverage_fout, "594\n");
#line 946
        fflush(_coverage_fout);
#line 946
        i ++;
      }
    }
#line 908
    fprintf(_coverage_fout, "675\n");
#line 908
    fflush(_coverage_fout);
#line 956
    i = 0U;
#line 908
    fprintf(_coverage_fout, "676\n");
#line 908
    fflush(_coverage_fout);
#line 956
    while (1) {
#line 956
      fprintf(_coverage_fout, "603\n");
#line 956
      fflush(_coverage_fout);
#line 956
      if (! (i < (host->bin_env)->used)) {
#line 956
        break;
      }
#line 956
      fprintf(_coverage_fout, "604\n");
#line 956
      fflush(_coverage_fout);
#line 957
      ds___0 = (data_string *)*((host->bin_env)->data + i);
#line 956
      fprintf(_coverage_fout, "605\n");
#line 956
      fflush(_coverage_fout);
#line 959
      if ((ds___0->value)->used) {
#line 959
        fprintf(_coverage_fout, "597\n");
#line 959
        fflush(_coverage_fout);
#line 959
        tmp___23 = (ds___0->value)->used - 1U;
      } else {
#line 959
        fprintf(_coverage_fout, "598\n");
#line 959
        fflush(_coverage_fout);
#line 959
        tmp___23 = 0U;
      }
#line 956
      fprintf(_coverage_fout, "606\n");
#line 956
      fflush(_coverage_fout);
#line 959
      if ((ds___0->key)->used) {
#line 959
        fprintf(_coverage_fout, "599\n");
#line 959
        fflush(_coverage_fout);
#line 959
        tmp___24 = (ds___0->key)->used - 1U;
      } else {
#line 959
        fprintf(_coverage_fout, "600\n");
#line 959
        fflush(_coverage_fout);
#line 959
        tmp___24 = 0U;
      }
      {
#line 959
      fprintf(_coverage_fout, "601\n");
#line 959
      fflush(_coverage_fout);
#line 959
      env_add(& env, (char const   *)(ds___0->key)->ptr, tmp___24,
              (char const   *)(ds___0->value)->ptr, tmp___23);
#line 959
      fprintf(_coverage_fout, "602\n");
#line 959
      fflush(_coverage_fout);
#line 956
      i ++;
      }
    }
#line 908
    fprintf(_coverage_fout, "677\n");
#line 908
    fflush(_coverage_fout);
#line 962
    i = 0U;
#line 908
    fprintf(_coverage_fout, "678\n");
#line 908
    fflush(_coverage_fout);
#line 962
    while (1) {
#line 962
      fprintf(_coverage_fout, "626\n");
#line 962
      fflush(_coverage_fout);
#line 962
      if (! (i < env.used)) {
#line 962
        break;
      }
#line 962
      fprintf(_coverage_fout, "627\n");
#line 962
      fflush(_coverage_fout);
#line 964
      if (0) {
#line 964
        fprintf(_coverage_fout, "623\n");
#line 964
        fflush(_coverage_fout);
#line 964
        if (0) {
          {
#line 964
          fprintf(_coverage_fout, "607\n");
#line 964
          fflush(_coverage_fout);
#line 964
          __s1_len___0 = strlen((char const   *)*(env.ptr + i));
#line 964
          fprintf(_coverage_fout, "608\n");
#line 964
          fflush(_coverage_fout);
#line 964
          __s2_len___0 = strlen("PHP_FCGI_CHILDREN=");
          }
#line 964
          fprintf(_coverage_fout, "619\n");
#line 964
          fflush(_coverage_fout);
#line 964
          if (! ((unsigned int )((void const   *)(*(env.ptr + i) + 1)) - (unsigned int )((void const   *)*(env.ptr + i)) == 1U)) {
            goto _L___2;
          } else {
#line 964
            fprintf(_coverage_fout, "615\n");
#line 964
            fflush(_coverage_fout);
#line 964
            if (__s1_len___0 >= 4U) {
#line 964
              fprintf(_coverage_fout, "613\n");
#line 964
              fflush(_coverage_fout);
              _L___2: 
#line 964
              if (! ((unsigned int )((void const   *)("PHP_FCGI_CHILDREN=" + 1)) - (unsigned int )((void const   *)"PHP_FCGI_CHILDREN=") == 1U)) {
#line 964
                fprintf(_coverage_fout, "609\n");
#line 964
                fflush(_coverage_fout);
#line 964
                tmp___48 = 1;
              } else {
#line 964
                fprintf(_coverage_fout, "612\n");
#line 964
                fflush(_coverage_fout);
#line 964
                if (__s2_len___0 >= 4U) {
#line 964
                  fprintf(_coverage_fout, "610\n");
#line 964
                  fflush(_coverage_fout);
#line 964
                  tmp___48 = 1;
                } else {
#line 964
                  fprintf(_coverage_fout, "611\n");
#line 964
                  fflush(_coverage_fout);
#line 964
                  tmp___48 = 0;
                }
              }
            } else {
#line 964
              fprintf(_coverage_fout, "614\n");
#line 964
              fflush(_coverage_fout);
#line 964
              tmp___48 = 0;
            }
          }
#line 964
          fprintf(_coverage_fout, "620\n");
#line 964
          fflush(_coverage_fout);
#line 964
          if (tmp___48) {
            {
#line 964
            fprintf(_coverage_fout, "616\n");
#line 964
            fflush(_coverage_fout);
#line 964
            tmp___44 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                        "PHP_FCGI_CHILDREN=");
            }
          } else {
            {
#line 964
            fprintf(_coverage_fout, "617\n");
#line 964
            fflush(_coverage_fout);
#line 964
            tmp___47 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                        "PHP_FCGI_CHILDREN=");
#line 964
            fprintf(_coverage_fout, "618\n");
#line 964
            fflush(_coverage_fout);
#line 964
            tmp___44 = tmp___47;
            }
          }
        } else {
          {
#line 964
          fprintf(_coverage_fout, "621\n");
#line 964
          fflush(_coverage_fout);
#line 964
          tmp___47 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                      "PHP_FCGI_CHILDREN=");
#line 964
          fprintf(_coverage_fout, "622\n");
#line 964
          fflush(_coverage_fout);
#line 964
          tmp___44 = tmp___47;
          }
        }
#line 964
        fprintf(_coverage_fout, "624\n");
#line 964
        fflush(_coverage_fout);
#line 964
        tmp___38 = tmp___44;
      } else {
        {
#line 964
        fprintf(_coverage_fout, "625\n");
#line 964
        fflush(_coverage_fout);
#line 964
        tmp___38 = strncmp((char const   *)*(env.ptr + i), "PHP_FCGI_CHILDREN=",
                           sizeof("PHP_FCGI_CHILDREN=") - 1U);
        }
      }
#line 962
      fprintf(_coverage_fout, "628\n");
#line 962
      fflush(_coverage_fout);
#line 964
      if (0 == tmp___38) {
#line 964
        break;
      }
#line 962
      fprintf(_coverage_fout, "629\n");
#line 962
      fflush(_coverage_fout);
#line 962
      i ++;
    }
#line 908
    fprintf(_coverage_fout, "679\n");
#line 908
    fflush(_coverage_fout);
#line 968
    if (i == env.used) {
      {
#line 969
      fprintf(_coverage_fout, "630\n");
#line 969
      fflush(_coverage_fout);
#line 969
      env_add(& env, "PHP_FCGI_CHILDREN", sizeof("PHP_FCGI_CHILDREN") - 1U, "1",
              sizeof("1") - 1U);
      }
    }
    {
#line 972
    fprintf(_coverage_fout, "631\n");
#line 972
    fflush(_coverage_fout);
#line 972
    *(env.ptr + env.used) = (char *)((void *)0);
#line 972
    fprintf(_coverage_fout, "632\n");
#line 972
    fflush(_coverage_fout);
#line 974
    parse_binpath(& arg, host->bin_path);
#line 972
    fprintf(_coverage_fout, "633\n");
#line 972
    fflush(_coverage_fout);
#line 978
    c = strrchr((char const   *)*(arg.ptr + 0), '/');
    }
#line 908
    fprintf(_coverage_fout, "680\n");
#line 908
    fflush(_coverage_fout);
#line 978
    if ((unsigned int )((void *)0) != (unsigned int )c) {
      {
#line 979
      fprintf(_coverage_fout, "634\n");
#line 979
      fflush(_coverage_fout);
#line 979
      *c = (char )'\000';
#line 979
      fprintf(_coverage_fout, "635\n");
#line 979
      fflush(_coverage_fout);
#line 982
      tmp___53 = chdir((char const   *)*(arg.ptr + 0));
      }
#line 978
      fprintf(_coverage_fout, "640\n");
#line 978
      fflush(_coverage_fout);
#line 982
      if (-1 == tmp___53) {
        {
#line 983
        fprintf(_coverage_fout, "636\n");
#line 983
        fflush(_coverage_fout);
#line 983
        *c = (char )'/';
#line 983
        fprintf(_coverage_fout, "637\n");
#line 983
        fflush(_coverage_fout);
#line 984
        tmp___51 = __errno_location();
#line 983
        fprintf(_coverage_fout, "638\n");
#line 983
        fflush(_coverage_fout);
#line 984
        tmp___52 = strerror(*tmp___51);
#line 983
        fprintf(_coverage_fout, "639\n");
#line 983
        fflush(_coverage_fout);
#line 984
        log_error_write(srv, "mod_fastcgi.c", 984U, "sss", "chdir failed:",
                        tmp___52, *(arg.ptr + 0));
        }
      }
#line 978
      fprintf(_coverage_fout, "641\n");
#line 978
      fflush(_coverage_fout);
#line 986
      *c = (char )'/';
    }
    {
#line 991
    fprintf(_coverage_fout, "642\n");
#line 991
    fflush(_coverage_fout);
#line 991
    execve((char const   *)*(arg.ptr + 0), (char * const  *)arg.ptr,
           (char * const  *)env.ptr);
#line 991
    fprintf(_coverage_fout, "643\n");
#line 991
    fflush(_coverage_fout);
#line 993
    tmp___54 = __errno_location();
#line 991
    fprintf(_coverage_fout, "644\n");
#line 991
    fflush(_coverage_fout);
#line 993
    tmp___55 = strerror(*tmp___54);
#line 991
    fprintf(_coverage_fout, "645\n");
#line 991
    fflush(_coverage_fout);
#line 993
    log_error_write(srv, "mod_fastcgi.c", 993U, "sbs", "execve failed for:",
                    host->bin_path, tmp___55);
#line 991
    fprintf(_coverage_fout, "646\n");
#line 991
    fflush(_coverage_fout);
#line 996
    tmp___56 = __errno_location();
#line 991
    fprintf(_coverage_fout, "647\n");
#line 991
    fflush(_coverage_fout);
#line 996
    exit(*tmp___56);
    }
#line 998
    break;
    case -1: 
#line 1002
    break;
    default: 
    {
#line 1007
    fprintf(_coverage_fout, "648\n");
#line 1007
    fflush(_coverage_fout);
#line 1007
    select(0, (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (struct timeval */* __restrict  */)(& tv));
#line 1007
    fprintf(_coverage_fout, "649\n");
#line 1007
    fflush(_coverage_fout);
#line 1009
    tmp___57 = waitpid(child, & status, 1);
    }
#line 1009
    switch (tmp___57) {
    case 0: 
#line 1012
    break;
    case -1: 
    {
#line 1015
    fprintf(_coverage_fout, "650\n");
#line 1015
    fflush(_coverage_fout);
#line 1015
    tmp___58 = __errno_location();
#line 1015
    fprintf(_coverage_fout, "651\n");
#line 1015
    fflush(_coverage_fout);
#line 1015
    tmp___59 = strerror(*tmp___58);
#line 1015
    fprintf(_coverage_fout, "652\n");
#line 1015
    fflush(_coverage_fout);
#line 1015
    log_error_write(srv, "mod_fastcgi.c", 1015U, "ss", "pid not found:",
                    tmp___59);
    }
#line 1009
    fprintf(_coverage_fout, "667\n");
#line 1009
    fflush(_coverage_fout);
#line 1017
    return (-1);
    default: 
    {
#line 1019
    fprintf(_coverage_fout, "653\n");
#line 1019
    fflush(_coverage_fout);
#line 1019
    log_error_write(srv, "mod_fastcgi.c", 1019U, "sbs", "the fastcgi-backend",
                    host->bin_path, "failed to start:");
#line 1019
    fprintf(_coverage_fout, "654\n");
#line 1019
    fflush(_coverage_fout);
#line 1022
    __constr_expr_4.__in = status;
    }
#line 1009
    fprintf(_coverage_fout, "668\n");
#line 1009
    fflush(_coverage_fout);
#line 1022
    if ((__constr_expr_4.__i & 127) == 0) {
      {
#line 1023
      fprintf(_coverage_fout, "655\n");
#line 1023
      fflush(_coverage_fout);
#line 1023
      __constr_expr_0.__in = status;
#line 1023
      fprintf(_coverage_fout, "656\n");
#line 1023
      fflush(_coverage_fout);
#line 1023
      log_error_write(srv, "mod_fastcgi.c", 1023U, "sdb",
                      "child exited with status",
                      (__constr_expr_0.__i & 65280) >> 8, host->bin_path);
#line 1023
      fprintf(_coverage_fout, "657\n");
#line 1023
      fflush(_coverage_fout);
#line 1026
      log_error_write(srv, "mod_fastcgi.c", 1026U, "s",
                      "If you\'re trying to run PHP as a FastCGI backend, make sure you\'re using the FastCGI-enabled version.\nYou can find out if it is the right one by executing \'php -v\' and it should display \'(cgi-fcgi)\' in the output, NOT \'(cgi)\' NOR \'(cli)\'.\nFor more information, check http://trac.lighttpd.net/trac/wiki/Docs%3AModFastCGI#preparing-php-as-a-fastcgi-programIf this is PHP on Gentoo, add \'fastcgi\' to the USE flags.");
      }
    } else {
#line 1022
      fprintf(_coverage_fout, "665\n");
#line 1022
      fflush(_coverage_fout);
#line 1032
      __constr_expr_3.__in = status;
#line 1022
      fprintf(_coverage_fout, "666\n");
#line 1022
      fflush(_coverage_fout);
#line 1032
      if ((int )((signed char )((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
        {
#line 1033
        fprintf(_coverage_fout, "658\n");
#line 1033
        fflush(_coverage_fout);
#line 1033
        __constr_expr_1.__in = status;
#line 1033
        fprintf(_coverage_fout, "659\n");
#line 1033
        fflush(_coverage_fout);
#line 1033
        log_error_write(srv, "mod_fastcgi.c", 1033U, "sd",
                        "terminated by signal:", __constr_expr_1.__i & 127);
#line 1033
        fprintf(_coverage_fout, "660\n");
#line 1033
        fflush(_coverage_fout);
#line 1037
        __constr_expr_2.__in = status;
        }
#line 1032
        fprintf(_coverage_fout, "663\n");
#line 1032
        fflush(_coverage_fout);
#line 1037
        if ((__constr_expr_2.__i & 127) == 11) {
          {
#line 1038
          fprintf(_coverage_fout, "661\n");
#line 1038
          fflush(_coverage_fout);
#line 1038
          log_error_write(srv, "mod_fastcgi.c", 1038U, "s",
                          "to be exact: it segfaulted, crashed, died, ... you get the idea.");
#line 1038
          fprintf(_coverage_fout, "662\n");
#line 1038
          fflush(_coverage_fout);
#line 1040
          log_error_write(srv, "mod_fastcgi.c", 1040U, "s",
                          "If this is PHP, try removing the bytecode caches for now and try again.");
          }
        }
      } else {
        {
#line 1044
        fprintf(_coverage_fout, "664\n");
#line 1044
        fflush(_coverage_fout);
#line 1044
        log_error_write(srv, "mod_fastcgi.c", 1044U, "sd",
                        "child died somehow:", status);
        }
      }
    }
#line 1009
    fprintf(_coverage_fout, "669\n");
#line 1009
    fflush(_coverage_fout);
#line 1048
    return (-1);
    }
#line 908
    fprintf(_coverage_fout, "681\n");
#line 908
    fflush(_coverage_fout);
#line 1052
    proc->pid = child;
#line 1053
    proc->last_used = srv->cur_ts;
#line 1054
    proc->is_local = 1;
#line 1056
    break;
    }
  } else {
#line 866
    fprintf(_coverage_fout, "688\n");
#line 866
    fflush(_coverage_fout);
#line 1060
    proc->is_local = 0;
#line 1061
    proc->pid = 0;
#line 866
    fprintf(_coverage_fout, "689\n");
#line 866
    fflush(_coverage_fout);
#line 1063
    if (p->conf.debug) {
      {
#line 1064
      fprintf(_coverage_fout, "687\n");
#line 1064
      fflush(_coverage_fout);
#line 1064
      log_error_write(srv, "mod_fastcgi.c", 1064U, "sb",
                      "(debug) socket is already used; won\'t spawn:",
                      proc->connection_name);
      }
    }
  }
  {
#line 1070
  fprintf(_coverage_fout, "690\n");
#line 1070
  fflush(_coverage_fout);
#line 1070
  proc->state = (enum __anonenum_state_139 )1;
#line 1070
  fprintf(_coverage_fout, "691\n");
#line 1070
  fflush(_coverage_fout);
#line 1071
  (host->active_procs) ++;
#line 1070
  fprintf(_coverage_fout, "692\n");
#line 1070
  fflush(_coverage_fout);
#line 1073
  close(fcgi_fd);
  }
#line 768
  fprintf(_coverage_fout, "698\n");
#line 768
  fflush(_coverage_fout);
#line 1075
  return (0);
}
}
#line 1079 "mod_fastcgi.c"
static handler_t mod_fastcgi_set_defaults(server *srv , void *p_d ) 
{ plugin_data *p ;
  data_unset *du ;
  size_t i ;
  buffer *fcgi_mode ;
  buffer *tmp ;
  config_values_t cv[4] ;
  void *tmp___0 ;
  plugin_config *s ;
  array *ca ;
  void *tmp___1 ;
  int tmp___2 ;
  size_t j ;
  data_array *da ;
  size_t n ;
  data_array *da_ext ;
  data_array *da_host ;
  fcgi_extension_host *host ;
  config_values_t fcv[19] ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  struct sockaddr_un un ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  size_t pno ;
  fcgi_proc *proc ;
  size_t tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  fcgi_proc *proc___0 ;
  size_t tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___19 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___23 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___24 ;
  int tmp___25 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___29 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___33 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;

  {
  {
#line 1080
  fprintf(_coverage_fout, "699\n");
#line 1080
  fflush(_coverage_fout);
#line 1080
  p = (plugin_data *)p_d;
#line 1080
  fprintf(_coverage_fout, "700\n");
#line 1080
  fflush(_coverage_fout);
#line 1082
  i = 0U;
#line 1080
  fprintf(_coverage_fout, "701\n");
#line 1080
  fflush(_coverage_fout);
#line 1083
  tmp = buffer_init();
#line 1080
  fprintf(_coverage_fout, "702\n");
#line 1080
  fflush(_coverage_fout);
#line 1083
  fcgi_mode = tmp;
#line 1080
  fprintf(_coverage_fout, "703\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[0].key = "fastcgi.server";
#line 1080
  fprintf(_coverage_fout, "704\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[0].destination = (void *)0;
#line 1080
  fprintf(_coverage_fout, "705\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[0].type = (enum __anonenum_config_values_type_t_87 )5;
#line 1080
  fprintf(_coverage_fout, "706\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[0].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1080
  fprintf(_coverage_fout, "707\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[1].key = "fastcgi.debug";
#line 1080
  fprintf(_coverage_fout, "708\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[1].destination = (void *)0;
#line 1080
  fprintf(_coverage_fout, "709\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[1].type = (enum __anonenum_config_values_type_t_87 )2;
#line 1080
  fprintf(_coverage_fout, "710\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[1].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1080
  fprintf(_coverage_fout, "711\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[2].key = "fastcgi.map-extensions";
#line 1080
  fprintf(_coverage_fout, "712\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[2].destination = (void *)0;
#line 1080
  fprintf(_coverage_fout, "713\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[2].type = (enum __anonenum_config_values_type_t_87 )4;
#line 1080
  fprintf(_coverage_fout, "714\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[2].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1080
  fprintf(_coverage_fout, "715\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[3].key = (char const   *)((void *)0);
#line 1080
  fprintf(_coverage_fout, "716\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[3].destination = (void *)0;
#line 1080
  fprintf(_coverage_fout, "717\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[3].type = (enum __anonenum_config_values_type_t_87 )0;
#line 1080
  fprintf(_coverage_fout, "718\n");
#line 1080
  fflush(_coverage_fout);
#line 1085
  cv[3].scope = (enum __anonenum_config_scope_type_t_88 )0;
#line 1080
  fprintf(_coverage_fout, "719\n");
#line 1080
  fflush(_coverage_fout);
#line 1092
  tmp___0 = calloc(1U, (srv->config_context)->used * sizeof(specific_config *));
#line 1080
  fprintf(_coverage_fout, "720\n");
#line 1080
  fflush(_coverage_fout);
#line 1092
  p->config_storage = (plugin_config **)tmp___0;
#line 1080
  fprintf(_coverage_fout, "721\n");
#line 1080
  fflush(_coverage_fout);
#line 1094
  i = 0U;
  }
#line 1079
  fprintf(_coverage_fout, "909\n");
#line 1079
  fflush(_coverage_fout);
#line 1094
  while (1) {
#line 1094
    fprintf(_coverage_fout, "904\n");
#line 1094
    fflush(_coverage_fout);
#line 1094
    if (! (i < (srv->config_context)->used)) {
#line 1094
      break;
    }
    {
#line 1098
    fprintf(_coverage_fout, "722\n");
#line 1098
    fflush(_coverage_fout);
#line 1098
    tmp___1 = malloc(sizeof(plugin_config ));
#line 1098
    fprintf(_coverage_fout, "723\n");
#line 1098
    fflush(_coverage_fout);
#line 1098
    s = (plugin_config *)tmp___1;
#line 1098
    fprintf(_coverage_fout, "724\n");
#line 1098
    fflush(_coverage_fout);
#line 1099
    s->exts = fastcgi_extensions_init();
#line 1098
    fprintf(_coverage_fout, "725\n");
#line 1098
    fflush(_coverage_fout);
#line 1100
    s->debug = 0;
#line 1098
    fprintf(_coverage_fout, "726\n");
#line 1098
    fflush(_coverage_fout);
#line 1101
    s->ext_mapping = array_init();
#line 1098
    fprintf(_coverage_fout, "727\n");
#line 1098
    fflush(_coverage_fout);
#line 1103
    cv[0].destination = (void *)s->exts;
#line 1098
    fprintf(_coverage_fout, "728\n");
#line 1098
    fflush(_coverage_fout);
#line 1104
    cv[1].destination = (void *)(& s->debug);
#line 1098
    fprintf(_coverage_fout, "729\n");
#line 1098
    fflush(_coverage_fout);
#line 1105
    cv[2].destination = (void *)s->ext_mapping;
#line 1098
    fprintf(_coverage_fout, "730\n");
#line 1098
    fflush(_coverage_fout);
#line 1107
    *(p->config_storage + i) = s;
#line 1098
    fprintf(_coverage_fout, "731\n");
#line 1098
    fflush(_coverage_fout);
#line 1108
    ca = ((data_config *)*((srv->config_context)->data + i))->value;
#line 1098
    fprintf(_coverage_fout, "732\n");
#line 1098
    fflush(_coverage_fout);
#line 1110
    tmp___2 = config_insert_values_global(srv, ca,
                                          (config_values_t const   *)(cv));
    }
#line 1094
    fprintf(_coverage_fout, "905\n");
#line 1094
    fflush(_coverage_fout);
#line 1110
    if (0 != tmp___2) {
#line 1110
      fprintf(_coverage_fout, "733\n");
#line 1110
      fflush(_coverage_fout);
#line 1111
      return ((enum __anonenum_handler_t_43 )5);
    }
    {
#line 1118
    fprintf(_coverage_fout, "734\n");
#line 1118
    fflush(_coverage_fout);
#line 1118
    du = array_get_element(ca, "fastcgi.server");
    }
#line 1094
    fprintf(_coverage_fout, "906\n");
#line 1094
    fflush(_coverage_fout);
#line 1118
    if ((unsigned int )((void *)0) != (unsigned int )du) {
#line 1118
      fprintf(_coverage_fout, "900\n");
#line 1118
      fflush(_coverage_fout);
#line 1120
      da = (data_array *)du;
#line 1118
      fprintf(_coverage_fout, "901\n");
#line 1118
      fflush(_coverage_fout);
#line 1122
      if ((int )du->type != 3) {
        {
#line 1123
        fprintf(_coverage_fout, "735\n");
#line 1123
        fflush(_coverage_fout);
#line 1123
        log_error_write(srv, "mod_fastcgi.c", 1123U, "sss",
                        "unexpected type for key: ", "fastcgi.server",
                        "array of strings");
        }
#line 1122
        fprintf(_coverage_fout, "736\n");
#line 1122
        fflush(_coverage_fout);
#line 1126
        return ((enum __anonenum_handler_t_43 )5);
      }
#line 1118
      fprintf(_coverage_fout, "902\n");
#line 1118
      fflush(_coverage_fout);
#line 1135
      j = 0U;
#line 1118
      fprintf(_coverage_fout, "903\n");
#line 1118
      fflush(_coverage_fout);
#line 1135
      while (1) {
#line 1135
        fprintf(_coverage_fout, "894\n");
#line 1135
        fflush(_coverage_fout);
#line 1135
        if (! (j < (da->value)->used)) {
#line 1135
          break;
        }
#line 1135
        fprintf(_coverage_fout, "895\n");
#line 1135
        fflush(_coverage_fout);
#line 1137
        da_ext = (data_array *)*((da->value)->data + j);
#line 1135
        fprintf(_coverage_fout, "896\n");
#line 1135
        fflush(_coverage_fout);
#line 1139
        if ((int )(*((da->value)->data + j))->type != 3) {
          {
#line 1140
          fprintf(_coverage_fout, "737\n");
#line 1140
          fflush(_coverage_fout);
#line 1140
          log_error_write(srv, "mod_fastcgi.c", 1140U, "sssbs",
                          "unexpected type for key: ", "fastcgi.server", "[",
                          (*((da->value)->data + j))->key, "](string)");
          }
#line 1139
          fprintf(_coverage_fout, "738\n");
#line 1139
          fflush(_coverage_fout);
#line 1144
          return ((enum __anonenum_handler_t_43 )5);
        }
#line 1135
        fprintf(_coverage_fout, "897\n");
#line 1135
        fflush(_coverage_fout);
#line 1159
        n = 0U;
#line 1135
        fprintf(_coverage_fout, "898\n");
#line 1135
        fflush(_coverage_fout);
#line 1159
        while (1) {
#line 1159
          fprintf(_coverage_fout, "886\n");
#line 1159
          fflush(_coverage_fout);
#line 1159
          if (! (n < (da_ext->value)->used)) {
#line 1159
            break;
          }
#line 1159
          fprintf(_coverage_fout, "887\n");
#line 1159
          fflush(_coverage_fout);
#line 1160
          da_host = (data_array *)*((da_ext->value)->data + n);
#line 1164
          fcv[0].key = "host";
#line 1164
          fcv[0].destination = (void *)0;
#line 1164
          fcv[0].type = (enum __anonenum_config_values_type_t_87 )1;
#line 1164
          fcv[0].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[1].key = "docroot";
#line 1164
          fcv[1].destination = (void *)0;
#line 1164
          fcv[1].type = (enum __anonenum_config_values_type_t_87 )1;
#line 1164
          fcv[1].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[2].key = "mode";
#line 1164
          fcv[2].destination = (void *)0;
#line 1164
          fcv[2].type = (enum __anonenum_config_values_type_t_87 )1;
#line 1164
          fcv[2].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[3].key = "socket";
#line 1164
          fcv[3].destination = (void *)0;
#line 1164
          fcv[3].type = (enum __anonenum_config_values_type_t_87 )1;
#line 1164
          fcv[3].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[4].key = "bin-path";
#line 1164
          fcv[4].destination = (void *)0;
#line 1164
          fcv[4].type = (enum __anonenum_config_values_type_t_87 )1;
#line 1164
          fcv[4].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[5].key = "check-local";
#line 1164
          fcv[5].destination = (void *)0;
#line 1164
          fcv[5].type = (enum __anonenum_config_values_type_t_87 )3;
#line 1164
          fcv[5].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[6].key = "port";
#line 1164
          fcv[6].destination = (void *)0;
#line 1164
          fcv[6].type = (enum __anonenum_config_values_type_t_87 )2;
#line 1164
          fcv[6].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[7].key = "min-procs-not-working";
#line 1164
          fcv[7].destination = (void *)0;
#line 1164
          fcv[7].type = (enum __anonenum_config_values_type_t_87 )2;
#line 1164
          fcv[7].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[8].key = "max-procs";
#line 1164
          fcv[8].destination = (void *)0;
#line 1164
          fcv[8].type = (enum __anonenum_config_values_type_t_87 )2;
#line 1164
          fcv[8].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[9].key = "max-load-per-proc";
#line 1164
          fcv[9].destination = (void *)0;
#line 1164
          fcv[9].type = (enum __anonenum_config_values_type_t_87 )2;
#line 1164
          fcv[9].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[10].key = "idle-timeout";
#line 1164
          fcv[10].destination = (void *)0;
#line 1164
          fcv[10].type = (enum __anonenum_config_values_type_t_87 )2;
#line 1164
          fcv[10].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[11].key = "disable-time";
#line 1164
          fcv[11].destination = (void *)0;
#line 1164
          fcv[11].type = (enum __anonenum_config_values_type_t_87 )2;
#line 1164
          fcv[11].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[12].key = "bin-environment";
#line 1164
          fcv[12].destination = (void *)0;
#line 1164
          fcv[12].type = (enum __anonenum_config_values_type_t_87 )4;
#line 1164
          fcv[12].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[13].key = "bin-copy-environment";
#line 1164
          fcv[13].destination = (void *)0;
#line 1164
          fcv[13].type = (enum __anonenum_config_values_type_t_87 )4;
#line 1164
          fcv[13].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[14].key = "broken-scriptfilename";
#line 1164
          fcv[14].destination = (void *)0;
#line 1164
          fcv[14].type = (enum __anonenum_config_values_type_t_87 )3;
#line 1164
          fcv[14].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[15].key = "allow-x-send-file";
#line 1164
          fcv[15].destination = (void *)0;
#line 1164
          fcv[15].type = (enum __anonenum_config_values_type_t_87 )3;
#line 1164
          fcv[15].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[16].key = "strip-request-uri";
#line 1164
          fcv[16].destination = (void *)0;
#line 1164
          fcv[16].type = (enum __anonenum_config_values_type_t_87 )1;
#line 1164
          fcv[16].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[17].key = "kill-signal";
#line 1164
          fcv[17].destination = (void *)0;
#line 1164
          fcv[17].type = (enum __anonenum_config_values_type_t_87 )2;
#line 1164
          fcv[17].scope = (enum __anonenum_config_scope_type_t_88 )2;
#line 1164
          fcv[18].key = (char const   *)((void *)0);
#line 1164
          fcv[18].destination = (void *)0;
#line 1164
          fcv[18].type = (enum __anonenum_config_values_type_t_87 )0;
#line 1164
          fcv[18].scope = (enum __anonenum_config_scope_type_t_88 )0;
#line 1159
          fprintf(_coverage_fout, "888\n");
#line 1159
          fflush(_coverage_fout);
#line 1190
          if ((int )da_host->type != 3) {
            {
#line 1191
            fprintf(_coverage_fout, "739\n");
#line 1191
            fflush(_coverage_fout);
#line 1191
            log_error_write(srv, "mod_fastcgi.c", 1191U, "ssSBS",
                            "unexpected type for key:", "fastcgi.server", "[",
                            da_host->key, "](string)");
            }
#line 1190
            fprintf(_coverage_fout, "740\n");
#line 1190
            fflush(_coverage_fout);
#line 1196
            return ((enum __anonenum_handler_t_43 )5);
          }
          {
#line 1199
          fprintf(_coverage_fout, "741\n");
#line 1199
          fflush(_coverage_fout);
#line 1199
          host = fastcgi_host_init();
#line 1199
          fprintf(_coverage_fout, "742\n");
#line 1199
          fflush(_coverage_fout);
#line 1201
          buffer_copy_string_buffer(host->id, (buffer const   *)da_host->key);
#line 1199
          fprintf(_coverage_fout, "743\n");
#line 1199
          fflush(_coverage_fout);
#line 1203
          host->check_local = (unsigned short)1;
#line 1199
          fprintf(_coverage_fout, "744\n");
#line 1199
          fflush(_coverage_fout);
#line 1204
          host->min_procs = (unsigned short)4;
#line 1199
          fprintf(_coverage_fout, "745\n");
#line 1199
          fflush(_coverage_fout);
#line 1205
          host->max_procs = (unsigned short)4;
#line 1199
          fprintf(_coverage_fout, "746\n");
#line 1199
          fflush(_coverage_fout);
#line 1206
          host->max_load_per_proc = (unsigned short)1;
#line 1199
          fprintf(_coverage_fout, "747\n");
#line 1199
          fflush(_coverage_fout);
#line 1207
          host->idle_timeout = (unsigned short)60;
#line 1199
          fprintf(_coverage_fout, "748\n");
#line 1199
          fflush(_coverage_fout);
#line 1208
          host->mode = (unsigned short)1;
#line 1199
          fprintf(_coverage_fout, "749\n");
#line 1199
          fflush(_coverage_fout);
#line 1209
          host->disable_time = (unsigned short)60;
#line 1199
          fprintf(_coverage_fout, "750\n");
#line 1199
          fflush(_coverage_fout);
#line 1210
          host->break_scriptfilename_for_php = (unsigned short)0;
#line 1199
          fprintf(_coverage_fout, "751\n");
#line 1199
          fflush(_coverage_fout);
#line 1211
          host->allow_xsendfile = (unsigned short)0;
#line 1199
          fprintf(_coverage_fout, "752\n");
#line 1199
          fflush(_coverage_fout);
#line 1212
          host->kill_signal = (unsigned short)15;
#line 1199
          fprintf(_coverage_fout, "753\n");
#line 1199
          fflush(_coverage_fout);
#line 1214
          fcv[0].destination = (void *)host->host;
#line 1199
          fprintf(_coverage_fout, "754\n");
#line 1199
          fflush(_coverage_fout);
#line 1215
          fcv[1].destination = (void *)host->docroot;
#line 1199
          fprintf(_coverage_fout, "755\n");
#line 1199
          fflush(_coverage_fout);
#line 1216
          fcv[2].destination = (void *)fcgi_mode;
#line 1199
          fprintf(_coverage_fout, "756\n");
#line 1199
          fflush(_coverage_fout);
#line 1217
          fcv[3].destination = (void *)host->unixsocket;
#line 1199
          fprintf(_coverage_fout, "757\n");
#line 1199
          fflush(_coverage_fout);
#line 1218
          fcv[4].destination = (void *)host->bin_path;
#line 1199
          fprintf(_coverage_fout, "758\n");
#line 1199
          fflush(_coverage_fout);
#line 1220
          fcv[5].destination = (void *)(& host->check_local);
#line 1199
          fprintf(_coverage_fout, "759\n");
#line 1199
          fflush(_coverage_fout);
#line 1221
          fcv[6].destination = (void *)(& host->port);
#line 1199
          fprintf(_coverage_fout, "760\n");
#line 1199
          fflush(_coverage_fout);
#line 1222
          fcv[7].destination = (void *)(& host->min_procs);
#line 1199
          fprintf(_coverage_fout, "761\n");
#line 1199
          fflush(_coverage_fout);
#line 1223
          fcv[8].destination = (void *)(& host->max_procs);
#line 1199
          fprintf(_coverage_fout, "762\n");
#line 1199
          fflush(_coverage_fout);
#line 1224
          fcv[9].destination = (void *)(& host->max_load_per_proc);
#line 1199
          fprintf(_coverage_fout, "763\n");
#line 1199
          fflush(_coverage_fout);
#line 1225
          fcv[10].destination = (void *)(& host->idle_timeout);
#line 1199
          fprintf(_coverage_fout, "764\n");
#line 1199
          fflush(_coverage_fout);
#line 1226
          fcv[11].destination = (void *)(& host->disable_time);
#line 1199
          fprintf(_coverage_fout, "765\n");
#line 1199
          fflush(_coverage_fout);
#line 1228
          fcv[12].destination = (void *)host->bin_env;
#line 1199
          fprintf(_coverage_fout, "766\n");
#line 1199
          fflush(_coverage_fout);
#line 1229
          fcv[13].destination = (void *)host->bin_env_copy;
#line 1199
          fprintf(_coverage_fout, "767\n");
#line 1199
          fflush(_coverage_fout);
#line 1230
          fcv[14].destination = (void *)(& host->break_scriptfilename_for_php);
#line 1199
          fprintf(_coverage_fout, "768\n");
#line 1199
          fflush(_coverage_fout);
#line 1231
          fcv[15].destination = (void *)(& host->allow_xsendfile);
#line 1199
          fprintf(_coverage_fout, "769\n");
#line 1199
          fflush(_coverage_fout);
#line 1232
          fcv[16].destination = (void *)host->strip_request_uri;
#line 1199
          fprintf(_coverage_fout, "770\n");
#line 1199
          fflush(_coverage_fout);
#line 1233
          fcv[17].destination = (void *)(& host->kill_signal);
#line 1199
          fprintf(_coverage_fout, "771\n");
#line 1199
          fflush(_coverage_fout);
#line 1235
          tmp___3 = config_insert_values_internal(srv, da_host->value,
                                                  (config_values_t const   *)(fcv));
          }
#line 1159
          fprintf(_coverage_fout, "889\n");
#line 1159
          fflush(_coverage_fout);
#line 1235
          if (0 != tmp___3) {
#line 1235
            fprintf(_coverage_fout, "772\n");
#line 1235
            fflush(_coverage_fout);
#line 1236
            return ((enum __anonenum_handler_t_43 )5);
          }
          {
#line 1239
          fprintf(_coverage_fout, "773\n");
#line 1239
          fflush(_coverage_fout);
#line 1239
          tmp___4 = buffer_is_empty(host->host);
          }
#line 1159
          fprintf(_coverage_fout, "890\n");
#line 1159
          fflush(_coverage_fout);
#line 1239
          if (tmp___4) {
#line 1239
            fprintf(_coverage_fout, "778\n");
#line 1239
            fflush(_coverage_fout);
#line 1239
            if (host->port) {
              _L: 
              {
#line 1239
              fprintf(_coverage_fout, "774\n");
#line 1239
              fflush(_coverage_fout);
#line 1239
              tmp___5 = buffer_is_empty(host->unixsocket);
              }
#line 1239
              fprintf(_coverage_fout, "777\n");
#line 1239
              fflush(_coverage_fout);
#line 1239
              if (! tmp___5) {
                {
#line 1241
                fprintf(_coverage_fout, "775\n");
#line 1241
                fflush(_coverage_fout);
#line 1241
                log_error_write(srv, "mod_fastcgi.c", 1241U, "sbsbsbs",
                                "either host/port or socket have to be set in:",
                                da->key, "= (", da_ext->key, " => (",
                                da_host->key, " ( ...");
                }
#line 1239
                fprintf(_coverage_fout, "776\n");
#line 1239
                fflush(_coverage_fout);
#line 1247
                return ((enum __anonenum_handler_t_43 )5);
              }
            }
          } else {
            goto _L;
          }
          {
#line 1250
          fprintf(_coverage_fout, "779\n");
#line 1250
          fflush(_coverage_fout);
#line 1250
          tmp___8 = buffer_is_empty(host->unixsocket);
          }
#line 1159
          fprintf(_coverage_fout, "891\n");
#line 1159
          fflush(_coverage_fout);
#line 1250
          if (tmp___8) {
            {
#line 1266
            fprintf(_coverage_fout, "780\n");
#line 1266
            fflush(_coverage_fout);
#line 1266
            tmp___6 = buffer_is_empty(host->host);
            }
#line 1250
            fprintf(_coverage_fout, "788\n");
#line 1250
            fflush(_coverage_fout);
#line 1266
            if (tmp___6) {
              {
#line 1266
              fprintf(_coverage_fout, "781\n");
#line 1266
              fflush(_coverage_fout);
#line 1266
              tmp___7 = buffer_is_empty(host->bin_path);
              }
#line 1266
              fprintf(_coverage_fout, "784\n");
#line 1266
              fflush(_coverage_fout);
#line 1266
              if (tmp___7) {
                {
#line 1268
                fprintf(_coverage_fout, "782\n");
#line 1268
                fflush(_coverage_fout);
#line 1268
                log_error_write(srv, "mod_fastcgi.c", 1268U, "sbsbsbs",
                                "host or binpath have to be set in:", da->key,
                                "= (", da_ext->key, " => (", da_host->key,
                                " ( ...");
                }
#line 1266
                fprintf(_coverage_fout, "783\n");
#line 1266
                fflush(_coverage_fout);
#line 1274
                return ((enum __anonenum_handler_t_43 )5);
              } else {
                goto _L___0;
              }
            } else {
#line 1266
              fprintf(_coverage_fout, "787\n");
#line 1266
              fflush(_coverage_fout);
              _L___0: 
#line 1275
              if ((int )host->port == 0) {
                {
#line 1276
                fprintf(_coverage_fout, "785\n");
#line 1276
                fflush(_coverage_fout);
#line 1276
                log_error_write(srv, "mod_fastcgi.c", 1276U, "sbsbsbs",
                                "port has to be set in:", da->key, "= (",
                                da_ext->key, " => (", da_host->key, " ( ...");
                }
#line 1275
                fprintf(_coverage_fout, "786\n");
#line 1275
                fflush(_coverage_fout);
#line 1282
                return ((enum __anonenum_handler_t_43 )5);
              }
            }
          } else {
#line 1250
            fprintf(_coverage_fout, "791\n");
#line 1250
            fflush(_coverage_fout);
#line 1254
            if ((host->unixsocket)->used > sizeof(un.sun_path) - 2U) {
              {
#line 1255
              fprintf(_coverage_fout, "789\n");
#line 1255
              fflush(_coverage_fout);
#line 1255
              log_error_write(srv, "mod_fastcgi.c", 1255U, "sbsbsbs",
                              "unixsocket is too long in:", da->key, "= (",
                              da_ext->key, " => (", da_host->key, " ( ...");
              }
#line 1254
              fprintf(_coverage_fout, "790\n");
#line 1254
              fflush(_coverage_fout);
#line 1261
              return ((enum __anonenum_handler_t_43 )5);
            }
          }
          {
#line 1286
          fprintf(_coverage_fout, "792\n");
#line 1286
          fflush(_coverage_fout);
#line 1286
          tmp___14 = buffer_is_empty(host->bin_path);
          }
#line 1159
          fprintf(_coverage_fout, "892\n");
#line 1159
          fflush(_coverage_fout);
#line 1286
          if (tmp___14) {
            {
#line 1345
            fprintf(_coverage_fout, "793\n");
#line 1345
            fflush(_coverage_fout);
#line 1345
            proc___0 = fastcgi_process_init();
#line 1345
            fprintf(_coverage_fout, "794\n");
#line 1345
            fflush(_coverage_fout);
#line 1346
            tmp___12 = host->num_procs;
#line 1345
            fprintf(_coverage_fout, "795\n");
#line 1345
            fflush(_coverage_fout);
#line 1346
            (host->num_procs) ++;
#line 1345
            fprintf(_coverage_fout, "796\n");
#line 1345
            fflush(_coverage_fout);
#line 1346
            proc___0->id = tmp___12;
#line 1345
            fprintf(_coverage_fout, "797\n");
#line 1345
            fflush(_coverage_fout);
#line 1347
            (host->max_id) ++;
#line 1345
            fprintf(_coverage_fout, "798\n");
#line 1345
            fflush(_coverage_fout);
#line 1348
            (host->active_procs) ++;
#line 1345
            fprintf(_coverage_fout, "799\n");
#line 1345
            fflush(_coverage_fout);
#line 1349
            proc___0->state = (enum __anonenum_state_139 )1;
#line 1345
            fprintf(_coverage_fout, "800\n");
#line 1345
            fflush(_coverage_fout);
#line 1351
            tmp___13 = buffer_is_empty(host->unixsocket);
            }
#line 1286
            fprintf(_coverage_fout, "807\n");
#line 1286
            fflush(_coverage_fout);
#line 1351
            if (tmp___13) {
#line 1351
              fprintf(_coverage_fout, "801\n");
#line 1351
              fflush(_coverage_fout);
#line 1352
              proc___0->port = (unsigned int )host->port;
            } else {
              {
#line 1354
              fprintf(_coverage_fout, "802\n");
#line 1354
              fflush(_coverage_fout);
#line 1354
              buffer_copy_string_buffer(proc___0->unixsocket,
                                        (buffer const   *)host->unixsocket);
              }
            }
            {
#line 1357
            fprintf(_coverage_fout, "803\n");
#line 1357
            fflush(_coverage_fout);
#line 1357
            fastcgi_status_init(srv, p->statuskey, host, proc___0);
#line 1357
            fprintf(_coverage_fout, "804\n");
#line 1357
            fflush(_coverage_fout);
#line 1359
            host->first = proc___0;
#line 1357
            fprintf(_coverage_fout, "805\n");
#line 1357
            fflush(_coverage_fout);
#line 1361
            host->min_procs = (unsigned short)1;
#line 1357
            fprintf(_coverage_fout, "806\n");
#line 1357
            fflush(_coverage_fout);
#line 1362
            host->max_procs = (unsigned short)1;
            }
          } else {
#line 1286
            fprintf(_coverage_fout, "834\n");
#line 1286
            fflush(_coverage_fout);
#line 1291
            host->min_procs = host->max_procs;
#line 1286
            fprintf(_coverage_fout, "835\n");
#line 1286
            fflush(_coverage_fout);
#line 1293
            if ((int )host->min_procs > (int )host->max_procs) {
#line 1293
              fprintf(_coverage_fout, "808\n");
#line 1293
              fflush(_coverage_fout);
#line 1293
              host->max_procs = host->min_procs;
            }
#line 1286
            fprintf(_coverage_fout, "836\n");
#line 1286
            fflush(_coverage_fout);
#line 1294
            if ((int )host->max_load_per_proc < 1) {
#line 1294
              fprintf(_coverage_fout, "809\n");
#line 1294
              fflush(_coverage_fout);
#line 1294
              host->max_load_per_proc = (unsigned short)0;
            }
#line 1286
            fprintf(_coverage_fout, "837\n");
#line 1286
            fflush(_coverage_fout);
#line 1296
            if (s->debug) {
              {
#line 1297
              fprintf(_coverage_fout, "810\n");
#line 1297
              fflush(_coverage_fout);
#line 1297
              log_error_write(srv, "mod_fastcgi.c", 1297U, "ssbsdsbsdsd",
                              "--- fastcgi spawning local", "\n\tproc:",
                              host->bin_path, "\n\tport:", host->port,
                              "\n\tsocket", host->unixsocket, "\n\tmin-procs:",
                              host->min_procs, "\n\tmax-procs:", host->max_procs);
              }
            }
#line 1286
            fprintf(_coverage_fout, "838\n");
#line 1286
            fflush(_coverage_fout);
#line 1306
            pno = 0U;
#line 1286
            fprintf(_coverage_fout, "839\n");
#line 1286
            fflush(_coverage_fout);
#line 1306
            while (1) {
#line 1306
              fprintf(_coverage_fout, "828\n");
#line 1306
              fflush(_coverage_fout);
#line 1306
              if (! (pno < (unsigned int )host->min_procs)) {
#line 1306
                break;
              }
              {
#line 1309
              fprintf(_coverage_fout, "811\n");
#line 1309
              fflush(_coverage_fout);
#line 1309
              proc = fastcgi_process_init();
#line 1309
              fprintf(_coverage_fout, "812\n");
#line 1309
              fflush(_coverage_fout);
#line 1310
              tmp___9 = host->num_procs;
#line 1309
              fprintf(_coverage_fout, "813\n");
#line 1309
              fflush(_coverage_fout);
#line 1310
              (host->num_procs) ++;
#line 1309
              fprintf(_coverage_fout, "814\n");
#line 1309
              fflush(_coverage_fout);
#line 1310
              proc->id = tmp___9;
#line 1309
              fprintf(_coverage_fout, "815\n");
#line 1309
              fflush(_coverage_fout);
#line 1311
              (host->max_id) ++;
#line 1309
              fprintf(_coverage_fout, "816\n");
#line 1309
              fflush(_coverage_fout);
#line 1313
              tmp___10 = buffer_is_empty(host->unixsocket);
              }
#line 1306
              fprintf(_coverage_fout, "829\n");
#line 1306
              fflush(_coverage_fout);
#line 1313
              if (tmp___10) {
#line 1313
                fprintf(_coverage_fout, "817\n");
#line 1313
                fflush(_coverage_fout);
#line 1314
                proc->port = (unsigned int )host->port + pno;
              } else {
                {
#line 1316
                fprintf(_coverage_fout, "818\n");
#line 1316
                fflush(_coverage_fout);
#line 1316
                buffer_copy_string_buffer(proc->unixsocket,
                                          (buffer const   *)host->unixsocket);
#line 1316
                fprintf(_coverage_fout, "819\n");
#line 1316
                fflush(_coverage_fout);
#line 1317
                buffer_append_string(proc->unixsocket, "-");
#line 1316
                fprintf(_coverage_fout, "820\n");
#line 1316
                fflush(_coverage_fout);
#line 1318
                buffer_append_long(proc->unixsocket, (long )pno);
                }
              }
#line 1306
              fprintf(_coverage_fout, "830\n");
#line 1306
              fflush(_coverage_fout);
#line 1321
              if (s->debug) {
                {
#line 1322
                fprintf(_coverage_fout, "821\n");
#line 1322
                fflush(_coverage_fout);
#line 1322
                log_error_write(srv, "mod_fastcgi.c", 1322U, "ssdsbsdsd",
                                "--- fastcgi spawning", "\n\tport:", host->port,
                                "\n\tsocket", host->unixsocket, "\n\tcurrent:",
                                pno, "/", host->min_procs);
                }
              }
              {
#line 1329
              fprintf(_coverage_fout, "822\n");
#line 1329
              fflush(_coverage_fout);
#line 1329
              tmp___11 = fcgi_spawn_connection(srv, p, host, proc);
              }
#line 1306
              fprintf(_coverage_fout, "831\n");
#line 1306
              fflush(_coverage_fout);
#line 1329
              if (tmp___11) {
                {
#line 1330
                fprintf(_coverage_fout, "823\n");
#line 1330
                fflush(_coverage_fout);
#line 1330
                log_error_write(srv, "mod_fastcgi.c", 1330U, "s",
                                "[ERROR]: spawning fcgi failed.");
                }
#line 1329
                fprintf(_coverage_fout, "824\n");
#line 1329
                fflush(_coverage_fout);
#line 1332
                return ((enum __anonenum_handler_t_43 )5);
              }
              {
#line 1335
              fprintf(_coverage_fout, "825\n");
#line 1335
              fflush(_coverage_fout);
#line 1335
              fastcgi_status_init(srv, p->statuskey, host, proc);
#line 1335
              fprintf(_coverage_fout, "826\n");
#line 1335
              fflush(_coverage_fout);
#line 1337
              proc->next = host->first;
              }
#line 1306
              fprintf(_coverage_fout, "832\n");
#line 1306
              fflush(_coverage_fout);
#line 1338
              if (host->first) {
#line 1338
                fprintf(_coverage_fout, "827\n");
#line 1338
                fflush(_coverage_fout);
#line 1338
                (host->first)->prev = proc;
              }
#line 1306
              fprintf(_coverage_fout, "833\n");
#line 1306
              fflush(_coverage_fout);
#line 1340
              host->first = proc;
#line 1306
              pno ++;
            }
          }
          {
#line 1365
          fprintf(_coverage_fout, "840\n");
#line 1365
          fflush(_coverage_fout);
#line 1365
          tmp___36 = buffer_is_empty(fcgi_mode);
          }
#line 1159
          fprintf(_coverage_fout, "893\n");
#line 1159
          fflush(_coverage_fout);
#line 1365
          if (! tmp___36) {
#line 1365
            fprintf(_coverage_fout, "882\n");
#line 1365
            fflush(_coverage_fout);
#line 1366
            if (0) {
              {
#line 1366
              fprintf(_coverage_fout, "841\n");
#line 1366
              fflush(_coverage_fout);
#line 1366
              __s1_len___0 = strlen((char const   *)fcgi_mode->ptr);
#line 1366
              fprintf(_coverage_fout, "842\n");
#line 1366
              fflush(_coverage_fout);
#line 1366
              __s2_len___0 = strlen("responder");
              }
#line 1366
              fprintf(_coverage_fout, "853\n");
#line 1366
              fflush(_coverage_fout);
#line 1366
              if (! ((unsigned int )((void const   *)(fcgi_mode->ptr + 1)) - (unsigned int )((void const   *)fcgi_mode->ptr) == 1U)) {
                goto _L___4;
              } else {
#line 1366
                fprintf(_coverage_fout, "849\n");
#line 1366
                fflush(_coverage_fout);
#line 1366
                if (__s1_len___0 >= 4U) {
#line 1366
                  fprintf(_coverage_fout, "847\n");
#line 1366
                  fflush(_coverage_fout);
                  _L___4: 
#line 1366
                  if (! ((unsigned int )((void const   *)("responder" + 1)) - (unsigned int )((void const   *)"responder") == 1U)) {
#line 1366
                    fprintf(_coverage_fout, "843\n");
#line 1366
                    fflush(_coverage_fout);
#line 1366
                    tmp___35 = 1;
                  } else {
#line 1366
                    fprintf(_coverage_fout, "846\n");
#line 1366
                    fflush(_coverage_fout);
#line 1366
                    if (__s2_len___0 >= 4U) {
#line 1366
                      fprintf(_coverage_fout, "844\n");
#line 1366
                      fflush(_coverage_fout);
#line 1366
                      tmp___35 = 1;
                    } else {
#line 1366
                      fprintf(_coverage_fout, "845\n");
#line 1366
                      fflush(_coverage_fout);
#line 1366
                      tmp___35 = 0;
                    }
                  }
                } else {
#line 1366
                  fprintf(_coverage_fout, "848\n");
#line 1366
                  fflush(_coverage_fout);
#line 1366
                  tmp___35 = 0;
                }
              }
#line 1366
              fprintf(_coverage_fout, "854\n");
#line 1366
              fflush(_coverage_fout);
#line 1366
              if (tmp___35) {
                {
#line 1366
                fprintf(_coverage_fout, "850\n");
#line 1366
                fflush(_coverage_fout);
#line 1366
                tmp___31 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "responder");
                }
              } else {
                {
#line 1366
                fprintf(_coverage_fout, "851\n");
#line 1366
                fflush(_coverage_fout);
#line 1366
                tmp___34 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "responder");
#line 1366
                fprintf(_coverage_fout, "852\n");
#line 1366
                fflush(_coverage_fout);
#line 1366
                tmp___31 = tmp___34;
                }
              }
            } else {
              {
#line 1366
              fprintf(_coverage_fout, "855\n");
#line 1366
              fflush(_coverage_fout);
#line 1366
              tmp___34 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                          "responder");
#line 1366
              fprintf(_coverage_fout, "856\n");
#line 1366
              fflush(_coverage_fout);
#line 1366
              tmp___31 = tmp___34;
              }
            }
#line 1365
            fprintf(_coverage_fout, "883\n");
#line 1365
            fflush(_coverage_fout);
#line 1366
            if (tmp___31 == 0) {
#line 1366
              fprintf(_coverage_fout, "857\n");
#line 1366
              fflush(_coverage_fout);
#line 1367
              host->mode = (unsigned short)1;
            } else {
#line 1366
              fprintf(_coverage_fout, "880\n");
#line 1366
              fflush(_coverage_fout);
#line 1368
              if (0) {
                {
#line 1368
                fprintf(_coverage_fout, "858\n");
#line 1368
                fflush(_coverage_fout);
#line 1368
                __s1_len = strlen((char const   *)fcgi_mode->ptr);
#line 1368
                fprintf(_coverage_fout, "859\n");
#line 1368
                fflush(_coverage_fout);
#line 1368
                __s2_len = strlen("authorizer");
                }
#line 1368
                fprintf(_coverage_fout, "870\n");
#line 1368
                fflush(_coverage_fout);
#line 1368
                if (! ((unsigned int )((void const   *)(fcgi_mode->ptr + 1)) - (unsigned int )((void const   *)fcgi_mode->ptr) == 1U)) {
                  goto _L___2;
                } else {
#line 1368
                  fprintf(_coverage_fout, "866\n");
#line 1368
                  fflush(_coverage_fout);
#line 1368
                  if (__s1_len >= 4U) {
#line 1368
                    fprintf(_coverage_fout, "864\n");
#line 1368
                    fflush(_coverage_fout);
                    _L___2: 
#line 1368
                    if (! ((unsigned int )((void const   *)("authorizer" + 1)) - (unsigned int )((void const   *)"authorizer") == 1U)) {
#line 1368
                      fprintf(_coverage_fout, "860\n");
#line 1368
                      fflush(_coverage_fout);
#line 1368
                      tmp___25 = 1;
                    } else {
#line 1368
                      fprintf(_coverage_fout, "863\n");
#line 1368
                      fflush(_coverage_fout);
#line 1368
                      if (__s2_len >= 4U) {
#line 1368
                        fprintf(_coverage_fout, "861\n");
#line 1368
                        fflush(_coverage_fout);
#line 1368
                        tmp___25 = 1;
                      } else {
#line 1368
                        fprintf(_coverage_fout, "862\n");
#line 1368
                        fflush(_coverage_fout);
#line 1368
                        tmp___25 = 0;
                      }
                    }
                  } else {
#line 1368
                    fprintf(_coverage_fout, "865\n");
#line 1368
                    fflush(_coverage_fout);
#line 1368
                    tmp___25 = 0;
                  }
                }
#line 1368
                fprintf(_coverage_fout, "871\n");
#line 1368
                fflush(_coverage_fout);
#line 1368
                if (tmp___25) {
                  {
#line 1368
                  fprintf(_coverage_fout, "867\n");
#line 1368
                  fflush(_coverage_fout);
#line 1368
                  tmp___21 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                              "authorizer");
                  }
                } else {
                  {
#line 1368
                  fprintf(_coverage_fout, "868\n");
#line 1368
                  fflush(_coverage_fout);
#line 1368
                  tmp___24 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                              "authorizer");
#line 1368
                  fprintf(_coverage_fout, "869\n");
#line 1368
                  fflush(_coverage_fout);
#line 1368
                  tmp___21 = tmp___24;
                  }
                }
              } else {
                {
#line 1368
                fprintf(_coverage_fout, "872\n");
#line 1368
                fflush(_coverage_fout);
#line 1368
                tmp___24 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "authorizer");
#line 1368
                fprintf(_coverage_fout, "873\n");
#line 1368
                fflush(_coverage_fout);
#line 1368
                tmp___21 = tmp___24;
                }
              }
#line 1366
              fprintf(_coverage_fout, "881\n");
#line 1366
              fflush(_coverage_fout);
#line 1368
              if (tmp___21 == 0) {
                {
#line 1369
                fprintf(_coverage_fout, "874\n");
#line 1369
                fflush(_coverage_fout);
#line 1369
                host->mode = (unsigned short)2;
#line 1369
                fprintf(_coverage_fout, "875\n");
#line 1369
                fflush(_coverage_fout);
#line 1370
                tmp___15 = buffer_is_empty(host->docroot);
                }
#line 1368
                fprintf(_coverage_fout, "878\n");
#line 1368
                fflush(_coverage_fout);
#line 1370
                if (tmp___15) {
                  {
#line 1371
                  fprintf(_coverage_fout, "876\n");
#line 1371
                  fflush(_coverage_fout);
#line 1371
                  log_error_write(srv, "mod_fastcgi.c", 1371U, "s",
                                  "ERROR: docroot is required for authorizer mode.");
                  }
#line 1370
                  fprintf(_coverage_fout, "877\n");
#line 1370
                  fflush(_coverage_fout);
#line 1373
                  return ((enum __anonenum_handler_t_43 )5);
                }
              } else {
                {
#line 1376
                fprintf(_coverage_fout, "879\n");
#line 1376
                fflush(_coverage_fout);
#line 1376
                log_error_write(srv, "mod_fastcgi.c", 1376U, "sbs",
                                "WARNING: unknown fastcgi mode:", fcgi_mode,
                                "(ignored, mode set to responder)");
                }
              }
            }
          }
          {
#line 1383
          fprintf(_coverage_fout, "884\n");
#line 1383
          fflush(_coverage_fout);
#line 1383
          fastcgi_extension_insert(s->exts, da_ext->key, host);
#line 1383
          fprintf(_coverage_fout, "885\n");
#line 1383
          fflush(_coverage_fout);
#line 1159
          n ++;
          }
        }
#line 1135
        fprintf(_coverage_fout, "899\n");
#line 1135
        fflush(_coverage_fout);
#line 1135
        j ++;
      }
    }
#line 1094
    fprintf(_coverage_fout, "907\n");
#line 1094
    fflush(_coverage_fout);
#line 1094
    i ++;
  }
  {
#line 1389
  fprintf(_coverage_fout, "908\n");
#line 1389
  fflush(_coverage_fout);
#line 1389
  buffer_free(fcgi_mode);
  }
#line 1079
  fprintf(_coverage_fout, "910\n");
#line 1079
  fflush(_coverage_fout);
#line 1391
  return ((enum __anonenum_handler_t_43 )1);
}
}
#line 1394 "mod_fastcgi.c"
static int fcgi_set_state(server *srv , handler_ctx *hctx ,
                          fcgi_connection_state_t state ) 
{ 

  {
#line 1394
  fprintf(_coverage_fout, "911\n");
#line 1394
  fflush(_coverage_fout);
#line 1395
  hctx->state = state;
#line 1396
  hctx->state_timestamp = srv->cur_ts;
#line 1394
  fprintf(_coverage_fout, "912\n");
#line 1394
  fflush(_coverage_fout);
#line 1398
  return (0);
}
}
#line 1402 "mod_fastcgi.c"
static size_t fcgi_requestid_new(server *srv , plugin_data *p ) 
{ size_t m ;
  size_t i ;
  buffer_uint *r ;
  void *tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;

  {
#line 1402
  fprintf(_coverage_fout, "924\n");
#line 1402
  fflush(_coverage_fout);
#line 1403
  m = 0U;
#line 1405
  r = & p->fcgi_request_id;
#line 1409
  i = 0U;
#line 1402
  fprintf(_coverage_fout, "925\n");
#line 1402
  fflush(_coverage_fout);
#line 1409
  while (1) {
#line 1409
    fprintf(_coverage_fout, "914\n");
#line 1409
    fflush(_coverage_fout);
#line 1409
    if (! (i < r->used)) {
#line 1409
      break;
    }
#line 1409
    fprintf(_coverage_fout, "915\n");
#line 1409
    fflush(_coverage_fout);
#line 1410
    if (*(r->ptr + i) > m) {
#line 1410
      fprintf(_coverage_fout, "913\n");
#line 1410
      fflush(_coverage_fout);
#line 1410
      m = *(r->ptr + i);
    }
#line 1409
    fprintf(_coverage_fout, "916\n");
#line 1409
    fflush(_coverage_fout);
#line 1409
    i ++;
  }
#line 1402
  fprintf(_coverage_fout, "926\n");
#line 1402
  fflush(_coverage_fout);
#line 1413
  if (r->size == 0U) {
    {
#line 1414
    fprintf(_coverage_fout, "917\n");
#line 1414
    fflush(_coverage_fout);
#line 1414
    r->size = 16U;
#line 1414
    fprintf(_coverage_fout, "918\n");
#line 1414
    fflush(_coverage_fout);
#line 1415
    tmp = malloc(sizeof(*(r->ptr)) * r->size);
#line 1414
    fprintf(_coverage_fout, "919\n");
#line 1414
    fflush(_coverage_fout);
#line 1415
    r->ptr = (size_t *)tmp;
    }
  } else {
#line 1413
    fprintf(_coverage_fout, "923\n");
#line 1413
    fflush(_coverage_fout);
#line 1416
    if (r->used == r->size) {
      {
#line 1417
      fprintf(_coverage_fout, "920\n");
#line 1417
      fflush(_coverage_fout);
#line 1417
      r->size += 16U;
#line 1417
      fprintf(_coverage_fout, "921\n");
#line 1417
      fflush(_coverage_fout);
#line 1418
      tmp___0 = realloc((void *)r->ptr, sizeof(*(r->ptr)) * r->size);
#line 1417
      fprintf(_coverage_fout, "922\n");
#line 1417
      fflush(_coverage_fout);
#line 1418
      r->ptr = (size_t *)tmp___0;
      }
    }
  }
#line 1402
  fprintf(_coverage_fout, "927\n");
#line 1402
  fflush(_coverage_fout);
#line 1421
  tmp___1 = r->used;
#line 1421
  (r->used) ++;
#line 1421
  m ++;
#line 1421
  *(r->ptr + tmp___1) = m;
#line 1402
  fprintf(_coverage_fout, "928\n");
#line 1402
  fflush(_coverage_fout);
#line 1423
  return (m);
}
}
#line 1426 "mod_fastcgi.c"
static int fcgi_requestid_del(server *srv , plugin_data *p , size_t request_id ) 
{ size_t i ;
  buffer_uint *r ;

  {
#line 1426
  fprintf(_coverage_fout, "935\n");
#line 1426
  fflush(_coverage_fout);
#line 1428
  r = & p->fcgi_request_id;
#line 1432
  i = 0U;
#line 1426
  fprintf(_coverage_fout, "936\n");
#line 1426
  fflush(_coverage_fout);
#line 1432
  while (1) {
#line 1432
    fprintf(_coverage_fout, "929\n");
#line 1432
    fflush(_coverage_fout);
#line 1432
    if (! (i < r->used)) {
#line 1432
      break;
    }
#line 1432
    fprintf(_coverage_fout, "930\n");
#line 1432
    fflush(_coverage_fout);
#line 1433
    if (*(r->ptr + i) == request_id) {
#line 1433
      break;
    }
#line 1432
    fprintf(_coverage_fout, "931\n");
#line 1432
    fflush(_coverage_fout);
#line 1432
    i ++;
  }
#line 1426
  fprintf(_coverage_fout, "937\n");
#line 1426
  fflush(_coverage_fout);
#line 1436
  if (i != r->used) {
#line 1436
    fprintf(_coverage_fout, "933\n");
#line 1436
    fflush(_coverage_fout);
#line 1439
    if (i != r->used - 1U) {
#line 1439
      fprintf(_coverage_fout, "932\n");
#line 1439
      fflush(_coverage_fout);
#line 1440
      *(r->ptr + i) = *(r->ptr + (r->used - 1U));
    }
#line 1436
    fprintf(_coverage_fout, "934\n");
#line 1436
    fflush(_coverage_fout);
#line 1442
    (r->used) --;
  }
#line 1426
  fprintf(_coverage_fout, "938\n");
#line 1426
  fflush(_coverage_fout);
#line 1445
  return (0);
}
}
#line 1447 "mod_fastcgi.c"
void fcgi_connection_close(server *srv , handler_ctx *hctx ) 
{ plugin_data *p ;
  connection *con ;
  size_t tmp ;

  {
#line 1447
  fprintf(_coverage_fout, "959\n");
#line 1447
  fflush(_coverage_fout);
#line 1451
  if ((unsigned int )((void *)0) == (unsigned int )hctx) {
#line 1451
    fprintf(_coverage_fout, "939\n");
#line 1451
    fflush(_coverage_fout);
#line 1451
    return;
  }
#line 1447
  fprintf(_coverage_fout, "960\n");
#line 1447
  fflush(_coverage_fout);
#line 1453
  p = hctx->plugin_data;
#line 1454
  con = hctx->remote_conn;
#line 1447
  fprintf(_coverage_fout, "961\n");
#line 1447
  fflush(_coverage_fout);
#line 1456
  if (hctx->fd != -1) {
    {
#line 1457
    fprintf(_coverage_fout, "940\n");
#line 1457
    fflush(_coverage_fout);
#line 1457
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
#line 1457
    fprintf(_coverage_fout, "941\n");
#line 1457
    fflush(_coverage_fout);
#line 1458
    fdevent_unregister(srv->ev, hctx->fd);
#line 1457
    fprintf(_coverage_fout, "942\n");
#line 1457
    fflush(_coverage_fout);
#line 1459
    close(hctx->fd);
#line 1457
    fprintf(_coverage_fout, "943\n");
#line 1457
    fflush(_coverage_fout);
#line 1460
    (srv->cur_fds) --;
    }
  }
#line 1447
  fprintf(_coverage_fout, "962\n");
#line 1447
  fflush(_coverage_fout);
#line 1463
  if (hctx->request_id != 0U) {
    {
#line 1464
    fprintf(_coverage_fout, "944\n");
#line 1464
    fflush(_coverage_fout);
#line 1464
    fcgi_requestid_del(srv, p, hctx->request_id);
    }
  }
#line 1447
  fprintf(_coverage_fout, "963\n");
#line 1447
  fflush(_coverage_fout);
#line 1467
  if (hctx->host) {
#line 1467
    fprintf(_coverage_fout, "956\n");
#line 1467
    fflush(_coverage_fout);
#line 1467
    if (hctx->proc) {
#line 1467
      fprintf(_coverage_fout, "955\n");
#line 1467
      fflush(_coverage_fout);
#line 1468
      if (hctx->got_proc) {
        {
#line 1470
        fprintf(_coverage_fout, "945\n");
#line 1470
        fflush(_coverage_fout);
#line 1470
        ((hctx->proc)->load) --;
#line 1470
        fprintf(_coverage_fout, "946\n");
#line 1470
        fflush(_coverage_fout);
#line 1472
        status_counter_dec(srv, "fastcgi.active-requests",
                           sizeof("fastcgi.active-requests") - 1U);
#line 1470
        fprintf(_coverage_fout, "947\n");
#line 1470
        fflush(_coverage_fout);
#line 1474
        fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
#line 1470
        fprintf(_coverage_fout, "948\n");
#line 1470
        fflush(_coverage_fout);
#line 1475
        buffer_append_string(p->statuskey, ".load");
        }
#line 1468
        fprintf(_coverage_fout, "953\n");
#line 1468
        fflush(_coverage_fout);
#line 1477
        if ((p->statuskey)->used) {
#line 1477
          fprintf(_coverage_fout, "949\n");
#line 1477
          fflush(_coverage_fout);
#line 1477
          tmp = (p->statuskey)->used - 1U;
        } else {
#line 1477
          fprintf(_coverage_fout, "950\n");
#line 1477
          fflush(_coverage_fout);
#line 1477
          tmp = 0U;
        }
        {
#line 1477
        fprintf(_coverage_fout, "951\n");
#line 1477
        fflush(_coverage_fout);
#line 1477
        status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp,
                           (int )(hctx->proc)->load);
        }
#line 1468
        fprintf(_coverage_fout, "954\n");
#line 1468
        fflush(_coverage_fout);
#line 1479
        if (p->conf.debug) {
          {
#line 1480
          fprintf(_coverage_fout, "952\n");
#line 1480
          fflush(_coverage_fout);
#line 1480
          log_error_write(srv, "mod_fastcgi.c", 1480U, "ssdsbsd",
                          "released proc:", "pid:", (hctx->proc)->pid,
                          "socket:", (hctx->proc)->connection_name, "load:",
                          (hctx->proc)->load);
          }
        }
      }
    }
  }
  {
#line 1490
  fprintf(_coverage_fout, "957\n");
#line 1490
  fflush(_coverage_fout);
#line 1490
  handler_ctx_free(hctx);
#line 1490
  fprintf(_coverage_fout, "958\n");
#line 1490
  fflush(_coverage_fout);
#line 1491
  *(con->plugin_ctx + p->id) = (void *)0;
  }
#line 1447
  fprintf(_coverage_fout, "964\n");
#line 1447
  fflush(_coverage_fout);
#line 1492
  return;
}
}
#line 1494 "mod_fastcgi.c"
static int fcgi_reconnect(server *srv , handler_ctx *hctx ) 
{ plugin_data *p ;

  {
#line 1494
  fprintf(_coverage_fout, "979\n");
#line 1494
  fflush(_coverage_fout);
#line 1495
  p = hctx->plugin_data;
#line 1494
  fprintf(_coverage_fout, "980\n");
#line 1494
  fflush(_coverage_fout);
#line 1516
  if (hctx->fd != -1) {
    {
#line 1517
    fprintf(_coverage_fout, "965\n");
#line 1517
    fflush(_coverage_fout);
#line 1517
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
#line 1517
    fprintf(_coverage_fout, "966\n");
#line 1517
    fflush(_coverage_fout);
#line 1518
    fdevent_unregister(srv->ev, hctx->fd);
#line 1517
    fprintf(_coverage_fout, "967\n");
#line 1517
    fflush(_coverage_fout);
#line 1519
    close(hctx->fd);
#line 1517
    fprintf(_coverage_fout, "968\n");
#line 1517
    fflush(_coverage_fout);
#line 1520
    (srv->cur_fds) --;
#line 1517
    fprintf(_coverage_fout, "969\n");
#line 1517
    fflush(_coverage_fout);
#line 1521
    hctx->fd = -1;
    }
  }
  {
#line 1524
  fprintf(_coverage_fout, "970\n");
#line 1524
  fflush(_coverage_fout);
#line 1524
  fcgi_requestid_del(srv, p, hctx->request_id);
#line 1524
  fprintf(_coverage_fout, "971\n");
#line 1524
  fflush(_coverage_fout);
#line 1526
  fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )1);
#line 1524
  fprintf(_coverage_fout, "972\n");
#line 1524
  fflush(_coverage_fout);
#line 1528
  hctx->request_id = 0U;
#line 1524
  fprintf(_coverage_fout, "973\n");
#line 1524
  fflush(_coverage_fout);
#line 1529
  (hctx->reconnects) ++;
  }
#line 1494
  fprintf(_coverage_fout, "981\n");
#line 1494
  fflush(_coverage_fout);
#line 1531
  if (p->conf.debug > 2) {
#line 1531
    fprintf(_coverage_fout, "976\n");
#line 1531
    fflush(_coverage_fout);
#line 1532
    if (hctx->proc) {
      {
#line 1533
      fprintf(_coverage_fout, "974\n");
#line 1533
      fflush(_coverage_fout);
#line 1533
      log_error_write(srv, "mod_fastcgi.c", 1533U, "sdb",
                      "release proc for reconnect:", (hctx->proc)->pid,
                      (hctx->proc)->connection_name);
      }
    } else {
      {
#line 1537
      fprintf(_coverage_fout, "975\n");
#line 1537
      fflush(_coverage_fout);
#line 1537
      log_error_write(srv, "mod_fastcgi.c", 1537U, "sb",
                      "release proc for reconnect:", (hctx->host)->unixsocket);
      }
    }
  }
#line 1494
  fprintf(_coverage_fout, "982\n");
#line 1494
  fflush(_coverage_fout);
#line 1543
  if (hctx->proc) {
#line 1543
    fprintf(_coverage_fout, "978\n");
#line 1543
    fflush(_coverage_fout);
#line 1543
    if (hctx->got_proc) {
#line 1543
      fprintf(_coverage_fout, "977\n");
#line 1543
      fflush(_coverage_fout);
#line 1544
      ((hctx->proc)->load) --;
    }
  }
#line 1494
  fprintf(_coverage_fout, "983\n");
#line 1494
  fflush(_coverage_fout);
#line 1548
  ((hctx->host)->load) --;
#line 1549
  hctx->host = (fcgi_extension_host *)((void *)0);
#line 1494
  fprintf(_coverage_fout, "984\n");
#line 1494
  fflush(_coverage_fout);
#line 1551
  return (0);
}
}
#line 1555 "mod_fastcgi.c"
static handler_t fcgi_connection_reset(server *srv , connection *con ,
                                       void *p_d ) 
{ plugin_data *p ;

  {
  {
#line 1556
  fprintf(_coverage_fout, "985\n");
#line 1556
  fflush(_coverage_fout);
#line 1556
  p = (plugin_data *)p_d;
#line 1556
  fprintf(_coverage_fout, "986\n");
#line 1556
  fflush(_coverage_fout);
#line 1558
  fcgi_connection_close(srv, (handler_ctx *)*(con->plugin_ctx + p->id));
  }
#line 1555
  fprintf(_coverage_fout, "987\n");
#line 1555
  fflush(_coverage_fout);
#line 1560
  return ((enum __anonenum_handler_t_43 )1);
}
}
#line 1564 "mod_fastcgi.c"
static int fcgi_env_add(buffer *env , char const   *key , size_t key_len ,
                        char const   *val , size_t val_len ) 
{ size_t len ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  size_t tmp___10 ;

  {
#line 1564
  fprintf(_coverage_fout, "1005\n");
#line 1564
  fflush(_coverage_fout);
#line 1567
  if (! key) {
#line 1567
    fprintf(_coverage_fout, "988\n");
#line 1567
    fflush(_coverage_fout);
#line 1567
    return (-1);
  } else {
#line 1567
    fprintf(_coverage_fout, "990\n");
#line 1567
    fflush(_coverage_fout);
#line 1567
    if (! val) {
#line 1567
      fprintf(_coverage_fout, "989\n");
#line 1567
      fflush(_coverage_fout);
#line 1567
      return (-1);
    }
  }
#line 1564
  fprintf(_coverage_fout, "1006\n");
#line 1564
  fflush(_coverage_fout);
#line 1569
  len = key_len + val_len;
#line 1564
  fprintf(_coverage_fout, "1007\n");
#line 1564
  fflush(_coverage_fout);
#line 1571
  if (key_len > 127U) {
#line 1571
    fprintf(_coverage_fout, "991\n");
#line 1571
    fflush(_coverage_fout);
#line 1571
    tmp = 4;
  } else {
#line 1571
    fprintf(_coverage_fout, "992\n");
#line 1571
    fflush(_coverage_fout);
#line 1571
    tmp = 1;
  }
#line 1564
  fprintf(_coverage_fout, "1008\n");
#line 1564
  fflush(_coverage_fout);
#line 1571
  len += (unsigned int )tmp;
#line 1564
  fprintf(_coverage_fout, "1009\n");
#line 1564
  fflush(_coverage_fout);
#line 1572
  if (val_len > 127U) {
#line 1572
    fprintf(_coverage_fout, "993\n");
#line 1572
    fflush(_coverage_fout);
#line 1572
    tmp___0 = 4;
  } else {
#line 1572
    fprintf(_coverage_fout, "994\n");
#line 1572
    fflush(_coverage_fout);
#line 1572
    tmp___0 = 1;
  }
  {
#line 1572
  fprintf(_coverage_fout, "995\n");
#line 1572
  fflush(_coverage_fout);
#line 1572
  len += (unsigned int )tmp___0;
#line 1572
  fprintf(_coverage_fout, "996\n");
#line 1572
  fflush(_coverage_fout);
#line 1574
  buffer_prepare_append(env, len);
  }
#line 1564
  fprintf(_coverage_fout, "1010\n");
#line 1564
  fflush(_coverage_fout);
#line 1576
  if (key_len > 127U) {
#line 1576
    fprintf(_coverage_fout, "997\n");
#line 1576
    fflush(_coverage_fout);
#line 1577
    tmp___1 = env->used;
#line 1577
    (env->used) ++;
#line 1577
    *(env->ptr + tmp___1) = (char )(((key_len >> 24) & 255U) | 128U);
#line 1578
    tmp___2 = env->used;
#line 1578
    (env->used) ++;
#line 1578
    *(env->ptr + tmp___2) = (char )((key_len >> 16) & 255U);
#line 1579
    tmp___3 = env->used;
#line 1579
    (env->used) ++;
#line 1579
    *(env->ptr + tmp___3) = (char )((key_len >> 8) & 255U);
#line 1580
    tmp___4 = env->used;
#line 1580
    (env->used) ++;
#line 1580
    *(env->ptr + tmp___4) = (char )(key_len & 255U);
  } else {
#line 1576
    fprintf(_coverage_fout, "998\n");
#line 1576
    fflush(_coverage_fout);
#line 1582
    tmp___5 = env->used;
#line 1582
    (env->used) ++;
#line 1582
    *(env->ptr + tmp___5) = (char )(key_len & 255U);
  }
#line 1564
  fprintf(_coverage_fout, "1011\n");
#line 1564
  fflush(_coverage_fout);
#line 1585
  if (val_len > 127U) {
#line 1585
    fprintf(_coverage_fout, "999\n");
#line 1585
    fflush(_coverage_fout);
#line 1586
    tmp___6 = env->used;
#line 1586
    (env->used) ++;
#line 1586
    *(env->ptr + tmp___6) = (char )(((val_len >> 24) & 255U) | 128U);
#line 1587
    tmp___7 = env->used;
#line 1587
    (env->used) ++;
#line 1587
    *(env->ptr + tmp___7) = (char )((val_len >> 16) & 255U);
#line 1588
    tmp___8 = env->used;
#line 1588
    (env->used) ++;
#line 1588
    *(env->ptr + tmp___8) = (char )((val_len >> 8) & 255U);
#line 1589
    tmp___9 = env->used;
#line 1589
    (env->used) ++;
#line 1589
    *(env->ptr + tmp___9) = (char )(val_len & 255U);
  } else {
#line 1585
    fprintf(_coverage_fout, "1000\n");
#line 1585
    fflush(_coverage_fout);
#line 1591
    tmp___10 = env->used;
#line 1591
    (env->used) ++;
#line 1591
    *(env->ptr + tmp___10) = (char )(val_len & 255U);
  }
  {
#line 1594
  fprintf(_coverage_fout, "1001\n");
#line 1594
  fflush(_coverage_fout);
#line 1594
  memcpy((void */* __restrict  */)((void *)(env->ptr + env->used)),
         (void const   */* __restrict  */)((void const   *)key), key_len);
#line 1594
  fprintf(_coverage_fout, "1002\n");
#line 1594
  fflush(_coverage_fout);
#line 1595
  env->used += key_len;
#line 1594
  fprintf(_coverage_fout, "1003\n");
#line 1594
  fflush(_coverage_fout);
#line 1596
  memcpy((void */* __restrict  */)((void *)(env->ptr + env->used)),
         (void const   */* __restrict  */)((void const   *)val), val_len);
#line 1594
  fprintf(_coverage_fout, "1004\n");
#line 1594
  fflush(_coverage_fout);
#line 1597
  env->used += val_len;
  }
#line 1564
  fprintf(_coverage_fout, "1012\n");
#line 1564
  fflush(_coverage_fout);
#line 1599
  return (0);
}
}
#line 1602 "mod_fastcgi.c"
static int fcgi_header(FCGI_Header *header , unsigned char type ,
                       size_t request_id , int contentLength ,
                       unsigned char paddingLength ) 
{ 

  {
#line 1602
  fprintf(_coverage_fout, "1013\n");
#line 1602
  fflush(_coverage_fout);
#line 1603
  header->version = (unsigned char)1;
#line 1604
  header->type = type;
#line 1605
  header->requestIdB0 = (unsigned char )(request_id & 255U);
#line 1606
  header->requestIdB1 = (unsigned char )((request_id >> 8) & 255U);
#line 1607
  header->contentLengthB0 = (unsigned char )(contentLength & 255);
#line 1608
  header->contentLengthB1 = (unsigned char )((contentLength >> 8) & 255);
#line 1609
  header->paddingLength = paddingLength;
#line 1610
  header->reserved = (unsigned char)0;
#line 1602
  fprintf(_coverage_fout, "1014\n");
#line 1602
  fflush(_coverage_fout);
#line 1612
  return (0);
}
}
#line 1630 "mod_fastcgi.c"
static connection_result_t fcgi_establish_connection(server *srv ,
                                                     handler_ctx *hctx ) 
{ struct sockaddr *fcgi_addr ;
  struct sockaddr_in fcgi_addr_in ;
  struct sockaddr_un fcgi_addr_un ;
  socklen_t servlen ;
  fcgi_extension_host *host ;
  fcgi_proc *proc ;
  int fcgi_fd ;
  size_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  int *tmp___7 ;
  int *tmp___8 ;
  int *tmp___9 ;
  int tmp___10 ;

  {
  {
#line 1638
  fprintf(_coverage_fout, "1015\n");
#line 1638
  fflush(_coverage_fout);
#line 1638
  host = hctx->host;
#line 1638
  fprintf(_coverage_fout, "1016\n");
#line 1638
  fflush(_coverage_fout);
#line 1639
  proc = hctx->proc;
#line 1638
  fprintf(_coverage_fout, "1017\n");
#line 1638
  fflush(_coverage_fout);
#line 1640
  fcgi_fd = hctx->fd;
#line 1638
  fprintf(_coverage_fout, "1018\n");
#line 1638
  fflush(_coverage_fout);
#line 1642
  memset((void *)(& fcgi_addr), 0, sizeof(fcgi_addr));
#line 1638
  fprintf(_coverage_fout, "1019\n");
#line 1638
  fflush(_coverage_fout);
#line 1644
  tmp___3 = buffer_is_empty(proc->unixsocket);
  }
#line 1630
  fprintf(_coverage_fout, "1065\n");
#line 1630
  fflush(_coverage_fout);
#line 1644
  if (tmp___3) {
    {
#line 1666
    fprintf(_coverage_fout, "1020\n");
#line 1666
    fflush(_coverage_fout);
#line 1666
    fcgi_addr_in.sin_family = (unsigned short)2;
#line 1666
    fprintf(_coverage_fout, "1021\n");
#line 1666
    fflush(_coverage_fout);
#line 1667
    tmp___1 = inet_aton((char const   *)(host->host)->ptr,
                        & fcgi_addr_in.sin_addr);
    }
#line 1644
    fprintf(_coverage_fout, "1034\n");
#line 1644
    fflush(_coverage_fout);
#line 1667
    if (0 == tmp___1) {
      {
#line 1668
      fprintf(_coverage_fout, "1022\n");
#line 1668
      fflush(_coverage_fout);
#line 1668
      log_error_write(srv, "mod_fastcgi.c", 1668U, "sbs",
                      "converting IP address failed for", host->host,
                      "\nBe sure to specify an IP address here");
      }
#line 1667
      fprintf(_coverage_fout, "1023\n");
#line 1667
      fflush(_coverage_fout);
#line 1672
      return ((enum __anonenum_connection_result_t_154 )-1);
    }
    {
#line 1674
    fprintf(_coverage_fout, "1024\n");
#line 1674
    fflush(_coverage_fout);
#line 1674
    __x = (unsigned short )proc->port;
#line 1674
    fprintf(_coverage_fout, "1025\n");
#line 1674
    fflush(_coverage_fout);
#line 1674
    __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
#line 1674
    fprintf(_coverage_fout, "1026\n");
#line 1674
    fflush(_coverage_fout);
#line 1674
    fcgi_addr_in.sin_port = __v;
#line 1674
    fprintf(_coverage_fout, "1027\n");
#line 1674
    fflush(_coverage_fout);
#line 1675
    servlen = sizeof(fcgi_addr_in);
#line 1674
    fprintf(_coverage_fout, "1028\n");
#line 1674
    fflush(_coverage_fout);
#line 1677
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_in);
#line 1674
    fprintf(_coverage_fout, "1029\n");
#line 1674
    fflush(_coverage_fout);
#line 1679
    tmp___2 = buffer_is_empty(proc->connection_name);
    }
#line 1644
    fprintf(_coverage_fout, "1035\n");
#line 1644
    fflush(_coverage_fout);
#line 1679
    if (tmp___2) {
      {
#line 1681
      fprintf(_coverage_fout, "1030\n");
#line 1681
      fflush(_coverage_fout);
#line 1681
      buffer_copy_string(proc->connection_name, "tcp:");
#line 1681
      fprintf(_coverage_fout, "1031\n");
#line 1681
      fflush(_coverage_fout);
#line 1682
      buffer_append_string_buffer(proc->connection_name,
                                  (buffer const   *)host->host);
#line 1681
      fprintf(_coverage_fout, "1032\n");
#line 1681
      fflush(_coverage_fout);
#line 1683
      buffer_append_string(proc->connection_name, ":");
#line 1681
      fprintf(_coverage_fout, "1033\n");
#line 1681
      fflush(_coverage_fout);
#line 1684
      buffer_append_long(proc->connection_name, (long )proc->port);
      }
    }
  } else {
    {
#line 1647
    fprintf(_coverage_fout, "1036\n");
#line 1647
    fflush(_coverage_fout);
#line 1647
    fcgi_addr_un.sun_family = (unsigned short)1;
#line 1647
    fprintf(_coverage_fout, "1037\n");
#line 1647
    fflush(_coverage_fout);
#line 1648
    strcpy((char */* __restrict  */)(fcgi_addr_un.sun_path),
           (char const   */* __restrict  */)((char const   *)(proc->unixsocket)->ptr));
#line 1647
    fprintf(_coverage_fout, "1038\n");
#line 1647
    fflush(_coverage_fout);
#line 1650
    tmp = strlen((char const   *)(fcgi_addr_un.sun_path));
#line 1647
    fprintf(_coverage_fout, "1039\n");
#line 1647
    fflush(_coverage_fout);
#line 1650
    servlen = (unsigned int )(((struct sockaddr_un *)0)->sun_path) + tmp;
#line 1647
    fprintf(_coverage_fout, "1040\n");
#line 1647
    fflush(_coverage_fout);
#line 1655
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_un);
#line 1647
    fprintf(_coverage_fout, "1041\n");
#line 1647
    fflush(_coverage_fout);
#line 1657
    tmp___0 = buffer_is_empty(proc->connection_name);
    }
#line 1644
    fprintf(_coverage_fout, "1044\n");
#line 1644
    fflush(_coverage_fout);
#line 1657
    if (tmp___0) {
      {
#line 1659
      fprintf(_coverage_fout, "1042\n");
#line 1659
      fflush(_coverage_fout);
#line 1659
      buffer_copy_string(proc->connection_name, "unix:");
#line 1659
      fprintf(_coverage_fout, "1043\n");
#line 1659
      fflush(_coverage_fout);
#line 1660
      buffer_append_string_buffer(proc->connection_name,
                                  (buffer const   *)proc->unixsocket);
      }
    }
  }
  {
#line 1688
  fprintf(_coverage_fout, "1045\n");
#line 1688
  fflush(_coverage_fout);
#line 1688
  tmp___10 = connect(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
  }
#line 1630
  fprintf(_coverage_fout, "1066\n");
#line 1630
  fflush(_coverage_fout);
#line 1688
  if (-1 == tmp___10) {
    {
#line 1689
    fprintf(_coverage_fout, "1046\n");
#line 1689
    fflush(_coverage_fout);
#line 1689
    tmp___7 = __errno_location();
    }
#line 1688
    fprintf(_coverage_fout, "1063\n");
#line 1688
    fflush(_coverage_fout);
#line 1689
    if (*tmp___7 == 115) {
      goto _L;
    } else {
      {
#line 1689
      fprintf(_coverage_fout, "1047\n");
#line 1689
      fflush(_coverage_fout);
#line 1689
      tmp___8 = __errno_location();
      }
#line 1689
      fprintf(_coverage_fout, "1062\n");
#line 1689
      fflush(_coverage_fout);
#line 1689
      if (*tmp___8 == 114) {
        goto _L;
      } else {
        {
#line 1689
        fprintf(_coverage_fout, "1048\n");
#line 1689
        fflush(_coverage_fout);
#line 1689
        tmp___9 = __errno_location();
        }
#line 1689
        fprintf(_coverage_fout, "1061\n");
#line 1689
        fflush(_coverage_fout);
#line 1689
        if (*tmp___9 == 4) {
#line 1689
          fprintf(_coverage_fout, "1050\n");
#line 1689
          fflush(_coverage_fout);
          _L: 
#line 1692
          if (hctx->conf.debug > 2) {
            {
#line 1693
            fprintf(_coverage_fout, "1049\n");
#line 1693
            fflush(_coverage_fout);
#line 1693
            log_error_write(srv, "mod_fastcgi.c", 1693U, "sb",
                            "connect delayed; will continue later:",
                            proc->connection_name);
            }
          }
#line 1689
          fprintf(_coverage_fout, "1051\n");
#line 1689
          fflush(_coverage_fout);
#line 1697
          return ((enum __anonenum_connection_result_t_154 )2);
        } else {
          {
#line 1698
          fprintf(_coverage_fout, "1052\n");
#line 1698
          fflush(_coverage_fout);
#line 1698
          tmp___6 = __errno_location();
          }
#line 1689
          fprintf(_coverage_fout, "1060\n");
#line 1689
          fflush(_coverage_fout);
#line 1698
          if (*tmp___6 == 11) {
#line 1698
            fprintf(_coverage_fout, "1054\n");
#line 1698
            fflush(_coverage_fout);
#line 1699
            if (hctx->conf.debug) {
              {
#line 1700
              fprintf(_coverage_fout, "1053\n");
#line 1700
              fflush(_coverage_fout);
#line 1700
              log_error_write(srv, "mod_fastcgi.c", 1700U, "sbsd",
                              "This means that you have more incoming requests than your FastCGI backend can handle in parallel.It might help to spawn more FastCGI backends or PHP children; if not, decrease server.max-connections.The load for this FastCGI backend",
                              proc->connection_name, "is", proc->load);
              }
            }
#line 1698
            fprintf(_coverage_fout, "1055\n");
#line 1698
            fflush(_coverage_fout);
#line 1706
            return ((enum __anonenum_connection_result_t_154 )3);
          } else {
            {
#line 1708
            fprintf(_coverage_fout, "1056\n");
#line 1708
            fflush(_coverage_fout);
#line 1708
            tmp___4 = __errno_location();
#line 1708
            fprintf(_coverage_fout, "1057\n");
#line 1708
            fflush(_coverage_fout);
#line 1708
            tmp___5 = strerror(*tmp___4);
#line 1708
            fprintf(_coverage_fout, "1058\n");
#line 1708
            fflush(_coverage_fout);
#line 1708
            log_error_write(srv, "mod_fastcgi.c", 1708U, "sssb",
                            "connect failed:", tmp___5, "on",
                            proc->connection_name);
            }
#line 1698
            fprintf(_coverage_fout, "1059\n");
#line 1698
            fflush(_coverage_fout);
#line 1713
            return ((enum __anonenum_connection_result_t_154 )4);
          }
        }
      }
    }
  }
#line 1630
  fprintf(_coverage_fout, "1067\n");
#line 1630
  fflush(_coverage_fout);
#line 1717
  hctx->reconnects = 0;
#line 1630
  fprintf(_coverage_fout, "1068\n");
#line 1630
  fflush(_coverage_fout);
#line 1718
  if (hctx->conf.debug > 1) {
    {
#line 1719
    fprintf(_coverage_fout, "1064\n");
#line 1719
    fflush(_coverage_fout);
#line 1719
    log_error_write(srv, "mod_fastcgi.c", 1719U, "sd", "connect succeeded: ",
                    fcgi_fd);
    }
  }
#line 1630
  fprintf(_coverage_fout, "1069\n");
#line 1630
  fflush(_coverage_fout);
#line 1723
  return ((enum __anonenum_connection_result_t_154 )1);
}
}
#line 1726 "mod_fastcgi.c"
static int fcgi_env_add_request_headers(server *srv , connection *con ,
                                        plugin_data *p ) 
{ size_t i ;
  data_string *ds ;
  size_t j ;
  int tmp ;
  char c ;
  int tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  data_string *ds___0 ;
  size_t j___0 ;
  char c___0 ;
  int tmp___6 ;
  int tmp___7 ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  size_t tmp___10 ;
  size_t tmp___11 ;

  {
#line 1726
  fprintf(_coverage_fout, "1126\n");
#line 1726
  fflush(_coverage_fout);
#line 1729
  i = 0U;
#line 1726
  fprintf(_coverage_fout, "1127\n");
#line 1726
  fflush(_coverage_fout);
#line 1729
  while (1) {
#line 1729
    fprintf(_coverage_fout, "1096\n");
#line 1729
    fflush(_coverage_fout);
#line 1729
    if (! (i < (con->request.headers)->used)) {
#line 1729
      break;
    }
#line 1729
    fprintf(_coverage_fout, "1097\n");
#line 1729
    fflush(_coverage_fout);
#line 1732
    ds = (data_string *)*((con->request.headers)->data + i);
#line 1729
    fprintf(_coverage_fout, "1098\n");
#line 1729
    fflush(_coverage_fout);
#line 1734
    if ((ds->value)->used) {
#line 1734
      fprintf(_coverage_fout, "1095\n");
#line 1734
      fflush(_coverage_fout);
#line 1734
      if ((ds->key)->used) {
        {
#line 1736
        fprintf(_coverage_fout, "1070\n");
#line 1736
        fflush(_coverage_fout);
#line 1736
        buffer_reset(srv->tmp_buf);
#line 1736
        fprintf(_coverage_fout, "1071\n");
#line 1736
        fflush(_coverage_fout);
#line 1738
        tmp = strcasecmp((char const   *)(ds->key)->ptr, "CONTENT-TYPE");
        }
#line 1734
        fprintf(_coverage_fout, "1090\n");
#line 1734
        fflush(_coverage_fout);
#line 1738
        if (0 != tmp) {
          {
#line 1739
          fprintf(_coverage_fout, "1072\n");
#line 1739
          fflush(_coverage_fout);
#line 1739
          buffer_copy_string_len(srv->tmp_buf, "HTTP_", sizeof("HTTP_") - 1U);
#line 1739
          fprintf(_coverage_fout, "1073\n");
#line 1739
          fflush(_coverage_fout);
#line 1740
          ((srv->tmp_buf)->used) --;
          }
        }
        {
#line 1743
        fprintf(_coverage_fout, "1074\n");
#line 1743
        fflush(_coverage_fout);
#line 1743
        buffer_prepare_append(srv->tmp_buf, (ds->key)->used + 2U);
#line 1743
        fprintf(_coverage_fout, "1075\n");
#line 1743
        fflush(_coverage_fout);
#line 1744
        j = 0U;
        }
#line 1734
        fprintf(_coverage_fout, "1091\n");
#line 1734
        fflush(_coverage_fout);
#line 1744
        while (1) {
#line 1744
          fprintf(_coverage_fout, "1082\n");
#line 1744
          fflush(_coverage_fout);
#line 1744
          if (! (j < (ds->key)->used - 1U)) {
#line 1744
            break;
          }
          {
#line 1745
          fprintf(_coverage_fout, "1076\n");
#line 1745
          fflush(_coverage_fout);
#line 1745
          c = (char )'_';
#line 1745
          fprintf(_coverage_fout, "1077\n");
#line 1745
          fflush(_coverage_fout);
#line 1746
          tmp___1 = light_isalpha((int )*((ds->key)->ptr + j));
          }
#line 1744
          fprintf(_coverage_fout, "1083\n");
#line 1744
          fflush(_coverage_fout);
#line 1746
          if (tmp___1) {
#line 1746
            fprintf(_coverage_fout, "1078\n");
#line 1746
            fflush(_coverage_fout);
#line 1748
            c = (char )((int )*((ds->key)->ptr + j) & -33);
          } else {
            {
#line 1749
            fprintf(_coverage_fout, "1079\n");
#line 1749
            fflush(_coverage_fout);
#line 1749
            tmp___0 = light_isdigit((int )*((ds->key)->ptr + j));
            }
#line 1746
            fprintf(_coverage_fout, "1081\n");
#line 1746
            fflush(_coverage_fout);
#line 1749
            if (tmp___0) {
#line 1749
              fprintf(_coverage_fout, "1080\n");
#line 1749
              fflush(_coverage_fout);
#line 1751
              c = *((ds->key)->ptr + j);
            }
          }
#line 1744
          fprintf(_coverage_fout, "1084\n");
#line 1744
          fflush(_coverage_fout);
#line 1753
          tmp___2 = (srv->tmp_buf)->used;
#line 1753
          ((srv->tmp_buf)->used) ++;
#line 1753
          *((srv->tmp_buf)->ptr + tmp___2) = c;
#line 1744
          j ++;
        }
#line 1734
        fprintf(_coverage_fout, "1092\n");
#line 1734
        fflush(_coverage_fout);
#line 1755
        tmp___3 = (srv->tmp_buf)->used;
#line 1755
        ((srv->tmp_buf)->used) ++;
#line 1755
        *((srv->tmp_buf)->ptr + tmp___3) = (char )'\000';
#line 1734
        fprintf(_coverage_fout, "1093\n");
#line 1734
        fflush(_coverage_fout);
#line 1757
        if ((ds->value)->used) {
#line 1757
          fprintf(_coverage_fout, "1085\n");
#line 1757
          fflush(_coverage_fout);
#line 1757
          tmp___4 = (ds->value)->used - 1U;
        } else {
#line 1757
          fprintf(_coverage_fout, "1086\n");
#line 1757
          fflush(_coverage_fout);
#line 1757
          tmp___4 = 0U;
        }
#line 1734
        fprintf(_coverage_fout, "1094\n");
#line 1734
        fflush(_coverage_fout);
#line 1757
        if ((srv->tmp_buf)->used) {
#line 1757
          fprintf(_coverage_fout, "1087\n");
#line 1757
          fflush(_coverage_fout);
#line 1757
          tmp___5 = (srv->tmp_buf)->used - 1U;
        } else {
#line 1757
          fprintf(_coverage_fout, "1088\n");
#line 1757
          fflush(_coverage_fout);
#line 1757
          tmp___5 = 0U;
        }
        {
#line 1757
        fprintf(_coverage_fout, "1089\n");
#line 1757
        fflush(_coverage_fout);
#line 1757
        fcgi_env_add(p->fcgi_env, (char const   *)(srv->tmp_buf)->ptr, tmp___5,
                     (char const   *)(ds->value)->ptr, tmp___4);
        }
      }
    }
#line 1729
    fprintf(_coverage_fout, "1099\n");
#line 1729
    fflush(_coverage_fout);
#line 1729
    i ++;
  }
#line 1726
  fprintf(_coverage_fout, "1128\n");
#line 1726
  fflush(_coverage_fout);
#line 1761
  i = 0U;
#line 1726
  fprintf(_coverage_fout, "1129\n");
#line 1726
  fflush(_coverage_fout);
#line 1761
  while (1) {
#line 1761
    fprintf(_coverage_fout, "1122\n");
#line 1761
    fflush(_coverage_fout);
#line 1761
    if (! (i < (con->environment)->used)) {
#line 1761
      break;
    }
#line 1761
    fprintf(_coverage_fout, "1123\n");
#line 1761
    fflush(_coverage_fout);
#line 1764
    ds___0 = (data_string *)*((con->environment)->data + i);
#line 1761
    fprintf(_coverage_fout, "1124\n");
#line 1761
    fflush(_coverage_fout);
#line 1766
    if ((ds___0->value)->used) {
#line 1766
      fprintf(_coverage_fout, "1121\n");
#line 1766
      fflush(_coverage_fout);
#line 1766
      if ((ds___0->key)->used) {
        {
#line 1768
        fprintf(_coverage_fout, "1100\n");
#line 1768
        fflush(_coverage_fout);
#line 1768
        buffer_reset(srv->tmp_buf);
#line 1768
        fprintf(_coverage_fout, "1101\n");
#line 1768
        fflush(_coverage_fout);
#line 1770
        buffer_prepare_append(srv->tmp_buf, (ds___0->key)->used + 2U);
#line 1768
        fprintf(_coverage_fout, "1102\n");
#line 1768
        fflush(_coverage_fout);
#line 1771
        j___0 = 0U;
        }
#line 1766
        fprintf(_coverage_fout, "1117\n");
#line 1766
        fflush(_coverage_fout);
#line 1771
        while (1) {
#line 1771
          fprintf(_coverage_fout, "1109\n");
#line 1771
          fflush(_coverage_fout);
#line 1771
          if (! (j___0 < (ds___0->key)->used - 1U)) {
#line 1771
            break;
          }
          {
#line 1772
          fprintf(_coverage_fout, "1103\n");
#line 1772
          fflush(_coverage_fout);
#line 1772
          c___0 = (char )'_';
#line 1772
          fprintf(_coverage_fout, "1104\n");
#line 1772
          fflush(_coverage_fout);
#line 1773
          tmp___7 = light_isalpha((int )*((ds___0->key)->ptr + j___0));
          }
#line 1771
          fprintf(_coverage_fout, "1110\n");
#line 1771
          fflush(_coverage_fout);
#line 1773
          if (tmp___7) {
#line 1773
            fprintf(_coverage_fout, "1105\n");
#line 1773
            fflush(_coverage_fout);
#line 1775
            c___0 = (char )((int )*((ds___0->key)->ptr + j___0) & -33);
          } else {
            {
#line 1776
            fprintf(_coverage_fout, "1106\n");
#line 1776
            fflush(_coverage_fout);
#line 1776
            tmp___6 = light_isdigit((int )*((ds___0->key)->ptr + j___0));
            }
#line 1773
            fprintf(_coverage_fout, "1108\n");
#line 1773
            fflush(_coverage_fout);
#line 1776
            if (tmp___6) {
#line 1776
              fprintf(_coverage_fout, "1107\n");
#line 1776
              fflush(_coverage_fout);
#line 1778
              c___0 = *((ds___0->key)->ptr + j___0);
            }
          }
#line 1771
          fprintf(_coverage_fout, "1111\n");
#line 1771
          fflush(_coverage_fout);
#line 1780
          tmp___8 = (srv->tmp_buf)->used;
#line 1780
          ((srv->tmp_buf)->used) ++;
#line 1780
          *((srv->tmp_buf)->ptr + tmp___8) = c___0;
#line 1771
          j___0 ++;
        }
#line 1766
        fprintf(_coverage_fout, "1118\n");
#line 1766
        fflush(_coverage_fout);
#line 1782
        tmp___9 = (srv->tmp_buf)->used;
#line 1782
        ((srv->tmp_buf)->used) ++;
#line 1782
        *((srv->tmp_buf)->ptr + tmp___9) = (char )'\000';
#line 1766
        fprintf(_coverage_fout, "1119\n");
#line 1766
        fflush(_coverage_fout);
#line 1784
        if ((ds___0->value)->used) {
#line 1784
          fprintf(_coverage_fout, "1112\n");
#line 1784
          fflush(_coverage_fout);
#line 1784
          tmp___10 = (ds___0->value)->used - 1U;
        } else {
#line 1784
          fprintf(_coverage_fout, "1113\n");
#line 1784
          fflush(_coverage_fout);
#line 1784
          tmp___10 = 0U;
        }
#line 1766
        fprintf(_coverage_fout, "1120\n");
#line 1766
        fflush(_coverage_fout);
#line 1784
        if ((srv->tmp_buf)->used) {
#line 1784
          fprintf(_coverage_fout, "1114\n");
#line 1784
          fflush(_coverage_fout);
#line 1784
          tmp___11 = (srv->tmp_buf)->used - 1U;
        } else {
#line 1784
          fprintf(_coverage_fout, "1115\n");
#line 1784
          fflush(_coverage_fout);
#line 1784
          tmp___11 = 0U;
        }
        {
#line 1784
        fprintf(_coverage_fout, "1116\n");
#line 1784
        fflush(_coverage_fout);
#line 1784
        fcgi_env_add(p->fcgi_env, (char const   *)(srv->tmp_buf)->ptr, tmp___11,
                     (char const   *)(ds___0->value)->ptr, tmp___10);
        }
      }
    }
#line 1761
    fprintf(_coverage_fout, "1125\n");
#line 1761
    fflush(_coverage_fout);
#line 1761
    i ++;
  }
#line 1726
  fprintf(_coverage_fout, "1130\n");
#line 1726
  fflush(_coverage_fout);
#line 1788
  return (0);
}
}
#line 1792 "mod_fastcgi.c"
static int fcgi_create_env(server *srv , handler_ctx *hctx , size_t request_id ) 
{ FCGI_BeginRequestRecord beginRecord ;
  FCGI_Header header ;
  buffer *b ;
  char buf[32] ;
  char const   *s ;
  char b2[47] ;
  plugin_data *p ;
  fcgi_extension_host *host ;
  connection *con ;
  server_socket *srv_sock ;
  sock_addr our_addr ;
  socklen_t our_addr_len ;
  size_t tmp ;
  void const   *tmp___0 ;
  size_t tmp___1 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___2 ;
  size_t tmp___3 ;
  int tmp___4 ;
  size_t tmp___5 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  char *http_authorization ;
  data_string *ds ;
  size_t tmp___9 ;
  data_unset *tmp___10 ;
  char *auth_realm ;
  int auth_type_len ;
  size_t tmp___11 ;
  size_t tmp___12 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___16 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___20 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___28 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___32 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___33 ;
  int tmp___34 ;
  size_t tmp___35 ;
  size_t tmp___36 ;
  size_t tmp___37 ;
  size_t tmp___38 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___42 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  unsigned char const   *__s2___4 ;
  register int __result___9 ;
  int tmp___46 ;
  unsigned char const   *__s1___4 ;
  register int __result___10 ;
  int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  unsigned char const   *__s2___5 ;
  register int __result___11 ;
  int tmp___54 ;
  unsigned char const   *__s1___5 ;
  register int __result___12 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  unsigned char const   *__s2___6 ;
  register int __result___13 ;
  int tmp___58 ;
  unsigned char const   *__s1___6 ;
  register int __result___14 ;
  int tmp___59 ;
  int tmp___60 ;
  size_t tmp___61 ;
  size_t tmp___62 ;
  void *tmp___63 ;
  char *tmp___64 ;
  int tmp___65 ;
  size_t tmp___66 ;
  size_t tmp___67 ;
  size_t tmp___68 ;
  int tmp___69 ;
  size_t tmp___70 ;
  int tmp___71 ;
  size_t tmp___72 ;
  size_t tmp___73 ;
  size_t tmp___74 ;
  size_t tmp___75 ;
  int tmp___76 ;
  size_t tmp___77 ;
  size_t tmp___78 ;
  size_t tmp___79 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___80 ;
  int tmp___81 ;
  int tmp___82 ;
  unsigned char const   *__s2___7 ;
  register int __result___15 ;
  int tmp___83 ;
  unsigned char const   *__s1___7 ;
  register int __result___16 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  unsigned char const   *__s2___8 ;
  register int __result___17 ;
  int tmp___87 ;
  unsigned char const   *__s1___8 ;
  register int __result___18 ;
  int tmp___88 ;
  int tmp___89 ;
  int tmp___90 ;
  int tmp___91 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___92 ;
  int tmp___93 ;
  int tmp___94 ;
  unsigned char const   *__s2___9 ;
  register int __result___19 ;
  int tmp___95 ;
  unsigned char const   *__s1___9 ;
  register int __result___20 ;
  int tmp___96 ;
  int tmp___97 ;
  int tmp___98 ;
  unsigned char const   *__s2___10 ;
  register int __result___21 ;
  int tmp___99 ;
  unsigned char const   *__s1___10 ;
  register int __result___22 ;
  int tmp___100 ;
  int tmp___101 ;
  size_t tmp___102 ;
  size_t tmp___103 ;
  size_t tmp___104 ;
  size_t tmp___105 ;
  int tmp___106 ;
  size_t tmp___107 ;
  int tmp___108 ;
  size_t tmp___109 ;
  size_t tmp___110 ;
  chunkqueue *req_cq ;
  chunk *req_c ;
  off_t offset ;
  off_t weWant ;
  off_t tmp___111 ;
  off_t written ;
  off_t weHave ;
  chunk *c ;

  {
  {
#line 1803
  fprintf(_coverage_fout, "1131\n");
#line 1803
  fflush(_coverage_fout);
#line 1803
  p = hctx->plugin_data;
#line 1803
  fprintf(_coverage_fout, "1132\n");
#line 1803
  fflush(_coverage_fout);
#line 1804
  host = hctx->host;
#line 1803
  fprintf(_coverage_fout, "1133\n");
#line 1803
  fflush(_coverage_fout);
#line 1806
  con = hctx->remote_conn;
#line 1803
  fprintf(_coverage_fout, "1134\n");
#line 1803
  fflush(_coverage_fout);
#line 1807
  srv_sock = (server_socket *)con->srv_socket;
#line 1803
  fprintf(_coverage_fout, "1135\n");
#line 1803
  fflush(_coverage_fout);
#line 1814
  fcgi_header(& beginRecord.header, (unsigned char)1, request_id,
              (int )sizeof(beginRecord.body), (unsigned char)0);
#line 1803
  fprintf(_coverage_fout, "1136\n");
#line 1803
  fflush(_coverage_fout);
#line 1815
  beginRecord.body.roleB0 = (unsigned char )host->mode;
#line 1803
  fprintf(_coverage_fout, "1137\n");
#line 1803
  fflush(_coverage_fout);
#line 1816
  beginRecord.body.roleB1 = (unsigned char)0;
#line 1803
  fprintf(_coverage_fout, "1138\n");
#line 1803
  fflush(_coverage_fout);
#line 1817
  beginRecord.body.flags = (unsigned char)0;
#line 1803
  fprintf(_coverage_fout, "1139\n");
#line 1803
  fflush(_coverage_fout);
#line 1818
  memset((void *)(beginRecord.body.reserved), 0,
         sizeof(beginRecord.body.reserved));
#line 1803
  fprintf(_coverage_fout, "1140\n");
#line 1803
  fflush(_coverage_fout);
#line 1820
  b = chunkqueue_get_append_buffer(hctx->wb);
#line 1803
  fprintf(_coverage_fout, "1141\n");
#line 1803
  fflush(_coverage_fout);
#line 1822
  buffer_copy_memory(b, (char const   *)(& beginRecord), sizeof(beginRecord));
#line 1803
  fprintf(_coverage_fout, "1142\n");
#line 1803
  fflush(_coverage_fout);
#line 1825
  buffer_prepare_copy(p->fcgi_env, 1024U);
#line 1803
  fprintf(_coverage_fout, "1143\n");
#line 1803
  fflush(_coverage_fout);
#line 1828
  fcgi_env_add(p->fcgi_env, "SERVER_SOFTWARE", sizeof("SERVER_SOFTWARE") - 1U,
               "lighttpd/1.4.17", sizeof("lighttpd/1.4.17") - 1U);
  }
#line 1792
  fprintf(_coverage_fout, "1408\n");
#line 1792
  fflush(_coverage_fout);
#line 1832
  if ((con->server_name)->used) {
#line 1832
    fprintf(_coverage_fout, "1147\n");
#line 1832
    fflush(_coverage_fout);
#line 1833
    if ((con->server_name)->used) {
#line 1833
      fprintf(_coverage_fout, "1144\n");
#line 1833
      fflush(_coverage_fout);
#line 1833
      tmp = (con->server_name)->used - 1U;
    } else {
#line 1833
      fprintf(_coverage_fout, "1145\n");
#line 1833
      fflush(_coverage_fout);
#line 1833
      tmp = 0U;
    }
    {
#line 1833
    fprintf(_coverage_fout, "1146\n");
#line 1833
    fflush(_coverage_fout);
#line 1833
    fcgi_env_add(p->fcgi_env, "SERVER_NAME", sizeof("SERVER_NAME") - 1U,
                 (char const   *)(con->server_name)->ptr, tmp);
    }
  } else {
#line 1832
    fprintf(_coverage_fout, "1153\n");
#line 1832
    fflush(_coverage_fout);
#line 1836
    if ((int )srv_sock->addr.plain.sa_family == 10) {
#line 1836
      fprintf(_coverage_fout, "1148\n");
#line 1836
      fflush(_coverage_fout);
#line 1836
      tmp___0 = (void const   *)(& srv_sock->addr.ipv6.sin6_addr);
    } else {
#line 1836
      fprintf(_coverage_fout, "1149\n");
#line 1836
      fflush(_coverage_fout);
#line 1836
      tmp___0 = (void const   *)(& srv_sock->addr.ipv4.sin_addr);
    }
    {
#line 1836
    fprintf(_coverage_fout, "1150\n");
#line 1836
    fflush(_coverage_fout);
#line 1836
    s = inet_ntop((int )srv_sock->addr.plain.sa_family,
                  (void const   */* __restrict  */)tmp___0,
                  (char */* __restrict  */)(b2), sizeof(b2) - 1U);
#line 1836
    fprintf(_coverage_fout, "1151\n");
#line 1836
    fflush(_coverage_fout);
#line 1844
    tmp___1 = strlen(s);
#line 1836
    fprintf(_coverage_fout, "1152\n");
#line 1836
    fflush(_coverage_fout);
#line 1844
    fcgi_env_add(p->fcgi_env, "SERVER_NAME", sizeof("SERVER_NAME") - 1U, s,
                 tmp___1);
    }
  }
  {
#line 1847
  fprintf(_coverage_fout, "1154\n");
#line 1847
  fflush(_coverage_fout);
#line 1847
  fcgi_env_add(p->fcgi_env, "GATEWAY_INTERFACE",
               sizeof("GATEWAY_INTERFACE") - 1U, "CGI/1.1",
               sizeof("CGI/1.1") - 1U);
  }
#line 1792
  fprintf(_coverage_fout, "1409\n");
#line 1792
  fflush(_coverage_fout);
#line 1851
  if (srv_sock->addr.plain.sa_family) {
#line 1851
    fprintf(_coverage_fout, "1155\n");
#line 1851
    fflush(_coverage_fout);
#line 1851
    tmp___2 = (int )srv_sock->addr.ipv6.sin6_port;
  } else {
#line 1851
    fprintf(_coverage_fout, "1156\n");
#line 1851
    fflush(_coverage_fout);
#line 1851
    tmp___2 = (int )srv_sock->addr.ipv4.sin_port;
  }
  {
#line 1851
  fprintf(_coverage_fout, "1157\n");
#line 1851
  fflush(_coverage_fout);
#line 1851
  __x = (unsigned short )tmp___2;
#line 1851
  fprintf(_coverage_fout, "1158\n");
#line 1851
  fflush(_coverage_fout);
#line 1851
  __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
#line 1851
  fprintf(_coverage_fout, "1159\n");
#line 1851
  fflush(_coverage_fout);
#line 1851
  LI_ltostr(buf, (long )__v);
#line 1851
  fprintf(_coverage_fout, "1160\n");
#line 1851
  fflush(_coverage_fout);
#line 1857
  tmp___3 = strlen((char const   *)(buf));
#line 1851
  fprintf(_coverage_fout, "1161\n");
#line 1851
  fflush(_coverage_fout);
#line 1857
  fcgi_env_add(p->fcgi_env, "SERVER_PORT", sizeof("SERVER_PORT") - 1U,
               (char const   *)(buf), tmp___3);
#line 1851
  fprintf(_coverage_fout, "1162\n");
#line 1851
  fflush(_coverage_fout);
#line 1860
  our_addr_len = sizeof(our_addr);
#line 1851
  fprintf(_coverage_fout, "1163\n");
#line 1851
  fflush(_coverage_fout);
#line 1862
  tmp___4 = getsockname(con->fd,
                        (struct sockaddr */* __restrict  */)(& our_addr.plain),
                        (socklen_t */* __restrict  */)(& our_addr_len));
  }
#line 1792
  fprintf(_coverage_fout, "1410\n");
#line 1792
  fflush(_coverage_fout);
#line 1862
  if (-1 == tmp___4) {
    {
#line 1863
    fprintf(_coverage_fout, "1164\n");
#line 1863
    fflush(_coverage_fout);
#line 1863
    s = inet_ntop_cache_get_ip(srv, & srv_sock->addr);
    }
  } else {
    {
#line 1865
    fprintf(_coverage_fout, "1165\n");
#line 1865
    fflush(_coverage_fout);
#line 1865
    s = inet_ntop_cache_get_ip(srv, & our_addr);
    }
  }
  {
#line 1867
  fprintf(_coverage_fout, "1166\n");
#line 1867
  fflush(_coverage_fout);
#line 1867
  tmp___5 = strlen(s);
#line 1867
  fprintf(_coverage_fout, "1167\n");
#line 1867
  fflush(_coverage_fout);
#line 1867
  fcgi_env_add(p->fcgi_env, "SERVER_ADDR", sizeof("SERVER_ADDR") - 1U, s,
               tmp___5);
  }
#line 1792
  fprintf(_coverage_fout, "1411\n");
#line 1792
  fflush(_coverage_fout);
#line 1871
  if (con->dst_addr.plain.sa_family) {
#line 1871
    fprintf(_coverage_fout, "1168\n");
#line 1871
    fflush(_coverage_fout);
#line 1871
    tmp___6 = (int )con->dst_addr.ipv6.sin6_port;
  } else {
#line 1871
    fprintf(_coverage_fout, "1169\n");
#line 1871
    fflush(_coverage_fout);
#line 1871
    tmp___6 = (int )con->dst_addr.ipv4.sin_port;
  }
  {
#line 1871
  fprintf(_coverage_fout, "1170\n");
#line 1871
  fflush(_coverage_fout);
#line 1871
  __x___0 = (unsigned short )tmp___6;
#line 1871
  fprintf(_coverage_fout, "1171\n");
#line 1871
  fflush(_coverage_fout);
#line 1871
  __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
#line 1871
  fprintf(_coverage_fout, "1172\n");
#line 1871
  fflush(_coverage_fout);
#line 1871
  LI_ltostr(buf, (long )__v___0);
#line 1871
  fprintf(_coverage_fout, "1173\n");
#line 1871
  fflush(_coverage_fout);
#line 1877
  tmp___7 = strlen((char const   *)(buf));
#line 1871
  fprintf(_coverage_fout, "1174\n");
#line 1871
  fflush(_coverage_fout);
#line 1877
  fcgi_env_add(p->fcgi_env, "REMOTE_PORT", sizeof("REMOTE_PORT") - 1U,
               (char const   *)(buf), tmp___7);
#line 1871
  fprintf(_coverage_fout, "1175\n");
#line 1871
  fflush(_coverage_fout);
#line 1879
  s = inet_ntop_cache_get_ip(srv, & con->dst_addr);
#line 1871
  fprintf(_coverage_fout, "1176\n");
#line 1871
  fflush(_coverage_fout);
#line 1880
  tmp___8 = strlen(s);
#line 1871
  fprintf(_coverage_fout, "1177\n");
#line 1871
  fflush(_coverage_fout);
#line 1880
  fcgi_env_add(p->fcgi_env, "REMOTE_ADDR", sizeof("REMOTE_ADDR") - 1U, s,
               tmp___8);
#line 1871
  fprintf(_coverage_fout, "1178\n");
#line 1871
  fflush(_coverage_fout);
#line 1882
  tmp___65 = buffer_is_empty(con->authed_user);
  }
#line 1792
  fprintf(_coverage_fout, "1412\n");
#line 1792
  fflush(_coverage_fout);
#line 1882
  if (! tmp___65) {
#line 1882
    fprintf(_coverage_fout, "1237\n");
#line 1882
    fflush(_coverage_fout);
#line 1893
    http_authorization = (char *)((void *)0);
#line 1882
    fprintf(_coverage_fout, "1238\n");
#line 1882
    fflush(_coverage_fout);
#line 1896
    if ((con->authed_user)->used) {
#line 1896
      fprintf(_coverage_fout, "1179\n");
#line 1896
      fflush(_coverage_fout);
#line 1896
      tmp___9 = (con->authed_user)->used - 1U;
    } else {
#line 1896
      fprintf(_coverage_fout, "1180\n");
#line 1896
      fflush(_coverage_fout);
#line 1896
      tmp___9 = 0U;
    }
    {
#line 1896
    fprintf(_coverage_fout, "1181\n");
#line 1896
    fflush(_coverage_fout);
#line 1896
    fcgi_env_add(p->fcgi_env, "REMOTE_USER", sizeof("REMOTE_USER") - 1U,
                 (char const   *)(con->authed_user)->ptr, tmp___9);
#line 1896
    fprintf(_coverage_fout, "1182\n");
#line 1896
    fflush(_coverage_fout);
#line 1898
    tmp___10 = array_get_element(con->request.headers, "Authorization");
#line 1896
    fprintf(_coverage_fout, "1183\n");
#line 1896
    fflush(_coverage_fout);
#line 1898
    ds = (data_string *)tmp___10;
    }
#line 1882
    fprintf(_coverage_fout, "1239\n");
#line 1882
    fflush(_coverage_fout);
#line 1898
    if ((unsigned int )((void *)0) != (unsigned int )ds) {
#line 1898
      fprintf(_coverage_fout, "1184\n");
#line 1898
      fflush(_coverage_fout);
#line 1899
      http_authorization = (ds->value)->ptr;
    }
#line 1882
    fprintf(_coverage_fout, "1240\n");
#line 1882
    fflush(_coverage_fout);
#line 1902
    if (ds) {
#line 1902
      fprintf(_coverage_fout, "1236\n");
#line 1902
      fflush(_coverage_fout);
#line 1902
      if (ds->value) {
#line 1902
        fprintf(_coverage_fout, "1235\n");
#line 1902
        fflush(_coverage_fout);
#line 1902
        if ((ds->value)->used) {
          {
#line 1904
          fprintf(_coverage_fout, "1185\n");
#line 1904
          fflush(_coverage_fout);
#line 1904
          tmp___64 = __builtin_strchr(http_authorization, ' ');
#line 1904
          fprintf(_coverage_fout, "1186\n");
#line 1904
          fflush(_coverage_fout);
#line 1904
          auth_realm = tmp___64;
          }
#line 1902
          fprintf(_coverage_fout, "1234\n");
#line 1902
          fflush(_coverage_fout);
#line 1904
          if ((unsigned int )((void *)0) != (unsigned int )auth_realm) {
#line 1904
            fprintf(_coverage_fout, "1232\n");
#line 1904
            fflush(_coverage_fout);
#line 1905
            auth_type_len = auth_realm - http_authorization;
#line 1904
            fprintf(_coverage_fout, "1233\n");
#line 1904
            fflush(_coverage_fout);
#line 1906
            if (auth_type_len == 5) {
#line 1906
              fprintf(_coverage_fout, "1207\n");
#line 1906
              fflush(_coverage_fout);
#line 1906
              if (0) {
#line 1906
                fprintf(_coverage_fout, "1203\n");
#line 1906
                fflush(_coverage_fout);
#line 1906
                if (0) {
                  {
#line 1906
                  fprintf(_coverage_fout, "1187\n");
#line 1906
                  fflush(_coverage_fout);
#line 1906
                  __s1_len___2 = strlen((char const   *)http_authorization);
#line 1906
                  fprintf(_coverage_fout, "1188\n");
#line 1906
                  fflush(_coverage_fout);
#line 1906
                  __s2_len___2 = strlen("Basic");
                  }
#line 1906
                  fprintf(_coverage_fout, "1199\n");
#line 1906
                  fflush(_coverage_fout);
#line 1906
                  if (! ((unsigned int )((void const   *)(http_authorization + 1)) - (unsigned int )((void const   *)http_authorization) == 1U)) {
                    goto _L___6;
                  } else {
#line 1906
                    fprintf(_coverage_fout, "1195\n");
#line 1906
                    fflush(_coverage_fout);
#line 1906
                    if (__s1_len___2 >= 4U) {
#line 1906
                      fprintf(_coverage_fout, "1193\n");
#line 1906
                      fflush(_coverage_fout);
                      _L___6: 
#line 1906
                      if (! ((unsigned int )((void const   *)("Basic" + 1)) - (unsigned int )((void const   *)"Basic") == 1U)) {
#line 1906
                        fprintf(_coverage_fout, "1189\n");
#line 1906
                        fflush(_coverage_fout);
#line 1906
                        tmp___60 = 1;
                      } else {
#line 1906
                        fprintf(_coverage_fout, "1192\n");
#line 1906
                        fflush(_coverage_fout);
#line 1906
                        if (__s2_len___2 >= 4U) {
#line 1906
                          fprintf(_coverage_fout, "1190\n");
#line 1906
                          fflush(_coverage_fout);
#line 1906
                          tmp___60 = 1;
                        } else {
#line 1906
                          fprintf(_coverage_fout, "1191\n");
#line 1906
                          fflush(_coverage_fout);
#line 1906
                          tmp___60 = 0;
                        }
                      }
                    } else {
#line 1906
                      fprintf(_coverage_fout, "1194\n");
#line 1906
                      fflush(_coverage_fout);
#line 1906
                      tmp___60 = 0;
                    }
                  }
#line 1906
                  fprintf(_coverage_fout, "1200\n");
#line 1906
                  fflush(_coverage_fout);
#line 1906
                  if (tmp___60) {
                    {
#line 1906
                    fprintf(_coverage_fout, "1196\n");
#line 1906
                    fflush(_coverage_fout);
#line 1906
                    tmp___56 = __builtin_strcmp((char const   *)http_authorization,
                                                "Basic");
                    }
                  } else {
                    {
#line 1906
                    fprintf(_coverage_fout, "1197\n");
#line 1906
                    fflush(_coverage_fout);
#line 1906
                    tmp___59 = __builtin_strcmp((char const   *)http_authorization,
                                                "Basic");
#line 1906
                    fprintf(_coverage_fout, "1198\n");
#line 1906
                    fflush(_coverage_fout);
#line 1906
                    tmp___56 = tmp___59;
                    }
                  }
                } else {
                  {
#line 1906
                  fprintf(_coverage_fout, "1201\n");
#line 1906
                  fflush(_coverage_fout);
#line 1906
                  tmp___59 = __builtin_strcmp((char const   *)http_authorization,
                                              "Basic");
#line 1906
                  fprintf(_coverage_fout, "1202\n");
#line 1906
                  fflush(_coverage_fout);
#line 1906
                  tmp___56 = tmp___59;
                  }
                }
#line 1906
                fprintf(_coverage_fout, "1204\n");
#line 1906
                fflush(_coverage_fout);
#line 1906
                tmp___50 = tmp___56;
              } else {
                {
#line 1906
                fprintf(_coverage_fout, "1205\n");
#line 1906
                fflush(_coverage_fout);
#line 1906
                tmp___50 = strncmp((char const   *)http_authorization, "Basic",
                                   (unsigned int )auth_type_len);
                }
              }
#line 1906
              fprintf(_coverage_fout, "1208\n");
#line 1906
              fflush(_coverage_fout);
#line 1906
              if (0 == tmp___50) {
                {
#line 1907
                fprintf(_coverage_fout, "1206\n");
#line 1907
                fflush(_coverage_fout);
#line 1907
                fcgi_env_add(p->fcgi_env, "AUTH_TYPE", sizeof("AUTH_TYPE") - 1U,
                             "Basic", sizeof("Basic") - 1U);
                }
              } else {
                goto _L___7;
              }
            } else {
#line 1906
              fprintf(_coverage_fout, "1231\n");
#line 1906
              fflush(_coverage_fout);
              _L___7: 
#line 1908
              if (auth_type_len == 6) {
#line 1908
                fprintf(_coverage_fout, "1229\n");
#line 1908
                fflush(_coverage_fout);
#line 1908
                if (0) {
#line 1908
                  fprintf(_coverage_fout, "1225\n");
#line 1908
                  fflush(_coverage_fout);
#line 1908
                  if (0) {
                    {
#line 1908
                    fprintf(_coverage_fout, "1209\n");
#line 1908
                    fflush(_coverage_fout);
#line 1908
                    __s1_len___0 = strlen((char const   *)http_authorization);
#line 1908
                    fprintf(_coverage_fout, "1210\n");
#line 1908
                    fflush(_coverage_fout);
#line 1908
                    __s2_len___0 = strlen("Digest");
                    }
#line 1908
                    fprintf(_coverage_fout, "1221\n");
#line 1908
                    fflush(_coverage_fout);
#line 1908
                    if (! ((unsigned int )((void const   *)(http_authorization + 1)) - (unsigned int )((void const   *)http_authorization) == 1U)) {
                      goto _L___2;
                    } else {
#line 1908
                      fprintf(_coverage_fout, "1217\n");
#line 1908
                      fflush(_coverage_fout);
#line 1908
                      if (__s1_len___0 >= 4U) {
#line 1908
                        fprintf(_coverage_fout, "1215\n");
#line 1908
                        fflush(_coverage_fout);
                        _L___2: 
#line 1908
                        if (! ((unsigned int )((void const   *)("Digest" + 1)) - (unsigned int )((void const   *)"Digest") == 1U)) {
#line 1908
                          fprintf(_coverage_fout, "1211\n");
#line 1908
                          fflush(_coverage_fout);
#line 1908
                          tmp___34 = 1;
                        } else {
#line 1908
                          fprintf(_coverage_fout, "1214\n");
#line 1908
                          fflush(_coverage_fout);
#line 1908
                          if (__s2_len___0 >= 4U) {
#line 1908
                            fprintf(_coverage_fout, "1212\n");
#line 1908
                            fflush(_coverage_fout);
#line 1908
                            tmp___34 = 1;
                          } else {
#line 1908
                            fprintf(_coverage_fout, "1213\n");
#line 1908
                            fflush(_coverage_fout);
#line 1908
                            tmp___34 = 0;
                          }
                        }
                      } else {
#line 1908
                        fprintf(_coverage_fout, "1216\n");
#line 1908
                        fflush(_coverage_fout);
#line 1908
                        tmp___34 = 0;
                      }
                    }
#line 1908
                    fprintf(_coverage_fout, "1222\n");
#line 1908
                    fflush(_coverage_fout);
#line 1908
                    if (tmp___34) {
                      {
#line 1908
                      fprintf(_coverage_fout, "1218\n");
#line 1908
                      fflush(_coverage_fout);
#line 1908
                      tmp___30 = __builtin_strcmp((char const   *)http_authorization,
                                                  "Digest");
                      }
                    } else {
                      {
#line 1908
                      fprintf(_coverage_fout, "1219\n");
#line 1908
                      fflush(_coverage_fout);
#line 1908
                      tmp___33 = __builtin_strcmp((char const   *)http_authorization,
                                                  "Digest");
#line 1908
                      fprintf(_coverage_fout, "1220\n");
#line 1908
                      fflush(_coverage_fout);
#line 1908
                      tmp___30 = tmp___33;
                      }
                    }
                  } else {
                    {
#line 1908
                    fprintf(_coverage_fout, "1223\n");
#line 1908
                    fflush(_coverage_fout);
#line 1908
                    tmp___33 = __builtin_strcmp((char const   *)http_authorization,
                                                "Digest");
#line 1908
                    fprintf(_coverage_fout, "1224\n");
#line 1908
                    fflush(_coverage_fout);
#line 1908
                    tmp___30 = tmp___33;
                    }
                  }
#line 1908
                  fprintf(_coverage_fout, "1226\n");
#line 1908
                  fflush(_coverage_fout);
#line 1908
                  tmp___24 = tmp___30;
                } else {
                  {
#line 1908
                  fprintf(_coverage_fout, "1227\n");
#line 1908
                  fflush(_coverage_fout);
#line 1908
                  tmp___24 = strncmp((char const   *)http_authorization,
                                     "Digest", (unsigned int )auth_type_len);
                  }
                }
#line 1908
                fprintf(_coverage_fout, "1230\n");
#line 1908
                fflush(_coverage_fout);
#line 1908
                if (0 == tmp___24) {
                  {
#line 1909
                  fprintf(_coverage_fout, "1228\n");
#line 1909
                  fflush(_coverage_fout);
#line 1909
                  fcgi_env_add(p->fcgi_env, "AUTH_TYPE",
                               sizeof("AUTH_TYPE") - 1U, "Digest",
                               sizeof("Digest") - 1U);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
#line 1792
  fprintf(_coverage_fout, "1413\n");
#line 1792
  fflush(_coverage_fout);
#line 1915
  if (con->request.content_length > 0U) {
#line 1915
    fprintf(_coverage_fout, "1244\n");
#line 1915
    fflush(_coverage_fout);
#line 1915
    if ((int )host->mode != 2) {
      {
#line 1919
      fprintf(_coverage_fout, "1241\n");
#line 1919
      fflush(_coverage_fout);
#line 1919
      LI_ltostr(buf, (long )con->request.content_length);
#line 1919
      fprintf(_coverage_fout, "1242\n");
#line 1919
      fflush(_coverage_fout);
#line 1920
      tmp___66 = strlen((char const   *)(buf));
#line 1919
      fprintf(_coverage_fout, "1243\n");
#line 1919
      fflush(_coverage_fout);
#line 1920
      fcgi_env_add(p->fcgi_env, "CONTENT_LENGTH", sizeof("CONTENT_LENGTH") - 1U,
                   (char const   *)(buf), tmp___66);
      }
    }
  }
#line 1792
  fprintf(_coverage_fout, "1414\n");
#line 1792
  fflush(_coverage_fout);
#line 1923
  if ((int )host->mode != 2) {
#line 1923
    fprintf(_coverage_fout, "1263\n");
#line 1923
    fflush(_coverage_fout);
#line 1931
    if ((con->uri.path)->used) {
#line 1931
      fprintf(_coverage_fout, "1245\n");
#line 1931
      fflush(_coverage_fout);
#line 1931
      tmp___67 = (con->uri.path)->used - 1U;
    } else {
#line 1931
      fprintf(_coverage_fout, "1246\n");
#line 1931
      fflush(_coverage_fout);
#line 1931
      tmp___67 = 0U;
    }
    {
#line 1931
    fprintf(_coverage_fout, "1247\n");
#line 1931
    fflush(_coverage_fout);
#line 1931
    fcgi_env_add(p->fcgi_env, "SCRIPT_NAME", sizeof("SCRIPT_NAME") - 1U,
                 (char const   *)(con->uri.path)->ptr, tmp___67);
#line 1931
    fprintf(_coverage_fout, "1248\n");
#line 1931
    fflush(_coverage_fout);
#line 1933
    tmp___71 = buffer_is_empty(con->request.pathinfo);
    }
#line 1923
    fprintf(_coverage_fout, "1264\n");
#line 1923
    fflush(_coverage_fout);
#line 1933
    if (tmp___71) {
      {
#line 1946
      fprintf(_coverage_fout, "1249\n");
#line 1946
      fflush(_coverage_fout);
#line 1946
      fcgi_env_add(p->fcgi_env, "PATH_INFO", sizeof("PATH_INFO") - 1U, "",
                   sizeof("") - 1U);
      }
    } else {
#line 1933
      fprintf(_coverage_fout, "1260\n");
#line 1933
      fflush(_coverage_fout);
#line 1934
      if ((con->request.pathinfo)->used) {
#line 1934
        fprintf(_coverage_fout, "1250\n");
#line 1934
        fflush(_coverage_fout);
#line 1934
        tmp___68 = (con->request.pathinfo)->used - 1U;
      } else {
#line 1934
        fprintf(_coverage_fout, "1251\n");
#line 1934
        fflush(_coverage_fout);
#line 1934
        tmp___68 = 0U;
      }
      {
#line 1934
      fprintf(_coverage_fout, "1252\n");
#line 1934
      fflush(_coverage_fout);
#line 1934
      fcgi_env_add(p->fcgi_env, "PATH_INFO", sizeof("PATH_INFO") - 1U,
                   (char const   *)(con->request.pathinfo)->ptr, tmp___68);
#line 1934
      fprintf(_coverage_fout, "1253\n");
#line 1934
      fflush(_coverage_fout);
#line 1938
      tmp___69 = buffer_is_empty(host->docroot);
      }
#line 1933
      fprintf(_coverage_fout, "1261\n");
#line 1933
      fflush(_coverage_fout);
#line 1938
      if (tmp___69) {
        {
#line 1941
        fprintf(_coverage_fout, "1254\n");
#line 1941
        fflush(_coverage_fout);
#line 1941
        buffer_copy_string_buffer(p->path,
                                  (buffer const   *)con->physical.doc_root);
        }
      } else {
        {
#line 1939
        fprintf(_coverage_fout, "1255\n");
#line 1939
        fflush(_coverage_fout);
#line 1939
        buffer_copy_string_buffer(p->path, (buffer const   *)host->docroot);
        }
      }
      {
#line 1943
      fprintf(_coverage_fout, "1256\n");
#line 1943
      fflush(_coverage_fout);
#line 1943
      buffer_append_string_buffer(p->path,
                                  (buffer const   *)con->request.pathinfo);
      }
#line 1933
      fprintf(_coverage_fout, "1262\n");
#line 1933
      fflush(_coverage_fout);
#line 1944
      if ((p->path)->used) {
#line 1944
        fprintf(_coverage_fout, "1257\n");
#line 1944
        fflush(_coverage_fout);
#line 1944
        tmp___70 = (p->path)->used - 1U;
      } else {
#line 1944
        fprintf(_coverage_fout, "1258\n");
#line 1944
        fflush(_coverage_fout);
#line 1944
        tmp___70 = 0U;
      }
      {
#line 1944
      fprintf(_coverage_fout, "1259\n");
#line 1944
      fflush(_coverage_fout);
#line 1944
      fcgi_env_add(p->fcgi_env, "PATH_TRANSLATED",
                   sizeof("PATH_TRANSLATED") - 1U,
                   (char const   *)(p->path)->ptr, tmp___70);
      }
    }
  }
  {
#line 1958
  fprintf(_coverage_fout, "1265\n");
#line 1958
  fflush(_coverage_fout);
#line 1958
  tmp___76 = buffer_is_empty(host->docroot);
  }
#line 1792
  fprintf(_coverage_fout, "1415\n");
#line 1792
  fflush(_coverage_fout);
#line 1958
  if (tmp___76) {
    {
#line 1970
    fprintf(_coverage_fout, "1266\n");
#line 1970
    fflush(_coverage_fout);
#line 1970
    buffer_copy_string_buffer(p->path, (buffer const   *)con->physical.path);
    }
#line 1958
    fprintf(_coverage_fout, "1274\n");
#line 1958
    fflush(_coverage_fout);
#line 1976
    if (host->break_scriptfilename_for_php) {
      {
#line 1977
      fprintf(_coverage_fout, "1267\n");
#line 1977
      fflush(_coverage_fout);
#line 1977
      buffer_append_string_buffer(p->path,
                                  (buffer const   *)con->request.pathinfo);
      }
    }
#line 1958
    fprintf(_coverage_fout, "1275\n");
#line 1958
    fflush(_coverage_fout);
#line 1980
    if ((p->path)->used) {
#line 1980
      fprintf(_coverage_fout, "1268\n");
#line 1980
      fflush(_coverage_fout);
#line 1980
      tmp___74 = (p->path)->used - 1U;
    } else {
#line 1980
      fprintf(_coverage_fout, "1269\n");
#line 1980
      fflush(_coverage_fout);
#line 1980
      tmp___74 = 0U;
    }
    {
#line 1980
    fprintf(_coverage_fout, "1270\n");
#line 1980
    fflush(_coverage_fout);
#line 1980
    fcgi_env_add(p->fcgi_env, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME") - 1U,
                 (char const   *)(p->path)->ptr, tmp___74);
    }
#line 1958
    fprintf(_coverage_fout, "1276\n");
#line 1958
    fflush(_coverage_fout);
#line 1981
    if ((con->physical.doc_root)->used) {
#line 1981
      fprintf(_coverage_fout, "1271\n");
#line 1981
      fflush(_coverage_fout);
#line 1981
      tmp___75 = (con->physical.doc_root)->used - 1U;
    } else {
#line 1981
      fprintf(_coverage_fout, "1272\n");
#line 1981
      fflush(_coverage_fout);
#line 1981
      tmp___75 = 0U;
    }
    {
#line 1981
    fprintf(_coverage_fout, "1273\n");
#line 1981
    fflush(_coverage_fout);
#line 1981
    fcgi_env_add(p->fcgi_env, "DOCUMENT_ROOT", sizeof("DOCUMENT_ROOT") - 1U,
                 (char const   *)(con->physical.doc_root)->ptr, tmp___75);
    }
  } else {
    {
#line 1964
    fprintf(_coverage_fout, "1277\n");
#line 1964
    fflush(_coverage_fout);
#line 1964
    buffer_copy_string_buffer(p->path, (buffer const   *)host->docroot);
#line 1964
    fprintf(_coverage_fout, "1278\n");
#line 1964
    fflush(_coverage_fout);
#line 1965
    buffer_append_string_buffer(p->path, (buffer const   *)con->uri.path);
    }
#line 1958
    fprintf(_coverage_fout, "1285\n");
#line 1958
    fflush(_coverage_fout);
#line 1967
    if ((p->path)->used) {
#line 1967
      fprintf(_coverage_fout, "1279\n");
#line 1967
      fflush(_coverage_fout);
#line 1967
      tmp___72 = (p->path)->used - 1U;
    } else {
#line 1967
      fprintf(_coverage_fout, "1280\n");
#line 1967
      fflush(_coverage_fout);
#line 1967
      tmp___72 = 0U;
    }
    {
#line 1967
    fprintf(_coverage_fout, "1281\n");
#line 1967
    fflush(_coverage_fout);
#line 1967
    fcgi_env_add(p->fcgi_env, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME") - 1U,
                 (char const   *)(p->path)->ptr, tmp___72);
    }
#line 1958
    fprintf(_coverage_fout, "1286\n");
#line 1958
    fflush(_coverage_fout);
#line 1968
    if ((host->docroot)->used) {
#line 1968
      fprintf(_coverage_fout, "1282\n");
#line 1968
      fflush(_coverage_fout);
#line 1968
      tmp___73 = (host->docroot)->used - 1U;
    } else {
#line 1968
      fprintf(_coverage_fout, "1283\n");
#line 1968
      fflush(_coverage_fout);
#line 1968
      tmp___73 = 0U;
    }
    {
#line 1968
    fprintf(_coverage_fout, "1284\n");
#line 1968
    fflush(_coverage_fout);
#line 1968
    fcgi_env_add(p->fcgi_env, "DOCUMENT_ROOT", sizeof("DOCUMENT_ROOT") - 1U,
                 (char const   *)(host->docroot)->ptr, tmp___73);
    }
  }
#line 1792
  fprintf(_coverage_fout, "1416\n");
#line 1792
  fflush(_coverage_fout);
#line 1984
  if ((host->strip_request_uri)->used > 1U) {
#line 1984
    fprintf(_coverage_fout, "1314\n");
#line 1984
    fflush(_coverage_fout);
#line 1994
    if (47 != (int )*((host->strip_request_uri)->ptr + ((host->strip_request_uri)->used - 2U))) {
      {
#line 1996
      fprintf(_coverage_fout, "1287\n");
#line 1996
      fflush(_coverage_fout);
#line 1996
      buffer_append_string(host->strip_request_uri, "/");
      }
    }
#line 1984
    fprintf(_coverage_fout, "1315\n");
#line 1984
    fflush(_coverage_fout);
#line 2000
    if ((con->request.orig_uri)->used >= (host->strip_request_uri)->used) {
#line 2000
      fprintf(_coverage_fout, "1308\n");
#line 2000
      fflush(_coverage_fout);
#line 2000
      if (0) {
#line 2000
        fprintf(_coverage_fout, "1304\n");
#line 2000
        fflush(_coverage_fout);
#line 2000
        if (0) {
          {
#line 2000
          fprintf(_coverage_fout, "1288\n");
#line 2000
          fflush(_coverage_fout);
#line 2000
          __s1_len___4 = strlen((char const   *)(con->request.orig_uri)->ptr);
#line 2000
          fprintf(_coverage_fout, "1289\n");
#line 2000
          fflush(_coverage_fout);
#line 2000
          __s2_len___4 = strlen((char const   *)(host->strip_request_uri)->ptr);
          }
#line 2000
          fprintf(_coverage_fout, "1300\n");
#line 2000
          fflush(_coverage_fout);
#line 2000
          if (! ((unsigned int )((void const   *)((con->request.orig_uri)->ptr + 1)) - (unsigned int )((void const   *)(con->request.orig_uri)->ptr) == 1U)) {
            goto _L___11;
          } else {
#line 2000
            fprintf(_coverage_fout, "1296\n");
#line 2000
            fflush(_coverage_fout);
#line 2000
            if (__s1_len___4 >= 4U) {
#line 2000
              fprintf(_coverage_fout, "1294\n");
#line 2000
              fflush(_coverage_fout);
              _L___11: 
#line 2000
              if (! ((unsigned int )((void const   *)((host->strip_request_uri)->ptr + 1)) - (unsigned int )((void const   *)(host->strip_request_uri)->ptr) == 1U)) {
#line 2000
                fprintf(_coverage_fout, "1290\n");
#line 2000
                fflush(_coverage_fout);
#line 2000
                tmp___101 = 1;
              } else {
#line 2000
                fprintf(_coverage_fout, "1293\n");
#line 2000
                fflush(_coverage_fout);
#line 2000
                if (__s2_len___4 >= 4U) {
#line 2000
                  fprintf(_coverage_fout, "1291\n");
#line 2000
                  fflush(_coverage_fout);
#line 2000
                  tmp___101 = 1;
                } else {
#line 2000
                  fprintf(_coverage_fout, "1292\n");
#line 2000
                  fflush(_coverage_fout);
#line 2000
                  tmp___101 = 0;
                }
              }
            } else {
#line 2000
              fprintf(_coverage_fout, "1295\n");
#line 2000
              fflush(_coverage_fout);
#line 2000
              tmp___101 = 0;
            }
          }
#line 2000
          fprintf(_coverage_fout, "1301\n");
#line 2000
          fflush(_coverage_fout);
#line 2000
          if (tmp___101) {
            {
#line 2000
            fprintf(_coverage_fout, "1297\n");
#line 2000
            fflush(_coverage_fout);
#line 2000
            tmp___97 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                        (char const   *)(host->strip_request_uri)->ptr);
            }
          } else {
            {
#line 2000
            fprintf(_coverage_fout, "1298\n");
#line 2000
            fflush(_coverage_fout);
#line 2000
            tmp___100 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                         (char const   *)(host->strip_request_uri)->ptr);
#line 2000
            fprintf(_coverage_fout, "1299\n");
#line 2000
            fflush(_coverage_fout);
#line 2000
            tmp___97 = tmp___100;
            }
          }
        } else {
          {
#line 2000
          fprintf(_coverage_fout, "1302\n");
#line 2000
          fflush(_coverage_fout);
#line 2000
          tmp___100 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                       (char const   *)(host->strip_request_uri)->ptr);
#line 2000
          fprintf(_coverage_fout, "1303\n");
#line 2000
          fflush(_coverage_fout);
#line 2000
          tmp___97 = tmp___100;
          }
        }
#line 2000
        fprintf(_coverage_fout, "1305\n");
#line 2000
        fflush(_coverage_fout);
#line 2000
        tmp___91 = tmp___97;
      } else {
        {
#line 2000
        fprintf(_coverage_fout, "1306\n");
#line 2000
        fflush(_coverage_fout);
#line 2000
        tmp___91 = strncmp((char const   *)(con->request.orig_uri)->ptr,
                           (char const   *)(host->strip_request_uri)->ptr,
                           (host->strip_request_uri)->used - 1U);
        }
      }
#line 2000
      fprintf(_coverage_fout, "1309\n");
#line 2000
      fflush(_coverage_fout);
#line 2000
      if (0 == tmp___91) {
        {
#line 2003
        fprintf(_coverage_fout, "1307\n");
#line 2003
        fflush(_coverage_fout);
#line 2003
        fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U,
                     (char const   *)((con->request.orig_uri)->ptr + ((host->strip_request_uri)->used - 2U)),
                     (con->request.orig_uri)->used - ((host->strip_request_uri)->used - 2U));
        }
      } else {
        goto _L___12;
      }
    } else {
#line 2000
      fprintf(_coverage_fout, "1313\n");
#line 2000
      fflush(_coverage_fout);
      _L___12: 
#line 2007
      if ((con->request.orig_uri)->used) {
#line 2007
        fprintf(_coverage_fout, "1310\n");
#line 2007
        fflush(_coverage_fout);
#line 2007
        tmp___77 = (con->request.orig_uri)->used - 1U;
      } else {
#line 2007
        fprintf(_coverage_fout, "1311\n");
#line 2007
        fflush(_coverage_fout);
#line 2007
        tmp___77 = 0U;
      }
      {
#line 2007
      fprintf(_coverage_fout, "1312\n");
#line 2007
      fflush(_coverage_fout);
#line 2007
      fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U,
                   (char const   *)(con->request.orig_uri)->ptr, tmp___77);
      }
    }
  } else {
#line 1984
    fprintf(_coverage_fout, "1319\n");
#line 1984
    fflush(_coverage_fout);
#line 2010
    if ((con->request.orig_uri)->used) {
#line 2010
      fprintf(_coverage_fout, "1316\n");
#line 2010
      fflush(_coverage_fout);
#line 2010
      tmp___104 = (con->request.orig_uri)->used - 1U;
    } else {
#line 2010
      fprintf(_coverage_fout, "1317\n");
#line 2010
      fflush(_coverage_fout);
#line 2010
      tmp___104 = 0U;
    }
    {
#line 2010
    fprintf(_coverage_fout, "1318\n");
#line 2010
    fflush(_coverage_fout);
#line 2010
    fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U,
                 (char const   *)(con->request.orig_uri)->ptr, tmp___104);
    }
  }
  {
#line 2012
  fprintf(_coverage_fout, "1320\n");
#line 2012
  fflush(_coverage_fout);
#line 2012
  tmp___106 = buffer_is_equal(con->request.uri, con->request.orig_uri);
  }
#line 1792
  fprintf(_coverage_fout, "1417\n");
#line 1792
  fflush(_coverage_fout);
#line 2012
  if (! tmp___106) {
#line 2012
    fprintf(_coverage_fout, "1324\n");
#line 2012
    fflush(_coverage_fout);
#line 2013
    if ((con->request.uri)->used) {
#line 2013
      fprintf(_coverage_fout, "1321\n");
#line 2013
      fflush(_coverage_fout);
#line 2013
      tmp___105 = (con->request.uri)->used - 1U;
    } else {
#line 2013
      fprintf(_coverage_fout, "1322\n");
#line 2013
      fflush(_coverage_fout);
#line 2013
      tmp___105 = 0U;
    }
    {
#line 2013
    fprintf(_coverage_fout, "1323\n");
#line 2013
    fflush(_coverage_fout);
#line 2013
    fcgi_env_add(p->fcgi_env, "REDIRECT_URI", sizeof("REDIRECT_URI") - 1U,
                 (char const   *)(con->request.uri)->ptr, tmp___105);
    }
  }
  {
#line 2015
  fprintf(_coverage_fout, "1325\n");
#line 2015
  fflush(_coverage_fout);
#line 2015
  tmp___108 = buffer_is_empty(con->uri.query);
  }
#line 1792
  fprintf(_coverage_fout, "1418\n");
#line 1792
  fflush(_coverage_fout);
#line 2015
  if (tmp___108) {
    {
#line 2018
    fprintf(_coverage_fout, "1326\n");
#line 2018
    fflush(_coverage_fout);
#line 2018
    fcgi_env_add(p->fcgi_env, "QUERY_STRING", sizeof("QUERY_STRING") - 1U, "",
                 sizeof("") - 1U);
    }
  } else {
#line 2015
    fprintf(_coverage_fout, "1330\n");
#line 2015
    fflush(_coverage_fout);
#line 2016
    if ((con->uri.query)->used) {
#line 2016
      fprintf(_coverage_fout, "1327\n");
#line 2016
      fflush(_coverage_fout);
#line 2016
      tmp___107 = (con->uri.query)->used - 1U;
    } else {
#line 2016
      fprintf(_coverage_fout, "1328\n");
#line 2016
      fflush(_coverage_fout);
#line 2016
      tmp___107 = 0U;
    }
    {
#line 2016
    fprintf(_coverage_fout, "1329\n");
#line 2016
    fflush(_coverage_fout);
#line 2016
    fcgi_env_add(p->fcgi_env, "QUERY_STRING", sizeof("QUERY_STRING") - 1U,
                 (char const   *)(con->uri.query)->ptr, tmp___107);
    }
  }
  {
#line 2021
  fprintf(_coverage_fout, "1331\n");
#line 2021
  fflush(_coverage_fout);
#line 2021
  s = get_http_method_name(con->request.http_method);
#line 2021
  fprintf(_coverage_fout, "1332\n");
#line 2021
  fflush(_coverage_fout);
#line 2022
  tmp___109 = strlen(s);
#line 2021
  fprintf(_coverage_fout, "1333\n");
#line 2021
  fflush(_coverage_fout);
#line 2022
  fcgi_env_add(p->fcgi_env, "REQUEST_METHOD", sizeof("REQUEST_METHOD") - 1U, s,
               tmp___109);
#line 2021
  fprintf(_coverage_fout, "1334\n");
#line 2021
  fflush(_coverage_fout);
#line 2023
  fcgi_env_add(p->fcgi_env, "REDIRECT_STATUS", sizeof("REDIRECT_STATUS") - 1U,
               "200", sizeof("200") - 1U);
#line 2021
  fprintf(_coverage_fout, "1335\n");
#line 2021
  fflush(_coverage_fout);
#line 2024
  s = get_http_version_name((int )con->request.http_version);
#line 2021
  fprintf(_coverage_fout, "1336\n");
#line 2021
  fflush(_coverage_fout);
#line 2025
  tmp___110 = strlen(s);
#line 2021
  fprintf(_coverage_fout, "1337\n");
#line 2021
  fflush(_coverage_fout);
#line 2025
  fcgi_env_add(p->fcgi_env, "SERVER_PROTOCOL", sizeof("SERVER_PROTOCOL") - 1U,
               s, tmp___110);
#line 2021
  fprintf(_coverage_fout, "1338\n");
#line 2021
  fflush(_coverage_fout);
#line 2034
  fcgi_env_add_request_headers(srv, con, p);
#line 2021
  fprintf(_coverage_fout, "1339\n");
#line 2021
  fflush(_coverage_fout);
#line 2036
  fcgi_header(& header, (unsigned char)4, request_id, (int )(p->fcgi_env)->used,
              (unsigned char)0);
#line 2021
  fprintf(_coverage_fout, "1340\n");
#line 2021
  fflush(_coverage_fout);
#line 2037
  buffer_append_memory(b, (char const   *)(& header), sizeof(header));
#line 2021
  fprintf(_coverage_fout, "1341\n");
#line 2021
  fflush(_coverage_fout);
#line 2038
  buffer_append_memory(b, (char const   *)(p->fcgi_env)->ptr,
                       (p->fcgi_env)->used);
#line 2021
  fprintf(_coverage_fout, "1342\n");
#line 2021
  fflush(_coverage_fout);
#line 2040
  fcgi_header(& header, (unsigned char)4, request_id, 0, (unsigned char)0);
#line 2021
  fprintf(_coverage_fout, "1343\n");
#line 2021
  fflush(_coverage_fout);
#line 2041
  buffer_append_memory(b, (char const   *)(& header), sizeof(header));
#line 2021
  fprintf(_coverage_fout, "1344\n");
#line 2021
  fflush(_coverage_fout);
#line 2043
  (b->used) ++;
#line 2021
  fprintf(_coverage_fout, "1345\n");
#line 2021
  fflush(_coverage_fout);
#line 2044
  (hctx->wb)->bytes_in += (long long )(b->used - 1U);
  }
#line 1792
  fprintf(_coverage_fout, "1419\n");
#line 1792
  fflush(_coverage_fout);
#line 2046
  if (con->request.content_length) {
#line 2046
    fprintf(_coverage_fout, "1401\n");
#line 2046
    fflush(_coverage_fout);
#line 2047
    req_cq = con->request_content_queue;
#line 2052
    offset = 0LL;
#line 2052
    req_c = req_cq->first;
#line 2046
    fprintf(_coverage_fout, "1402\n");
#line 2046
    fflush(_coverage_fout);
#line 2052
    while (1) {
#line 2052
      fprintf(_coverage_fout, "1395\n");
#line 2052
      fflush(_coverage_fout);
#line 2052
      if (! (offset != req_cq->bytes_in)) {
#line 2052
        break;
      }
#line 2052
      fprintf(_coverage_fout, "1396\n");
#line 2052
      fflush(_coverage_fout);
#line 2053
      if (req_cq->bytes_in - offset > 65535LL) {
#line 2053
        fprintf(_coverage_fout, "1346\n");
#line 2053
        fflush(_coverage_fout);
#line 2053
        tmp___111 = 65535LL;
      } else {
#line 2053
        fprintf(_coverage_fout, "1347\n");
#line 2053
        fflush(_coverage_fout);
#line 2053
        tmp___111 = req_cq->bytes_in - offset;
      }
      {
#line 2053
      fprintf(_coverage_fout, "1348\n");
#line 2053
      fflush(_coverage_fout);
#line 2053
      weWant = tmp___111;
#line 2053
      fprintf(_coverage_fout, "1349\n");
#line 2053
      fflush(_coverage_fout);
#line 2054
      written = 0LL;
#line 2053
      fprintf(_coverage_fout, "1350\n");
#line 2053
      fflush(_coverage_fout);
#line 2055
      weHave = 0LL;
#line 2053
      fprintf(_coverage_fout, "1351\n");
#line 2053
      fflush(_coverage_fout);
#line 2061
      b = chunkqueue_get_append_buffer(hctx->wb);
#line 2053
      fprintf(_coverage_fout, "1352\n");
#line 2053
      fflush(_coverage_fout);
#line 2062
      fcgi_header(& header, (unsigned char)5, request_id, (int )weWant,
                  (unsigned char)0);
#line 2053
      fprintf(_coverage_fout, "1353\n");
#line 2053
      fflush(_coverage_fout);
#line 2063
      buffer_copy_memory(b, (char const   *)(& header), sizeof(header));
#line 2053
      fprintf(_coverage_fout, "1354\n");
#line 2053
      fflush(_coverage_fout);
#line 2064
      (hctx->wb)->bytes_in += (long long )sizeof(header);
      }
#line 2052
      fprintf(_coverage_fout, "1397\n");
#line 2052
      fflush(_coverage_fout);
#line 2066
      if (p->conf.debug > 10) {
        {
#line 2067
        fprintf(_coverage_fout, "1355\n");
#line 2067
        fflush(_coverage_fout);
#line 2067
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s.%d: tosend: %lld / %lld\n",
                "mod_fastcgi.c", 2067, offset, req_cq->bytes_in);
        }
      }
#line 2052
      fprintf(_coverage_fout, "1398\n");
#line 2052
      fflush(_coverage_fout);
#line 2070
      written = 0LL;
#line 2052
      fprintf(_coverage_fout, "1399\n");
#line 2052
      fflush(_coverage_fout);
#line 2070
      while (1) {
#line 2070
        fprintf(_coverage_fout, "1393\n");
#line 2070
        fflush(_coverage_fout);
#line 2070
        if (! (written != weWant)) {
#line 2070
          break;
        }
#line 2070
        fprintf(_coverage_fout, "1394\n");
#line 2070
        fflush(_coverage_fout);
#line 2071
        if (p->conf.debug > 10) {
          {
#line 2072
          fprintf(_coverage_fout, "1356\n");
#line 2072
          fflush(_coverage_fout);
#line 2072
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s.%d: chunk: %lld / %lld\n",
                  "mod_fastcgi.c", 2072, written, weWant);
          }
        }
#line 2075
        switch ((int )req_c->type) {
#line 2075
        fprintf(_coverage_fout, "1384\n");
#line 2075
        fflush(_coverage_fout);
        case 2: 
#line 2077
        weHave = req_c->file.length - req_c->offset;
#line 2075
        fprintf(_coverage_fout, "1385\n");
#line 2075
        fflush(_coverage_fout);
#line 2079
        if (weHave > weWant - written) {
#line 2079
          fprintf(_coverage_fout, "1357\n");
#line 2079
          fflush(_coverage_fout);
#line 2079
          weHave = weWant - written;
        }
#line 2075
        fprintf(_coverage_fout, "1386\n");
#line 2075
        fflush(_coverage_fout);
#line 2081
        if (p->conf.debug > 10) {
          {
#line 2082
          fprintf(_coverage_fout, "1358\n");
#line 2082
          fflush(_coverage_fout);
#line 2082
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s.%d: sending %lld bytes from (%lld / %lld) %s\n",
                  "mod_fastcgi.c", 2083, weHave, req_c->offset,
                  req_c->file.length, (req_c->file.name)->ptr);
          }
        }
#line 2075
        fprintf(_coverage_fout, "1387\n");
#line 2075
        fflush(_coverage_fout);
#line 2090
        if (! (weHave != 0LL)) {
          {
#line 2090
          fprintf(_coverage_fout, "1359\n");
#line 2090
          fflush(_coverage_fout);
#line 2090
          __assert_fail("weHave != 0", "mod_fastcgi.c", 2090U, "fcgi_create_env");
          }
        }
        {
#line 2092
        fprintf(_coverage_fout, "1360\n");
#line 2092
        fflush(_coverage_fout);
#line 2092
        chunkqueue_append_file(hctx->wb, req_c->file.name, req_c->offset, weHave);
#line 2092
        fprintf(_coverage_fout, "1361\n");
#line 2092
        fflush(_coverage_fout);
#line 2094
        req_c->offset += weHave;
#line 2092
        fprintf(_coverage_fout, "1362\n");
#line 2092
        fflush(_coverage_fout);
#line 2095
        req_cq->bytes_out += weHave;
#line 2092
        fprintf(_coverage_fout, "1363\n");
#line 2092
        fflush(_coverage_fout);
#line 2096
        written += weHave;
#line 2092
        fprintf(_coverage_fout, "1364\n");
#line 2092
        fflush(_coverage_fout);
#line 2098
        (hctx->wb)->bytes_in += weHave;
        }
#line 2075
        fprintf(_coverage_fout, "1388\n");
#line 2075
        fflush(_coverage_fout);
#line 2112
        if (req_c->offset == req_c->file.length) {
#line 2112
          fprintf(_coverage_fout, "1372\n");
#line 2112
          fflush(_coverage_fout);
#line 2115
          if (p->conf.debug > 10) {
            {
#line 2116
            fprintf(_coverage_fout, "1365\n");
#line 2116
            fflush(_coverage_fout);
#line 2116
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"%s.%d: next chunk\n",
                    "mod_fastcgi.c", 2116);
            }
          }
#line 2112
          fprintf(_coverage_fout, "1373\n");
#line 2112
          fflush(_coverage_fout);
#line 2118
          c = (hctx->wb)->last;
#line 2112
          fprintf(_coverage_fout, "1374\n");
#line 2112
          fflush(_coverage_fout);
#line 2120
          if (! ((int )c->type == 2)) {
            {
#line 2120
            fprintf(_coverage_fout, "1366\n");
#line 2120
            fflush(_coverage_fout);
#line 2120
            __assert_fail("c->type == FILE_CHUNK", "mod_fastcgi.c", 2120U,
                          "fcgi_create_env");
            }
          }
#line 2112
          fprintf(_coverage_fout, "1375\n");
#line 2112
          fflush(_coverage_fout);
#line 2121
          if (! (req_c->file.is_temp == 1)) {
            {
#line 2121
            fprintf(_coverage_fout, "1367\n");
#line 2121
            fflush(_coverage_fout);
#line 2121
            __assert_fail("req_c->file.is_temp == 1", "mod_fastcgi.c", 2121U,
                          "fcgi_create_env");
            }
          }
          {
#line 2123
          fprintf(_coverage_fout, "1368\n");
#line 2123
          fflush(_coverage_fout);
#line 2123
          c->file.is_temp = 1;
#line 2123
          fprintf(_coverage_fout, "1369\n");
#line 2123
          fflush(_coverage_fout);
#line 2124
          req_c->file.is_temp = 0;
#line 2123
          fprintf(_coverage_fout, "1370\n");
#line 2123
          fflush(_coverage_fout);
#line 2126
          chunkqueue_remove_finished_chunks(req_cq);
#line 2123
          fprintf(_coverage_fout, "1371\n");
#line 2123
          fflush(_coverage_fout);
#line 2128
          req_c = req_cq->first;
          }
        }
#line 2131
        break;
#line 2075
        fprintf(_coverage_fout, "1389\n");
#line 2075
        fflush(_coverage_fout);
        case 1: 
#line 2134
        weHave = (long long )((req_c->mem)->used - 1U) - req_c->offset;
#line 2075
        fprintf(_coverage_fout, "1390\n");
#line 2075
        fflush(_coverage_fout);
#line 2136
        if (weHave > weWant - written) {
#line 2136
          fprintf(_coverage_fout, "1376\n");
#line 2136
          fflush(_coverage_fout);
#line 2136
          weHave = weWant - written;
        }
        {
#line 2138
        fprintf(_coverage_fout, "1377\n");
#line 2138
        fflush(_coverage_fout);
#line 2138
        buffer_append_memory(b,
                             (char const   *)((req_c->mem)->ptr + req_c->offset),
                             (unsigned int )weHave);
#line 2138
        fprintf(_coverage_fout, "1378\n");
#line 2138
        fflush(_coverage_fout);
#line 2140
        req_c->offset += weHave;
#line 2138
        fprintf(_coverage_fout, "1379\n");
#line 2138
        fflush(_coverage_fout);
#line 2141
        req_cq->bytes_out += weHave;
#line 2138
        fprintf(_coverage_fout, "1380\n");
#line 2138
        fflush(_coverage_fout);
#line 2142
        written += weHave;
#line 2138
        fprintf(_coverage_fout, "1381\n");
#line 2138
        fflush(_coverage_fout);
#line 2144
        (hctx->wb)->bytes_in += weHave;
        }
#line 2075
        fprintf(_coverage_fout, "1391\n");
#line 2075
        fflush(_coverage_fout);
#line 2146
        if (req_c->offset == (long long )((req_c->mem)->used - 1U)) {
          {
#line 2147
          fprintf(_coverage_fout, "1382\n");
#line 2147
          fflush(_coverage_fout);
#line 2147
          chunkqueue_remove_finished_chunks(req_cq);
#line 2147
          fprintf(_coverage_fout, "1383\n");
#line 2147
          fflush(_coverage_fout);
#line 2149
          req_c = req_cq->first;
          }
        }
#line 2152
        break;
#line 2075
        fprintf(_coverage_fout, "1392\n");
#line 2075
        fflush(_coverage_fout);
        default: ;
#line 2154
        break;
        }
      }
#line 2052
      fprintf(_coverage_fout, "1400\n");
#line 2052
      fflush(_coverage_fout);
#line 2158
      (b->used) ++;
#line 2159
      offset += weWant;
    }
  }
  {
#line 2163
  fprintf(_coverage_fout, "1403\n");
#line 2163
  fflush(_coverage_fout);
#line 2163
  b = chunkqueue_get_append_buffer(hctx->wb);
#line 2163
  fprintf(_coverage_fout, "1404\n");
#line 2163
  fflush(_coverage_fout);
#line 2165
  fcgi_header(& header, (unsigned char)5, request_id, 0, (unsigned char)0);
#line 2163
  fprintf(_coverage_fout, "1405\n");
#line 2163
  fflush(_coverage_fout);
#line 2166
  buffer_copy_memory(b, (char const   *)(& header), sizeof(header));
#line 2163
  fprintf(_coverage_fout, "1406\n");
#line 2163
  fflush(_coverage_fout);
#line 2167
  (b->used) ++;
#line 2163
  fprintf(_coverage_fout, "1407\n");
#line 2163
  fflush(_coverage_fout);
#line 2169
  (hctx->wb)->bytes_in += (long long )sizeof(header);
  }
#line 1792
  fprintf(_coverage_fout, "1420\n");
#line 1792
  fflush(_coverage_fout);
#line 2185
  return (0);
}
}
#line 2188 "mod_fastcgi.c"
static int fcgi_response_parse(server *srv , connection *con , plugin_data *p ,
                               buffer *in ) 
{ char *s ;
  char *ns ;
  handler_ctx *hctx ;
  fcgi_extension_host *host ;
  char *key ;
  char *value ;
  int key_len ;
  data_string *ds ;
  void *tmp ;
  char *tmp___0 ;
  data_unset *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  long tmp___10 ;
  int tmp___11 ;
  void *tmp___12 ;
  char *tmp___13 ;

  {
  {
#line 2191
  fprintf(_coverage_fout, "1421\n");
#line 2191
  fflush(_coverage_fout);
#line 2191
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
#line 2191
  fprintf(_coverage_fout, "1422\n");
#line 2191
  fflush(_coverage_fout);
#line 2192
  host = hctx->host;
#line 2191
  fprintf(_coverage_fout, "1423\n");
#line 2191
  fflush(_coverage_fout);
#line 2196
  buffer_copy_string_buffer(p->parse_response, (buffer const   *)in);
#line 2191
  fprintf(_coverage_fout, "1424\n");
#line 2191
  fflush(_coverage_fout);
#line 2199
  s = (p->parse_response)->ptr;
  }
#line 2188
  fprintf(_coverage_fout, "1482\n");
#line 2188
  fflush(_coverage_fout);
#line 2199
  while (1) {
    {
#line 2199
    fprintf(_coverage_fout, "1425\n");
#line 2199
    fflush(_coverage_fout);
#line 2199
    tmp___13 = __builtin_strchr(s, '\n');
#line 2199
    fprintf(_coverage_fout, "1426\n");
#line 2199
    fflush(_coverage_fout);
#line 2199
    ns = tmp___13;
    }
#line 2199
    fprintf(_coverage_fout, "1473\n");
#line 2199
    fflush(_coverage_fout);
#line 2199
    if (! ((unsigned int )((void *)0) != (unsigned int )ns)) {
#line 2199
      break;
    }
#line 2199
    fprintf(_coverage_fout, "1474\n");
#line 2199
    fflush(_coverage_fout);
#line 2206
    if ((unsigned int )ns > (unsigned int )(p->parse_response)->ptr) {
#line 2206
      fprintf(_coverage_fout, "1428\n");
#line 2206
      fflush(_coverage_fout);
#line 2206
      if ((int )*(ns - 1) == 13) {
#line 2206
        fprintf(_coverage_fout, "1427\n");
#line 2206
        fflush(_coverage_fout);
#line 2208
        *(ns - 1) = (char )'\000';
      }
    }
    {
#line 2211
    fprintf(_coverage_fout, "1429\n");
#line 2211
    fflush(_coverage_fout);
#line 2211
    *(ns + 0) = (char )'\000';
#line 2211
    fprintf(_coverage_fout, "1430\n");
#line 2211
    fflush(_coverage_fout);
#line 2213
    key = s;
#line 2211
    fprintf(_coverage_fout, "1431\n");
#line 2211
    fflush(_coverage_fout);
#line 2214
    tmp___0 = __builtin_strchr(s, ':');
#line 2211
    fprintf(_coverage_fout, "1432\n");
#line 2211
    fflush(_coverage_fout);
#line 2214
    value = tmp___0;
    }
#line 2199
    fprintf(_coverage_fout, "1475\n");
#line 2199
    fflush(_coverage_fout);
#line 2214
    if ((unsigned int )((void *)0) == (unsigned int )value) {
      goto __Cont;
    }
#line 2199
    fprintf(_coverage_fout, "1476\n");
#line 2199
    fflush(_coverage_fout);
#line 2219
    key_len = value - key;
#line 2221
    value ++;
#line 2199
    fprintf(_coverage_fout, "1477\n");
#line 2199
    fflush(_coverage_fout);
#line 2223
    while (1) {
#line 2223
      fprintf(_coverage_fout, "1434\n");
#line 2223
      fflush(_coverage_fout);
#line 2223
      if (! ((int )*value == 32)) {
#line 2223
        fprintf(_coverage_fout, "1433\n");
#line 2223
        fflush(_coverage_fout);
#line 2223
        if (! ((int )*value == 9)) {
#line 2223
          break;
        }
      }
#line 2223
      fprintf(_coverage_fout, "1435\n");
#line 2223
      fflush(_coverage_fout);
#line 2223
      value ++;
    }
#line 2199
    fprintf(_coverage_fout, "1478\n");
#line 2199
    fflush(_coverage_fout);
#line 2225
    if ((int )host->mode != 2) {
      goto _L;
    } else {
#line 2225
      fprintf(_coverage_fout, "1446\n");
#line 2225
      fflush(_coverage_fout);
#line 2225
      if (! (con->http_status == 0)) {
#line 2225
        fprintf(_coverage_fout, "1445\n");
#line 2225
        fflush(_coverage_fout);
#line 2225
        if (! (con->http_status == 200)) {
          _L: 
          {
#line 2231
          fprintf(_coverage_fout, "1436\n");
#line 2231
          fflush(_coverage_fout);
#line 2231
          tmp___2 = strncasecmp((char const   *)key, "Status",
                                (unsigned int )key_len);
          }
#line 2225
          fprintf(_coverage_fout, "1444\n");
#line 2225
          fflush(_coverage_fout);
#line 2231
          if (0 != tmp___2) {
            {
#line 2232
            fprintf(_coverage_fout, "1437\n");
#line 2232
            fflush(_coverage_fout);
#line 2232
            tmp___1 = array_get_unused_element(con->response.headers,
                                               (enum __anonenum_data_type_t_49 )1);
#line 2232
            fprintf(_coverage_fout, "1438\n");
#line 2232
            fflush(_coverage_fout);
#line 2232
            ds = (data_string *)tmp___1;
            }
#line 2231
            fprintf(_coverage_fout, "1443\n");
#line 2231
            fflush(_coverage_fout);
#line 2232
            if ((unsigned int )((void *)0) == (unsigned int )ds) {
              {
#line 2233
              fprintf(_coverage_fout, "1439\n");
#line 2233
              fflush(_coverage_fout);
#line 2233
              ds = data_response_init();
              }
            }
            {
#line 2235
            fprintf(_coverage_fout, "1440\n");
#line 2235
            fflush(_coverage_fout);
#line 2235
            buffer_copy_string_len(ds->key, (char const   *)key,
                                   (unsigned int )key_len);
#line 2235
            fprintf(_coverage_fout, "1441\n");
#line 2235
            fflush(_coverage_fout);
#line 2236
            buffer_copy_string(ds->value, (char const   *)value);
#line 2235
            fprintf(_coverage_fout, "1442\n");
#line 2235
            fflush(_coverage_fout);
#line 2238
            array_insert_unique(con->response.headers, (data_unset *)ds);
            }
          }
        }
      }
    }
#line 2242
    switch (key_len) {
    case 4: 
    {
#line 2244
    fprintf(_coverage_fout, "1447\n");
#line 2244
    fflush(_coverage_fout);
#line 2244
    tmp___3 = strncasecmp((char const   *)key, "Date", (unsigned int )key_len);
    }
#line 2242
    fprintf(_coverage_fout, "1467\n");
#line 2242
    fflush(_coverage_fout);
#line 2244
    if (0 == tmp___3) {
#line 2244
      fprintf(_coverage_fout, "1448\n");
#line 2244
      fflush(_coverage_fout);
#line 2245
      con->parsed_response |= (unsigned int )(1 << 3);
    }
#line 2247
    break;
    case 6: 
    {
#line 2249
    fprintf(_coverage_fout, "1449\n");
#line 2249
    fflush(_coverage_fout);
#line 2249
    tmp___5 = strncasecmp((char const   *)key, "Status", (unsigned int )key_len);
    }
#line 2242
    fprintf(_coverage_fout, "1468\n");
#line 2242
    fflush(_coverage_fout);
#line 2249
    if (0 == tmp___5) {
      {
#line 2250
      fprintf(_coverage_fout, "1450\n");
#line 2250
      fflush(_coverage_fout);
#line 2250
      tmp___4 = strtol((char const   */* __restrict  */)((char const   *)value),
                       (char **/* __restrict  */)((char **)((void *)0)), 10);
#line 2250
      fprintf(_coverage_fout, "1451\n");
#line 2250
      fflush(_coverage_fout);
#line 2250
      con->http_status = (int )tmp___4;
#line 2250
      fprintf(_coverage_fout, "1452\n");
#line 2250
      fflush(_coverage_fout);
#line 2251
      con->parsed_response |= 1U;
      }
    }
#line 2253
    break;
    case 8: 
    {
#line 2255
    fprintf(_coverage_fout, "1453\n");
#line 2255
    fflush(_coverage_fout);
#line 2255
    tmp___6 = strncasecmp((char const   *)key, "Location",
                          (unsigned int )key_len);
    }
#line 2242
    fprintf(_coverage_fout, "1469\n");
#line 2242
    fflush(_coverage_fout);
#line 2255
    if (0 == tmp___6) {
#line 2255
      fprintf(_coverage_fout, "1454\n");
#line 2255
      fflush(_coverage_fout);
#line 2256
      con->parsed_response |= (unsigned int )(1 << 4);
    }
#line 2258
    break;
    case 10: 
    {
#line 2260
    fprintf(_coverage_fout, "1455\n");
#line 2260
    fflush(_coverage_fout);
#line 2260
    tmp___9 = strncasecmp((char const   *)key, "Connection",
                          (unsigned int )key_len);
    }
#line 2242
    fprintf(_coverage_fout, "1470\n");
#line 2242
    fflush(_coverage_fout);
#line 2260
    if (0 == tmp___9) {
      {
#line 2261
      fprintf(_coverage_fout, "1456\n");
#line 2261
      fflush(_coverage_fout);
#line 2261
      tmp___8 = strcasecmp((char const   *)value, "Keep-Alive");
      }
#line 2260
      fprintf(_coverage_fout, "1459\n");
#line 2260
      fflush(_coverage_fout);
#line 2261
      if (0 == tmp___8) {
#line 2261
        fprintf(_coverage_fout, "1457\n");
#line 2261
        fflush(_coverage_fout);
#line 2261
        con->response.keep_alive = 1;
      } else {
#line 2261
        fprintf(_coverage_fout, "1458\n");
#line 2261
        fflush(_coverage_fout);
#line 2261
        con->response.keep_alive = 0;
      }
#line 2260
      fprintf(_coverage_fout, "1460\n");
#line 2260
      fflush(_coverage_fout);
#line 2262
      con->parsed_response |= (unsigned int )(1 << 1);
    }
#line 2264
    break;
    case 14: 
    {
#line 2266
    fprintf(_coverage_fout, "1461\n");
#line 2266
    fflush(_coverage_fout);
#line 2266
    tmp___11 = strncasecmp((char const   *)key, "Content-Length",
                           (unsigned int )key_len);
    }
#line 2242
    fprintf(_coverage_fout, "1471\n");
#line 2242
    fflush(_coverage_fout);
#line 2266
    if (0 == tmp___11) {
      {
#line 2267
      fprintf(_coverage_fout, "1462\n");
#line 2267
      fflush(_coverage_fout);
#line 2267
      tmp___10 = strtol((char const   */* __restrict  */)((char const   *)value),
                        (char **/* __restrict  */)((char **)((void *)0)), 10);
#line 2267
      fprintf(_coverage_fout, "1463\n");
#line 2267
      fflush(_coverage_fout);
#line 2267
      con->response.content_length = (long long )tmp___10;
#line 2267
      fprintf(_coverage_fout, "1464\n");
#line 2267
      fflush(_coverage_fout);
#line 2268
      con->parsed_response |= (unsigned int )(1 << 2);
      }
#line 2266
      fprintf(_coverage_fout, "1466\n");
#line 2266
      fflush(_coverage_fout);
#line 2270
      if (con->response.content_length < 0LL) {
#line 2270
        fprintf(_coverage_fout, "1465\n");
#line 2270
        fflush(_coverage_fout);
#line 2270
        con->response.content_length = 0LL;
      }
    }
#line 2272
    break;
#line 2242
    fprintf(_coverage_fout, "1472\n");
#line 2242
    fflush(_coverage_fout);
    default: ;
#line 2274
    break;
    }
#line 2199
    fprintf(_coverage_fout, "1479\n");
#line 2199
    fflush(_coverage_fout);
    __Cont: 
#line 2199
    s = ns + 1;
  }
#line 2188
  fprintf(_coverage_fout, "1483\n");
#line 2188
  fflush(_coverage_fout);
#line 2279
  if (con->parsed_response & (unsigned int )(1 << 4)) {
#line 2279
    fprintf(_coverage_fout, "1481\n");
#line 2279
    fflush(_coverage_fout);
#line 2279
    if (! (con->parsed_response & 1U)) {
#line 2279
      fprintf(_coverage_fout, "1480\n");
#line 2279
      fflush(_coverage_fout);
#line 2281
      con->http_status = 302;
    }
  }
#line 2188
  fprintf(_coverage_fout, "1484\n");
#line 2188
  fflush(_coverage_fout);
#line 2284
  return (0);
}
}
#line 2295 "mod_fastcgi.c"
static int fastcgi_get_packet(server *srv , handler_ctx *hctx ,
                              fastcgi_response_packet *packet ) 
{ chunk *c ;
  size_t offset ;
  size_t toread ;
  FCGI_Header *header ;
  size_t weWant ;
  size_t weHave ;

  {
#line 2295
  fprintf(_coverage_fout, "1532\n");
#line 2295
  fflush(_coverage_fout);
#line 2297
  offset = 0U;
#line 2298
  toread = 0U;
#line 2295
  fprintf(_coverage_fout, "1533\n");
#line 2295
  fflush(_coverage_fout);
#line 2301
  if (! (hctx->rb)->first) {
#line 2301
    fprintf(_coverage_fout, "1485\n");
#line 2301
    fflush(_coverage_fout);
#line 2301
    return (-1);
  }
  {
#line 2303
  fprintf(_coverage_fout, "1486\n");
#line 2303
  fflush(_coverage_fout);
#line 2303
  packet->b = buffer_init();
#line 2303
  fprintf(_coverage_fout, "1487\n");
#line 2303
  fflush(_coverage_fout);
#line 2304
  packet->len = 0U;
#line 2303
  fprintf(_coverage_fout, "1488\n");
#line 2303
  fflush(_coverage_fout);
#line 2305
  packet->type = 0;
#line 2303
  fprintf(_coverage_fout, "1489\n");
#line 2303
  fflush(_coverage_fout);
#line 2306
  packet->padding = 0;
#line 2303
  fprintf(_coverage_fout, "1490\n");
#line 2303
  fflush(_coverage_fout);
#line 2307
  packet->request_id = 0U;
#line 2303
  fprintf(_coverage_fout, "1491\n");
#line 2303
  fflush(_coverage_fout);
#line 2310
  c = (hctx->rb)->first;
  }
#line 2295
  fprintf(_coverage_fout, "1534\n");
#line 2295
  fflush(_coverage_fout);
#line 2310
  while (1) {
#line 2310
    fprintf(_coverage_fout, "1494\n");
#line 2310
    fflush(_coverage_fout);
#line 2310
    if (! c) {
#line 2310
      break;
    }
#line 2310
    fprintf(_coverage_fout, "1495\n");
#line 2310
    fflush(_coverage_fout);
#line 2311
    if ((packet->b)->used == 0U) {
      {
#line 2312
      fprintf(_coverage_fout, "1492\n");
#line 2312
      fflush(_coverage_fout);
#line 2312
      buffer_copy_string_len(packet->b,
                             (char const   *)((c->mem)->ptr + c->offset),
                             (unsigned int )(((long long )(c->mem)->used - c->offset) - 1LL));
      }
    } else {
      {
#line 2314
      fprintf(_coverage_fout, "1493\n");
#line 2314
      fflush(_coverage_fout);
#line 2314
      buffer_append_string_len(packet->b,
                               (char const   *)((c->mem)->ptr + c->offset),
                               (unsigned int )(((long long )(c->mem)->used - c->offset) - 1LL));
      }
    }
#line 2310
    fprintf(_coverage_fout, "1496\n");
#line 2310
    fflush(_coverage_fout);
#line 2317
    if ((packet->b)->used >= sizeof(*header) + 1U) {
#line 2317
      break;
    }
#line 2310
    fprintf(_coverage_fout, "1497\n");
#line 2310
    fflush(_coverage_fout);
#line 2310
    c = c->next;
  }
#line 2295
  fprintf(_coverage_fout, "1535\n");
#line 2295
  fflush(_coverage_fout);
#line 2320
  if ((packet->b)->used == 0U) {
    {
#line 2323
    fprintf(_coverage_fout, "1498\n");
#line 2323
    fflush(_coverage_fout);
#line 2323
    buffer_free(packet->b);
#line 2323
    fprintf(_coverage_fout, "1499\n");
#line 2323
    fflush(_coverage_fout);
#line 2325
    log_error_write(srv, "mod_fastcgi.c", 2325U, "s",
                    "FastCGI: header too small");
    }
#line 2320
    fprintf(_coverage_fout, "1500\n");
#line 2320
    fflush(_coverage_fout);
#line 2326
    return (-1);
  } else {
#line 2320
    fprintf(_coverage_fout, "1504\n");
#line 2320
    fflush(_coverage_fout);
#line 2320
    if ((packet->b)->used - 1U < sizeof(FCGI_Header )) {
      {
#line 2323
      fprintf(_coverage_fout, "1501\n");
#line 2323
      fflush(_coverage_fout);
#line 2323
      buffer_free(packet->b);
#line 2323
      fprintf(_coverage_fout, "1502\n");
#line 2323
      fflush(_coverage_fout);
#line 2325
      log_error_write(srv, "mod_fastcgi.c", 2325U, "s",
                      "FastCGI: header too small");
      }
#line 2320
      fprintf(_coverage_fout, "1503\n");
#line 2320
      fflush(_coverage_fout);
#line 2326
      return (-1);
    }
  }
  {
#line 2330
  fprintf(_coverage_fout, "1505\n");
#line 2330
  fflush(_coverage_fout);
#line 2330
  header = (FCGI_Header *)(packet->b)->ptr;
#line 2330
  fprintf(_coverage_fout, "1506\n");
#line 2330
  fflush(_coverage_fout);
#line 2332
  packet->len = (unsigned int )(((int )header->contentLengthB0 | ((int )header->contentLengthB1 << 8)) + (int )header->paddingLength);
#line 2330
  fprintf(_coverage_fout, "1507\n");
#line 2330
  fflush(_coverage_fout);
#line 2333
  packet->request_id = (unsigned int )((int )header->requestIdB0 | ((int )header->requestIdB1 << 8));
#line 2330
  fprintf(_coverage_fout, "1508\n");
#line 2330
  fflush(_coverage_fout);
#line 2334
  packet->type = (int )header->type;
#line 2330
  fprintf(_coverage_fout, "1509\n");
#line 2330
  fflush(_coverage_fout);
#line 2335
  packet->padding = (int )header->paddingLength;
#line 2330
  fprintf(_coverage_fout, "1510\n");
#line 2330
  fflush(_coverage_fout);
#line 2338
  offset = sizeof(*header);
#line 2330
  fprintf(_coverage_fout, "1511\n");
#line 2330
  fflush(_coverage_fout);
#line 2341
  buffer_copy_string(packet->b, "");
  }
#line 2295
  fprintf(_coverage_fout, "1536\n");
#line 2295
  fflush(_coverage_fout);
#line 2343
  if (packet->len) {
#line 2343
    fprintf(_coverage_fout, "1522\n");
#line 2343
    fflush(_coverage_fout);
#line 2345
    while (1) {
#line 2345
      fprintf(_coverage_fout, "1517\n");
#line 2345
      fflush(_coverage_fout);
#line 2345
      if (c) {
#line 2345
        fprintf(_coverage_fout, "1512\n");
#line 2345
        fflush(_coverage_fout);
#line 2345
        if (! ((packet->b)->used < packet->len + 1U)) {
#line 2345
          break;
        }
      } else {
#line 2345
        break;
      }
#line 2345
      fprintf(_coverage_fout, "1518\n");
#line 2345
      fflush(_coverage_fout);
#line 2346
      weWant = packet->len - ((packet->b)->used - 1U);
#line 2347
      weHave = (unsigned int )((((long long )(c->mem)->used - c->offset) - (long long )offset) - 1LL);
#line 2345
      fprintf(_coverage_fout, "1519\n");
#line 2345
      fflush(_coverage_fout);
#line 2349
      if (weHave > weWant) {
#line 2349
        fprintf(_coverage_fout, "1513\n");
#line 2349
        fflush(_coverage_fout);
#line 2349
        weHave = weWant;
      }
      {
#line 2351
      fprintf(_coverage_fout, "1514\n");
#line 2351
      fflush(_coverage_fout);
#line 2351
      buffer_append_string_len(packet->b,
                               (char const   *)(((c->mem)->ptr + c->offset) + offset),
                               weHave);
#line 2351
      fprintf(_coverage_fout, "1515\n");
#line 2351
      fflush(_coverage_fout);
#line 2354
      offset = 0U;
#line 2351
      fprintf(_coverage_fout, "1516\n");
#line 2351
      fflush(_coverage_fout);
#line 2345
      c = c->next;
      }
    }
#line 2343
    fprintf(_coverage_fout, "1523\n");
#line 2343
    fflush(_coverage_fout);
#line 2357
    if ((packet->b)->used < packet->len + 1U) {
      {
#line 2360
      fprintf(_coverage_fout, "1520\n");
#line 2360
      fflush(_coverage_fout);
#line 2360
      buffer_free(packet->b);
      }
#line 2357
      fprintf(_coverage_fout, "1521\n");
#line 2357
      fflush(_coverage_fout);
#line 2361
      return (-1);
    }
#line 2343
    fprintf(_coverage_fout, "1524\n");
#line 2343
    fflush(_coverage_fout);
#line 2364
    (packet->b)->used -= (unsigned int )packet->padding;
#line 2365
    *((packet->b)->ptr + ((packet->b)->used - 1U)) = (char )'\000';
  }
#line 2295
  fprintf(_coverage_fout, "1537\n");
#line 2295
  fflush(_coverage_fout);
#line 2369
  toread = packet->len + sizeof(FCGI_Header );
#line 2370
  c = (hctx->rb)->first;
#line 2295
  fprintf(_coverage_fout, "1538\n");
#line 2295
  fflush(_coverage_fout);
#line 2370
  while (1) {
#line 2370
    fprintf(_coverage_fout, "1528\n");
#line 2370
    fflush(_coverage_fout);
#line 2370
    if (c) {
#line 2370
      fprintf(_coverage_fout, "1525\n");
#line 2370
      fflush(_coverage_fout);
#line 2370
      if (! toread) {
#line 2370
        break;
      }
    } else {
#line 2370
      break;
    }
#line 2370
    fprintf(_coverage_fout, "1529\n");
#line 2370
    fflush(_coverage_fout);
#line 2371
    if (((long long )(c->mem)->used - c->offset) - 1LL <= (long long )toread) {
#line 2371
      fprintf(_coverage_fout, "1526\n");
#line 2371
      fflush(_coverage_fout);
#line 2373
      toread = (unsigned int )((long long )toread - (((long long )(c->mem)->used - c->offset) - 1LL));
#line 2374
      c->offset = (long long )((c->mem)->used - 1U);
    } else {
#line 2371
      fprintf(_coverage_fout, "1527\n");
#line 2371
      fflush(_coverage_fout);
#line 2376
      c->offset += (long long )toread;
#line 2377
      toread = 0U;
    }
#line 2370
    fprintf(_coverage_fout, "1530\n");
#line 2370
    fflush(_coverage_fout);
#line 2370
    c = c->next;
  }
  {
#line 2381
  fprintf(_coverage_fout, "1531\n");
#line 2381
  fflush(_coverage_fout);
#line 2381
  chunkqueue_remove_finished_chunks(hctx->rb);
  }
#line 2295
  fprintf(_coverage_fout, "1539\n");
#line 2295
  fflush(_coverage_fout);
#line 2383
  return (0);
}
}
#line 2386 "mod_fastcgi.c"
static int fcgi_demux_response(server *srv , handler_ctx *hctx ) 
{ int fin ;
  int toread ;
  ssize_t r ;
  plugin_data *p ;
  connection *con ;
  int fcgi_fd ;
  fcgi_extension_host *host ;
  fcgi_proc *proc ;
  int *tmp ;
  int tmp___0 ;
  buffer *b ;
  chunk *cq_first ;
  chunk *cq_last ;
  int *tmp___1 ;
  int *tmp___2 ;
  char *tmp___3 ;
  fastcgi_response_packet packet ;
  int tmp___4 ;
  char *c ;
  size_t blen ;
  data_string *ds ;
  stat_cache_entry *sce ;
  handler_t tmp___5 ;
  data_unset *tmp___6 ;

  {
  {
#line 2387
  fprintf(_coverage_fout, "1540\n");
#line 2387
  fflush(_coverage_fout);
#line 2387
  fin = 0;
#line 2387
  fprintf(_coverage_fout, "1541\n");
#line 2387
  fflush(_coverage_fout);
#line 2391
  p = hctx->plugin_data;
#line 2387
  fprintf(_coverage_fout, "1542\n");
#line 2387
  fflush(_coverage_fout);
#line 2392
  con = hctx->remote_conn;
#line 2387
  fprintf(_coverage_fout, "1543\n");
#line 2387
  fflush(_coverage_fout);
#line 2393
  fcgi_fd = hctx->fd;
#line 2387
  fprintf(_coverage_fout, "1544\n");
#line 2387
  fflush(_coverage_fout);
#line 2394
  host = hctx->host;
#line 2387
  fprintf(_coverage_fout, "1545\n");
#line 2387
  fflush(_coverage_fout);
#line 2395
  proc = hctx->proc;
#line 2387
  fprintf(_coverage_fout, "1546\n");
#line 2387
  fflush(_coverage_fout);
#line 2400
  tmp___0 = ioctl(hctx->fd, 21531UL, & toread);
  }
#line 2386
  fprintf(_coverage_fout, "1631\n");
#line 2386
  fflush(_coverage_fout);
#line 2400
  if (tmp___0) {
    {
#line 2401
    fprintf(_coverage_fout, "1547\n");
#line 2401
    fflush(_coverage_fout);
#line 2401
    tmp = __errno_location();
    }
#line 2400
    fprintf(_coverage_fout, "1550\n");
#line 2400
    fflush(_coverage_fout);
#line 2401
    if (*tmp == 11) {
#line 2401
      fprintf(_coverage_fout, "1548\n");
#line 2401
      fflush(_coverage_fout);
#line 2401
      return (0);
    }
    {
#line 2402
    fprintf(_coverage_fout, "1549\n");
#line 2402
    fflush(_coverage_fout);
#line 2402
    log_error_write(srv, "mod_fastcgi.c", 2402U, "sd",
                    "unexpected end-of-file (perhaps the fastcgi process died):",
                    fcgi_fd);
    }
#line 2400
    fprintf(_coverage_fout, "1551\n");
#line 2400
    fflush(_coverage_fout);
#line 2405
    return (-1);
  }
#line 2386
  fprintf(_coverage_fout, "1632\n");
#line 2386
  fflush(_coverage_fout);
#line 2410
  if (toread > 0) {
    {
#line 2412
    fprintf(_coverage_fout, "1552\n");
#line 2412
    fflush(_coverage_fout);
#line 2412
    cq_first = (hctx->rb)->first;
#line 2412
    fprintf(_coverage_fout, "1553\n");
#line 2412
    fflush(_coverage_fout);
#line 2413
    cq_last = (hctx->rb)->last;
#line 2412
    fprintf(_coverage_fout, "1554\n");
#line 2412
    fflush(_coverage_fout);
#line 2415
    b = chunkqueue_get_append_buffer(hctx->rb);
#line 2412
    fprintf(_coverage_fout, "1555\n");
#line 2412
    fflush(_coverage_fout);
#line 2416
    buffer_prepare_copy(b, (unsigned int )(toread + 1));
#line 2412
    fprintf(_coverage_fout, "1556\n");
#line 2412
    fflush(_coverage_fout);
#line 2419
    r = read(hctx->fd, (void *)b->ptr, (unsigned int )toread);
    }
#line 2410
    fprintf(_coverage_fout, "1569\n");
#line 2410
    fflush(_coverage_fout);
#line 2419
    if (-1 == r) {
      {
#line 2420
      fprintf(_coverage_fout, "1557\n");
#line 2420
      fflush(_coverage_fout);
#line 2420
      tmp___1 = __errno_location();
      }
#line 2419
      fprintf(_coverage_fout, "1566\n");
#line 2419
      fflush(_coverage_fout);
#line 2420
      if (*tmp___1 == 11) {
        {
#line 2423
        fprintf(_coverage_fout, "1558\n");
#line 2423
        fflush(_coverage_fout);
#line 2423
        buffer_free(((hctx->rb)->last)->mem);
#line 2423
        fprintf(_coverage_fout, "1559\n");
#line 2423
        fflush(_coverage_fout);
#line 2424
        free((void *)(hctx->rb)->last);
#line 2423
        fprintf(_coverage_fout, "1560\n");
#line 2423
        fflush(_coverage_fout);
#line 2425
        (hctx->rb)->first = cq_first;
#line 2423
        fprintf(_coverage_fout, "1561\n");
#line 2423
        fflush(_coverage_fout);
#line 2426
        (hctx->rb)->last = cq_last;
        }
#line 2420
        fprintf(_coverage_fout, "1562\n");
#line 2420
        fflush(_coverage_fout);
#line 2427
        return (0);
      }
      {
#line 2429
      fprintf(_coverage_fout, "1563\n");
#line 2429
      fflush(_coverage_fout);
#line 2429
      tmp___2 = __errno_location();
#line 2429
      fprintf(_coverage_fout, "1564\n");
#line 2429
      fflush(_coverage_fout);
#line 2429
      tmp___3 = strerror(*tmp___2);
#line 2429
      fprintf(_coverage_fout, "1565\n");
#line 2429
      fflush(_coverage_fout);
#line 2429
      log_error_write(srv, "mod_fastcgi.c", 2429U, "sds",
                      "unexpected end-of-file (perhaps the fastcgi process died):",
                      fcgi_fd, tmp___3);
      }
#line 2419
      fprintf(_coverage_fout, "1567\n");
#line 2419
      fflush(_coverage_fout);
#line 2432
      return (-1);
    }
#line 2410
    fprintf(_coverage_fout, "1570\n");
#line 2410
    fflush(_coverage_fout);
#line 2436
    if (! r) {
      {
#line 2436
      fprintf(_coverage_fout, "1568\n");
#line 2436
      fflush(_coverage_fout);
#line 2436
      __assert_fail("r", "mod_fastcgi.c", 2436U, "fcgi_demux_response");
      }
    }
#line 2410
    fprintf(_coverage_fout, "1571\n");
#line 2410
    fflush(_coverage_fout);
#line 2438
    b->used = (unsigned int )(r + 1);
#line 2439
    *(b->ptr + (b->used - 1U)) = (char )'\000';
  } else {
    {
#line 2441
    fprintf(_coverage_fout, "1572\n");
#line 2441
    fflush(_coverage_fout);
#line 2441
    log_error_write(srv, "mod_fastcgi.c", 2441U, "ssdsb",
                    "unexpected end-of-file (perhaps the fastcgi process died):",
                    "pid:", proc->pid, "socket:", proc->connection_name);
    }
#line 2410
    fprintf(_coverage_fout, "1573\n");
#line 2410
    fflush(_coverage_fout);
#line 2446
    return (-1);
  }
#line 2386
  fprintf(_coverage_fout, "1633\n");
#line 2386
  fflush(_coverage_fout);
#line 2453
  while (1) {
#line 2453
    fprintf(_coverage_fout, "1629\n");
#line 2453
    fflush(_coverage_fout);
#line 2453
    if (! (fin == 0)) {
#line 2453
      break;
    }
    {
#line 2457
    fprintf(_coverage_fout, "1574\n");
#line 2457
    fflush(_coverage_fout);
#line 2457
    tmp___4 = fastcgi_get_packet(srv, hctx, & packet);
    }
#line 2453
    fprintf(_coverage_fout, "1630\n");
#line 2453
    fflush(_coverage_fout);
#line 2457
    if (0 != tmp___4) {
#line 2459
      break;
    }
#line 2462
    switch (packet.type) {
#line 2462
    fprintf(_coverage_fout, "1622\n");
#line 2462
    fflush(_coverage_fout);
    case 6: 
#line 2464
    if (packet.len == 0U) {
#line 2464
      break;
    }
#line 2462
    fprintf(_coverage_fout, "1623\n");
#line 2462
    fflush(_coverage_fout);
#line 2467
    if (0 == con->file_started) {
#line 2467
      fprintf(_coverage_fout, "1602\n");
#line 2467
      fflush(_coverage_fout);
#line 2480
      if ((hctx->response_header)->used == 0U) {
        {
#line 2481
        fprintf(_coverage_fout, "1575\n");
#line 2481
        fflush(_coverage_fout);
#line 2481
        buffer_copy_string_buffer(hctx->response_header,
                                  (buffer const   *)packet.b);
        }
      } else {
        {
#line 2483
        fprintf(_coverage_fout, "1576\n");
#line 2483
        fflush(_coverage_fout);
#line 2483
        buffer_append_string_buffer(hctx->response_header,
                                    (buffer const   *)packet.b);
        }
      }
      {
#line 2486
      fprintf(_coverage_fout, "1577\n");
#line 2486
      fflush(_coverage_fout);
#line 2486
      c = buffer_search_string_len(hctx->response_header, "\r\n\r\n",
                                   sizeof("\r\n\r\n") - 1U);
      }
#line 2467
      fprintf(_coverage_fout, "1603\n");
#line 2467
      fflush(_coverage_fout);
#line 2486
      if ((unsigned int )((void *)0) != (unsigned int )c) {
#line 2486
        fprintf(_coverage_fout, "1578\n");
#line 2486
        fflush(_coverage_fout);
#line 2487
        blen = ((hctx->response_header)->used - (unsigned int )(c - (hctx->response_header)->ptr)) - 4U;
#line 2488
        (hctx->response_header)->used = (unsigned int )((c - (hctx->response_header)->ptr) + 3);
#line 2489
        c += 4;
      } else {
        {
#line 2490
        fprintf(_coverage_fout, "1579\n");
#line 2490
        fflush(_coverage_fout);
#line 2490
        c = buffer_search_string_len(hctx->response_header, "\n\n",
                                     sizeof("\n\n") - 1U);
        }
#line 2486
        fprintf(_coverage_fout, "1581\n");
#line 2486
        fflush(_coverage_fout);
#line 2490
        if ((unsigned int )((void *)0) != (unsigned int )c) {
#line 2490
          fprintf(_coverage_fout, "1580\n");
#line 2490
          fflush(_coverage_fout);
#line 2491
          blen = ((hctx->response_header)->used - (unsigned int )(c - (hctx->response_header)->ptr)) - 2U;
#line 2492
          (hctx->response_header)->used = (unsigned int )((c - (hctx->response_header)->ptr) + 2);
#line 2493
          c += 2;
        } else {
#line 2496
          break;
        }
      }
      {
#line 2500
      fprintf(_coverage_fout, "1582\n");
#line 2500
      fflush(_coverage_fout);
#line 2500
      fcgi_response_parse(srv, con, p, hctx->response_header);
#line 2500
      fprintf(_coverage_fout, "1583\n");
#line 2500
      fflush(_coverage_fout);
#line 2502
      con->file_started = 1;
      }
#line 2467
      fprintf(_coverage_fout, "1604\n");
#line 2467
      fflush(_coverage_fout);
#line 2504
      if ((int )host->mode == 2) {
#line 2504
        fprintf(_coverage_fout, "1587\n");
#line 2504
        fflush(_coverage_fout);
#line 2504
        if (con->http_status == 0) {
#line 2504
          fprintf(_coverage_fout, "1584\n");
#line 2504
          fflush(_coverage_fout);
#line 2508
          hctx->send_content_body = 0;
        } else {
#line 2504
          fprintf(_coverage_fout, "1586\n");
#line 2504
          fflush(_coverage_fout);
#line 2504
          if (con->http_status == 200) {
#line 2504
            fprintf(_coverage_fout, "1585\n");
#line 2504
            fflush(_coverage_fout);
#line 2508
            hctx->send_content_body = 0;
          }
        }
      }
#line 2467
      fprintf(_coverage_fout, "1605\n");
#line 2467
      fflush(_coverage_fout);
#line 2511
      if (host->allow_xsendfile) {
        {
#line 2511
        fprintf(_coverage_fout, "1588\n");
#line 2511
        fflush(_coverage_fout);
#line 2511
        tmp___6 = array_get_element(con->response.headers,
                                    "X-LIGHTTPD-send-file");
#line 2511
        fprintf(_coverage_fout, "1589\n");
#line 2511
        fflush(_coverage_fout);
#line 2511
        ds = (data_string *)tmp___6;
        }
#line 2511
        fprintf(_coverage_fout, "1595\n");
#line 2511
        fflush(_coverage_fout);
#line 2511
        if ((unsigned int )((void *)0) != (unsigned int )ds) {
          {
#line 2515
          fprintf(_coverage_fout, "1590\n");
#line 2515
          fflush(_coverage_fout);
#line 2515
          tmp___5 = stat_cache_get_entry(srv, con, ds->value, & sce);
          }
#line 2511
          fprintf(_coverage_fout, "1594\n");
#line 2511
          fflush(_coverage_fout);
#line 2515
          if (5 != (int )tmp___5) {
            {
#line 2518
            fprintf(_coverage_fout, "1591\n");
#line 2518
            fflush(_coverage_fout);
#line 2518
            http_chunk_append_file(srv, con, ds->value, 0LL, sce->st.st_size);
#line 2518
            fprintf(_coverage_fout, "1592\n");
#line 2518
            fflush(_coverage_fout);
#line 2519
            hctx->send_content_body = 0;
#line 2518
            fprintf(_coverage_fout, "1593\n");
#line 2518
            fflush(_coverage_fout);
#line 2520
            joblist_append(srv, con);
            }
          }
        }
      }
#line 2467
      fprintf(_coverage_fout, "1606\n");
#line 2467
      fflush(_coverage_fout);
#line 2525
      if (hctx->send_content_body) {
#line 2525
        fprintf(_coverage_fout, "1601\n");
#line 2525
        fflush(_coverage_fout);
#line 2525
        if (blen > 1U) {
#line 2525
          fprintf(_coverage_fout, "1600\n");
#line 2525
          fflush(_coverage_fout);
#line 2527
          if ((int )con->request.http_version == 1) {
#line 2527
            fprintf(_coverage_fout, "1597\n");
#line 2527
            fflush(_coverage_fout);
#line 2527
            if (! (con->parsed_response & (unsigned int )(1 << 2))) {
#line 2527
              fprintf(_coverage_fout, "1596\n");
#line 2527
              fflush(_coverage_fout);
#line 2529
              con->response.transfer_encoding = (enum __anonenum_transfer_encoding_96 )1;
            }
          }
          {
#line 2532
          fprintf(_coverage_fout, "1598\n");
#line 2532
          fflush(_coverage_fout);
#line 2532
          http_chunk_append_mem(srv, con, (char const   *)c, blen);
#line 2532
          fprintf(_coverage_fout, "1599\n");
#line 2532
          fflush(_coverage_fout);
#line 2533
          joblist_append(srv, con);
          }
        }
      }
    } else {
#line 2467
      fprintf(_coverage_fout, "1613\n");
#line 2467
      fflush(_coverage_fout);
#line 2535
      if (hctx->send_content_body) {
#line 2535
        fprintf(_coverage_fout, "1612\n");
#line 2535
        fflush(_coverage_fout);
#line 2535
        if ((packet.b)->used > 1U) {
#line 2535
          fprintf(_coverage_fout, "1611\n");
#line 2535
          fflush(_coverage_fout);
#line 2536
          if ((int )con->request.http_version == 1) {
#line 2536
            fprintf(_coverage_fout, "1608\n");
#line 2536
            fflush(_coverage_fout);
#line 2536
            if (! (con->parsed_response & (unsigned int )(1 << 2))) {
#line 2536
              fprintf(_coverage_fout, "1607\n");
#line 2536
              fflush(_coverage_fout);
#line 2539
              con->response.transfer_encoding = (enum __anonenum_transfer_encoding_96 )1;
            }
          }
          {
#line 2542
          fprintf(_coverage_fout, "1609\n");
#line 2542
          fflush(_coverage_fout);
#line 2542
          http_chunk_append_mem(srv, con, (char const   *)(packet.b)->ptr,
                                (packet.b)->used);
#line 2542
          fprintf(_coverage_fout, "1610\n");
#line 2542
          fflush(_coverage_fout);
#line 2543
          joblist_append(srv, con);
          }
        }
      }
    }
#line 2545
    break;
#line 2462
    fprintf(_coverage_fout, "1624\n");
#line 2462
    fflush(_coverage_fout);
    case 7: 
#line 2547
    if (packet.len == 0U) {
#line 2547
      break;
    }
    {
#line 2549
    fprintf(_coverage_fout, "1614\n");
#line 2549
    fflush(_coverage_fout);
#line 2549
    log_error_write(srv, "mod_fastcgi.c", 2549U, "sb", "FastCGI-stderr:",
                    packet.b);
    }
#line 2552
    break;
#line 2462
    fprintf(_coverage_fout, "1625\n");
#line 2462
    fflush(_coverage_fout);
    case 3: 
#line 2554
    con->file_finished = 1;
#line 2462
    fprintf(_coverage_fout, "1626\n");
#line 2462
    fflush(_coverage_fout);
#line 2556
    if ((int )host->mode != 2) {
      {
#line 2560
      fprintf(_coverage_fout, "1615\n");
#line 2560
      fflush(_coverage_fout);
#line 2560
      http_chunk_append_mem(srv, con, (char const   *)((void *)0), 0U);
#line 2560
      fprintf(_coverage_fout, "1616\n");
#line 2560
      fflush(_coverage_fout);
#line 2561
      joblist_append(srv, con);
      }
    } else {
#line 2556
      fprintf(_coverage_fout, "1620\n");
#line 2556
      fflush(_coverage_fout);
#line 2556
      if (! (con->http_status == 0)) {
#line 2556
        fprintf(_coverage_fout, "1619\n");
#line 2556
        fflush(_coverage_fout);
#line 2556
        if (! (con->http_status == 200)) {
          {
#line 2560
          fprintf(_coverage_fout, "1617\n");
#line 2560
          fflush(_coverage_fout);
#line 2560
          http_chunk_append_mem(srv, con, (char const   *)((void *)0), 0U);
#line 2560
          fprintf(_coverage_fout, "1618\n");
#line 2560
          fflush(_coverage_fout);
#line 2561
          joblist_append(srv, con);
          }
        }
      }
    }
#line 2462
    fprintf(_coverage_fout, "1627\n");
#line 2462
    fflush(_coverage_fout);
#line 2564
    fin = 1;
#line 2565
    break;
    default: 
    {
#line 2567
    fprintf(_coverage_fout, "1621\n");
#line 2567
    fflush(_coverage_fout);
#line 2567
    log_error_write(srv, "mod_fastcgi.c", 2567U, "sd",
                    "FastCGI: header.type not handled: ", packet.type);
    }
#line 2569
    break;
    }
    {
#line 2571
    fprintf(_coverage_fout, "1628\n");
#line 2571
    fflush(_coverage_fout);
#line 2571
    buffer_free(packet.b);
    }
  }
#line 2386
  fprintf(_coverage_fout, "1634\n");
#line 2386
  fflush(_coverage_fout);
#line 2574
  return (fin);
}
}
#line 2577 "mod_fastcgi.c"
static int fcgi_restart_dead_procs(server *srv , plugin_data *p ,
                                   fcgi_extension_host *host ) 
{ fcgi_proc *proc ;
  int status ;
  __pid_t tmp ;
  union __anonunion_156 __constr_expr_0 ;
  union __anonunion_157 __constr_expr_1 ;
  union __anonunion_158 __constr_expr_2 ;
  int tmp___0 ;

  {
#line 2577
  fprintf(_coverage_fout, "1667\n");
#line 2577
  fflush(_coverage_fout);
#line 2580
  proc = host->first;
#line 2577
  fprintf(_coverage_fout, "1668\n");
#line 2577
  fflush(_coverage_fout);
#line 2580
  while (1) {
#line 2580
    fprintf(_coverage_fout, "1664\n");
#line 2580
    fflush(_coverage_fout);
#line 2580
    if (! proc) {
#line 2580
      break;
    }
#line 2580
    fprintf(_coverage_fout, "1665\n");
#line 2580
    fflush(_coverage_fout);
#line 2583
    if (p->conf.debug > 2) {
      {
#line 2584
      fprintf(_coverage_fout, "1635\n");
#line 2584
      fflush(_coverage_fout);
#line 2584
      log_error_write(srv, "mod_fastcgi.c", 2584U, "sbdddd", "proc:",
                      proc->connection_name, proc->state, proc->is_local,
                      proc->load, proc->pid);
      }
    }
#line 2597
    switch ((int )proc->state) {
    case 5: 
    case 0: 
    {
#line 2601
    fprintf(_coverage_fout, "1636\n");
#line 2601
    fflush(_coverage_fout);
#line 2601
    __assert_fail("0", "mod_fastcgi.c", 2601U, "fcgi_restart_dead_procs");
    }
#line 2603
    break;
    case 1: 
#line 2605
    break;
#line 2597
    fprintf(_coverage_fout, "1660\n");
#line 2597
    fflush(_coverage_fout);
    case 2: 
#line 2607
    if (srv->cur_ts <= proc->disabled_until) {
#line 2607
      break;
    }
    {
#line 2609
    fprintf(_coverage_fout, "1637\n");
#line 2609
    fflush(_coverage_fout);
#line 2609
    proc->state = (enum __anonenum_state_139 )1;
#line 2609
    fprintf(_coverage_fout, "1638\n");
#line 2609
    fflush(_coverage_fout);
#line 2610
    (host->active_procs) ++;
#line 2609
    fprintf(_coverage_fout, "1639\n");
#line 2609
    fflush(_coverage_fout);
#line 2612
    log_error_write(srv, "mod_fastcgi.c", 2612U, "sbdb",
                    "fcgi-server re-enabled:", host->host, host->port,
                    host->unixsocket);
    }
#line 2616
    break;
#line 2597
    fprintf(_coverage_fout, "1661\n");
#line 2597
    fflush(_coverage_fout);
    case 3: 
#line 2619
    if (! proc->is_local) {
#line 2619
      break;
    }
    {
#line 2623
    fprintf(_coverage_fout, "1640\n");
#line 2623
    fflush(_coverage_fout);
#line 2623
    tmp = waitpid(proc->pid, & status, 1);
    }
#line 2623
    switch (tmp) {
    case 0: 
#line 2626
    break;
    case -1: 
#line 2628
    break;
#line 2623
    fprintf(_coverage_fout, "1646\n");
#line 2623
    fflush(_coverage_fout);
    default: 
#line 2630
    __constr_expr_2.__in = status;
#line 2623
    fprintf(_coverage_fout, "1647\n");
#line 2623
    fflush(_coverage_fout);
#line 2630
    if (! ((__constr_expr_2.__i & 127) == 0)) {
#line 2630
      fprintf(_coverage_fout, "1644\n");
#line 2630
      fflush(_coverage_fout);
#line 2636
      __constr_expr_1.__in = status;
#line 2630
      fprintf(_coverage_fout, "1645\n");
#line 2630
      fflush(_coverage_fout);
#line 2636
      if ((int )((signed char )((__constr_expr_1.__i & 127) + 1)) >> 1 > 0) {
        {
#line 2637
        fprintf(_coverage_fout, "1641\n");
#line 2637
        fflush(_coverage_fout);
#line 2637
        __constr_expr_0.__in = status;
#line 2637
        fprintf(_coverage_fout, "1642\n");
#line 2637
        fflush(_coverage_fout);
#line 2637
        log_error_write(srv, "mod_fastcgi.c", 2637U, "sd", "child signaled:",
                        __constr_expr_0.__i & 127);
        }
      } else {
        {
#line 2641
        fprintf(_coverage_fout, "1643\n");
#line 2641
        fflush(_coverage_fout);
#line 2641
        log_error_write(srv, "mod_fastcgi.c", 2641U, "sd",
                        "child died somehow:", status);
        }
      }
    }
#line 2623
    fprintf(_coverage_fout, "1648\n");
#line 2623
    fflush(_coverage_fout);
#line 2646
    proc->state = (enum __anonenum_state_139 )4;
#line 2647
    break;
    }
#line 2597
    fprintf(_coverage_fout, "1662\n");
#line 2597
    fflush(_coverage_fout);
#line 2651
    if ((int )proc->state != 4) {
#line 2651
      break;
    }
#line 2597
    fprintf(_coverage_fout, "1663\n");
#line 2597
    fflush(_coverage_fout);
    case 4: 
#line 2657
    if (proc->is_local) {
#line 2657
      fprintf(_coverage_fout, "1653\n");
#line 2657
      fflush(_coverage_fout);
#line 2660
      if (proc->load != 0U) {
#line 2660
        break;
      }
#line 2657
      fprintf(_coverage_fout, "1654\n");
#line 2657
      fflush(_coverage_fout);
#line 2664
      if (p->conf.debug) {
        {
#line 2665
        fprintf(_coverage_fout, "1649\n");
#line 2665
        fflush(_coverage_fout);
#line 2665
        log_error_write(srv, "mod_fastcgi.c", 2665U, "ssbsdsd",
                        "--- fastcgi spawning", "\n\tsocket",
                        proc->connection_name, "\n\tcurrent:", 1, "/",
                        host->min_procs);
        }
      }
      {
#line 2671
      fprintf(_coverage_fout, "1650\n");
#line 2671
      fflush(_coverage_fout);
#line 2671
      tmp___0 = fcgi_spawn_connection(srv, p, host, proc);
      }
#line 2657
      fprintf(_coverage_fout, "1655\n");
#line 2657
      fflush(_coverage_fout);
#line 2671
      if (tmp___0) {
        {
#line 2672
        fprintf(_coverage_fout, "1651\n");
#line 2672
        fflush(_coverage_fout);
#line 2672
        log_error_write(srv, "mod_fastcgi.c", 2672U, "s",
                        "ERROR: spawning fcgi failed.");
        }
#line 2671
        fprintf(_coverage_fout, "1652\n");
#line 2671
        fflush(_coverage_fout);
#line 2674
        return (5);
      }
    } else {
#line 2657
      fprintf(_coverage_fout, "1659\n");
#line 2657
      fflush(_coverage_fout);
#line 2677
      if (srv->cur_ts <= proc->disabled_until) {
#line 2677
        break;
      }
      {
#line 2679
      fprintf(_coverage_fout, "1656\n");
#line 2679
      fflush(_coverage_fout);
#line 2679
      proc->state = (enum __anonenum_state_139 )1;
#line 2679
      fprintf(_coverage_fout, "1657\n");
#line 2679
      fflush(_coverage_fout);
#line 2680
      (host->active_procs) ++;
#line 2679
      fprintf(_coverage_fout, "1658\n");
#line 2679
      fflush(_coverage_fout);
#line 2682
      log_error_write(srv, "mod_fastcgi.c", 2682U, "sb",
                      "fcgi-server re-enabled:", proc->connection_name);
      }
    }
#line 2686
    break;
    }
#line 2580
    fprintf(_coverage_fout, "1666\n");
#line 2580
    fflush(_coverage_fout);
#line 2580
    proc = proc->next;
  }
#line 2577
  fprintf(_coverage_fout, "1669\n");
#line 2577
  fflush(_coverage_fout);
#line 2690
  return (0);
}
}
#line 2693 "mod_fastcgi.c"
static handler_t fcgi_write_request(server *srv , handler_ctx *hctx ) 
{ plugin_data *p ;
  fcgi_extension_host *host ;
  connection *con ;
  fcgi_proc *proc ;
  int ret ;
  int socket_error ;
  socklen_t socket_error_len ;
  int *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  size_t tmp___3 ;
  int *tmp___4 ;
  int *tmp___5 ;
  int *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  char *tmp___9 ;
  int tmp___10 ;
  connection_result_t tmp___11 ;
  size_t tmp___12 ;
  size_t tmp___13 ;
  size_t tmp___14 ;
  size_t tmp___15 ;
  size_t tmp___16 ;
  int *tmp___17 ;
  int *tmp___18 ;
  int *tmp___19 ;
  char *tmp___20 ;

  {
#line 2693
  fprintf(_coverage_fout, "1836\n");
#line 2693
  fflush(_coverage_fout);
#line 2694
  p = hctx->plugin_data;
#line 2695
  host = hctx->host;
#line 2696
  con = hctx->remote_conn;
#line 2693
  fprintf(_coverage_fout, "1837\n");
#line 2693
  fflush(_coverage_fout);
#line 2702
  if (! host) {
    {
#line 2704
    fprintf(_coverage_fout, "1670\n");
#line 2704
    fflush(_coverage_fout);
#line 2704
    log_error_write(srv, "mod_fastcgi.c", 2704U, "sxddd", "write-req: error",
                    host, (host->host)->used, host->port,
                    (host->unixsocket)->used);
#line 2704
    fprintf(_coverage_fout, "1671\n");
#line 2704
    fflush(_coverage_fout);
#line 2711
    (hctx->proc)->disabled_until = srv->cur_ts + 10L;
#line 2704
    fprintf(_coverage_fout, "1672\n");
#line 2704
    fflush(_coverage_fout);
#line 2712
    (hctx->proc)->state = (enum __anonenum_state_139 )4;
    }
#line 2702
    fprintf(_coverage_fout, "1673\n");
#line 2702
    fflush(_coverage_fout);
#line 2714
    return ((enum __anonenum_handler_t_43 )5);
  } else {
#line 2702
    fprintf(_coverage_fout, "1680\n");
#line 2702
    fflush(_coverage_fout);
#line 2702
    if (! (host->host)->used) {
      goto _L;
    } else {
#line 2702
      fprintf(_coverage_fout, "1679\n");
#line 2702
      fflush(_coverage_fout);
#line 2702
      if (! host->port) {
#line 2702
        fprintf(_coverage_fout, "1678\n");
#line 2702
        fflush(_coverage_fout);
        _L: 
#line 2702
        if (! (host->unixsocket)->used) {
          {
#line 2704
          fprintf(_coverage_fout, "1674\n");
#line 2704
          fflush(_coverage_fout);
#line 2704
          log_error_write(srv, "mod_fastcgi.c", 2704U, "sxddd",
                          "write-req: error", host, (host->host)->used,
                          host->port, (host->unixsocket)->used);
#line 2704
          fprintf(_coverage_fout, "1675\n");
#line 2704
          fflush(_coverage_fout);
#line 2711
          (hctx->proc)->disabled_until = srv->cur_ts + 10L;
#line 2704
          fprintf(_coverage_fout, "1676\n");
#line 2704
          fflush(_coverage_fout);
#line 2712
          (hctx->proc)->state = (enum __anonenum_state_139 )4;
          }
#line 2702
          fprintf(_coverage_fout, "1677\n");
#line 2702
          fflush(_coverage_fout);
#line 2714
          return ((enum __anonenum_handler_t_43 )5);
        }
      }
    }
  }
#line 2693
  fprintf(_coverage_fout, "1838\n");
#line 2693
  fflush(_coverage_fout);
#line 2718
  if ((int )hctx->state == 2) {
    {
#line 2720
    fprintf(_coverage_fout, "1681\n");
#line 2720
    fflush(_coverage_fout);
#line 2720
    socket_error_len = sizeof(socket_error);
#line 2720
    fprintf(_coverage_fout, "1682\n");
#line 2720
    fflush(_coverage_fout);
#line 2723
    tmp___1 = getsockopt(hctx->fd, 1, 4,
                         (void */* __restrict  */)((void *)(& socket_error)),
                         (socklen_t */* __restrict  */)(& socket_error_len));
    }
#line 2718
    fprintf(_coverage_fout, "1707\n");
#line 2718
    fflush(_coverage_fout);
#line 2723
    if (0 != tmp___1) {
      {
#line 2724
      fprintf(_coverage_fout, "1683\n");
#line 2724
      fflush(_coverage_fout);
#line 2724
      tmp = __errno_location();
#line 2724
      fprintf(_coverage_fout, "1684\n");
#line 2724
      fflush(_coverage_fout);
#line 2724
      tmp___0 = strerror(*tmp);
#line 2724
      fprintf(_coverage_fout, "1685\n");
#line 2724
      fflush(_coverage_fout);
#line 2724
      log_error_write(srv, "mod_fastcgi.c", 2724U, "ss", "getsockopt failed:",
                      tmp___0);
#line 2724
      fprintf(_coverage_fout, "1686\n");
#line 2724
      fflush(_coverage_fout);
#line 2727
      (hctx->proc)->disabled_until = srv->cur_ts + 10L;
#line 2724
      fprintf(_coverage_fout, "1687\n");
#line 2724
      fflush(_coverage_fout);
#line 2728
      (hctx->proc)->state = (enum __anonenum_state_139 )4;
      }
#line 2723
      fprintf(_coverage_fout, "1688\n");
#line 2723
      fflush(_coverage_fout);
#line 2730
      return ((enum __anonenum_handler_t_43 )5);
    }
#line 2718
    fprintf(_coverage_fout, "1708\n");
#line 2718
    fflush(_coverage_fout);
#line 2732
    if (socket_error != 0) {
#line 2732
      fprintf(_coverage_fout, "1702\n");
#line 2732
      fflush(_coverage_fout);
#line 2733
      if (! (hctx->proc)->is_local) {
        {
#line 2736
        fprintf(_coverage_fout, "1689\n");
#line 2736
        fflush(_coverage_fout);
#line 2736
        tmp___2 = strerror(socket_error);
#line 2736
        fprintf(_coverage_fout, "1690\n");
#line 2736
        fflush(_coverage_fout);
#line 2736
        log_error_write(srv, "mod_fastcgi.c", 2736U, "sssb",
                        "establishing connection failed:", tmp___2, "socket:",
                        (hctx->proc)->connection_name);
        }
      } else {
#line 2733
        fprintf(_coverage_fout, "1693\n");
#line 2733
        fflush(_coverage_fout);
#line 2733
        if (p->conf.debug) {
          {
#line 2736
          fprintf(_coverage_fout, "1691\n");
#line 2736
          fflush(_coverage_fout);
#line 2736
          tmp___2 = strerror(socket_error);
#line 2736
          fprintf(_coverage_fout, "1692\n");
#line 2736
          fflush(_coverage_fout);
#line 2736
          log_error_write(srv, "mod_fastcgi.c", 2736U, "sssb",
                          "establishing connection failed:", tmp___2, "socket:",
                          (hctx->proc)->connection_name);
          }
        }
      }
#line 2732
      fprintf(_coverage_fout, "1703\n");
#line 2732
      fflush(_coverage_fout);
#line 2741
      (hctx->proc)->disabled_until = srv->cur_ts + 5L;
#line 2732
      fprintf(_coverage_fout, "1704\n");
#line 2732
      fflush(_coverage_fout);
#line 2743
      if ((hctx->proc)->is_local) {
#line 2743
        fprintf(_coverage_fout, "1694\n");
#line 2743
        fflush(_coverage_fout);
#line 2744
        (hctx->proc)->state = (enum __anonenum_state_139 )3;
      } else {
#line 2743
        fprintf(_coverage_fout, "1695\n");
#line 2743
        fflush(_coverage_fout);
#line 2746
        (hctx->proc)->state = (enum __anonenum_state_139 )4;
      }
      {
#line 2749
      fprintf(_coverage_fout, "1696\n");
#line 2749
      fflush(_coverage_fout);
#line 2749
      (hctx->proc)->state = (enum __anonenum_state_139 )4;
#line 2749
      fprintf(_coverage_fout, "1697\n");
#line 2749
      fflush(_coverage_fout);
#line 2751
      fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
#line 2749
      fprintf(_coverage_fout, "1698\n");
#line 2749
      fflush(_coverage_fout);
#line 2752
      buffer_append_string(p->statuskey, ".died");
      }
#line 2732
      fprintf(_coverage_fout, "1705\n");
#line 2732
      fflush(_coverage_fout);
#line 2754
      if ((p->statuskey)->used) {
#line 2754
        fprintf(_coverage_fout, "1699\n");
#line 2754
        fflush(_coverage_fout);
#line 2754
        tmp___3 = (p->statuskey)->used - 1U;
      } else {
#line 2754
        fprintf(_coverage_fout, "1700\n");
#line 2754
        fflush(_coverage_fout);
#line 2754
        tmp___3 = 0U;
      }
      {
#line 2754
      fprintf(_coverage_fout, "1701\n");
#line 2754
      fflush(_coverage_fout);
#line 2754
      status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___3);
      }
#line 2732
      fprintf(_coverage_fout, "1706\n");
#line 2732
      fflush(_coverage_fout);
#line 2756
      return ((enum __anonenum_handler_t_43 )5);
    }
#line 2718
    fprintf(_coverage_fout, "1709\n");
#line 2718
    fflush(_coverage_fout);
#line 2759
    hctx->state = (enum __anonenum_fcgi_connection_state_t_147 )3;
  }
#line 2763
  switch ((int )hctx->state) {
  case 2: 
#line 2766
  break;
#line 2763
  fprintf(_coverage_fout, "1819\n");
#line 2763
  fflush(_coverage_fout);
  case 1: 
#line 2769
  hctx->proc = (fcgi_proc *)((void *)0);
#line 2771
  proc = (hctx->host)->first;
#line 2763
  fprintf(_coverage_fout, "1820\n");
#line 2763
  fflush(_coverage_fout);
#line 2771
  while (1) {
#line 2771
    fprintf(_coverage_fout, "1711\n");
#line 2771
    fflush(_coverage_fout);
#line 2771
    if (proc) {
#line 2771
      fprintf(_coverage_fout, "1710\n");
#line 2771
      fflush(_coverage_fout);
#line 2771
      if (! ((int )proc->state != 1)) {
#line 2771
        break;
      }
    } else {
#line 2771
      break;
    }
#line 2771
    fprintf(_coverage_fout, "1712\n");
#line 2771
    fflush(_coverage_fout);
#line 2771
    proc = proc->next;
  }
#line 2763
  fprintf(_coverage_fout, "1821\n");
#line 2763
  fflush(_coverage_fout);
#line 2776
  if ((unsigned int )proc == (unsigned int )((void *)0)) {
#line 2776
    fprintf(_coverage_fout, "1713\n");
#line 2776
    fflush(_coverage_fout);
#line 2777
    hctx->fde_ndx = -1;
#line 2776
    fprintf(_coverage_fout, "1714\n");
#line 2776
    fflush(_coverage_fout);
#line 2779
    return ((enum __anonenum_handler_t_43 )5);
  }
#line 2763
  fprintf(_coverage_fout, "1822\n");
#line 2763
  fflush(_coverage_fout);
#line 2782
  hctx->proc = proc;
#line 2785
  proc = proc->next;
#line 2763
  fprintf(_coverage_fout, "1823\n");
#line 2763
  fflush(_coverage_fout);
#line 2785
  while (1) {
#line 2785
    fprintf(_coverage_fout, "1716\n");
#line 2785
    fflush(_coverage_fout);
#line 2785
    if (! proc) {
#line 2785
      break;
    }
#line 2785
    fprintf(_coverage_fout, "1717\n");
#line 2785
    fflush(_coverage_fout);
#line 2786
    if ((int )proc->state != 1) {
      goto __Cont;
    }
#line 2785
    fprintf(_coverage_fout, "1718\n");
#line 2785
    fflush(_coverage_fout);
#line 2787
    if (proc->load < (hctx->proc)->load) {
#line 2787
      fprintf(_coverage_fout, "1715\n");
#line 2787
      fflush(_coverage_fout);
#line 2787
      hctx->proc = proc;
    }
#line 2785
    fprintf(_coverage_fout, "1719\n");
#line 2785
    fflush(_coverage_fout);
    __Cont: 
#line 2785
    proc = proc->next;
  }
#line 2763
  fprintf(_coverage_fout, "1824\n");
#line 2763
  fflush(_coverage_fout);
#line 2790
  if ((host->unixsocket)->used) {
#line 2790
    fprintf(_coverage_fout, "1720\n");
#line 2790
    fflush(_coverage_fout);
#line 2790
    ret = 1;
  } else {
#line 2790
    fprintf(_coverage_fout, "1721\n");
#line 2790
    fflush(_coverage_fout);
#line 2790
    ret = 2;
  }
  {
#line 2792
  fprintf(_coverage_fout, "1722\n");
#line 2792
  fflush(_coverage_fout);
#line 2792
  hctx->fd = socket(ret, 1, 0);
  }
#line 2763
  fprintf(_coverage_fout, "1825\n");
#line 2763
  fflush(_coverage_fout);
#line 2792
  if (-1 == hctx->fd) {
    {
#line 2793
    fprintf(_coverage_fout, "1723\n");
#line 2793
    fflush(_coverage_fout);
#line 2793
    tmp___4 = __errno_location();
    }
#line 2792
    fprintf(_coverage_fout, "1733\n");
#line 2792
    fflush(_coverage_fout);
#line 2793
    if (*tmp___4 == 24) {
      {
#line 2795
      fprintf(_coverage_fout, "1724\n");
#line 2795
      fflush(_coverage_fout);
#line 2795
      log_error_write(srv, "mod_fastcgi.c", 2795U, "sd",
                      "wait for fd at connection:", con->fd);
      }
#line 2793
      fprintf(_coverage_fout, "1725\n");
#line 2793
      fflush(_coverage_fout);
#line 2798
      return ((enum __anonenum_handler_t_43 )6);
    } else {
      {
#line 2793
      fprintf(_coverage_fout, "1726\n");
#line 2793
      fflush(_coverage_fout);
#line 2793
      tmp___5 = __errno_location();
      }
#line 2793
      fprintf(_coverage_fout, "1729\n");
#line 2793
      fflush(_coverage_fout);
#line 2793
      if (*tmp___5 == 4) {
        {
#line 2795
        fprintf(_coverage_fout, "1727\n");
#line 2795
        fflush(_coverage_fout);
#line 2795
        log_error_write(srv, "mod_fastcgi.c", 2795U, "sd",
                        "wait for fd at connection:", con->fd);
        }
#line 2793
        fprintf(_coverage_fout, "1728\n");
#line 2793
        fflush(_coverage_fout);
#line 2798
        return ((enum __anonenum_handler_t_43 )6);
      }
    }
    {
#line 2801
    fprintf(_coverage_fout, "1730\n");
#line 2801
    fflush(_coverage_fout);
#line 2801
    tmp___6 = __errno_location();
#line 2801
    fprintf(_coverage_fout, "1731\n");
#line 2801
    fflush(_coverage_fout);
#line 2801
    tmp___7 = strerror(*tmp___6);
#line 2801
    fprintf(_coverage_fout, "1732\n");
#line 2801
    fflush(_coverage_fout);
#line 2801
    log_error_write(srv, "mod_fastcgi.c", 2801U, "ssdd", "socket failed:",
                    tmp___7, srv->cur_fds, srv->max_fds);
    }
#line 2792
    fprintf(_coverage_fout, "1734\n");
#line 2792
    fflush(_coverage_fout);
#line 2803
    return ((enum __anonenum_handler_t_43 )5);
  }
  {
#line 2805
  fprintf(_coverage_fout, "1735\n");
#line 2805
  fflush(_coverage_fout);
#line 2805
  hctx->fde_ndx = -1;
#line 2805
  fprintf(_coverage_fout, "1736\n");
#line 2805
  fflush(_coverage_fout);
#line 2807
  (srv->cur_fds) ++;
#line 2805
  fprintf(_coverage_fout, "1737\n");
#line 2805
  fflush(_coverage_fout);
#line 2809
  fdevent_register(srv->ev, hctx->fd, & fcgi_handle_fdevent, (void *)hctx);
#line 2805
  fprintf(_coverage_fout, "1738\n");
#line 2805
  fflush(_coverage_fout);
#line 2811
  tmp___10 = fdevent_fcntl_set(srv->ev, hctx->fd);
  }
#line 2763
  fprintf(_coverage_fout, "1826\n");
#line 2763
  fflush(_coverage_fout);
#line 2811
  if (-1 == tmp___10) {
    {
#line 2812
    fprintf(_coverage_fout, "1739\n");
#line 2812
    fflush(_coverage_fout);
#line 2812
    tmp___8 = __errno_location();
#line 2812
    fprintf(_coverage_fout, "1740\n");
#line 2812
    fflush(_coverage_fout);
#line 2812
    tmp___9 = strerror(*tmp___8);
#line 2812
    fprintf(_coverage_fout, "1741\n");
#line 2812
    fflush(_coverage_fout);
#line 2812
    log_error_write(srv, "mod_fastcgi.c", 2812U, "ss", "fcntl failed:", tmp___9);
    }
#line 2811
    fprintf(_coverage_fout, "1742\n");
#line 2811
    fflush(_coverage_fout);
#line 2815
    return ((enum __anonenum_handler_t_43 )5);
  }
#line 2763
  fprintf(_coverage_fout, "1827\n");
#line 2763
  fflush(_coverage_fout);
#line 2818
  if ((hctx->proc)->is_local) {
#line 2818
    fprintf(_coverage_fout, "1743\n");
#line 2818
    fflush(_coverage_fout);
#line 2819
    hctx->pid = (hctx->proc)->pid;
  }
  {
#line 2822
  fprintf(_coverage_fout, "1744\n");
#line 2822
  fflush(_coverage_fout);
#line 2822
  tmp___11 = fcgi_establish_connection(srv, hctx);
  }
#line 2822
  switch ((int )tmp___11) {
  case 2: 
  {
#line 2826
  fprintf(_coverage_fout, "1745\n");
#line 2826
  fflush(_coverage_fout);
#line 2826
  fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
#line 2826
  fprintf(_coverage_fout, "1746\n");
#line 2826
  fflush(_coverage_fout);
#line 2828
  fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )2);
  }
#line 2822
  fprintf(_coverage_fout, "1764\n");
#line 2822
  fflush(_coverage_fout);
#line 2829
  return ((enum __anonenum_handler_t_43 )4);
  case 3: 
  {
#line 2834
  fprintf(_coverage_fout, "1747\n");
#line 2834
  fflush(_coverage_fout);
#line 2834
  log_error_write(srv, "mod_fastcgi.c", 2834U, "ssdsd",
                  "backend is overloaded; we\'ll disable it for 2 seconds and send the request to another backend instead:",
                  "reconnects:", hctx->reconnects, "load:", host->load);
#line 2834
  fprintf(_coverage_fout, "1748\n");
#line 2834
  fflush(_coverage_fout);
#line 2840
  (hctx->proc)->disabled_until = srv->cur_ts + 2L;
#line 2834
  fprintf(_coverage_fout, "1749\n");
#line 2834
  fflush(_coverage_fout);
#line 2841
  (hctx->proc)->state = (enum __anonenum_state_139 )2;
#line 2834
  fprintf(_coverage_fout, "1750\n");
#line 2834
  fflush(_coverage_fout);
#line 2843
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
#line 2834
  fprintf(_coverage_fout, "1751\n");
#line 2834
  fflush(_coverage_fout);
#line 2844
  buffer_append_string(p->statuskey, ".overloaded");
  }
#line 2822
  fprintf(_coverage_fout, "1765\n");
#line 2822
  fflush(_coverage_fout);
#line 2846
  if ((p->statuskey)->used) {
#line 2846
    fprintf(_coverage_fout, "1752\n");
#line 2846
    fflush(_coverage_fout);
#line 2846
    tmp___12 = (p->statuskey)->used - 1U;
  } else {
#line 2846
    fprintf(_coverage_fout, "1753\n");
#line 2846
    fflush(_coverage_fout);
#line 2846
    tmp___12 = 0U;
  }
  {
#line 2846
  fprintf(_coverage_fout, "1754\n");
#line 2846
  fflush(_coverage_fout);
#line 2846
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___12);
  }
#line 2822
  fprintf(_coverage_fout, "1766\n");
#line 2822
  fflush(_coverage_fout);
#line 2848
  return ((enum __anonenum_handler_t_43 )5);
#line 2822
  fprintf(_coverage_fout, "1767\n");
#line 2822
  fflush(_coverage_fout);
  case 4: 
#line 2857
  (hctx->proc)->disabled_until = srv->cur_ts + 5L;
#line 2822
  fprintf(_coverage_fout, "1768\n");
#line 2822
  fflush(_coverage_fout);
#line 2858
  if ((hctx->proc)->is_local) {
#line 2858
    fprintf(_coverage_fout, "1755\n");
#line 2858
    fflush(_coverage_fout);
#line 2859
    (hctx->proc)->state = (enum __anonenum_state_139 )3;
  } else {
#line 2858
    fprintf(_coverage_fout, "1756\n");
#line 2858
    fflush(_coverage_fout);
#line 2861
    (hctx->proc)->state = (enum __anonenum_state_139 )4;
  }
  {
#line 2864
  fprintf(_coverage_fout, "1757\n");
#line 2864
  fflush(_coverage_fout);
#line 2864
  log_error_write(srv, "mod_fastcgi.c", 2864U, "ssdsd",
                  "backend died; we\'ll disable it for 5 seconds and send the request to another backend instead:",
                  "reconnects:", hctx->reconnects, "load:", host->load);
#line 2864
  fprintf(_coverage_fout, "1758\n");
#line 2864
  fflush(_coverage_fout);
#line 2869
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
#line 2864
  fprintf(_coverage_fout, "1759\n");
#line 2864
  fflush(_coverage_fout);
#line 2870
  buffer_append_string(p->statuskey, ".died");
  }
#line 2822
  fprintf(_coverage_fout, "1769\n");
#line 2822
  fflush(_coverage_fout);
#line 2872
  if ((p->statuskey)->used) {
#line 2872
    fprintf(_coverage_fout, "1760\n");
#line 2872
    fflush(_coverage_fout);
#line 2872
    tmp___13 = (p->statuskey)->used - 1U;
  } else {
#line 2872
    fprintf(_coverage_fout, "1761\n");
#line 2872
    fflush(_coverage_fout);
#line 2872
    tmp___13 = 0U;
  }
  {
#line 2872
  fprintf(_coverage_fout, "1762\n");
#line 2872
  fflush(_coverage_fout);
#line 2872
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___13);
  }
#line 2822
  fprintf(_coverage_fout, "1770\n");
#line 2822
  fflush(_coverage_fout);
#line 2874
  return ((enum __anonenum_handler_t_43 )5);
  case 1: 
  {
#line 2878
  fprintf(_coverage_fout, "1763\n");
#line 2878
  fflush(_coverage_fout);
#line 2878
  fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )3);
  }
#line 2880
  break;
  case 0: 
#line 2882
  break;
  }
  case 3: 
  {
#line 2888
  fprintf(_coverage_fout, "1771\n");
#line 2888
  fflush(_coverage_fout);
#line 2888
  ((hctx->proc)->load) ++;
#line 2888
  fprintf(_coverage_fout, "1772\n");
#line 2888
  fflush(_coverage_fout);
#line 2889
  (hctx->proc)->last_used = srv->cur_ts;
#line 2888
  fprintf(_coverage_fout, "1773\n");
#line 2888
  fflush(_coverage_fout);
#line 2890
  hctx->got_proc = 1;
#line 2888
  fprintf(_coverage_fout, "1774\n");
#line 2888
  fflush(_coverage_fout);
#line 2892
  status_counter_inc(srv, "fastcgi.requests", sizeof("fastcgi.requests") - 1U);
#line 2888
  fprintf(_coverage_fout, "1775\n");
#line 2888
  fflush(_coverage_fout);
#line 2893
  status_counter_inc(srv, "fastcgi.active-requests",
                     sizeof("fastcgi.active-requests") - 1U);
#line 2888
  fprintf(_coverage_fout, "1776\n");
#line 2888
  fflush(_coverage_fout);
#line 2895
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
#line 2888
  fprintf(_coverage_fout, "1777\n");
#line 2888
  fflush(_coverage_fout);
#line 2896
  buffer_append_string(p->statuskey, ".connected");
  }
#line 2763
  fprintf(_coverage_fout, "1828\n");
#line 2763
  fflush(_coverage_fout);
#line 2898
  if ((p->statuskey)->used) {
#line 2898
    fprintf(_coverage_fout, "1778\n");
#line 2898
    fflush(_coverage_fout);
#line 2898
    tmp___14 = (p->statuskey)->used - 1U;
  } else {
#line 2898
    fprintf(_coverage_fout, "1779\n");
#line 2898
    fflush(_coverage_fout);
#line 2898
    tmp___14 = 0U;
  }
  {
#line 2898
  fprintf(_coverage_fout, "1780\n");
#line 2898
  fflush(_coverage_fout);
#line 2898
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___14);
#line 2898
  fprintf(_coverage_fout, "1781\n");
#line 2898
  fflush(_coverage_fout);
#line 2901
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
#line 2898
  fprintf(_coverage_fout, "1782\n");
#line 2898
  fflush(_coverage_fout);
#line 2902
  buffer_append_string(p->statuskey, ".load");
  }
#line 2763
  fprintf(_coverage_fout, "1829\n");
#line 2763
  fflush(_coverage_fout);
#line 2904
  if ((p->statuskey)->used) {
#line 2904
    fprintf(_coverage_fout, "1783\n");
#line 2904
    fflush(_coverage_fout);
#line 2904
    tmp___15 = (p->statuskey)->used - 1U;
  } else {
#line 2904
    fprintf(_coverage_fout, "1784\n");
#line 2904
    fflush(_coverage_fout);
#line 2904
    tmp___15 = 0U;
  }
  {
#line 2904
  fprintf(_coverage_fout, "1785\n");
#line 2904
  fflush(_coverage_fout);
#line 2904
  status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp___15,
                     (int )(hctx->proc)->load);
#line 2904
  fprintf(_coverage_fout, "1786\n");
#line 2904
  fflush(_coverage_fout);
#line 2907
  fastcgi_status_copy_procname(p->statuskey, hctx->host,
                               (fcgi_proc *)((void *)0));
#line 2904
  fprintf(_coverage_fout, "1787\n");
#line 2904
  fflush(_coverage_fout);
#line 2908
  buffer_append_string(p->statuskey, ".load");
  }
#line 2763
  fprintf(_coverage_fout, "1830\n");
#line 2763
  fflush(_coverage_fout);
#line 2910
  if ((p->statuskey)->used) {
#line 2910
    fprintf(_coverage_fout, "1788\n");
#line 2910
    fflush(_coverage_fout);
#line 2910
    tmp___16 = (p->statuskey)->used - 1U;
  } else {
#line 2910
    fprintf(_coverage_fout, "1789\n");
#line 2910
    fflush(_coverage_fout);
#line 2910
    tmp___16 = 0U;
  }
  {
#line 2910
  fprintf(_coverage_fout, "1790\n");
#line 2910
  fflush(_coverage_fout);
#line 2910
  status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp___16,
                     (hctx->host)->load);
  }
#line 2763
  fprintf(_coverage_fout, "1831\n");
#line 2763
  fflush(_coverage_fout);
#line 2912
  if (p->conf.debug) {
    {
#line 2913
    fprintf(_coverage_fout, "1791\n");
#line 2913
    fflush(_coverage_fout);
#line 2913
    log_error_write(srv, "mod_fastcgi.c", 2913U, "ssdsbsd", "got proc:", "pid:",
                    (hctx->proc)->pid, "socket:", (hctx->proc)->connection_name,
                    "load:", (hctx->proc)->load);
    }
  }
#line 2763
  fprintf(_coverage_fout, "1832\n");
#line 2763
  fflush(_coverage_fout);
#line 2921
  if (hctx->request_id == 0U) {
    {
#line 2922
    fprintf(_coverage_fout, "1792\n");
#line 2922
    fflush(_coverage_fout);
#line 2922
    hctx->request_id = fcgi_requestid_new(srv, p);
    }
  } else {
    {
#line 2924
    fprintf(_coverage_fout, "1793\n");
#line 2924
    fflush(_coverage_fout);
#line 2924
    log_error_write(srv, "mod_fastcgi.c", 2924U, "sd",
                    "fcgi-request is already in use:", hctx->request_id);
    }
  }
  {
#line 2929
  fprintf(_coverage_fout, "1794\n");
#line 2929
  fflush(_coverage_fout);
#line 2929
  fcgi_create_env(srv, hctx, hctx->request_id);
#line 2929
  fprintf(_coverage_fout, "1795\n");
#line 2929
  fflush(_coverage_fout);
#line 2931
  fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )4);
  }
  case 4: 
  {
#line 2935
  fprintf(_coverage_fout, "1796\n");
#line 2935
  fflush(_coverage_fout);
#line 2935
  ret = (*(srv->network_backend_write))(srv, con, hctx->fd, hctx->wb);
#line 2935
  fprintf(_coverage_fout, "1797\n");
#line 2935
  fflush(_coverage_fout);
#line 2937
  chunkqueue_remove_finished_chunks(hctx->wb);
  }
#line 2763
  fprintf(_coverage_fout, "1833\n");
#line 2763
  fflush(_coverage_fout);
#line 2939
  if (ret < 0) {
    {
#line 2940
    fprintf(_coverage_fout, "1798\n");
#line 2940
    fflush(_coverage_fout);
#line 2940
    tmp___17 = __errno_location();
    }
#line 2940
    switch (*tmp___17) {
#line 2940
    fprintf(_coverage_fout, "1809\n");
#line 2940
    fflush(_coverage_fout);
    case 107: 
#line 2948
    if ((hctx->wb)->bytes_out == 0LL) {
#line 2948
      fprintf(_coverage_fout, "1802\n");
#line 2948
      fflush(_coverage_fout);
#line 2948
      if (hctx->reconnects < 5) {
        {
#line 2950
        fprintf(_coverage_fout, "1799\n");
#line 2950
        fflush(_coverage_fout);
#line 2950
        usleep(10000U);
#line 2950
        fprintf(_coverage_fout, "1800\n");
#line 2950
        fflush(_coverage_fout);
#line 2954
        fcgi_reconnect(srv, hctx);
        }
#line 2948
        fprintf(_coverage_fout, "1801\n");
#line 2948
        fflush(_coverage_fout);
#line 2956
        return ((enum __anonenum_handler_t_43 )6);
      }
    }
    {
#line 2965
    fprintf(_coverage_fout, "1803\n");
#line 2965
    fflush(_coverage_fout);
#line 2965
    log_error_write(srv, "mod_fastcgi.c", 2965U, "ssosd",
                    "[REPORT ME] connection was dropped after accept(). reconnect() denied:",
                    "write-offset:", (hctx->wb)->bytes_out,
                    "reconnect attempts:", hctx->reconnects);
    }
#line 2940
    fprintf(_coverage_fout, "1810\n");
#line 2940
    fflush(_coverage_fout);
#line 2970
    return ((enum __anonenum_handler_t_43 )5);
    case 11: 
    case 4: 
    {
#line 2973
    fprintf(_coverage_fout, "1804\n");
#line 2973
    fflush(_coverage_fout);
#line 2973
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    }
#line 2940
    fprintf(_coverage_fout, "1811\n");
#line 2940
    fflush(_coverage_fout);
#line 2975
    return ((enum __anonenum_handler_t_43 )4);
    default: 
    {
#line 2977
    fprintf(_coverage_fout, "1805\n");
#line 2977
    fflush(_coverage_fout);
#line 2977
    tmp___18 = __errno_location();
#line 2977
    fprintf(_coverage_fout, "1806\n");
#line 2977
    fflush(_coverage_fout);
#line 2977
    tmp___19 = __errno_location();
#line 2977
    fprintf(_coverage_fout, "1807\n");
#line 2977
    fflush(_coverage_fout);
#line 2977
    tmp___20 = strerror(*tmp___19);
#line 2977
    fprintf(_coverage_fout, "1808\n");
#line 2977
    fflush(_coverage_fout);
#line 2977
    log_error_write(srv, "mod_fastcgi.c", 2977U, "ssd", "write failed:",
                    tmp___20, *tmp___18);
    }
#line 2940
    fprintf(_coverage_fout, "1812\n");
#line 2940
    fflush(_coverage_fout);
#line 2980
    return ((enum __anonenum_handler_t_43 )5);
    }
  }
#line 2763
  fprintf(_coverage_fout, "1834\n");
#line 2763
  fflush(_coverage_fout);
#line 2984
  if ((hctx->wb)->bytes_out == (hctx->wb)->bytes_in) {
    {
#line 2986
    fprintf(_coverage_fout, "1813\n");
#line 2986
    fflush(_coverage_fout);
#line 2986
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
#line 2986
    fprintf(_coverage_fout, "1814\n");
#line 2986
    fflush(_coverage_fout);
#line 2987
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1);
#line 2986
    fprintf(_coverage_fout, "1815\n");
#line 2986
    fflush(_coverage_fout);
#line 2988
    fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )5);
    }
  } else {
    {
#line 2990
    fprintf(_coverage_fout, "1816\n");
#line 2990
    fflush(_coverage_fout);
#line 2990
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    }
#line 2984
    fprintf(_coverage_fout, "1817\n");
#line 2984
    fflush(_coverage_fout);
#line 2992
    return ((enum __anonenum_handler_t_43 )4);
  }
#line 2995
  break;
  case 5: 
#line 2998
  break;
  default: 
  {
#line 3000
  fprintf(_coverage_fout, "1818\n");
#line 3000
  fflush(_coverage_fout);
#line 3000
  log_error_write(srv, "mod_fastcgi.c", 3000U, "s", "(debug) unknown state");
  }
#line 2763
  fprintf(_coverage_fout, "1835\n");
#line 2763
  fflush(_coverage_fout);
#line 3001
  return ((enum __anonenum_handler_t_43 )5);
  }
#line 2693
  fprintf(_coverage_fout, "1839\n");
#line 2693
  fflush(_coverage_fout);
#line 3004
  return ((enum __anonenum_handler_t_43 )4);
}
}
#line 3010 "mod_fastcgi.c"
static handler_t mod_fastcgi_handle_subrequest(server *srv , connection *con ,
                                               void *p_d ) 
{ plugin_data *p ;
  handler_ctx *hctx ;
  fcgi_proc *proc ;
  fcgi_extension_host *host ;
  size_t k ;
  int ndx ;
  int used ;
  handler_t tmp ;

  {
#line 3010
  fprintf(_coverage_fout, "1895\n");
#line 3010
  fflush(_coverage_fout);
#line 3011
  p = (plugin_data *)p_d;
#line 3013
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
#line 3010
  fprintf(_coverage_fout, "1896\n");
#line 3010
  fflush(_coverage_fout);
#line 3017
  if ((unsigned int )((void *)0) == (unsigned int )hctx) {
#line 3017
    fprintf(_coverage_fout, "1840\n");
#line 3017
    fflush(_coverage_fout);
#line 3017
    return ((enum __anonenum_handler_t_43 )1);
  }
#line 3010
  fprintf(_coverage_fout, "1897\n");
#line 3010
  fflush(_coverage_fout);
#line 3020
  if ((unsigned int )con->mode != p->id) {
#line 3020
    fprintf(_coverage_fout, "1841\n");
#line 3020
    fflush(_coverage_fout);
#line 3020
    return ((enum __anonenum_handler_t_43 )1);
  }
#line 3010
  fprintf(_coverage_fout, "1898\n");
#line 3010
  fflush(_coverage_fout);
#line 3025
  if ((unsigned int )hctx->host == (unsigned int )((void *)0)) {
#line 3025
    fprintf(_coverage_fout, "1859\n");
#line 3025
    fflush(_coverage_fout);
#line 3027
    used = -1;
#line 3030
    ndx = (hctx->ext)->last_used_ndx + 1;
#line 3025
    fprintf(_coverage_fout, "1860\n");
#line 3025
    fflush(_coverage_fout);
#line 3031
    if ((unsigned int )ndx >= (hctx->ext)->used) {
#line 3031
      fprintf(_coverage_fout, "1842\n");
#line 3031
      fflush(_coverage_fout);
#line 3031
      ndx = 0;
    } else {
#line 3031
      fprintf(_coverage_fout, "1844\n");
#line 3031
      fflush(_coverage_fout);
#line 3031
      if (ndx < 0) {
#line 3031
        fprintf(_coverage_fout, "1843\n");
#line 3031
        fflush(_coverage_fout);
#line 3031
        ndx = 0;
      }
    }
#line 3025
    fprintf(_coverage_fout, "1861\n");
#line 3025
    fflush(_coverage_fout);
#line 3032
    host = *((hctx->ext)->hosts + ndx);
#line 3025
    fprintf(_coverage_fout, "1862\n");
#line 3025
    fflush(_coverage_fout);
#line 3033
    if (host->load > 0) {
#line 3033
      fprintf(_coverage_fout, "1853\n");
#line 3033
      fflush(_coverage_fout);
#line 3035
      k = 0U;
#line 3035
      ndx = -1;
#line 3033
      fprintf(_coverage_fout, "1854\n");
#line 3033
      fflush(_coverage_fout);
#line 3035
      while (1) {
#line 3035
        fprintf(_coverage_fout, "1848\n");
#line 3035
        fflush(_coverage_fout);
#line 3035
        if (! (k < (hctx->ext)->used)) {
#line 3035
          break;
        }
#line 3035
        fprintf(_coverage_fout, "1849\n");
#line 3035
        fflush(_coverage_fout);
#line 3036
        host = *((hctx->ext)->hosts + k);
#line 3035
        fprintf(_coverage_fout, "1850\n");
#line 3035
        fflush(_coverage_fout);
#line 3039
        if (host->active_procs == 0U) {
          goto __Cont;
        }
#line 3035
        fprintf(_coverage_fout, "1851\n");
#line 3035
        fflush(_coverage_fout);
#line 3041
        if (used == -1) {
#line 3041
          fprintf(_coverage_fout, "1845\n");
#line 3041
          fflush(_coverage_fout);
#line 3042
          used = host->load;
#line 3044
          ndx = (int )k;
        } else {
#line 3041
          fprintf(_coverage_fout, "1847\n");
#line 3041
          fflush(_coverage_fout);
#line 3041
          if (host->load < used) {
#line 3041
            fprintf(_coverage_fout, "1846\n");
#line 3041
            fflush(_coverage_fout);
#line 3042
            used = host->load;
#line 3044
            ndx = (int )k;
          }
        }
#line 3035
        fprintf(_coverage_fout, "1852\n");
#line 3035
        fflush(_coverage_fout);
        __Cont: 
#line 3035
        k ++;
      }
    }
#line 3025
    fprintf(_coverage_fout, "1863\n");
#line 3025
    fflush(_coverage_fout);
#line 3050
    if (ndx == -1) {
      {
#line 3053
      fprintf(_coverage_fout, "1855\n");
#line 3053
      fflush(_coverage_fout);
#line 3053
      fcgi_connection_close(srv, hctx);
#line 3053
      fprintf(_coverage_fout, "1856\n");
#line 3053
      fflush(_coverage_fout);
#line 3055
      con->http_status = 500;
#line 3053
      fprintf(_coverage_fout, "1857\n");
#line 3053
      fflush(_coverage_fout);
#line 3056
      con->mode = (enum __anonenum_connection_type_90 )0;
      }
#line 3050
      fprintf(_coverage_fout, "1858\n");
#line 3050
      fflush(_coverage_fout);
#line 3058
      return ((enum __anonenum_handler_t_43 )2);
    }
#line 3025
    fprintf(_coverage_fout, "1864\n");
#line 3025
    fflush(_coverage_fout);
#line 3061
    (hctx->ext)->last_used_ndx = ndx;
#line 3062
    host = *((hctx->ext)->hosts + ndx);
#line 3070
    hctx->host = host;
#line 3075
    ((hctx->host)->load) ++;
#line 3076
    hctx->proc = (fcgi_proc *)((void *)0);
  } else {
#line 3025
    fprintf(_coverage_fout, "1865\n");
#line 3025
    fflush(_coverage_fout);
#line 3078
    host = hctx->host;
  }
  {
#line 3082
  fprintf(_coverage_fout, "1866\n");
#line 3082
  fflush(_coverage_fout);
#line 3082
  tmp = fcgi_write_request(srv, hctx);
  }
#line 3082
  switch ((int )tmp) {
#line 3082
  fprintf(_coverage_fout, "1890\n");
#line 3082
  fflush(_coverage_fout);
  case 5: 
#line 3084
  proc = hctx->proc;
#line 3085
  host = hctx->host;
#line 3082
  fprintf(_coverage_fout, "1891\n");
#line 3082
  fflush(_coverage_fout);
#line 3087
  if ((int )hctx->state == 1) {
    goto _L;
  } else {
#line 3087
    fprintf(_coverage_fout, "1886\n");
#line 3087
    fflush(_coverage_fout);
#line 3087
    if ((int )hctx->state == 2) {
#line 3087
      fprintf(_coverage_fout, "1878\n");
#line 3087
      fflush(_coverage_fout);
      _L: 
#line 3089
      if (proc) {
#line 3089
        fprintf(_coverage_fout, "1867\n");
#line 3089
        fflush(_coverage_fout);
#line 3089
        (host->active_procs) --;
      }
      {
#line 3091
      fprintf(_coverage_fout, "1868\n");
#line 3091
      fflush(_coverage_fout);
#line 3091
      fcgi_restart_dead_procs(srv, p, host);
      }
#line 3087
      fprintf(_coverage_fout, "1879\n");
#line 3087
      fflush(_coverage_fout);
#line 3094
      if (hctx->reconnects < 5) {
        {
#line 3095
        fprintf(_coverage_fout, "1869\n");
#line 3095
        fflush(_coverage_fout);
#line 3095
        fcgi_reconnect(srv, hctx);
#line 3095
        fprintf(_coverage_fout, "1870\n");
#line 3095
        fflush(_coverage_fout);
#line 3096
        joblist_append(srv, con);
        }
#line 3094
        fprintf(_coverage_fout, "1871\n");
#line 3094
        fflush(_coverage_fout);
#line 3098
        return ((enum __anonenum_handler_t_43 )6);
      } else {
        {
#line 3100
        fprintf(_coverage_fout, "1872\n");
#line 3100
        fflush(_coverage_fout);
#line 3100
        fcgi_connection_close(srv, hctx);
#line 3100
        fprintf(_coverage_fout, "1873\n");
#line 3100
        fflush(_coverage_fout);
#line 3102
        buffer_reset(con->physical.path);
#line 3100
        fprintf(_coverage_fout, "1874\n");
#line 3100
        fflush(_coverage_fout);
#line 3103
        con->mode = (enum __anonenum_connection_type_90 )0;
#line 3100
        fprintf(_coverage_fout, "1875\n");
#line 3100
        fflush(_coverage_fout);
#line 3104
        con->http_status = 500;
#line 3100
        fprintf(_coverage_fout, "1876\n");
#line 3100
        fflush(_coverage_fout);
#line 3105
        joblist_append(srv, con);
        }
#line 3094
        fprintf(_coverage_fout, "1877\n");
#line 3094
        fflush(_coverage_fout);
#line 3107
        return ((enum __anonenum_handler_t_43 )2);
      }
    } else {
      {
#line 3110
      fprintf(_coverage_fout, "1880\n");
#line 3110
      fflush(_coverage_fout);
#line 3110
      fcgi_connection_close(srv, hctx);
#line 3110
      fprintf(_coverage_fout, "1881\n");
#line 3110
      fflush(_coverage_fout);
#line 3112
      buffer_reset(con->physical.path);
#line 3110
      fprintf(_coverage_fout, "1882\n");
#line 3110
      fflush(_coverage_fout);
#line 3113
      con->mode = (enum __anonenum_connection_type_90 )0;
#line 3110
      fprintf(_coverage_fout, "1883\n");
#line 3110
      fflush(_coverage_fout);
#line 3114
      con->http_status = 503;
#line 3110
      fprintf(_coverage_fout, "1884\n");
#line 3110
      fflush(_coverage_fout);
#line 3115
      joblist_append(srv, con);
      }
#line 3087
      fprintf(_coverage_fout, "1885\n");
#line 3087
      fflush(_coverage_fout);
#line 3117
      return ((enum __anonenum_handler_t_43 )2);
    }
  }
#line 3082
  fprintf(_coverage_fout, "1892\n");
#line 3082
  fflush(_coverage_fout);
  case 4: 
#line 3120
  if (con->file_started == 1) {
#line 3120
    fprintf(_coverage_fout, "1887\n");
#line 3120
    fflush(_coverage_fout);
#line 3121
    return ((enum __anonenum_handler_t_43 )2);
  } else {
#line 3120
    fprintf(_coverage_fout, "1888\n");
#line 3120
    fflush(_coverage_fout);
#line 3123
    return ((enum __anonenum_handler_t_43 )4);
  }
#line 3082
  fprintf(_coverage_fout, "1893\n");
#line 3082
  fflush(_coverage_fout);
  case 6: 
#line 3126
  return ((enum __anonenum_handler_t_43 )6);
  default: 
  {
#line 3128
  fprintf(_coverage_fout, "1889\n");
#line 3128
  fflush(_coverage_fout);
#line 3128
  log_error_write(srv, "mod_fastcgi.c", 3128U, "s",
                  "subrequest write-req default");
  }
#line 3082
  fprintf(_coverage_fout, "1894\n");
#line 3082
  fflush(_coverage_fout);
#line 3129
  return ((enum __anonenum_handler_t_43 )5);
  }
}
}
#line 3133 "mod_fastcgi.c"
static handler_t fcgi_handle_fdevent(void *s , void *ctx , int revents ) 
{ server *srv ;
  handler_ctx *hctx ;
  connection *con ;
  plugin_data *p ;
  fcgi_proc *proc ;
  fcgi_extension_host *host ;
  int tmp ;
  int status ;
  __pid_t tmp___0 ;
  union __anonunion_159 __constr_expr_0 ;
  union __anonunion_160 __constr_expr_1 ;
  union __anonunion_161 __constr_expr_2 ;
  union __anonunion_162 __constr_expr_3 ;
  int tmp___1 ;
  handler_t tmp___2 ;
  handler_t tmp___3 ;

  {
#line 3133
  fprintf(_coverage_fout, "1974\n");
#line 3133
  fflush(_coverage_fout);
#line 3134
  srv = (server *)s;
#line 3135
  hctx = (handler_ctx *)ctx;
#line 3136
  con = hctx->remote_conn;
#line 3137
  p = hctx->plugin_data;
#line 3139
  proc = hctx->proc;
#line 3140
  host = hctx->host;
#line 3133
  fprintf(_coverage_fout, "1975\n");
#line 3133
  fflush(_coverage_fout);
#line 3142
  if (revents & 1) {
#line 3142
    fprintf(_coverage_fout, "1948\n");
#line 3142
    fflush(_coverage_fout);
#line 3142
    if ((int )hctx->state == 5) {
      {
#line 3144
      fprintf(_coverage_fout, "1899\n");
#line 3144
      fflush(_coverage_fout);
#line 3144
      tmp = fcgi_demux_response(srv, hctx);
      }
#line 3144
      switch (tmp) {
      case 0: 
#line 3146
      break;
#line 3144
      fprintf(_coverage_fout, "1943\n");
#line 3144
      fflush(_coverage_fout);
      case 1: 
#line 3149
      if ((int )host->mode == 2) {
#line 3149
        fprintf(_coverage_fout, "1908\n");
#line 3149
        fflush(_coverage_fout);
#line 3149
        if (con->http_status == 200) {
          goto _L;
        } else {
#line 3149
          fprintf(_coverage_fout, "1907\n");
#line 3149
          fflush(_coverage_fout);
#line 3149
          if (con->http_status == 0) {
            _L: 
            {
#line 3158
            fprintf(_coverage_fout, "1900\n");
#line 3158
            fflush(_coverage_fout);
#line 3158
            buffer_copy_string_buffer(con->physical.doc_root,
                                      (buffer const   *)host->docroot);
#line 3158
            fprintf(_coverage_fout, "1901\n");
#line 3158
            fflush(_coverage_fout);
#line 3160
            buffer_copy_string_buffer(con->physical.path,
                                      (buffer const   *)host->docroot);
#line 3158
            fprintf(_coverage_fout, "1902\n");
#line 3158
            fflush(_coverage_fout);
#line 3161
            buffer_append_string_buffer(con->physical.path,
                                        (buffer const   *)con->uri.path);
#line 3158
            fprintf(_coverage_fout, "1903\n");
#line 3158
            fflush(_coverage_fout);
#line 3162
            fcgi_connection_close(srv, hctx);
#line 3158
            fprintf(_coverage_fout, "1904\n");
#line 3158
            fflush(_coverage_fout);
#line 3164
            con->mode = (enum __anonenum_connection_type_90 )0;
#line 3158
            fprintf(_coverage_fout, "1905\n");
#line 3158
            fflush(_coverage_fout);
#line 3165
            con->file_started = 1;
            }
          } else {
            {
#line 3168
            fprintf(_coverage_fout, "1906\n");
#line 3168
            fflush(_coverage_fout);
#line 3168
            fcgi_connection_close(srv, hctx);
            }
          }
        }
      } else {
        {
#line 3168
        fprintf(_coverage_fout, "1909\n");
#line 3168
        fflush(_coverage_fout);
#line 3168
        fcgi_connection_close(srv, hctx);
        }
      }
      {
#line 3171
      fprintf(_coverage_fout, "1910\n");
#line 3171
      fflush(_coverage_fout);
#line 3171
      joblist_append(srv, con);
      }
#line 3144
      fprintf(_coverage_fout, "1944\n");
#line 3144
      fflush(_coverage_fout);
#line 3172
      return ((enum __anonenum_handler_t_43 )2);
#line 3144
      fprintf(_coverage_fout, "1945\n");
#line 3144
      fflush(_coverage_fout);
      case -1: 
#line 3174
      if (proc->pid) {
#line 3174
        fprintf(_coverage_fout, "1927\n");
#line 3174
        fflush(_coverage_fout);
#line 3174
        if ((int )proc->state != 4) {
          {
#line 3179
          fprintf(_coverage_fout, "1911\n");
#line 3179
          fflush(_coverage_fout);
#line 3179
          tmp___0 = waitpid(proc->pid, & status, 1);
          }
#line 3179
          switch (tmp___0) {
          case 0: 
#line 3182
          break;
          case -1: 
#line 3184
          break;
#line 3179
          fprintf(_coverage_fout, "1923\n");
#line 3179
          fflush(_coverage_fout);
          default: 
#line 3187
          __constr_expr_3.__in = status;
#line 3179
          fprintf(_coverage_fout, "1924\n");
#line 3179
          fflush(_coverage_fout);
#line 3187
          if ((__constr_expr_3.__i & 127) == 0) {
            {
#line 3188
            fprintf(_coverage_fout, "1912\n");
#line 3188
            fflush(_coverage_fout);
#line 3188
            __constr_expr_0.__in = status;
#line 3188
            fprintf(_coverage_fout, "1913\n");
#line 3188
            fflush(_coverage_fout);
#line 3188
            log_error_write(srv, "mod_fastcgi.c", 3188U, "sdsd",
                            "child exited, pid:", proc->pid, "status:",
                            (__constr_expr_0.__i & 65280) >> 8);
            }
          } else {
#line 3187
            fprintf(_coverage_fout, "1917\n");
#line 3187
            fflush(_coverage_fout);
#line 3191
            __constr_expr_2.__in = status;
#line 3187
            fprintf(_coverage_fout, "1918\n");
#line 3187
            fflush(_coverage_fout);
#line 3191
            if ((int )((signed char )((__constr_expr_2.__i & 127) + 1)) >> 1 > 0) {
              {
#line 3192
              fprintf(_coverage_fout, "1914\n");
#line 3192
              fflush(_coverage_fout);
#line 3192
              __constr_expr_1.__in = status;
#line 3192
              fprintf(_coverage_fout, "1915\n");
#line 3192
              fflush(_coverage_fout);
#line 3192
              log_error_write(srv, "mod_fastcgi.c", 3192U, "sd",
                              "child signaled:", __constr_expr_1.__i & 127);
              }
            } else {
              {
#line 3196
              fprintf(_coverage_fout, "1916\n");
#line 3196
              fflush(_coverage_fout);
#line 3196
              log_error_write(srv, "mod_fastcgi.c", 3196U, "sd",
                              "child died somehow:", status);
              }
            }
          }
#line 3179
          fprintf(_coverage_fout, "1925\n");
#line 3179
          fflush(_coverage_fout);
#line 3201
          if (p->conf.debug) {
            {
#line 3202
            fprintf(_coverage_fout, "1919\n");
#line 3202
            fflush(_coverage_fout);
#line 3202
            log_error_write(srv, "mod_fastcgi.c", 3202U, "ssbsdsd",
                            "--- fastcgi spawning", "\n\tsocket",
                            proc->connection_name, "\n\tcurrent:", 1, "/",
                            host->min_procs);
            }
          }
          {
#line 3208
          fprintf(_coverage_fout, "1920\n");
#line 3208
          fflush(_coverage_fout);
#line 3208
          tmp___1 = fcgi_spawn_connection(srv, p, host, proc);
          }
#line 3179
          fprintf(_coverage_fout, "1926\n");
#line 3179
          fflush(_coverage_fout);
#line 3208
          if (tmp___1) {
            {
#line 3210
            fprintf(_coverage_fout, "1921\n");
#line 3210
            fflush(_coverage_fout);
#line 3210
            proc->state = (enum __anonenum_state_139 )4;
#line 3210
            fprintf(_coverage_fout, "1922\n");
#line 3210
            fflush(_coverage_fout);
#line 3212
            log_error_write(srv, "mod_fastcgi.c", 3212U, "s",
                            "respawning failed, will retry later");
            }
          }
#line 3216
          break;
          }
        }
      }
#line 3144
      fprintf(_coverage_fout, "1946\n");
#line 3144
      fflush(_coverage_fout);
#line 3220
      if (con->file_started == 0) {
#line 3220
        fprintf(_coverage_fout, "1938\n");
#line 3220
        fflush(_coverage_fout);
#line 3223
        if ((hctx->wb)->bytes_out == 0LL) {
#line 3223
          fprintf(_coverage_fout, "1931\n");
#line 3223
          fflush(_coverage_fout);
#line 3223
          if (hctx->reconnects < 5) {
            {
#line 3225
            fprintf(_coverage_fout, "1928\n");
#line 3225
            fflush(_coverage_fout);
#line 3225
            fcgi_reconnect(srv, hctx);
#line 3225
            fprintf(_coverage_fout, "1929\n");
#line 3225
            fflush(_coverage_fout);
#line 3227
            log_error_write(srv, "mod_fastcgi.c", 3227U, "ssbsbs",
                            "response not received, request not sent",
                            "on socket:", proc->connection_name, "for",
                            con->uri.path, ", reconnecting");
            }
#line 3223
            fprintf(_coverage_fout, "1930\n");
#line 3223
            fflush(_coverage_fout);
#line 3232
            return ((enum __anonenum_handler_t_43 )6);
          }
        }
        {
#line 3235
        fprintf(_coverage_fout, "1932\n");
#line 3235
        fflush(_coverage_fout);
#line 3235
        log_error_write(srv, "mod_fastcgi.c", 3235U, "sosbsbs",
                        "response not received, request sent:",
                        (hctx->wb)->bytes_out, "on socket:",
                        proc->connection_name, "for", con->uri.path,
                        ", closing connection");
#line 3235
        fprintf(_coverage_fout, "1933\n");
#line 3235
        fflush(_coverage_fout);
#line 3240
        fcgi_connection_close(srv, hctx);
#line 3235
        fprintf(_coverage_fout, "1934\n");
#line 3235
        fflush(_coverage_fout);
#line 3242
        connection_set_state(srv, con,
                             (enum __anonenum_connection_state_t_102 )5);
#line 3235
        fprintf(_coverage_fout, "1935\n");
#line 3235
        fflush(_coverage_fout);
#line 3243
        buffer_reset(con->physical.path);
#line 3235
        fprintf(_coverage_fout, "1936\n");
#line 3235
        fflush(_coverage_fout);
#line 3244
        con->http_status = 500;
#line 3235
        fprintf(_coverage_fout, "1937\n");
#line 3235
        fflush(_coverage_fout);
#line 3245
        con->mode = (enum __anonenum_connection_type_90 )0;
        }
      } else {
        {
#line 3248
        fprintf(_coverage_fout, "1939\n");
#line 3248
        fflush(_coverage_fout);
#line 3248
        fcgi_connection_close(srv, hctx);
#line 3248
        fprintf(_coverage_fout, "1940\n");
#line 3248
        fflush(_coverage_fout);
#line 3250
        log_error_write(srv, "mod_fastcgi.c", 3250U, "ssbsbs",
                        "response already sent out, but backend returned error",
                        "on socket:", proc->connection_name, "for",
                        con->uri.path, ", terminating connection");
#line 3248
        fprintf(_coverage_fout, "1941\n");
#line 3248
        fflush(_coverage_fout);
#line 3255
        connection_set_state(srv, con,
                             (enum __anonenum_connection_state_t_102 )9);
        }
      }
      {
#line 3261
      fprintf(_coverage_fout, "1942\n");
#line 3261
      fflush(_coverage_fout);
#line 3261
      joblist_append(srv, con);
      }
#line 3144
      fprintf(_coverage_fout, "1947\n");
#line 3144
      fflush(_coverage_fout);
#line 3262
      return ((enum __anonenum_handler_t_43 )2);
      }
    }
  }
#line 3133
  fprintf(_coverage_fout, "1976\n");
#line 3133
  fflush(_coverage_fout);
#line 3266
  if (revents & (1 << 2)) {
#line 3266
    fprintf(_coverage_fout, "1955\n");
#line 3266
    fflush(_coverage_fout);
#line 3267
    if ((int )hctx->state == 2) {
      {
#line 3274
      fprintf(_coverage_fout, "1949\n");
#line 3274
      fflush(_coverage_fout);
#line 3274
      tmp___2 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
      }
#line 3267
      fprintf(_coverage_fout, "1950\n");
#line 3267
      fflush(_coverage_fout);
#line 3274
      return (tmp___2);
    } else {
#line 3267
      fprintf(_coverage_fout, "1954\n");
#line 3267
      fflush(_coverage_fout);
#line 3267
      if ((int )hctx->state == 4) {
        {
#line 3274
        fprintf(_coverage_fout, "1951\n");
#line 3274
        fflush(_coverage_fout);
#line 3274
        tmp___2 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
        }
#line 3267
        fprintf(_coverage_fout, "1952\n");
#line 3267
        fflush(_coverage_fout);
#line 3274
        return (tmp___2);
      } else {
        {
#line 3276
        fprintf(_coverage_fout, "1953\n");
#line 3276
        fflush(_coverage_fout);
#line 3276
        log_error_write(srv, "mod_fastcgi.c", 3276U, "sd",
                        "got a FDEVENT_OUT and didn\'t know why:", hctx->state);
        }
      }
    }
  }
#line 3133
  fprintf(_coverage_fout, "1977\n");
#line 3133
  fflush(_coverage_fout);
#line 3283
  if (revents & (1 << 4)) {
#line 3283
    fprintf(_coverage_fout, "1968\n");
#line 3283
    fflush(_coverage_fout);
#line 3284
    if ((int )hctx->state == 2) {
      {
#line 3294
      fprintf(_coverage_fout, "1956\n");
#line 3294
      fflush(_coverage_fout);
#line 3294
      tmp___3 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
      }
#line 3284
      fprintf(_coverage_fout, "1957\n");
#line 3284
      fflush(_coverage_fout);
#line 3294
      return (tmp___3);
    } else {
#line 3284
      fprintf(_coverage_fout, "1967\n");
#line 3284
      fflush(_coverage_fout);
#line 3295
      if ((int )hctx->state == 5) {
#line 3295
        fprintf(_coverage_fout, "1962\n");
#line 3295
        fflush(_coverage_fout);
#line 3295
        if (! ((hctx->proc)->port == 0U)) {
          {
#line 3303
          fprintf(_coverage_fout, "1958\n");
#line 3303
          fflush(_coverage_fout);
#line 3303
          log_error_write(srv, "mod_fastcgi.c", 3303U, "sbSBSDSd",
                          "error: unexpected close of fastcgi connection for",
                          con->uri.path, "(no fastcgi process on host:",
                          host->host, ", port: ", host->port, " ?)", hctx->state);
#line 3303
          fprintf(_coverage_fout, "1959\n");
#line 3303
          fflush(_coverage_fout);
#line 3313
          connection_set_state(srv, con,
                               (enum __anonenum_connection_state_t_102 )9);
#line 3303
          fprintf(_coverage_fout, "1960\n");
#line 3303
          fflush(_coverage_fout);
#line 3314
          fcgi_connection_close(srv, hctx);
#line 3303
          fprintf(_coverage_fout, "1961\n");
#line 3303
          fflush(_coverage_fout);
#line 3315
          joblist_append(srv, con);
          }
        }
      } else {
        {
#line 3303
        fprintf(_coverage_fout, "1963\n");
#line 3303
        fflush(_coverage_fout);
#line 3303
        log_error_write(srv, "mod_fastcgi.c", 3303U, "sbSBSDSd",
                        "error: unexpected close of fastcgi connection for",
                        con->uri.path, "(no fastcgi process on host:",
                        host->host, ", port: ", host->port, " ?)", hctx->state);
#line 3303
        fprintf(_coverage_fout, "1964\n");
#line 3303
        fflush(_coverage_fout);
#line 3313
        connection_set_state(srv, con,
                             (enum __anonenum_connection_state_t_102 )9);
#line 3303
        fprintf(_coverage_fout, "1965\n");
#line 3303
        fflush(_coverage_fout);
#line 3314
        fcgi_connection_close(srv, hctx);
#line 3303
        fprintf(_coverage_fout, "1966\n");
#line 3303
        fflush(_coverage_fout);
#line 3315
        joblist_append(srv, con);
        }
      }
    }
  } else {
#line 3283
    fprintf(_coverage_fout, "1973\n");
#line 3283
    fflush(_coverage_fout);
#line 3317
    if (revents & (1 << 3)) {
      {
#line 3318
      fprintf(_coverage_fout, "1969\n");
#line 3318
      fflush(_coverage_fout);
#line 3318
      log_error_write(srv, "mod_fastcgi.c", 3318U, "s",
                      "fcgi: got a FDEVENT_ERR. Don\'t know why.");
#line 3318
      fprintf(_coverage_fout, "1970\n");
#line 3318
      fflush(_coverage_fout);
#line 3323
      connection_set_state(srv, con, (enum __anonenum_connection_state_t_102 )9);
#line 3318
      fprintf(_coverage_fout, "1971\n");
#line 3318
      fflush(_coverage_fout);
#line 3324
      fcgi_connection_close(srv, hctx);
#line 3318
      fprintf(_coverage_fout, "1972\n");
#line 3318
      fflush(_coverage_fout);
#line 3325
      joblist_append(srv, con);
      }
    }
  }
#line 3133
  fprintf(_coverage_fout, "1978\n");
#line 3133
  fflush(_coverage_fout);
#line 3328
  return ((enum __anonenum_handler_t_43 )2);
}
}
#line 3332 "mod_fastcgi.c"
static int fcgi_patch_connection(server *srv , connection *con , plugin_data *p ) 
{ size_t i ;
  size_t j ;
  plugin_config *s ;
  data_config *dc ;
  int tmp ;
  data_unset *du ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
#line 3332
  fprintf(_coverage_fout, "1999\n");
#line 3332
  fflush(_coverage_fout);
#line 3334
  s = *(p->config_storage + 0);
#line 3336
  p->conf.exts = s->exts;
#line 3337
  p->conf.debug = s->debug;
#line 3338
  p->conf.ext_mapping = s->ext_mapping;
#line 3341
  i = 1U;
#line 3332
  fprintf(_coverage_fout, "2000\n");
#line 3332
  fflush(_coverage_fout);
#line 3341
  while (1) {
#line 3341
    fprintf(_coverage_fout, "1994\n");
#line 3341
    fflush(_coverage_fout);
#line 3341
    if (! (i < (srv->config_context)->used)) {
#line 3341
      break;
    }
    {
#line 3342
    fprintf(_coverage_fout, "1979\n");
#line 3342
    fflush(_coverage_fout);
#line 3342
    dc = (data_config *)*((srv->config_context)->data + i);
#line 3342
    fprintf(_coverage_fout, "1980\n");
#line 3342
    fflush(_coverage_fout);
#line 3343
    s = *(p->config_storage + i);
#line 3342
    fprintf(_coverage_fout, "1981\n");
#line 3342
    fflush(_coverage_fout);
#line 3346
    tmp = config_check_cond(srv, con, dc);
    }
#line 3341
    fprintf(_coverage_fout, "1995\n");
#line 3341
    fflush(_coverage_fout);
#line 3346
    if (! tmp) {
      goto __Cont;
    }
#line 3341
    fprintf(_coverage_fout, "1996\n");
#line 3341
    fflush(_coverage_fout);
#line 3349
    j = 0U;
#line 3341
    fprintf(_coverage_fout, "1997\n");
#line 3341
    fflush(_coverage_fout);
#line 3349
    while (1) {
#line 3349
      fprintf(_coverage_fout, "1991\n");
#line 3349
      fflush(_coverage_fout);
#line 3349
      if (! (j < (dc->value)->used)) {
#line 3349
        break;
      }
      {
#line 3350
      fprintf(_coverage_fout, "1982\n");
#line 3350
      fflush(_coverage_fout);
#line 3350
      du = *((dc->value)->data + j);
#line 3350
      fprintf(_coverage_fout, "1983\n");
#line 3350
      fflush(_coverage_fout);
#line 3352
      tmp___2 = buffer_is_equal_string(du->key, "fastcgi.server",
                                       sizeof("fastcgi.server") - 1U);
      }
#line 3349
      fprintf(_coverage_fout, "1992\n");
#line 3349
      fflush(_coverage_fout);
#line 3352
      if (tmp___2) {
#line 3352
        fprintf(_coverage_fout, "1984\n");
#line 3352
        fflush(_coverage_fout);
#line 3353
        p->conf.exts = s->exts;
      } else {
        {
#line 3354
        fprintf(_coverage_fout, "1985\n");
#line 3354
        fflush(_coverage_fout);
#line 3354
        tmp___1 = buffer_is_equal_string(du->key, "fastcgi.debug",
                                         sizeof("fastcgi.debug") - 1U);
        }
#line 3352
        fprintf(_coverage_fout, "1990\n");
#line 3352
        fflush(_coverage_fout);
#line 3354
        if (tmp___1) {
#line 3354
          fprintf(_coverage_fout, "1986\n");
#line 3354
          fflush(_coverage_fout);
#line 3355
          p->conf.debug = s->debug;
        } else {
          {
#line 3356
          fprintf(_coverage_fout, "1987\n");
#line 3356
          fflush(_coverage_fout);
#line 3356
          tmp___0 = buffer_is_equal_string(du->key, "fastcgi.map-extensions",
                                           sizeof("fastcgi.map-extensions") - 1U);
          }
#line 3354
          fprintf(_coverage_fout, "1989\n");
#line 3354
          fflush(_coverage_fout);
#line 3356
          if (tmp___0) {
#line 3356
            fprintf(_coverage_fout, "1988\n");
#line 3356
            fflush(_coverage_fout);
#line 3357
            p->conf.ext_mapping = s->ext_mapping;
          }
        }
      }
#line 3349
      fprintf(_coverage_fout, "1993\n");
#line 3349
      fflush(_coverage_fout);
#line 3349
      j ++;
    }
#line 3341
    fprintf(_coverage_fout, "1998\n");
#line 3341
    fflush(_coverage_fout);
    __Cont: 
#line 3341
    i ++;
  }
#line 3332
  fprintf(_coverage_fout, "2001\n");
#line 3332
  fflush(_coverage_fout);
#line 3362
  return (0);
}
}
#line 3367 "mod_fastcgi.c"
static handler_t fcgi_check_extension(server *srv , connection *con ,
                                      void *p_d , int uri_path_handler ) 
{ plugin_data *p ;
  size_t s_len ;
  size_t k ;
  buffer *fn ;
  fcgi_extension *extension ;
  fcgi_extension_host *host ;
  int tmp ;
  data_string *ds ;
  size_t ct_len ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___6 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___10 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___18 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___22 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___23 ;
  int tmp___24 ;
  size_t tmp___25 ;
  size_t tmp___26 ;
  size_t ct_len___0 ;
  size_t tmp___27 ;
  size_t tmp___28 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___32 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  unsigned char const   *__s2___4 ;
  register int __result___9 ;
  int tmp___36 ;
  unsigned char const   *__s1___4 ;
  register int __result___10 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  unsigned char const   *__s2___5 ;
  register int __result___11 ;
  int tmp___44 ;
  unsigned char const   *__s1___5 ;
  register int __result___12 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  unsigned char const   *__s2___6 ;
  register int __result___13 ;
  int tmp___48 ;
  unsigned char const   *__s1___6 ;
  register int __result___14 ;
  int tmp___49 ;
  int tmp___50 ;
  size_t tmp___51 ;
  size_t tmp___52 ;
  size_t tmp___53 ;
  size_t tmp___54 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  unsigned char const   *__s2___7 ;
  register int __result___15 ;
  int tmp___58 ;
  unsigned char const   *__s1___7 ;
  register int __result___16 ;
  int tmp___59 ;
  int tmp___60 ;
  int tmp___61 ;
  unsigned char const   *__s2___8 ;
  register int __result___17 ;
  int tmp___62 ;
  unsigned char const   *__s1___8 ;
  register int __result___18 ;
  int tmp___63 ;
  int tmp___64 ;
  int tmp___65 ;
  int tmp___66 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___67 ;
  int tmp___68 ;
  int tmp___69 ;
  unsigned char const   *__s2___9 ;
  register int __result___19 ;
  int tmp___70 ;
  unsigned char const   *__s1___9 ;
  register int __result___20 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  unsigned char const   *__s2___10 ;
  register int __result___21 ;
  int tmp___74 ;
  unsigned char const   *__s1___10 ;
  register int __result___22 ;
  int tmp___75 ;
  int tmp___76 ;
  size_t tmp___77 ;
  size_t tmp___78 ;
  handler_ctx *hctx ;
  char *pathinfo ;
  void *tmp___79 ;
  char *tmp___80 ;
  handler_ctx *hctx___0 ;

  {
#line 3367
  fprintf(_coverage_fout, "2141\n");
#line 3367
  fflush(_coverage_fout);
#line 3368
  p = (plugin_data *)p_d;
#line 3372
  extension = (fcgi_extension *)((void *)0);
#line 3373
  host = (fcgi_extension_host *)((void *)0);
#line 3367
  fprintf(_coverage_fout, "2142\n");
#line 3367
  fflush(_coverage_fout);
#line 3376
  if (con->file_started == 1) {
#line 3376
    fprintf(_coverage_fout, "2002\n");
#line 3376
    fflush(_coverage_fout);
#line 3376
    return ((enum __anonenum_handler_t_43 )1);
  }
#line 3367
  fprintf(_coverage_fout, "2143\n");
#line 3367
  fflush(_coverage_fout);
#line 3378
  if (uri_path_handler) {
#line 3378
    fprintf(_coverage_fout, "2003\n");
#line 3378
    fflush(_coverage_fout);
#line 3378
    fn = con->uri.path;
  } else {
#line 3378
    fprintf(_coverage_fout, "2004\n");
#line 3378
    fflush(_coverage_fout);
#line 3378
    fn = con->physical.path;
  }
  {
#line 3380
  fprintf(_coverage_fout, "2005\n");
#line 3380
  fflush(_coverage_fout);
#line 3380
  tmp = buffer_is_empty(fn);
  }
#line 3367
  fprintf(_coverage_fout, "2144\n");
#line 3367
  fflush(_coverage_fout);
#line 3380
  if (tmp) {
#line 3380
    fprintf(_coverage_fout, "2006\n");
#line 3380
    fflush(_coverage_fout);
#line 3380
    return ((enum __anonenum_handler_t_43 )1);
  }
  {
#line 3382
  fprintf(_coverage_fout, "2007\n");
#line 3382
  fflush(_coverage_fout);
#line 3382
  s_len = fn->used - 1U;
#line 3382
  fprintf(_coverage_fout, "2008\n");
#line 3382
  fflush(_coverage_fout);
#line 3384
  fcgi_patch_connection(srv, con, p);
#line 3382
  fprintf(_coverage_fout, "2009\n");
#line 3382
  fflush(_coverage_fout);
#line 3395
  k = 0U;
  }
#line 3367
  fprintf(_coverage_fout, "2145\n");
#line 3367
  fflush(_coverage_fout);
#line 3395
  while (1) {
#line 3395
    fprintf(_coverage_fout, "2038\n");
#line 3395
    fflush(_coverage_fout);
#line 3395
    if (! (k < (p->conf.ext_mapping)->used)) {
#line 3395
      break;
    }
#line 3395
    fprintf(_coverage_fout, "2039\n");
#line 3395
    fflush(_coverage_fout);
#line 3396
    ds = (data_string *)*((p->conf.ext_mapping)->data + k);
#line 3395
    fprintf(_coverage_fout, "2040\n");
#line 3395
    fflush(_coverage_fout);
#line 3399
    if ((ds->key)->used == 0U) {
      goto __Cont;
    }
#line 3395
    fprintf(_coverage_fout, "2041\n");
#line 3395
    fflush(_coverage_fout);
#line 3401
    ct_len = (ds->key)->used - 1U;
#line 3395
    fprintf(_coverage_fout, "2042\n");
#line 3395
    fflush(_coverage_fout);
#line 3403
    if (s_len < ct_len) {
      goto __Cont;
    }
#line 3395
    fprintf(_coverage_fout, "2043\n");
#line 3395
    fflush(_coverage_fout);
#line 3406
    if (0) {
#line 3406
      fprintf(_coverage_fout, "2026\n");
#line 3406
      fflush(_coverage_fout);
#line 3406
      if (0) {
        {
#line 3406
        fprintf(_coverage_fout, "2010\n");
#line 3406
        fflush(_coverage_fout);
#line 3406
        __s1_len___0 = strlen((char const   *)((fn->ptr + s_len) - ct_len));
#line 3406
        fprintf(_coverage_fout, "2011\n");
#line 3406
        fflush(_coverage_fout);
#line 3406
        __s2_len___0 = strlen((char const   *)(ds->key)->ptr);
        }
#line 3406
        fprintf(_coverage_fout, "2022\n");
#line 3406
        fflush(_coverage_fout);
#line 3406
        if (! ((unsigned int )((void const   *)(((fn->ptr + s_len) - ct_len) + 1)) - (unsigned int )((void const   *)((fn->ptr + s_len) - ct_len)) == 1U)) {
          goto _L___2;
        } else {
#line 3406
          fprintf(_coverage_fout, "2018\n");
#line 3406
          fflush(_coverage_fout);
#line 3406
          if (__s1_len___0 >= 4U) {
#line 3406
            fprintf(_coverage_fout, "2016\n");
#line 3406
            fflush(_coverage_fout);
            _L___2: 
#line 3406
            if (! ((unsigned int )((void const   *)((ds->key)->ptr + 1)) - (unsigned int )((void const   *)(ds->key)->ptr) == 1U)) {
#line 3406
              fprintf(_coverage_fout, "2012\n");
#line 3406
              fflush(_coverage_fout);
#line 3406
              tmp___24 = 1;
            } else {
#line 3406
              fprintf(_coverage_fout, "2015\n");
#line 3406
              fflush(_coverage_fout);
#line 3406
              if (__s2_len___0 >= 4U) {
#line 3406
                fprintf(_coverage_fout, "2013\n");
#line 3406
                fflush(_coverage_fout);
#line 3406
                tmp___24 = 1;
              } else {
#line 3406
                fprintf(_coverage_fout, "2014\n");
#line 3406
                fflush(_coverage_fout);
#line 3406
                tmp___24 = 0;
              }
            }
          } else {
#line 3406
            fprintf(_coverage_fout, "2017\n");
#line 3406
            fflush(_coverage_fout);
#line 3406
            tmp___24 = 0;
          }
        }
#line 3406
        fprintf(_coverage_fout, "2023\n");
#line 3406
        fflush(_coverage_fout);
#line 3406
        if (tmp___24) {
          {
#line 3406
          fprintf(_coverage_fout, "2019\n");
#line 3406
          fflush(_coverage_fout);
#line 3406
          tmp___20 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                      (char const   *)(ds->key)->ptr);
          }
        } else {
          {
#line 3406
          fprintf(_coverage_fout, "2020\n");
#line 3406
          fflush(_coverage_fout);
#line 3406
          tmp___23 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                      (char const   *)(ds->key)->ptr);
#line 3406
          fprintf(_coverage_fout, "2021\n");
#line 3406
          fflush(_coverage_fout);
#line 3406
          tmp___20 = tmp___23;
          }
        }
      } else {
        {
#line 3406
        fprintf(_coverage_fout, "2024\n");
#line 3406
        fflush(_coverage_fout);
#line 3406
        tmp___23 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                    (char const   *)(ds->key)->ptr);
#line 3406
        fprintf(_coverage_fout, "2025\n");
#line 3406
        fflush(_coverage_fout);
#line 3406
        tmp___20 = tmp___23;
        }
      }
#line 3406
      fprintf(_coverage_fout, "2027\n");
#line 3406
      fflush(_coverage_fout);
#line 3406
      tmp___14 = tmp___20;
    } else {
      {
#line 3406
      fprintf(_coverage_fout, "2028\n");
#line 3406
      fflush(_coverage_fout);
#line 3406
      tmp___14 = strncmp((char const   *)((fn->ptr + s_len) - ct_len),
                         (char const   *)(ds->key)->ptr, ct_len);
      }
    }
#line 3395
    fprintf(_coverage_fout, "2044\n");
#line 3395
    fflush(_coverage_fout);
#line 3406
    if (0 == tmp___14) {
#line 3406
      fprintf(_coverage_fout, "2035\n");
#line 3406
      fflush(_coverage_fout);
#line 3410
      k = 0U;
#line 3406
      fprintf(_coverage_fout, "2036\n");
#line 3406
      fflush(_coverage_fout);
#line 3410
      while (1) {
#line 3410
        fprintf(_coverage_fout, "2031\n");
#line 3410
        fflush(_coverage_fout);
#line 3410
        if (! (k < (p->conf.exts)->used)) {
#line 3410
          break;
        }
        {
#line 3411
        fprintf(_coverage_fout, "2029\n");
#line 3411
        fflush(_coverage_fout);
#line 3411
        extension = *((p->conf.exts)->exts + k);
#line 3411
        fprintf(_coverage_fout, "2030\n");
#line 3411
        fflush(_coverage_fout);
#line 3413
        tmp___0 = buffer_is_equal(ds->value, extension->key);
        }
#line 3410
        fprintf(_coverage_fout, "2032\n");
#line 3410
        fflush(_coverage_fout);
#line 3413
        if (tmp___0) {
#line 3414
          break;
        }
#line 3410
        fprintf(_coverage_fout, "2033\n");
#line 3410
        fflush(_coverage_fout);
#line 3410
        k ++;
      }
#line 3406
      fprintf(_coverage_fout, "2037\n");
#line 3406
      fflush(_coverage_fout);
#line 3418
      if (k == (p->conf.exts)->used) {
#line 3418
        fprintf(_coverage_fout, "2034\n");
#line 3418
        fflush(_coverage_fout);
#line 3420
        extension = (fcgi_extension *)((void *)0);
      }
#line 3422
      break;
    }
#line 3395
    fprintf(_coverage_fout, "2045\n");
#line 3395
    fflush(_coverage_fout);
    __Cont: 
#line 3395
    k ++;
  }
#line 3367
  fprintf(_coverage_fout, "2146\n");
#line 3367
  fflush(_coverage_fout);
#line 3426
  if ((unsigned int )extension == (unsigned int )((void *)0)) {
#line 3426
    fprintf(_coverage_fout, "2096\n");
#line 3426
    fflush(_coverage_fout);
#line 3428
    k = 0U;
#line 3426
    fprintf(_coverage_fout, "2097\n");
#line 3426
    fflush(_coverage_fout);
#line 3428
    while (1) {
#line 3428
      fprintf(_coverage_fout, "2088\n");
#line 3428
      fflush(_coverage_fout);
#line 3428
      if (! (k < (p->conf.exts)->used)) {
#line 3428
        break;
      }
#line 3428
      fprintf(_coverage_fout, "2089\n");
#line 3428
      fflush(_coverage_fout);
#line 3431
      extension = *((p->conf.exts)->exts + k);
#line 3428
      fprintf(_coverage_fout, "2090\n");
#line 3428
      fflush(_coverage_fout);
#line 3433
      if ((extension->key)->used == 0U) {
        goto __Cont___0;
      }
#line 3428
      fprintf(_coverage_fout, "2091\n");
#line 3428
      fflush(_coverage_fout);
#line 3435
      ct_len___0 = (extension->key)->used - 1U;
#line 3428
      fprintf(_coverage_fout, "2092\n");
#line 3428
      fflush(_coverage_fout);
#line 3437
      if (s_len < ct_len___0) {
        goto __Cont___0;
      }
#line 3428
      fprintf(_coverage_fout, "2093\n");
#line 3428
      fflush(_coverage_fout);
#line 3440
      if ((int )*((extension->key)->ptr) == 47) {
#line 3440
        fprintf(_coverage_fout, "2065\n");
#line 3440
        fflush(_coverage_fout);
#line 3440
        if (0) {
#line 3440
          fprintf(_coverage_fout, "2062\n");
#line 3440
          fflush(_coverage_fout);
#line 3440
          if (0) {
            {
#line 3440
            fprintf(_coverage_fout, "2046\n");
#line 3440
            fflush(_coverage_fout);
#line 3440
            __s1_len___4 = strlen((char const   *)fn->ptr);
#line 3440
            fprintf(_coverage_fout, "2047\n");
#line 3440
            fflush(_coverage_fout);
#line 3440
            __s2_len___4 = strlen((char const   *)(extension->key)->ptr);
            }
#line 3440
            fprintf(_coverage_fout, "2058\n");
#line 3440
            fflush(_coverage_fout);
#line 3440
            if (! ((unsigned int )((void const   *)(fn->ptr + 1)) - (unsigned int )((void const   *)fn->ptr) == 1U)) {
              goto _L___10;
            } else {
#line 3440
              fprintf(_coverage_fout, "2054\n");
#line 3440
              fflush(_coverage_fout);
#line 3440
              if (__s1_len___4 >= 4U) {
#line 3440
                fprintf(_coverage_fout, "2052\n");
#line 3440
                fflush(_coverage_fout);
                _L___10: 
#line 3440
                if (! ((unsigned int )((void const   *)((extension->key)->ptr + 1)) - (unsigned int )((void const   *)(extension->key)->ptr) == 1U)) {
#line 3440
                  fprintf(_coverage_fout, "2048\n");
#line 3440
                  fflush(_coverage_fout);
#line 3440
                  tmp___76 = 1;
                } else {
#line 3440
                  fprintf(_coverage_fout, "2051\n");
#line 3440
                  fflush(_coverage_fout);
#line 3440
                  if (__s2_len___4 >= 4U) {
#line 3440
                    fprintf(_coverage_fout, "2049\n");
#line 3440
                    fflush(_coverage_fout);
#line 3440
                    tmp___76 = 1;
                  } else {
#line 3440
                    fprintf(_coverage_fout, "2050\n");
#line 3440
                    fflush(_coverage_fout);
#line 3440
                    tmp___76 = 0;
                  }
                }
              } else {
#line 3440
                fprintf(_coverage_fout, "2053\n");
#line 3440
                fflush(_coverage_fout);
#line 3440
                tmp___76 = 0;
              }
            }
#line 3440
            fprintf(_coverage_fout, "2059\n");
#line 3440
            fflush(_coverage_fout);
#line 3440
            if (tmp___76) {
              {
#line 3440
              fprintf(_coverage_fout, "2055\n");
#line 3440
              fflush(_coverage_fout);
#line 3440
              tmp___72 = __builtin_strcmp((char const   *)fn->ptr,
                                          (char const   *)(extension->key)->ptr);
              }
            } else {
              {
#line 3440
              fprintf(_coverage_fout, "2056\n");
#line 3440
              fflush(_coverage_fout);
#line 3440
              tmp___75 = __builtin_strcmp((char const   *)fn->ptr,
                                          (char const   *)(extension->key)->ptr);
#line 3440
              fprintf(_coverage_fout, "2057\n");
#line 3440
              fflush(_coverage_fout);
#line 3440
              tmp___72 = tmp___75;
              }
            }
          } else {
            {
#line 3440
            fprintf(_coverage_fout, "2060\n");
#line 3440
            fflush(_coverage_fout);
#line 3440
            tmp___75 = __builtin_strcmp((char const   *)fn->ptr,
                                        (char const   *)(extension->key)->ptr);
#line 3440
            fprintf(_coverage_fout, "2061\n");
#line 3440
            fflush(_coverage_fout);
#line 3440
            tmp___72 = tmp___75;
            }
          }
#line 3440
          fprintf(_coverage_fout, "2063\n");
#line 3440
          fflush(_coverage_fout);
#line 3440
          tmp___66 = tmp___72;
        } else {
          {
#line 3440
          fprintf(_coverage_fout, "2064\n");
#line 3440
          fflush(_coverage_fout);
#line 3440
          tmp___66 = strncmp((char const   *)fn->ptr,
                             (char const   *)(extension->key)->ptr, ct_len___0);
          }
        }
#line 3440
        fprintf(_coverage_fout, "2066\n");
#line 3440
        fflush(_coverage_fout);
#line 3440
        if (tmp___66 == 0) {
#line 3441
          break;
        } else {
          goto _L___11;
        }
      } else {
#line 3440
        fprintf(_coverage_fout, "2086\n");
#line 3440
        fflush(_coverage_fout);
        _L___11: 
#line 3442
        if (0) {
#line 3442
          fprintf(_coverage_fout, "2083\n");
#line 3442
          fflush(_coverage_fout);
#line 3442
          if (0) {
            {
#line 3442
            fprintf(_coverage_fout, "2067\n");
#line 3442
            fflush(_coverage_fout);
#line 3442
            __s1_len___2 = strlen((char const   *)((fn->ptr + s_len) - ct_len___0));
#line 3442
            fprintf(_coverage_fout, "2068\n");
#line 3442
            fflush(_coverage_fout);
#line 3442
            __s2_len___2 = strlen((char const   *)(extension->key)->ptr);
            }
#line 3442
            fprintf(_coverage_fout, "2079\n");
#line 3442
            fflush(_coverage_fout);
#line 3442
            if (! ((unsigned int )((void const   *)(((fn->ptr + s_len) - ct_len___0) + 1)) - (unsigned int )((void const   *)((fn->ptr + s_len) - ct_len___0)) == 1U)) {
              goto _L___6;
            } else {
#line 3442
              fprintf(_coverage_fout, "2075\n");
#line 3442
              fflush(_coverage_fout);
#line 3442
              if (__s1_len___2 >= 4U) {
#line 3442
                fprintf(_coverage_fout, "2073\n");
#line 3442
                fflush(_coverage_fout);
                _L___6: 
#line 3442
                if (! ((unsigned int )((void const   *)((extension->key)->ptr + 1)) - (unsigned int )((void const   *)(extension->key)->ptr) == 1U)) {
#line 3442
                  fprintf(_coverage_fout, "2069\n");
#line 3442
                  fflush(_coverage_fout);
#line 3442
                  tmp___50 = 1;
                } else {
#line 3442
                  fprintf(_coverage_fout, "2072\n");
#line 3442
                  fflush(_coverage_fout);
#line 3442
                  if (__s2_len___2 >= 4U) {
#line 3442
                    fprintf(_coverage_fout, "2070\n");
#line 3442
                    fflush(_coverage_fout);
#line 3442
                    tmp___50 = 1;
                  } else {
#line 3442
                    fprintf(_coverage_fout, "2071\n");
#line 3442
                    fflush(_coverage_fout);
#line 3442
                    tmp___50 = 0;
                  }
                }
              } else {
#line 3442
                fprintf(_coverage_fout, "2074\n");
#line 3442
                fflush(_coverage_fout);
#line 3442
                tmp___50 = 0;
              }
            }
#line 3442
            fprintf(_coverage_fout, "2080\n");
#line 3442
            fflush(_coverage_fout);
#line 3442
            if (tmp___50) {
              {
#line 3442
              fprintf(_coverage_fout, "2076\n");
#line 3442
              fflush(_coverage_fout);
#line 3442
              tmp___46 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                          (char const   *)(extension->key)->ptr);
              }
            } else {
              {
#line 3442
              fprintf(_coverage_fout, "2077\n");
#line 3442
              fflush(_coverage_fout);
#line 3442
              tmp___49 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                          (char const   *)(extension->key)->ptr);
#line 3442
              fprintf(_coverage_fout, "2078\n");
#line 3442
              fflush(_coverage_fout);
#line 3442
              tmp___46 = tmp___49;
              }
            }
          } else {
            {
#line 3442
            fprintf(_coverage_fout, "2081\n");
#line 3442
            fflush(_coverage_fout);
#line 3442
            tmp___49 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                        (char const   *)(extension->key)->ptr);
#line 3442
            fprintf(_coverage_fout, "2082\n");
#line 3442
            fflush(_coverage_fout);
#line 3442
            tmp___46 = tmp___49;
            }
          }
#line 3442
          fprintf(_coverage_fout, "2084\n");
#line 3442
          fflush(_coverage_fout);
#line 3442
          tmp___40 = tmp___46;
        } else {
          {
#line 3442
          fprintf(_coverage_fout, "2085\n");
#line 3442
          fflush(_coverage_fout);
#line 3442
          tmp___40 = strncmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                             (char const   *)(extension->key)->ptr, ct_len___0);
          }
        }
#line 3440
        fprintf(_coverage_fout, "2087\n");
#line 3440
        fflush(_coverage_fout);
#line 3442
        if (0 == tmp___40) {
#line 3444
          break;
        }
      }
#line 3428
      fprintf(_coverage_fout, "2094\n");
#line 3428
      fflush(_coverage_fout);
      __Cont___0: 
#line 3428
      k ++;
    }
#line 3426
    fprintf(_coverage_fout, "2098\n");
#line 3426
    fflush(_coverage_fout);
#line 3448
    if (k == (p->conf.exts)->used) {
#line 3448
      fprintf(_coverage_fout, "2095\n");
#line 3448
      fflush(_coverage_fout);
#line 3449
      return ((enum __anonenum_handler_t_43 )1);
    }
  }
#line 3367
  fprintf(_coverage_fout, "2147\n");
#line 3367
  fflush(_coverage_fout);
#line 3454
  k = 0U;
#line 3367
  fprintf(_coverage_fout, "2148\n");
#line 3367
  fflush(_coverage_fout);
#line 3454
  while (1) {
#line 3454
    fprintf(_coverage_fout, "2100\n");
#line 3454
    fflush(_coverage_fout);
#line 3454
    if (! (k < extension->used)) {
#line 3454
      break;
    }
#line 3454
    fprintf(_coverage_fout, "2101\n");
#line 3454
    fflush(_coverage_fout);
#line 3455
    host = *(extension->hosts + k);
#line 3454
    fprintf(_coverage_fout, "2102\n");
#line 3454
    fflush(_coverage_fout);
#line 3458
    if (host->active_procs == 0U) {
#line 3458
      fprintf(_coverage_fout, "2099\n");
#line 3458
      fflush(_coverage_fout);
#line 3459
      host = (fcgi_extension_host *)((void *)0);
      goto __Cont___1;
    }
#line 3465
    break;
#line 3454
    fprintf(_coverage_fout, "2103\n");
#line 3454
    fflush(_coverage_fout);
    __Cont___1: 
#line 3454
    k ++;
  }
#line 3367
  fprintf(_coverage_fout, "2149\n");
#line 3367
  fflush(_coverage_fout);
#line 3468
  if (! host) {
    {
#line 3470
    fprintf(_coverage_fout, "2104\n");
#line 3470
    fflush(_coverage_fout);
#line 3470
    buffer_reset(con->physical.path);
#line 3470
    fprintf(_coverage_fout, "2105\n");
#line 3470
    fflush(_coverage_fout);
#line 3471
    con->http_status = 500;
    }
#line 3468
    fprintf(_coverage_fout, "2108\n");
#line 3468
    fflush(_coverage_fout);
#line 3474
    if (! extension->note_is_sent) {
      {
#line 3475
      fprintf(_coverage_fout, "2106\n");
#line 3475
      fflush(_coverage_fout);
#line 3475
      extension->note_is_sent = 1;
#line 3475
      fprintf(_coverage_fout, "2107\n");
#line 3475
      fflush(_coverage_fout);
#line 3477
      log_error_write(srv, "mod_fastcgi.c", 3477U, "sbsbs", "all handlers for ",
                      con->uri.path, "on", extension->key, "are down.");
      }
    }
#line 3468
    fprintf(_coverage_fout, "2109\n");
#line 3468
    fflush(_coverage_fout);
#line 3483
    return ((enum __anonenum_handler_t_43 )2);
  }
#line 3367
  fprintf(_coverage_fout, "2150\n");
#line 3367
  fflush(_coverage_fout);
#line 3487
  extension->note_is_sent = 0;
#line 3367
  fprintf(_coverage_fout, "2151\n");
#line 3367
  fflush(_coverage_fout);
#line 3495
  if (uri_path_handler) {
#line 3495
    fprintf(_coverage_fout, "2129\n");
#line 3495
    fflush(_coverage_fout);
#line 3496
    if ((int )host->check_local == 0) {
      {
#line 3500
      fprintf(_coverage_fout, "2110\n");
#line 3500
      fflush(_coverage_fout);
#line 3500
      hctx = handler_ctx_init();
#line 3500
      fprintf(_coverage_fout, "2111\n");
#line 3500
      fflush(_coverage_fout);
#line 3502
      hctx->remote_conn = con;
#line 3500
      fprintf(_coverage_fout, "2112\n");
#line 3500
      fflush(_coverage_fout);
#line 3503
      hctx->plugin_data = p;
#line 3500
      fprintf(_coverage_fout, "2113\n");
#line 3500
      fflush(_coverage_fout);
#line 3504
      hctx->proc = (fcgi_proc *)((void *)0);
#line 3500
      fprintf(_coverage_fout, "2114\n");
#line 3500
      fflush(_coverage_fout);
#line 3505
      hctx->ext = extension;
#line 3500
      fprintf(_coverage_fout, "2115\n");
#line 3500
      fflush(_coverage_fout);
#line 3508
      hctx->conf.exts = p->conf.exts;
#line 3500
      fprintf(_coverage_fout, "2116\n");
#line 3500
      fflush(_coverage_fout);
#line 3509
      hctx->conf.debug = p->conf.debug;
#line 3500
      fprintf(_coverage_fout, "2117\n");
#line 3500
      fflush(_coverage_fout);
#line 3511
      *(con->plugin_ctx + p->id) = (void *)hctx;
#line 3500
      fprintf(_coverage_fout, "2118\n");
#line 3500
      fflush(_coverage_fout);
#line 3513
      con->mode = (enum __anonenum_connection_type_90 )p->id;
      }
#line 3496
      fprintf(_coverage_fout, "2127\n");
#line 3496
      fflush(_coverage_fout);
#line 3515
      if (con->conf.log_request_handling) {
        {
#line 3516
        fprintf(_coverage_fout, "2119\n");
#line 3516
        fflush(_coverage_fout);
#line 3516
        log_error_write(srv, "mod_fastcgi.c", 3516U, "s",
                        "handling it in mod_fastcgi");
        }
      }
#line 3496
      fprintf(_coverage_fout, "2128\n");
#line 3496
      fflush(_coverage_fout);
#line 3541
      if ((int )*((extension->key)->ptr + 0) == 47) {
#line 3541
        fprintf(_coverage_fout, "2126\n");
#line 3541
        fflush(_coverage_fout);
#line 3541
        if ((con->uri.path)->used > (extension->key)->used) {
          {
#line 3541
          fprintf(_coverage_fout, "2120\n");
#line 3541
          fflush(_coverage_fout);
#line 3541
          tmp___80 = __builtin_strchr(((con->uri.path)->ptr + (extension->key)->used) - 1,
                                      '/');
#line 3541
          fprintf(_coverage_fout, "2121\n");
#line 3541
          fflush(_coverage_fout);
#line 3541
          pathinfo = tmp___80;
          }
#line 3541
          fprintf(_coverage_fout, "2125\n");
#line 3541
          fflush(_coverage_fout);
#line 3541
          if ((unsigned int )((void *)0) != (unsigned int )pathinfo) {
            {
#line 3546
            fprintf(_coverage_fout, "2122\n");
#line 3546
            fflush(_coverage_fout);
#line 3546
            buffer_copy_string(con->request.pathinfo, (char const   *)pathinfo);
#line 3546
            fprintf(_coverage_fout, "2123\n");
#line 3546
            fflush(_coverage_fout);
#line 3548
            (con->uri.path)->used -= (con->request.pathinfo)->used - 1U;
#line 3546
            fprintf(_coverage_fout, "2124\n");
#line 3546
            fflush(_coverage_fout);
#line 3549
            *((con->uri.path)->ptr + ((con->uri.path)->used - 1U)) = (char )'\000';
            }
          }
        }
      }
    }
  } else {
    {
#line 3554
    fprintf(_coverage_fout, "2130\n");
#line 3554
    fflush(_coverage_fout);
#line 3554
    hctx___0 = handler_ctx_init();
#line 3554
    fprintf(_coverage_fout, "2131\n");
#line 3554
    fflush(_coverage_fout);
#line 3556
    hctx___0->remote_conn = con;
#line 3554
    fprintf(_coverage_fout, "2132\n");
#line 3554
    fflush(_coverage_fout);
#line 3557
    hctx___0->plugin_data = p;
#line 3554
    fprintf(_coverage_fout, "2133\n");
#line 3554
    fflush(_coverage_fout);
#line 3558
    hctx___0->proc = (fcgi_proc *)((void *)0);
#line 3554
    fprintf(_coverage_fout, "2134\n");
#line 3554
    fflush(_coverage_fout);
#line 3559
    hctx___0->ext = extension;
#line 3554
    fprintf(_coverage_fout, "2135\n");
#line 3554
    fflush(_coverage_fout);
#line 3561
    hctx___0->conf.exts = p->conf.exts;
#line 3554
    fprintf(_coverage_fout, "2136\n");
#line 3554
    fflush(_coverage_fout);
#line 3562
    hctx___0->conf.debug = p->conf.debug;
#line 3554
    fprintf(_coverage_fout, "2137\n");
#line 3554
    fflush(_coverage_fout);
#line 3564
    *(con->plugin_ctx + p->id) = (void *)hctx___0;
#line 3554
    fprintf(_coverage_fout, "2138\n");
#line 3554
    fflush(_coverage_fout);
#line 3566
    con->mode = (enum __anonenum_connection_type_90 )p->id;
    }
#line 3495
    fprintf(_coverage_fout, "2140\n");
#line 3495
    fflush(_coverage_fout);
#line 3568
    if (con->conf.log_request_handling) {
      {
#line 3569
      fprintf(_coverage_fout, "2139\n");
#line 3569
      fflush(_coverage_fout);
#line 3569
      log_error_write(srv, "mod_fastcgi.c", 3569U, "s",
                      "handling it in mod_fastcgi");
      }
    }
  }
#line 3367
  fprintf(_coverage_fout, "2152\n");
#line 3367
  fflush(_coverage_fout);
#line 3573
  return ((enum __anonenum_handler_t_43 )1);
}
}
#line 3577 "mod_fastcgi.c"
static handler_t fcgi_check_extension_1(server *srv , connection *con ,
                                        void *p_d ) 
{ handler_t tmp ;

  {
  {
#line 3578
  fprintf(_coverage_fout, "2153\n");
#line 3578
  fflush(_coverage_fout);
#line 3578
  tmp = fcgi_check_extension(srv, con, p_d, 1);
  }
#line 3577
  fprintf(_coverage_fout, "2154\n");
#line 3577
  fflush(_coverage_fout);
#line 3578
  return (tmp);
}
}
#line 3582 "mod_fastcgi.c"
static handler_t fcgi_check_extension_2(server *srv , connection *con ,
                                        void *p_d ) 
{ handler_t tmp ;

  {
  {
#line 3583
  fprintf(_coverage_fout, "2155\n");
#line 3583
  fflush(_coverage_fout);
#line 3583
  tmp = fcgi_check_extension(srv, con, p_d, 0);
  }
#line 3582
  fprintf(_coverage_fout, "2156\n");
#line 3582
  fflush(_coverage_fout);
#line 3583
  return (tmp);
}
}
#line 3586 "mod_fastcgi.c"
static handler_t mod_fastcgi_handle_joblist(server *srv , connection *con ,
                                            void *p_d ) 
{ plugin_data *p ;
  handler_ctx *hctx ;

  {
#line 3586
  fprintf(_coverage_fout, "2161\n");
#line 3586
  fflush(_coverage_fout);
#line 3587
  p = (plugin_data *)p_d;
#line 3588
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
#line 3586
  fprintf(_coverage_fout, "2162\n");
#line 3586
  fflush(_coverage_fout);
#line 3590
  if ((unsigned int )hctx == (unsigned int )((void *)0)) {
#line 3590
    fprintf(_coverage_fout, "2157\n");
#line 3590
    fflush(_coverage_fout);
#line 3590
    return ((enum __anonenum_handler_t_43 )1);
  }
#line 3586
  fprintf(_coverage_fout, "2163\n");
#line 3586
  fflush(_coverage_fout);
#line 3592
  if (hctx->fd != -1) {
#line 3593
    switch ((int )hctx->state) {
    case 5: 
    {
#line 3595
    fprintf(_coverage_fout, "2158\n");
#line 3595
    fflush(_coverage_fout);
#line 3595
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1);
    }
#line 3597
    break;
    case 2: 
    case 4: 
    {
#line 3600
    fprintf(_coverage_fout, "2159\n");
#line 3600
    fflush(_coverage_fout);
#line 3600
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    }
#line 3602
    break;
    case 1: 
#line 3605
    break;
    default: 
    {
#line 3607
    fprintf(_coverage_fout, "2160\n");
#line 3607
    fflush(_coverage_fout);
#line 3607
    log_error_write(srv, "mod_fastcgi.c", 3607U, "sd", "unhandled fcgi.state",
                    hctx->state);
    }
#line 3608
    break;
    }
  }
#line 3586
  fprintf(_coverage_fout, "2164\n");
#line 3586
  fflush(_coverage_fout);
#line 3612
  return ((enum __anonenum_handler_t_43 )1);
}
}
#line 3616 "mod_fastcgi.c"
static handler_t fcgi_connection_close_callback(server *srv , connection *con ,
                                                void *p_d ) 
{ plugin_data *p ;

  {
  {
#line 3617
  fprintf(_coverage_fout, "2165\n");
#line 3617
  fflush(_coverage_fout);
#line 3617
  p = (plugin_data *)p_d;
#line 3617
  fprintf(_coverage_fout, "2166\n");
#line 3617
  fflush(_coverage_fout);
#line 3619
  fcgi_connection_close(srv, (handler_ctx *)*(con->plugin_ctx + p->id));
  }
#line 3616
  fprintf(_coverage_fout, "2167\n");
#line 3616
  fflush(_coverage_fout);
#line 3621
  return ((enum __anonenum_handler_t_43 )1);
}
}
#line 3624 "mod_fastcgi.c"
static handler_t mod_fastcgi_handle_trigger(server *srv , void *p_d ) 
{ plugin_data *p ;
  size_t i ;
  size_t j ;
  size_t n ;
  plugin_config *conf ;
  fcgi_exts *exts ;
  fcgi_extension *ex ;
  fcgi_proc *proc ;
  unsigned long sum_load ;
  fcgi_extension_host *host ;
  size_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int status ;
  __pid_t tmp___2 ;
  int *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  union __anonunion_163 __constr_expr_0 ;
  union __anonunion_164 __constr_expr_1 ;
  union __anonunion_165 __constr_expr_2 ;
  union __anonunion_166 __constr_expr_3 ;
  union __anonunion_167 __constr_expr_4 ;

  {
#line 3624
  fprintf(_coverage_fout, "2268\n");
#line 3624
  fflush(_coverage_fout);
#line 3625
  p = (plugin_data *)p_d;
#line 3639
  i = 0U;
#line 3624
  fprintf(_coverage_fout, "2269\n");
#line 3624
  fflush(_coverage_fout);
#line 3639
  while (1) {
#line 3639
    fprintf(_coverage_fout, "2264\n");
#line 3639
    fflush(_coverage_fout);
#line 3639
    if (! (i < (srv->config_context)->used)) {
#line 3639
      break;
    }
#line 3639
    fprintf(_coverage_fout, "2265\n");
#line 3639
    fflush(_coverage_fout);
#line 3643
    conf = *(p->config_storage + i);
#line 3645
    exts = conf->exts;
#line 3647
    j = 0U;
#line 3639
    fprintf(_coverage_fout, "2266\n");
#line 3639
    fflush(_coverage_fout);
#line 3647
    while (1) {
#line 3647
      fprintf(_coverage_fout, "2260\n");
#line 3647
      fflush(_coverage_fout);
#line 3647
      if (! (j < exts->used)) {
#line 3647
        break;
      }
#line 3647
      fprintf(_coverage_fout, "2261\n");
#line 3647
      fflush(_coverage_fout);
#line 3650
      ex = *(exts->exts + j);
#line 3652
      n = 0U;
#line 3647
      fprintf(_coverage_fout, "2262\n");
#line 3647
      fflush(_coverage_fout);
#line 3652
      while (1) {
#line 3652
        fprintf(_coverage_fout, "2252\n");
#line 3652
        fflush(_coverage_fout);
#line 3652
        if (! (n < ex->used)) {
#line 3652
          break;
        }
        {
#line 3655
        fprintf(_coverage_fout, "2168\n");
#line 3655
        fflush(_coverage_fout);
#line 3655
        sum_load = 0UL;
#line 3655
        fprintf(_coverage_fout, "2169\n");
#line 3655
        fflush(_coverage_fout);
#line 3658
        host = *(ex->hosts + n);
#line 3655
        fprintf(_coverage_fout, "2170\n");
#line 3655
        fflush(_coverage_fout);
#line 3660
        fcgi_restart_dead_procs(srv, p, host);
#line 3655
        fprintf(_coverage_fout, "2171\n");
#line 3655
        fflush(_coverage_fout);
#line 3662
        proc = host->first;
        }
#line 3652
        fprintf(_coverage_fout, "2253\n");
#line 3652
        fflush(_coverage_fout);
#line 3662
        while (1) {
#line 3662
          fprintf(_coverage_fout, "2172\n");
#line 3662
          fflush(_coverage_fout);
#line 3662
          if (! proc) {
#line 3662
            break;
          }
#line 3662
          fprintf(_coverage_fout, "2173\n");
#line 3662
          fflush(_coverage_fout);
#line 3663
          sum_load += (unsigned long )proc->load;
#line 3662
          proc = proc->next;
        }
#line 3652
        fprintf(_coverage_fout, "2254\n");
#line 3652
        fflush(_coverage_fout);
#line 3666
        if (host->num_procs) {
#line 3666
          fprintf(_coverage_fout, "2207\n");
#line 3666
          fflush(_coverage_fout);
#line 3666
          if (host->num_procs < (unsigned int )host->max_procs) {
#line 3666
            fprintf(_coverage_fout, "2206\n");
#line 3666
            fflush(_coverage_fout);
#line 3666
            if (sum_load / (unsigned long )host->num_procs > (unsigned long )host->max_load_per_proc) {
#line 3666
              fprintf(_coverage_fout, "2197\n");
#line 3666
              fflush(_coverage_fout);
#line 3670
              if (p->conf.debug) {
                {
#line 3671
                fprintf(_coverage_fout, "2174\n");
#line 3671
                fflush(_coverage_fout);
#line 3671
                log_error_write(srv, "mod_fastcgi.c", 3671U, "s",
                                "overload detected, spawning a new child");
                }
              }
#line 3666
              fprintf(_coverage_fout, "2198\n");
#line 3666
              fflush(_coverage_fout);
#line 3675
              proc = host->unused_procs;
#line 3666
              fprintf(_coverage_fout, "2199\n");
#line 3666
              fflush(_coverage_fout);
#line 3675
              while (1) {
#line 3675
                fprintf(_coverage_fout, "2176\n");
#line 3675
                fflush(_coverage_fout);
#line 3675
                if (proc) {
#line 3675
                  fprintf(_coverage_fout, "2175\n");
#line 3675
                  fflush(_coverage_fout);
#line 3675
                  if (! (proc->pid != 0)) {
#line 3675
                    break;
                  }
                } else {
#line 3675
                  break;
                }
#line 3675
                fprintf(_coverage_fout, "2177\n");
#line 3675
                fflush(_coverage_fout);
#line 3675
                proc = proc->next;
              }
#line 3666
              fprintf(_coverage_fout, "2200\n");
#line 3666
              fflush(_coverage_fout);
#line 3677
              if (proc) {
#line 3677
                fprintf(_coverage_fout, "2180\n");
#line 3677
                fflush(_coverage_fout);
#line 3678
                if ((unsigned int )proc == (unsigned int )host->unused_procs) {
#line 3678
                  fprintf(_coverage_fout, "2178\n");
#line 3678
                  fflush(_coverage_fout);
#line 3678
                  host->unused_procs = proc->next;
                }
#line 3677
                fprintf(_coverage_fout, "2181\n");
#line 3677
                fflush(_coverage_fout);
#line 3680
                if (proc->next) {
#line 3680
                  fprintf(_coverage_fout, "2179\n");
#line 3680
                  fflush(_coverage_fout);
#line 3680
                  (proc->next)->prev = (struct fcgi_proc *)((void *)0);
                }
#line 3677
                fprintf(_coverage_fout, "2182\n");
#line 3677
                fflush(_coverage_fout);
#line 3682
                (host->max_id) ++;
              } else {
                {
#line 3684
                fprintf(_coverage_fout, "2183\n");
#line 3684
                fflush(_coverage_fout);
#line 3684
                proc = fastcgi_process_init();
#line 3684
                fprintf(_coverage_fout, "2184\n");
#line 3684
                fflush(_coverage_fout);
#line 3685
                tmp = host->max_id;
#line 3684
                fprintf(_coverage_fout, "2185\n");
#line 3684
                fflush(_coverage_fout);
#line 3685
                (host->max_id) ++;
#line 3684
                fprintf(_coverage_fout, "2186\n");
#line 3684
                fflush(_coverage_fout);
#line 3685
                proc->id = tmp;
                }
              }
              {
#line 3688
              fprintf(_coverage_fout, "2187\n");
#line 3688
              fflush(_coverage_fout);
#line 3688
              (host->num_procs) ++;
#line 3688
              fprintf(_coverage_fout, "2188\n");
#line 3688
              fflush(_coverage_fout);
#line 3690
              tmp___0 = buffer_is_empty(host->unixsocket);
              }
#line 3666
              fprintf(_coverage_fout, "2201\n");
#line 3666
              fflush(_coverage_fout);
#line 3690
              if (tmp___0) {
#line 3690
                fprintf(_coverage_fout, "2189\n");
#line 3690
                fflush(_coverage_fout);
#line 3691
                proc->port = (unsigned int )host->port + proc->id;
              } else {
                {
#line 3693
                fprintf(_coverage_fout, "2190\n");
#line 3693
                fflush(_coverage_fout);
#line 3693
                buffer_copy_string_buffer(proc->unixsocket,
                                          (buffer const   *)host->unixsocket);
#line 3693
                fprintf(_coverage_fout, "2191\n");
#line 3693
                fflush(_coverage_fout);
#line 3694
                buffer_append_string(proc->unixsocket, "-");
#line 3693
                fprintf(_coverage_fout, "2192\n");
#line 3693
                fflush(_coverage_fout);
#line 3695
                buffer_append_long(proc->unixsocket, (long )proc->id);
                }
              }
              {
#line 3698
              fprintf(_coverage_fout, "2193\n");
#line 3698
              fflush(_coverage_fout);
#line 3698
              tmp___1 = fcgi_spawn_connection(srv, p, host, proc);
              }
#line 3666
              fprintf(_coverage_fout, "2202\n");
#line 3666
              fflush(_coverage_fout);
#line 3698
              if (tmp___1) {
                {
#line 3699
                fprintf(_coverage_fout, "2194\n");
#line 3699
                fflush(_coverage_fout);
#line 3699
                log_error_write(srv, "mod_fastcgi.c", 3699U, "s",
                                "ERROR: spawning fcgi failed.");
                }
#line 3698
                fprintf(_coverage_fout, "2195\n");
#line 3698
                fflush(_coverage_fout);
#line 3701
                return ((enum __anonenum_handler_t_43 )5);
              }
#line 3666
              fprintf(_coverage_fout, "2203\n");
#line 3666
              fflush(_coverage_fout);
#line 3704
              proc->prev = (struct fcgi_proc *)((void *)0);
#line 3705
              proc->next = host->first;
#line 3666
              fprintf(_coverage_fout, "2204\n");
#line 3666
              fflush(_coverage_fout);
#line 3706
              if (host->first) {
#line 3706
                fprintf(_coverage_fout, "2196\n");
#line 3706
                fflush(_coverage_fout);
#line 3707
                (host->first)->prev = proc;
              }
#line 3666
              fprintf(_coverage_fout, "2205\n");
#line 3666
              fflush(_coverage_fout);
#line 3709
              host->first = proc;
            }
          }
        }
#line 3652
        fprintf(_coverage_fout, "2255\n");
#line 3652
        fflush(_coverage_fout);
#line 3712
        proc = host->first;
#line 3652
        fprintf(_coverage_fout, "2256\n");
#line 3652
        fflush(_coverage_fout);
#line 3712
        while (1) {
#line 3712
          fprintf(_coverage_fout, "2224\n");
#line 3712
          fflush(_coverage_fout);
#line 3712
          if (! proc) {
#line 3712
            break;
          }
#line 3712
          fprintf(_coverage_fout, "2225\n");
#line 3712
          fflush(_coverage_fout);
#line 3713
          if (proc->load != 0U) {
#line 3713
            break;
          }
#line 3712
          fprintf(_coverage_fout, "2226\n");
#line 3712
          fflush(_coverage_fout);
#line 3714
          if (host->num_procs <= (unsigned int )host->min_procs) {
#line 3714
            break;
          }
#line 3712
          fprintf(_coverage_fout, "2227\n");
#line 3712
          fflush(_coverage_fout);
#line 3715
          if (proc->pid == 0) {
            goto __Cont;
          }
#line 3712
          fprintf(_coverage_fout, "2228\n");
#line 3712
          fflush(_coverage_fout);
#line 3717
          if (srv->cur_ts - proc->last_used > (long )host->idle_timeout) {
#line 3717
            fprintf(_coverage_fout, "2218\n");
#line 3717
            fflush(_coverage_fout);
#line 3721
            if (p->conf.debug) {
              {
#line 3722
              fprintf(_coverage_fout, "2208\n");
#line 3722
              fflush(_coverage_fout);
#line 3722
              log_error_write(srv, "mod_fastcgi.c", 3722U, "ssbsd",
                              "idle-timeout reached; terminating child:",
                              "socket:", proc->connection_name, "pid", proc->pid);
              }
            }
#line 3717
            fprintf(_coverage_fout, "2219\n");
#line 3717
            fflush(_coverage_fout);
#line 3729
            if (proc->next) {
#line 3729
              fprintf(_coverage_fout, "2209\n");
#line 3729
              fflush(_coverage_fout);
#line 3729
              (proc->next)->prev = proc->prev;
            }
#line 3717
            fprintf(_coverage_fout, "2220\n");
#line 3717
            fflush(_coverage_fout);
#line 3730
            if (proc->prev) {
#line 3730
              fprintf(_coverage_fout, "2210\n");
#line 3730
              fflush(_coverage_fout);
#line 3730
              (proc->prev)->next = proc->next;
            }
#line 3717
            fprintf(_coverage_fout, "2221\n");
#line 3717
            fflush(_coverage_fout);
#line 3732
            if ((unsigned int )proc->prev == (unsigned int )((void *)0)) {
#line 3732
              fprintf(_coverage_fout, "2211\n");
#line 3732
              fflush(_coverage_fout);
#line 3732
              host->first = proc->next;
            }
#line 3717
            fprintf(_coverage_fout, "2222\n");
#line 3717
            fflush(_coverage_fout);
#line 3734
            proc->prev = (struct fcgi_proc *)((void *)0);
#line 3735
            proc->next = host->unused_procs;
#line 3717
            fprintf(_coverage_fout, "2223\n");
#line 3717
            fflush(_coverage_fout);
#line 3737
            if (host->unused_procs) {
#line 3737
              fprintf(_coverage_fout, "2212\n");
#line 3737
              fflush(_coverage_fout);
#line 3737
              (host->unused_procs)->prev = proc;
            }
            {
#line 3738
            fprintf(_coverage_fout, "2213\n");
#line 3738
            fflush(_coverage_fout);
#line 3738
            host->unused_procs = proc;
#line 3738
            fprintf(_coverage_fout, "2214\n");
#line 3738
            fflush(_coverage_fout);
#line 3740
            kill(proc->pid, 15);
#line 3738
            fprintf(_coverage_fout, "2215\n");
#line 3738
            fflush(_coverage_fout);
#line 3742
            proc->state = (enum __anonenum_state_139 )5;
#line 3738
            fprintf(_coverage_fout, "2216\n");
#line 3738
            fflush(_coverage_fout);
#line 3744
            log_error_write(srv, "mod_fastcgi.c", 3744U, "ssbsd", "killed:",
                            "socket:", proc->connection_name, "pid", proc->pid);
#line 3738
            fprintf(_coverage_fout, "2217\n");
#line 3738
            fflush(_coverage_fout);
#line 3749
            (host->num_procs) --;
            }
#line 3752
            break;
          }
#line 3712
          fprintf(_coverage_fout, "2229\n");
#line 3712
          fflush(_coverage_fout);
          __Cont: 
#line 3712
          proc = proc->next;
        }
#line 3652
        fprintf(_coverage_fout, "2257\n");
#line 3652
        fflush(_coverage_fout);
#line 3756
        proc = host->unused_procs;
#line 3652
        fprintf(_coverage_fout, "2258\n");
#line 3652
        fflush(_coverage_fout);
#line 3756
        while (1) {
#line 3756
          fprintf(_coverage_fout, "2249\n");
#line 3756
          fflush(_coverage_fout);
#line 3756
          if (! proc) {
#line 3756
            break;
          }
#line 3756
          fprintf(_coverage_fout, "2250\n");
#line 3756
          fflush(_coverage_fout);
#line 3759
          if (proc->pid == 0) {
            goto __Cont___0;
          }
          {
#line 3761
          fprintf(_coverage_fout, "2230\n");
#line 3761
          fflush(_coverage_fout);
#line 3761
          tmp___2 = waitpid(proc->pid, & status, 1);
          }
#line 3761
          switch (tmp___2) {
          case 0: 
#line 3764
          break;
          case -1: 
          {
#line 3766
          fprintf(_coverage_fout, "2231\n");
#line 3766
          fflush(_coverage_fout);
#line 3766
          tmp___5 = __errno_location();
          }
#line 3761
          fprintf(_coverage_fout, "2245\n");
#line 3761
          fflush(_coverage_fout);
#line 3766
          if (*tmp___5 != 4) {
            {
#line 3768
            fprintf(_coverage_fout, "2232\n");
#line 3768
            fflush(_coverage_fout);
#line 3768
            tmp___3 = __errno_location();
#line 3768
            fprintf(_coverage_fout, "2233\n");
#line 3768
            fflush(_coverage_fout);
#line 3768
            tmp___4 = strerror(*tmp___3);
#line 3768
            fprintf(_coverage_fout, "2234\n");
#line 3768
            fflush(_coverage_fout);
#line 3768
            log_error_write(srv, "mod_fastcgi.c", 3768U, "sddss", "pid ",
                            proc->pid, proc->state, "not found:", tmp___4);
            }
          }
#line 3780
          break;
#line 3761
          fprintf(_coverage_fout, "2246\n");
#line 3761
          fflush(_coverage_fout);
          default: 
#line 3783
          __constr_expr_4.__in = status;
#line 3761
          fprintf(_coverage_fout, "2247\n");
#line 3761
          fflush(_coverage_fout);
#line 3783
          if ((__constr_expr_4.__i & 127) == 0) {
#line 3783
            fprintf(_coverage_fout, "2237\n");
#line 3783
            fflush(_coverage_fout);
#line 3784
            if ((int )proc->state != 5) {
              {
#line 3785
              fprintf(_coverage_fout, "2235\n");
#line 3785
              fflush(_coverage_fout);
#line 3785
              __constr_expr_0.__in = status;
#line 3785
              fprintf(_coverage_fout, "2236\n");
#line 3785
              fflush(_coverage_fout);
#line 3785
              log_error_write(srv, "mod_fastcgi.c", 3785U, "sdb",
                              "child exited:",
                              (__constr_expr_0.__i & 65280) >> 8,
                              proc->connection_name);
              }
            }
          } else {
#line 3783
            fprintf(_coverage_fout, "2243\n");
#line 3783
            fflush(_coverage_fout);
#line 3789
            __constr_expr_3.__in = status;
#line 3783
            fprintf(_coverage_fout, "2244\n");
#line 3783
            fflush(_coverage_fout);
#line 3789
            if ((int )((signed char )((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
#line 3789
              fprintf(_coverage_fout, "2240\n");
#line 3789
              fflush(_coverage_fout);
#line 3790
              __constr_expr_2.__in = status;
#line 3789
              fprintf(_coverage_fout, "2241\n");
#line 3789
              fflush(_coverage_fout);
#line 3790
              if ((__constr_expr_2.__i & 127) != 15) {
                {
#line 3791
                fprintf(_coverage_fout, "2238\n");
#line 3791
                fflush(_coverage_fout);
#line 3791
                __constr_expr_1.__in = status;
#line 3791
                fprintf(_coverage_fout, "2239\n");
#line 3791
                fflush(_coverage_fout);
#line 3791
                log_error_write(srv, "mod_fastcgi.c", 3791U, "sd",
                                "child signaled:", __constr_expr_1.__i & 127);
                }
              }
            } else {
              {
#line 3796
              fprintf(_coverage_fout, "2242\n");
#line 3796
              fflush(_coverage_fout);
#line 3796
              log_error_write(srv, "mod_fastcgi.c", 3796U, "sd",
                              "child died somehow:", status);
              }
            }
          }
#line 3761
          fprintf(_coverage_fout, "2248\n");
#line 3761
          fflush(_coverage_fout);
#line 3800
          proc->pid = 0;
#line 3801
          proc->state = (enum __anonenum_state_139 )0;
#line 3802
          (host->max_id) --;
          }
#line 3756
          fprintf(_coverage_fout, "2251\n");
#line 3756
          fflush(_coverage_fout);
          __Cont___0: 
#line 3756
          proc = proc->next;
        }
#line 3652
        fprintf(_coverage_fout, "2259\n");
#line 3652
        fflush(_coverage_fout);
#line 3652
        n ++;
      }
#line 3647
      fprintf(_coverage_fout, "2263\n");
#line 3647
      fflush(_coverage_fout);
#line 3647
      j ++;
    }
#line 3639
    fprintf(_coverage_fout, "2267\n");
#line 3639
    fflush(_coverage_fout);
#line 3639
    i ++;
  }
#line 3624
  fprintf(_coverage_fout, "2270\n");
#line 3624
  fflush(_coverage_fout);
#line 3809
  return ((enum __anonenum_handler_t_43 )1);
}
}
#line 3813 "mod_fastcgi.c"
int mod_fastcgi_plugin_init(plugin *p ) 
{ 

    __globinit_mod_fastcgi();
  {
  {
#line 3814
  fprintf(_coverage_fout, "2271\n");
#line 3814
  fflush(_coverage_fout);
#line 3814
  p->version = (unsigned int )(((1 << 16) | (4 << 8)) | 17);
#line 3814
  fprintf(_coverage_fout, "2272\n");
#line 3814
  fflush(_coverage_fout);
#line 3815
  p->name = buffer_init_string("fastcgi");
#line 3814
  fprintf(_coverage_fout, "2273\n");
#line 3814
  fflush(_coverage_fout);
#line 3817
  p->init = & mod_fastcgi_init;
#line 3814
  fprintf(_coverage_fout, "2274\n");
#line 3814
  fflush(_coverage_fout);
#line 3818
  p->cleanup = & mod_fastcgi_free;
#line 3814
  fprintf(_coverage_fout, "2275\n");
#line 3814
  fflush(_coverage_fout);
#line 3819
  p->set_defaults = & mod_fastcgi_set_defaults;
#line 3814
  fprintf(_coverage_fout, "2276\n");
#line 3814
  fflush(_coverage_fout);
#line 3820
  p->connection_reset = & fcgi_connection_reset;
#line 3814
  fprintf(_coverage_fout, "2277\n");
#line 3814
  fflush(_coverage_fout);
#line 3821
  p->handle_connection_close = & fcgi_connection_close_callback;
#line 3814
  fprintf(_coverage_fout, "2278\n");
#line 3814
  fflush(_coverage_fout);
#line 3822
  p->handle_uri_clean = & fcgi_check_extension_1;
#line 3814
  fprintf(_coverage_fout, "2279\n");
#line 3814
  fflush(_coverage_fout);
#line 3823
  p->handle_subrequest_start = & fcgi_check_extension_2;
#line 3814
  fprintf(_coverage_fout, "2280\n");
#line 3814
  fflush(_coverage_fout);
#line 3824
  p->handle_subrequest = & mod_fastcgi_handle_subrequest;
#line 3814
  fprintf(_coverage_fout, "2281\n");
#line 3814
  fflush(_coverage_fout);
#line 3825
  p->handle_joblist = & mod_fastcgi_handle_joblist;
#line 3814
  fprintf(_coverage_fout, "2282\n");
#line 3814
  fflush(_coverage_fout);
#line 3826
  p->handle_trigger = & mod_fastcgi_handle_trigger;
#line 3814
  fprintf(_coverage_fout, "2283\n");
#line 3814
  fflush(_coverage_fout);
#line 3828
  p->data = (void *)0;
  }
#line 3813
  fprintf(_coverage_fout, "2284\n");
#line 3813
  fflush(_coverage_fout);
#line 3830
  return (0);
}
}
void __globinit_mod_fastcgi(void) 
{ 

  {
#line 3813
  _coverage_fout = fopen("mod_fastcgi.i.path", "wb");
}
}
