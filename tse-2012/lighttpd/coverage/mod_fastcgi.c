struct _IO_FILE;
struct _IO_FILE *_coverage_fout  ;
typedef unsigned int size_t;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long long __quad_t;
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef __u_quad_t __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long __off_t;
typedef __quad_t __off64_t;
typedef int __pid_t;
struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef __u_quad_t __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef long __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef __quad_t __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef __u_quad_t __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef __u_quad_t __fsfilcnt64_t;
typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef int __intptr_t;
typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino64_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off64_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef int register_t;
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_2 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef __suseconds_t suseconds_t;
typedef long __fd_mask;
struct __anonstruct_fd_set_3 {
   __fd_mask __fds_bits[1024UL / (8UL * sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_3 fd_set;
typedef __fd_mask fd_mask;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_4 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_4 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_6 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_6 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_5 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_5 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_7 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_7 pthread_mutexattr_t;
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
union __anonunion_pthread_cond_t_8 {
   struct __anonstruct___data_9 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_8 pthread_cond_t;
union __anonunion_pthread_condattr_t_10 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_10 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
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
union __anonunion_pthread_rwlock_t_11 {
   struct __anonstruct___data_12 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_11 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_13 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_13 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_14 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_14 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_15 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_15 pthread_barrierattr_t;
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
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
struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
typedef long wchar_t;
struct __anonstruct_div_t_19 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_19 div_t;
struct __anonstruct_ldiv_t_20 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_20 ldiv_t;
struct __anonstruct_lldiv_t_21 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_21 lldiv_t;
struct random_data {
   int32_t *fptr ;
   int32_t *rptr ;
   int32_t *state ;
   int rand_type ;
   int rand_deg ;
   int rand_sep ;
   int32_t *end_ptr ;
};
struct drand48_data {
   unsigned short __x[3] ;
   unsigned short __old_x[3] ;
   unsigned short __c ;
   unsigned short __init ;
   unsigned long long __a ;
};
typedef int (*__compar_fn_t)(void const   * , void const   * );
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
typedef __sig_atomic_t sig_atomic_t;
typedef void (*__sighandler_t)(int  );
typedef void (*sig_t)(int  );
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
struct __anonstruct__kill_24 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_25 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_26 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_27 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
struct __anonstruct__sigfault_28 {
   void *si_addr ;
};
struct __anonstruct__sigpoll_29 {
   long si_band ;
   int si_fd ;
};
union __anonunion__sifields_23 {
   int _pad[128UL / sizeof(int ) - 3UL] ;
   struct __anonstruct__kill_24 _kill ;
   struct __anonstruct__timer_25 _timer ;
   struct __anonstruct__rt_26 _rt ;
   struct __anonstruct__sigchld_27 _sigchld ;
   struct __anonstruct__sigfault_28 _sigfault ;
   struct __anonstruct__sigpoll_29 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_23 _sifields ;
};
typedef struct siginfo siginfo_t;
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
enum __anonenum_33 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
enum __anonenum_34 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
enum __anonenum_35 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
enum __anonenum_36 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
enum __anonenum_37 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
struct __anonstruct__sigev_thread_39 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_38 {
   int _pad[64UL / sizeof(int ) - 3UL] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_39 _sigev_thread ;
};
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_38 _sigev_un ;
};
typedef struct sigevent sigevent_t;
enum __anonenum_40 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
union __anonunion___sigaction_handler_41 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_41 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
struct sigvec {
   void (*sv_handler)(int  ) ;
   int sv_mask ;
   int sv_flags ;
};
struct _fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
struct _fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};
struct _xmmreg {
   unsigned long element[4] ;
};
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
struct sigstack {
   void *ss_sp ;
   int ss_onstack ;
};
enum __anonenum_42 {
    SS_ONSTACK = 1,
    SS_DISABLE = 2
} ;
struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};
typedef struct sigaltstack stack_t;
enum __anonenum_handler_t_43 {
    HANDLER_UNSET = 0,
    HANDLER_GO_ON = 1,
    HANDLER_FINISHED = 2,
    HANDLER_COMEBACK = 3,
    HANDLER_WAIT_FOR_EVENT = 4,
    HANDLER_ERROR = 5,
    HANDLER_WAIT_FOR_FD = 6
} ;
typedef enum __anonenum_handler_t_43 handler_t;
struct __anonstruct_buffer_44 {
   char *ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_44 buffer;
struct __anonstruct_buffer_array_45 {
   buffer **ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_array_45 buffer_array;
struct __anonstruct_read_buffer_46 {
   char *ptr ;
   size_t offset ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_read_buffer_46 read_buffer;
enum __anonenum_buffer_encoding_t_47 {
    ENCODING_UNSET = 0,
    ENCODING_REL_URI = 1,
    ENCODING_REL_URI_PART = 2,
    ENCODING_HTML = 3,
    ENCODING_MINIMAL_XML = 4,
    ENCODING_HEX = 5,
    ENCODING_HTTP_HEADER = 6
} ;
typedef enum __anonenum_buffer_encoding_t_47 buffer_encoding_t;
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
typedef struct timezone * __restrict  __timezone_ptr_t;
enum __itimer_which {
    ITIMER_REAL = 0,
    ITIMER_VIRTUAL = 1,
    ITIMER_PROF = 2
} ;
struct itimerval {
   struct timeval it_interval ;
   struct timeval it_value ;
};
typedef int __itimer_which_t;
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
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef unsigned int uintptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef long __gwchar_t;
struct __anonstruct_imaxdiv_t_48 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_imaxdiv_t_48 imaxdiv_t;
struct real_pcre;
typedef struct real_pcre pcre;
struct pcre_extra {
   unsigned long flags ;
   void *study_data ;
   unsigned long match_limit ;
   void *callout_data ;
   unsigned char const   *tables ;
   unsigned long match_limit_recursion ;
};
typedef struct pcre_extra pcre_extra;
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
typedef struct pcre_callout_block pcre_callout_block;
enum __anonenum_data_type_t_49 {
    TYPE_UNSET = 0,
    TYPE_STRING = 1,
    TYPE_COUNT = 2,
    TYPE_ARRAY = 3,
    TYPE_INTEGER = 4,
    TYPE_FASTCGI = 5,
    TYPE_CONFIG = 6
} ;
typedef enum __anonenum_data_type_t_49 data_type_t;
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
typedef struct data_unset data_unset;
struct __anonstruct_array_50 {
   data_unset **data ;
   size_t *sorted ;
   size_t used ;
   size_t size ;
   size_t unique_ndx ;
   size_t next_power_of_2 ;
   int is_weakref ;
};
typedef struct __anonstruct_array_50 array;
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
typedef struct __anonstruct_data_count_51 data_count;
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
typedef struct __anonstruct_data_string_52 data_string;
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
typedef struct __anonstruct_data_array_53 data_array;
enum __anonenum_config_cond_t_54 {
    CONFIG_COND_UNSET = 0,
    CONFIG_COND_EQ = 1,
    CONFIG_COND_MATCH = 2,
    CONFIG_COND_NE = 3,
    CONFIG_COND_NOMATCH = 4
} ;
typedef enum __anonenum_config_cond_t_54 config_cond_t;
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
typedef enum __anonenum_comp_key_t_55 comp_key_t;
struct _data_config;
typedef struct _data_config data_config;
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
typedef struct __anonstruct_data_integer_56 data_integer;
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
typedef struct __anonstruct_data_fastcgi_57 data_fastcgi;
enum __anonenum_type_58 {
    UNUSED_CHUNK = 0,
    MEM_CHUNK = 1,
    FILE_CHUNK = 2
} ;
struct __anonstruct_mmap_60 {
   char *start ;
   size_t length ;
   off_t offset ;
};
struct __anonstruct_file_59 {
   buffer *name ;
   off_t start ;
   off_t length ;
   int fd ;
   struct __anonstruct_mmap_60 mmap ;
   int is_temp ;
};
struct chunk {
   enum __anonenum_type_58 type ;
   buffer *mem ;
   struct __anonstruct_file_59 file ;
   off_t offset ;
   struct chunk *next ;
};
typedef struct chunk chunk;
struct __anonstruct_chunkqueue_61 {
   chunk *first ;
   chunk *last ;
   chunk *unused ;
   size_t unused_chunks ;
   array *tempdirs ;
   off_t bytes_in ;
   off_t bytes_out ;
};
typedef struct __anonstruct_chunkqueue_61 chunkqueue;
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
typedef enum __anonenum_http_method_t_62 http_method_t;
enum __anonenum_http_version_t_63 {
    HTTP_VERSION_UNSET = -1,
    HTTP_VERSION_1_0 = 0,
    HTTP_VERSION_1_1 = 1
} ;
typedef enum __anonenum_http_version_t_63 http_version_t;
struct __anonstruct_keyvalue_64 {
   int key ;
   char *value ;
};
typedef struct __anonstruct_keyvalue_64 keyvalue;
struct __anonstruct_s_keyvalue_65 {
   char *key ;
   char *value ;
};
typedef struct __anonstruct_s_keyvalue_65 s_keyvalue;
struct __anonstruct_pcre_keyvalue_66 {
   pcre *key ;
   pcre_extra *key_extra ;
   buffer *value ;
};
typedef struct __anonstruct_pcre_keyvalue_66 pcre_keyvalue;
enum __anonenum_httpauth_type_67 {
    HTTP_AUTH_BASIC = 0,
    HTTP_AUTH_DIGEST = 1
} ;
typedef enum __anonenum_httpauth_type_67 httpauth_type;
struct __anonstruct_httpauth_keyvalue_68 {
   char *key ;
   char *realm ;
   httpauth_type type ;
};
typedef struct __anonstruct_httpauth_keyvalue_68 httpauth_keyvalue;
struct __anonstruct_keyvalue_buffer_69 {
   keyvalue **kv ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_keyvalue_buffer_69 keyvalue_buffer;
struct __anonstruct_s_keyvalue_buffer_70 {
   s_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_s_keyvalue_buffer_70 s_keyvalue_buffer;
struct __anonstruct_httpauth_keyvalue_buffer_71 {
   httpauth_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_httpauth_keyvalue_buffer_71 httpauth_keyvalue_buffer;
struct __anonstruct_pcre_keyvalue_buffer_72 {
   pcre_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_pcre_keyvalue_buffer_72 pcre_keyvalue_buffer;
typedef int ptrdiff_t;
struct __anonstruct_bitset_73 {
   size_t *bits ;
   size_t nbits ;
};
typedef struct __anonstruct_bitset_73 bitset;
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
union epoll_data {
   void *ptr ;
   int fd ;
   uint32_t u32 ;
   uint64_t u64 ;
};
typedef union epoll_data epoll_data_t;
struct epoll_event {
   uint32_t events ;
   epoll_data_t data ;
};
typedef unsigned long nfds_t;
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
typedef handler_t (*fdevent_handler)(void *srv , void *ctx , int revents );
enum __anonenum_fd_event_t_74 {
    FD_EVENT_TYPE_UNSET = -1,
    FD_EVENT_TYPE_CONNECTION = 0,
    FD_EVENT_TYPE_FCGI_CONNECTION = 1,
    FD_EVENT_TYPE_DIRWATCH = 2,
    FD_EVENT_TYPE_CGI_CONNECTION = 3
} ;
typedef enum __anonenum_fd_event_t_74 fd_event_t;
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
typedef enum __anonenum_fdevent_handler_t_75 fdevent_handler_t;
struct __anonstruct_fd_conn_76 {
   int fd ;
   void *conn ;
   fd_event_t fd_type ;
   int events ;
   int revents ;
};
typedef struct __anonstruct_fd_conn_76 fd_conn;
struct __anonstruct_fd_conn_buffer_77 {
   fd_conn *ptr ;
   size_t size ;
   size_t used ;
};
typedef struct __anonstruct_fd_conn_buffer_77 fd_conn_buffer;
struct _fdnode {
   handler_t (*handler)(void *srv , void *ctx , int revents ) ;
   void *ctx ;
   int fd ;
   struct _fdnode *prev ;
   struct _fdnode *next ;
};
typedef struct _fdnode fdnode;
struct __anonstruct_buffer_int_78 {
   int *ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_int_78 buffer_int;
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
typedef struct fdevents fdevents;
struct iovec {
   void *iov_base ;
   size_t iov_len ;
};
enum __socket_type {
    SOCK_STREAM = 1,
    SOCK_DGRAM = 2,
    SOCK_RAW = 3,
    SOCK_RDM = 4,
    SOCK_SEQPACKET = 5,
    SOCK_PACKET = 10
} ;
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
struct sockaddr_storage {
   sa_family_t ss_family ;
   __uint32_t __ss_align ;
   char __ss_padding[128UL - 2UL * sizeof(__uint32_t )] ;
};
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
struct msghdr {
   void *msg_name ;
   socklen_t msg_namelen ;
   struct iovec *msg_iov ;
   size_t msg_iovlen ;
   void *msg_control ;
   size_t msg_controllen ;
   int msg_flags ;
};
struct cmsghdr {
   size_t cmsg_len ;
   int cmsg_level ;
   int cmsg_type ;
   unsigned char __cmsg_data[] ;
};
enum __anonenum_80 {
    SCM_RIGHTS = 1,
    SCM_CREDENTIALS = 2
} ;
struct ucred {
   pid_t pid ;
   uid_t uid ;
   gid_t gid ;
};
struct linger {
   int l_onoff ;
   int l_linger ;
};
struct osockaddr {
   unsigned short sa_family ;
   unsigned char sa_data[14] ;
};
enum __anonenum_81 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
struct termio {
   unsigned short c_iflag ;
   unsigned short c_oflag ;
   unsigned short c_cflag ;
   unsigned short c_lflag ;
   unsigned char c_line ;
   unsigned char c_cc[8] ;
};
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
typedef uint16_t in_port_t;
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
typedef uint32_t in_addr_t;
struct in_addr {
   in_addr_t s_addr ;
};
union __anonunion_in6_u_84 {
   uint8_t u6_addr8[16] ;
   uint16_t u6_addr16[8] ;
   uint32_t u6_addr32[4] ;
};
struct in6_addr {
   union __anonunion_in6_u_84 in6_u ;
};
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};
struct sockaddr_in6 {
   sa_family_t sin6_family ;
   in_port_t sin6_port ;
   uint32_t sin6_flowinfo ;
   struct in6_addr sin6_addr ;
   uint32_t sin6_scope_id ;
};
struct ip_mreq {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
};
struct ip_mreq_source {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
   struct in_addr imr_sourceaddr ;
};
struct ipv6_mreq {
   struct in6_addr ipv6mr_multiaddr ;
   unsigned int ipv6mr_interface ;
};
struct group_req {
   uint32_t gr_interface ;
   struct sockaddr_storage gr_group ;
};
struct group_source_req {
   uint32_t gsr_interface ;
   struct sockaddr_storage gsr_group ;
   struct sockaddr_storage gsr_source ;
};
struct ip_msfilter {
   struct in_addr imsf_multiaddr ;
   struct in_addr imsf_interface ;
   uint32_t imsf_fmode ;
   uint32_t imsf_numsrc ;
   struct in_addr imsf_slist[1] ;
};
struct group_filter {
   uint32_t gf_interface ;
   struct sockaddr_storage gf_group ;
   uint32_t gf_fmode ;
   uint32_t gf_numsrc ;
   struct sockaddr_storage gf_slist[1] ;
};
struct ip_opts {
   struct in_addr ip_dst ;
   char ip_opts[40] ;
};
struct ip_mreqn {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_address ;
   int imr_ifindex ;
};
struct in_pktinfo {
   int ipi_ifindex ;
   struct in_addr ipi_spec_dst ;
   struct in_addr ipi_addr ;
};
struct in6_pktinfo {
   struct in6_addr ipi6_addr ;
   unsigned int ipi6_ifindex ;
};
struct ip6_mtuinfo {
   struct sockaddr_in6 ip6m_addr ;
   uint32_t ip6m_mtu ;
};
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
enum tcp_ca_state {
    TCP_CA_Open = 0,
    TCP_CA_Disorder = 1,
    TCP_CA_CWR = 2,
    TCP_CA_Recovery = 3,
    TCP_CA_Loss = 4
} ;
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
struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
};
struct rpcent {
   char *r_name ;
   char **r_aliases ;
   int r_number ;
};
struct netent {
   char *n_name ;
   char **n_aliases ;
   int n_addrtype ;
   uint32_t n_net ;
};
struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};
struct servent {
   char *s_name ;
   char **s_aliases ;
   int s_port ;
   char *s_proto ;
};
struct protoent {
   char *p_name ;
   char **p_aliases ;
   int p_proto ;
};
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
struct tree_node {
   struct tree_node *left ;
   struct tree_node *right ;
   int key ;
   int size ;
   void *data ;
};
typedef struct tree_node splay_tree;
enum __anonenum_etag_flags_t_86 {
    ETAG_USE_INODE = 1,
    ETAG_USE_MTIME = 2,
    ETAG_USE_SIZE = 4
} ;
typedef enum __anonenum_etag_flags_t_86 etag_flags_t;
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
typedef enum __anonenum_config_values_type_t_87 config_values_type_t;
enum __anonenum_config_scope_type_t_88 {
    T_CONFIG_SCOPE_UNSET = 0,
    T_CONFIG_SCOPE_SERVER = 1,
    T_CONFIG_SCOPE_CONNECTION = 2
} ;
typedef enum __anonenum_config_scope_type_t_88 config_scope_type_t;
struct __anonstruct_config_values_t_89 {
   char const   *key ;
   void *destination ;
   config_values_type_t type ;
   config_scope_type_t scope ;
};
typedef struct __anonstruct_config_values_t_89 config_values_t;
enum __anonenum_connection_type_90 {
    DIRECT = 0,
    EXTERNAL = 1
} ;
typedef enum __anonenum_connection_type_90 connection_type;
struct __anonstruct_request_handler_91 {
   char *key ;
   connection_type type ;
   char *value ;
};
typedef struct __anonstruct_request_handler_91 request_handler;
struct __anonstruct_fcgi_connections_92 {
   char *key ;
   char *host ;
   unsigned short port ;
   int used ;
   short factor ;
};
typedef struct __anonstruct_fcgi_connections_92 fcgi_connections;
union __anonunion_sock_addr_93 {
   struct sockaddr_in6 ipv6 ;
   struct sockaddr_in ipv4 ;
   struct sockaddr_un un ;
   struct sockaddr plain ;
};
typedef union __anonunion_sock_addr_93 sock_addr;
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
typedef struct __anonstruct_request_94 request;
enum __anonenum_transfer_encoding_96 {
    HTTP_TRANSFER_ENCODING_IDENTITY = 0,
    HTTP_TRANSFER_ENCODING_CHUNKED = 1
} ;
struct __anonstruct_response_95 {
   off_t content_length ;
   int keep_alive ;
   array *headers ;
   enum __anonenum_transfer_encoding_96 transfer_encoding ;
};
typedef struct __anonstruct_response_95 response;
struct __anonstruct_request_uri_97 {
   buffer *scheme ;
   buffer *authority ;
   buffer *path ;
   buffer *path_raw ;
   buffer *query ;
};
typedef struct __anonstruct_request_uri_97 request_uri;
struct __anonstruct_physical_98 {
   buffer *path ;
   buffer *basedir ;
   buffer *doc_root ;
   buffer *rel_path ;
   buffer *etag ;
};
typedef struct __anonstruct_physical_98 physical;
struct __anonstruct_stat_cache_entry_99 {
   buffer *name ;
   buffer *etag ;
   struct stat st ;
   time_t stat_ts ;
   char is_symlink ;
   buffer *content_type ;
};
typedef struct __anonstruct_stat_cache_entry_99 stat_cache_entry;
struct __anonstruct_stat_cache_100 {
   splay_tree *files ;
   buffer *dir_name ;
   buffer *hash_key ;
};
typedef struct __anonstruct_stat_cache_100 stat_cache;
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
typedef struct __anonstruct_specific_config_101 specific_config;
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
typedef enum __anonenum_connection_state_t_102 connection_state_t;
enum __anonenum_cond_result_t_103 {
    COND_RESULT_UNSET = 0,
    COND_RESULT_FALSE = 1,
    COND_RESULT_TRUE = 2
} ;
typedef enum __anonenum_cond_result_t_103 cond_result_t;
struct __anonstruct_cond_cache_t_104 {
   cond_result_t result ;
   int patterncount ;
   int matches[30] ;
   buffer *comp_value ;
   comp_key_t comp_type ;
};
typedef struct __anonstruct_cond_cache_t_104 cond_cache_t;
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
typedef struct __anonstruct_connection_105 connection;
struct __anonstruct_connections_106 {
   connection **ptr ;
   size_t size ;
   size_t used ;
};
typedef struct __anonstruct_connections_106 connections;
union __anonunion_addr_108 {
   struct in6_addr ipv6 ;
   struct in_addr ipv4 ;
};
struct __anonstruct_inet_ntop_cache_type_107 {
   int family ;
   union __anonunion_addr_108 addr ;
   char b2[47] ;
   time_t ts ;
};
typedef struct __anonstruct_inet_ntop_cache_type_107 inet_ntop_cache_type;
struct __anonstruct_realpath_cache_type_109 {
   buffer *uri ;
   time_t mtime ;
   int http_status ;
};
typedef struct __anonstruct_realpath_cache_type_109 realpath_cache_type;
struct __anonstruct_mtime_cache_type_110 {
   time_t mtime ;
   buffer *str ;
};
typedef struct __anonstruct_mtime_cache_type_110 mtime_cache_type;
struct __anonstruct_buffer_plugin_111 {
   void *ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_plugin_111 buffer_plugin;
enum __anonenum_stat_cache_engine_113 {
    STAT_CACHE_ENGINE_UNSET = 0,
    STAT_CACHE_ENGINE_NONE = 1,
    STAT_CACHE_ENGINE_SIMPLE = 2
} ;
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
typedef struct __anonstruct_server_config_112 server_config;
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
typedef struct __anonstruct_server_socket_114 server_socket;
struct __anonstruct_server_socket_array_115 {
   server_socket **ptr ;
   size_t size ;
   size_t used ;
};
typedef struct __anonstruct_server_socket_array_115 server_socket_array;
enum __anonenum_errorlog_mode_116 {
    ERRORLOG_STDERR = 0,
    ERRORLOG_FILE = 1,
    ERRORLOG_SYSLOG = 2
} ;
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
typedef struct server server;
struct __anonstruct_two_strings_117 {
   char *key ;
   char *value ;
};
typedef struct __anonstruct_two_strings_117 two_strings;
enum __anonenum_config_var_t_118 {
    CONFIG_UNSET = 0,
    CONFIG_DOCUMENT_ROOT = 1
} ;
typedef enum __anonenum_config_var_t_118 config_var_t;
typedef __clock_t clock_t;
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
struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};
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
typedef struct __anonstruct_plugin_119 plugin;
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
typedef struct __anonstruct_FCGI_Header_120 FCGI_Header;
struct __anonstruct_FCGI_BeginRequestBody_121 {
   unsigned char roleB1 ;
   unsigned char roleB0 ;
   unsigned char flags ;
   unsigned char reserved[5] ;
};
typedef struct __anonstruct_FCGI_BeginRequestBody_121 FCGI_BeginRequestBody;
struct __anonstruct_FCGI_BeginRequestRecord_122 {
   FCGI_Header header ;
   FCGI_BeginRequestBody body ;
};
typedef struct __anonstruct_FCGI_BeginRequestRecord_122 FCGI_BeginRequestRecord;
struct __anonstruct_FCGI_EndRequestBody_123 {
   unsigned char appStatusB3 ;
   unsigned char appStatusB2 ;
   unsigned char appStatusB1 ;
   unsigned char appStatusB0 ;
   unsigned char protocolStatus ;
   unsigned char reserved[3] ;
};
typedef struct __anonstruct_FCGI_EndRequestBody_123 FCGI_EndRequestBody;
struct __anonstruct_FCGI_EndRequestRecord_124 {
   FCGI_Header header ;
   FCGI_EndRequestBody body ;
};
typedef struct __anonstruct_FCGI_EndRequestRecord_124 FCGI_EndRequestRecord;
struct __anonstruct_FCGI_UnknownTypeBody_125 {
   unsigned char type ;
   unsigned char reserved[7] ;
};
typedef struct __anonstruct_FCGI_UnknownTypeBody_125 FCGI_UnknownTypeBody;
struct __anonstruct_FCGI_UnknownTypeRecord_126 {
   FCGI_Header header ;
   FCGI_UnknownTypeBody body ;
};
typedef struct __anonstruct_FCGI_UnknownTypeRecord_126 FCGI_UnknownTypeRecord;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef unsigned int wint_t;
union __anonunion___value_128 {
   wint_t __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_127 {
   int __count ;
   union __anonunion___value_128 __value ;
};
typedef struct __anonstruct___mbstate_t_127 __mbstate_t;
struct __anonstruct__G_fpos_t_129 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_129 _G_fpos_t;
struct __anonstruct__G_fpos64_t_130 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_130 _G_fpos64_t;
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
enum __anonenum_132 {
    __GCONV_IS_LAST = 1,
    __GCONV_IGNORE_ERRORS = 2
} ;
struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;
typedef int (*__gconv_fct)(struct __gconv_step * , struct __gconv_step_data * ,
                           unsigned char const   ** , unsigned char const   * ,
                           unsigned char ** , size_t * , int  , int  );
typedef wint_t (*__gconv_btowc_fct)(struct __gconv_step * , unsigned char  );
typedef int (*__gconv_init_fct)(struct __gconv_step * );
typedef void (*__gconv_end_fct)(struct __gconv_step * );
typedef int (*__gconv_trans_fct)(struct __gconv_step * ,
                                 struct __gconv_step_data * , void * ,
                                 unsigned char const   * ,
                                 unsigned char const   ** ,
                                 unsigned char const   * , unsigned char ** ,
                                 size_t * );
typedef int (*__gconv_trans_context_fct)(void * , unsigned char const   * ,
                                         unsigned char const   * ,
                                         unsigned char * , unsigned char * );
typedef int (*__gconv_trans_query_fct)(char const   * , char const   *** ,
                                       size_t * );
typedef int (*__gconv_trans_init_fct)(void ** , char const   * );
typedef void (*__gconv_trans_end_fct)(void * );
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
struct __gconv_info {
   size_t __nsteps ;
   struct __gconv_step *__steps ;
   struct __gconv_step_data __data[] ;
};
typedef struct __gconv_info *__gconv_t;
struct __anonstruct___combined_134 {
   struct __gconv_info __cd ;
   struct __gconv_step_data __data ;
};
union __anonunion__G_iconv_t_133 {
   struct __gconv_info __cd ;
   struct __anonstruct___combined_134 __combined ;
};
typedef union __anonunion__G_iconv_t_133 _G_iconv_t;
typedef short _G_int16_t;
typedef int _G_int32_t;
typedef unsigned short _G_uint16_t;
typedef unsigned int _G_uint32_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
enum __codecvt_result {
    __codecvt_ok = 0,
    __codecvt_partial = 1,
    __codecvt_error = 2,
    __codecvt_noconv = 3
} ;
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
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
typedef int __io_close_fn(void *__cookie );
typedef _G_fpos64_t fpos_t;
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
typedef __rlim64_t rlim_t;
struct rlimit {
   rlim_t rlim_cur ;
   rlim_t rlim_max ;
};
enum __rusage_who {
    RUSAGE_SELF = 0,
    RUSAGE_CHILDREN = -1
} ;
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
enum __priority_which {
    PRIO_PROCESS = 0,
    PRIO_PGRP = 1,
    PRIO_USER = 2
} ;
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;
union wait;
union __anonunion___WAIT_STATUS_135 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_135  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct___wait_terminated_136 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_137 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_136 __wait_terminated ;
   struct __anonstruct___wait_stopped_137 __wait_stopped ;
};
enum __anonenum_idtype_t_138 {
    P_ALL = 0,
    P_PID = 1,
    P_PGID = 2
} ;
typedef enum __anonenum_idtype_t_138 idtype_t;
enum __anonenum_state_139 {
    PROC_STATE_UNSET = 0,
    PROC_STATE_RUNNING = 1,
    PROC_STATE_OVERLOADED = 2,
    PROC_STATE_DIED_WAIT_FOR_PID = 3,
    PROC_STATE_DIED = 4,
    PROC_STATE_KILLED = 5
} ;
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
typedef struct fcgi_proc fcgi_proc;
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
typedef struct __anonstruct_fcgi_extension_host_140 fcgi_extension_host;
struct __anonstruct_fcgi_extension_141 {
   buffer *key ;
   int note_is_sent ;
   int last_used_ndx ;
   fcgi_extension_host **hosts ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_fcgi_extension_141 fcgi_extension;
struct __anonstruct_fcgi_exts_142 {
   fcgi_extension **exts ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_fcgi_exts_142 fcgi_exts;
struct __anonstruct_plugin_config_143 {
   fcgi_exts *exts ;
   array *ext_mapping ;
   int debug ;
};
typedef struct __anonstruct_plugin_config_143 plugin_config;
struct __anonstruct_buffer_uint_144 {
   size_t *ptr ;
   size_t used ;
   size_t size ;
};
typedef struct __anonstruct_buffer_uint_144 buffer_uint;
struct __anonstruct_char_array_145 {
   char **ptr ;
   size_t size ;
   size_t used ;
};
typedef struct __anonstruct_char_array_145 char_array;
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
typedef struct __anonstruct_plugin_data_146 plugin_data;
enum __anonenum_fcgi_connection_state_t_147 {
    FCGI_STATE_UNSET = 0,
    FCGI_STATE_INIT = 1,
    FCGI_STATE_CONNECT_DELAYED = 2,
    FCGI_STATE_PREPARE_WRITE = 3,
    FCGI_STATE_WRITE = 4,
    FCGI_STATE_READ = 5
} ;
typedef enum __anonenum_fcgi_connection_state_t_147 fcgi_connection_state_t;
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
typedef struct __anonstruct_handler_ctx_148 handler_ctx;
union __anonunion_149 {
   int __in ;
   int __i ;
};
union __anonunion_150 {
   int __in ;
   int __i ;
};
union __anonunion_151 {
   int __in ;
   int __i ;
};
union __anonunion_152 {
   int __in ;
   int __i ;
};
union __anonunion_153 {
   int __in ;
   int __i ;
};
enum __anonenum_connection_result_t_154 {
    CONNECTION_UNSET = 0,
    CONNECTION_OK = 1,
    CONNECTION_DELAYED = 2,
    CONNECTION_OVERLOADED = 3,
    CONNECTION_DEAD = 4
} ;
typedef enum __anonenum_connection_result_t_154 connection_result_t;
struct __anonstruct_fastcgi_response_packet_155 {
   buffer *b ;
   size_t len ;
   int type ;
   int padding ;
   size_t request_id ;
};
typedef struct __anonstruct_fastcgi_response_packet_155 fastcgi_response_packet;
union __anonunion_156 {
   int __in ;
   int __i ;
};
union __anonunion_157 {
   int __in ;
   int __i ;
};
union __anonunion_158 {
   int __in ;
   int __i ;
};
union __anonunion_159 {
   int __in ;
   int __i ;
};
union __anonunion_160 {
   int __in ;
   int __i ;
};
union __anonunion_161 {
   int __in ;
   int __i ;
};
union __anonunion_162 {
   int __in ;
   int __i ;
};
union __anonunion_163 {
   int __in ;
   int __i ;
};
union __anonunion_164 {
   int __in ;
   int __i ;
};
union __anonunion_165 {
   int __in ;
   int __i ;
};
union __anonunion_166 {
   int __in ;
   int __i ;
};
union __anonunion_167 {
   int __in ;
   int __i ;
};
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
extern int fflush(FILE *__stream ) ;
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline static unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline static unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline static unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) access)(char const   *__name ,
                                                                                   int __type ) ;
extern  __attribute__((__nothrow__)) __off64_t lseek(int __fd ,
                                                     __off64_t __offset ,
                                                     int __whence )  __asm__("lseek64")  ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
extern  __attribute__((__nothrow__)) unsigned int alarm(unsigned int __seconds ) ;
extern unsigned int sleep(unsigned int __seconds ) ;
extern  __attribute__((__nothrow__)) __useconds_t ualarm(__useconds_t __value ,
                                                         __useconds_t __interval ) ;
extern int usleep(__useconds_t __useconds ) ;
extern int pause(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chown)(char const   *__file ,
                                                                                  __uid_t __owner ,
                                                                                  __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner ,
                                                __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) lchown)(char const   *__file ,
                                                                                   __uid_t __owner ,
                                                                                   __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chdir)(char const   *__path ) ;
extern  __attribute__((__nothrow__)) int fchdir(int __fd ) ;
extern  __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) getwd)(char *__buf )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
extern char **__environ ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) execve)(char const   *__path ,
                                                                                   char * const  *__argv ,
                                                                                   char * const  *__envp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) execv)(char const   *__path ,
                                                                                  char * const  *__argv ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) execle)(char const   *__path ,
                                                                                   char const   *__arg 
                                                                                   , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) execl)(char const   *__path ,
                                                                                  char const   *__arg 
                                                                                  , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) execvp)(char const   *__file ,
                                                                                   char * const  *__argv ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) execlp)(char const   *__file ,
                                                                                   char const   *__arg 
                                                                                   , ...) ;
extern  __attribute__((__nothrow__)) int nice(int __inc ) ;
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) pathconf)(char const   *__path ,
                                                                                      int __name ) ;
extern  __attribute__((__nothrow__)) long fpathconf(int __fd , int __name ) ;
extern  __attribute__((__nothrow__)) long sysconf(int __name ) ;
extern  __attribute__((__nothrow__)) size_t confstr(int __name , char *__buf ,
                                                    size_t __len ) ;
extern  __attribute__((__nothrow__)) __pid_t getpid(void) ;
extern  __attribute__((__nothrow__)) __pid_t getppid(void) ;
extern  __attribute__((__nothrow__)) __pid_t getpgrp(void) ;
extern  __attribute__((__nothrow__)) __pid_t __getpgid(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) int setpgid(__pid_t __pid , __pid_t __pgid ) ;
extern  __attribute__((__nothrow__)) int setpgrp(void) ;
extern  __attribute__((__nothrow__)) __pid_t setsid(void) ;
extern  __attribute__((__nothrow__)) __uid_t getuid(void) ;
extern  __attribute__((__nothrow__)) __uid_t geteuid(void) ;
extern  __attribute__((__nothrow__)) __gid_t getgid(void) ;
extern  __attribute__((__nothrow__)) __gid_t getegid(void) ;
extern  __attribute__((__nothrow__)) int getgroups(int __size , __gid_t *__list ) ;
extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid ,
                                                  __uid_t __euid ) ;
extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid ,
                                                  __gid_t __egid ) ;
extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
extern  __attribute__((__nothrow__)) __pid_t vfork(void) ;
extern  __attribute__((__nothrow__)) char *ttyname(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) ttyname_r)(int __fd ,
                                                                                      char *__buf ,
                                                                                      size_t __buflen ) ;
extern  __attribute__((__nothrow__)) int isatty(int __fd ) ;
extern  __attribute__((__nothrow__)) int ttyslot(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) link)(char const   *__from ,
                                                                                   char const   *__to ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) symlink)(char const   *__from ,
                                                                                      char const   *__to ) ;
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(1,2))) readlink)(char const   * __restrict  __path ,
                                                                                           char * __restrict  __buf ,
                                                                                           size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) unlink)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) rmdir)(char const   *__path ) ;
extern  __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd ) ;
extern  __attribute__((__nothrow__)) int tcsetpgrp(int __fd , __pid_t __pgrp_id ) ;
extern char *getlogin(void) ;
extern int ( __attribute__((__nonnull__(1))) getlogin_r)(char *__name ,
                                                         size_t __name_len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) setlogin)(char const   *__name ) ;
extern char *optarg ;
extern int optind ;
extern int opterr ;
extern int optopt ;
extern  __attribute__((__nothrow__)) int getopt(int ___argc ,
                                                char * const  *___argv ,
                                                char const   *__shortopts ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) gethostname)(char *__name ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sethostname)(char const   *__name ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int sethostid(long __id ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) getdomainname)(char *__name ,
                                                                                          size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) setdomainname)(char const   *__name ,
                                                                                          size_t __len ) ;
extern  __attribute__((__nothrow__)) int vhangup(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) revoke)(char const   *__file ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) profil)(unsigned short *__sample_buffer ,
                                                                                   size_t __size ,
                                                                                   size_t __offset ,
                                                                                   unsigned int __scale ) ;
extern  __attribute__((__nothrow__)) int acct(char const   *__name ) ;
extern  __attribute__((__nothrow__)) char *getusershell(void) ;
extern  __attribute__((__nothrow__)) void endusershell(void) ;
extern  __attribute__((__nothrow__)) void setusershell(void) ;
extern  __attribute__((__nothrow__)) int daemon(int __nochdir , int __noclose ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chroot)(char const   *__path ) ;
extern char *( __attribute__((__nonnull__(1))) getpass)(char const   *__prompt ) ;
extern int fsync(int __fd ) ;
extern long gethostid(void) ;
extern  __attribute__((__nothrow__)) void sync(void) ;
extern  __attribute__((__nothrow__)) int getpagesize(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int getdtablesize(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) truncate)(char const   *__file ,
                                                                                     __off64_t __length )  __asm__("truncate64")  ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd ,
                                                   __off64_t __length )  __asm__("ftruncate64")  ;
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
extern int lockf(int __fd , int __cmd , __off64_t __len )  __asm__("lockf64")  ;
extern int fdatasync(int __fildes ) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
extern int fcntl(int __fd , int __cmd  , ...) ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file ,
                                                   int __oflag  , ...)  __asm__("open64")  ;
extern int ( __attribute__((__nonnull__(1))) creat)(char const   *__file ,
                                                    __mode_t __mode )  __asm__("creat64")  ;
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off64_t __offset ,
                                                       __off64_t __len ,
                                                       int __advise )  __asm__("posix_fadvise64")  ;
extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len )  __asm__("posix_fallocate64")  ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memcpy)(void * __restrict  __dest ,
                                                                                       void const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memmove)(void *__dest ,
                                                                                        void const   *__src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memccpy)(void * __restrict  __dest ,
                                                                                        void const   * __restrict  __src ,
                                                                                        int __c ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memset)(void *__s ,
                                                                                     int __c ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) memcmp)(void const   *__s1 ,
                                                                                     void const   *__s2 ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memchr)(void const   *__s ,
                                                                                     int __c ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncpy)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcat)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncat)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcmp)(char const   *__s1 ,
                                                                                     char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncmp)(char const   *__s1 ,
                                                                                      char const   *__s2 ,
                                                                                      size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcoll)(char const   *__s1 ,
                                                                                      char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2))) strxfrm)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strchr)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strrchr)(char const   *__s ,
                                                                                      int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strcspn)(char const   *__s ,
                                                                                         char const   *__reject )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strspn)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strpbrk)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strstr)(char const   *__haystack ,
                                                                                       char const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) strtok)(char * __restrict  __s ,
                                                                                     char const   * __restrict  __delim ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) __strtok_r)(char * __restrict  __s ,
                                                                                           char const   * __restrict  __delim ,
                                                                                           char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) strtok_r)(char * __restrict  __s ,
                                                                                         char const   * __restrict  __delim ,
                                                                                         char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) strerror_r)(int __errnum ,
                                                                                       char *__buf ,
                                                                                       size_t __buflen )  __asm__("__xpg_strerror_r")  ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) __bzero)(void *__s ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1,2))) bcopy)(void const   *__src ,
                                                                                     void *__dest ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) bzero)(void *__s ,
                                                                                   size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) bcmp)(void const   *__s1 ,
                                                                                   void const   *__s2 ,
                                                                                   size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) index)(char const   *__s ,
                                                                                    int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) rindex)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcasecmp)(char const   *__s1 ,
                                                                                         char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncasecmp)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strsep)(char ** __restrict  __stringp ,
                                                                                       char const   * __restrict  __delim ) ;
extern void *__rawmemchr(void const   *__s , int __c ) ;
__inline static size_t __strcspn_c1(char const   *__s , int __reject ) ;
__inline static size_t __strcspn_c1(char const   *__s , int __reject ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "6\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "7\n");
      fflush(_coverage_fout);
      }
      if (! ((int const   )*(__s + __result) != (int const   )__reject)) {
        {
        fprintf(_coverage_fout, "8\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "9\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "10\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "11\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "12\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline static size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) ;
__inline static size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "13\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "14\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "15\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "16\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        {
        fprintf(_coverage_fout, "17\n");
        fflush(_coverage_fout);
        }
        if (! ((int const   )*(__s + __result) != (int const   )__reject2)) {
          {
          fprintf(_coverage_fout, "18\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "19\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "20\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "21\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "23\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline static size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) ;
__inline static size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "24\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "25\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "26\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "27\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        {
        fprintf(_coverage_fout, "28\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          {
          fprintf(_coverage_fout, "29\n");
          fflush(_coverage_fout);
          }
          if (! ((int const   )*(__s + __result) != (int const   )__reject3)) {
            {
            fprintf(_coverage_fout, "30\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "31\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "32\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "33\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "34\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "35\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "36\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline static size_t __strspn_c1(char const   *__s , int __accept ) ;
__inline static size_t __strspn_c1(char const   *__s , int __accept ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "37\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "38\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "39\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept) {
      {
      fprintf(_coverage_fout, "40\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "41\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "42\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "43\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline static size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline static size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "44\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "45\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "46\n");
    fflush(_coverage_fout);
    }
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
      {
      fprintf(_coverage_fout, "47\n");
      fflush(_coverage_fout);
      }
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
        {
        fprintf(_coverage_fout, "48\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "49\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "50\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "51\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "52\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline static size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline static size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "53\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "54\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "55\n");
    fflush(_coverage_fout);
    }
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
      {
      fprintf(_coverage_fout, "56\n");
      fflush(_coverage_fout);
      }
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
        {
        fprintf(_coverage_fout, "57\n");
        fflush(_coverage_fout);
        }
        if (! ((int const   )*(__s + __result) == (int const   )__accept3)) {
          {
          fprintf(_coverage_fout, "58\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "59\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "60\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "61\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "62\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "63\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline static char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline static char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ 
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "64\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "65\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*__s != 0) {
      {
      fprintf(_coverage_fout, "66\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*__s != (int const   )__accept1) {
        {
        fprintf(_coverage_fout, "67\n");
        fflush(_coverage_fout);
        }
        if (! ((int const   )*__s != (int const   )__accept2)) {
          {
          fprintf(_coverage_fout, "68\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "69\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "70\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "71\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "73\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*__s == 0) {
    {
    fprintf(_coverage_fout, "74\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "75\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((unsigned int )__s);
  }
  {
  fprintf(_coverage_fout, "76\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline static char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ 
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "77\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "78\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*__s != 0) {
      {
      fprintf(_coverage_fout, "79\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*__s != (int const   )__accept1) {
        {
        fprintf(_coverage_fout, "80\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*__s != (int const   )__accept2) {
          {
          fprintf(_coverage_fout, "81\n");
          fflush(_coverage_fout);
          }
          if (! ((int const   )*__s != (int const   )__accept3)) {
            {
            fprintf(_coverage_fout, "82\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "83\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "84\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "85\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "86\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "87\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "88\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*__s == 0) {
    {
    fprintf(_coverage_fout, "89\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "90\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((unsigned int )__s);
  }
  {
  fprintf(_coverage_fout, "91\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ 
  char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "92\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__s == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "93\n");
    fflush(_coverage_fout);
    }
    __s = *__nextp;
  } else {
    {
    fprintf(_coverage_fout, "94\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "95\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "96\n");
    fflush(_coverage_fout);
    }
    if ((int )*__s == (int )__sep) {
      {
      fprintf(_coverage_fout, "97\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "98\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "99\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "100\n");
  fflush(_coverage_fout);
  }
  __result = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "101\n");
  fflush(_coverage_fout);
  }
  if ((int )*__s != 0) {
    {
    fprintf(_coverage_fout, "102\n");
    fflush(_coverage_fout);
    }
    tmp = __s;
    {
    fprintf(_coverage_fout, "103\n");
    fflush(_coverage_fout);
    }
    __s ++;
    {
    fprintf(_coverage_fout, "104\n");
    fflush(_coverage_fout);
    }
    __result = tmp;
    {
    fprintf(_coverage_fout, "105\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "106\n");
      fflush(_coverage_fout);
      }
      if ((int )*__s != 0) {
        {
        fprintf(_coverage_fout, "107\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "108\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "109\n");
      fflush(_coverage_fout);
      }
      tmp___0 = __s;
      {
      fprintf(_coverage_fout, "110\n");
      fflush(_coverage_fout);
      }
      __s ++;
      {
      fprintf(_coverage_fout, "111\n");
      fflush(_coverage_fout);
      }
      if ((int )*tmp___0 == (int )__sep) {
        {
        fprintf(_coverage_fout, "112\n");
        fflush(_coverage_fout);
        }
        *(__s + -1) = (char )'\000';
        {
        fprintf(_coverage_fout, "113\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "114\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "115\n");
    fflush(_coverage_fout);
    }
    *__nextp = __s;
  } else {
    {
    fprintf(_coverage_fout, "116\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "117\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
__inline static char *__strsep_1c(char **__s , char __reject ) ;
__inline static char *__strsep_1c(char **__s , char __reject ) 
{ 
  register char *__retval ;
  char *tmp ;
  void *tmp___0 ;
  char *tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "118\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "119\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "120\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __builtin_strchr(__retval, (int )__reject);
    {
    fprintf(_coverage_fout, "121\n");
    fflush(_coverage_fout);
    }
    *__s = tmp___1;
    {
    fprintf(_coverage_fout, "122\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )*__s != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "123\n");
      fflush(_coverage_fout);
      }
      tmp = *__s;
      {
      fprintf(_coverage_fout, "124\n");
      fflush(_coverage_fout);
      }
      (*__s) ++;
      {
      fprintf(_coverage_fout, "125\n");
      fflush(_coverage_fout);
      }
      *tmp = (char )'\000';
    } else {
      {
      fprintf(_coverage_fout, "126\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "127\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "128\n");
  fflush(_coverage_fout);
  }
  return (__retval);
}
}
__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "129\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "130\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "131\n");
    fflush(_coverage_fout);
    }
    __cp = __retval;
    {
    fprintf(_coverage_fout, "132\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "133\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == 0) {
        {
        fprintf(_coverage_fout, "134\n");
        fflush(_coverage_fout);
        }
        __cp = (char *)((void *)0);
        {
        fprintf(_coverage_fout, "135\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "136\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "137\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == (int )__reject1) {
        {
        fprintf(_coverage_fout, "138\n");
        fflush(_coverage_fout);
        }
        tmp = __cp;
        {
        fprintf(_coverage_fout, "139\n");
        fflush(_coverage_fout);
        }
        __cp ++;
        {
        fprintf(_coverage_fout, "140\n");
        fflush(_coverage_fout);
        }
        *tmp = (char )'\000';
        {
        fprintf(_coverage_fout, "141\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "142\n");
        fflush(_coverage_fout);
        }
        if ((int )*__cp == (int )__reject2) {
          {
          fprintf(_coverage_fout, "143\n");
          fflush(_coverage_fout);
          }
          tmp = __cp;
          {
          fprintf(_coverage_fout, "144\n");
          fflush(_coverage_fout);
          }
          __cp ++;
          {
          fprintf(_coverage_fout, "145\n");
          fflush(_coverage_fout);
          }
          *tmp = (char )'\000';
          {
          fprintf(_coverage_fout, "146\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "147\n");
          fflush(_coverage_fout);
          }

        }
      }
      {
      fprintf(_coverage_fout, "148\n");
      fflush(_coverage_fout);
      }
      __cp ++;
    }
    {
    fprintf(_coverage_fout, "149\n");
    fflush(_coverage_fout);
    }
    *__s = __cp;
  } else {
    {
    fprintf(_coverage_fout, "150\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "151\n");
  fflush(_coverage_fout);
  }
  return (__retval);
}
}
__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) ;
__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "152\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "153\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "154\n");
    fflush(_coverage_fout);
    }
    __cp = __retval;
    {
    fprintf(_coverage_fout, "155\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "156\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == 0) {
        {
        fprintf(_coverage_fout, "157\n");
        fflush(_coverage_fout);
        }
        __cp = (char *)((void *)0);
        {
        fprintf(_coverage_fout, "158\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "159\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "160\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == (int )__reject1) {
        {
        fprintf(_coverage_fout, "161\n");
        fflush(_coverage_fout);
        }
        tmp = __cp;
        {
        fprintf(_coverage_fout, "162\n");
        fflush(_coverage_fout);
        }
        __cp ++;
        {
        fprintf(_coverage_fout, "163\n");
        fflush(_coverage_fout);
        }
        *tmp = (char )'\000';
        {
        fprintf(_coverage_fout, "164\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "165\n");
        fflush(_coverage_fout);
        }
        if ((int )*__cp == (int )__reject2) {
          {
          fprintf(_coverage_fout, "166\n");
          fflush(_coverage_fout);
          }
          tmp = __cp;
          {
          fprintf(_coverage_fout, "167\n");
          fflush(_coverage_fout);
          }
          __cp ++;
          {
          fprintf(_coverage_fout, "168\n");
          fflush(_coverage_fout);
          }
          *tmp = (char )'\000';
          {
          fprintf(_coverage_fout, "169\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "170\n");
          fflush(_coverage_fout);
          }
          if ((int )*__cp == (int )__reject3) {
            {
            fprintf(_coverage_fout, "171\n");
            fflush(_coverage_fout);
            }
            tmp = __cp;
            {
            fprintf(_coverage_fout, "172\n");
            fflush(_coverage_fout);
            }
            __cp ++;
            {
            fprintf(_coverage_fout, "173\n");
            fflush(_coverage_fout);
            }
            *tmp = (char )'\000';
            {
            fprintf(_coverage_fout, "174\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "175\n");
            fflush(_coverage_fout);
            }

          }
        }
      }
      {
      fprintf(_coverage_fout, "176\n");
      fflush(_coverage_fout);
      }
      __cp ++;
    }
    {
    fprintf(_coverage_fout, "177\n");
    fflush(_coverage_fout);
    }
    *__s = __cp;
  } else {
    {
    fprintf(_coverage_fout, "178\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "179\n");
  fflush(_coverage_fout);
  }
  return (__retval);
}
}
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
__inline static  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline static  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline static  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline static  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) strtod)(char const   * __restrict  __nptr ,
                                                                                               char ** __restrict  __endptr ) ;
__inline static  __attribute__((__nothrow__)) float ( __attribute__((__nonnull__(1))) strtof)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ) ;
__inline static  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1))) strtold)(char const   * __restrict  __nptr ,
                                                                                                     char ** __restrict  __endptr ) ;
__inline static  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) strtol)(char const   * __restrict  __nptr ,
                                                                                             char ** __restrict  __endptr ,
                                                                                             int __base ) ;
__inline static  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1))) strtoul)(char const   * __restrict  __nptr ,
                                                                                                       char ** __restrict  __endptr ,
                                                                                                       int __base ) ;
__inline static  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoq)(char const   * __restrict  __nptr ,
                                                                                                  char ** __restrict  __endptr ,
                                                                                                  int __base ) ;
__inline static  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtouq)(char const   * __restrict  __nptr ,
                                                                                                            char ** __restrict  __endptr ,
                                                                                                            int __base ) ;
__inline static  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoll)(char const   * __restrict  __nptr ,
                                                                                                   char ** __restrict  __endptr ,
                                                                                                   int __base ) ;
__inline static  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtoull)(char const   * __restrict  __nptr ,
                                                                                                             char ** __restrict  __endptr ,
                                                                                                             int __base ) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) __strtod_internal)(char const   * __restrict  __nptr ,
                                                                                                 char ** __restrict  __endptr ,
                                                                                                 int __group ) ;
extern  __attribute__((__nothrow__)) float ( __attribute__((__nonnull__(1))) __strtof_internal)(char const   * __restrict  __nptr ,
                                                                                                char ** __restrict  __endptr ,
                                                                                                int __group ) ;
extern  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1))) __strtold_internal)(char const   * __restrict  __nptr ,
                                                                                                       char ** __restrict  __endptr ,
                                                                                                       int __group ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) __strtol_internal)(char const   * __restrict  __nptr ,
                                                                                               char ** __restrict  __endptr ,
                                                                                               int __base ,
                                                                                               int __group ) ;
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1))) __strtoul_internal)(char const   * __restrict  __nptr ,
                                                                                                         char ** __restrict  __endptr ,
                                                                                                         int __base ,
                                                                                                         int __group ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) __strtoll_internal)(char const   * __restrict  __nptr ,
                                                                                                     char ** __restrict  __endptr ,
                                                                                                     int __base ,
                                                                                                     int __group ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) __strtoull_internal)(char const   * __restrict  __nptr ,
                                                                                                               char ** __restrict  __endptr ,
                                                                                                               int __base ,
                                                                                                               int __group ) ;
__inline static  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) strtod)(char const   * __restrict  __nptr ,
                                                                                               char ** __restrict  __endptr ) ;
__inline static double ( __attribute__((__nonnull__(1))) strtod)(char const   * __restrict  __nptr ,
                                                                 char ** __restrict  __endptr ) 
{ 
  double tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "180\n");
  fflush(_coverage_fout);
  }
  tmp = __strtod_internal(__nptr, __endptr, 0);
  {
  fprintf(_coverage_fout, "181\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) strtol)(char const   * __restrict  __nptr ,
                                                                                             char ** __restrict  __endptr ,
                                                                                             int __base ) ;
__inline static long ( __attribute__((__nonnull__(1))) strtol)(char const   * __restrict  __nptr ,
                                                               char ** __restrict  __endptr ,
                                                               int __base ) 
{ 
  long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "182\n");
  fflush(_coverage_fout);
  }
  tmp = __strtol_internal(__nptr, __endptr, __base, 0);
  {
  fprintf(_coverage_fout, "183\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1))) strtoul)(char const   * __restrict  __nptr ,
                                                                                                       char ** __restrict  __endptr ,
                                                                                                       int __base ) ;
__inline static unsigned long ( __attribute__((__nonnull__(1))) strtoul)(char const   * __restrict  __nptr ,
                                                                         char ** __restrict  __endptr ,
                                                                         int __base ) 
{ 
  unsigned long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "184\n");
  fflush(_coverage_fout);
  }
  tmp = __strtoul_internal(__nptr, __endptr, __base, 0);
  {
  fprintf(_coverage_fout, "185\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) float ( __attribute__((__nonnull__(1))) strtof)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ) ;
__inline static float ( __attribute__((__nonnull__(1))) strtof)(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ) 
{ 
  float tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "186\n");
  fflush(_coverage_fout);
  }
  tmp = __strtof_internal(__nptr, __endptr, 0);
  {
  fprintf(_coverage_fout, "187\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1))) strtold)(char const   * __restrict  __nptr ,
                                                                                                     char ** __restrict  __endptr ) ;
__inline static long double ( __attribute__((__nonnull__(1))) strtold)(char const   * __restrict  __nptr ,
                                                                       char ** __restrict  __endptr ) 
{ 
  long double tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "188\n");
  fflush(_coverage_fout);
  }
  tmp = __strtold_internal(__nptr, __endptr, 0);
  {
  fprintf(_coverage_fout, "189\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoq)(char const   * __restrict  __nptr ,
                                                                                                  char ** __restrict  __endptr ,
                                                                                                  int __base ) ;
__inline static long long ( __attribute__((__nonnull__(1))) strtoq)(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __base ) 
{ 
  long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "190\n");
  fflush(_coverage_fout);
  }
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  {
  fprintf(_coverage_fout, "191\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtouq)(char const   * __restrict  __nptr ,
                                                                                                            char ** __restrict  __endptr ,
                                                                                                            int __base ) ;
__inline static unsigned long long ( __attribute__((__nonnull__(1))) strtouq)(char const   * __restrict  __nptr ,
                                                                              char ** __restrict  __endptr ,
                                                                              int __base ) 
{ 
  unsigned long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "192\n");
  fflush(_coverage_fout);
  }
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  {
  fprintf(_coverage_fout, "193\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoll)(char const   * __restrict  __nptr ,
                                                                                                   char ** __restrict  __endptr ,
                                                                                                   int __base ) ;
__inline static long long ( __attribute__((__nonnull__(1))) strtoll)(char const   * __restrict  __nptr ,
                                                                     char ** __restrict  __endptr ,
                                                                     int __base ) 
{ 
  long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "194\n");
  fflush(_coverage_fout);
  }
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  {
  fprintf(_coverage_fout, "195\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtoull)(char const   * __restrict  __nptr ,
                                                                                                             char ** __restrict  __endptr ,
                                                                                                             int __base ) ;
__inline static unsigned long long ( __attribute__((__nonnull__(1))) strtoull)(char const   * __restrict  __nptr ,
                                                                               char ** __restrict  __endptr ,
                                                                               int __base ) 
{ 
  unsigned long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "196\n");
  fflush(_coverage_fout);
  }
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  {
  fprintf(_coverage_fout, "197\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline static double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr ) 
{ 
  double tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "198\n");
  fflush(_coverage_fout);
  }
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  {
  fprintf(_coverage_fout, "199\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline static int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "200\n");
  fflush(_coverage_fout);
  }
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "201\n");
  fflush(_coverage_fout);
  }
  return ((int )tmp);
}
}
__inline static  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline static long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "202\n");
  fflush(_coverage_fout);
  }
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "203\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline static long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr ) 
{ 
  long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "204\n");
  fflush(_coverage_fout);
  }
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "205\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) a64l)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) long random(void) ;
extern  __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) initstate)(unsigned int __seed ,
                                                                                        char *__statebuf ,
                                                                                        size_t __statelen ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) setstate)(char *__statebuf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) random_r)(struct random_data * __restrict  __buf ,
                                                                                       int32_t * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) srandom_r)(unsigned int __seed ,
                                                                                      struct random_data *__buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4))) initstate_r)(unsigned int __seed ,
                                                                                          char * __restrict  __statebuf ,
                                                                                          size_t __statelen ,
                                                                                          struct random_data * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) setstate_r)(char * __restrict  __statebuf ,
                                                                                         struct random_data * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int rand(void) ;
extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;
extern  __attribute__((__nothrow__)) double drand48(void) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) erand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) long lrand48(void) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) nrand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) long mrand48(void) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) jrand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) void srand48(long __seedval ) ;
extern  __attribute__((__nothrow__)) unsigned short *( __attribute__((__nonnull__(1))) seed48)(unsigned short *__seed16v ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) lcong48)(unsigned short *__param ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) drand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        double * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) erand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        double * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lrand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) nrand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) mrand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) jrand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) srand48_r)(long __seedval ,
                                                                                      struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) seed48_r)(unsigned short *__seed16v ,
                                                                                       struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lcong48_r)(unsigned short *__param ,
                                                                                        struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__)) realloc)(void *__ptr ,
                                                                                              size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void cfree(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void *alloca(size_t __size ) ;
extern  __attribute__((__nothrow__)) void *valloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) posix_memalign)(void **__memptr ,
                                                                                           size_t __alignment ,
                                                                                           size_t __size ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) on_exit)(void (*__func)(int __status ,
                                                                                                   void *__arg ) ,
                                                                                    void *__arg ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) __secure_getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) putenv)(char *__string ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) setenv)(char const   *__name ,
                                                                                   char const   *__value ,
                                                                                   int __replace ) ;
extern  __attribute__((__nothrow__)) int unsetenv(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int clearenv(void) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mktemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemp)(char *__template )  __asm__("mkstemp64")  ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mkdtemp)(char *__template ) ;
extern int system(char const   *__command ) ;
extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name ,
                                                    char * __restrict  __resolved ) ;
extern void *( __attribute__((__nonnull__(1,2,5))) bsearch)(void const   *__key ,
                                                            void const   *__base ,
                                                            size_t __nmemb ,
                                                            size_t __size ,
                                                            int (*__compar)(void const   * ,
                                                                            void const   * ) ) ;
extern void ( __attribute__((__nonnull__(1,4))) qsort)(void *__base ,
                                                       size_t __nmemb ,
                                                       size_t __size ,
                                                       int (*__compar)(void const   * ,
                                                                       void const   * ) ) ;
extern  __attribute__((__nothrow__)) int abs(int __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long labs(long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long long llabs(long long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer ,
                                                   long long __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) ecvt)(double __value ,
                                                                                     int __ndigit ,
                                                                                     int * __restrict  __decpt ,
                                                                                     int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) fcvt)(double __value ,
                                                                                     int __ndigit ,
                                                                                     int * __restrict  __decpt ,
                                                                                     int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3))) gcvt)(double __value ,
                                                                                   int __ndigit ,
                                                                                   char *__buf ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) qecvt)(long double __value ,
                                                                                      int __ndigit ,
                                                                                      int * __restrict  __decpt ,
                                                                                      int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) qfcvt)(long double __value ,
                                                                                      int __ndigit ,
                                                                                      int * __restrict  __decpt ,
                                                                                      int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3))) qgcvt)(long double __value ,
                                                                                    int __ndigit ,
                                                                                    char *__buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) ecvt_r)(double __value ,
                                                                                       int __ndigit ,
                                                                                       int * __restrict  __decpt ,
                                                                                       int * __restrict  __sign ,
                                                                                       char * __restrict  __buf ,
                                                                                       size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) fcvt_r)(double __value ,
                                                                                       int __ndigit ,
                                                                                       int * __restrict  __decpt ,
                                                                                       int * __restrict  __sign ,
                                                                                       char * __restrict  __buf ,
                                                                                       size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) qecvt_r)(long double __value ,
                                                                                        int __ndigit ,
                                                                                        int * __restrict  __decpt ,
                                                                                        int * __restrict  __sign ,
                                                                                        char * __restrict  __buf ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) qfcvt_r)(long double __value ,
                                                                                        int __ndigit ,
                                                                                        int * __restrict  __decpt ,
                                                                                        int * __restrict  __sign ,
                                                                                        char * __restrict  __buf ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int mblen(char const   *__s , size_t __n ) ;
extern  __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict  __pwc ,
                                                char const   * __restrict  __s ,
                                                size_t __n ) ;
extern  __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;
extern  __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict  __pwcs ,
                                                     char const   * __restrict  __s ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) size_t wcstombs(char * __restrict  __s ,
                                                     wchar_t const   * __restrict  __pwcs ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) rpmatch)(char const   *__response ) ;
extern int posix_openpt(int __oflag ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) getloadavg)(double *__loadavg ,
                                                                                       int __nelem ) ;
extern unsigned short const   **__ctype_b_loc(void)  __attribute__((__const__)) ;
extern __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__const__)) ;
extern __int32_t const   **__ctype_toupper_loc(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isalnum(int  ) ;
extern  __attribute__((__nothrow__)) int isalpha(int  ) ;
extern  __attribute__((__nothrow__)) int iscntrl(int  ) ;
extern  __attribute__((__nothrow__)) int isdigit(int  ) ;
extern  __attribute__((__nothrow__)) int islower(int  ) ;
extern  __attribute__((__nothrow__)) int isgraph(int  ) ;
extern  __attribute__((__nothrow__)) int isprint(int  ) ;
extern  __attribute__((__nothrow__)) int ispunct(int  ) ;
extern  __attribute__((__nothrow__)) int isspace(int  ) ;
extern  __attribute__((__nothrow__)) int isupper(int  ) ;
extern  __attribute__((__nothrow__)) int isxdigit(int  ) ;
__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline static  __attribute__((__nothrow__)) int toupper(int __c ) ;
extern  __attribute__((__nothrow__)) int isblank(int  ) ;
extern  __attribute__((__nothrow__)) int isascii(int __c ) ;
extern  __attribute__((__nothrow__)) int toascii(int __c ) ;
extern  __attribute__((__nothrow__)) int _toupper(int  ) ;
extern  __attribute__((__nothrow__)) int _tolower(int  ) ;
__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline static int tolower(int __c ) 
{ 
  __int32_t const   **tmp ;
  __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "206\n");
  fflush(_coverage_fout);
  }
  if (__c >= -128) {
    {
    fprintf(_coverage_fout, "207\n");
    fflush(_coverage_fout);
    }
    if (__c < 256) {
      {
      fprintf(_coverage_fout, "208\n");
      fflush(_coverage_fout);
      }
      tmp___1 = __ctype_tolower_loc();
      {
      fprintf(_coverage_fout, "209\n");
      fflush(_coverage_fout);
      }
      tmp___0 = (__int32_t )*(*tmp___1 + __c);
    } else {
      {
      fprintf(_coverage_fout, "210\n");
      fflush(_coverage_fout);
      }
      tmp___0 = (__int32_t )((int const   )__c);
    }
  } else {
    {
    fprintf(_coverage_fout, "211\n");
    fflush(_coverage_fout);
    }
    tmp___0 = (__int32_t )((int const   )__c);
  }
  {
  fprintf(_coverage_fout, "212\n");
  fflush(_coverage_fout);
  }
  return (tmp___0);
}
}
__inline static  __attribute__((__nothrow__)) int toupper(int __c ) ;
__inline static int toupper(int __c ) 
{ 
  __int32_t const   **tmp ;
  __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "213\n");
  fflush(_coverage_fout);
  }
  if (__c >= -128) {
    {
    fprintf(_coverage_fout, "214\n");
    fflush(_coverage_fout);
    }
    if (__c < 256) {
      {
      fprintf(_coverage_fout, "215\n");
      fflush(_coverage_fout);
      }
      tmp___1 = __ctype_toupper_loc();
      {
      fprintf(_coverage_fout, "216\n");
      fflush(_coverage_fout);
      }
      tmp___0 = (__int32_t )*(*tmp___1 + __c);
    } else {
      {
      fprintf(_coverage_fout, "217\n");
      fflush(_coverage_fout);
      }
      tmp___0 = (__int32_t )((int const   )__c);
    }
  } else {
    {
    fprintf(_coverage_fout, "218\n");
    fflush(_coverage_fout);
    }
    tmp___0 = (__int32_t )((int const   )__c);
  }
  {
  fprintf(_coverage_fout, "219\n");
  fflush(_coverage_fout);
  }
  return (tmp___0);
}
}
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_fail(char const   *__assertion ,
                                  char const   *__file , unsigned int __line ,
                                  char const   *__function ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_perror_fail(int __errnum , char const   *__file ,
                                         unsigned int __line ,
                                         char const   *__function ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert(char const   *__assertion , char const   *__file ,
                             int __line ) ;
__inline static int __sigismember(__sigset_t const   *__set , int __sig ) ;
__inline static int __sigaddset(__sigset_t *__set , int __sig ) ;
__inline static int __sigdelset(__sigset_t *__set , int __sig ) ;
__inline static int __sigismember(__sigset_t const   *__set , int __sig ) 
{ 
  unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "220\n");
  fflush(_coverage_fout);
  }
  __mask = 1UL << (unsigned long )((unsigned int )(__sig - 1)) % (8UL * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "221\n");
  fflush(_coverage_fout);
  }
  __word = (unsigned long )((unsigned int )(__sig - 1)) / (8UL * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "222\n");
  fflush(_coverage_fout);
  }
  if (__set->__val[__word] & __mask) {
    {
    fprintf(_coverage_fout, "223\n");
    fflush(_coverage_fout);
    }
    tmp = 1;
  } else {
    {
    fprintf(_coverage_fout, "224\n");
    fflush(_coverage_fout);
    }
    tmp = 0;
  }
  {
  fprintf(_coverage_fout, "225\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static int __sigaddset(__sigset_t *__set , int __sig ) 
{ 
  unsigned long __mask ;
  unsigned long __word ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "226\n");
  fflush(_coverage_fout);
  }
  __mask = 1UL << (unsigned long )((unsigned int )(__sig - 1)) % (8UL * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "227\n");
  fflush(_coverage_fout);
  }
  __word = (unsigned long )((unsigned int )(__sig - 1)) / (8UL * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "228\n");
  fflush(_coverage_fout);
  }
  __set->__val[__word] |= __mask;
  {
  fprintf(_coverage_fout, "229\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
__inline static int __sigdelset(__sigset_t *__set , int __sig ) 
{ 
  unsigned long __mask ;
  unsigned long __word ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "230\n");
  fflush(_coverage_fout);
  }
  __mask = 1UL << (unsigned long )((unsigned int )(__sig - 1)) % (8UL * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "231\n");
  fflush(_coverage_fout);
  }
  __word = (unsigned long )((unsigned int )(__sig - 1)) / (8UL * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "232\n");
  fflush(_coverage_fout);
  }
  __set->__val[__word] &= ~ __mask;
  {
  fprintf(_coverage_fout, "233\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
extern  __attribute__((__nothrow__)) __sighandler_t __sysv_signal(int __sig ,
                                                                  void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig ,
                                                           void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig ) ;
extern  __attribute__((__nothrow__)) int killpg(__pid_t __pgrp , int __sig ) ;
extern  __attribute__((__nothrow__)) int raise(int __sig ) ;
extern  __attribute__((__nothrow__)) __sighandler_t ssignal(int __sig ,
                                                            void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) int gsignal(int __sig ) ;
extern void psignal(int __sig , char const   *__s ) ;
extern int __sigpause(int __sig_or_mask , int __is_sig ) ;
extern  __attribute__((__nothrow__)) int sigblock(int __mask )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigsetmask(int __mask )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int siggetmask(void)  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigemptyset)(sigset_t *__set ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigfillset)(sigset_t *__set ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigaddset)(sigset_t *__set ,
                                                                                      int __signo ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigdelset)(sigset_t *__set ,
                                                                                      int __signo ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigismember)(sigset_t const   *__set ,
                                                                                        int __signo ) ;
extern  __attribute__((__nothrow__)) int sigprocmask(int __how ,
                                                     sigset_t const   * __restrict  __set ,
                                                     sigset_t * __restrict  __oset ) ;
extern int ( __attribute__((__nonnull__(1))) sigsuspend)(sigset_t const   *__set ) ;
extern  __attribute__((__nothrow__)) int sigaction(int __sig ,
                                                   struct sigaction  const  * __restrict  __act ,
                                                   struct sigaction * __restrict  __oact ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigpending)(sigset_t *__set ) ;
extern int ( __attribute__((__nonnull__(1,2))) sigwait)(sigset_t const   * __restrict  __set ,
                                                        int * __restrict  __sig ) ;
extern int ( __attribute__((__nonnull__(1))) sigwaitinfo)(sigset_t const   * __restrict  __set ,
                                                          siginfo_t * __restrict  __info ) ;
extern int ( __attribute__((__nonnull__(1))) sigtimedwait)(sigset_t const   * __restrict  __set ,
                                                           siginfo_t * __restrict  __info ,
                                                           struct timespec  const  * __restrict  __timeout ) ;
extern  __attribute__((__nothrow__)) int sigqueue(__pid_t __pid , int __sig ,
                                                  union sigval __val ) ;
extern char const   * const  _sys_siglist[65] ;
extern char const   * const  sys_siglist[65] ;
extern  __attribute__((__nothrow__)) int sigvec(int __sig ,
                                                struct sigvec  const  *__vec ,
                                                struct sigvec *__ovec ) ;
extern  __attribute__((__nothrow__)) int sigreturn(struct sigcontext *__scp ) ;
extern  __attribute__((__nothrow__)) int siginterrupt(int __sig ,
                                                      int __interrupt ) ;
extern  __attribute__((__nothrow__)) int sigstack(struct sigstack *__ss ,
                                                  struct sigstack *__oss )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigaltstack(struct sigaltstack  const  * __restrict  __ss ,
                                                     struct sigaltstack * __restrict  __oss ) ;
extern  __attribute__((__nothrow__)) int pthread_sigmask(int __how ,
                                                         __sigset_t const   * __restrict  __newmask ,
                                                         __sigset_t * __restrict  __oldmask ) ;
extern  __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid ,
                                                      int __signo ) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;
extern buffer_array *buffer_array_init(void) ;
extern void buffer_array_free(buffer_array *b ) ;
extern void buffer_array_reset(buffer_array *b ) ;
extern buffer *buffer_array_append_get_buffer(buffer_array *b ) ;
extern buffer *buffer_init(void) ;
extern buffer *buffer_init_buffer(buffer *b ) ;
extern buffer *buffer_init_string(char const   *str ) ;
extern void buffer_free(buffer *b ) ;
extern void buffer_reset(buffer *b ) ;
extern int buffer_prepare_copy(buffer *b , size_t size ) ;
extern int buffer_prepare_append(buffer *b , size_t size ) ;
extern int buffer_copy_string(buffer *b , char const   *s ) ;
extern int buffer_copy_string_len(buffer *b , char const   *s , size_t s_len ) ;
extern int buffer_copy_string_buffer(buffer *b , buffer const   *src ) ;
extern int buffer_copy_string_hex(buffer *b , char const   *in , size_t in_len ) ;
extern int buffer_copy_long(buffer *b , long val ) ;
extern int buffer_copy_memory(buffer *b , char const   *s , size_t s_len ) ;
extern int buffer_append_string(buffer *b , char const   *s ) ;
extern int buffer_append_string_len(buffer *b , char const   *s , size_t s_len ) ;
extern int buffer_append_string_buffer(buffer *b , buffer const   *src ) ;
extern int buffer_append_string_lfill(buffer *b , char const   *s ,
                                      size_t maxlen ) ;
extern int buffer_append_string_rfill(buffer *b , char const   *s ,
                                      size_t maxlen ) ;
extern int buffer_append_long_hex(buffer *b , unsigned long len ) ;
extern int buffer_append_long(buffer *b , long val ) ;
extern int buffer_copy_off_t(buffer *b , off_t val ) ;
extern int buffer_append_off_t(buffer *b , off_t val ) ;
extern int buffer_append_memory(buffer *b , char const   *s , size_t s_len ) ;
extern char *buffer_search_string_len(buffer *b , char const   *needle ,
                                      size_t len ) ;
extern int buffer_is_empty(buffer *b ) ;
extern int buffer_is_equal(buffer *a , buffer *b ) ;
extern int buffer_is_equal_right_len(buffer *a , buffer *b , size_t len ) ;
extern int buffer_is_equal_string(buffer *a , char const   *s , size_t b_len ) ;
extern int buffer_caseless_compare(char const   *a , size_t a_len ,
                                   char const   *b , size_t b_len ) ;
extern int buffer_append_string_encoded(buffer *b , char const   *s ,
                                        size_t s_len ,
                                        buffer_encoding_t encoding ) ;
extern int buffer_urldecode_path(buffer *url ) ;
extern int buffer_urldecode_query(buffer *url ) ;
extern int buffer_path_simplify(buffer *dest , buffer *src ) ;
extern int buffer_to_lower(buffer *b ) ;
extern int buffer_to_upper(buffer *b ) ;
extern int LI_ltostr(char *buf , long val ) ;
extern char hex2int(unsigned char c ) ;
extern char int2hex(char i ) ;
extern int light_isdigit(int c ) ;
extern int light_isxdigit(int c ) ;
extern int light_isalpha(int c ) ;
extern int light_isalnum(int c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) gettimeofday)(struct timeval * __restrict  __tv ,
                                                                                         __timezone_ptr_t __tz ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) settimeofday)(struct timeval  const  *__tv ,
                                                                                         struct timezone  const  *__tz ) ;
extern  __attribute__((__nothrow__)) int adjtime(struct timeval  const  *__delta ,
                                                 struct timeval *__olddelta ) ;
extern  __attribute__((__nothrow__)) int getitimer(__itimer_which_t __which ,
                                                   struct itimerval *__value ) ;
extern  __attribute__((__nothrow__)) int setitimer(__itimer_which_t __which ,
                                                   struct itimerval  const  * __restrict  __new ,
                                                   struct itimerval * __restrict  __old ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) utimes)(char const   *__file ,
                                                                                   struct timeval  const  *__tvp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) lutimes)(char const   *__file ,
                                                                                    struct timeval  const  *__tvp ) ;
extern  __attribute__((__nothrow__)) int futimes(int __fd ,
                                                 struct timeval  const  *__tvp ) ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf )  __asm__("stat64")  ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                           struct stat *__statbuf )  __asm__("fstat64")  ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf )  __asm__("lstat64")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chmod)(char const   *__file ,
                                                                                  __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) lchmod)(char const   *__file ,
                                                                                   __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) mkdir)(char const   *__path ,
                                                                                  __mode_t __mode ) ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                                                           __mode_t __mode ,
                                                                                           __dev_t __dev ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) mkfifo)(char const   *__path ,
                                                                                   __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3))) __fxstat)(int __ver ,
                                                                                     int __fildes ,
                                                                                     struct stat *__stat_buf )  __asm__("__fxstat64")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __xstat)(int __ver ,
                                                                                      char const   *__filename ,
                                                                                      struct stat *__stat_buf )  __asm__("__xstat64")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __lxstat)(int __ver ,
                                                                                       char const   *__filename ,
                                                                                       struct stat *__stat_buf )  __asm__("__lxstat64")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4))) __fxstatat)(int __ver ,
                                                                                         int __fildes ,
                                                                                         char const   *__filename ,
                                                                                         struct stat *__stat_buf ,
                                                                                         int __flag )  __asm__("__fxstatat64")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4))) __xmknod)(int __ver ,
                                                                                       char const   *__path ,
                                                                                       __mode_t __mode ,
                                                                                       __dev_t *__dev ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,5))) __xmknodat)(int __ver ,
                                                                                         int __fd ,
                                                                                         char const   *__path ,
                                                                                         __mode_t __mode ,
                                                                                         __dev_t *__dev ) ;
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf )  __asm__("stat64")  ;
__inline static int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                              struct stat * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "234\n");
  fflush(_coverage_fout);
  }
  tmp = __xstat(3, (char const   *)__path, (struct stat *)__statbuf);
  {
  fprintf(_coverage_fout, "235\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf )  __asm__("lstat64")  ;
__inline static int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                               struct stat * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "236\n");
  fflush(_coverage_fout);
  }
  tmp = __lxstat(3, (char const   *)__path, (struct stat *)__statbuf);
  {
  fprintf(_coverage_fout, "237\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                           struct stat *__statbuf )  __asm__("fstat64")  ;
__inline static int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                             struct stat *__statbuf ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "238\n");
  fflush(_coverage_fout);
  }
  tmp = __fxstat(3, __fd, __statbuf);
  {
  fprintf(_coverage_fout, "239\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                                                           __mode_t __mode ,
                                                                                           __dev_t __dev ) ;
__inline static int ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                             __mode_t __mode ,
                                                             __dev_t __dev ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "240\n");
  fflush(_coverage_fout);
  }
  tmp = __xmknod(1, __path, __mode, & __dev);
  {
  fprintf(_coverage_fout, "241\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) intmax_t imaxabs(intmax_t __n )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) imaxdiv_t imaxdiv(intmax_t __numer ,
                                                       intmax_t __denom )  __attribute__((__const__)) ;
__inline static  __attribute__((__nothrow__)) intmax_t strtoimax(char const   * __restrict  nptr ,
                                                                 char ** __restrict  endptr ,
                                                                 int base ) ;
__inline static  __attribute__((__nothrow__)) uintmax_t strtoumax(char const   * __restrict  nptr ,
                                                                  char ** __restrict  endptr ,
                                                                  int base ) ;
__inline static  __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                 __gwchar_t ** __restrict  endptr ,
                                                                 int base ) ;
__inline static  __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                  __gwchar_t ** __restrict  endptr ,
                                                                  int base ) ;
__inline static  __attribute__((__nothrow__)) intmax_t strtoimax(char const   * __restrict  nptr ,
                                                                 char ** __restrict  endptr ,
                                                                 int base ) ;
__inline static intmax_t strtoimax(char const   * __restrict  nptr ,
                                   char ** __restrict  endptr , int base ) 
{ 
  long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "242\n");
  fflush(_coverage_fout);
  }
  tmp = __strtoll_internal(nptr, endptr, base, 0);
  {
  fprintf(_coverage_fout, "243\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static  __attribute__((__nothrow__)) uintmax_t strtoumax(char const   * __restrict  nptr ,
                                                                  char ** __restrict  endptr ,
                                                                  int base ) ;
__inline static uintmax_t strtoumax(char const   * __restrict  nptr ,
                                    char ** __restrict  endptr , int base ) 
{ 
  unsigned long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "244\n");
  fflush(_coverage_fout);
  }
  tmp = __strtoull_internal(nptr, endptr, base, 0);
  {
  fprintf(_coverage_fout, "245\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) long long __wcstoll_internal(__gwchar_t const   * __restrict  __nptr ,
                                                                  __gwchar_t ** __restrict  __endptr ,
                                                                  int __base ,
                                                                  int __group ) ;
__inline static  __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                 __gwchar_t ** __restrict  endptr ,
                                                                 int base ) ;
__inline static intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                   __gwchar_t ** __restrict  endptr , int base ) 
{ 
  long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "246\n");
  fflush(_coverage_fout);
  }
  tmp = __wcstoll_internal(nptr, endptr, base, 0);
  {
  fprintf(_coverage_fout, "247\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long long __wcstoull_internal(__gwchar_t const   * __restrict  __nptr ,
                                                                            __gwchar_t ** __restrict  __endptr ,
                                                                            int __base ,
                                                                            int __group ) ;
__inline static  __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                  __gwchar_t ** __restrict  endptr ,
                                                                  int base ) ;
__inline static uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                    __gwchar_t ** __restrict  endptr , int base ) 
{ 
  unsigned long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "248\n");
  fflush(_coverage_fout);
  }
  tmp = __wcstoull_internal(nptr, endptr, base, 0);
  {
  fprintf(_coverage_fout, "249\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
extern void *(*pcre_malloc)(size_t  ) ;
extern void (*pcre_free)(void * ) ;
extern void *(*pcre_stack_malloc)(size_t  ) ;
extern void (*pcre_stack_free)(void * ) ;
extern int (*pcre_callout)(pcre_callout_block * ) ;
extern pcre *pcre_compile(char const   * , int  , char const   ** , int * ,
                          unsigned char const   * ) ;
extern pcre *pcre_compile2(char const   * , int  , int * , char const   ** ,
                           int * , unsigned char const   * ) ;
extern int pcre_config(int  , void * ) ;
extern int pcre_copy_named_substring(pcre const   * , char const   * , int * ,
                                     int  , char const   * , char * , int  ) ;
extern int pcre_copy_substring(char const   * , int * , int  , int  , char * ,
                               int  ) ;
extern int pcre_dfa_exec(pcre const   * , pcre_extra const   * ,
                         char const   * , int  , int  , int  , int * , int  ,
                         int * , int  ) ;
extern int pcre_exec(pcre const   * , pcre_extra const   * , char const   * ,
                     int  , int  , int  , int * , int  ) ;
extern void pcre_free_substring(char const   * ) ;
extern void pcre_free_substring_list(char const   ** ) ;
extern int pcre_fullinfo(pcre const   * , pcre_extra const   * , int  , void * ) ;
extern int pcre_get_named_substring(pcre const   * , char const   * , int * ,
                                    int  , char const   * , char const   ** ) ;
extern int pcre_get_stringnumber(pcre const   * , char const   * ) ;
extern int pcre_get_stringtable_entries(pcre const   * , char const   * ,
                                        char ** , char ** ) ;
extern int pcre_get_substring(char const   * , int * , int  , int  ,
                              char const   ** ) ;
extern int pcre_get_substring_list(char const   * , int * , int  ,
                                   char const   *** ) ;
extern int pcre_info(pcre const   * , int * , int * ) ;
extern unsigned char const   *pcre_maketables(void) ;
extern int pcre_refcount(pcre * , int  ) ;
extern pcre_extra *pcre_study(pcre const   * , int  , char const   ** ) ;
extern char const   *pcre_version(void) ;
extern data_count *data_count_init(void) ;
extern data_string *data_string_init(void) ;
extern data_string *data_response_init(void) ;
extern data_array *data_array_init(void) ;
extern data_config *data_config_init(void) ;
extern data_integer *data_integer_init(void) ;
extern data_fastcgi *data_fastcgi_init(void) ;
extern array *array_init(void) ;
extern array *array_init_array(array *a ) ;
extern void array_free(array *a ) ;
extern void array_reset(array *a ) ;
extern int array_insert_unique(array *a , data_unset *str ) ;
extern data_unset *array_pop(array *a ) ;
extern int array_print(array *a , int depth ) ;
extern data_unset *array_get_unused_element(array *a , data_type_t t ) ;
extern data_unset *array_get_element(array *a , char const   *key ) ;
extern data_unset *array_replace(array *a , data_unset *du ) ;
extern int array_strcasecmp(char const   *a , size_t a_len , char const   *b ,
                            size_t b_len ) ;
extern void array_print_indent(int depth ) ;
extern size_t array_get_max_key_length(array *a ) ;
extern chunkqueue *chunkqueue_init(void) ;
extern int chunkqueue_set_tempdirs(chunkqueue *c , array *tempdirs ) ;
extern int chunkqueue_append_file(chunkqueue *c , buffer *fn , off_t offset ,
                                  off_t len ) ;
extern int chunkqueue_append_mem(chunkqueue *c , char const   *mem , size_t len ) ;
extern int chunkqueue_append_buffer(chunkqueue *c , buffer *mem ) ;
extern int chunkqueue_append_buffer_weak(chunkqueue *c , buffer *mem ) ;
extern int chunkqueue_prepend_buffer(chunkqueue *c , buffer *mem ) ;
extern buffer *chunkqueue_get_append_buffer(chunkqueue *c ) ;
extern buffer *chunkqueue_get_prepend_buffer(chunkqueue *c ) ;
extern chunk *chunkqueue_get_append_tempfile(chunkqueue *cq ) ;
extern int chunkqueue_remove_finished_chunks(chunkqueue *cq ) ;
extern off_t chunkqueue_length(chunkqueue *c ) ;
extern off_t chunkqueue_written(chunkqueue *c ) ;
extern void chunkqueue_free(chunkqueue *c ) ;
extern void chunkqueue_reset(chunkqueue *c ) ;
extern int chunkqueue_is_empty(chunkqueue *c ) ;
extern char const   *get_http_status_name(int i ) ;
extern char const   *get_http_version_name(int i ) ;
extern char const   *get_http_method_name(http_method_t i ) ;
extern char const   *get_http_status_body_name(int i ) ;
extern int get_http_version_key(char const   *s ) ;
extern http_method_t get_http_method_key(char const   *s ) ;
extern char const   *keyvalue_get_value(keyvalue *kv , int k ) ;
extern int keyvalue_get_key(keyvalue *kv , char const   *s ) ;
extern keyvalue_buffer *keyvalue_buffer_init(void) ;
extern int keyvalue_buffer_append(keyvalue_buffer *kvb , int k ,
                                  char const   *value ) ;
extern void keyvalue_buffer_free(keyvalue_buffer *kvb ) ;
extern s_keyvalue_buffer *s_keyvalue_buffer_init(void) ;
extern int s_keyvalue_buffer_append(s_keyvalue_buffer *kvb , char const   *key ,
                                    char const   *value ) ;
extern void s_keyvalue_buffer_free(s_keyvalue_buffer *kvb ) ;
extern httpauth_keyvalue_buffer *httpauth_keyvalue_buffer_init(void) ;
extern int httpauth_keyvalue_buffer_append(httpauth_keyvalue_buffer *kvb ,
                                           char const   *key ,
                                           char const   *realm ,
                                           httpauth_type type ) ;
extern void httpauth_keyvalue_buffer_free(httpauth_keyvalue_buffer *kvb ) ;
extern pcre_keyvalue_buffer *pcre_keyvalue_buffer_init(void) ;
extern int pcre_keyvalue_buffer_append(pcre_keyvalue_buffer *kvb ,
                                       char const   *key , char const   *value ) ;
extern void pcre_keyvalue_buffer_free(pcre_keyvalue_buffer *kvb ) ;
extern bitset *bitset_init(size_t nbits ) ;
extern void bitset_reset(bitset *set ) ;
extern void bitset_free(bitset *set ) ;
extern void bitset_clear_bit(bitset *set , size_t pos ) ;
extern void bitset_set_bit(bitset *set , size_t pos ) ;
extern int bitset_test_bit(bitset *set , size_t pos ) ;
extern  __attribute__((__nothrow__)) int epoll_create(int __size ) ;
extern  __attribute__((__nothrow__)) int epoll_ctl(int __epfd , int __op ,
                                                   int __fd ,
                                                   struct epoll_event *__event ) ;
extern int epoll_wait(int __epfd , struct epoll_event *__events ,
                      int __maxevents , int __timeout ) ;
extern int epoll_pwait(int __epfd , struct epoll_event *__events ,
                       int __maxevents , int __timeout ,
                       __sigset_t const   *__ss ) ;
extern int poll(struct pollfd *__fds , nfds_t __nfds , int __timeout ) ;
extern fdevents *fdevent_init(size_t maxfds , fdevent_handler_t type ) ;
extern int fdevent_reset(fdevents *ev ) ;
extern void fdevent_free(fdevents *ev ) ;
extern int fdevent_event_add(fdevents *ev , int *fde_ndx , int fd , int events ) ;
extern int fdevent_event_del(fdevents *ev , int *fde_ndx , int fd ) ;
extern int fdevent_event_get_revent(fdevents *ev , size_t ndx ) ;
extern int fdevent_event_get_fd(fdevents *ev , size_t ndx ) ;
extern fdevent_handler fdevent_get_handler(fdevents *ev , int fd ) ;
extern void *fdevent_get_context(fdevents *ev , int fd ) ;
extern int fdevent_event_next_fdndx(fdevents *ev , int ndx ) ;
extern int fdevent_poll(fdevents *ev , int timeout_ms ) ;
extern int fdevent_register(fdevents *ev , int fd ,
                            handler_t (*handler)(void *srv , void *ctx ,
                                                 int revents ) , void *ctx ) ;
extern int fdevent_unregister(fdevents *ev , int fd ) ;
extern int fdevent_fcntl_set(fdevents *ev , int fd ) ;
extern int fdevent_select_init(fdevents *ev ) ;
extern int fdevent_poll_init(fdevents *ev ) ;
extern int fdevent_linux_rtsig_init(fdevents *ev ) ;
extern int fdevent_linux_sysepoll_init(fdevents *ev ) ;
extern int fdevent_solaris_devpoll_init(fdevents *ev ) ;
extern int fdevent_freebsd_kqueue_init(fdevents *ev ) ;
extern ssize_t readv(int __fd , struct iovec  const  *__iovec , int __count ) ;
extern ssize_t writev(int __fd , struct iovec  const  *__iovec , int __count ) ;
__inline static  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
__inline static  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
__inline static struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                              struct cmsghdr *__cmsg ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "250\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__cmsg->cmsg_len < sizeof(struct cmsghdr )) {
    {
    fprintf(_coverage_fout, "251\n");
    fflush(_coverage_fout);
    }
    return ((struct cmsghdr *)0);
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
  __cmsg = (struct cmsghdr *)((unsigned char *)__cmsg + ((((unsigned long )__cmsg->cmsg_len + sizeof(size_t )) - 1UL) & ~ (sizeof(size_t ) - 1UL)));
  {
  fprintf(_coverage_fout, "254\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )((unsigned char *)(__cmsg + 1)) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
    {
    fprintf(_coverage_fout, "255\n");
    fflush(_coverage_fout);
    }
    return ((struct cmsghdr *)0);
  } else {
    {
    fprintf(_coverage_fout, "256\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )((unsigned char *)__cmsg + ((((unsigned long )__cmsg->cmsg_len + sizeof(size_t )) - 1UL) & ~ (sizeof(size_t ) - 1UL))) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
      {
      fprintf(_coverage_fout, "257\n");
      fflush(_coverage_fout);
      }
      return ((struct cmsghdr *)0);
    } else {
      {
      fprintf(_coverage_fout, "258\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "259\n");
  fflush(_coverage_fout);
  }
  return (__cmsg);
}
}
extern  __attribute__((__nothrow__)) int socket(int __domain , int __type ,
                                                int __protocol ) ;
extern  __attribute__((__nothrow__)) int socketpair(int __domain , int __type ,
                                                    int __protocol , int *__fds ) ;
extern  __attribute__((__nothrow__)) int bind(int __fd ,
                                              struct sockaddr  const  *__addr ,
                                              socklen_t __len ) ;
extern  __attribute__((__nothrow__)) int getsockname(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;
extern int connect(int __fd , struct sockaddr  const  *__addr , socklen_t __len ) ;
extern  __attribute__((__nothrow__)) int getpeername(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;
extern ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags ) ;
extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;
extern ssize_t sendto(int __fd , void const   *__buf , size_t __n ,
                      int __flags , struct sockaddr  const  *__addr ,
                      socklen_t __addr_len ) ;
extern ssize_t recvfrom(int __fd , void * __restrict  __buf , size_t __n ,
                        int __flags , struct sockaddr * __restrict  __addr ,
                        socklen_t * __restrict  __addr_len ) ;
extern ssize_t sendmsg(int __fd , struct msghdr  const  *__message ,
                       int __flags ) ;
extern ssize_t recvmsg(int __fd , struct msghdr *__message , int __flags ) ;
extern  __attribute__((__nothrow__)) int getsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void * __restrict  __optval ,
                                                    socklen_t * __restrict  __optlen ) ;
extern  __attribute__((__nothrow__)) int setsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void const   *__optval ,
                                                    socklen_t __optlen ) ;
extern  __attribute__((__nothrow__)) int listen(int __fd , int __n ) ;
extern int accept(int __fd , struct sockaddr * __restrict  __addr ,
                  socklen_t * __restrict  __addr_len ) ;
extern  __attribute__((__nothrow__)) int shutdown(int __fd , int __how ) ;
extern  __attribute__((__nothrow__)) int sockatmark(int __fd ) ;
extern  __attribute__((__nothrow__)) int isfdtype(int __fd , int __fdtype ) ;
extern unsigned int __invalid_size_argument_for_IOC ;
extern  __attribute__((__nothrow__)) int ioctl(int __fd ,
                                               unsigned long __request  , ...) ;
extern struct in6_addr  const  in6addr_any ;
extern struct in6_addr  const  in6addr_loopback ;
extern  __attribute__((__nothrow__)) uint32_t ntohl(uint32_t __netlong )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) uint16_t ntohs(uint16_t __netshort )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) uint32_t htonl(uint32_t __hostlong )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) uint16_t htons(uint16_t __hostshort )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int bindresvport(int __sockfd ,
                                                      struct sockaddr_in *__sock_in ) ;
extern  __attribute__((__nothrow__)) int bindresvport6(int __sockfd ,
                                                       struct sockaddr_in6 *__sock_in ) ;
extern  __attribute__((__nothrow__)) in_addr_t inet_addr(char const   *__cp ) ;
extern  __attribute__((__nothrow__)) in_addr_t inet_lnaof(struct in_addr __in ) ;
extern  __attribute__((__nothrow__)) struct in_addr inet_makeaddr(in_addr_t __net ,
                                                                  in_addr_t __host ) ;
extern  __attribute__((__nothrow__)) in_addr_t inet_netof(struct in_addr __in ) ;
extern  __attribute__((__nothrow__)) in_addr_t inet_network(char const   *__cp ) ;
extern  __attribute__((__nothrow__)) char *inet_ntoa(struct in_addr __in ) ;
extern  __attribute__((__nothrow__)) int inet_pton(int __af ,
                                                   char const   * __restrict  __cp ,
                                                   void * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) char const   *inet_ntop(int __af ,
                                                             void const   * __restrict  __cp ,
                                                             char * __restrict  __buf ,
                                                             socklen_t __len ) ;
extern  __attribute__((__nothrow__)) int inet_aton(char const   *__cp ,
                                                   struct in_addr *__inp ) ;
extern  __attribute__((__nothrow__)) char *inet_neta(in_addr_t __net ,
                                                     char *__buf , size_t __len ) ;
extern  __attribute__((__nothrow__)) char *inet_net_ntop(int __af ,
                                                         void const   *__cp ,
                                                         int __bits ,
                                                         char *__buf ,
                                                         size_t __len ) ;
extern  __attribute__((__nothrow__)) int inet_net_pton(int __af ,
                                                       char const   *__cp ,
                                                       void *__buf ,
                                                       size_t __len ) ;
extern  __attribute__((__nothrow__)) unsigned int inet_nsap_addr(char const   *__cp ,
                                                                 unsigned char *__buf ,
                                                                 int __len ) ;
extern  __attribute__((__nothrow__)) char *inet_nsap_ntoa(int __len ,
                                                          unsigned char const   *__cp ,
                                                          char *__buf ) ;
extern  __attribute__((__nothrow__)) void setrpcent(int __stayopen ) ;
extern  __attribute__((__nothrow__)) void endrpcent(void) ;
extern  __attribute__((__nothrow__)) struct rpcent *getrpcbyname(char const   *__name ) ;
extern  __attribute__((__nothrow__)) struct rpcent *getrpcbynumber(int __number ) ;
extern  __attribute__((__nothrow__)) struct rpcent *getrpcent(void) ;
extern  __attribute__((__nothrow__)) int getrpcbyname_r(char const   *__name ,
                                                        struct rpcent *__result_buf ,
                                                        char *__buffer ,
                                                        size_t __buflen ,
                                                        struct rpcent **__result ) ;
extern  __attribute__((__nothrow__)) int getrpcbynumber_r(int __number ,
                                                          struct rpcent *__result_buf ,
                                                          char *__buffer ,
                                                          size_t __buflen ,
                                                          struct rpcent **__result ) ;
extern  __attribute__((__nothrow__)) int getrpcent_r(struct rpcent *__result_buf ,
                                                     char *__buffer ,
                                                     size_t __buflen ,
                                                     struct rpcent **__result ) ;
extern  __attribute__((__nothrow__)) int *__h_errno_location(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) void herror(char const   *__str ) ;
extern  __attribute__((__nothrow__)) char const   *hstrerror(int __err_num ) ;
extern void sethostent(int __stay_open ) ;
extern void endhostent(void) ;
extern struct hostent *gethostent(void) ;
extern struct hostent *gethostbyaddr(void const   *__addr , __socklen_t __len ,
                                     int __type ) ;
extern struct hostent *gethostbyname(char const   *__name ) ;
extern struct hostent *gethostbyname2(char const   *__name , int __af ) ;
extern int gethostent_r(struct hostent * __restrict  __result_buf ,
                        char * __restrict  __buf , size_t __buflen ,
                        struct hostent ** __restrict  __result ,
                        int * __restrict  __h_errnop ) ;
extern int gethostbyaddr_r(void const   * __restrict  __addr ,
                           __socklen_t __len , int __type ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;
extern int gethostbyname_r(char const   * __restrict  __name ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;
extern int gethostbyname2_r(char const   * __restrict  __name , int __af ,
                            struct hostent * __restrict  __result_buf ,
                            char * __restrict  __buf , size_t __buflen ,
                            struct hostent ** __restrict  __result ,
                            int * __restrict  __h_errnop ) ;
extern void setnetent(int __stay_open ) ;
extern void endnetent(void) ;
extern struct netent *getnetent(void) ;
extern struct netent *getnetbyaddr(uint32_t __net , int __type ) ;
extern struct netent *getnetbyname(char const   *__name ) ;
extern int getnetent_r(struct netent * __restrict  __result_buf ,
                       char * __restrict  __buf , size_t __buflen ,
                       struct netent ** __restrict  __result ,
                       int * __restrict  __h_errnop ) ;
extern int getnetbyaddr_r(uint32_t __net , int __type ,
                          struct netent * __restrict  __result_buf ,
                          char * __restrict  __buf , size_t __buflen ,
                          struct netent ** __restrict  __result ,
                          int * __restrict  __h_errnop ) ;
extern int getnetbyname_r(char const   * __restrict  __name ,
                          struct netent * __restrict  __result_buf ,
                          char * __restrict  __buf , size_t __buflen ,
                          struct netent ** __restrict  __result ,
                          int * __restrict  __h_errnop ) ;
extern void setservent(int __stay_open ) ;
extern void endservent(void) ;
extern struct servent *getservent(void) ;
extern struct servent *getservbyname(char const   *__name ,
                                     char const   *__proto ) ;
extern struct servent *getservbyport(int __port , char const   *__proto ) ;
extern int getservent_r(struct servent * __restrict  __result_buf ,
                        char * __restrict  __buf , size_t __buflen ,
                        struct servent ** __restrict  __result ) ;
extern int getservbyname_r(char const   * __restrict  __name ,
                           char const   * __restrict  __proto ,
                           struct servent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct servent ** __restrict  __result ) ;
extern int getservbyport_r(int __port , char const   * __restrict  __proto ,
                           struct servent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct servent ** __restrict  __result ) ;
extern void setprotoent(int __stay_open ) ;
extern void endprotoent(void) ;
extern struct protoent *getprotoent(void) ;
extern struct protoent *getprotobyname(char const   *__name ) ;
extern struct protoent *getprotobynumber(int __proto ) ;
extern int getprotoent_r(struct protoent * __restrict  __result_buf ,
                         char * __restrict  __buf , size_t __buflen ,
                         struct protoent ** __restrict  __result ) ;
extern int getprotobyname_r(char const   * __restrict  __name ,
                            struct protoent * __restrict  __result_buf ,
                            char * __restrict  __buf , size_t __buflen ,
                            struct protoent ** __restrict  __result ) ;
extern int getprotobynumber_r(int __proto ,
                              struct protoent * __restrict  __result_buf ,
                              char * __restrict  __buf , size_t __buflen ,
                              struct protoent ** __restrict  __result ) ;
extern int setnetgrent(char const   *__netgroup ) ;
extern void endnetgrent(void) ;
extern int getnetgrent(char ** __restrict  __hostp ,
                       char ** __restrict  __userp ,
                       char ** __restrict  __domainp ) ;
extern int innetgr(char const   *__netgroup , char const   *__host ,
                   char const   *__user , char const   *domain ) ;
extern int getnetgrent_r(char ** __restrict  __hostp ,
                         char ** __restrict  __userp ,
                         char ** __restrict  __domainp ,
                         char * __restrict  __buffer , size_t __buflen ) ;
extern int rcmd(char ** __restrict  __ahost , unsigned short __rport ,
                char const   * __restrict  __locuser ,
                char const   * __restrict  __remuser ,
                char const   * __restrict  __cmd , int * __restrict  __fd2p ) ;
extern int rcmd_af(char ** __restrict  __ahost , unsigned short __rport ,
                   char const   * __restrict  __locuser ,
                   char const   * __restrict  __remuser ,
                   char const   * __restrict  __cmd , int * __restrict  __fd2p ,
                   sa_family_t __af ) ;
extern int rexec(char ** __restrict  __ahost , int __rport ,
                 char const   * __restrict  __name ,
                 char const   * __restrict  __pass ,
                 char const   * __restrict  __cmd , int * __restrict  __fd2p ) ;
extern int rexec_af(char ** __restrict  __ahost , int __rport ,
                    char const   * __restrict  __name ,
                    char const   * __restrict  __pass ,
                    char const   * __restrict  __cmd ,
                    int * __restrict  __fd2p , sa_family_t __af ) ;
extern int ruserok(char const   *__rhost , int __suser ,
                   char const   *__remuser , char const   *__locuser ) ;
extern int ruserok_af(char const   *__rhost , int __suser ,
                      char const   *__remuser , char const   *__locuser ,
                      sa_family_t __af ) ;
extern int rresvport(int *__alport ) ;
extern int rresvport_af(int *__alport , sa_family_t __af ) ;
extern int getaddrinfo(char const   * __restrict  __name ,
                       char const   * __restrict  __service ,
                       struct addrinfo  const  * __restrict  __req ,
                       struct addrinfo ** __restrict  __pai ) ;
extern  __attribute__((__nothrow__)) void freeaddrinfo(struct addrinfo *__ai ) ;
extern  __attribute__((__nothrow__)) char const   *gai_strerror(int __ecode ) ;
extern int getnameinfo(struct sockaddr  const  * __restrict  __sa ,
                       socklen_t __salen , char * __restrict  __host ,
                       socklen_t __hostlen , char * __restrict  __serv ,
                       socklen_t __servlen , unsigned int __flags ) ;
extern splay_tree *splaytree_splay(splay_tree *t , int key ) ;
extern splay_tree *splaytree_insert(splay_tree *t , int key , void *data ) ;
extern splay_tree *splaytree_delete(splay_tree *t , int key ) ;
extern splay_tree *splaytree_size(splay_tree *t ) ;
extern int etag_is_equal(buffer *etag , char const   *matches ) ;
extern int etag_create(buffer *etag , struct stat *st , etag_flags_t flags ) ;
extern int etag_mutate(buffer *mut , buffer *etag ) ;
extern char **environ ;
extern int config_read(server *srv , char const   *fn ) ;
extern int config_set_defaults(server *srv ) ;
extern buffer *config_get_value_buffer(server *srv , connection *con ,
                                       config_var_t field ) ;
extern int log_error_open(server *srv ) ;
extern int log_error_close(server *srv ) ;
extern int log_error_write(server *srv , char const   *filename ,
                           unsigned int line , char const   *fmt  , ...) ;
extern int log_error_cycle(server *srv ) ;
extern int http_chunk_append_mem(server *srv , connection *con ,
                                 char const   *mem , size_t len ) ;
extern int http_chunk_append_buffer(server *srv , connection *con , buffer *mem ) ;
extern int http_chunk_append_file(server *srv , connection *con , buffer *fn ,
                                  off_t offset , off_t len ) ;
extern off_t http_chunkqueue_length(server *srv , connection *con ) ;
extern connection *connection_init(server *srv ) ;
extern int connection_reset(server *srv , connection *con ) ;
extern void connections_free(server *srv ) ;
extern connection *connection_accept(server *srv , server_socket *srv_sock ) ;
extern int connection_close(server *srv , connection *con ) ;
extern int connection_set_state(server *srv , connection *con ,
                                connection_state_t state ) ;
extern char const   *connection_get_state(connection_state_t state ) ;
extern char const   *connection_get_short_state(connection_state_t state ) ;
extern int connection_state_machine(server *srv , connection *con ) ;
extern  __attribute__((__nothrow__)) clock_t clock(void) ;
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
extern  __attribute__((__nothrow__)) double difftime(time_t __time1 ,
                                                     time_t __time0 )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) struct tm *gmtime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) struct tm *gmtime_r(time_t const   * __restrict  __timer ,
                                                         struct tm * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) struct tm *localtime_r(time_t const   * __restrict  __timer ,
                                                            struct tm * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) char *asctime(struct tm  const  *__tp ) ;
extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) char *asctime_r(struct tm  const  * __restrict  __tp ,
                                                     char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) char *ctime_r(time_t const   * __restrict  __timer ,
                                                   char * __restrict  __buf ) ;
extern char *__tzname[2] ;
extern int __daylight ;
extern long __timezone ;
extern char *tzname[2] ;
extern  __attribute__((__nothrow__)) void tzset(void) ;
extern int daylight ;
extern long timezone ;
extern  __attribute__((__nothrow__)) int stime(time_t const   *__when ) ;
extern  __attribute__((__nothrow__)) time_t timegm(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) time_t timelocal(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) int dysize(int __year )  __attribute__((__const__)) ;
extern int nanosleep(struct timespec  const  *__requested_time ,
                     struct timespec *__remaining ) ;
extern  __attribute__((__nothrow__)) int clock_getres(clockid_t __clock_id ,
                                                      struct timespec *__res ) ;
extern  __attribute__((__nothrow__)) int clock_gettime(clockid_t __clock_id ,
                                                       struct timespec *__tp ) ;
extern  __attribute__((__nothrow__)) int clock_settime(clockid_t __clock_id ,
                                                       struct timespec  const  *__tp ) ;
extern int clock_nanosleep(clockid_t __clock_id , int __flags ,
                           struct timespec  const  *__req ,
                           struct timespec *__rem ) ;
extern  __attribute__((__nothrow__)) int clock_getcpuclockid(pid_t __pid ,
                                                             clockid_t *__clock_id ) ;
extern  __attribute__((__nothrow__)) int timer_create(clockid_t __clock_id ,
                                                      struct sigevent * __restrict  __evp ,
                                                      timer_t * __restrict  __timerid ) ;
extern  __attribute__((__nothrow__)) int timer_delete(timer_t __timerid ) ;
extern  __attribute__((__nothrow__)) int timer_settime(timer_t __timerid ,
                                                       int __flags ,
                                                       struct itimerspec  const  * __restrict  __value ,
                                                       struct itimerspec * __restrict  __ovalue ) ;
extern  __attribute__((__nothrow__)) int timer_gettime(timer_t __timerid ,
                                                       struct itimerspec *__value ) ;
extern  __attribute__((__nothrow__)) int timer_getoverrun(timer_t __timerid ) ;
extern int http_response_parse(server *srv , connection *con ) ;
extern int http_response_write_header(server *srv , connection *con ) ;
extern int response_header_insert(server *srv , connection *con ,
                                  char const   *key , size_t keylen ,
                                  char const   *value , size_t vallen ) ;
extern int response_header_overwrite(server *srv , connection *con ,
                                     char const   *key , size_t keylen ,
                                     char const   *value , size_t vallen ) ;
extern handler_t http_response_prepare(server *srv , connection *con ) ;
extern int http_response_redirect_to_directory(server *srv , connection *con ) ;
extern int http_response_handle_cachable(server *srv , connection *con ,
                                         buffer *mtime ) ;
extern buffer *strftime_cache_get(server *srv , time_t last_mod ) ;
extern int joblist_append(server *srv , connection *con ) ;
extern void joblist_free(server *srv , connections *joblist ) ;
extern int fdwaitqueue_append(server *srv , connection *con ) ;
extern void fdwaitqueue_free(server *srv , connections *fdwaitqueue ) ;
extern connection *fdwaitqueue_unshift(server *srv , connections *fdwaitqueue ) ;
extern int plugins_load(server *srv ) ;
extern void plugins_free(server *srv ) ;
extern handler_t plugins_call_handle_uri_raw(server *srv , connection *con ) ;
extern handler_t plugins_call_handle_uri_clean(server *srv , connection *con ) ;
extern handler_t plugins_call_handle_subrequest_start(server *srv ,
                                                      connection *con ) ;
extern handler_t plugins_call_handle_subrequest(server *srv , connection *con ) ;
extern handler_t plugins_call_handle_request_done(server *srv , connection *con ) ;
extern handler_t plugins_call_handle_docroot(server *srv , connection *con ) ;
extern handler_t plugins_call_handle_physical(server *srv , connection *con ) ;
extern handler_t plugins_call_handle_connection_close(server *srv ,
                                                      connection *con ) ;
extern handler_t plugins_call_handle_joblist(server *srv , connection *con ) ;
extern handler_t plugins_call_connection_reset(server *srv , connection *con ) ;
extern handler_t plugins_call_handle_trigger(server *srv ) ;
extern handler_t plugins_call_handle_sighup(server *srv ) ;
extern handler_t plugins_call_init(server *srv ) ;
extern handler_t plugins_call_set_defaults(server *srv ) ;
extern handler_t plugins_call_cleanup(server *srv ) ;
extern int config_insert_values_global(server *srv , array *ca ,
                                       config_values_t const   *cv ) ;
extern int config_insert_values_internal(server *srv , array *ca ,
                                         config_values_t const   *cv ) ;
extern int config_setup_connection(server *srv , connection *con ) ;
extern int config_patch_connection(server *srv , connection *con ,
                                   comp_key_t comp ) ;
extern int config_check_cond(server *srv , connection *con , data_config *dc ) ;
extern int config_append_cond_match_buffer(connection *con , data_config *dc ,
                                           buffer *buf , int n ) ;
extern char const   *inet_ntop_cache_get_ip(server *srv , sock_addr *addr ) ;
extern stat_cache *stat_cache_init(void) ;
extern void stat_cache_free(stat_cache *fc ) ;
extern handler_t stat_cache_get_entry(server *srv , connection *con ,
                                      buffer *name , stat_cache_entry **fce ) ;
extern handler_t stat_cache_handle_fdevent(void *_srv , void *_fce , int revent ) ;
extern int stat_cache_trigger_cleanup(server *srv ) ;
extern data_integer *status_counter_get_counter(server *srv , char const   *s ,
                                                size_t len ) ;
extern int status_counter_inc(server *srv , char const   *s , size_t len ) ;
extern int status_counter_dec(server *srv , char const   *s , size_t len ) ;
extern int status_counter_set(server *srv , char const   *s , size_t len ,
                              int val ) ;
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
extern int __underflow(_IO_FILE * ) ;
extern int __uflow(_IO_FILE * ) ;
extern int __overflow(_IO_FILE * , int  ) ;
extern wint_t __wunderflow(_IO_FILE * ) ;
extern wint_t __wuflow(_IO_FILE * ) ;
extern wint_t __woverflow(_IO_FILE * , wint_t  ) ;
extern int _IO_getc(_IO_FILE *__fp ) ;
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int _IO_feof(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int _IO_ferror(_IO_FILE *__fp ) ;
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) void _IO_flockfile(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) void _IO_funlockfile(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) int _IO_ftrylockfile(_IO_FILE * ) ;
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   ,
                       __gnuc_va_list  , int * __restrict   ) ;
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   ,
                        __gnuc_va_list  ) ;
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
extern  __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
extern FILE *tmpfile(void)  __asm__("tmpfile64")  ;
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int snprintf(char * __restrict  __s ,
                                                  size_t __maxlen ,
                                                  char const   * __restrict  __format 
                                                  , ...) ;
extern  __attribute__((__nothrow__)) int vsnprintf(char * __restrict  __s ,
                                                   size_t __maxlen ,
                                                   char const   * __restrict  __format ,
                                                   __gnuc_va_list __arg ) ;
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;
extern int scanf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;
extern int vfscanf(FILE * __restrict  __s ,
                   char const   * __restrict  __format , __gnuc_va_list __arg ) ;
extern int vscanf(char const   * __restrict  __format , __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vsscanf(char const   * __restrict  __s ,
                                                 char const   * __restrict  __format ,
                                                 __gnuc_va_list __arg ) ;
extern int fgetc(FILE *__stream ) ;
extern int getc(FILE *__stream ) ;
__inline static int getchar(void) ;
__inline static int getc_unlocked(FILE *__fp ) ;
__inline static int getchar_unlocked(void) ;
__inline static int fgetc_unlocked(FILE *__fp ) ;
extern int fputc(int __c , FILE *__stream ) ;
extern int putc(int __c , FILE *__stream ) ;
__inline static int putchar(int __c ) ;
__inline static int fputc_unlocked(int __c , FILE *__stream ) ;
__inline static int putc_unlocked(int __c , FILE *__stream ) ;
__inline static int putchar_unlocked(int __c ) ;
extern int getw(FILE *__stream ) ;
extern int putw(int __w , FILE *__stream ) ;
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
extern char *gets(char *__s ) ;
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern int puts(char const   *__s ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;
extern int fseek(FILE *__stream , long __off , int __whence ) ;
extern long ftell(FILE *__stream ) ;
extern void rewind(FILE *__stream ) ;
extern int fseeko(FILE *__stream , __off64_t __off , int __whence )  __asm__("fseeko64")  ;
extern __off64_t ftello(FILE *__stream )  __asm__("ftello64")  ;
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos )  __asm__("fgetpos64")  ;
extern int fsetpos(FILE *__stream , fpos_t const   *__pos )  __asm__("fsetpos64")  ;
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
__inline static  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline static  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
extern void perror(char const   *__s ) ;
extern int sys_nerr ;
extern char const   * const  sys_errlist[] ;
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
extern FILE *popen(char const   *__command , char const   *__modes ) ;
extern int pclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "260\n");
  fflush(_coverage_fout);
  }
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  {
  fprintf(_coverage_fout, "261\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static int getchar(void) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "262\n");
  fflush(_coverage_fout);
  }
  tmp = _IO_getc(stdin);
  {
  fprintf(_coverage_fout, "263\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static int fgetc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "264\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "265\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "266\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __uflow(__fp);
  } else {
    {
    fprintf(_coverage_fout, "267\n");
    fflush(_coverage_fout);
    }
    tmp___3 = __fp->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "268\n");
    fflush(_coverage_fout);
    }
    (__fp->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "269\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
  {
  fprintf(_coverage_fout, "270\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline static int getc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "271\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "272\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "273\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __uflow(__fp);
  } else {
    {
    fprintf(_coverage_fout, "274\n");
    fflush(_coverage_fout);
    }
    tmp___3 = __fp->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "275\n");
    fflush(_coverage_fout);
    }
    (__fp->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "276\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
  {
  fprintf(_coverage_fout, "277\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline static int getchar_unlocked(void) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "278\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )stdin->_IO_read_ptr >= (unsigned int )stdin->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "279\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "280\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __uflow(stdin);
  } else {
    {
    fprintf(_coverage_fout, "281\n");
    fflush(_coverage_fout);
    }
    tmp___3 = stdin->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "282\n");
    fflush(_coverage_fout);
    }
    (stdin->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "283\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
  {
  fprintf(_coverage_fout, "284\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline static int putchar(int __c ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "285\n");
  fflush(_coverage_fout);
  }
  tmp = _IO_putc(__c, stdout);
  {
  fprintf(_coverage_fout, "286\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static int fputc_unlocked(int __c , FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "287\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "288\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "289\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
  } else {
    {
    fprintf(_coverage_fout, "290\n");
    fflush(_coverage_fout);
    }
    tmp___3 = __stream->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "291\n");
    fflush(_coverage_fout);
    }
    (__stream->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "292\n");
    fflush(_coverage_fout);
    }
    *tmp___3 = (char )__c;
    {
    fprintf(_coverage_fout, "293\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
  {
  fprintf(_coverage_fout, "294\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline static int putc_unlocked(int __c , FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "295\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "296\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "297\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
  } else {
    {
    fprintf(_coverage_fout, "298\n");
    fflush(_coverage_fout);
    }
    tmp___3 = __stream->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "299\n");
    fflush(_coverage_fout);
    }
    (__stream->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "300\n");
    fflush(_coverage_fout);
    }
    *tmp___3 = (char )__c;
    {
    fprintf(_coverage_fout, "301\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
  {
  fprintf(_coverage_fout, "302\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline static int putchar_unlocked(int __c ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "303\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )stdout->_IO_write_ptr >= (unsigned int )stdout->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "304\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "305\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __overflow(stdout, (int )((unsigned char )__c));
  } else {
    {
    fprintf(_coverage_fout, "306\n");
    fflush(_coverage_fout);
    }
    tmp___3 = stdout->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "307\n");
    fflush(_coverage_fout);
    }
    (stdout->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "308\n");
    fflush(_coverage_fout);
    }
    *tmp___3 = (char )__c;
    {
    fprintf(_coverage_fout, "309\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
  {
  fprintf(_coverage_fout, "310\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline static  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline static int feof_unlocked(FILE *__stream ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "311\n");
  fflush(_coverage_fout);
  }
  return ((__stream->_flags & 16) != 0);
}
}
__inline static  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
__inline static int ferror_unlocked(FILE *__stream ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "312\n");
  fflush(_coverage_fout);
  }
  return ((__stream->_flags & 32) != 0);
}
}
extern  __attribute__((__nothrow__)) int getrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit *__rlimits )  __asm__("getrlimit64")  ;
extern  __attribute__((__nothrow__)) int setrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit  const  *__rlimits )  __asm__("setrlimit64")  ;
extern  __attribute__((__nothrow__)) int getrusage(__rusage_who_t __who ,
                                                   struct rusage *__usage ) ;
extern  __attribute__((__nothrow__)) int getpriority(__priority_which_t __which ,
                                                     id_t __who ) ;
extern  __attribute__((__nothrow__)) int setpriority(__priority_which_t __which ,
                                                     id_t __who , int __prio ) ;
extern __pid_t wait(union wait *__stat_loc ) ;
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
extern int waitid(idtype_t __idtype , __id_t __id , siginfo_t *__infop ,
                  int __options ) ;
extern  __attribute__((__nothrow__)) __pid_t wait3(union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;
extern  __attribute__((__nothrow__)) __pid_t wait4(__pid_t __pid ,
                                                   union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;
static handler_t fcgi_handle_fdevent(void *s , void *ctx , int revents ) ;
int fastcgi_status_copy_procname(buffer *b , fcgi_extension_host *host ,
                                 fcgi_proc *proc ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "313\n");
  fflush(_coverage_fout);
  }
  buffer_copy_string(b, "fastcgi.backend.");
  {
  fprintf(_coverage_fout, "314\n");
  fflush(_coverage_fout);
  }
  buffer_append_string_buffer(b, (buffer const   *)host->id);
  {
  fprintf(_coverage_fout, "315\n");
  fflush(_coverage_fout);
  }
  if (proc) {
    {
    fprintf(_coverage_fout, "316\n");
    fflush(_coverage_fout);
    }
    buffer_append_string(b, ".");
    {
    fprintf(_coverage_fout, "317\n");
    fflush(_coverage_fout);
    }
    buffer_append_long(b, (long )proc->id);
  } else {
    {
    fprintf(_coverage_fout, "318\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "319\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int fastcgi_status_init(server *srv , buffer *b , fcgi_extension_host *host ,
                        fcgi_proc *proc ) 
{ 
  size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "320\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(b, host, proc);
  {
  fprintf(_coverage_fout, "321\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(b, ".disabled");
  {
  fprintf(_coverage_fout, "322\n");
  fflush(_coverage_fout);
  }
  if (b->used) {
    {
    fprintf(_coverage_fout, "323\n");
    fflush(_coverage_fout);
    }
    tmp = b->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "324\n");
    fflush(_coverage_fout);
    }
    tmp = 0U;
  }
  {
  fprintf(_coverage_fout, "325\n");
  fflush(_coverage_fout);
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp, 0);
  {
  fprintf(_coverage_fout, "326\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(b, host, proc);
  {
  fprintf(_coverage_fout, "327\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(b, ".died");
  {
  fprintf(_coverage_fout, "328\n");
  fflush(_coverage_fout);
  }
  if (b->used) {
    {
    fprintf(_coverage_fout, "329\n");
    fflush(_coverage_fout);
    }
    tmp___0 = b->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "330\n");
    fflush(_coverage_fout);
    }
    tmp___0 = 0U;
  }
  {
  fprintf(_coverage_fout, "331\n");
  fflush(_coverage_fout);
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___0, 0);
  {
  fprintf(_coverage_fout, "332\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(b, host, proc);
  {
  fprintf(_coverage_fout, "333\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(b, ".overloaded");
  {
  fprintf(_coverage_fout, "334\n");
  fflush(_coverage_fout);
  }
  if (b->used) {
    {
    fprintf(_coverage_fout, "335\n");
    fflush(_coverage_fout);
    }
    tmp___1 = b->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "336\n");
    fflush(_coverage_fout);
    }
    tmp___1 = 0U;
  }
  {
  fprintf(_coverage_fout, "337\n");
  fflush(_coverage_fout);
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___1, 0);
  {
  fprintf(_coverage_fout, "338\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(b, host, proc);
  {
  fprintf(_coverage_fout, "339\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(b, ".connected");
  {
  fprintf(_coverage_fout, "340\n");
  fflush(_coverage_fout);
  }
  if (b->used) {
    {
    fprintf(_coverage_fout, "341\n");
    fflush(_coverage_fout);
    }
    tmp___2 = b->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "342\n");
    fflush(_coverage_fout);
    }
    tmp___2 = 0U;
  }
  {
  fprintf(_coverage_fout, "343\n");
  fflush(_coverage_fout);
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___2, 0);
  {
  fprintf(_coverage_fout, "344\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(b, host, proc);
  {
  fprintf(_coverage_fout, "345\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(b, ".load");
  {
  fprintf(_coverage_fout, "346\n");
  fflush(_coverage_fout);
  }
  if (b->used) {
    {
    fprintf(_coverage_fout, "347\n");
    fflush(_coverage_fout);
    }
    tmp___3 = b->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "348\n");
    fflush(_coverage_fout);
    }
    tmp___3 = 0U;
  }
  {
  fprintf(_coverage_fout, "349\n");
  fflush(_coverage_fout);
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___3, 0);
  {
  fprintf(_coverage_fout, "350\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(b, host, (fcgi_proc *)((void *)0));
  {
  fprintf(_coverage_fout, "351\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(b, ".load");
  {
  fprintf(_coverage_fout, "352\n");
  fflush(_coverage_fout);
  }
  if (b->used) {
    {
    fprintf(_coverage_fout, "353\n");
    fflush(_coverage_fout);
    }
    tmp___4 = b->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "354\n");
    fflush(_coverage_fout);
    }
    tmp___4 = 0U;
  }
  {
  fprintf(_coverage_fout, "355\n");
  fflush(_coverage_fout);
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___4, 0);
  {
  fprintf(_coverage_fout, "356\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static handler_ctx *handler_ctx_init(void) 
{ 
  handler_ctx *hctx ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "357\n");
  fflush(_coverage_fout);
  }
  tmp = calloc(1U, (size_t )sizeof(*hctx));
  {
  fprintf(_coverage_fout, "358\n");
  fflush(_coverage_fout);
  }
  hctx = (handler_ctx *)tmp;
  {
  fprintf(_coverage_fout, "359\n");
  fflush(_coverage_fout);
  }
  if (! hctx) {
    {
    fprintf(_coverage_fout, "360\n");
    fflush(_coverage_fout);
    }
    __assert_fail("hctx", "mod_fastcgi.c", 417U, "handler_ctx_init");
  } else {
    {
    fprintf(_coverage_fout, "361\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "362\n");
  fflush(_coverage_fout);
  }
  hctx->fde_ndx = -1;
  {
  fprintf(_coverage_fout, "363\n");
  fflush(_coverage_fout);
  }
  hctx->response_header = buffer_init();
  {
  fprintf(_coverage_fout, "364\n");
  fflush(_coverage_fout);
  }
  hctx->request_id = 0U;
  {
  fprintf(_coverage_fout, "365\n");
  fflush(_coverage_fout);
  }
  hctx->state = (fcgi_connection_state_t )1;
  {
  fprintf(_coverage_fout, "366\n");
  fflush(_coverage_fout);
  }
  hctx->proc = (fcgi_proc *)((void *)0);
  {
  fprintf(_coverage_fout, "367\n");
  fflush(_coverage_fout);
  }
  hctx->fd = -1;
  {
  fprintf(_coverage_fout, "368\n");
  fflush(_coverage_fout);
  }
  hctx->reconnects = 0;
  {
  fprintf(_coverage_fout, "369\n");
  fflush(_coverage_fout);
  }
  hctx->send_content_body = 1;
  {
  fprintf(_coverage_fout, "370\n");
  fflush(_coverage_fout);
  }
  hctx->rb = chunkqueue_init();
  {
  fprintf(_coverage_fout, "371\n");
  fflush(_coverage_fout);
  }
  hctx->wb = chunkqueue_init();
  {
  fprintf(_coverage_fout, "372\n");
  fflush(_coverage_fout);
  }
  return (hctx);
}
}
static void handler_ctx_free(handler_ctx *hctx ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "373\n");
  fflush(_coverage_fout);
  }
  if (hctx->host) {
    {
    fprintf(_coverage_fout, "374\n");
    fflush(_coverage_fout);
    }
    ((hctx->host)->load) --;
    {
    fprintf(_coverage_fout, "375\n");
    fflush(_coverage_fout);
    }
    hctx->host = (fcgi_extension_host *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "376\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "377\n");
  fflush(_coverage_fout);
  }
  buffer_free(hctx->response_header);
  {
  fprintf(_coverage_fout, "378\n");
  fflush(_coverage_fout);
  }
  chunkqueue_free(hctx->rb);
  {
  fprintf(_coverage_fout, "379\n");
  fflush(_coverage_fout);
  }
  chunkqueue_free(hctx->wb);
  {
  fprintf(_coverage_fout, "380\n");
  fflush(_coverage_fout);
  }
  free((void *)hctx);
  {
  fprintf(_coverage_fout, "381\n");
  fflush(_coverage_fout);
  }
  return;
}
}
fcgi_proc *fastcgi_process_init(void) 
{ 
  fcgi_proc *f ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "382\n");
  fflush(_coverage_fout);
  }
  tmp = calloc(1U, (size_t )sizeof(*f));
  {
  fprintf(_coverage_fout, "383\n");
  fflush(_coverage_fout);
  }
  f = (fcgi_proc *)tmp;
  {
  fprintf(_coverage_fout, "384\n");
  fflush(_coverage_fout);
  }
  f->unixsocket = buffer_init();
  {
  fprintf(_coverage_fout, "385\n");
  fflush(_coverage_fout);
  }
  f->connection_name = buffer_init();
  {
  fprintf(_coverage_fout, "386\n");
  fflush(_coverage_fout);
  }
  f->prev = (struct fcgi_proc *)((void *)0);
  {
  fprintf(_coverage_fout, "387\n");
  fflush(_coverage_fout);
  }
  f->next = (struct fcgi_proc *)((void *)0);
  {
  fprintf(_coverage_fout, "388\n");
  fflush(_coverage_fout);
  }
  return (f);
}
}
void fastcgi_process_free(fcgi_proc *f ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "389\n");
  fflush(_coverage_fout);
  }
  if (! f) {
    {
    fprintf(_coverage_fout, "390\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "391\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "392\n");
  fflush(_coverage_fout);
  }
  fastcgi_process_free(f->next);
  {
  fprintf(_coverage_fout, "393\n");
  fflush(_coverage_fout);
  }
  buffer_free(f->unixsocket);
  {
  fprintf(_coverage_fout, "394\n");
  fflush(_coverage_fout);
  }
  buffer_free(f->connection_name);
  {
  fprintf(_coverage_fout, "395\n");
  fflush(_coverage_fout);
  }
  free((void *)f);
  {
  fprintf(_coverage_fout, "396\n");
  fflush(_coverage_fout);
  }
  return;
}
}
fcgi_extension_host *fastcgi_host_init(void) 
{ 
  fcgi_extension_host *f ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "397\n");
  fflush(_coverage_fout);
  }
  tmp = calloc(1U, (size_t )sizeof(*f));
  {
  fprintf(_coverage_fout, "398\n");
  fflush(_coverage_fout);
  }
  f = (fcgi_extension_host *)tmp;
  {
  fprintf(_coverage_fout, "399\n");
  fflush(_coverage_fout);
  }
  f->id = buffer_init();
  {
  fprintf(_coverage_fout, "400\n");
  fflush(_coverage_fout);
  }
  f->host = buffer_init();
  {
  fprintf(_coverage_fout, "401\n");
  fflush(_coverage_fout);
  }
  f->unixsocket = buffer_init();
  {
  fprintf(_coverage_fout, "402\n");
  fflush(_coverage_fout);
  }
  f->docroot = buffer_init();
  {
  fprintf(_coverage_fout, "403\n");
  fflush(_coverage_fout);
  }
  f->bin_path = buffer_init();
  {
  fprintf(_coverage_fout, "404\n");
  fflush(_coverage_fout);
  }
  f->bin_env = array_init();
  {
  fprintf(_coverage_fout, "405\n");
  fflush(_coverage_fout);
  }
  f->bin_env_copy = array_init();
  {
  fprintf(_coverage_fout, "406\n");
  fflush(_coverage_fout);
  }
  f->strip_request_uri = buffer_init();
  {
  fprintf(_coverage_fout, "407\n");
  fflush(_coverage_fout);
  }
  return (f);
}
}
void fastcgi_host_free(fcgi_extension_host *h ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "408\n");
  fflush(_coverage_fout);
  }
  if (! h) {
    {
    fprintf(_coverage_fout, "409\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "410\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "411\n");
  fflush(_coverage_fout);
  }
  buffer_free(h->id);
  {
  fprintf(_coverage_fout, "412\n");
  fflush(_coverage_fout);
  }
  buffer_free(h->host);
  {
  fprintf(_coverage_fout, "413\n");
  fflush(_coverage_fout);
  }
  buffer_free(h->unixsocket);
  {
  fprintf(_coverage_fout, "414\n");
  fflush(_coverage_fout);
  }
  buffer_free(h->docroot);
  {
  fprintf(_coverage_fout, "415\n");
  fflush(_coverage_fout);
  }
  buffer_free(h->bin_path);
  {
  fprintf(_coverage_fout, "416\n");
  fflush(_coverage_fout);
  }
  buffer_free(h->strip_request_uri);
  {
  fprintf(_coverage_fout, "417\n");
  fflush(_coverage_fout);
  }
  array_free(h->bin_env);
  {
  fprintf(_coverage_fout, "418\n");
  fflush(_coverage_fout);
  }
  array_free(h->bin_env_copy);
  {
  fprintf(_coverage_fout, "419\n");
  fflush(_coverage_fout);
  }
  fastcgi_process_free(h->first);
  {
  fprintf(_coverage_fout, "420\n");
  fflush(_coverage_fout);
  }
  fastcgi_process_free(h->unused_procs);
  {
  fprintf(_coverage_fout, "421\n");
  fflush(_coverage_fout);
  }
  free((void *)h);
  {
  fprintf(_coverage_fout, "422\n");
  fflush(_coverage_fout);
  }
  return;
}
}
fcgi_exts *fastcgi_extensions_init(void) 
{ 
  fcgi_exts *f ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "423\n");
  fflush(_coverage_fout);
  }
  tmp = calloc(1U, (size_t )sizeof(*f));
  {
  fprintf(_coverage_fout, "424\n");
  fflush(_coverage_fout);
  }
  f = (fcgi_exts *)tmp;
  {
  fprintf(_coverage_fout, "425\n");
  fflush(_coverage_fout);
  }
  return (f);
}
}
void fastcgi_extensions_free(fcgi_exts *f ) 
{ 
  size_t i ;
  fcgi_extension *fe ;
  size_t j ;
  fcgi_extension_host *h ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "426\n");
  fflush(_coverage_fout);
  }
  if (! f) {
    {
    fprintf(_coverage_fout, "427\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "428\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "429\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "430\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "431\n");
    fflush(_coverage_fout);
    }
    if (i < f->used) {
      {
      fprintf(_coverage_fout, "432\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "433\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "434\n");
    fflush(_coverage_fout);
    }
    fe = *(f->exts + i);
    {
    fprintf(_coverage_fout, "435\n");
    fflush(_coverage_fout);
    }
    j = 0U;
    {
    fprintf(_coverage_fout, "436\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "437\n");
      fflush(_coverage_fout);
      }
      if (j < fe->used) {
        {
        fprintf(_coverage_fout, "438\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "439\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "440\n");
      fflush(_coverage_fout);
      }
      h = *(fe->hosts + j);
      {
      fprintf(_coverage_fout, "441\n");
      fflush(_coverage_fout);
      }
      fastcgi_host_free(h);
      {
      fprintf(_coverage_fout, "442\n");
      fflush(_coverage_fout);
      }
      j ++;
    }
    {
    fprintf(_coverage_fout, "443\n");
    fflush(_coverage_fout);
    }
    buffer_free(fe->key);
    {
    fprintf(_coverage_fout, "444\n");
    fflush(_coverage_fout);
    }
    free((void *)fe->hosts);
    {
    fprintf(_coverage_fout, "445\n");
    fflush(_coverage_fout);
    }
    free((void *)fe);
    {
    fprintf(_coverage_fout, "446\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "447\n");
  fflush(_coverage_fout);
  }
  free((void *)f->exts);
  {
  fprintf(_coverage_fout, "448\n");
  fflush(_coverage_fout);
  }
  free((void *)f);
  {
  fprintf(_coverage_fout, "449\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int fastcgi_extension_insert(fcgi_exts *ext , buffer *key ,
                             fcgi_extension_host *fh ) 
{ 
  fcgi_extension *fe ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "450\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "451\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "452\n");
    fflush(_coverage_fout);
    }
    if (i < ext->used) {
      {
      fprintf(_coverage_fout, "453\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "454\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "455\n");
    fflush(_coverage_fout);
    }
    tmp = buffer_is_equal(key, (*(ext->exts + i))->key);
    {
    fprintf(_coverage_fout, "456\n");
    fflush(_coverage_fout);
    }
    if (tmp) {
      {
      fprintf(_coverage_fout, "457\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "458\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "459\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "460\n");
  fflush(_coverage_fout);
  }
  if (i == ext->used) {
    {
    fprintf(_coverage_fout, "461\n");
    fflush(_coverage_fout);
    }
    tmp___0 = calloc(1U, (size_t )sizeof(*fe));
    {
    fprintf(_coverage_fout, "462\n");
    fflush(_coverage_fout);
    }
    fe = (fcgi_extension *)tmp___0;
    {
    fprintf(_coverage_fout, "463\n");
    fflush(_coverage_fout);
    }
    if (! fe) {
      {
      fprintf(_coverage_fout, "464\n");
      fflush(_coverage_fout);
      }
      __assert_fail("fe", "mod_fastcgi.c", 565U, "fastcgi_extension_insert");
    } else {
      {
      fprintf(_coverage_fout, "465\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "466\n");
    fflush(_coverage_fout);
    }
    fe->key = buffer_init();
    {
    fprintf(_coverage_fout, "467\n");
    fflush(_coverage_fout);
    }
    fe->last_used_ndx = -1;
    {
    fprintf(_coverage_fout, "468\n");
    fflush(_coverage_fout);
    }
    buffer_copy_string_buffer(fe->key, (buffer const   *)key);
    {
    fprintf(_coverage_fout, "469\n");
    fflush(_coverage_fout);
    }
    if (ext->size == 0U) {
      {
      fprintf(_coverage_fout, "470\n");
      fflush(_coverage_fout);
      }
      ext->size = 8U;
      {
      fprintf(_coverage_fout, "471\n");
      fflush(_coverage_fout);
      }
      tmp___1 = malloc((size_t )((unsigned long )ext->size * sizeof(*(ext->exts))));
      {
      fprintf(_coverage_fout, "472\n");
      fflush(_coverage_fout);
      }
      ext->exts = (fcgi_extension **)tmp___1;
      {
      fprintf(_coverage_fout, "473\n");
      fflush(_coverage_fout);
      }
      if (! ext->exts) {
        {
        fprintf(_coverage_fout, "474\n");
        fflush(_coverage_fout);
        }
        __assert_fail("ext->exts", "mod_fastcgi.c", 575U,
                      "fastcgi_extension_insert");
      } else {
        {
        fprintf(_coverage_fout, "475\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "476\n");
      fflush(_coverage_fout);
      }
      if (ext->used == ext->size) {
        {
        fprintf(_coverage_fout, "477\n");
        fflush(_coverage_fout);
        }
        ext->size += 8U;
        {
        fprintf(_coverage_fout, "478\n");
        fflush(_coverage_fout);
        }
        tmp___2 = realloc((void *)ext->exts,
                          (size_t )((unsigned long )ext->size * sizeof(*(ext->exts))));
        {
        fprintf(_coverage_fout, "479\n");
        fflush(_coverage_fout);
        }
        ext->exts = (fcgi_extension **)tmp___2;
        {
        fprintf(_coverage_fout, "480\n");
        fflush(_coverage_fout);
        }
        if (! ext->exts) {
          {
          fprintf(_coverage_fout, "481\n");
          fflush(_coverage_fout);
          }
          __assert_fail("ext->exts", "mod_fastcgi.c", 579U,
                        "fastcgi_extension_insert");
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
    }
    {
    fprintf(_coverage_fout, "484\n");
    fflush(_coverage_fout);
    }
    tmp___3 = ext->used;
    {
    fprintf(_coverage_fout, "485\n");
    fflush(_coverage_fout);
    }
    (ext->used) ++;
    {
    fprintf(_coverage_fout, "486\n");
    fflush(_coverage_fout);
    }
    *(ext->exts + tmp___3) = fe;
  } else {
    {
    fprintf(_coverage_fout, "487\n");
    fflush(_coverage_fout);
    }
    fe = *(ext->exts + i);
  }
  {
  fprintf(_coverage_fout, "488\n");
  fflush(_coverage_fout);
  }
  if (fe->size == 0U) {
    {
    fprintf(_coverage_fout, "489\n");
    fflush(_coverage_fout);
    }
    fe->size = 4U;
    {
    fprintf(_coverage_fout, "490\n");
    fflush(_coverage_fout);
    }
    tmp___4 = malloc((size_t )((unsigned long )fe->size * sizeof(*(fe->hosts))));
    {
    fprintf(_coverage_fout, "491\n");
    fflush(_coverage_fout);
    }
    fe->hosts = (fcgi_extension_host **)tmp___4;
    {
    fprintf(_coverage_fout, "492\n");
    fflush(_coverage_fout);
    }
    if (! fe->hosts) {
      {
      fprintf(_coverage_fout, "493\n");
      fflush(_coverage_fout);
      }
      __assert_fail("fe->hosts", "mod_fastcgi.c", 589U,
                    "fastcgi_extension_insert");
    } else {
      {
      fprintf(_coverage_fout, "494\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "495\n");
    fflush(_coverage_fout);
    }
    if (fe->size == fe->used) {
      {
      fprintf(_coverage_fout, "496\n");
      fflush(_coverage_fout);
      }
      fe->size += 4U;
      {
      fprintf(_coverage_fout, "497\n");
      fflush(_coverage_fout);
      }
      tmp___5 = realloc((void *)fe->hosts,
                        (size_t )((unsigned long )fe->size * sizeof(*(fe->hosts))));
      {
      fprintf(_coverage_fout, "498\n");
      fflush(_coverage_fout);
      }
      fe->hosts = (fcgi_extension_host **)tmp___5;
      {
      fprintf(_coverage_fout, "499\n");
      fflush(_coverage_fout);
      }
      if (! fe->hosts) {
        {
        fprintf(_coverage_fout, "500\n");
        fflush(_coverage_fout);
        }
        __assert_fail("fe->hosts", "mod_fastcgi.c", 593U,
                      "fastcgi_extension_insert");
      } else {
        {
        fprintf(_coverage_fout, "501\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "502\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "503\n");
  fflush(_coverage_fout);
  }
  tmp___6 = fe->used;
  {
  fprintf(_coverage_fout, "504\n");
  fflush(_coverage_fout);
  }
  (fe->used) ++;
  {
  fprintf(_coverage_fout, "505\n");
  fflush(_coverage_fout);
  }
  *(fe->hosts + tmp___6) = fh;
  {
  fprintf(_coverage_fout, "506\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static void *mod_fastcgi_init(void) 
{ 
  plugin_data *p ;
  void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "507\n");
  fflush(_coverage_fout);
  }
  tmp = calloc(1U, (size_t )sizeof(*p));
  {
  fprintf(_coverage_fout, "508\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)tmp;
  {
  fprintf(_coverage_fout, "509\n");
  fflush(_coverage_fout);
  }
  p->fcgi_env = buffer_init();
  {
  fprintf(_coverage_fout, "510\n");
  fflush(_coverage_fout);
  }
  p->path = buffer_init();
  {
  fprintf(_coverage_fout, "511\n");
  fflush(_coverage_fout);
  }
  p->parse_response = buffer_init();
  {
  fprintf(_coverage_fout, "512\n");
  fflush(_coverage_fout);
  }
  p->statuskey = buffer_init();
  {
  fprintf(_coverage_fout, "513\n");
  fflush(_coverage_fout);
  }
  return ((void *)p);
}
}
static handler_t mod_fastcgi_free(server *srv , void *p_d ) 
{ 
  plugin_data *p ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "514\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)p_d;
  {
  fprintf(_coverage_fout, "515\n");
  fflush(_coverage_fout);
  }
  r = & p->fcgi_request_id;
  {
  fprintf(_coverage_fout, "516\n");
  fflush(_coverage_fout);
  }
  if (r->ptr) {
    {
    fprintf(_coverage_fout, "517\n");
    fflush(_coverage_fout);
    }
    free((void *)r->ptr);
  } else {
    {
    fprintf(_coverage_fout, "518\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "519\n");
  fflush(_coverage_fout);
  }
  buffer_free(p->fcgi_env);
  {
  fprintf(_coverage_fout, "520\n");
  fflush(_coverage_fout);
  }
  buffer_free(p->path);
  {
  fprintf(_coverage_fout, "521\n");
  fflush(_coverage_fout);
  }
  buffer_free(p->parse_response);
  {
  fprintf(_coverage_fout, "522\n");
  fflush(_coverage_fout);
  }
  buffer_free(p->statuskey);
  {
  fprintf(_coverage_fout, "523\n");
  fflush(_coverage_fout);
  }
  if (p->config_storage) {
    {
    fprintf(_coverage_fout, "524\n");
    fflush(_coverage_fout);
    }
    i = 0U;
    {
    fprintf(_coverage_fout, "525\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "526\n");
      fflush(_coverage_fout);
      }
      if (i < (srv->config_context)->used) {
        {
        fprintf(_coverage_fout, "527\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "528\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "529\n");
      fflush(_coverage_fout);
      }
      s = *(p->config_storage + i);
      {
      fprintf(_coverage_fout, "530\n");
      fflush(_coverage_fout);
      }
      if (! s) {
        {
        fprintf(_coverage_fout, "531\n");
        fflush(_coverage_fout);
        }
        goto __Cont;
      } else {
        {
        fprintf(_coverage_fout, "532\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "533\n");
      fflush(_coverage_fout);
      }
      exts = s->exts;
      {
      fprintf(_coverage_fout, "534\n");
      fflush(_coverage_fout);
      }
      j = 0U;
      {
      fprintf(_coverage_fout, "535\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "536\n");
        fflush(_coverage_fout);
        }
        if (j < exts->used) {
          {
          fprintf(_coverage_fout, "537\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "538\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "539\n");
        fflush(_coverage_fout);
        }
        ex = *(exts->exts + j);
        {
        fprintf(_coverage_fout, "540\n");
        fflush(_coverage_fout);
        }
        n = 0U;
        {
        fprintf(_coverage_fout, "541\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "542\n");
          fflush(_coverage_fout);
          }
          if (n < ex->used) {
            {
            fprintf(_coverage_fout, "543\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "544\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "545\n");
          fflush(_coverage_fout);
          }
          host = *(ex->hosts + n);
          {
          fprintf(_coverage_fout, "546\n");
          fflush(_coverage_fout);
          }
          proc = host->first;
          {
          fprintf(_coverage_fout, "547\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "548\n");
            fflush(_coverage_fout);
            }
            if (proc) {
              {
              fprintf(_coverage_fout, "549\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "550\n");
              fflush(_coverage_fout);
              }
              break;
            }
            {
            fprintf(_coverage_fout, "551\n");
            fflush(_coverage_fout);
            }
            if (proc->pid != 0) {
              {
              fprintf(_coverage_fout, "552\n");
              fflush(_coverage_fout);
              }
              kill(proc->pid, (int )host->kill_signal);
            } else {
              {
              fprintf(_coverage_fout, "553\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "554\n");
            fflush(_coverage_fout);
            }
            if (proc->is_local) {
              {
              fprintf(_coverage_fout, "555\n");
              fflush(_coverage_fout);
              }
              tmp = buffer_is_empty(proc->unixsocket);
              {
              fprintf(_coverage_fout, "556\n");
              fflush(_coverage_fout);
              }
              if (! tmp) {
                {
                fprintf(_coverage_fout, "557\n");
                fflush(_coverage_fout);
                }
                unlink((char const   *)(proc->unixsocket)->ptr);
              } else {
                {
                fprintf(_coverage_fout, "558\n");
                fflush(_coverage_fout);
                }

              }
            } else {
              {
              fprintf(_coverage_fout, "559\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "560\n");
            fflush(_coverage_fout);
            }
            proc = proc->next;
          }
          {
          fprintf(_coverage_fout, "561\n");
          fflush(_coverage_fout);
          }
          proc = host->unused_procs;
          {
          fprintf(_coverage_fout, "562\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "563\n");
            fflush(_coverage_fout);
            }
            if (proc) {
              {
              fprintf(_coverage_fout, "564\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "565\n");
              fflush(_coverage_fout);
              }
              break;
            }
            {
            fprintf(_coverage_fout, "566\n");
            fflush(_coverage_fout);
            }
            if (proc->pid != 0) {
              {
              fprintf(_coverage_fout, "567\n");
              fflush(_coverage_fout);
              }
              kill(proc->pid, (int )host->kill_signal);
            } else {
              {
              fprintf(_coverage_fout, "568\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "569\n");
            fflush(_coverage_fout);
            }
            if (proc->is_local) {
              {
              fprintf(_coverage_fout, "570\n");
              fflush(_coverage_fout);
              }
              tmp___0 = buffer_is_empty(proc->unixsocket);
              {
              fprintf(_coverage_fout, "571\n");
              fflush(_coverage_fout);
              }
              if (! tmp___0) {
                {
                fprintf(_coverage_fout, "572\n");
                fflush(_coverage_fout);
                }
                unlink((char const   *)(proc->unixsocket)->ptr);
              } else {
                {
                fprintf(_coverage_fout, "573\n");
                fflush(_coverage_fout);
                }

              }
            } else {
              {
              fprintf(_coverage_fout, "574\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "575\n");
            fflush(_coverage_fout);
            }
            proc = proc->next;
          }
          {
          fprintf(_coverage_fout, "576\n");
          fflush(_coverage_fout);
          }
          n ++;
        }
        {
        fprintf(_coverage_fout, "577\n");
        fflush(_coverage_fout);
        }
        j ++;
      }
      {
      fprintf(_coverage_fout, "578\n");
      fflush(_coverage_fout);
      }
      fastcgi_extensions_free(s->exts);
      {
      fprintf(_coverage_fout, "579\n");
      fflush(_coverage_fout);
      }
      array_free(s->ext_mapping);
      {
      fprintf(_coverage_fout, "580\n");
      fflush(_coverage_fout);
      }
      free((void *)s);
      {
      fprintf(_coverage_fout, "581\n");
      fflush(_coverage_fout);
      }
      __Cont: 
      i ++;
    }
    {
    fprintf(_coverage_fout, "582\n");
    fflush(_coverage_fout);
    }
    free((void *)p->config_storage);
  } else {
    {
    fprintf(_coverage_fout, "583\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "584\n");
  fflush(_coverage_fout);
  }
  free((void *)p);
  {
  fprintf(_coverage_fout, "585\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )1);
}
}
static int env_add(char_array *env , char const   *key , size_t key_len ,
                   char const   *val , size_t val_len ) 
{ 
  char *dst ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  size_t tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "586\n");
  fflush(_coverage_fout);
  }
  if (! key) {
    {
    fprintf(_coverage_fout, "587\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "588\n");
    fflush(_coverage_fout);
    }
    if (! val) {
      {
      fprintf(_coverage_fout, "589\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "590\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "591\n");
  fflush(_coverage_fout);
  }
  tmp = malloc((key_len + val_len) + 3U);
  {
  fprintf(_coverage_fout, "592\n");
  fflush(_coverage_fout);
  }
  dst = (char *)tmp;
  {
  fprintf(_coverage_fout, "593\n");
  fflush(_coverage_fout);
  }
  memcpy((void */* __restrict  */)((void *)dst),
         (void const   */* __restrict  */)((void const   *)key), key_len);
  {
  fprintf(_coverage_fout, "594\n");
  fflush(_coverage_fout);
  }
  *(dst + key_len) = (char )'=';
  {
  fprintf(_coverage_fout, "595\n");
  fflush(_coverage_fout);
  }
  memcpy((void */* __restrict  */)((void *)((dst + key_len) + 1)),
         (void const   */* __restrict  */)((void const   *)val), val_len + 1U);
  {
  fprintf(_coverage_fout, "596\n");
  fflush(_coverage_fout);
  }
  if (env->size == 0U) {
    {
    fprintf(_coverage_fout, "597\n");
    fflush(_coverage_fout);
    }
    env->size = 16U;
    {
    fprintf(_coverage_fout, "598\n");
    fflush(_coverage_fout);
    }
    tmp___0 = malloc((size_t )((unsigned long )env->size * sizeof(*(env->ptr))));
    {
    fprintf(_coverage_fout, "599\n");
    fflush(_coverage_fout);
    }
    env->ptr = (char **)tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "600\n");
    fflush(_coverage_fout);
    }
    if (env->size == env->used + 1U) {
      {
      fprintf(_coverage_fout, "601\n");
      fflush(_coverage_fout);
      }
      env->size += 16U;
      {
      fprintf(_coverage_fout, "602\n");
      fflush(_coverage_fout);
      }
      tmp___1 = realloc((void *)env->ptr,
                        (size_t )((unsigned long )env->size * sizeof(*(env->ptr))));
      {
      fprintf(_coverage_fout, "603\n");
      fflush(_coverage_fout);
      }
      env->ptr = (char **)tmp___1;
    } else {
      {
      fprintf(_coverage_fout, "604\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "605\n");
  fflush(_coverage_fout);
  }
  tmp___2 = env->used;
  {
  fprintf(_coverage_fout, "606\n");
  fflush(_coverage_fout);
  }
  (env->used) ++;
  {
  fprintf(_coverage_fout, "607\n");
  fflush(_coverage_fout);
  }
  *(env->ptr + tmp___2) = dst;
  {
  fprintf(_coverage_fout, "608\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static int parse_binpath(char_array *env , buffer *b ) 
{ 
  char *start ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "609\n");
  fflush(_coverage_fout);
  }
  start = b->ptr;
  {
  fprintf(_coverage_fout, "610\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "611\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "612\n");
    fflush(_coverage_fout);
    }
    if (i < b->used - 1U) {
      {
      fprintf(_coverage_fout, "613\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "614\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "615\n");
    fflush(_coverage_fout);
    }
    switch ((int )*(b->ptr + i)) {
    {
    fprintf(_coverage_fout, "616\n");
    fflush(_coverage_fout);
    }
    case 9: 
    case 32: 
    if (env->size == 0U) {
      {
      fprintf(_coverage_fout, "617\n");
      fflush(_coverage_fout);
      }
      env->size = 16U;
      {
      fprintf(_coverage_fout, "618\n");
      fflush(_coverage_fout);
      }
      tmp = malloc((size_t )((unsigned long )env->size * sizeof(*(env->ptr))));
      {
      fprintf(_coverage_fout, "619\n");
      fflush(_coverage_fout);
      }
      env->ptr = (char **)tmp;
    } else {
      {
      fprintf(_coverage_fout, "620\n");
      fflush(_coverage_fout);
      }
      if (env->size == env->used) {
        {
        fprintf(_coverage_fout, "621\n");
        fflush(_coverage_fout);
        }
        env->size += 16U;
        {
        fprintf(_coverage_fout, "622\n");
        fflush(_coverage_fout);
        }
        tmp___0 = realloc((void *)env->ptr,
                          (size_t )((unsigned long )env->size * sizeof(*(env->ptr))));
        {
        fprintf(_coverage_fout, "623\n");
        fflush(_coverage_fout);
        }
        env->ptr = (char **)tmp___0;
      } else {
        {
        fprintf(_coverage_fout, "624\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "625\n");
    fflush(_coverage_fout);
    }
    *(b->ptr + i) = (char )'\000';
    {
    fprintf(_coverage_fout, "626\n");
    fflush(_coverage_fout);
    }
    tmp___1 = env->used;
    {
    fprintf(_coverage_fout, "627\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "628\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___1) = start;
    {
    fprintf(_coverage_fout, "629\n");
    fflush(_coverage_fout);
    }
    start = (b->ptr + i) + 1;
    {
    fprintf(_coverage_fout, "630\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "631\n");
    fflush(_coverage_fout);
    }
    default: ;
    {
    fprintf(_coverage_fout, "632\n");
    fflush(_coverage_fout);
    }
    break;
    }
    {
    fprintf(_coverage_fout, "633\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "634\n");
  fflush(_coverage_fout);
  }
  if (env->size == 0U) {
    {
    fprintf(_coverage_fout, "635\n");
    fflush(_coverage_fout);
    }
    env->size = 16U;
    {
    fprintf(_coverage_fout, "636\n");
    fflush(_coverage_fout);
    }
    tmp___2 = malloc((size_t )((unsigned long )env->size * sizeof(*(env->ptr))));
    {
    fprintf(_coverage_fout, "637\n");
    fflush(_coverage_fout);
    }
    env->ptr = (char **)tmp___2;
  } else {
    {
    fprintf(_coverage_fout, "638\n");
    fflush(_coverage_fout);
    }
    if (env->size == env->used) {
      {
      fprintf(_coverage_fout, "639\n");
      fflush(_coverage_fout);
      }
      env->size += 16U;
      {
      fprintf(_coverage_fout, "640\n");
      fflush(_coverage_fout);
      }
      tmp___3 = realloc((void *)env->ptr,
                        (size_t )((unsigned long )env->size * sizeof(*(env->ptr))));
      {
      fprintf(_coverage_fout, "641\n");
      fflush(_coverage_fout);
      }
      env->ptr = (char **)tmp___3;
    } else {
      {
      fprintf(_coverage_fout, "642\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "643\n");
  fflush(_coverage_fout);
  }
  tmp___4 = env->used;
  {
  fprintf(_coverage_fout, "644\n");
  fflush(_coverage_fout);
  }
  (env->used) ++;
  {
  fprintf(_coverage_fout, "645\n");
  fflush(_coverage_fout);
  }
  *(env->ptr + tmp___4) = start;
  {
  fprintf(_coverage_fout, "646\n");
  fflush(_coverage_fout);
  }
  if (env->size == 0U) {
    {
    fprintf(_coverage_fout, "647\n");
    fflush(_coverage_fout);
    }
    env->size = 16U;
    {
    fprintf(_coverage_fout, "648\n");
    fflush(_coverage_fout);
    }
    tmp___5 = malloc((size_t )((unsigned long )env->size * sizeof(*(env->ptr))));
    {
    fprintf(_coverage_fout, "649\n");
    fflush(_coverage_fout);
    }
    env->ptr = (char **)tmp___5;
  } else {
    {
    fprintf(_coverage_fout, "650\n");
    fflush(_coverage_fout);
    }
    if (env->size == env->used) {
      {
      fprintf(_coverage_fout, "651\n");
      fflush(_coverage_fout);
      }
      env->size += 16U;
      {
      fprintf(_coverage_fout, "652\n");
      fflush(_coverage_fout);
      }
      tmp___6 = realloc((void *)env->ptr,
                        (size_t )((unsigned long )env->size * sizeof(*(env->ptr))));
      {
      fprintf(_coverage_fout, "653\n");
      fflush(_coverage_fout);
      }
      env->ptr = (char **)tmp___6;
    } else {
      {
      fprintf(_coverage_fout, "654\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "655\n");
  fflush(_coverage_fout);
  }
  tmp___7 = env->used;
  {
  fprintf(_coverage_fout, "656\n");
  fflush(_coverage_fout);
  }
  (env->used) ++;
  {
  fprintf(_coverage_fout, "657\n");
  fflush(_coverage_fout);
  }
  *(env->ptr + tmp___7) = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "658\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static int fcgi_spawn_connection(server *srv , plugin_data *p ,
                                 fcgi_extension_host *host , fcgi_proc *proc ) 
{ 
  int fcgi_fd ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "659\n");
  fflush(_coverage_fout);
  }
  tv.tv_sec = (__time_t )0;
  {
  fprintf(_coverage_fout, "660\n");
  fflush(_coverage_fout);
  }
  tv.tv_usec = (__suseconds_t )100000;
  {
  fprintf(_coverage_fout, "661\n");
  fflush(_coverage_fout);
  }
  if (p->conf.debug) {
    {
    fprintf(_coverage_fout, "662\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 788U, "sdb", "new proc, socket:",
                    proc->port, proc->unixsocket);
  } else {
    {
    fprintf(_coverage_fout, "663\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "664\n");
  fflush(_coverage_fout);
  }
  tmp___2 = buffer_is_empty(proc->unixsocket);
  {
  fprintf(_coverage_fout, "665\n");
  fflush(_coverage_fout);
  }
  if (tmp___2) {
    {
    fprintf(_coverage_fout, "666\n");
    fflush(_coverage_fout);
    }
    fcgi_addr_in.sin_family = (unsigned short)2;
    {
    fprintf(_coverage_fout, "667\n");
    fflush(_coverage_fout);
    }
    tmp___1 = buffer_is_empty(host->host);
    {
    fprintf(_coverage_fout, "668\n");
    fflush(_coverage_fout);
    }
    if (tmp___1) {
      {
      fprintf(_coverage_fout, "669\n");
      fflush(_coverage_fout);
      }
      __x = 0U;
      {
      fprintf(_coverage_fout, "670\n");
      fflush(_coverage_fout);
      }
      __asm__  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
      {
      fprintf(_coverage_fout, "671\n");
      fflush(_coverage_fout);
      }
      fcgi_addr_in.sin_addr.s_addr = __v;
    } else {
      {
      fprintf(_coverage_fout, "672\n");
      fflush(_coverage_fout);
      }
      __x___0 = 0U;
      {
      fprintf(_coverage_fout, "673\n");
      fflush(_coverage_fout);
      }
      __asm__  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
      {
      fprintf(_coverage_fout, "674\n");
      fflush(_coverage_fout);
      }
      fcgi_addr_in.sin_addr.s_addr = __v___0;
      {
      fprintf(_coverage_fout, "675\n");
      fflush(_coverage_fout);
      }
      he = gethostbyname((char const   *)(host->host)->ptr);
      {
      fprintf(_coverage_fout, "676\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )((void *)0) == (unsigned int )he) {
        {
        fprintf(_coverage_fout, "677\n");
        fflush(_coverage_fout);
        }
        tmp___0 = __h_errno_location();
        {
        fprintf(_coverage_fout, "678\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 829U, "sdb",
                        "gethostbyname failed: ", *tmp___0, host->host);
        {
        fprintf(_coverage_fout, "679\n");
        fflush(_coverage_fout);
        }
        return (-1);
      } else {
        {
        fprintf(_coverage_fout, "680\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "681\n");
      fflush(_coverage_fout);
      }
      if (he->h_addrtype != 2) {
        {
        fprintf(_coverage_fout, "682\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 836U, "sd",
                        "addr-type != AF_INET: ", he->h_addrtype);
        {
        fprintf(_coverage_fout, "683\n");
        fflush(_coverage_fout);
        }
        return (-1);
      } else {
        {
        fprintf(_coverage_fout, "684\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "685\n");
      fflush(_coverage_fout);
      }
      if ((unsigned long )((unsigned int )he->h_length) != sizeof(struct in_addr )) {
        {
        fprintf(_coverage_fout, "686\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 841U, "sd",
                        "addr-length != sizeof(in_addr): ", he->h_length);
        {
        fprintf(_coverage_fout, "687\n");
        fflush(_coverage_fout);
        }
        return (-1);
      } else {
        {
        fprintf(_coverage_fout, "688\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "689\n");
      fflush(_coverage_fout);
      }
      memcpy((void */* __restrict  */)((void *)(& fcgi_addr_in.sin_addr.s_addr)),
             (void const   */* __restrict  */)((void const   *)*(he->h_addr_list + 0)),
             (unsigned int )he->h_length);
    }
    {
    fprintf(_coverage_fout, "690\n");
    fflush(_coverage_fout);
    }
    __x___1 = (unsigned short )proc->port;
    {
    fprintf(_coverage_fout, "691\n");
    fflush(_coverage_fout);
    }
    __asm__  ("rorw $8, %w0": "=r" (__v___1): "0" (__x___1): "cc");
    {
    fprintf(_coverage_fout, "692\n");
    fflush(_coverage_fout);
    }
    fcgi_addr_in.sin_port = __v___1;
    {
    fprintf(_coverage_fout, "693\n");
    fflush(_coverage_fout);
    }
    servlen = (socklen_t )sizeof(fcgi_addr_in);
    {
    fprintf(_coverage_fout, "694\n");
    fflush(_coverage_fout);
    }
    socket_type = 2;
    {
    fprintf(_coverage_fout, "695\n");
    fflush(_coverage_fout);
    }
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_in);
    {
    fprintf(_coverage_fout, "696\n");
    fflush(_coverage_fout);
    }
    buffer_copy_string(proc->connection_name, "tcp:");
    {
    fprintf(_coverage_fout, "697\n");
    fflush(_coverage_fout);
    }
    buffer_append_string_buffer(proc->connection_name,
                                (buffer const   *)host->host);
    {
    fprintf(_coverage_fout, "698\n");
    fflush(_coverage_fout);
    }
    buffer_append_string(proc->connection_name, ":");
    {
    fprintf(_coverage_fout, "699\n");
    fflush(_coverage_fout);
    }
    buffer_append_long(proc->connection_name, (long )proc->port);
  } else {
    {
    fprintf(_coverage_fout, "700\n");
    fflush(_coverage_fout);
    }
    memset((void *)(& fcgi_addr), 0, (size_t )sizeof(fcgi_addr));
    {
    fprintf(_coverage_fout, "701\n");
    fflush(_coverage_fout);
    }
    fcgi_addr_un.sun_family = (unsigned short)1;
    {
    fprintf(_coverage_fout, "702\n");
    fflush(_coverage_fout);
    }
    strcpy((char */* __restrict  */)(fcgi_addr_un.sun_path),
           (char const   */* __restrict  */)((char const   *)(proc->unixsocket)->ptr));
    {
    fprintf(_coverage_fout, "703\n");
    fflush(_coverage_fout);
    }
    tmp = strlen((char const   *)(fcgi_addr_un.sun_path));
    {
    fprintf(_coverage_fout, "704\n");
    fflush(_coverage_fout);
    }
    servlen = (unsigned int )(((struct sockaddr_un *)0)->sun_path) + tmp;
    {
    fprintf(_coverage_fout, "705\n");
    fflush(_coverage_fout);
    }
    socket_type = 1;
    {
    fprintf(_coverage_fout, "706\n");
    fflush(_coverage_fout);
    }
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_un);
    {
    fprintf(_coverage_fout, "707\n");
    fflush(_coverage_fout);
    }
    buffer_copy_string(proc->connection_name, "unix:");
    {
    fprintf(_coverage_fout, "708\n");
    fflush(_coverage_fout);
    }
    buffer_append_string_buffer(proc->connection_name,
                                (buffer const   *)proc->unixsocket);
  }
  {
  fprintf(_coverage_fout, "709\n");
  fflush(_coverage_fout);
  }
  fcgi_fd = socket(socket_type, 1, 0);
  {
  fprintf(_coverage_fout, "710\n");
  fflush(_coverage_fout);
  }
  if (-1 == fcgi_fd) {
    {
    fprintf(_coverage_fout, "711\n");
    fflush(_coverage_fout);
    }
    tmp___3 = __errno_location();
    {
    fprintf(_coverage_fout, "712\n");
    fflush(_coverage_fout);
    }
    tmp___4 = strerror(*tmp___3);
    {
    fprintf(_coverage_fout, "713\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 861U, "ss", "failed:", tmp___4);
    {
    fprintf(_coverage_fout, "714\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "715\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "716\n");
  fflush(_coverage_fout);
  }
  tmp___60 = connect(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
  {
  fprintf(_coverage_fout, "717\n");
  fflush(_coverage_fout);
  }
  if (-1 == tmp___60) {
    {
    fprintf(_coverage_fout, "718\n");
    fflush(_coverage_fout);
    }
    tmp___5 = __errno_location();
    {
    fprintf(_coverage_fout, "719\n");
    fflush(_coverage_fout);
    }
    if (*tmp___5 != 2) {
      {
      fprintf(_coverage_fout, "720\n");
      fflush(_coverage_fout);
      }
      tmp___6 = buffer_is_empty(proc->unixsocket);
      {
      fprintf(_coverage_fout, "721\n");
      fflush(_coverage_fout);
      }
      if (! tmp___6) {
        {
        fprintf(_coverage_fout, "722\n");
        fflush(_coverage_fout);
        }
        unlink((char const   *)(proc->unixsocket)->ptr);
      } else {
        {
        fprintf(_coverage_fout, "723\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "724\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "725\n");
    fflush(_coverage_fout);
    }
    close(fcgi_fd);
    {
    fprintf(_coverage_fout, "726\n");
    fflush(_coverage_fout);
    }
    fcgi_fd = socket(socket_type, 1, 0);
    {
    fprintf(_coverage_fout, "727\n");
    fflush(_coverage_fout);
    }
    if (-1 == fcgi_fd) {
      {
      fprintf(_coverage_fout, "728\n");
      fflush(_coverage_fout);
      }
      tmp___7 = __errno_location();
      {
      fprintf(_coverage_fout, "729\n");
      fflush(_coverage_fout);
      }
      tmp___8 = strerror(*tmp___7);
      {
      fprintf(_coverage_fout, "730\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 880U, "ss", "socket failed:",
                      tmp___8);
      {
      fprintf(_coverage_fout, "731\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "732\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "733\n");
    fflush(_coverage_fout);
    }
    val = 1;
    {
    fprintf(_coverage_fout, "734\n");
    fflush(_coverage_fout);
    }
    tmp___11 = setsockopt(fcgi_fd, 1, 2, (void const   *)(& val),
                          (socklen_t )sizeof(val));
    {
    fprintf(_coverage_fout, "735\n");
    fflush(_coverage_fout);
    }
    if (tmp___11 < 0) {
      {
      fprintf(_coverage_fout, "736\n");
      fflush(_coverage_fout);
      }
      tmp___9 = __errno_location();
      {
      fprintf(_coverage_fout, "737\n");
      fflush(_coverage_fout);
      }
      tmp___10 = strerror(*tmp___9);
      {
      fprintf(_coverage_fout, "738\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 887U, "ss", "socketsockopt failed:",
                      tmp___10);
      {
      fprintf(_coverage_fout, "739\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "740\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "741\n");
    fflush(_coverage_fout);
    }
    tmp___14 = bind(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
    {
    fprintf(_coverage_fout, "742\n");
    fflush(_coverage_fout);
    }
    if (-1 == tmp___14) {
      {
      fprintf(_coverage_fout, "743\n");
      fflush(_coverage_fout);
      }
      tmp___12 = __errno_location();
      {
      fprintf(_coverage_fout, "744\n");
      fflush(_coverage_fout);
      }
      tmp___13 = strerror(*tmp___12);
      {
      fprintf(_coverage_fout, "745\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 894U, "sbs", "bind failed for:",
                      proc->connection_name, tmp___13);
      {
      fprintf(_coverage_fout, "746\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "747\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "748\n");
    fflush(_coverage_fout);
    }
    tmp___17 = listen(fcgi_fd, 1024);
    {
    fprintf(_coverage_fout, "749\n");
    fflush(_coverage_fout);
    }
    if (-1 == tmp___17) {
      {
      fprintf(_coverage_fout, "750\n");
      fflush(_coverage_fout);
      }
      tmp___15 = __errno_location();
      {
      fprintf(_coverage_fout, "751\n");
      fflush(_coverage_fout);
      }
      tmp___16 = strerror(*tmp___15);
      {
      fprintf(_coverage_fout, "752\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 902U, "ss", "listen failed:",
                      tmp___16);
      {
      fprintf(_coverage_fout, "753\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "754\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "755\n");
    fflush(_coverage_fout);
    }
    child = fork();
    {
    fprintf(_coverage_fout, "756\n");
    fflush(_coverage_fout);
    }
    switch (child) {
    {
    fprintf(_coverage_fout, "757\n");
    fflush(_coverage_fout);
    }
    case 0: 
    i = (size_t )0;
    {
    fprintf(_coverage_fout, "758\n");
    fflush(_coverage_fout);
    }
    env.ptr = (char **)((void *)0);
    {
    fprintf(_coverage_fout, "759\n");
    fflush(_coverage_fout);
    }
    env.size = 0U;
    {
    fprintf(_coverage_fout, "760\n");
    fflush(_coverage_fout);
    }
    env.used = 0U;
    {
    fprintf(_coverage_fout, "761\n");
    fflush(_coverage_fout);
    }
    arg.ptr = (char **)((void *)0);
    {
    fprintf(_coverage_fout, "762\n");
    fflush(_coverage_fout);
    }
    arg.size = 0U;
    {
    fprintf(_coverage_fout, "763\n");
    fflush(_coverage_fout);
    }
    arg.used = 0U;
    {
    fprintf(_coverage_fout, "764\n");
    fflush(_coverage_fout);
    }
    if (fcgi_fd != 0) {
      {
      fprintf(_coverage_fout, "765\n");
      fflush(_coverage_fout);
      }
      close(0);
      {
      fprintf(_coverage_fout, "766\n");
      fflush(_coverage_fout);
      }
      dup2(fcgi_fd, 0);
      {
      fprintf(_coverage_fout, "767\n");
      fflush(_coverage_fout);
      }
      close(fcgi_fd);
    } else {
      {
      fprintf(_coverage_fout, "768\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "769\n");
    fflush(_coverage_fout);
    }
    i = 3U;
    {
    fprintf(_coverage_fout, "770\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "771\n");
      fflush(_coverage_fout);
      }
      if (i < 256U) {
        {
        fprintf(_coverage_fout, "772\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "773\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "774\n");
      fflush(_coverage_fout);
      }
      close((int )i);
      {
      fprintf(_coverage_fout, "775\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
    {
    fprintf(_coverage_fout, "776\n");
    fflush(_coverage_fout);
    }
    if ((host->bin_env_copy)->used) {
      {
      fprintf(_coverage_fout, "777\n");
      fflush(_coverage_fout);
      }
      i = 0U;
      {
      fprintf(_coverage_fout, "778\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "779\n");
        fflush(_coverage_fout);
        }
        if (i < (host->bin_env_copy)->used) {
          {
          fprintf(_coverage_fout, "780\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "781\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "782\n");
        fflush(_coverage_fout);
        }
        ds = (data_string *)*((host->bin_env_copy)->data + i);
        {
        fprintf(_coverage_fout, "783\n");
        fflush(_coverage_fout);
        }
        ge = getenv((char const   *)(ds->value)->ptr);
        {
        fprintf(_coverage_fout, "784\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )((void *)0) != (unsigned int )ge) {
          {
          fprintf(_coverage_fout, "785\n");
          fflush(_coverage_fout);
          }
          tmp___18 = strlen((char const   *)ge);
          {
          fprintf(_coverage_fout, "786\n");
          fflush(_coverage_fout);
          }
          if ((ds->value)->used) {
            {
            fprintf(_coverage_fout, "787\n");
            fflush(_coverage_fout);
            }
            tmp___19 = (ds->value)->used - 1U;
          } else {
            {
            fprintf(_coverage_fout, "788\n");
            fflush(_coverage_fout);
            }
            tmp___19 = 0U;
          }
          {
          fprintf(_coverage_fout, "789\n");
          fflush(_coverage_fout);
          }
          env_add(& env, (char const   *)(ds->value)->ptr, tmp___19,
                  (char const   *)ge, tmp___18);
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
        i ++;
      }
    } else {
      {
      fprintf(_coverage_fout, "792\n");
      fflush(_coverage_fout);
      }
      i = 0U;
      {
      fprintf(_coverage_fout, "793\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "794\n");
        fflush(_coverage_fout);
        }
        if (*(environ + i)) {
          {
          fprintf(_coverage_fout, "795\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "796\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "797\n");
        fflush(_coverage_fout);
        }
        tmp___22 = __builtin_strchr(*(environ + i), '=');
        {
        fprintf(_coverage_fout, "798\n");
        fflush(_coverage_fout);
        }
        eq = tmp___22;
        {
        fprintf(_coverage_fout, "799\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )((void *)0) != (unsigned int )eq) {
          {
          fprintf(_coverage_fout, "800\n");
          fflush(_coverage_fout);
          }
          tmp___20 = strlen((char const   *)(eq + 1));
          {
          fprintf(_coverage_fout, "801\n");
          fflush(_coverage_fout);
          }
          env_add(& env, (char const   *)*(environ + i),
                  (unsigned int )(eq - *(environ + i)),
                  (char const   *)(eq + 1), tmp___20);
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
        i ++;
      }
    }
    {
    fprintf(_coverage_fout, "804\n");
    fflush(_coverage_fout);
    }
    i = 0U;
    {
    fprintf(_coverage_fout, "805\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "806\n");
      fflush(_coverage_fout);
      }
      if (i < (host->bin_env)->used) {
        {
        fprintf(_coverage_fout, "807\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "808\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "809\n");
      fflush(_coverage_fout);
      }
      ds___0 = (data_string *)*((host->bin_env)->data + i);
      {
      fprintf(_coverage_fout, "810\n");
      fflush(_coverage_fout);
      }
      if ((ds___0->value)->used) {
        {
        fprintf(_coverage_fout, "811\n");
        fflush(_coverage_fout);
        }
        tmp___23 = (ds___0->value)->used - 1U;
      } else {
        {
        fprintf(_coverage_fout, "812\n");
        fflush(_coverage_fout);
        }
        tmp___23 = 0U;
      }
      {
      fprintf(_coverage_fout, "813\n");
      fflush(_coverage_fout);
      }
      if ((ds___0->key)->used) {
        {
        fprintf(_coverage_fout, "814\n");
        fflush(_coverage_fout);
        }
        tmp___24 = (ds___0->key)->used - 1U;
      } else {
        {
        fprintf(_coverage_fout, "815\n");
        fflush(_coverage_fout);
        }
        tmp___24 = 0U;
      }
      {
      fprintf(_coverage_fout, "816\n");
      fflush(_coverage_fout);
      }
      env_add(& env, (char const   *)(ds___0->key)->ptr, tmp___24,
              (char const   *)(ds___0->value)->ptr, tmp___23);
      {
      fprintf(_coverage_fout, "817\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
    {
    fprintf(_coverage_fout, "818\n");
    fflush(_coverage_fout);
    }
    i = 0U;
    {
    fprintf(_coverage_fout, "819\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "820\n");
      fflush(_coverage_fout);
      }
      if (i < env.used) {
        {
        fprintf(_coverage_fout, "821\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "822\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "823\n");
      fflush(_coverage_fout);
      }
      if (0) {
        {
        fprintf(_coverage_fout, "824\n");
        fflush(_coverage_fout);
        }
        if (0) {
          {
          fprintf(_coverage_fout, "825\n");
          fflush(_coverage_fout);
          }
          __s1_len___0 = strlen((char const   *)*(env.ptr + i));
          {
          fprintf(_coverage_fout, "826\n");
          fflush(_coverage_fout);
          }
          __s2_len___0 = strlen("PHP_FCGI_CHILDREN=");
          {
          fprintf(_coverage_fout, "827\n");
          fflush(_coverage_fout);
          }
          if (! ((unsigned int )((void const   *)(*(env.ptr + i) + 1)) - (unsigned int )((void const   *)*(env.ptr + i)) == 1U)) {
            {
            fprintf(_coverage_fout, "828\n");
            fflush(_coverage_fout);
            }
            goto _L___2;
          } else {
            {
            fprintf(_coverage_fout, "829\n");
            fflush(_coverage_fout);
            }
            if (__s1_len___0 >= 4U) {
              {
              fprintf(_coverage_fout, "830\n");
              fflush(_coverage_fout);
              }
              _L___2: 
              if (! ((unsigned int )((void const   *)("PHP_FCGI_CHILDREN=" + 1)) - (unsigned int )((void const   *)"PHP_FCGI_CHILDREN=") == 1U)) {
                {
                fprintf(_coverage_fout, "831\n");
                fflush(_coverage_fout);
                }
                tmp___48 = 1;
              } else {
                {
                fprintf(_coverage_fout, "832\n");
                fflush(_coverage_fout);
                }
                if (__s2_len___0 >= 4U) {
                  {
                  fprintf(_coverage_fout, "833\n");
                  fflush(_coverage_fout);
                  }
                  tmp___48 = 1;
                } else {
                  {
                  fprintf(_coverage_fout, "834\n");
                  fflush(_coverage_fout);
                  }
                  tmp___48 = 0;
                }
              }
            } else {
              {
              fprintf(_coverage_fout, "835\n");
              fflush(_coverage_fout);
              }
              tmp___48 = 0;
            }
          }
          {
          fprintf(_coverage_fout, "836\n");
          fflush(_coverage_fout);
          }
          if (tmp___48) {
            {
            fprintf(_coverage_fout, "837\n");
            fflush(_coverage_fout);
            }
            tmp___44 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                        "PHP_FCGI_CHILDREN=");
          } else {
            {
            fprintf(_coverage_fout, "838\n");
            fflush(_coverage_fout);
            }
            tmp___47 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                        "PHP_FCGI_CHILDREN=");
            {
            fprintf(_coverage_fout, "839\n");
            fflush(_coverage_fout);
            }
            tmp___44 = tmp___47;
          }
        } else {
          {
          fprintf(_coverage_fout, "840\n");
          fflush(_coverage_fout);
          }
          tmp___47 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                      "PHP_FCGI_CHILDREN=");
          {
          fprintf(_coverage_fout, "841\n");
          fflush(_coverage_fout);
          }
          tmp___44 = tmp___47;
        }
        {
        fprintf(_coverage_fout, "842\n");
        fflush(_coverage_fout);
        }
        tmp___38 = tmp___44;
      } else {
        {
        fprintf(_coverage_fout, "843\n");
        fflush(_coverage_fout);
        }
        tmp___38 = strncmp((char const   *)*(env.ptr + i), "PHP_FCGI_CHILDREN=",
                           (size_t )(sizeof("PHP_FCGI_CHILDREN=") - 1UL));
      }
      {
      fprintf(_coverage_fout, "844\n");
      fflush(_coverage_fout);
      }
      if (0 == tmp___38) {
        {
        fprintf(_coverage_fout, "845\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "846\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "847\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
    {
    fprintf(_coverage_fout, "848\n");
    fflush(_coverage_fout);
    }
    if (i == env.used) {
      {
      fprintf(_coverage_fout, "849\n");
      fflush(_coverage_fout);
      }
      env_add(& env, "PHP_FCGI_CHILDREN",
              (size_t )(sizeof("PHP_FCGI_CHILDREN") - 1UL), "1",
              (size_t )(sizeof("1") - 1UL));
    } else {
      {
      fprintf(_coverage_fout, "850\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "851\n");
    fflush(_coverage_fout);
    }
    *(env.ptr + env.used) = (char *)((void *)0);
    {
    fprintf(_coverage_fout, "852\n");
    fflush(_coverage_fout);
    }
    parse_binpath(& arg, host->bin_path);
    {
    fprintf(_coverage_fout, "853\n");
    fflush(_coverage_fout);
    }
    c = strrchr((char const   *)*(arg.ptr + 0), '/');
    {
    fprintf(_coverage_fout, "854\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )((void *)0) != (unsigned int )c) {
      {
      fprintf(_coverage_fout, "855\n");
      fflush(_coverage_fout);
      }
      *c = (char )'\000';
      {
      fprintf(_coverage_fout, "856\n");
      fflush(_coverage_fout);
      }
      tmp___53 = chdir((char const   *)*(arg.ptr + 0));
      {
      fprintf(_coverage_fout, "857\n");
      fflush(_coverage_fout);
      }
      if (-1 == tmp___53) {
        {
        fprintf(_coverage_fout, "858\n");
        fflush(_coverage_fout);
        }
        *c = (char )'/';
        {
        fprintf(_coverage_fout, "859\n");
        fflush(_coverage_fout);
        }
        tmp___51 = __errno_location();
        {
        fprintf(_coverage_fout, "860\n");
        fflush(_coverage_fout);
        }
        tmp___52 = strerror(*tmp___51);
        {
        fprintf(_coverage_fout, "861\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 984U, "sss", "chdir failed:",
                        tmp___52, *(arg.ptr + 0));
      } else {
        {
        fprintf(_coverage_fout, "862\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "863\n");
      fflush(_coverage_fout);
      }
      *c = (char )'/';
    } else {
      {
      fprintf(_coverage_fout, "864\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "865\n");
    fflush(_coverage_fout);
    }
    execve((char const   *)*(arg.ptr + 0), (char * const  *)arg.ptr,
           (char * const  *)env.ptr);
    {
    fprintf(_coverage_fout, "866\n");
    fflush(_coverage_fout);
    }
    tmp___54 = __errno_location();
    {
    fprintf(_coverage_fout, "867\n");
    fflush(_coverage_fout);
    }
    tmp___55 = strerror(*tmp___54);
    {
    fprintf(_coverage_fout, "868\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 993U, "sbs", "execve failed for:",
                    host->bin_path, tmp___55);
    {
    fprintf(_coverage_fout, "869\n");
    fflush(_coverage_fout);
    }
    tmp___56 = __errno_location();
    {
    fprintf(_coverage_fout, "870\n");
    fflush(_coverage_fout);
    }
    exit(*tmp___56);
    {
    fprintf(_coverage_fout, "871\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "872\n");
    fflush(_coverage_fout);
    }
    case -1: 
    break;
    {
    fprintf(_coverage_fout, "873\n");
    fflush(_coverage_fout);
    }
    default: 
    select(0, (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (struct timeval */* __restrict  */)(& tv));
    {
    fprintf(_coverage_fout, "874\n");
    fflush(_coverage_fout);
    }
    tmp___57 = waitpid(child, & status, 1);
    {
    fprintf(_coverage_fout, "875\n");
    fflush(_coverage_fout);
    }
    switch (tmp___57) {
    {
    fprintf(_coverage_fout, "876\n");
    fflush(_coverage_fout);
    }
    case 0: 
    break;
    {
    fprintf(_coverage_fout, "877\n");
    fflush(_coverage_fout);
    }
    case -1: 
    tmp___58 = __errno_location();
    {
    fprintf(_coverage_fout, "878\n");
    fflush(_coverage_fout);
    }
    tmp___59 = strerror(*tmp___58);
    {
    fprintf(_coverage_fout, "879\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 1015U, "ss", "pid not found:",
                    tmp___59);
    {
    fprintf(_coverage_fout, "880\n");
    fflush(_coverage_fout);
    }
    return (-1);
    {
    fprintf(_coverage_fout, "881\n");
    fflush(_coverage_fout);
    }
    default: 
    log_error_write(srv, "mod_fastcgi.c", 1019U, "sbs", "the fastcgi-backend",
                    host->bin_path, "failed to start:");
    {
    fprintf(_coverage_fout, "882\n");
    fflush(_coverage_fout);
    }
    __constr_expr_4.__in = status;
    {
    fprintf(_coverage_fout, "883\n");
    fflush(_coverage_fout);
    }
    if ((__constr_expr_4.__i & 127) == 0) {
      {
      fprintf(_coverage_fout, "884\n");
      fflush(_coverage_fout);
      }
      __constr_expr_0.__in = status;
      {
      fprintf(_coverage_fout, "885\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 1023U, "sdb",
                      "child exited with status",
                      (__constr_expr_0.__i & 65280) >> 8, host->bin_path);
      {
      fprintf(_coverage_fout, "886\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 1026U, "s",
                      "If you\'re trying to run PHP as a FastCGI backend, make sure you\'re using the FastCGI-enabled version.\nYou can find out if it is the right one by executing \'php -v\' and it should display \'(cgi-fcgi)\' in the output, NOT \'(cgi)\' NOR \'(cli)\'.\nFor more information, check http://trac.lighttpd.net/trac/wiki/Docs%3AModFastCGI#preparing-php-as-a-fastcgi-programIf this is PHP on Gentoo, add \'fastcgi\' to the USE flags.");
    } else {
      {
      fprintf(_coverage_fout, "887\n");
      fflush(_coverage_fout);
      }
      __constr_expr_3.__in = status;
      {
      fprintf(_coverage_fout, "888\n");
      fflush(_coverage_fout);
      }
      if ((int )((signed char )((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
        {
        fprintf(_coverage_fout, "889\n");
        fflush(_coverage_fout);
        }
        __constr_expr_1.__in = status;
        {
        fprintf(_coverage_fout, "890\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 1033U, "sd",
                        "terminated by signal:", __constr_expr_1.__i & 127);
        {
        fprintf(_coverage_fout, "891\n");
        fflush(_coverage_fout);
        }
        __constr_expr_2.__in = status;
        {
        fprintf(_coverage_fout, "892\n");
        fflush(_coverage_fout);
        }
        if ((__constr_expr_2.__i & 127) == 11) {
          {
          fprintf(_coverage_fout, "893\n");
          fflush(_coverage_fout);
          }
          log_error_write(srv, "mod_fastcgi.c", 1038U, "s",
                          "to be exact: it segfaulted, crashed, died, ... you get the idea.");
          {
          fprintf(_coverage_fout, "894\n");
          fflush(_coverage_fout);
          }
          log_error_write(srv, "mod_fastcgi.c", 1040U, "s",
                          "If this is PHP, try removing the bytecode caches for now and try again.");
        } else {
          {
          fprintf(_coverage_fout, "895\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "896\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 1044U, "sd",
                        "child died somehow:", status);
      }
    }
    {
    fprintf(_coverage_fout, "897\n");
    fflush(_coverage_fout);
    }
    return (-1);
    }
    {
    fprintf(_coverage_fout, "898\n");
    fflush(_coverage_fout);
    }
    proc->pid = child;
    {
    fprintf(_coverage_fout, "899\n");
    fflush(_coverage_fout);
    }
    proc->last_used = srv->cur_ts;
    {
    fprintf(_coverage_fout, "900\n");
    fflush(_coverage_fout);
    }
    proc->is_local = 1;
    {
    fprintf(_coverage_fout, "901\n");
    fflush(_coverage_fout);
    }
    break;
    }
  } else {
    {
    fprintf(_coverage_fout, "902\n");
    fflush(_coverage_fout);
    }
    proc->is_local = 0;
    {
    fprintf(_coverage_fout, "903\n");
    fflush(_coverage_fout);
    }
    proc->pid = 0;
    {
    fprintf(_coverage_fout, "904\n");
    fflush(_coverage_fout);
    }
    if (p->conf.debug) {
      {
      fprintf(_coverage_fout, "905\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 1064U, "sb",
                      "(debug) socket is already used; won\'t spawn:",
                      proc->connection_name);
    } else {
      {
      fprintf(_coverage_fout, "906\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "907\n");
  fflush(_coverage_fout);
  }
  proc->state = (enum __anonenum_state_139 )1;
  {
  fprintf(_coverage_fout, "908\n");
  fflush(_coverage_fout);
  }
  (host->active_procs) ++;
  {
  fprintf(_coverage_fout, "909\n");
  fflush(_coverage_fout);
  }
  close(fcgi_fd);
  {
  fprintf(_coverage_fout, "910\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static handler_t mod_fastcgi_set_defaults(server *srv , void *p_d ) 
{ 
  plugin_data *p ;
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
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "911\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)p_d;
  {
  fprintf(_coverage_fout, "912\n");
  fflush(_coverage_fout);
  }
  i = (size_t )0;
  {
  fprintf(_coverage_fout, "913\n");
  fflush(_coverage_fout);
  }
  tmp = buffer_init();
  {
  fprintf(_coverage_fout, "914\n");
  fflush(_coverage_fout);
  }
  fcgi_mode = tmp;
  {
  fprintf(_coverage_fout, "915\n");
  fflush(_coverage_fout);
  }
  cv[0].key = "fastcgi.server";
  {
  fprintf(_coverage_fout, "916\n");
  fflush(_coverage_fout);
  }
  cv[0].destination = (void *)0;
  {
  fprintf(_coverage_fout, "917\n");
  fflush(_coverage_fout);
  }
  cv[0].type = (config_values_type_t )5;
  {
  fprintf(_coverage_fout, "918\n");
  fflush(_coverage_fout);
  }
  cv[0].scope = (config_scope_type_t )2;
  {
  fprintf(_coverage_fout, "919\n");
  fflush(_coverage_fout);
  }
  cv[1].key = "fastcgi.debug";
  {
  fprintf(_coverage_fout, "920\n");
  fflush(_coverage_fout);
  }
  cv[1].destination = (void *)0;
  {
  fprintf(_coverage_fout, "921\n");
  fflush(_coverage_fout);
  }
  cv[1].type = (config_values_type_t )2;
  {
  fprintf(_coverage_fout, "922\n");
  fflush(_coverage_fout);
  }
  cv[1].scope = (config_scope_type_t )2;
  {
  fprintf(_coverage_fout, "923\n");
  fflush(_coverage_fout);
  }
  cv[2].key = "fastcgi.map-extensions";
  {
  fprintf(_coverage_fout, "924\n");
  fflush(_coverage_fout);
  }
  cv[2].destination = (void *)0;
  {
  fprintf(_coverage_fout, "925\n");
  fflush(_coverage_fout);
  }
  cv[2].type = (config_values_type_t )4;
  {
  fprintf(_coverage_fout, "926\n");
  fflush(_coverage_fout);
  }
  cv[2].scope = (config_scope_type_t )2;
  {
  fprintf(_coverage_fout, "927\n");
  fflush(_coverage_fout);
  }
  cv[3].key = (char const   *)((void *)0);
  {
  fprintf(_coverage_fout, "928\n");
  fflush(_coverage_fout);
  }
  cv[3].destination = (void *)0;
  {
  fprintf(_coverage_fout, "929\n");
  fflush(_coverage_fout);
  }
  cv[3].type = (config_values_type_t )0;
  {
  fprintf(_coverage_fout, "930\n");
  fflush(_coverage_fout);
  }
  cv[3].scope = (config_scope_type_t )0;
  {
  fprintf(_coverage_fout, "931\n");
  fflush(_coverage_fout);
  }
  tmp___0 = calloc(1U,
                   (size_t )((unsigned long )(srv->config_context)->used * sizeof(specific_config *)));
  {
  fprintf(_coverage_fout, "932\n");
  fflush(_coverage_fout);
  }
  p->config_storage = (plugin_config **)tmp___0;
  {
  fprintf(_coverage_fout, "933\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "934\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "935\n");
    fflush(_coverage_fout);
    }
    if (i < (srv->config_context)->used) {
      {
      fprintf(_coverage_fout, "936\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "937\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "938\n");
    fflush(_coverage_fout);
    }
    tmp___1 = malloc((size_t )sizeof(plugin_config ));
    {
    fprintf(_coverage_fout, "939\n");
    fflush(_coverage_fout);
    }
    s = (plugin_config *)tmp___1;
    {
    fprintf(_coverage_fout, "940\n");
    fflush(_coverage_fout);
    }
    s->exts = fastcgi_extensions_init();
    {
    fprintf(_coverage_fout, "941\n");
    fflush(_coverage_fout);
    }
    s->debug = 0;
    {
    fprintf(_coverage_fout, "942\n");
    fflush(_coverage_fout);
    }
    s->ext_mapping = array_init();
    {
    fprintf(_coverage_fout, "943\n");
    fflush(_coverage_fout);
    }
    cv[0].destination = (void *)s->exts;
    {
    fprintf(_coverage_fout, "944\n");
    fflush(_coverage_fout);
    }
    cv[1].destination = (void *)(& s->debug);
    {
    fprintf(_coverage_fout, "945\n");
    fflush(_coverage_fout);
    }
    cv[2].destination = (void *)s->ext_mapping;
    {
    fprintf(_coverage_fout, "946\n");
    fflush(_coverage_fout);
    }
    *(p->config_storage + i) = s;
    {
    fprintf(_coverage_fout, "947\n");
    fflush(_coverage_fout);
    }
    ca = ((data_config *)*((srv->config_context)->data + i))->value;
    {
    fprintf(_coverage_fout, "948\n");
    fflush(_coverage_fout);
    }
    tmp___2 = config_insert_values_global(srv, ca,
                                          (config_values_t const   *)(cv));
    {
    fprintf(_coverage_fout, "949\n");
    fflush(_coverage_fout);
    }
    if (0 != tmp___2) {
      {
      fprintf(_coverage_fout, "950\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )5);
    } else {
      {
      fprintf(_coverage_fout, "951\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "952\n");
    fflush(_coverage_fout);
    }
    du = array_get_element(ca, "fastcgi.server");
    {
    fprintf(_coverage_fout, "953\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )((void *)0) != (unsigned int )du) {
      {
      fprintf(_coverage_fout, "954\n");
      fflush(_coverage_fout);
      }
      da = (data_array *)du;
      {
      fprintf(_coverage_fout, "955\n");
      fflush(_coverage_fout);
      }
      if ((int )du->type != 3) {
        {
        fprintf(_coverage_fout, "956\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 1123U, "sss",
                        "unexpected type for key: ", "fastcgi.server",
                        "array of strings");
        {
        fprintf(_coverage_fout, "957\n");
        fflush(_coverage_fout);
        }
        return ((handler_t )5);
      } else {
        {
        fprintf(_coverage_fout, "958\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "959\n");
      fflush(_coverage_fout);
      }
      j = 0U;
      {
      fprintf(_coverage_fout, "960\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "961\n");
        fflush(_coverage_fout);
        }
        if (j < (da->value)->used) {
          {
          fprintf(_coverage_fout, "962\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "963\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "964\n");
        fflush(_coverage_fout);
        }
        da_ext = (data_array *)*((da->value)->data + j);
        {
        fprintf(_coverage_fout, "965\n");
        fflush(_coverage_fout);
        }
        if ((int )(*((da->value)->data + j))->type != 3) {
          {
          fprintf(_coverage_fout, "966\n");
          fflush(_coverage_fout);
          }
          log_error_write(srv, "mod_fastcgi.c", 1140U, "sssbs",
                          "unexpected type for key: ", "fastcgi.server", "[",
                          (*((da->value)->data + j))->key, "](string)");
          {
          fprintf(_coverage_fout, "967\n");
          fflush(_coverage_fout);
          }
          return ((handler_t )5);
        } else {
          {
          fprintf(_coverage_fout, "968\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "969\n");
        fflush(_coverage_fout);
        }
        n = 0U;
        {
        fprintf(_coverage_fout, "970\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "971\n");
          fflush(_coverage_fout);
          }
          if (n < (da_ext->value)->used) {
            {
            fprintf(_coverage_fout, "972\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "973\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "974\n");
          fflush(_coverage_fout);
          }
          da_host = (data_array *)*((da_ext->value)->data + n);
          {
          fprintf(_coverage_fout, "975\n");
          fflush(_coverage_fout);
          }
          fcv[0].key = "host";
          {
          fprintf(_coverage_fout, "976\n");
          fflush(_coverage_fout);
          }
          fcv[0].destination = (void *)0;
          {
          fprintf(_coverage_fout, "977\n");
          fflush(_coverage_fout);
          }
          fcv[0].type = (config_values_type_t )1;
          {
          fprintf(_coverage_fout, "978\n");
          fflush(_coverage_fout);
          }
          fcv[0].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "979\n");
          fflush(_coverage_fout);
          }
          fcv[1].key = "docroot";
          {
          fprintf(_coverage_fout, "980\n");
          fflush(_coverage_fout);
          }
          fcv[1].destination = (void *)0;
          {
          fprintf(_coverage_fout, "981\n");
          fflush(_coverage_fout);
          }
          fcv[1].type = (config_values_type_t )1;
          {
          fprintf(_coverage_fout, "982\n");
          fflush(_coverage_fout);
          }
          fcv[1].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "983\n");
          fflush(_coverage_fout);
          }
          fcv[2].key = "mode";
          {
          fprintf(_coverage_fout, "984\n");
          fflush(_coverage_fout);
          }
          fcv[2].destination = (void *)0;
          {
          fprintf(_coverage_fout, "985\n");
          fflush(_coverage_fout);
          }
          fcv[2].type = (config_values_type_t )1;
          {
          fprintf(_coverage_fout, "986\n");
          fflush(_coverage_fout);
          }
          fcv[2].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "987\n");
          fflush(_coverage_fout);
          }
          fcv[3].key = "socket";
          {
          fprintf(_coverage_fout, "988\n");
          fflush(_coverage_fout);
          }
          fcv[3].destination = (void *)0;
          {
          fprintf(_coverage_fout, "989\n");
          fflush(_coverage_fout);
          }
          fcv[3].type = (config_values_type_t )1;
          {
          fprintf(_coverage_fout, "990\n");
          fflush(_coverage_fout);
          }
          fcv[3].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "991\n");
          fflush(_coverage_fout);
          }
          fcv[4].key = "bin-path";
          {
          fprintf(_coverage_fout, "992\n");
          fflush(_coverage_fout);
          }
          fcv[4].destination = (void *)0;
          {
          fprintf(_coverage_fout, "993\n");
          fflush(_coverage_fout);
          }
          fcv[4].type = (config_values_type_t )1;
          {
          fprintf(_coverage_fout, "994\n");
          fflush(_coverage_fout);
          }
          fcv[4].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "995\n");
          fflush(_coverage_fout);
          }
          fcv[5].key = "check-local";
          {
          fprintf(_coverage_fout, "996\n");
          fflush(_coverage_fout);
          }
          fcv[5].destination = (void *)0;
          {
          fprintf(_coverage_fout, "997\n");
          fflush(_coverage_fout);
          }
          fcv[5].type = (config_values_type_t )3;
          {
          fprintf(_coverage_fout, "998\n");
          fflush(_coverage_fout);
          }
          fcv[5].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "999\n");
          fflush(_coverage_fout);
          }
          fcv[6].key = "port";
          {
          fprintf(_coverage_fout, "1000\n");
          fflush(_coverage_fout);
          }
          fcv[6].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1001\n");
          fflush(_coverage_fout);
          }
          fcv[6].type = (config_values_type_t )2;
          {
          fprintf(_coverage_fout, "1002\n");
          fflush(_coverage_fout);
          }
          fcv[6].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1003\n");
          fflush(_coverage_fout);
          }
          fcv[7].key = "min-procs-not-working";
          {
          fprintf(_coverage_fout, "1004\n");
          fflush(_coverage_fout);
          }
          fcv[7].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1005\n");
          fflush(_coverage_fout);
          }
          fcv[7].type = (config_values_type_t )2;
          {
          fprintf(_coverage_fout, "1006\n");
          fflush(_coverage_fout);
          }
          fcv[7].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1007\n");
          fflush(_coverage_fout);
          }
          fcv[8].key = "max-procs";
          {
          fprintf(_coverage_fout, "1008\n");
          fflush(_coverage_fout);
          }
          fcv[8].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1009\n");
          fflush(_coverage_fout);
          }
          fcv[8].type = (config_values_type_t )2;
          {
          fprintf(_coverage_fout, "1010\n");
          fflush(_coverage_fout);
          }
          fcv[8].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1011\n");
          fflush(_coverage_fout);
          }
          fcv[9].key = "max-load-per-proc";
          {
          fprintf(_coverage_fout, "1012\n");
          fflush(_coverage_fout);
          }
          fcv[9].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1013\n");
          fflush(_coverage_fout);
          }
          fcv[9].type = (config_values_type_t )2;
          {
          fprintf(_coverage_fout, "1014\n");
          fflush(_coverage_fout);
          }
          fcv[9].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1015\n");
          fflush(_coverage_fout);
          }
          fcv[10].key = "idle-timeout";
          {
          fprintf(_coverage_fout, "1016\n");
          fflush(_coverage_fout);
          }
          fcv[10].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1017\n");
          fflush(_coverage_fout);
          }
          fcv[10].type = (config_values_type_t )2;
          {
          fprintf(_coverage_fout, "1018\n");
          fflush(_coverage_fout);
          }
          fcv[10].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1019\n");
          fflush(_coverage_fout);
          }
          fcv[11].key = "disable-time";
          {
          fprintf(_coverage_fout, "1020\n");
          fflush(_coverage_fout);
          }
          fcv[11].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1021\n");
          fflush(_coverage_fout);
          }
          fcv[11].type = (config_values_type_t )2;
          {
          fprintf(_coverage_fout, "1022\n");
          fflush(_coverage_fout);
          }
          fcv[11].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1023\n");
          fflush(_coverage_fout);
          }
          fcv[12].key = "bin-environment";
          {
          fprintf(_coverage_fout, "1024\n");
          fflush(_coverage_fout);
          }
          fcv[12].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1025\n");
          fflush(_coverage_fout);
          }
          fcv[12].type = (config_values_type_t )4;
          {
          fprintf(_coverage_fout, "1026\n");
          fflush(_coverage_fout);
          }
          fcv[12].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1027\n");
          fflush(_coverage_fout);
          }
          fcv[13].key = "bin-copy-environment";
          {
          fprintf(_coverage_fout, "1028\n");
          fflush(_coverage_fout);
          }
          fcv[13].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1029\n");
          fflush(_coverage_fout);
          }
          fcv[13].type = (config_values_type_t )4;
          {
          fprintf(_coverage_fout, "1030\n");
          fflush(_coverage_fout);
          }
          fcv[13].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1031\n");
          fflush(_coverage_fout);
          }
          fcv[14].key = "broken-scriptfilename";
          {
          fprintf(_coverage_fout, "1032\n");
          fflush(_coverage_fout);
          }
          fcv[14].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1033\n");
          fflush(_coverage_fout);
          }
          fcv[14].type = (config_values_type_t )3;
          {
          fprintf(_coverage_fout, "1034\n");
          fflush(_coverage_fout);
          }
          fcv[14].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1035\n");
          fflush(_coverage_fout);
          }
          fcv[15].key = "allow-x-send-file";
          {
          fprintf(_coverage_fout, "1036\n");
          fflush(_coverage_fout);
          }
          fcv[15].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1037\n");
          fflush(_coverage_fout);
          }
          fcv[15].type = (config_values_type_t )3;
          {
          fprintf(_coverage_fout, "1038\n");
          fflush(_coverage_fout);
          }
          fcv[15].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1039\n");
          fflush(_coverage_fout);
          }
          fcv[16].key = "strip-request-uri";
          {
          fprintf(_coverage_fout, "1040\n");
          fflush(_coverage_fout);
          }
          fcv[16].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1041\n");
          fflush(_coverage_fout);
          }
          fcv[16].type = (config_values_type_t )1;
          {
          fprintf(_coverage_fout, "1042\n");
          fflush(_coverage_fout);
          }
          fcv[16].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1043\n");
          fflush(_coverage_fout);
          }
          fcv[17].key = "kill-signal";
          {
          fprintf(_coverage_fout, "1044\n");
          fflush(_coverage_fout);
          }
          fcv[17].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1045\n");
          fflush(_coverage_fout);
          }
          fcv[17].type = (config_values_type_t )2;
          {
          fprintf(_coverage_fout, "1046\n");
          fflush(_coverage_fout);
          }
          fcv[17].scope = (config_scope_type_t )2;
          {
          fprintf(_coverage_fout, "1047\n");
          fflush(_coverage_fout);
          }
          fcv[18].key = (char const   *)((void *)0);
          {
          fprintf(_coverage_fout, "1048\n");
          fflush(_coverage_fout);
          }
          fcv[18].destination = (void *)0;
          {
          fprintf(_coverage_fout, "1049\n");
          fflush(_coverage_fout);
          }
          fcv[18].type = (config_values_type_t )0;
          {
          fprintf(_coverage_fout, "1050\n");
          fflush(_coverage_fout);
          }
          fcv[18].scope = (config_scope_type_t )0;
          {
          fprintf(_coverage_fout, "1051\n");
          fflush(_coverage_fout);
          }
          if ((int )da_host->type != 3) {
            {
            fprintf(_coverage_fout, "1052\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 1191U, "ssSBS",
                            "unexpected type for key:", "fastcgi.server", "[",
                            da_host->key, "](string)");
            {
            fprintf(_coverage_fout, "1053\n");
            fflush(_coverage_fout);
            }
            return ((handler_t )5);
          } else {
            {
            fprintf(_coverage_fout, "1054\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "1055\n");
          fflush(_coverage_fout);
          }
          host = fastcgi_host_init();
          {
          fprintf(_coverage_fout, "1056\n");
          fflush(_coverage_fout);
          }
          buffer_copy_string_buffer(host->id, (buffer const   *)da_host->key);
          {
          fprintf(_coverage_fout, "1057\n");
          fflush(_coverage_fout);
          }
          host->check_local = (unsigned short)1;
          {
          fprintf(_coverage_fout, "1058\n");
          fflush(_coverage_fout);
          }
          host->min_procs = (unsigned short)4;
          {
          fprintf(_coverage_fout, "1059\n");
          fflush(_coverage_fout);
          }
          host->max_procs = (unsigned short)4;
          {
          fprintf(_coverage_fout, "1060\n");
          fflush(_coverage_fout);
          }
          host->max_load_per_proc = (unsigned short)1;
          {
          fprintf(_coverage_fout, "1061\n");
          fflush(_coverage_fout);
          }
          host->idle_timeout = (unsigned short)60;
          {
          fprintf(_coverage_fout, "1062\n");
          fflush(_coverage_fout);
          }
          host->mode = (unsigned short)1;
          {
          fprintf(_coverage_fout, "1063\n");
          fflush(_coverage_fout);
          }
          host->disable_time = (unsigned short)60;
          {
          fprintf(_coverage_fout, "1064\n");
          fflush(_coverage_fout);
          }
          host->break_scriptfilename_for_php = (unsigned short)0;
          {
          fprintf(_coverage_fout, "1065\n");
          fflush(_coverage_fout);
          }
          host->allow_xsendfile = (unsigned short)0;
          {
          fprintf(_coverage_fout, "1066\n");
          fflush(_coverage_fout);
          }
          host->kill_signal = (unsigned short)15;
          {
          fprintf(_coverage_fout, "1067\n");
          fflush(_coverage_fout);
          }
          fcv[0].destination = (void *)host->host;
          {
          fprintf(_coverage_fout, "1068\n");
          fflush(_coverage_fout);
          }
          fcv[1].destination = (void *)host->docroot;
          {
          fprintf(_coverage_fout, "1069\n");
          fflush(_coverage_fout);
          }
          fcv[2].destination = (void *)fcgi_mode;
          {
          fprintf(_coverage_fout, "1070\n");
          fflush(_coverage_fout);
          }
          fcv[3].destination = (void *)host->unixsocket;
          {
          fprintf(_coverage_fout, "1071\n");
          fflush(_coverage_fout);
          }
          fcv[4].destination = (void *)host->bin_path;
          {
          fprintf(_coverage_fout, "1072\n");
          fflush(_coverage_fout);
          }
          fcv[5].destination = (void *)(& host->check_local);
          {
          fprintf(_coverage_fout, "1073\n");
          fflush(_coverage_fout);
          }
          fcv[6].destination = (void *)(& host->port);
          {
          fprintf(_coverage_fout, "1074\n");
          fflush(_coverage_fout);
          }
          fcv[7].destination = (void *)(& host->min_procs);
          {
          fprintf(_coverage_fout, "1075\n");
          fflush(_coverage_fout);
          }
          fcv[8].destination = (void *)(& host->max_procs);
          {
          fprintf(_coverage_fout, "1076\n");
          fflush(_coverage_fout);
          }
          fcv[9].destination = (void *)(& host->max_load_per_proc);
          {
          fprintf(_coverage_fout, "1077\n");
          fflush(_coverage_fout);
          }
          fcv[10].destination = (void *)(& host->idle_timeout);
          {
          fprintf(_coverage_fout, "1078\n");
          fflush(_coverage_fout);
          }
          fcv[11].destination = (void *)(& host->disable_time);
          {
          fprintf(_coverage_fout, "1079\n");
          fflush(_coverage_fout);
          }
          fcv[12].destination = (void *)host->bin_env;
          {
          fprintf(_coverage_fout, "1080\n");
          fflush(_coverage_fout);
          }
          fcv[13].destination = (void *)host->bin_env_copy;
          {
          fprintf(_coverage_fout, "1081\n");
          fflush(_coverage_fout);
          }
          fcv[14].destination = (void *)(& host->break_scriptfilename_for_php);
          {
          fprintf(_coverage_fout, "1082\n");
          fflush(_coverage_fout);
          }
          fcv[15].destination = (void *)(& host->allow_xsendfile);
          {
          fprintf(_coverage_fout, "1083\n");
          fflush(_coverage_fout);
          }
          fcv[16].destination = (void *)host->strip_request_uri;
          {
          fprintf(_coverage_fout, "1084\n");
          fflush(_coverage_fout);
          }
          fcv[17].destination = (void *)(& host->kill_signal);
          {
          fprintf(_coverage_fout, "1085\n");
          fflush(_coverage_fout);
          }
          tmp___3 = config_insert_values_internal(srv, da_host->value,
                                                  (config_values_t const   *)(fcv));
          {
          fprintf(_coverage_fout, "1086\n");
          fflush(_coverage_fout);
          }
          if (0 != tmp___3) {
            {
            fprintf(_coverage_fout, "1087\n");
            fflush(_coverage_fout);
            }
            return ((handler_t )5);
          } else {
            {
            fprintf(_coverage_fout, "1088\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "1089\n");
          fflush(_coverage_fout);
          }
          tmp___4 = buffer_is_empty(host->host);
          {
          fprintf(_coverage_fout, "1090\n");
          fflush(_coverage_fout);
          }
          if (tmp___4) {
            {
            fprintf(_coverage_fout, "1091\n");
            fflush(_coverage_fout);
            }
            if (host->port) {
              {
              fprintf(_coverage_fout, "1092\n");
              fflush(_coverage_fout);
              }
              _L: 
              tmp___5 = buffer_is_empty(host->unixsocket);
              {
              fprintf(_coverage_fout, "1093\n");
              fflush(_coverage_fout);
              }
              if (! tmp___5) {
                {
                fprintf(_coverage_fout, "1094\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 1241U, "sbsbsbs",
                                "either host/port or socket have to be set in:",
                                da->key, "= (", da_ext->key, " => (",
                                da_host->key, " ( ...");
                {
                fprintf(_coverage_fout, "1095\n");
                fflush(_coverage_fout);
                }
                return ((handler_t )5);
              } else {
                {
                fprintf(_coverage_fout, "1096\n");
                fflush(_coverage_fout);
                }

              }
            } else {
              {
              fprintf(_coverage_fout, "1097\n");
              fflush(_coverage_fout);
              }

            }
          } else {
            {
            fprintf(_coverage_fout, "1098\n");
            fflush(_coverage_fout);
            }
            goto _L;
          }
          {
          fprintf(_coverage_fout, "1099\n");
          fflush(_coverage_fout);
          }
          tmp___8 = buffer_is_empty(host->unixsocket);
          {
          fprintf(_coverage_fout, "1100\n");
          fflush(_coverage_fout);
          }
          if (tmp___8) {
            {
            fprintf(_coverage_fout, "1101\n");
            fflush(_coverage_fout);
            }
            tmp___6 = buffer_is_empty(host->host);
            {
            fprintf(_coverage_fout, "1102\n");
            fflush(_coverage_fout);
            }
            if (tmp___6) {
              {
              fprintf(_coverage_fout, "1103\n");
              fflush(_coverage_fout);
              }
              tmp___7 = buffer_is_empty(host->bin_path);
              {
              fprintf(_coverage_fout, "1104\n");
              fflush(_coverage_fout);
              }
              if (tmp___7) {
                {
                fprintf(_coverage_fout, "1105\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 1268U, "sbsbsbs",
                                "host or binpath have to be set in:", da->key,
                                "= (", da_ext->key, " => (", da_host->key,
                                " ( ...");
                {
                fprintf(_coverage_fout, "1106\n");
                fflush(_coverage_fout);
                }
                return ((handler_t )5);
              } else {
                {
                fprintf(_coverage_fout, "1107\n");
                fflush(_coverage_fout);
                }
                goto _L___0;
              }
            } else {
              {
              fprintf(_coverage_fout, "1108\n");
              fflush(_coverage_fout);
              }
              _L___0: 
              if ((int )host->port == 0) {
                {
                fprintf(_coverage_fout, "1109\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 1276U, "sbsbsbs",
                                "port has to be set in:", da->key, "= (",
                                da_ext->key, " => (", da_host->key, " ( ...");
                {
                fprintf(_coverage_fout, "1110\n");
                fflush(_coverage_fout);
                }
                return ((handler_t )5);
              } else {
                {
                fprintf(_coverage_fout, "1111\n");
                fflush(_coverage_fout);
                }

              }
            }
          } else {
            {
            fprintf(_coverage_fout, "1112\n");
            fflush(_coverage_fout);
            }
            if ((unsigned long )(host->unixsocket)->used > sizeof(un.sun_path) - 2UL) {
              {
              fprintf(_coverage_fout, "1113\n");
              fflush(_coverage_fout);
              }
              log_error_write(srv, "mod_fastcgi.c", 1255U, "sbsbsbs",
                              "unixsocket is too long in:", da->key, "= (",
                              da_ext->key, " => (", da_host->key, " ( ...");
              {
              fprintf(_coverage_fout, "1114\n");
              fflush(_coverage_fout);
              }
              return ((handler_t )5);
            } else {
              {
              fprintf(_coverage_fout, "1115\n");
              fflush(_coverage_fout);
              }

            }
          }
          {
          fprintf(_coverage_fout, "1116\n");
          fflush(_coverage_fout);
          }
          tmp___14 = buffer_is_empty(host->bin_path);
          {
          fprintf(_coverage_fout, "1117\n");
          fflush(_coverage_fout);
          }
          if (tmp___14) {
            {
            fprintf(_coverage_fout, "1118\n");
            fflush(_coverage_fout);
            }
            proc___0 = fastcgi_process_init();
            {
            fprintf(_coverage_fout, "1119\n");
            fflush(_coverage_fout);
            }
            tmp___12 = host->num_procs;
            {
            fprintf(_coverage_fout, "1120\n");
            fflush(_coverage_fout);
            }
            (host->num_procs) ++;
            {
            fprintf(_coverage_fout, "1121\n");
            fflush(_coverage_fout);
            }
            proc___0->id = tmp___12;
            {
            fprintf(_coverage_fout, "1122\n");
            fflush(_coverage_fout);
            }
            (host->max_id) ++;
            {
            fprintf(_coverage_fout, "1123\n");
            fflush(_coverage_fout);
            }
            (host->active_procs) ++;
            {
            fprintf(_coverage_fout, "1124\n");
            fflush(_coverage_fout);
            }
            proc___0->state = (enum __anonenum_state_139 )1;
            {
            fprintf(_coverage_fout, "1125\n");
            fflush(_coverage_fout);
            }
            tmp___13 = buffer_is_empty(host->unixsocket);
            {
            fprintf(_coverage_fout, "1126\n");
            fflush(_coverage_fout);
            }
            if (tmp___13) {
              {
              fprintf(_coverage_fout, "1127\n");
              fflush(_coverage_fout);
              }
              proc___0->port = (unsigned int )host->port;
            } else {
              {
              fprintf(_coverage_fout, "1128\n");
              fflush(_coverage_fout);
              }
              buffer_copy_string_buffer(proc___0->unixsocket,
                                        (buffer const   *)host->unixsocket);
            }
            {
            fprintf(_coverage_fout, "1129\n");
            fflush(_coverage_fout);
            }
            fastcgi_status_init(srv, p->statuskey, host, proc___0);
            {
            fprintf(_coverage_fout, "1130\n");
            fflush(_coverage_fout);
            }
            host->first = proc___0;
            {
            fprintf(_coverage_fout, "1131\n");
            fflush(_coverage_fout);
            }
            host->min_procs = (unsigned short)1;
            {
            fprintf(_coverage_fout, "1132\n");
            fflush(_coverage_fout);
            }
            host->max_procs = (unsigned short)1;
          } else {
            {
            fprintf(_coverage_fout, "1133\n");
            fflush(_coverage_fout);
            }
            host->min_procs = host->max_procs;
            {
            fprintf(_coverage_fout, "1134\n");
            fflush(_coverage_fout);
            }
            if ((int )host->min_procs > (int )host->max_procs) {
              {
              fprintf(_coverage_fout, "1135\n");
              fflush(_coverage_fout);
              }
              host->max_procs = host->min_procs;
            } else {
              {
              fprintf(_coverage_fout, "1136\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "1137\n");
            fflush(_coverage_fout);
            }
            if ((int )host->max_load_per_proc < 1) {
              {
              fprintf(_coverage_fout, "1138\n");
              fflush(_coverage_fout);
              }
              host->max_load_per_proc = (unsigned short)0;
            } else {
              {
              fprintf(_coverage_fout, "1139\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "1140\n");
            fflush(_coverage_fout);
            }
            if (s->debug) {
              {
              fprintf(_coverage_fout, "1141\n");
              fflush(_coverage_fout);
              }
              log_error_write(srv, "mod_fastcgi.c", 1297U, "ssbsdsbsdsd",
                              "--- fastcgi spawning local", "\n\tproc:",
                              host->bin_path, "\n\tport:", (int )host->port,
                              "\n\tsocket", host->unixsocket, "\n\tmin-procs:",
                              (int )host->min_procs, "\n\tmax-procs:",
                              (int )host->max_procs);
            } else {
              {
              fprintf(_coverage_fout, "1142\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "1143\n");
            fflush(_coverage_fout);
            }
            pno = 0U;
            {
            fprintf(_coverage_fout, "1144\n");
            fflush(_coverage_fout);
            }
            while (1) {
              {
              fprintf(_coverage_fout, "1145\n");
              fflush(_coverage_fout);
              }
              if (pno < (size_t )host->min_procs) {
                {
                fprintf(_coverage_fout, "1146\n");
                fflush(_coverage_fout);
                }

              } else {
                {
                fprintf(_coverage_fout, "1147\n");
                fflush(_coverage_fout);
                }
                break;
              }
              {
              fprintf(_coverage_fout, "1148\n");
              fflush(_coverage_fout);
              }
              proc = fastcgi_process_init();
              {
              fprintf(_coverage_fout, "1149\n");
              fflush(_coverage_fout);
              }
              tmp___9 = host->num_procs;
              {
              fprintf(_coverage_fout, "1150\n");
              fflush(_coverage_fout);
              }
              (host->num_procs) ++;
              {
              fprintf(_coverage_fout, "1151\n");
              fflush(_coverage_fout);
              }
              proc->id = tmp___9;
              {
              fprintf(_coverage_fout, "1152\n");
              fflush(_coverage_fout);
              }
              (host->max_id) ++;
              {
              fprintf(_coverage_fout, "1153\n");
              fflush(_coverage_fout);
              }
              tmp___10 = buffer_is_empty(host->unixsocket);
              {
              fprintf(_coverage_fout, "1154\n");
              fflush(_coverage_fout);
              }
              if (tmp___10) {
                {
                fprintf(_coverage_fout, "1155\n");
                fflush(_coverage_fout);
                }
                proc->port = (size_t )host->port + pno;
              } else {
                {
                fprintf(_coverage_fout, "1156\n");
                fflush(_coverage_fout);
                }
                buffer_copy_string_buffer(proc->unixsocket,
                                          (buffer const   *)host->unixsocket);
                {
                fprintf(_coverage_fout, "1157\n");
                fflush(_coverage_fout);
                }
                buffer_append_string(proc->unixsocket, "-");
                {
                fprintf(_coverage_fout, "1158\n");
                fflush(_coverage_fout);
                }
                buffer_append_long(proc->unixsocket, (long )pno);
              }
              {
              fprintf(_coverage_fout, "1159\n");
              fflush(_coverage_fout);
              }
              if (s->debug) {
                {
                fprintf(_coverage_fout, "1160\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 1322U, "ssdsbsdsd",
                                "--- fastcgi spawning", "\n\tport:",
                                (int )host->port, "\n\tsocket",
                                host->unixsocket, "\n\tcurrent:", pno, "/",
                                (int )host->min_procs);
              } else {
                {
                fprintf(_coverage_fout, "1161\n");
                fflush(_coverage_fout);
                }

              }
              {
              fprintf(_coverage_fout, "1162\n");
              fflush(_coverage_fout);
              }
              tmp___11 = fcgi_spawn_connection(srv, p, host, proc);
              {
              fprintf(_coverage_fout, "1163\n");
              fflush(_coverage_fout);
              }
              if (tmp___11) {
                {
                fprintf(_coverage_fout, "1164\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 1330U, "s",
                                "[ERROR]: spawning fcgi failed.");
                {
                fprintf(_coverage_fout, "1165\n");
                fflush(_coverage_fout);
                }
                return ((handler_t )5);
              } else {
                {
                fprintf(_coverage_fout, "1166\n");
                fflush(_coverage_fout);
                }

              }
              {
              fprintf(_coverage_fout, "1167\n");
              fflush(_coverage_fout);
              }
              fastcgi_status_init(srv, p->statuskey, host, proc);
              {
              fprintf(_coverage_fout, "1168\n");
              fflush(_coverage_fout);
              }
              proc->next = host->first;
              {
              fprintf(_coverage_fout, "1169\n");
              fflush(_coverage_fout);
              }
              if (host->first) {
                {
                fprintf(_coverage_fout, "1170\n");
                fflush(_coverage_fout);
                }
                (host->first)->prev = proc;
              } else {
                {
                fprintf(_coverage_fout, "1171\n");
                fflush(_coverage_fout);
                }

              }
              {
              fprintf(_coverage_fout, "1172\n");
              fflush(_coverage_fout);
              }
              host->first = proc;
              {
              fprintf(_coverage_fout, "1173\n");
              fflush(_coverage_fout);
              }
              pno ++;
            }
          }
          {
          fprintf(_coverage_fout, "1174\n");
          fflush(_coverage_fout);
          }
          tmp___36 = buffer_is_empty(fcgi_mode);
          {
          fprintf(_coverage_fout, "1175\n");
          fflush(_coverage_fout);
          }
          if (! tmp___36) {
            {
            fprintf(_coverage_fout, "1176\n");
            fflush(_coverage_fout);
            }
            if (0) {
              {
              fprintf(_coverage_fout, "1177\n");
              fflush(_coverage_fout);
              }
              __s1_len___0 = strlen((char const   *)fcgi_mode->ptr);
              {
              fprintf(_coverage_fout, "1178\n");
              fflush(_coverage_fout);
              }
              __s2_len___0 = strlen("responder");
              {
              fprintf(_coverage_fout, "1179\n");
              fflush(_coverage_fout);
              }
              if (! ((unsigned int )((void const   *)(fcgi_mode->ptr + 1)) - (unsigned int )((void const   *)fcgi_mode->ptr) == 1U)) {
                {
                fprintf(_coverage_fout, "1180\n");
                fflush(_coverage_fout);
                }
                goto _L___4;
              } else {
                {
                fprintf(_coverage_fout, "1181\n");
                fflush(_coverage_fout);
                }
                if (__s1_len___0 >= 4U) {
                  {
                  fprintf(_coverage_fout, "1182\n");
                  fflush(_coverage_fout);
                  }
                  _L___4: 
                  if (! ((unsigned int )((void const   *)("responder" + 1)) - (unsigned int )((void const   *)"responder") == 1U)) {
                    {
                    fprintf(_coverage_fout, "1183\n");
                    fflush(_coverage_fout);
                    }
                    tmp___35 = 1;
                  } else {
                    {
                    fprintf(_coverage_fout, "1184\n");
                    fflush(_coverage_fout);
                    }
                    if (__s2_len___0 >= 4U) {
                      {
                      fprintf(_coverage_fout, "1185\n");
                      fflush(_coverage_fout);
                      }
                      tmp___35 = 1;
                    } else {
                      {
                      fprintf(_coverage_fout, "1186\n");
                      fflush(_coverage_fout);
                      }
                      tmp___35 = 0;
                    }
                  }
                } else {
                  {
                  fprintf(_coverage_fout, "1187\n");
                  fflush(_coverage_fout);
                  }
                  tmp___35 = 0;
                }
              }
              {
              fprintf(_coverage_fout, "1188\n");
              fflush(_coverage_fout);
              }
              if (tmp___35) {
                {
                fprintf(_coverage_fout, "1189\n");
                fflush(_coverage_fout);
                }
                tmp___31 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "responder");
              } else {
                {
                fprintf(_coverage_fout, "1190\n");
                fflush(_coverage_fout);
                }
                tmp___34 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "responder");
                {
                fprintf(_coverage_fout, "1191\n");
                fflush(_coverage_fout);
                }
                tmp___31 = tmp___34;
              }
            } else {
              {
              fprintf(_coverage_fout, "1192\n");
              fflush(_coverage_fout);
              }
              tmp___34 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                          "responder");
              {
              fprintf(_coverage_fout, "1193\n");
              fflush(_coverage_fout);
              }
              tmp___31 = tmp___34;
            }
            {
            fprintf(_coverage_fout, "1194\n");
            fflush(_coverage_fout);
            }
            if (tmp___31 == 0) {
              {
              fprintf(_coverage_fout, "1195\n");
              fflush(_coverage_fout);
              }
              host->mode = (unsigned short)1;
            } else {
              {
              fprintf(_coverage_fout, "1196\n");
              fflush(_coverage_fout);
              }
              if (0) {
                {
                fprintf(_coverage_fout, "1197\n");
                fflush(_coverage_fout);
                }
                __s1_len = strlen((char const   *)fcgi_mode->ptr);
                {
                fprintf(_coverage_fout, "1198\n");
                fflush(_coverage_fout);
                }
                __s2_len = strlen("authorizer");
                {
                fprintf(_coverage_fout, "1199\n");
                fflush(_coverage_fout);
                }
                if (! ((unsigned int )((void const   *)(fcgi_mode->ptr + 1)) - (unsigned int )((void const   *)fcgi_mode->ptr) == 1U)) {
                  {
                  fprintf(_coverage_fout, "1200\n");
                  fflush(_coverage_fout);
                  }
                  goto _L___2;
                } else {
                  {
                  fprintf(_coverage_fout, "1201\n");
                  fflush(_coverage_fout);
                  }
                  if (__s1_len >= 4U) {
                    {
                    fprintf(_coverage_fout, "1202\n");
                    fflush(_coverage_fout);
                    }
                    _L___2: 
                    if (! ((unsigned int )((void const   *)("authorizer" + 1)) - (unsigned int )((void const   *)"authorizer") == 1U)) {
                      {
                      fprintf(_coverage_fout, "1203\n");
                      fflush(_coverage_fout);
                      }
                      tmp___25 = 1;
                    } else {
                      {
                      fprintf(_coverage_fout, "1204\n");
                      fflush(_coverage_fout);
                      }
                      if (__s2_len >= 4U) {
                        {
                        fprintf(_coverage_fout, "1205\n");
                        fflush(_coverage_fout);
                        }
                        tmp___25 = 1;
                      } else {
                        {
                        fprintf(_coverage_fout, "1206\n");
                        fflush(_coverage_fout);
                        }
                        tmp___25 = 0;
                      }
                    }
                  } else {
                    {
                    fprintf(_coverage_fout, "1207\n");
                    fflush(_coverage_fout);
                    }
                    tmp___25 = 0;
                  }
                }
                {
                fprintf(_coverage_fout, "1208\n");
                fflush(_coverage_fout);
                }
                if (tmp___25) {
                  {
                  fprintf(_coverage_fout, "1209\n");
                  fflush(_coverage_fout);
                  }
                  tmp___21 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                              "authorizer");
                } else {
                  {
                  fprintf(_coverage_fout, "1210\n");
                  fflush(_coverage_fout);
                  }
                  tmp___24 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                              "authorizer");
                  {
                  fprintf(_coverage_fout, "1211\n");
                  fflush(_coverage_fout);
                  }
                  tmp___21 = tmp___24;
                }
              } else {
                {
                fprintf(_coverage_fout, "1212\n");
                fflush(_coverage_fout);
                }
                tmp___24 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "authorizer");
                {
                fprintf(_coverage_fout, "1213\n");
                fflush(_coverage_fout);
                }
                tmp___21 = tmp___24;
              }
              {
              fprintf(_coverage_fout, "1214\n");
              fflush(_coverage_fout);
              }
              if (tmp___21 == 0) {
                {
                fprintf(_coverage_fout, "1215\n");
                fflush(_coverage_fout);
                }
                host->mode = (unsigned short)2;
                {
                fprintf(_coverage_fout, "1216\n");
                fflush(_coverage_fout);
                }
                tmp___15 = buffer_is_empty(host->docroot);
                {
                fprintf(_coverage_fout, "1217\n");
                fflush(_coverage_fout);
                }
                if (tmp___15) {
                  {
                  fprintf(_coverage_fout, "1218\n");
                  fflush(_coverage_fout);
                  }
                  log_error_write(srv, "mod_fastcgi.c", 1371U, "s",
                                  "ERROR: docroot is required for authorizer mode.");
                  {
                  fprintf(_coverage_fout, "1219\n");
                  fflush(_coverage_fout);
                  }
                  return ((handler_t )5);
                } else {
                  {
                  fprintf(_coverage_fout, "1220\n");
                  fflush(_coverage_fout);
                  }

                }
              } else {
                {
                fprintf(_coverage_fout, "1221\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 1376U, "sbs",
                                "WARNING: unknown fastcgi mode:", fcgi_mode,
                                "(ignored, mode set to responder)");
              }
            }
          } else {
            {
            fprintf(_coverage_fout, "1222\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "1223\n");
          fflush(_coverage_fout);
          }
          fastcgi_extension_insert(s->exts, da_ext->key, host);
          {
          fprintf(_coverage_fout, "1224\n");
          fflush(_coverage_fout);
          }
          n ++;
        }
        {
        fprintf(_coverage_fout, "1225\n");
        fflush(_coverage_fout);
        }
        j ++;
      }
    } else {
      {
      fprintf(_coverage_fout, "1226\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1227\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1228\n");
  fflush(_coverage_fout);
  }
  buffer_free(fcgi_mode);
  {
  fprintf(_coverage_fout, "1229\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )1);
}
}
static int fcgi_set_state(server *srv , handler_ctx *hctx ,
                          fcgi_connection_state_t state ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1230\n");
  fflush(_coverage_fout);
  }
  hctx->state = state;
  {
  fprintf(_coverage_fout, "1231\n");
  fflush(_coverage_fout);
  }
  hctx->state_timestamp = srv->cur_ts;
  {
  fprintf(_coverage_fout, "1232\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static size_t fcgi_requestid_new(server *srv , plugin_data *p ) 
{ 
  size_t m ;
  size_t i ;
  buffer_uint *r ;
  void *tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1233\n");
  fflush(_coverage_fout);
  }
  m = (size_t )0;
  {
  fprintf(_coverage_fout, "1234\n");
  fflush(_coverage_fout);
  }
  r = & p->fcgi_request_id;
  {
  fprintf(_coverage_fout, "1235\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "1236\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1237\n");
    fflush(_coverage_fout);
    }
    if (i < r->used) {
      {
      fprintf(_coverage_fout, "1238\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1239\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1240\n");
    fflush(_coverage_fout);
    }
    if (*(r->ptr + i) > m) {
      {
      fprintf(_coverage_fout, "1241\n");
      fflush(_coverage_fout);
      }
      m = *(r->ptr + i);
    } else {
      {
      fprintf(_coverage_fout, "1242\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1243\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1244\n");
  fflush(_coverage_fout);
  }
  if (r->size == 0U) {
    {
    fprintf(_coverage_fout, "1245\n");
    fflush(_coverage_fout);
    }
    r->size = 16U;
    {
    fprintf(_coverage_fout, "1246\n");
    fflush(_coverage_fout);
    }
    tmp = malloc((size_t )(sizeof(*(r->ptr)) * (unsigned long )r->size));
    {
    fprintf(_coverage_fout, "1247\n");
    fflush(_coverage_fout);
    }
    r->ptr = (size_t *)tmp;
  } else {
    {
    fprintf(_coverage_fout, "1248\n");
    fflush(_coverage_fout);
    }
    if (r->used == r->size) {
      {
      fprintf(_coverage_fout, "1249\n");
      fflush(_coverage_fout);
      }
      r->size += 16U;
      {
      fprintf(_coverage_fout, "1250\n");
      fflush(_coverage_fout);
      }
      tmp___0 = realloc((void *)r->ptr,
                        (size_t )(sizeof(*(r->ptr)) * (unsigned long )r->size));
      {
      fprintf(_coverage_fout, "1251\n");
      fflush(_coverage_fout);
      }
      r->ptr = (size_t *)tmp___0;
    } else {
      {
      fprintf(_coverage_fout, "1252\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "1253\n");
  fflush(_coverage_fout);
  }
  tmp___1 = r->used;
  {
  fprintf(_coverage_fout, "1254\n");
  fflush(_coverage_fout);
  }
  (r->used) ++;
  {
  fprintf(_coverage_fout, "1255\n");
  fflush(_coverage_fout);
  }
  m ++;
  {
  fprintf(_coverage_fout, "1256\n");
  fflush(_coverage_fout);
  }
  *(r->ptr + tmp___1) = m;
  {
  fprintf(_coverage_fout, "1257\n");
  fflush(_coverage_fout);
  }
  return (m);
}
}
static int fcgi_requestid_del(server *srv , plugin_data *p , size_t request_id ) 
{ 
  size_t i ;
  buffer_uint *r ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1258\n");
  fflush(_coverage_fout);
  }
  r = & p->fcgi_request_id;
  {
  fprintf(_coverage_fout, "1259\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "1260\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1261\n");
    fflush(_coverage_fout);
    }
    if (i < r->used) {
      {
      fprintf(_coverage_fout, "1262\n");
      fflush(_coverage_fout);
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
    if (*(r->ptr + i) == request_id) {
      {
      fprintf(_coverage_fout, "1265\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "1266\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1267\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1268\n");
  fflush(_coverage_fout);
  }
  if (i != r->used) {
    {
    fprintf(_coverage_fout, "1269\n");
    fflush(_coverage_fout);
    }
    if (i != r->used - 1U) {
      {
      fprintf(_coverage_fout, "1270\n");
      fflush(_coverage_fout);
      }
      *(r->ptr + i) = *(r->ptr + (r->used - 1U));
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
    (r->used) --;
  } else {
    {
    fprintf(_coverage_fout, "1273\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1274\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
void fcgi_connection_close(server *srv , handler_ctx *hctx ) 
{ 
  plugin_data *p ;
  connection *con ;
  size_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1275\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )((void *)0) == (unsigned int )hctx) {
    {
    fprintf(_coverage_fout, "1276\n");
    fflush(_coverage_fout);
    }
    return;
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
  p = hctx->plugin_data;
  {
  fprintf(_coverage_fout, "1279\n");
  fflush(_coverage_fout);
  }
  con = hctx->remote_conn;
  {
  fprintf(_coverage_fout, "1280\n");
  fflush(_coverage_fout);
  }
  if (hctx->fd != -1) {
    {
    fprintf(_coverage_fout, "1281\n");
    fflush(_coverage_fout);
    }
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
    {
    fprintf(_coverage_fout, "1282\n");
    fflush(_coverage_fout);
    }
    fdevent_unregister(srv->ev, hctx->fd);
    {
    fprintf(_coverage_fout, "1283\n");
    fflush(_coverage_fout);
    }
    close(hctx->fd);
    {
    fprintf(_coverage_fout, "1284\n");
    fflush(_coverage_fout);
    }
    (srv->cur_fds) --;
  } else {
    {
    fprintf(_coverage_fout, "1285\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1286\n");
  fflush(_coverage_fout);
  }
  if (hctx->request_id != 0U) {
    {
    fprintf(_coverage_fout, "1287\n");
    fflush(_coverage_fout);
    }
    fcgi_requestid_del(srv, p, hctx->request_id);
  } else {
    {
    fprintf(_coverage_fout, "1288\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1289\n");
  fflush(_coverage_fout);
  }
  if (hctx->host) {
    {
    fprintf(_coverage_fout, "1290\n");
    fflush(_coverage_fout);
    }
    if (hctx->proc) {
      {
      fprintf(_coverage_fout, "1291\n");
      fflush(_coverage_fout);
      }
      if (hctx->got_proc) {
        {
        fprintf(_coverage_fout, "1292\n");
        fflush(_coverage_fout);
        }
        ((hctx->proc)->load) --;
        {
        fprintf(_coverage_fout, "1293\n");
        fflush(_coverage_fout);
        }
        status_counter_dec(srv, "fastcgi.active-requests",
                           (size_t )(sizeof("fastcgi.active-requests") - 1UL));
        {
        fprintf(_coverage_fout, "1294\n");
        fflush(_coverage_fout);
        }
        fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
        {
        fprintf(_coverage_fout, "1295\n");
        fflush(_coverage_fout);
        }
        buffer_append_string(p->statuskey, ".load");
        {
        fprintf(_coverage_fout, "1296\n");
        fflush(_coverage_fout);
        }
        if ((p->statuskey)->used) {
          {
          fprintf(_coverage_fout, "1297\n");
          fflush(_coverage_fout);
          }
          tmp = (p->statuskey)->used - 1U;
        } else {
          {
          fprintf(_coverage_fout, "1298\n");
          fflush(_coverage_fout);
          }
          tmp = 0U;
        }
        {
        fprintf(_coverage_fout, "1299\n");
        fflush(_coverage_fout);
        }
        status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp,
                           (int )(hctx->proc)->load);
        {
        fprintf(_coverage_fout, "1300\n");
        fflush(_coverage_fout);
        }
        if (p->conf.debug) {
          {
          fprintf(_coverage_fout, "1301\n");
          fflush(_coverage_fout);
          }
          log_error_write(srv, "mod_fastcgi.c", 1480U, "ssdsbsd",
                          "released proc:", "pid:", (hctx->proc)->pid,
                          "socket:", (hctx->proc)->connection_name, "load:",
                          (hctx->proc)->load);
        } else {
          {
          fprintf(_coverage_fout, "1302\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "1303\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "1304\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1305\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1306\n");
  fflush(_coverage_fout);
  }
  handler_ctx_free(hctx);
  {
  fprintf(_coverage_fout, "1307\n");
  fflush(_coverage_fout);
  }
  *(con->plugin_ctx + p->id) = (void *)0;
  {
  fprintf(_coverage_fout, "1308\n");
  fflush(_coverage_fout);
  }
  return;
}
}
static int fcgi_reconnect(server *srv , handler_ctx *hctx ) 
{ 
  plugin_data *p ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1309\n");
  fflush(_coverage_fout);
  }
  p = hctx->plugin_data;
  {
  fprintf(_coverage_fout, "1310\n");
  fflush(_coverage_fout);
  }
  if (hctx->fd != -1) {
    {
    fprintf(_coverage_fout, "1311\n");
    fflush(_coverage_fout);
    }
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
    {
    fprintf(_coverage_fout, "1312\n");
    fflush(_coverage_fout);
    }
    fdevent_unregister(srv->ev, hctx->fd);
    {
    fprintf(_coverage_fout, "1313\n");
    fflush(_coverage_fout);
    }
    close(hctx->fd);
    {
    fprintf(_coverage_fout, "1314\n");
    fflush(_coverage_fout);
    }
    (srv->cur_fds) --;
    {
    fprintf(_coverage_fout, "1315\n");
    fflush(_coverage_fout);
    }
    hctx->fd = -1;
  } else {
    {
    fprintf(_coverage_fout, "1316\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1317\n");
  fflush(_coverage_fout);
  }
  fcgi_requestid_del(srv, p, hctx->request_id);
  {
  fprintf(_coverage_fout, "1318\n");
  fflush(_coverage_fout);
  }
  fcgi_set_state(srv, hctx, (fcgi_connection_state_t )1);
  {
  fprintf(_coverage_fout, "1319\n");
  fflush(_coverage_fout);
  }
  hctx->request_id = 0U;
  {
  fprintf(_coverage_fout, "1320\n");
  fflush(_coverage_fout);
  }
  (hctx->reconnects) ++;
  {
  fprintf(_coverage_fout, "1321\n");
  fflush(_coverage_fout);
  }
  if (p->conf.debug > 2) {
    {
    fprintf(_coverage_fout, "1322\n");
    fflush(_coverage_fout);
    }
    if (hctx->proc) {
      {
      fprintf(_coverage_fout, "1323\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 1533U, "sdb",
                      "release proc for reconnect:", (hctx->proc)->pid,
                      (hctx->proc)->connection_name);
    } else {
      {
      fprintf(_coverage_fout, "1324\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 1537U, "sb",
                      "release proc for reconnect:", (hctx->host)->unixsocket);
    }
  } else {
    {
    fprintf(_coverage_fout, "1325\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1326\n");
  fflush(_coverage_fout);
  }
  if (hctx->proc) {
    {
    fprintf(_coverage_fout, "1327\n");
    fflush(_coverage_fout);
    }
    if (hctx->got_proc) {
      {
      fprintf(_coverage_fout, "1328\n");
      fflush(_coverage_fout);
      }
      ((hctx->proc)->load) --;
    } else {
      {
      fprintf(_coverage_fout, "1329\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1330\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1331\n");
  fflush(_coverage_fout);
  }
  ((hctx->host)->load) --;
  {
  fprintf(_coverage_fout, "1332\n");
  fflush(_coverage_fout);
  }
  hctx->host = (fcgi_extension_host *)((void *)0);
  {
  fprintf(_coverage_fout, "1333\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static handler_t fcgi_connection_reset(server *srv , connection *con ,
                                       void *p_d ) 
{ 
  plugin_data *p ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1334\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)p_d;
  {
  fprintf(_coverage_fout, "1335\n");
  fflush(_coverage_fout);
  }
  fcgi_connection_close(srv, (handler_ctx *)*(con->plugin_ctx + p->id));
  {
  fprintf(_coverage_fout, "1336\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )1);
}
}
static int fcgi_env_add(buffer *env , char const   *key , size_t key_len ,
                        char const   *val , size_t val_len ) 
{ 
  size_t len ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1337\n");
  fflush(_coverage_fout);
  }
  if (! key) {
    {
    fprintf(_coverage_fout, "1338\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1339\n");
    fflush(_coverage_fout);
    }
    if (! val) {
      {
      fprintf(_coverage_fout, "1340\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "1341\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "1342\n");
  fflush(_coverage_fout);
  }
  len = key_len + val_len;
  {
  fprintf(_coverage_fout, "1343\n");
  fflush(_coverage_fout);
  }
  if (key_len > 127U) {
    {
    fprintf(_coverage_fout, "1344\n");
    fflush(_coverage_fout);
    }
    tmp = 4;
  } else {
    {
    fprintf(_coverage_fout, "1345\n");
    fflush(_coverage_fout);
    }
    tmp = 1;
  }
  {
  fprintf(_coverage_fout, "1346\n");
  fflush(_coverage_fout);
  }
  len += (size_t )tmp;
  {
  fprintf(_coverage_fout, "1347\n");
  fflush(_coverage_fout);
  }
  if (val_len > 127U) {
    {
    fprintf(_coverage_fout, "1348\n");
    fflush(_coverage_fout);
    }
    tmp___0 = 4;
  } else {
    {
    fprintf(_coverage_fout, "1349\n");
    fflush(_coverage_fout);
    }
    tmp___0 = 1;
  }
  {
  fprintf(_coverage_fout, "1350\n");
  fflush(_coverage_fout);
  }
  len += (size_t )tmp___0;
  {
  fprintf(_coverage_fout, "1351\n");
  fflush(_coverage_fout);
  }
  buffer_prepare_append(env, len);
  {
  fprintf(_coverage_fout, "1352\n");
  fflush(_coverage_fout);
  }
  if (key_len > 127U) {
    {
    fprintf(_coverage_fout, "1353\n");
    fflush(_coverage_fout);
    }
    tmp___1 = env->used;
    {
    fprintf(_coverage_fout, "1354\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1355\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___1) = (char )(((key_len >> 24) & 255U) | 128U);
    {
    fprintf(_coverage_fout, "1356\n");
    fflush(_coverage_fout);
    }
    tmp___2 = env->used;
    {
    fprintf(_coverage_fout, "1357\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1358\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___2) = (char )((key_len >> 16) & 255U);
    {
    fprintf(_coverage_fout, "1359\n");
    fflush(_coverage_fout);
    }
    tmp___3 = env->used;
    {
    fprintf(_coverage_fout, "1360\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1361\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___3) = (char )((key_len >> 8) & 255U);
    {
    fprintf(_coverage_fout, "1362\n");
    fflush(_coverage_fout);
    }
    tmp___4 = env->used;
    {
    fprintf(_coverage_fout, "1363\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1364\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___4) = (char )(key_len & 255U);
  } else {
    {
    fprintf(_coverage_fout, "1365\n");
    fflush(_coverage_fout);
    }
    tmp___5 = env->used;
    {
    fprintf(_coverage_fout, "1366\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1367\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___5) = (char )(key_len & 255U);
  }
  {
  fprintf(_coverage_fout, "1368\n");
  fflush(_coverage_fout);
  }
  if (val_len > 127U) {
    {
    fprintf(_coverage_fout, "1369\n");
    fflush(_coverage_fout);
    }
    tmp___6 = env->used;
    {
    fprintf(_coverage_fout, "1370\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1371\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___6) = (char )(((val_len >> 24) & 255U) | 128U);
    {
    fprintf(_coverage_fout, "1372\n");
    fflush(_coverage_fout);
    }
    tmp___7 = env->used;
    {
    fprintf(_coverage_fout, "1373\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1374\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___7) = (char )((val_len >> 16) & 255U);
    {
    fprintf(_coverage_fout, "1375\n");
    fflush(_coverage_fout);
    }
    tmp___8 = env->used;
    {
    fprintf(_coverage_fout, "1376\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1377\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___8) = (char )((val_len >> 8) & 255U);
    {
    fprintf(_coverage_fout, "1378\n");
    fflush(_coverage_fout);
    }
    tmp___9 = env->used;
    {
    fprintf(_coverage_fout, "1379\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1380\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___9) = (char )(val_len & 255U);
  } else {
    {
    fprintf(_coverage_fout, "1381\n");
    fflush(_coverage_fout);
    }
    tmp___10 = env->used;
    {
    fprintf(_coverage_fout, "1382\n");
    fflush(_coverage_fout);
    }
    (env->used) ++;
    {
    fprintf(_coverage_fout, "1383\n");
    fflush(_coverage_fout);
    }
    *(env->ptr + tmp___10) = (char )(val_len & 255U);
  }
  {
  fprintf(_coverage_fout, "1384\n");
  fflush(_coverage_fout);
  }
  memcpy((void */* __restrict  */)((void *)(env->ptr + env->used)),
         (void const   */* __restrict  */)((void const   *)key), key_len);
  {
  fprintf(_coverage_fout, "1385\n");
  fflush(_coverage_fout);
  }
  env->used += key_len;
  {
  fprintf(_coverage_fout, "1386\n");
  fflush(_coverage_fout);
  }
  memcpy((void */* __restrict  */)((void *)(env->ptr + env->used)),
         (void const   */* __restrict  */)((void const   *)val), val_len);
  {
  fprintf(_coverage_fout, "1387\n");
  fflush(_coverage_fout);
  }
  env->used += val_len;
  {
  fprintf(_coverage_fout, "1388\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static int fcgi_header(FCGI_Header *header , unsigned char type ,
                       size_t request_id , int contentLength ,
                       unsigned char paddingLength ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1389\n");
  fflush(_coverage_fout);
  }
  header->version = (unsigned char)1;
  {
  fprintf(_coverage_fout, "1390\n");
  fflush(_coverage_fout);
  }
  header->type = type;
  {
  fprintf(_coverage_fout, "1391\n");
  fflush(_coverage_fout);
  }
  header->requestIdB0 = (unsigned char )(request_id & 255U);
  {
  fprintf(_coverage_fout, "1392\n");
  fflush(_coverage_fout);
  }
  header->requestIdB1 = (unsigned char )((request_id >> 8) & 255U);
  {
  fprintf(_coverage_fout, "1393\n");
  fflush(_coverage_fout);
  }
  header->contentLengthB0 = (unsigned char )(contentLength & 255);
  {
  fprintf(_coverage_fout, "1394\n");
  fflush(_coverage_fout);
  }
  header->contentLengthB1 = (unsigned char )((contentLength >> 8) & 255);
  {
  fprintf(_coverage_fout, "1395\n");
  fflush(_coverage_fout);
  }
  header->paddingLength = paddingLength;
  {
  fprintf(_coverage_fout, "1396\n");
  fflush(_coverage_fout);
  }
  header->reserved = (unsigned char)0;
  {
  fprintf(_coverage_fout, "1397\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static connection_result_t fcgi_establish_connection(server *srv ,
                                                     handler_ctx *hctx ) 
{ 
  struct sockaddr *fcgi_addr ;
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
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1398\n");
  fflush(_coverage_fout);
  }
  host = hctx->host;
  {
  fprintf(_coverage_fout, "1399\n");
  fflush(_coverage_fout);
  }
  proc = hctx->proc;
  {
  fprintf(_coverage_fout, "1400\n");
  fflush(_coverage_fout);
  }
  fcgi_fd = hctx->fd;
  {
  fprintf(_coverage_fout, "1401\n");
  fflush(_coverage_fout);
  }
  memset((void *)(& fcgi_addr), 0, (size_t )sizeof(fcgi_addr));
  {
  fprintf(_coverage_fout, "1402\n");
  fflush(_coverage_fout);
  }
  tmp___3 = buffer_is_empty(proc->unixsocket);
  {
  fprintf(_coverage_fout, "1403\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "1404\n");
    fflush(_coverage_fout);
    }
    fcgi_addr_in.sin_family = (unsigned short)2;
    {
    fprintf(_coverage_fout, "1405\n");
    fflush(_coverage_fout);
    }
    tmp___1 = inet_aton((char const   *)(host->host)->ptr,
                        & fcgi_addr_in.sin_addr);
    {
    fprintf(_coverage_fout, "1406\n");
    fflush(_coverage_fout);
    }
    if (0 == tmp___1) {
      {
      fprintf(_coverage_fout, "1407\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 1668U, "sbs",
                      "converting IP address failed for", host->host,
                      "\nBe sure to specify an IP address here");
      {
      fprintf(_coverage_fout, "1408\n");
      fflush(_coverage_fout);
      }
      return ((enum __anonenum_connection_result_t_154 )-1);
    } else {
      {
      fprintf(_coverage_fout, "1409\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1410\n");
    fflush(_coverage_fout);
    }
    __x = (unsigned short )proc->port;
    {
    fprintf(_coverage_fout, "1411\n");
    fflush(_coverage_fout);
    }
    __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    {
    fprintf(_coverage_fout, "1412\n");
    fflush(_coverage_fout);
    }
    fcgi_addr_in.sin_port = __v;
    {
    fprintf(_coverage_fout, "1413\n");
    fflush(_coverage_fout);
    }
    servlen = (socklen_t )sizeof(fcgi_addr_in);
    {
    fprintf(_coverage_fout, "1414\n");
    fflush(_coverage_fout);
    }
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_in);
    {
    fprintf(_coverage_fout, "1415\n");
    fflush(_coverage_fout);
    }
    tmp___2 = buffer_is_empty(proc->connection_name);
    {
    fprintf(_coverage_fout, "1416\n");
    fflush(_coverage_fout);
    }
    if (tmp___2) {
      {
      fprintf(_coverage_fout, "1417\n");
      fflush(_coverage_fout);
      }
      buffer_copy_string(proc->connection_name, "tcp:");
      {
      fprintf(_coverage_fout, "1418\n");
      fflush(_coverage_fout);
      }
      buffer_append_string_buffer(proc->connection_name,
                                  (buffer const   *)host->host);
      {
      fprintf(_coverage_fout, "1419\n");
      fflush(_coverage_fout);
      }
      buffer_append_string(proc->connection_name, ":");
      {
      fprintf(_coverage_fout, "1420\n");
      fflush(_coverage_fout);
      }
      buffer_append_long(proc->connection_name, (long )proc->port);
    } else {
      {
      fprintf(_coverage_fout, "1421\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1422\n");
    fflush(_coverage_fout);
    }
    fcgi_addr_un.sun_family = (unsigned short)1;
    {
    fprintf(_coverage_fout, "1423\n");
    fflush(_coverage_fout);
    }
    strcpy((char */* __restrict  */)(fcgi_addr_un.sun_path),
           (char const   */* __restrict  */)((char const   *)(proc->unixsocket)->ptr));
    {
    fprintf(_coverage_fout, "1424\n");
    fflush(_coverage_fout);
    }
    tmp = strlen((char const   *)(fcgi_addr_un.sun_path));
    {
    fprintf(_coverage_fout, "1425\n");
    fflush(_coverage_fout);
    }
    servlen = (unsigned int )(((struct sockaddr_un *)0)->sun_path) + tmp;
    {
    fprintf(_coverage_fout, "1426\n");
    fflush(_coverage_fout);
    }
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_un);
    {
    fprintf(_coverage_fout, "1427\n");
    fflush(_coverage_fout);
    }
    tmp___0 = buffer_is_empty(proc->connection_name);
    {
    fprintf(_coverage_fout, "1428\n");
    fflush(_coverage_fout);
    }
    if (tmp___0) {
      {
      fprintf(_coverage_fout, "1429\n");
      fflush(_coverage_fout);
      }
      buffer_copy_string(proc->connection_name, "unix:");
      {
      fprintf(_coverage_fout, "1430\n");
      fflush(_coverage_fout);
      }
      buffer_append_string_buffer(proc->connection_name,
                                  (buffer const   *)proc->unixsocket);
    } else {
      {
      fprintf(_coverage_fout, "1431\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "1432\n");
  fflush(_coverage_fout);
  }
  tmp___10 = connect(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
  {
  fprintf(_coverage_fout, "1433\n");
  fflush(_coverage_fout);
  }
  if (-1 == tmp___10) {
    {
    fprintf(_coverage_fout, "1434\n");
    fflush(_coverage_fout);
    }
    tmp___7 = __errno_location();
    {
    fprintf(_coverage_fout, "1435\n");
    fflush(_coverage_fout);
    }
    if (*tmp___7 == 115) {
      {
      fprintf(_coverage_fout, "1436\n");
      fflush(_coverage_fout);
      }
      goto _L;
    } else {
      {
      fprintf(_coverage_fout, "1437\n");
      fflush(_coverage_fout);
      }
      tmp___8 = __errno_location();
      {
      fprintf(_coverage_fout, "1438\n");
      fflush(_coverage_fout);
      }
      if (*tmp___8 == 114) {
        {
        fprintf(_coverage_fout, "1439\n");
        fflush(_coverage_fout);
        }
        goto _L;
      } else {
        {
        fprintf(_coverage_fout, "1440\n");
        fflush(_coverage_fout);
        }
        tmp___9 = __errno_location();
        {
        fprintf(_coverage_fout, "1441\n");
        fflush(_coverage_fout);
        }
        if (*tmp___9 == 4) {
          {
          fprintf(_coverage_fout, "1442\n");
          fflush(_coverage_fout);
          }
          _L: 
          if (hctx->conf.debug > 2) {
            {
            fprintf(_coverage_fout, "1443\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 1693U, "sb",
                            "connect delayed; will continue later:",
                            proc->connection_name);
          } else {
            {
            fprintf(_coverage_fout, "1444\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "1445\n");
          fflush(_coverage_fout);
          }
          return ((connection_result_t )2);
        } else {
          {
          fprintf(_coverage_fout, "1446\n");
          fflush(_coverage_fout);
          }
          tmp___6 = __errno_location();
          {
          fprintf(_coverage_fout, "1447\n");
          fflush(_coverage_fout);
          }
          if (*tmp___6 == 11) {
            {
            fprintf(_coverage_fout, "1448\n");
            fflush(_coverage_fout);
            }
            if (hctx->conf.debug) {
              {
              fprintf(_coverage_fout, "1449\n");
              fflush(_coverage_fout);
              }
              log_error_write(srv, "mod_fastcgi.c", 1700U, "sbsd",
                              "This means that you have more incoming requests than your FastCGI backend can handle in parallel.It might help to spawn more FastCGI backends or PHP children; if not, decrease server.max-connections.The load for this FastCGI backend",
                              proc->connection_name, "is", proc->load);
            } else {
              {
              fprintf(_coverage_fout, "1450\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "1451\n");
            fflush(_coverage_fout);
            }
            return ((connection_result_t )3);
          } else {
            {
            fprintf(_coverage_fout, "1452\n");
            fflush(_coverage_fout);
            }
            tmp___4 = __errno_location();
            {
            fprintf(_coverage_fout, "1453\n");
            fflush(_coverage_fout);
            }
            tmp___5 = strerror(*tmp___4);
            {
            fprintf(_coverage_fout, "1454\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 1708U, "sssb",
                            "connect failed:", tmp___5, "on",
                            proc->connection_name);
            {
            fprintf(_coverage_fout, "1455\n");
            fflush(_coverage_fout);
            }
            return ((connection_result_t )4);
          }
        }
      }
    }
  } else {
    {
    fprintf(_coverage_fout, "1456\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1457\n");
  fflush(_coverage_fout);
  }
  hctx->reconnects = 0;
  {
  fprintf(_coverage_fout, "1458\n");
  fflush(_coverage_fout);
  }
  if (hctx->conf.debug > 1) {
    {
    fprintf(_coverage_fout, "1459\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 1719U, "sd", "connect succeeded: ",
                    fcgi_fd);
  } else {
    {
    fprintf(_coverage_fout, "1460\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1461\n");
  fflush(_coverage_fout);
  }
  return ((connection_result_t )1);
}
}
static int fcgi_env_add_request_headers(server *srv , connection *con ,
                                        plugin_data *p ) 
{ 
  size_t i ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1462\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "1463\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1464\n");
    fflush(_coverage_fout);
    }
    if (i < (con->request.headers)->used) {
      {
      fprintf(_coverage_fout, "1465\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1466\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1467\n");
    fflush(_coverage_fout);
    }
    ds = (data_string *)*((con->request.headers)->data + i);
    {
    fprintf(_coverage_fout, "1468\n");
    fflush(_coverage_fout);
    }
    if ((ds->value)->used) {
      {
      fprintf(_coverage_fout, "1469\n");
      fflush(_coverage_fout);
      }
      if ((ds->key)->used) {
        {
        fprintf(_coverage_fout, "1470\n");
        fflush(_coverage_fout);
        }
        buffer_reset(srv->tmp_buf);
        {
        fprintf(_coverage_fout, "1471\n");
        fflush(_coverage_fout);
        }
        tmp = strcasecmp((char const   *)(ds->key)->ptr, "CONTENT-TYPE");
        {
        fprintf(_coverage_fout, "1472\n");
        fflush(_coverage_fout);
        }
        if (0 != tmp) {
          {
          fprintf(_coverage_fout, "1473\n");
          fflush(_coverage_fout);
          }
          buffer_copy_string_len(srv->tmp_buf, "HTTP_",
                                 (size_t )(sizeof("HTTP_") - 1UL));
          {
          fprintf(_coverage_fout, "1474\n");
          fflush(_coverage_fout);
          }
          ((srv->tmp_buf)->used) --;
        } else {
          {
          fprintf(_coverage_fout, "1475\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "1476\n");
        fflush(_coverage_fout);
        }
        buffer_prepare_append(srv->tmp_buf, (ds->key)->used + 2U);
        {
        fprintf(_coverage_fout, "1477\n");
        fflush(_coverage_fout);
        }
        j = 0U;
        {
        fprintf(_coverage_fout, "1478\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "1479\n");
          fflush(_coverage_fout);
          }
          if (j < (ds->key)->used - 1U) {
            {
            fprintf(_coverage_fout, "1480\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "1481\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "1482\n");
          fflush(_coverage_fout);
          }
          c = (char )'_';
          {
          fprintf(_coverage_fout, "1483\n");
          fflush(_coverage_fout);
          }
          tmp___1 = light_isalpha((int )*((ds->key)->ptr + j));
          {
          fprintf(_coverage_fout, "1484\n");
          fflush(_coverage_fout);
          }
          if (tmp___1) {
            {
            fprintf(_coverage_fout, "1485\n");
            fflush(_coverage_fout);
            }
            c = (char )((int )*((ds->key)->ptr + j) & -33);
          } else {
            {
            fprintf(_coverage_fout, "1486\n");
            fflush(_coverage_fout);
            }
            tmp___0 = light_isdigit((int )*((ds->key)->ptr + j));
            {
            fprintf(_coverage_fout, "1487\n");
            fflush(_coverage_fout);
            }
            if (tmp___0) {
              {
              fprintf(_coverage_fout, "1488\n");
              fflush(_coverage_fout);
              }
              c = *((ds->key)->ptr + j);
            } else {
              {
              fprintf(_coverage_fout, "1489\n");
              fflush(_coverage_fout);
              }

            }
          }
          {
          fprintf(_coverage_fout, "1490\n");
          fflush(_coverage_fout);
          }
          tmp___2 = (srv->tmp_buf)->used;
          {
          fprintf(_coverage_fout, "1491\n");
          fflush(_coverage_fout);
          }
          ((srv->tmp_buf)->used) ++;
          {
          fprintf(_coverage_fout, "1492\n");
          fflush(_coverage_fout);
          }
          *((srv->tmp_buf)->ptr + tmp___2) = c;
          {
          fprintf(_coverage_fout, "1493\n");
          fflush(_coverage_fout);
          }
          j ++;
        }
        {
        fprintf(_coverage_fout, "1494\n");
        fflush(_coverage_fout);
        }
        tmp___3 = (srv->tmp_buf)->used;
        {
        fprintf(_coverage_fout, "1495\n");
        fflush(_coverage_fout);
        }
        ((srv->tmp_buf)->used) ++;
        {
        fprintf(_coverage_fout, "1496\n");
        fflush(_coverage_fout);
        }
        *((srv->tmp_buf)->ptr + tmp___3) = (char )'\000';
        {
        fprintf(_coverage_fout, "1497\n");
        fflush(_coverage_fout);
        }
        if ((ds->value)->used) {
          {
          fprintf(_coverage_fout, "1498\n");
          fflush(_coverage_fout);
          }
          tmp___4 = (ds->value)->used - 1U;
        } else {
          {
          fprintf(_coverage_fout, "1499\n");
          fflush(_coverage_fout);
          }
          tmp___4 = 0U;
        }
        {
        fprintf(_coverage_fout, "1500\n");
        fflush(_coverage_fout);
        }
        if ((srv->tmp_buf)->used) {
          {
          fprintf(_coverage_fout, "1501\n");
          fflush(_coverage_fout);
          }
          tmp___5 = (srv->tmp_buf)->used - 1U;
        } else {
          {
          fprintf(_coverage_fout, "1502\n");
          fflush(_coverage_fout);
          }
          tmp___5 = 0U;
        }
        {
        fprintf(_coverage_fout, "1503\n");
        fflush(_coverage_fout);
        }
        fcgi_env_add(p->fcgi_env, (char const   *)(srv->tmp_buf)->ptr, tmp___5,
                     (char const   *)(ds->value)->ptr, tmp___4);
      } else {
        {
        fprintf(_coverage_fout, "1504\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "1505\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1506\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1507\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "1508\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1509\n");
    fflush(_coverage_fout);
    }
    if (i < (con->environment)->used) {
      {
      fprintf(_coverage_fout, "1510\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1511\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1512\n");
    fflush(_coverage_fout);
    }
    ds___0 = (data_string *)*((con->environment)->data + i);
    {
    fprintf(_coverage_fout, "1513\n");
    fflush(_coverage_fout);
    }
    if ((ds___0->value)->used) {
      {
      fprintf(_coverage_fout, "1514\n");
      fflush(_coverage_fout);
      }
      if ((ds___0->key)->used) {
        {
        fprintf(_coverage_fout, "1515\n");
        fflush(_coverage_fout);
        }
        buffer_reset(srv->tmp_buf);
        {
        fprintf(_coverage_fout, "1516\n");
        fflush(_coverage_fout);
        }
        buffer_prepare_append(srv->tmp_buf, (ds___0->key)->used + 2U);
        {
        fprintf(_coverage_fout, "1517\n");
        fflush(_coverage_fout);
        }
        j___0 = 0U;
        {
        fprintf(_coverage_fout, "1518\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "1519\n");
          fflush(_coverage_fout);
          }
          if (j___0 < (ds___0->key)->used - 1U) {
            {
            fprintf(_coverage_fout, "1520\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "1521\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "1522\n");
          fflush(_coverage_fout);
          }
          c___0 = (char )'_';
          {
          fprintf(_coverage_fout, "1523\n");
          fflush(_coverage_fout);
          }
          tmp___7 = light_isalpha((int )*((ds___0->key)->ptr + j___0));
          {
          fprintf(_coverage_fout, "1524\n");
          fflush(_coverage_fout);
          }
          if (tmp___7) {
            {
            fprintf(_coverage_fout, "1525\n");
            fflush(_coverage_fout);
            }
            c___0 = (char )((int )*((ds___0->key)->ptr + j___0) & -33);
          } else {
            {
            fprintf(_coverage_fout, "1526\n");
            fflush(_coverage_fout);
            }
            tmp___6 = light_isdigit((int )*((ds___0->key)->ptr + j___0));
            {
            fprintf(_coverage_fout, "1527\n");
            fflush(_coverage_fout);
            }
            if (tmp___6) {
              {
              fprintf(_coverage_fout, "1528\n");
              fflush(_coverage_fout);
              }
              c___0 = *((ds___0->key)->ptr + j___0);
            } else {
              {
              fprintf(_coverage_fout, "1529\n");
              fflush(_coverage_fout);
              }

            }
          }
          {
          fprintf(_coverage_fout, "1530\n");
          fflush(_coverage_fout);
          }
          tmp___8 = (srv->tmp_buf)->used;
          {
          fprintf(_coverage_fout, "1531\n");
          fflush(_coverage_fout);
          }
          ((srv->tmp_buf)->used) ++;
          {
          fprintf(_coverage_fout, "1532\n");
          fflush(_coverage_fout);
          }
          *((srv->tmp_buf)->ptr + tmp___8) = c___0;
          {
          fprintf(_coverage_fout, "1533\n");
          fflush(_coverage_fout);
          }
          j___0 ++;
        }
        {
        fprintf(_coverage_fout, "1534\n");
        fflush(_coverage_fout);
        }
        tmp___9 = (srv->tmp_buf)->used;
        {
        fprintf(_coverage_fout, "1535\n");
        fflush(_coverage_fout);
        }
        ((srv->tmp_buf)->used) ++;
        {
        fprintf(_coverage_fout, "1536\n");
        fflush(_coverage_fout);
        }
        *((srv->tmp_buf)->ptr + tmp___9) = (char )'\000';
        {
        fprintf(_coverage_fout, "1537\n");
        fflush(_coverage_fout);
        }
        if ((ds___0->value)->used) {
          {
          fprintf(_coverage_fout, "1538\n");
          fflush(_coverage_fout);
          }
          tmp___10 = (ds___0->value)->used - 1U;
        } else {
          {
          fprintf(_coverage_fout, "1539\n");
          fflush(_coverage_fout);
          }
          tmp___10 = 0U;
        }
        {
        fprintf(_coverage_fout, "1540\n");
        fflush(_coverage_fout);
        }
        if ((srv->tmp_buf)->used) {
          {
          fprintf(_coverage_fout, "1541\n");
          fflush(_coverage_fout);
          }
          tmp___11 = (srv->tmp_buf)->used - 1U;
        } else {
          {
          fprintf(_coverage_fout, "1542\n");
          fflush(_coverage_fout);
          }
          tmp___11 = 0U;
        }
        {
        fprintf(_coverage_fout, "1543\n");
        fflush(_coverage_fout);
        }
        fcgi_env_add(p->fcgi_env, (char const   *)(srv->tmp_buf)->ptr, tmp___11,
                     (char const   *)(ds___0->value)->ptr, tmp___10);
      } else {
        {
        fprintf(_coverage_fout, "1544\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "1545\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1546\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "1547\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static int fcgi_create_env(server *srv , handler_ctx *hctx , size_t request_id ) 
{ 
  FCGI_BeginRequestRecord beginRecord ;
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
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1548\n");
  fflush(_coverage_fout);
  }
  p = hctx->plugin_data;
  {
  fprintf(_coverage_fout, "1549\n");
  fflush(_coverage_fout);
  }
  host = hctx->host;
  {
  fprintf(_coverage_fout, "1550\n");
  fflush(_coverage_fout);
  }
  con = hctx->remote_conn;
  {
  fprintf(_coverage_fout, "1551\n");
  fflush(_coverage_fout);
  }
  srv_sock = (server_socket *)con->srv_socket;
  {
  fprintf(_coverage_fout, "1552\n");
  fflush(_coverage_fout);
  }
  fcgi_header(& beginRecord.header, (unsigned char)1, request_id,
              (int )sizeof(beginRecord.body), (unsigned char)0);
  {
  fprintf(_coverage_fout, "1553\n");
  fflush(_coverage_fout);
  }
  beginRecord.body.roleB0 = (unsigned char )host->mode;
  {
  fprintf(_coverage_fout, "1554\n");
  fflush(_coverage_fout);
  }
  beginRecord.body.roleB1 = (unsigned char)0;
  {
  fprintf(_coverage_fout, "1555\n");
  fflush(_coverage_fout);
  }
  beginRecord.body.flags = (unsigned char)0;
  {
  fprintf(_coverage_fout, "1556\n");
  fflush(_coverage_fout);
  }
  memset((void *)(beginRecord.body.reserved), 0,
         (size_t )sizeof(beginRecord.body.reserved));
  {
  fprintf(_coverage_fout, "1557\n");
  fflush(_coverage_fout);
  }
  b = chunkqueue_get_append_buffer(hctx->wb);
  {
  fprintf(_coverage_fout, "1558\n");
  fflush(_coverage_fout);
  }
  buffer_copy_memory(b, (char const   *)(& beginRecord),
                     (size_t )sizeof(beginRecord));
  {
  fprintf(_coverage_fout, "1559\n");
  fflush(_coverage_fout);
  }
  buffer_prepare_copy(p->fcgi_env, 1024U);
  {
  fprintf(_coverage_fout, "1560\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "SERVER_SOFTWARE",
               (size_t )(sizeof("SERVER_SOFTWARE") - 1UL), "lighttpd/1.4.17",
               (size_t )(sizeof("lighttpd/1.4.17") - 1UL));
  {
  fprintf(_coverage_fout, "1561\n");
  fflush(_coverage_fout);
  }
  if ((con->server_name)->used) {
    {
    fprintf(_coverage_fout, "1562\n");
    fflush(_coverage_fout);
    }
    if ((con->server_name)->used) {
      {
      fprintf(_coverage_fout, "1563\n");
      fflush(_coverage_fout);
      }
      tmp = (con->server_name)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1564\n");
      fflush(_coverage_fout);
      }
      tmp = 0U;
    }
    {
    fprintf(_coverage_fout, "1565\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "SERVER_NAME",
                 (size_t )(sizeof("SERVER_NAME") - 1UL),
                 (char const   *)(con->server_name)->ptr, tmp);
  } else {
    {
    fprintf(_coverage_fout, "1566\n");
    fflush(_coverage_fout);
    }
    if ((int )srv_sock->addr.plain.sa_family == 10) {
      {
      fprintf(_coverage_fout, "1567\n");
      fflush(_coverage_fout);
      }
      tmp___0 = (void const   *)(& srv_sock->addr.ipv6.sin6_addr);
    } else {
      {
      fprintf(_coverage_fout, "1568\n");
      fflush(_coverage_fout);
      }
      tmp___0 = (void const   *)(& srv_sock->addr.ipv4.sin_addr);
    }
    {
    fprintf(_coverage_fout, "1569\n");
    fflush(_coverage_fout);
    }
    s = inet_ntop((int )srv_sock->addr.plain.sa_family,
                  (void const   */* __restrict  */)tmp___0,
                  (char */* __restrict  */)(b2), (socklen_t )(sizeof(b2) - 1UL));
    {
    fprintf(_coverage_fout, "1570\n");
    fflush(_coverage_fout);
    }
    tmp___1 = strlen(s);
    {
    fprintf(_coverage_fout, "1571\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "SERVER_NAME",
                 (size_t )(sizeof("SERVER_NAME") - 1UL), s, tmp___1);
  }
  {
  fprintf(_coverage_fout, "1572\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "GATEWAY_INTERFACE",
               (size_t )(sizeof("GATEWAY_INTERFACE") - 1UL), "CGI/1.1",
               (size_t )(sizeof("CGI/1.1") - 1UL));
  {
  fprintf(_coverage_fout, "1573\n");
  fflush(_coverage_fout);
  }
  if (srv_sock->addr.plain.sa_family) {
    {
    fprintf(_coverage_fout, "1574\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )srv_sock->addr.ipv6.sin6_port;
  } else {
    {
    fprintf(_coverage_fout, "1575\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )srv_sock->addr.ipv4.sin_port;
  }
  {
  fprintf(_coverage_fout, "1576\n");
  fflush(_coverage_fout);
  }
  __x = (unsigned short )tmp___2;
  {
  fprintf(_coverage_fout, "1577\n");
  fflush(_coverage_fout);
  }
  __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
  {
  fprintf(_coverage_fout, "1578\n");
  fflush(_coverage_fout);
  }
  LI_ltostr(buf, (long )__v);
  {
  fprintf(_coverage_fout, "1579\n");
  fflush(_coverage_fout);
  }
  tmp___3 = strlen((char const   *)(buf));
  {
  fprintf(_coverage_fout, "1580\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "SERVER_PORT",
               (size_t )(sizeof("SERVER_PORT") - 1UL), (char const   *)(buf),
               tmp___3);
  {
  fprintf(_coverage_fout, "1581\n");
  fflush(_coverage_fout);
  }
  our_addr_len = (socklen_t )sizeof(our_addr);
  {
  fprintf(_coverage_fout, "1582\n");
  fflush(_coverage_fout);
  }
  tmp___4 = getsockname(con->fd,
                        (struct sockaddr */* __restrict  */)(& our_addr.plain),
                        (socklen_t */* __restrict  */)(& our_addr_len));
  {
  fprintf(_coverage_fout, "1583\n");
  fflush(_coverage_fout);
  }
  if (-1 == tmp___4) {
    {
    fprintf(_coverage_fout, "1584\n");
    fflush(_coverage_fout);
    }
    s = inet_ntop_cache_get_ip(srv, & srv_sock->addr);
  } else {
    {
    fprintf(_coverage_fout, "1585\n");
    fflush(_coverage_fout);
    }
    s = inet_ntop_cache_get_ip(srv, & our_addr);
  }
  {
  fprintf(_coverage_fout, "1586\n");
  fflush(_coverage_fout);
  }
  tmp___5 = strlen(s);
  {
  fprintf(_coverage_fout, "1587\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "SERVER_ADDR",
               (size_t )(sizeof("SERVER_ADDR") - 1UL), s, tmp___5);
  {
  fprintf(_coverage_fout, "1588\n");
  fflush(_coverage_fout);
  }
  if (con->dst_addr.plain.sa_family) {
    {
    fprintf(_coverage_fout, "1589\n");
    fflush(_coverage_fout);
    }
    tmp___6 = (int )con->dst_addr.ipv6.sin6_port;
  } else {
    {
    fprintf(_coverage_fout, "1590\n");
    fflush(_coverage_fout);
    }
    tmp___6 = (int )con->dst_addr.ipv4.sin_port;
  }
  {
  fprintf(_coverage_fout, "1591\n");
  fflush(_coverage_fout);
  }
  __x___0 = (unsigned short )tmp___6;
  {
  fprintf(_coverage_fout, "1592\n");
  fflush(_coverage_fout);
  }
  __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
  {
  fprintf(_coverage_fout, "1593\n");
  fflush(_coverage_fout);
  }
  LI_ltostr(buf, (long )__v___0);
  {
  fprintf(_coverage_fout, "1594\n");
  fflush(_coverage_fout);
  }
  tmp___7 = strlen((char const   *)(buf));
  {
  fprintf(_coverage_fout, "1595\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "REMOTE_PORT",
               (size_t )(sizeof("REMOTE_PORT") - 1UL), (char const   *)(buf),
               tmp___7);
  {
  fprintf(_coverage_fout, "1596\n");
  fflush(_coverage_fout);
  }
  s = inet_ntop_cache_get_ip(srv, & con->dst_addr);
  {
  fprintf(_coverage_fout, "1597\n");
  fflush(_coverage_fout);
  }
  tmp___8 = strlen(s);
  {
  fprintf(_coverage_fout, "1598\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "REMOTE_ADDR",
               (size_t )(sizeof("REMOTE_ADDR") - 1UL), s, tmp___8);
  {
  fprintf(_coverage_fout, "1599\n");
  fflush(_coverage_fout);
  }
  tmp___65 = buffer_is_empty(con->authed_user);
  {
  fprintf(_coverage_fout, "1600\n");
  fflush(_coverage_fout);
  }
  if (! tmp___65) {
    {
    fprintf(_coverage_fout, "1601\n");
    fflush(_coverage_fout);
    }
    http_authorization = (char *)((void *)0);
    {
    fprintf(_coverage_fout, "1602\n");
    fflush(_coverage_fout);
    }
    if ((con->authed_user)->used) {
      {
      fprintf(_coverage_fout, "1603\n");
      fflush(_coverage_fout);
      }
      tmp___9 = (con->authed_user)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1604\n");
      fflush(_coverage_fout);
      }
      tmp___9 = 0U;
    }
    {
    fprintf(_coverage_fout, "1605\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "REMOTE_USER",
                 (size_t )(sizeof("REMOTE_USER") - 1UL),
                 (char const   *)(con->authed_user)->ptr, tmp___9);
    {
    fprintf(_coverage_fout, "1606\n");
    fflush(_coverage_fout);
    }
    tmp___10 = array_get_element(con->request.headers, "Authorization");
    {
    fprintf(_coverage_fout, "1607\n");
    fflush(_coverage_fout);
    }
    ds = (data_string *)tmp___10;
    {
    fprintf(_coverage_fout, "1608\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )((void *)0) != (unsigned int )ds) {
      {
      fprintf(_coverage_fout, "1609\n");
      fflush(_coverage_fout);
      }
      http_authorization = (ds->value)->ptr;
    } else {
      {
      fprintf(_coverage_fout, "1610\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1611\n");
    fflush(_coverage_fout);
    }
    if (ds) {
      {
      fprintf(_coverage_fout, "1612\n");
      fflush(_coverage_fout);
      }
      if (ds->value) {
        {
        fprintf(_coverage_fout, "1613\n");
        fflush(_coverage_fout);
        }
        if ((ds->value)->used) {
          {
          fprintf(_coverage_fout, "1614\n");
          fflush(_coverage_fout);
          }
          tmp___64 = __builtin_strchr(http_authorization, ' ');
          {
          fprintf(_coverage_fout, "1615\n");
          fflush(_coverage_fout);
          }
          auth_realm = tmp___64;
          {
          fprintf(_coverage_fout, "1616\n");
          fflush(_coverage_fout);
          }
          if ((unsigned int )((void *)0) != (unsigned int )auth_realm) {
            {
            fprintf(_coverage_fout, "1617\n");
            fflush(_coverage_fout);
            }
            auth_type_len = (int )(auth_realm - http_authorization);
            {
            fprintf(_coverage_fout, "1618\n");
            fflush(_coverage_fout);
            }
            if (auth_type_len == 5) {
              {
              fprintf(_coverage_fout, "1619\n");
              fflush(_coverage_fout);
              }
              if (0) {
                {
                fprintf(_coverage_fout, "1620\n");
                fflush(_coverage_fout);
                }
                if (0) {
                  {
                  fprintf(_coverage_fout, "1621\n");
                  fflush(_coverage_fout);
                  }
                  __s1_len___2 = strlen((char const   *)http_authorization);
                  {
                  fprintf(_coverage_fout, "1622\n");
                  fflush(_coverage_fout);
                  }
                  __s2_len___2 = strlen("Basic");
                  {
                  fprintf(_coverage_fout, "1623\n");
                  fflush(_coverage_fout);
                  }
                  if (! ((unsigned int )((void const   *)(http_authorization + 1)) - (unsigned int )((void const   *)http_authorization) == 1U)) {
                    {
                    fprintf(_coverage_fout, "1624\n");
                    fflush(_coverage_fout);
                    }
                    goto _L___6;
                  } else {
                    {
                    fprintf(_coverage_fout, "1625\n");
                    fflush(_coverage_fout);
                    }
                    if (__s1_len___2 >= 4U) {
                      {
                      fprintf(_coverage_fout, "1626\n");
                      fflush(_coverage_fout);
                      }
                      _L___6: 
                      if (! ((unsigned int )((void const   *)("Basic" + 1)) - (unsigned int )((void const   *)"Basic") == 1U)) {
                        {
                        fprintf(_coverage_fout, "1627\n");
                        fflush(_coverage_fout);
                        }
                        tmp___60 = 1;
                      } else {
                        {
                        fprintf(_coverage_fout, "1628\n");
                        fflush(_coverage_fout);
                        }
                        if (__s2_len___2 >= 4U) {
                          {
                          fprintf(_coverage_fout, "1629\n");
                          fflush(_coverage_fout);
                          }
                          tmp___60 = 1;
                        } else {
                          {
                          fprintf(_coverage_fout, "1630\n");
                          fflush(_coverage_fout);
                          }
                          tmp___60 = 0;
                        }
                      }
                    } else {
                      {
                      fprintf(_coverage_fout, "1631\n");
                      fflush(_coverage_fout);
                      }
                      tmp___60 = 0;
                    }
                  }
                  {
                  fprintf(_coverage_fout, "1632\n");
                  fflush(_coverage_fout);
                  }
                  if (tmp___60) {
                    {
                    fprintf(_coverage_fout, "1633\n");
                    fflush(_coverage_fout);
                    }
                    tmp___56 = __builtin_strcmp((char const   *)http_authorization,
                                                "Basic");
                  } else {
                    {
                    fprintf(_coverage_fout, "1634\n");
                    fflush(_coverage_fout);
                    }
                    tmp___59 = __builtin_strcmp((char const   *)http_authorization,
                                                "Basic");
                    {
                    fprintf(_coverage_fout, "1635\n");
                    fflush(_coverage_fout);
                    }
                    tmp___56 = tmp___59;
                  }
                } else {
                  {
                  fprintf(_coverage_fout, "1636\n");
                  fflush(_coverage_fout);
                  }
                  tmp___59 = __builtin_strcmp((char const   *)http_authorization,
                                              "Basic");
                  {
                  fprintf(_coverage_fout, "1637\n");
                  fflush(_coverage_fout);
                  }
                  tmp___56 = tmp___59;
                }
                {
                fprintf(_coverage_fout, "1638\n");
                fflush(_coverage_fout);
                }
                tmp___50 = tmp___56;
              } else {
                {
                fprintf(_coverage_fout, "1639\n");
                fflush(_coverage_fout);
                }
                tmp___50 = strncmp((char const   *)http_authorization, "Basic",
                                   (unsigned int )auth_type_len);
              }
              {
              fprintf(_coverage_fout, "1640\n");
              fflush(_coverage_fout);
              }
              if (0 == tmp___50) {
                {
                fprintf(_coverage_fout, "1641\n");
                fflush(_coverage_fout);
                }
                fcgi_env_add(p->fcgi_env, "AUTH_TYPE",
                             (size_t )(sizeof("AUTH_TYPE") - 1UL), "Basic",
                             (size_t )(sizeof("Basic") - 1UL));
              } else {
                {
                fprintf(_coverage_fout, "1642\n");
                fflush(_coverage_fout);
                }
                goto _L___7;
              }
            } else {
              {
              fprintf(_coverage_fout, "1643\n");
              fflush(_coverage_fout);
              }
              _L___7: 
              if (auth_type_len == 6) {
                {
                fprintf(_coverage_fout, "1644\n");
                fflush(_coverage_fout);
                }
                if (0) {
                  {
                  fprintf(_coverage_fout, "1645\n");
                  fflush(_coverage_fout);
                  }
                  if (0) {
                    {
                    fprintf(_coverage_fout, "1646\n");
                    fflush(_coverage_fout);
                    }
                    __s1_len___0 = strlen((char const   *)http_authorization);
                    {
                    fprintf(_coverage_fout, "1647\n");
                    fflush(_coverage_fout);
                    }
                    __s2_len___0 = strlen("Digest");
                    {
                    fprintf(_coverage_fout, "1648\n");
                    fflush(_coverage_fout);
                    }
                    if (! ((unsigned int )((void const   *)(http_authorization + 1)) - (unsigned int )((void const   *)http_authorization) == 1U)) {
                      {
                      fprintf(_coverage_fout, "1649\n");
                      fflush(_coverage_fout);
                      }
                      goto _L___2;
                    } else {
                      {
                      fprintf(_coverage_fout, "1650\n");
                      fflush(_coverage_fout);
                      }
                      if (__s1_len___0 >= 4U) {
                        {
                        fprintf(_coverage_fout, "1651\n");
                        fflush(_coverage_fout);
                        }
                        _L___2: 
                        if (! ((unsigned int )((void const   *)("Digest" + 1)) - (unsigned int )((void const   *)"Digest") == 1U)) {
                          {
                          fprintf(_coverage_fout, "1652\n");
                          fflush(_coverage_fout);
                          }
                          tmp___34 = 1;
                        } else {
                          {
                          fprintf(_coverage_fout, "1653\n");
                          fflush(_coverage_fout);
                          }
                          if (__s2_len___0 >= 4U) {
                            {
                            fprintf(_coverage_fout, "1654\n");
                            fflush(_coverage_fout);
                            }
                            tmp___34 = 1;
                          } else {
                            {
                            fprintf(_coverage_fout, "1655\n");
                            fflush(_coverage_fout);
                            }
                            tmp___34 = 0;
                          }
                        }
                      } else {
                        {
                        fprintf(_coverage_fout, "1656\n");
                        fflush(_coverage_fout);
                        }
                        tmp___34 = 0;
                      }
                    }
                    {
                    fprintf(_coverage_fout, "1657\n");
                    fflush(_coverage_fout);
                    }
                    if (tmp___34) {
                      {
                      fprintf(_coverage_fout, "1658\n");
                      fflush(_coverage_fout);
                      }
                      tmp___30 = __builtin_strcmp((char const   *)http_authorization,
                                                  "Digest");
                    } else {
                      {
                      fprintf(_coverage_fout, "1659\n");
                      fflush(_coverage_fout);
                      }
                      tmp___33 = __builtin_strcmp((char const   *)http_authorization,
                                                  "Digest");
                      {
                      fprintf(_coverage_fout, "1660\n");
                      fflush(_coverage_fout);
                      }
                      tmp___30 = tmp___33;
                    }
                  } else {
                    {
                    fprintf(_coverage_fout, "1661\n");
                    fflush(_coverage_fout);
                    }
                    tmp___33 = __builtin_strcmp((char const   *)http_authorization,
                                                "Digest");
                    {
                    fprintf(_coverage_fout, "1662\n");
                    fflush(_coverage_fout);
                    }
                    tmp___30 = tmp___33;
                  }
                  {
                  fprintf(_coverage_fout, "1663\n");
                  fflush(_coverage_fout);
                  }
                  tmp___24 = tmp___30;
                } else {
                  {
                  fprintf(_coverage_fout, "1664\n");
                  fflush(_coverage_fout);
                  }
                  tmp___24 = strncmp((char const   *)http_authorization,
                                     "Digest", (unsigned int )auth_type_len);
                }
                {
                fprintf(_coverage_fout, "1665\n");
                fflush(_coverage_fout);
                }
                if (0 == tmp___24) {
                  {
                  fprintf(_coverage_fout, "1666\n");
                  fflush(_coverage_fout);
                  }
                  fcgi_env_add(p->fcgi_env, "AUTH_TYPE",
                               (size_t )(sizeof("AUTH_TYPE") - 1UL), "Digest",
                               (size_t )(sizeof("Digest") - 1UL));
                } else {
                  {
                  fprintf(_coverage_fout, "1667\n");
                  fflush(_coverage_fout);
                  }

                }
              } else {
                {
                fprintf(_coverage_fout, "1668\n");
                fflush(_coverage_fout);
                }

              }
            }
          } else {
            {
            fprintf(_coverage_fout, "1669\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "1670\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "1671\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "1672\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1673\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1674\n");
  fflush(_coverage_fout);
  }
  if (con->request.content_length > 0U) {
    {
    fprintf(_coverage_fout, "1675\n");
    fflush(_coverage_fout);
    }
    if ((int )host->mode != 2) {
      {
      fprintf(_coverage_fout, "1676\n");
      fflush(_coverage_fout);
      }
      LI_ltostr(buf, (long )con->request.content_length);
      {
      fprintf(_coverage_fout, "1677\n");
      fflush(_coverage_fout);
      }
      tmp___66 = strlen((char const   *)(buf));
      {
      fprintf(_coverage_fout, "1678\n");
      fflush(_coverage_fout);
      }
      fcgi_env_add(p->fcgi_env, "CONTENT_LENGTH",
                   (size_t )(sizeof("CONTENT_LENGTH") - 1UL),
                   (char const   *)(buf), tmp___66);
    } else {
      {
      fprintf(_coverage_fout, "1679\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1680\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1681\n");
  fflush(_coverage_fout);
  }
  if ((int )host->mode != 2) {
    {
    fprintf(_coverage_fout, "1682\n");
    fflush(_coverage_fout);
    }
    if ((con->uri.path)->used) {
      {
      fprintf(_coverage_fout, "1683\n");
      fflush(_coverage_fout);
      }
      tmp___67 = (con->uri.path)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1684\n");
      fflush(_coverage_fout);
      }
      tmp___67 = 0U;
    }
    {
    fprintf(_coverage_fout, "1685\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "SCRIPT_NAME",
                 (size_t )(sizeof("SCRIPT_NAME") - 1UL),
                 (char const   *)(con->uri.path)->ptr, tmp___67);
    {
    fprintf(_coverage_fout, "1686\n");
    fflush(_coverage_fout);
    }
    tmp___71 = buffer_is_empty(con->request.pathinfo);
    {
    fprintf(_coverage_fout, "1687\n");
    fflush(_coverage_fout);
    }
    if (tmp___71) {
      {
      fprintf(_coverage_fout, "1688\n");
      fflush(_coverage_fout);
      }
      fcgi_env_add(p->fcgi_env, "PATH_INFO",
                   (size_t )(sizeof("PATH_INFO") - 1UL), "",
                   (size_t )(sizeof("") - 1UL));
    } else {
      {
      fprintf(_coverage_fout, "1689\n");
      fflush(_coverage_fout);
      }
      if ((con->request.pathinfo)->used) {
        {
        fprintf(_coverage_fout, "1690\n");
        fflush(_coverage_fout);
        }
        tmp___68 = (con->request.pathinfo)->used - 1U;
      } else {
        {
        fprintf(_coverage_fout, "1691\n");
        fflush(_coverage_fout);
        }
        tmp___68 = 0U;
      }
      {
      fprintf(_coverage_fout, "1692\n");
      fflush(_coverage_fout);
      }
      fcgi_env_add(p->fcgi_env, "PATH_INFO",
                   (size_t )(sizeof("PATH_INFO") - 1UL),
                   (char const   *)(con->request.pathinfo)->ptr, tmp___68);
      {
      fprintf(_coverage_fout, "1693\n");
      fflush(_coverage_fout);
      }
      tmp___69 = buffer_is_empty(host->docroot);
      {
      fprintf(_coverage_fout, "1694\n");
      fflush(_coverage_fout);
      }
      if (tmp___69) {
        {
        fprintf(_coverage_fout, "1695\n");
        fflush(_coverage_fout);
        }
        buffer_copy_string_buffer(p->path,
                                  (buffer const   *)con->physical.doc_root);
      } else {
        {
        fprintf(_coverage_fout, "1696\n");
        fflush(_coverage_fout);
        }
        buffer_copy_string_buffer(p->path, (buffer const   *)host->docroot);
      }
      {
      fprintf(_coverage_fout, "1697\n");
      fflush(_coverage_fout);
      }
      buffer_append_string_buffer(p->path,
                                  (buffer const   *)con->request.pathinfo);
      {
      fprintf(_coverage_fout, "1698\n");
      fflush(_coverage_fout);
      }
      if ((p->path)->used) {
        {
        fprintf(_coverage_fout, "1699\n");
        fflush(_coverage_fout);
        }
        tmp___70 = (p->path)->used - 1U;
      } else {
        {
        fprintf(_coverage_fout, "1700\n");
        fflush(_coverage_fout);
        }
        tmp___70 = 0U;
      }
      {
      fprintf(_coverage_fout, "1701\n");
      fflush(_coverage_fout);
      }
      fcgi_env_add(p->fcgi_env, "PATH_TRANSLATED",
                   (size_t )(sizeof("PATH_TRANSLATED") - 1UL),
                   (char const   *)(p->path)->ptr, tmp___70);
    }
  } else {
    {
    fprintf(_coverage_fout, "1702\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1703\n");
  fflush(_coverage_fout);
  }
  tmp___76 = buffer_is_empty(host->docroot);
  {
  fprintf(_coverage_fout, "1704\n");
  fflush(_coverage_fout);
  }
  if (tmp___76) {
    {
    fprintf(_coverage_fout, "1705\n");
    fflush(_coverage_fout);
    }
    buffer_copy_string_buffer(p->path, (buffer const   *)con->physical.path);
    {
    fprintf(_coverage_fout, "1706\n");
    fflush(_coverage_fout);
    }
    if (host->break_scriptfilename_for_php) {
      {
      fprintf(_coverage_fout, "1707\n");
      fflush(_coverage_fout);
      }
      buffer_append_string_buffer(p->path,
                                  (buffer const   *)con->request.pathinfo);
    } else {
      {
      fprintf(_coverage_fout, "1708\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1709\n");
    fflush(_coverage_fout);
    }
    if ((p->path)->used) {
      {
      fprintf(_coverage_fout, "1710\n");
      fflush(_coverage_fout);
      }
      tmp___74 = (p->path)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1711\n");
      fflush(_coverage_fout);
      }
      tmp___74 = 0U;
    }
    {
    fprintf(_coverage_fout, "1712\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "SCRIPT_FILENAME",
                 (size_t )(sizeof("SCRIPT_FILENAME") - 1UL),
                 (char const   *)(p->path)->ptr, tmp___74);
    {
    fprintf(_coverage_fout, "1713\n");
    fflush(_coverage_fout);
    }
    if ((con->physical.doc_root)->used) {
      {
      fprintf(_coverage_fout, "1714\n");
      fflush(_coverage_fout);
      }
      tmp___75 = (con->physical.doc_root)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1715\n");
      fflush(_coverage_fout);
      }
      tmp___75 = 0U;
    }
    {
    fprintf(_coverage_fout, "1716\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "DOCUMENT_ROOT",
                 (size_t )(sizeof("DOCUMENT_ROOT") - 1UL),
                 (char const   *)(con->physical.doc_root)->ptr, tmp___75);
  } else {
    {
    fprintf(_coverage_fout, "1717\n");
    fflush(_coverage_fout);
    }
    buffer_copy_string_buffer(p->path, (buffer const   *)host->docroot);
    {
    fprintf(_coverage_fout, "1718\n");
    fflush(_coverage_fout);
    }
    buffer_append_string_buffer(p->path, (buffer const   *)con->uri.path);
    {
    fprintf(_coverage_fout, "1719\n");
    fflush(_coverage_fout);
    }
    if ((p->path)->used) {
      {
      fprintf(_coverage_fout, "1720\n");
      fflush(_coverage_fout);
      }
      tmp___72 = (p->path)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1721\n");
      fflush(_coverage_fout);
      }
      tmp___72 = 0U;
    }
    {
    fprintf(_coverage_fout, "1722\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "SCRIPT_FILENAME",
                 (size_t )(sizeof("SCRIPT_FILENAME") - 1UL),
                 (char const   *)(p->path)->ptr, tmp___72);
    {
    fprintf(_coverage_fout, "1723\n");
    fflush(_coverage_fout);
    }
    if ((host->docroot)->used) {
      {
      fprintf(_coverage_fout, "1724\n");
      fflush(_coverage_fout);
      }
      tmp___73 = (host->docroot)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1725\n");
      fflush(_coverage_fout);
      }
      tmp___73 = 0U;
    }
    {
    fprintf(_coverage_fout, "1726\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "DOCUMENT_ROOT",
                 (size_t )(sizeof("DOCUMENT_ROOT") - 1UL),
                 (char const   *)(host->docroot)->ptr, tmp___73);
  }
  {
  fprintf(_coverage_fout, "1727\n");
  fflush(_coverage_fout);
  }
  if ((host->strip_request_uri)->used > 1U) {
    {
    fprintf(_coverage_fout, "1728\n");
    fflush(_coverage_fout);
    }
    if (47 != (int )*((host->strip_request_uri)->ptr + ((host->strip_request_uri)->used - 2U))) {
      {
      fprintf(_coverage_fout, "1729\n");
      fflush(_coverage_fout);
      }
      buffer_append_string(host->strip_request_uri, "/");
    } else {
      {
      fprintf(_coverage_fout, "1730\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1731\n");
    fflush(_coverage_fout);
    }
    if ((con->request.orig_uri)->used >= (host->strip_request_uri)->used) {
      {
      fprintf(_coverage_fout, "1732\n");
      fflush(_coverage_fout);
      }
      if (0) {
        {
        fprintf(_coverage_fout, "1733\n");
        fflush(_coverage_fout);
        }
        if (0) {
          {
          fprintf(_coverage_fout, "1734\n");
          fflush(_coverage_fout);
          }
          __s1_len___4 = strlen((char const   *)(con->request.orig_uri)->ptr);
          {
          fprintf(_coverage_fout, "1735\n");
          fflush(_coverage_fout);
          }
          __s2_len___4 = strlen((char const   *)(host->strip_request_uri)->ptr);
          {
          fprintf(_coverage_fout, "1736\n");
          fflush(_coverage_fout);
          }
          if (! ((unsigned int )((void const   *)((con->request.orig_uri)->ptr + 1)) - (unsigned int )((void const   *)(con->request.orig_uri)->ptr) == 1U)) {
            {
            fprintf(_coverage_fout, "1737\n");
            fflush(_coverage_fout);
            }
            goto _L___11;
          } else {
            {
            fprintf(_coverage_fout, "1738\n");
            fflush(_coverage_fout);
            }
            if (__s1_len___4 >= 4U) {
              {
              fprintf(_coverage_fout, "1739\n");
              fflush(_coverage_fout);
              }
              _L___11: 
              if (! ((unsigned int )((void const   *)((host->strip_request_uri)->ptr + 1)) - (unsigned int )((void const   *)(host->strip_request_uri)->ptr) == 1U)) {
                {
                fprintf(_coverage_fout, "1740\n");
                fflush(_coverage_fout);
                }
                tmp___101 = 1;
              } else {
                {
                fprintf(_coverage_fout, "1741\n");
                fflush(_coverage_fout);
                }
                if (__s2_len___4 >= 4U) {
                  {
                  fprintf(_coverage_fout, "1742\n");
                  fflush(_coverage_fout);
                  }
                  tmp___101 = 1;
                } else {
                  {
                  fprintf(_coverage_fout, "1743\n");
                  fflush(_coverage_fout);
                  }
                  tmp___101 = 0;
                }
              }
            } else {
              {
              fprintf(_coverage_fout, "1744\n");
              fflush(_coverage_fout);
              }
              tmp___101 = 0;
            }
          }
          {
          fprintf(_coverage_fout, "1745\n");
          fflush(_coverage_fout);
          }
          if (tmp___101) {
            {
            fprintf(_coverage_fout, "1746\n");
            fflush(_coverage_fout);
            }
            tmp___97 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                        (char const   *)(host->strip_request_uri)->ptr);
          } else {
            {
            fprintf(_coverage_fout, "1747\n");
            fflush(_coverage_fout);
            }
            tmp___100 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                         (char const   *)(host->strip_request_uri)->ptr);
            {
            fprintf(_coverage_fout, "1748\n");
            fflush(_coverage_fout);
            }
            tmp___97 = tmp___100;
          }
        } else {
          {
          fprintf(_coverage_fout, "1749\n");
          fflush(_coverage_fout);
          }
          tmp___100 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                       (char const   *)(host->strip_request_uri)->ptr);
          {
          fprintf(_coverage_fout, "1750\n");
          fflush(_coverage_fout);
          }
          tmp___97 = tmp___100;
        }
        {
        fprintf(_coverage_fout, "1751\n");
        fflush(_coverage_fout);
        }
        tmp___91 = tmp___97;
      } else {
        {
        fprintf(_coverage_fout, "1752\n");
        fflush(_coverage_fout);
        }
        tmp___91 = strncmp((char const   *)(con->request.orig_uri)->ptr,
                           (char const   *)(host->strip_request_uri)->ptr,
                           (host->strip_request_uri)->used - 1U);
      }
      {
      fprintf(_coverage_fout, "1753\n");
      fflush(_coverage_fout);
      }
      if (0 == tmp___91) {
        {
        fprintf(_coverage_fout, "1754\n");
        fflush(_coverage_fout);
        }
        fcgi_env_add(p->fcgi_env, "REQUEST_URI",
                     (size_t )(sizeof("REQUEST_URI") - 1UL),
                     (char const   *)((con->request.orig_uri)->ptr + ((host->strip_request_uri)->used - 2U)),
                     (con->request.orig_uri)->used - ((host->strip_request_uri)->used - 2U));
      } else {
        {
        fprintf(_coverage_fout, "1755\n");
        fflush(_coverage_fout);
        }
        goto _L___12;
      }
    } else {
      {
      fprintf(_coverage_fout, "1756\n");
      fflush(_coverage_fout);
      }
      _L___12: 
      if ((con->request.orig_uri)->used) {
        {
        fprintf(_coverage_fout, "1757\n");
        fflush(_coverage_fout);
        }
        tmp___77 = (con->request.orig_uri)->used - 1U;
      } else {
        {
        fprintf(_coverage_fout, "1758\n");
        fflush(_coverage_fout);
        }
        tmp___77 = 0U;
      }
      {
      fprintf(_coverage_fout, "1759\n");
      fflush(_coverage_fout);
      }
      fcgi_env_add(p->fcgi_env, "REQUEST_URI",
                   (size_t )(sizeof("REQUEST_URI") - 1UL),
                   (char const   *)(con->request.orig_uri)->ptr, tmp___77);
    }
  } else {
    {
    fprintf(_coverage_fout, "1760\n");
    fflush(_coverage_fout);
    }
    if ((con->request.orig_uri)->used) {
      {
      fprintf(_coverage_fout, "1761\n");
      fflush(_coverage_fout);
      }
      tmp___104 = (con->request.orig_uri)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1762\n");
      fflush(_coverage_fout);
      }
      tmp___104 = 0U;
    }
    {
    fprintf(_coverage_fout, "1763\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "REQUEST_URI",
                 (size_t )(sizeof("REQUEST_URI") - 1UL),
                 (char const   *)(con->request.orig_uri)->ptr, tmp___104);
  }
  {
  fprintf(_coverage_fout, "1764\n");
  fflush(_coverage_fout);
  }
  tmp___106 = buffer_is_equal(con->request.uri, con->request.orig_uri);
  {
  fprintf(_coverage_fout, "1765\n");
  fflush(_coverage_fout);
  }
  if (! tmp___106) {
    {
    fprintf(_coverage_fout, "1766\n");
    fflush(_coverage_fout);
    }
    if ((con->request.uri)->used) {
      {
      fprintf(_coverage_fout, "1767\n");
      fflush(_coverage_fout);
      }
      tmp___105 = (con->request.uri)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1768\n");
      fflush(_coverage_fout);
      }
      tmp___105 = 0U;
    }
    {
    fprintf(_coverage_fout, "1769\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "REDIRECT_URI",
                 (size_t )(sizeof("REDIRECT_URI") - 1UL),
                 (char const   *)(con->request.uri)->ptr, tmp___105);
  } else {
    {
    fprintf(_coverage_fout, "1770\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1771\n");
  fflush(_coverage_fout);
  }
  tmp___108 = buffer_is_empty(con->uri.query);
  {
  fprintf(_coverage_fout, "1772\n");
  fflush(_coverage_fout);
  }
  if (tmp___108) {
    {
    fprintf(_coverage_fout, "1773\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "QUERY_STRING",
                 (size_t )(sizeof("QUERY_STRING") - 1UL), "",
                 (size_t )(sizeof("") - 1UL));
  } else {
    {
    fprintf(_coverage_fout, "1774\n");
    fflush(_coverage_fout);
    }
    if ((con->uri.query)->used) {
      {
      fprintf(_coverage_fout, "1775\n");
      fflush(_coverage_fout);
      }
      tmp___107 = (con->uri.query)->used - 1U;
    } else {
      {
      fprintf(_coverage_fout, "1776\n");
      fflush(_coverage_fout);
      }
      tmp___107 = 0U;
    }
    {
    fprintf(_coverage_fout, "1777\n");
    fflush(_coverage_fout);
    }
    fcgi_env_add(p->fcgi_env, "QUERY_STRING",
                 (size_t )(sizeof("QUERY_STRING") - 1UL),
                 (char const   *)(con->uri.query)->ptr, tmp___107);
  }
  {
  fprintf(_coverage_fout, "1778\n");
  fflush(_coverage_fout);
  }
  s = get_http_method_name(con->request.http_method);
  {
  fprintf(_coverage_fout, "1779\n");
  fflush(_coverage_fout);
  }
  tmp___109 = strlen(s);
  {
  fprintf(_coverage_fout, "1780\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "REQUEST_METHOD",
               (size_t )(sizeof("REQUEST_METHOD") - 1UL), s, tmp___109);
  {
  fprintf(_coverage_fout, "1781\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "REDIRECT_STATUS",
               (size_t )(sizeof("REDIRECT_STATUS") - 1UL), "200",
               (size_t )(sizeof("200") - 1UL));
  {
  fprintf(_coverage_fout, "1782\n");
  fflush(_coverage_fout);
  }
  s = get_http_version_name((int )con->request.http_version);
  {
  fprintf(_coverage_fout, "1783\n");
  fflush(_coverage_fout);
  }
  tmp___110 = strlen(s);
  {
  fprintf(_coverage_fout, "1784\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add(p->fcgi_env, "SERVER_PROTOCOL",
               (size_t )(sizeof("SERVER_PROTOCOL") - 1UL), s, tmp___110);
  {
  fprintf(_coverage_fout, "1785\n");
  fflush(_coverage_fout);
  }
  fcgi_env_add_request_headers(srv, con, p);
  {
  fprintf(_coverage_fout, "1786\n");
  fflush(_coverage_fout);
  }
  fcgi_header(& header, (unsigned char)4, request_id, (int )(p->fcgi_env)->used,
              (unsigned char)0);
  {
  fprintf(_coverage_fout, "1787\n");
  fflush(_coverage_fout);
  }
  buffer_append_memory(b, (char const   *)(& header), (size_t )sizeof(header));
  {
  fprintf(_coverage_fout, "1788\n");
  fflush(_coverage_fout);
  }
  buffer_append_memory(b, (char const   *)(p->fcgi_env)->ptr,
                       (p->fcgi_env)->used);
  {
  fprintf(_coverage_fout, "1789\n");
  fflush(_coverage_fout);
  }
  fcgi_header(& header, (unsigned char)4, request_id, 0, (unsigned char)0);
  {
  fprintf(_coverage_fout, "1790\n");
  fflush(_coverage_fout);
  }
  buffer_append_memory(b, (char const   *)(& header), (size_t )sizeof(header));
  {
  fprintf(_coverage_fout, "1791\n");
  fflush(_coverage_fout);
  }
  (b->used) ++;
  {
  fprintf(_coverage_fout, "1792\n");
  fflush(_coverage_fout);
  }
  (hctx->wb)->bytes_in += (off_t )(b->used - 1U);
  {
  fprintf(_coverage_fout, "1793\n");
  fflush(_coverage_fout);
  }
  if (con->request.content_length) {
    {
    fprintf(_coverage_fout, "1794\n");
    fflush(_coverage_fout);
    }
    req_cq = con->request_content_queue;
    {
    fprintf(_coverage_fout, "1795\n");
    fflush(_coverage_fout);
    }
    offset = 0LL;
    {
    fprintf(_coverage_fout, "1796\n");
    fflush(_coverage_fout);
    }
    req_c = req_cq->first;
    {
    fprintf(_coverage_fout, "1797\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1798\n");
      fflush(_coverage_fout);
      }
      if (offset != req_cq->bytes_in) {
        {
        fprintf(_coverage_fout, "1799\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "1800\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "1801\n");
      fflush(_coverage_fout);
      }
      if (req_cq->bytes_in - offset > 65535LL) {
        {
        fprintf(_coverage_fout, "1802\n");
        fflush(_coverage_fout);
        }
        tmp___111 = 65535LL;
      } else {
        {
        fprintf(_coverage_fout, "1803\n");
        fflush(_coverage_fout);
        }
        tmp___111 = req_cq->bytes_in - offset;
      }
      {
      fprintf(_coverage_fout, "1804\n");
      fflush(_coverage_fout);
      }
      weWant = tmp___111;
      {
      fprintf(_coverage_fout, "1805\n");
      fflush(_coverage_fout);
      }
      written = (off_t )0;
      {
      fprintf(_coverage_fout, "1806\n");
      fflush(_coverage_fout);
      }
      weHave = (off_t )0;
      {
      fprintf(_coverage_fout, "1807\n");
      fflush(_coverage_fout);
      }
      b = chunkqueue_get_append_buffer(hctx->wb);
      {
      fprintf(_coverage_fout, "1808\n");
      fflush(_coverage_fout);
      }
      fcgi_header(& header, (unsigned char)5, request_id, (int )weWant,
                  (unsigned char)0);
      {
      fprintf(_coverage_fout, "1809\n");
      fflush(_coverage_fout);
      }
      buffer_copy_memory(b, (char const   *)(& header), (size_t )sizeof(header));
      {
      fprintf(_coverage_fout, "1810\n");
      fflush(_coverage_fout);
      }
      (hctx->wb)->bytes_in += (off_t )sizeof(header);
      {
      fprintf(_coverage_fout, "1811\n");
      fflush(_coverage_fout);
      }
      if (p->conf.debug > 10) {
        {
        fprintf(_coverage_fout, "1812\n");
        fflush(_coverage_fout);
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s.%d: tosend: %lld / %lld\n",
                "mod_fastcgi.c", 2067, offset, req_cq->bytes_in);
      } else {
        {
        fprintf(_coverage_fout, "1813\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "1814\n");
      fflush(_coverage_fout);
      }
      written = 0LL;
      {
      fprintf(_coverage_fout, "1815\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "1816\n");
        fflush(_coverage_fout);
        }
        if (written != weWant) {
          {
          fprintf(_coverage_fout, "1817\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "1818\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "1819\n");
        fflush(_coverage_fout);
        }
        if (p->conf.debug > 10) {
          {
          fprintf(_coverage_fout, "1820\n");
          fflush(_coverage_fout);
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s.%d: chunk: %lld / %lld\n",
                  "mod_fastcgi.c", 2072, written, weWant);
        } else {
          {
          fprintf(_coverage_fout, "1821\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "1822\n");
        fflush(_coverage_fout);
        }
        switch ((int )req_c->type) {
        {
        fprintf(_coverage_fout, "1823\n");
        fflush(_coverage_fout);
        }
        case 2: 
        weHave = req_c->file.length - req_c->offset;
        {
        fprintf(_coverage_fout, "1824\n");
        fflush(_coverage_fout);
        }
        if (weHave > weWant - written) {
          {
          fprintf(_coverage_fout, "1825\n");
          fflush(_coverage_fout);
          }
          weHave = weWant - written;
        } else {
          {
          fprintf(_coverage_fout, "1826\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "1827\n");
        fflush(_coverage_fout);
        }
        if (p->conf.debug > 10) {
          {
          fprintf(_coverage_fout, "1828\n");
          fflush(_coverage_fout);
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s.%d: sending %lld bytes from (%lld / %lld) %s\n",
                  "mod_fastcgi.c", 2083, weHave, req_c->offset,
                  req_c->file.length, (req_c->file.name)->ptr);
        } else {
          {
          fprintf(_coverage_fout, "1829\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "1830\n");
        fflush(_coverage_fout);
        }
        if (! (weHave != 0LL)) {
          {
          fprintf(_coverage_fout, "1831\n");
          fflush(_coverage_fout);
          }
          __assert_fail("weHave != 0", "mod_fastcgi.c", 2090U, "fcgi_create_env");
        } else {
          {
          fprintf(_coverage_fout, "1832\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "1833\n");
        fflush(_coverage_fout);
        }
        chunkqueue_append_file(hctx->wb, req_c->file.name, req_c->offset, weHave);
        {
        fprintf(_coverage_fout, "1834\n");
        fflush(_coverage_fout);
        }
        req_c->offset += weHave;
        {
        fprintf(_coverage_fout, "1835\n");
        fflush(_coverage_fout);
        }
        req_cq->bytes_out += weHave;
        {
        fprintf(_coverage_fout, "1836\n");
        fflush(_coverage_fout);
        }
        written += weHave;
        {
        fprintf(_coverage_fout, "1837\n");
        fflush(_coverage_fout);
        }
        (hctx->wb)->bytes_in += weHave;
        {
        fprintf(_coverage_fout, "1838\n");
        fflush(_coverage_fout);
        }
        if (req_c->offset == req_c->file.length) {
          {
          fprintf(_coverage_fout, "1839\n");
          fflush(_coverage_fout);
          }
          if (p->conf.debug > 10) {
            {
            fprintf(_coverage_fout, "1840\n");
            fflush(_coverage_fout);
            }
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"%s.%d: next chunk\n",
                    "mod_fastcgi.c", 2116);
          } else {
            {
            fprintf(_coverage_fout, "1841\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "1842\n");
          fflush(_coverage_fout);
          }
          c = (hctx->wb)->last;
          {
          fprintf(_coverage_fout, "1843\n");
          fflush(_coverage_fout);
          }
          if (! ((int )c->type == 2)) {
            {
            fprintf(_coverage_fout, "1844\n");
            fflush(_coverage_fout);
            }
            __assert_fail("c->type == FILE_CHUNK", "mod_fastcgi.c", 2120U,
                          "fcgi_create_env");
          } else {
            {
            fprintf(_coverage_fout, "1845\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "1846\n");
          fflush(_coverage_fout);
          }
          if (! (req_c->file.is_temp == 1)) {
            {
            fprintf(_coverage_fout, "1847\n");
            fflush(_coverage_fout);
            }
            __assert_fail("req_c->file.is_temp == 1", "mod_fastcgi.c", 2121U,
                          "fcgi_create_env");
          } else {
            {
            fprintf(_coverage_fout, "1848\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "1849\n");
          fflush(_coverage_fout);
          }
          c->file.is_temp = 1;
          {
          fprintf(_coverage_fout, "1850\n");
          fflush(_coverage_fout);
          }
          req_c->file.is_temp = 0;
          {
          fprintf(_coverage_fout, "1851\n");
          fflush(_coverage_fout);
          }
          chunkqueue_remove_finished_chunks(req_cq);
          {
          fprintf(_coverage_fout, "1852\n");
          fflush(_coverage_fout);
          }
          req_c = req_cq->first;
        } else {
          {
          fprintf(_coverage_fout, "1853\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "1854\n");
        fflush(_coverage_fout);
        }
        break;
        {
        fprintf(_coverage_fout, "1855\n");
        fflush(_coverage_fout);
        }
        case 1: 
        weHave = (off_t )((req_c->mem)->used - 1U) - req_c->offset;
        {
        fprintf(_coverage_fout, "1856\n");
        fflush(_coverage_fout);
        }
        if (weHave > weWant - written) {
          {
          fprintf(_coverage_fout, "1857\n");
          fflush(_coverage_fout);
          }
          weHave = weWant - written;
        } else {
          {
          fprintf(_coverage_fout, "1858\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "1859\n");
        fflush(_coverage_fout);
        }
        buffer_append_memory(b,
                             (char const   *)((req_c->mem)->ptr + req_c->offset),
                             (unsigned int )weHave);
        {
        fprintf(_coverage_fout, "1860\n");
        fflush(_coverage_fout);
        }
        req_c->offset += weHave;
        {
        fprintf(_coverage_fout, "1861\n");
        fflush(_coverage_fout);
        }
        req_cq->bytes_out += weHave;
        {
        fprintf(_coverage_fout, "1862\n");
        fflush(_coverage_fout);
        }
        written += weHave;
        {
        fprintf(_coverage_fout, "1863\n");
        fflush(_coverage_fout);
        }
        (hctx->wb)->bytes_in += weHave;
        {
        fprintf(_coverage_fout, "1864\n");
        fflush(_coverage_fout);
        }
        if (req_c->offset == (off_t )((req_c->mem)->used - 1U)) {
          {
          fprintf(_coverage_fout, "1865\n");
          fflush(_coverage_fout);
          }
          chunkqueue_remove_finished_chunks(req_cq);
          {
          fprintf(_coverage_fout, "1866\n");
          fflush(_coverage_fout);
          }
          req_c = req_cq->first;
        } else {
          {
          fprintf(_coverage_fout, "1867\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "1868\n");
        fflush(_coverage_fout);
        }
        break;
        {
        fprintf(_coverage_fout, "1869\n");
        fflush(_coverage_fout);
        }
        default: ;
        {
        fprintf(_coverage_fout, "1870\n");
        fflush(_coverage_fout);
        }
        break;
        }
      }
      {
      fprintf(_coverage_fout, "1871\n");
      fflush(_coverage_fout);
      }
      (b->used) ++;
      {
      fprintf(_coverage_fout, "1872\n");
      fflush(_coverage_fout);
      }
      offset += weWant;
    }
  } else {
    {
    fprintf(_coverage_fout, "1873\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1874\n");
  fflush(_coverage_fout);
  }
  b = chunkqueue_get_append_buffer(hctx->wb);
  {
  fprintf(_coverage_fout, "1875\n");
  fflush(_coverage_fout);
  }
  fcgi_header(& header, (unsigned char)5, request_id, 0, (unsigned char)0);
  {
  fprintf(_coverage_fout, "1876\n");
  fflush(_coverage_fout);
  }
  buffer_copy_memory(b, (char const   *)(& header), (size_t )sizeof(header));
  {
  fprintf(_coverage_fout, "1877\n");
  fflush(_coverage_fout);
  }
  (b->used) ++;
  {
  fprintf(_coverage_fout, "1878\n");
  fflush(_coverage_fout);
  }
  (hctx->wb)->bytes_in += (off_t )sizeof(header);
  {
  fprintf(_coverage_fout, "1879\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static int fcgi_response_parse(server *srv , connection *con , plugin_data *p ,
                               buffer *in ) 
{ 
  char *s ;
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
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1880\n");
  fflush(_coverage_fout);
  }
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
  {
  fprintf(_coverage_fout, "1881\n");
  fflush(_coverage_fout);
  }
  host = hctx->host;
  {
  fprintf(_coverage_fout, "1882\n");
  fflush(_coverage_fout);
  }
  buffer_copy_string_buffer(p->parse_response, (buffer const   *)in);
  {
  fprintf(_coverage_fout, "1883\n");
  fflush(_coverage_fout);
  }
  s = (p->parse_response)->ptr;
  {
  fprintf(_coverage_fout, "1884\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1885\n");
    fflush(_coverage_fout);
    }
    tmp___13 = __builtin_strchr(s, '\n');
    {
    fprintf(_coverage_fout, "1886\n");
    fflush(_coverage_fout);
    }
    ns = tmp___13;
    {
    fprintf(_coverage_fout, "1887\n");
    fflush(_coverage_fout);
    }
    if (! ((unsigned int )((void *)0) != (unsigned int )ns)) {
      {
      fprintf(_coverage_fout, "1888\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "1889\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1890\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ns > (unsigned int )(p->parse_response)->ptr) {
      {
      fprintf(_coverage_fout, "1891\n");
      fflush(_coverage_fout);
      }
      if ((int )*(ns - 1) == 13) {
        {
        fprintf(_coverage_fout, "1892\n");
        fflush(_coverage_fout);
        }
        *(ns - 1) = (char )'\000';
      } else {
        {
        fprintf(_coverage_fout, "1893\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "1894\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1895\n");
    fflush(_coverage_fout);
    }
    *(ns + 0) = (char )'\000';
    {
    fprintf(_coverage_fout, "1896\n");
    fflush(_coverage_fout);
    }
    key = s;
    {
    fprintf(_coverage_fout, "1897\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __builtin_strchr(s, ':');
    {
    fprintf(_coverage_fout, "1898\n");
    fflush(_coverage_fout);
    }
    value = tmp___0;
    {
    fprintf(_coverage_fout, "1899\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )((void *)0) == (unsigned int )value) {
      {
      fprintf(_coverage_fout, "1900\n");
      fflush(_coverage_fout);
      }
      goto __Cont;
    } else {
      {
      fprintf(_coverage_fout, "1901\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1902\n");
    fflush(_coverage_fout);
    }
    key_len = (int )(value - key);
    {
    fprintf(_coverage_fout, "1903\n");
    fflush(_coverage_fout);
    }
    value ++;
    {
    fprintf(_coverage_fout, "1904\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "1905\n");
      fflush(_coverage_fout);
      }
      if (! ((int )*value == 32)) {
        {
        fprintf(_coverage_fout, "1906\n");
        fflush(_coverage_fout);
        }
        if (! ((int )*value == 9)) {
          {
          fprintf(_coverage_fout, "1907\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "1908\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "1909\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "1910\n");
      fflush(_coverage_fout);
      }
      value ++;
    }
    {
    fprintf(_coverage_fout, "1911\n");
    fflush(_coverage_fout);
    }
    if ((int )host->mode != 2) {
      {
      fprintf(_coverage_fout, "1912\n");
      fflush(_coverage_fout);
      }
      goto _L;
    } else {
      {
      fprintf(_coverage_fout, "1913\n");
      fflush(_coverage_fout);
      }
      if (! (con->http_status == 0)) {
        {
        fprintf(_coverage_fout, "1914\n");
        fflush(_coverage_fout);
        }
        if (! (con->http_status == 200)) {
          {
          fprintf(_coverage_fout, "1915\n");
          fflush(_coverage_fout);
          }
          _L: 
          tmp___2 = strncasecmp((char const   *)key, "Status",
                                (unsigned int )key_len);
          {
          fprintf(_coverage_fout, "1916\n");
          fflush(_coverage_fout);
          }
          if (0 != tmp___2) {
            {
            fprintf(_coverage_fout, "1917\n");
            fflush(_coverage_fout);
            }
            tmp___1 = array_get_unused_element(con->response.headers,
                                               (data_type_t )1);
            {
            fprintf(_coverage_fout, "1918\n");
            fflush(_coverage_fout);
            }
            ds = (data_string *)tmp___1;
            {
            fprintf(_coverage_fout, "1919\n");
            fflush(_coverage_fout);
            }
            if ((unsigned int )((void *)0) == (unsigned int )ds) {
              {
              fprintf(_coverage_fout, "1920\n");
              fflush(_coverage_fout);
              }
              ds = data_response_init();
            } else {
              {
              fprintf(_coverage_fout, "1921\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "1922\n");
            fflush(_coverage_fout);
            }
            buffer_copy_string_len(ds->key, (char const   *)key,
                                   (unsigned int )key_len);
            {
            fprintf(_coverage_fout, "1923\n");
            fflush(_coverage_fout);
            }
            buffer_copy_string(ds->value, (char const   *)value);
            {
            fprintf(_coverage_fout, "1924\n");
            fflush(_coverage_fout);
            }
            array_insert_unique(con->response.headers, (data_unset *)ds);
          } else {
            {
            fprintf(_coverage_fout, "1925\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "1926\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "1927\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "1928\n");
    fflush(_coverage_fout);
    }
    switch (key_len) {
    {
    fprintf(_coverage_fout, "1929\n");
    fflush(_coverage_fout);
    }
    case 4: 
    tmp___3 = strncasecmp((char const   *)key, "Date", (unsigned int )key_len);
    {
    fprintf(_coverage_fout, "1930\n");
    fflush(_coverage_fout);
    }
    if (0 == tmp___3) {
      {
      fprintf(_coverage_fout, "1931\n");
      fflush(_coverage_fout);
      }
      con->parsed_response |= (unsigned int )(1 << 3);
    } else {
      {
      fprintf(_coverage_fout, "1932\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1933\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "1934\n");
    fflush(_coverage_fout);
    }
    case 6: 
    tmp___5 = strncasecmp((char const   *)key, "Status", (unsigned int )key_len);
    {
    fprintf(_coverage_fout, "1935\n");
    fflush(_coverage_fout);
    }
    if (0 == tmp___5) {
      {
      fprintf(_coverage_fout, "1936\n");
      fflush(_coverage_fout);
      }
      tmp___4 = strtol((char const   */* __restrict  */)((char const   *)value),
                       (char **/* __restrict  */)((char **)((void *)0)), 10);
      {
      fprintf(_coverage_fout, "1937\n");
      fflush(_coverage_fout);
      }
      con->http_status = (int )tmp___4;
      {
      fprintf(_coverage_fout, "1938\n");
      fflush(_coverage_fout);
      }
      con->parsed_response |= 1U;
    } else {
      {
      fprintf(_coverage_fout, "1939\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1940\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "1941\n");
    fflush(_coverage_fout);
    }
    case 8: 
    tmp___6 = strncasecmp((char const   *)key, "Location",
                          (unsigned int )key_len);
    {
    fprintf(_coverage_fout, "1942\n");
    fflush(_coverage_fout);
    }
    if (0 == tmp___6) {
      {
      fprintf(_coverage_fout, "1943\n");
      fflush(_coverage_fout);
      }
      con->parsed_response |= (unsigned int )(1 << 4);
    } else {
      {
      fprintf(_coverage_fout, "1944\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1945\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "1946\n");
    fflush(_coverage_fout);
    }
    case 10: 
    tmp___9 = strncasecmp((char const   *)key, "Connection",
                          (unsigned int )key_len);
    {
    fprintf(_coverage_fout, "1947\n");
    fflush(_coverage_fout);
    }
    if (0 == tmp___9) {
      {
      fprintf(_coverage_fout, "1948\n");
      fflush(_coverage_fout);
      }
      tmp___8 = strcasecmp((char const   *)value, "Keep-Alive");
      {
      fprintf(_coverage_fout, "1949\n");
      fflush(_coverage_fout);
      }
      if (0 == tmp___8) {
        {
        fprintf(_coverage_fout, "1950\n");
        fflush(_coverage_fout);
        }
        con->response.keep_alive = 1;
      } else {
        {
        fprintf(_coverage_fout, "1951\n");
        fflush(_coverage_fout);
        }
        con->response.keep_alive = 0;
      }
      {
      fprintf(_coverage_fout, "1952\n");
      fflush(_coverage_fout);
      }
      con->parsed_response |= (unsigned int )(1 << 1);
    } else {
      {
      fprintf(_coverage_fout, "1953\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1954\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "1955\n");
    fflush(_coverage_fout);
    }
    case 14: 
    tmp___11 = strncasecmp((char const   *)key, "Content-Length",
                           (unsigned int )key_len);
    {
    fprintf(_coverage_fout, "1956\n");
    fflush(_coverage_fout);
    }
    if (0 == tmp___11) {
      {
      fprintf(_coverage_fout, "1957\n");
      fflush(_coverage_fout);
      }
      tmp___10 = strtol((char const   */* __restrict  */)((char const   *)value),
                        (char **/* __restrict  */)((char **)((void *)0)), 10);
      {
      fprintf(_coverage_fout, "1958\n");
      fflush(_coverage_fout);
      }
      con->response.content_length = (long long )tmp___10;
      {
      fprintf(_coverage_fout, "1959\n");
      fflush(_coverage_fout);
      }
      con->parsed_response |= (unsigned int )(1 << 2);
      {
      fprintf(_coverage_fout, "1960\n");
      fflush(_coverage_fout);
      }
      if (con->response.content_length < 0LL) {
        {
        fprintf(_coverage_fout, "1961\n");
        fflush(_coverage_fout);
        }
        con->response.content_length = 0LL;
      } else {
        {
        fprintf(_coverage_fout, "1962\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "1963\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1964\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "1965\n");
    fflush(_coverage_fout);
    }
    default: ;
    {
    fprintf(_coverage_fout, "1966\n");
    fflush(_coverage_fout);
    }
    break;
    }
    {
    fprintf(_coverage_fout, "1967\n");
    fflush(_coverage_fout);
    }
    __Cont: 
    s = ns + 1;
  }
  {
  fprintf(_coverage_fout, "1968\n");
  fflush(_coverage_fout);
  }
  if (con->parsed_response & (unsigned int )(1 << 4)) {
    {
    fprintf(_coverage_fout, "1969\n");
    fflush(_coverage_fout);
    }
    if (! (con->parsed_response & 1U)) {
      {
      fprintf(_coverage_fout, "1970\n");
      fflush(_coverage_fout);
      }
      con->http_status = 302;
    } else {
      {
      fprintf(_coverage_fout, "1971\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "1972\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1973\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static int fastcgi_get_packet(server *srv , handler_ctx *hctx ,
                              fastcgi_response_packet *packet ) 
{ 
  chunk *c ;
  size_t offset ;
  size_t toread ;
  FCGI_Header *header ;
  size_t weWant ;
  size_t weHave ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1974\n");
  fflush(_coverage_fout);
  }
  offset = (size_t )0;
  {
  fprintf(_coverage_fout, "1975\n");
  fflush(_coverage_fout);
  }
  toread = (size_t )0;
  {
  fprintf(_coverage_fout, "1976\n");
  fflush(_coverage_fout);
  }
  if (! (hctx->rb)->first) {
    {
    fprintf(_coverage_fout, "1977\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "1978\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1979\n");
  fflush(_coverage_fout);
  }
  packet->b = buffer_init();
  {
  fprintf(_coverage_fout, "1980\n");
  fflush(_coverage_fout);
  }
  packet->len = 0U;
  {
  fprintf(_coverage_fout, "1981\n");
  fflush(_coverage_fout);
  }
  packet->type = 0;
  {
  fprintf(_coverage_fout, "1982\n");
  fflush(_coverage_fout);
  }
  packet->padding = 0;
  {
  fprintf(_coverage_fout, "1983\n");
  fflush(_coverage_fout);
  }
  packet->request_id = 0U;
  {
  fprintf(_coverage_fout, "1984\n");
  fflush(_coverage_fout);
  }
  c = (hctx->rb)->first;
  {
  fprintf(_coverage_fout, "1985\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1986\n");
    fflush(_coverage_fout);
    }
    if (c) {
      {
      fprintf(_coverage_fout, "1987\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1988\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1989\n");
    fflush(_coverage_fout);
    }
    if ((packet->b)->used == 0U) {
      {
      fprintf(_coverage_fout, "1990\n");
      fflush(_coverage_fout);
      }
      buffer_copy_string_len(packet->b,
                             (char const   *)((c->mem)->ptr + c->offset),
                             (unsigned int )(((off_t )(c->mem)->used - c->offset) - 1LL));
    } else {
      {
      fprintf(_coverage_fout, "1991\n");
      fflush(_coverage_fout);
      }
      buffer_append_string_len(packet->b,
                               (char const   *)((c->mem)->ptr + c->offset),
                               (unsigned int )(((off_t )(c->mem)->used - c->offset) - 1LL));
    }
    {
    fprintf(_coverage_fout, "1992\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )(packet->b)->used >= sizeof(*header) + 1UL) {
      {
      fprintf(_coverage_fout, "1993\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "1994\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1995\n");
    fflush(_coverage_fout);
    }
    c = c->next;
  }
  {
  fprintf(_coverage_fout, "1996\n");
  fflush(_coverage_fout);
  }
  if ((packet->b)->used == 0U) {
    {
    fprintf(_coverage_fout, "1997\n");
    fflush(_coverage_fout);
    }
    buffer_free(packet->b);
    {
    fprintf(_coverage_fout, "1998\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2325U, "s",
                    "FastCGI: header too small");
    {
    fprintf(_coverage_fout, "1999\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "2000\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )((packet->b)->used - 1U) < sizeof(FCGI_Header )) {
      {
      fprintf(_coverage_fout, "2001\n");
      fflush(_coverage_fout);
      }
      buffer_free(packet->b);
      {
      fprintf(_coverage_fout, "2002\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 2325U, "s",
                      "FastCGI: header too small");
      {
      fprintf(_coverage_fout, "2003\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "2004\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "2005\n");
  fflush(_coverage_fout);
  }
  header = (FCGI_Header *)(packet->b)->ptr;
  {
  fprintf(_coverage_fout, "2006\n");
  fflush(_coverage_fout);
  }
  packet->len = (unsigned int )(((int )header->contentLengthB0 | ((int )header->contentLengthB1 << 8)) + (int )header->paddingLength);
  {
  fprintf(_coverage_fout, "2007\n");
  fflush(_coverage_fout);
  }
  packet->request_id = (unsigned int )((int )header->requestIdB0 | ((int )header->requestIdB1 << 8));
  {
  fprintf(_coverage_fout, "2008\n");
  fflush(_coverage_fout);
  }
  packet->type = (int )header->type;
  {
  fprintf(_coverage_fout, "2009\n");
  fflush(_coverage_fout);
  }
  packet->padding = (int )header->paddingLength;
  {
  fprintf(_coverage_fout, "2010\n");
  fflush(_coverage_fout);
  }
  offset = (size_t )sizeof(*header);
  {
  fprintf(_coverage_fout, "2011\n");
  fflush(_coverage_fout);
  }
  buffer_copy_string(packet->b, "");
  {
  fprintf(_coverage_fout, "2012\n");
  fflush(_coverage_fout);
  }
  if (packet->len) {
    {
    fprintf(_coverage_fout, "2013\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "2014\n");
      fflush(_coverage_fout);
      }
      if (c) {
        {
        fprintf(_coverage_fout, "2015\n");
        fflush(_coverage_fout);
        }
        if (! ((packet->b)->used < packet->len + 1U)) {
          {
          fprintf(_coverage_fout, "2016\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "2017\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2018\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "2019\n");
      fflush(_coverage_fout);
      }
      weWant = packet->len - ((packet->b)->used - 1U);
      {
      fprintf(_coverage_fout, "2020\n");
      fflush(_coverage_fout);
      }
      weHave = (size_t )((((off_t )(c->mem)->used - c->offset) - (off_t )offset) - 1LL);
      {
      fprintf(_coverage_fout, "2021\n");
      fflush(_coverage_fout);
      }
      if (weHave > weWant) {
        {
        fprintf(_coverage_fout, "2022\n");
        fflush(_coverage_fout);
        }
        weHave = weWant;
      } else {
        {
        fprintf(_coverage_fout, "2023\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2024\n");
      fflush(_coverage_fout);
      }
      buffer_append_string_len(packet->b,
                               (char const   *)(((c->mem)->ptr + c->offset) + offset),
                               weHave);
      {
      fprintf(_coverage_fout, "2025\n");
      fflush(_coverage_fout);
      }
      offset = 0U;
      {
      fprintf(_coverage_fout, "2026\n");
      fflush(_coverage_fout);
      }
      c = c->next;
    }
    {
    fprintf(_coverage_fout, "2027\n");
    fflush(_coverage_fout);
    }
    if ((packet->b)->used < packet->len + 1U) {
      {
      fprintf(_coverage_fout, "2028\n");
      fflush(_coverage_fout);
      }
      buffer_free(packet->b);
      {
      fprintf(_coverage_fout, "2029\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "2030\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2031\n");
    fflush(_coverage_fout);
    }
    (packet->b)->used -= (size_t )packet->padding;
    {
    fprintf(_coverage_fout, "2032\n");
    fflush(_coverage_fout);
    }
    *((packet->b)->ptr + ((packet->b)->used - 1U)) = (char )'\000';
  } else {
    {
    fprintf(_coverage_fout, "2033\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2034\n");
  fflush(_coverage_fout);
  }
  toread = (size_t )((unsigned long )packet->len + sizeof(FCGI_Header ));
  {
  fprintf(_coverage_fout, "2035\n");
  fflush(_coverage_fout);
  }
  c = (hctx->rb)->first;
  {
  fprintf(_coverage_fout, "2036\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2037\n");
    fflush(_coverage_fout);
    }
    if (c) {
      {
      fprintf(_coverage_fout, "2038\n");
      fflush(_coverage_fout);
      }
      if (! toread) {
        {
        fprintf(_coverage_fout, "2039\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "2040\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "2041\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2042\n");
    fflush(_coverage_fout);
    }
    if (((off_t )(c->mem)->used - c->offset) - 1LL <= (off_t )toread) {
      {
      fprintf(_coverage_fout, "2043\n");
      fflush(_coverage_fout);
      }
      toread = (unsigned int )((off_t )toread - (((off_t )(c->mem)->used - c->offset) - 1LL));
      {
      fprintf(_coverage_fout, "2044\n");
      fflush(_coverage_fout);
      }
      c->offset = (long long )((c->mem)->used - 1U);
    } else {
      {
      fprintf(_coverage_fout, "2045\n");
      fflush(_coverage_fout);
      }
      c->offset += (off_t )toread;
      {
      fprintf(_coverage_fout, "2046\n");
      fflush(_coverage_fout);
      }
      toread = 0U;
    }
    {
    fprintf(_coverage_fout, "2047\n");
    fflush(_coverage_fout);
    }
    c = c->next;
  }
  {
  fprintf(_coverage_fout, "2048\n");
  fflush(_coverage_fout);
  }
  chunkqueue_remove_finished_chunks(hctx->rb);
  {
  fprintf(_coverage_fout, "2049\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static int fcgi_demux_response(server *srv , handler_ctx *hctx ) 
{ 
  int fin ;
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
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2050\n");
  fflush(_coverage_fout);
  }
  fin = 0;
  {
  fprintf(_coverage_fout, "2051\n");
  fflush(_coverage_fout);
  }
  p = hctx->plugin_data;
  {
  fprintf(_coverage_fout, "2052\n");
  fflush(_coverage_fout);
  }
  con = hctx->remote_conn;
  {
  fprintf(_coverage_fout, "2053\n");
  fflush(_coverage_fout);
  }
  fcgi_fd = hctx->fd;
  {
  fprintf(_coverage_fout, "2054\n");
  fflush(_coverage_fout);
  }
  host = hctx->host;
  {
  fprintf(_coverage_fout, "2055\n");
  fflush(_coverage_fout);
  }
  proc = hctx->proc;
  {
  fprintf(_coverage_fout, "2056\n");
  fflush(_coverage_fout);
  }
  tmp___0 = ioctl(hctx->fd, 21531UL, & toread);
  {
  fprintf(_coverage_fout, "2057\n");
  fflush(_coverage_fout);
  }
  if (tmp___0) {
    {
    fprintf(_coverage_fout, "2058\n");
    fflush(_coverage_fout);
    }
    tmp = __errno_location();
    {
    fprintf(_coverage_fout, "2059\n");
    fflush(_coverage_fout);
    }
    if (*tmp == 11) {
      {
      fprintf(_coverage_fout, "2060\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "2061\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2062\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2402U, "sd",
                    "unexpected end-of-file (perhaps the fastcgi process died):",
                    fcgi_fd);
    {
    fprintf(_coverage_fout, "2063\n");
    fflush(_coverage_fout);
    }
    return (-1);
  } else {
    {
    fprintf(_coverage_fout, "2064\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2065\n");
  fflush(_coverage_fout);
  }
  if (toread > 0) {
    {
    fprintf(_coverage_fout, "2066\n");
    fflush(_coverage_fout);
    }
    cq_first = (hctx->rb)->first;
    {
    fprintf(_coverage_fout, "2067\n");
    fflush(_coverage_fout);
    }
    cq_last = (hctx->rb)->last;
    {
    fprintf(_coverage_fout, "2068\n");
    fflush(_coverage_fout);
    }
    b = chunkqueue_get_append_buffer(hctx->rb);
    {
    fprintf(_coverage_fout, "2069\n");
    fflush(_coverage_fout);
    }
    buffer_prepare_copy(b, (unsigned int )(toread + 1));
    {
    fprintf(_coverage_fout, "2070\n");
    fflush(_coverage_fout);
    }
    r = read(hctx->fd, (void *)b->ptr, (unsigned int )toread);
    {
    fprintf(_coverage_fout, "2071\n");
    fflush(_coverage_fout);
    }
    if (-1 == r) {
      {
      fprintf(_coverage_fout, "2072\n");
      fflush(_coverage_fout);
      }
      tmp___1 = __errno_location();
      {
      fprintf(_coverage_fout, "2073\n");
      fflush(_coverage_fout);
      }
      if (*tmp___1 == 11) {
        {
        fprintf(_coverage_fout, "2074\n");
        fflush(_coverage_fout);
        }
        buffer_free(((hctx->rb)->last)->mem);
        {
        fprintf(_coverage_fout, "2075\n");
        fflush(_coverage_fout);
        }
        free((void *)(hctx->rb)->last);
        {
        fprintf(_coverage_fout, "2076\n");
        fflush(_coverage_fout);
        }
        (hctx->rb)->first = cq_first;
        {
        fprintf(_coverage_fout, "2077\n");
        fflush(_coverage_fout);
        }
        (hctx->rb)->last = cq_last;
        {
        fprintf(_coverage_fout, "2078\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        {
        fprintf(_coverage_fout, "2079\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2080\n");
      fflush(_coverage_fout);
      }
      tmp___2 = __errno_location();
      {
      fprintf(_coverage_fout, "2081\n");
      fflush(_coverage_fout);
      }
      tmp___3 = strerror(*tmp___2);
      {
      fprintf(_coverage_fout, "2082\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 2429U, "sds",
                      "unexpected end-of-file (perhaps the fastcgi process died):",
                      fcgi_fd, tmp___3);
      {
      fprintf(_coverage_fout, "2083\n");
      fflush(_coverage_fout);
      }
      return (-1);
    } else {
      {
      fprintf(_coverage_fout, "2084\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2085\n");
    fflush(_coverage_fout);
    }
    if (! r) {
      {
      fprintf(_coverage_fout, "2086\n");
      fflush(_coverage_fout);
      }
      __assert_fail("r", "mod_fastcgi.c", 2436U, "fcgi_demux_response");
    } else {
      {
      fprintf(_coverage_fout, "2087\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2088\n");
    fflush(_coverage_fout);
    }
    b->used = (unsigned int )(r + 1);
    {
    fprintf(_coverage_fout, "2089\n");
    fflush(_coverage_fout);
    }
    *(b->ptr + (b->used - 1U)) = (char )'\000';
  } else {
    {
    fprintf(_coverage_fout, "2090\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2441U, "ssdsb",
                    "unexpected end-of-file (perhaps the fastcgi process died):",
                    "pid:", proc->pid, "socket:", proc->connection_name);
    {
    fprintf(_coverage_fout, "2091\n");
    fflush(_coverage_fout);
    }
    return (-1);
  }
  {
  fprintf(_coverage_fout, "2092\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2093\n");
    fflush(_coverage_fout);
    }
    if (fin == 0) {
      {
      fprintf(_coverage_fout, "2094\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "2095\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2096\n");
    fflush(_coverage_fout);
    }
    tmp___4 = fastcgi_get_packet(srv, hctx, & packet);
    {
    fprintf(_coverage_fout, "2097\n");
    fflush(_coverage_fout);
    }
    if (0 != tmp___4) {
      {
      fprintf(_coverage_fout, "2098\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "2099\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2100\n");
    fflush(_coverage_fout);
    }
    switch (packet.type) {
    {
    fprintf(_coverage_fout, "2101\n");
    fflush(_coverage_fout);
    }
    case 6: 
    if (packet.len == 0U) {
      {
      fprintf(_coverage_fout, "2102\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "2103\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2104\n");
    fflush(_coverage_fout);
    }
    if (0 == con->file_started) {
      {
      fprintf(_coverage_fout, "2105\n");
      fflush(_coverage_fout);
      }
      if ((hctx->response_header)->used == 0U) {
        {
        fprintf(_coverage_fout, "2106\n");
        fflush(_coverage_fout);
        }
        buffer_copy_string_buffer(hctx->response_header,
                                  (buffer const   *)packet.b);
      } else {
        {
        fprintf(_coverage_fout, "2107\n");
        fflush(_coverage_fout);
        }
        buffer_append_string_buffer(hctx->response_header,
                                    (buffer const   *)packet.b);
      }
      {
      fprintf(_coverage_fout, "2108\n");
      fflush(_coverage_fout);
      }
      c = buffer_search_string_len(hctx->response_header, "\r\n\r\n",
                                   (size_t )(sizeof("\r\n\r\n") - 1UL));
      {
      fprintf(_coverage_fout, "2109\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )((void *)0) != (unsigned int )c) {
        {
        fprintf(_coverage_fout, "2110\n");
        fflush(_coverage_fout);
        }
        blen = ((hctx->response_header)->used - (size_t )(c - (hctx->response_header)->ptr)) - 4U;
        {
        fprintf(_coverage_fout, "2111\n");
        fflush(_coverage_fout);
        }
        (hctx->response_header)->used = (unsigned int )((c - (hctx->response_header)->ptr) + 3L);
        {
        fprintf(_coverage_fout, "2112\n");
        fflush(_coverage_fout);
        }
        c += 4;
      } else {
        {
        fprintf(_coverage_fout, "2113\n");
        fflush(_coverage_fout);
        }
        c = buffer_search_string_len(hctx->response_header, "\n\n",
                                     (size_t )(sizeof("\n\n") - 1UL));
        {
        fprintf(_coverage_fout, "2114\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )((void *)0) != (unsigned int )c) {
          {
          fprintf(_coverage_fout, "2115\n");
          fflush(_coverage_fout);
          }
          blen = ((hctx->response_header)->used - (size_t )(c - (hctx->response_header)->ptr)) - 2U;
          {
          fprintf(_coverage_fout, "2116\n");
          fflush(_coverage_fout);
          }
          (hctx->response_header)->used = (unsigned int )((c - (hctx->response_header)->ptr) + 2L);
          {
          fprintf(_coverage_fout, "2117\n");
          fflush(_coverage_fout);
          }
          c += 2;
        } else {
          {
          fprintf(_coverage_fout, "2118\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
      {
      fprintf(_coverage_fout, "2119\n");
      fflush(_coverage_fout);
      }
      fcgi_response_parse(srv, con, p, hctx->response_header);
      {
      fprintf(_coverage_fout, "2120\n");
      fflush(_coverage_fout);
      }
      con->file_started = 1;
      {
      fprintf(_coverage_fout, "2121\n");
      fflush(_coverage_fout);
      }
      if ((int )host->mode == 2) {
        {
        fprintf(_coverage_fout, "2122\n");
        fflush(_coverage_fout);
        }
        if (con->http_status == 0) {
          {
          fprintf(_coverage_fout, "2123\n");
          fflush(_coverage_fout);
          }
          hctx->send_content_body = 0;
        } else {
          {
          fprintf(_coverage_fout, "2124\n");
          fflush(_coverage_fout);
          }
          if (con->http_status == 200) {
            {
            fprintf(_coverage_fout, "2125\n");
            fflush(_coverage_fout);
            }
            hctx->send_content_body = 0;
          } else {
            {
            fprintf(_coverage_fout, "2126\n");
            fflush(_coverage_fout);
            }

          }
        }
      } else {
        {
        fprintf(_coverage_fout, "2127\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2128\n");
      fflush(_coverage_fout);
      }
      if (host->allow_xsendfile) {
        {
        fprintf(_coverage_fout, "2129\n");
        fflush(_coverage_fout);
        }
        tmp___6 = array_get_element(con->response.headers,
                                    "X-LIGHTTPD-send-file");
        {
        fprintf(_coverage_fout, "2130\n");
        fflush(_coverage_fout);
        }
        ds = (data_string *)tmp___6;
        {
        fprintf(_coverage_fout, "2131\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )((void *)0) != (unsigned int )ds) {
          {
          fprintf(_coverage_fout, "2132\n");
          fflush(_coverage_fout);
          }
          tmp___5 = stat_cache_get_entry(srv, con, ds->value, & sce);
          {
          fprintf(_coverage_fout, "2133\n");
          fflush(_coverage_fout);
          }
          if (5 != (int )tmp___5) {
            {
            fprintf(_coverage_fout, "2134\n");
            fflush(_coverage_fout);
            }
            http_chunk_append_file(srv, con, ds->value, 0LL, sce->st.st_size);
            {
            fprintf(_coverage_fout, "2135\n");
            fflush(_coverage_fout);
            }
            hctx->send_content_body = 0;
            {
            fprintf(_coverage_fout, "2136\n");
            fflush(_coverage_fout);
            }
            joblist_append(srv, con);
          } else {
            {
            fprintf(_coverage_fout, "2137\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "2138\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2139\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2140\n");
      fflush(_coverage_fout);
      }
      if (hctx->send_content_body) {
        {
        fprintf(_coverage_fout, "2141\n");
        fflush(_coverage_fout);
        }
        if (blen > 1U) {
          {
          fprintf(_coverage_fout, "2142\n");
          fflush(_coverage_fout);
          }
          if ((int )con->request.http_version == 1) {
            {
            fprintf(_coverage_fout, "2143\n");
            fflush(_coverage_fout);
            }
            if (! (con->parsed_response & (unsigned int )(1 << 2))) {
              {
              fprintf(_coverage_fout, "2144\n");
              fflush(_coverage_fout);
              }
              con->response.transfer_encoding = (enum __anonenum_transfer_encoding_96 )1;
            } else {
              {
              fprintf(_coverage_fout, "2145\n");
              fflush(_coverage_fout);
              }

            }
          } else {
            {
            fprintf(_coverage_fout, "2146\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "2147\n");
          fflush(_coverage_fout);
          }
          http_chunk_append_mem(srv, con, (char const   *)c, blen);
          {
          fprintf(_coverage_fout, "2148\n");
          fflush(_coverage_fout);
          }
          joblist_append(srv, con);
        } else {
          {
          fprintf(_coverage_fout, "2149\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2150\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "2151\n");
      fflush(_coverage_fout);
      }
      if (hctx->send_content_body) {
        {
        fprintf(_coverage_fout, "2152\n");
        fflush(_coverage_fout);
        }
        if ((packet.b)->used > 1U) {
          {
          fprintf(_coverage_fout, "2153\n");
          fflush(_coverage_fout);
          }
          if ((int )con->request.http_version == 1) {
            {
            fprintf(_coverage_fout, "2154\n");
            fflush(_coverage_fout);
            }
            if (! (con->parsed_response & (unsigned int )(1 << 2))) {
              {
              fprintf(_coverage_fout, "2155\n");
              fflush(_coverage_fout);
              }
              con->response.transfer_encoding = (enum __anonenum_transfer_encoding_96 )1;
            } else {
              {
              fprintf(_coverage_fout, "2156\n");
              fflush(_coverage_fout);
              }

            }
          } else {
            {
            fprintf(_coverage_fout, "2157\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "2158\n");
          fflush(_coverage_fout);
          }
          http_chunk_append_mem(srv, con, (char const   *)(packet.b)->ptr,
                                (packet.b)->used);
          {
          fprintf(_coverage_fout, "2159\n");
          fflush(_coverage_fout);
          }
          joblist_append(srv, con);
        } else {
          {
          fprintf(_coverage_fout, "2160\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2161\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "2162\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "2163\n");
    fflush(_coverage_fout);
    }
    case 7: 
    if (packet.len == 0U) {
      {
      fprintf(_coverage_fout, "2164\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "2165\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2166\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2549U, "sb", "FastCGI-stderr:",
                    packet.b);
    {
    fprintf(_coverage_fout, "2167\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "2168\n");
    fflush(_coverage_fout);
    }
    case 3: 
    con->file_finished = 1;
    {
    fprintf(_coverage_fout, "2169\n");
    fflush(_coverage_fout);
    }
    if ((int )host->mode != 2) {
      {
      fprintf(_coverage_fout, "2170\n");
      fflush(_coverage_fout);
      }
      http_chunk_append_mem(srv, con, (char const   *)((void *)0), 0U);
      {
      fprintf(_coverage_fout, "2171\n");
      fflush(_coverage_fout);
      }
      joblist_append(srv, con);
    } else {
      {
      fprintf(_coverage_fout, "2172\n");
      fflush(_coverage_fout);
      }
      if (! (con->http_status == 0)) {
        {
        fprintf(_coverage_fout, "2173\n");
        fflush(_coverage_fout);
        }
        if (! (con->http_status == 200)) {
          {
          fprintf(_coverage_fout, "2174\n");
          fflush(_coverage_fout);
          }
          http_chunk_append_mem(srv, con, (char const   *)((void *)0), 0U);
          {
          fprintf(_coverage_fout, "2175\n");
          fflush(_coverage_fout);
          }
          joblist_append(srv, con);
        } else {
          {
          fprintf(_coverage_fout, "2176\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2177\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "2178\n");
    fflush(_coverage_fout);
    }
    fin = 1;
    {
    fprintf(_coverage_fout, "2179\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "2180\n");
    fflush(_coverage_fout);
    }
    default: 
    log_error_write(srv, "mod_fastcgi.c", 2567U, "sd",
                    "FastCGI: header.type not handled: ", packet.type);
    {
    fprintf(_coverage_fout, "2181\n");
    fflush(_coverage_fout);
    }
    break;
    }
    {
    fprintf(_coverage_fout, "2182\n");
    fflush(_coverage_fout);
    }
    buffer_free(packet.b);
  }
  {
  fprintf(_coverage_fout, "2183\n");
  fflush(_coverage_fout);
  }
  return (fin);
}
}
static int fcgi_restart_dead_procs(server *srv , plugin_data *p ,
                                   fcgi_extension_host *host ) 
{ 
  fcgi_proc *proc ;
  int status ;
  __pid_t tmp ;
  union __anonunion_156 __constr_expr_0 ;
  union __anonunion_157 __constr_expr_1 ;
  union __anonunion_158 __constr_expr_2 ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2184\n");
  fflush(_coverage_fout);
  }
  proc = host->first;
  {
  fprintf(_coverage_fout, "2185\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2186\n");
    fflush(_coverage_fout);
    }
    if (proc) {
      {
      fprintf(_coverage_fout, "2187\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "2188\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2189\n");
    fflush(_coverage_fout);
    }
    if (p->conf.debug > 2) {
      {
      fprintf(_coverage_fout, "2190\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 2584U, "sbdddd", "proc:",
                      proc->connection_name, (unsigned int )proc->state,
                      proc->is_local, proc->load, proc->pid);
    } else {
      {
      fprintf(_coverage_fout, "2191\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2192\n");
    fflush(_coverage_fout);
    }
    switch ((int )proc->state) {
    {
    fprintf(_coverage_fout, "2193\n");
    fflush(_coverage_fout);
    }
    case 0: 
    case 5: 
    __assert_fail("0", "mod_fastcgi.c", 2601U, "fcgi_restart_dead_procs");
    {
    fprintf(_coverage_fout, "2194\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "2195\n");
    fflush(_coverage_fout);
    }
    case 1: 
    break;
    {
    fprintf(_coverage_fout, "2196\n");
    fflush(_coverage_fout);
    }
    case 2: 
    if (srv->cur_ts <= proc->disabled_until) {
      {
      fprintf(_coverage_fout, "2197\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "2198\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2199\n");
    fflush(_coverage_fout);
    }
    proc->state = (enum __anonenum_state_139 )1;
    {
    fprintf(_coverage_fout, "2200\n");
    fflush(_coverage_fout);
    }
    (host->active_procs) ++;
    {
    fprintf(_coverage_fout, "2201\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2612U, "sbdb",
                    "fcgi-server re-enabled:", host->host, (int )host->port,
                    host->unixsocket);
    {
    fprintf(_coverage_fout, "2202\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "2203\n");
    fflush(_coverage_fout);
    }
    case 3: 
    if (! proc->is_local) {
      {
      fprintf(_coverage_fout, "2204\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "2205\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2206\n");
    fflush(_coverage_fout);
    }
    tmp = waitpid(proc->pid, & status, 1);
    {
    fprintf(_coverage_fout, "2207\n");
    fflush(_coverage_fout);
    }
    switch (tmp) {
    {
    fprintf(_coverage_fout, "2208\n");
    fflush(_coverage_fout);
    }
    case 0: 
    break;
    {
    fprintf(_coverage_fout, "2209\n");
    fflush(_coverage_fout);
    }
    case -1: 
    break;
    {
    fprintf(_coverage_fout, "2210\n");
    fflush(_coverage_fout);
    }
    default: 
    __constr_expr_2.__in = status;
    {
    fprintf(_coverage_fout, "2211\n");
    fflush(_coverage_fout);
    }
    if (! ((__constr_expr_2.__i & 127) == 0)) {
      {
      fprintf(_coverage_fout, "2212\n");
      fflush(_coverage_fout);
      }
      __constr_expr_1.__in = status;
      {
      fprintf(_coverage_fout, "2213\n");
      fflush(_coverage_fout);
      }
      if ((int )((signed char )((__constr_expr_1.__i & 127) + 1)) >> 1 > 0) {
        {
        fprintf(_coverage_fout, "2214\n");
        fflush(_coverage_fout);
        }
        __constr_expr_0.__in = status;
        {
        fprintf(_coverage_fout, "2215\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 2637U, "sd", "child signaled:",
                        __constr_expr_0.__i & 127);
      } else {
        {
        fprintf(_coverage_fout, "2216\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 2641U, "sd",
                        "child died somehow:", status);
      }
    } else {
      {
      fprintf(_coverage_fout, "2217\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2218\n");
    fflush(_coverage_fout);
    }
    proc->state = (enum __anonenum_state_139 )4;
    {
    fprintf(_coverage_fout, "2219\n");
    fflush(_coverage_fout);
    }
    break;
    }
    {
    fprintf(_coverage_fout, "2220\n");
    fflush(_coverage_fout);
    }
    if ((int )proc->state != 4) {
      {
      fprintf(_coverage_fout, "2221\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "2222\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2223\n");
    fflush(_coverage_fout);
    }
    case 4: 
    if (proc->is_local) {
      {
      fprintf(_coverage_fout, "2224\n");
      fflush(_coverage_fout);
      }
      if (proc->load != 0U) {
        {
        fprintf(_coverage_fout, "2225\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "2226\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2227\n");
      fflush(_coverage_fout);
      }
      if (p->conf.debug) {
        {
        fprintf(_coverage_fout, "2228\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 2665U, "ssbsdsd",
                        "--- fastcgi spawning", "\n\tsocket",
                        proc->connection_name, "\n\tcurrent:", 1, "/",
                        (int )host->min_procs);
      } else {
        {
        fprintf(_coverage_fout, "2229\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2230\n");
      fflush(_coverage_fout);
      }
      tmp___0 = fcgi_spawn_connection(srv, p, host, proc);
      {
      fprintf(_coverage_fout, "2231\n");
      fflush(_coverage_fout);
      }
      if (tmp___0) {
        {
        fprintf(_coverage_fout, "2232\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 2672U, "s",
                        "ERROR: spawning fcgi failed.");
        {
        fprintf(_coverage_fout, "2233\n");
        fflush(_coverage_fout);
        }
        return (5);
      } else {
        {
        fprintf(_coverage_fout, "2234\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "2235\n");
      fflush(_coverage_fout);
      }
      if (srv->cur_ts <= proc->disabled_until) {
        {
        fprintf(_coverage_fout, "2236\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "2237\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2238\n");
      fflush(_coverage_fout);
      }
      proc->state = (enum __anonenum_state_139 )1;
      {
      fprintf(_coverage_fout, "2239\n");
      fflush(_coverage_fout);
      }
      (host->active_procs) ++;
      {
      fprintf(_coverage_fout, "2240\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 2682U, "sb",
                      "fcgi-server re-enabled:", proc->connection_name);
    }
    {
    fprintf(_coverage_fout, "2241\n");
    fflush(_coverage_fout);
    }
    break;
    }
    {
    fprintf(_coverage_fout, "2242\n");
    fflush(_coverage_fout);
    }
    proc = proc->next;
  }
  {
  fprintf(_coverage_fout, "2243\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static handler_t fcgi_write_request(server *srv , handler_ctx *hctx ) 
{ 
  plugin_data *p ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2244\n");
  fflush(_coverage_fout);
  }
  p = hctx->plugin_data;
  {
  fprintf(_coverage_fout, "2245\n");
  fflush(_coverage_fout);
  }
  host = hctx->host;
  {
  fprintf(_coverage_fout, "2246\n");
  fflush(_coverage_fout);
  }
  con = hctx->remote_conn;
  {
  fprintf(_coverage_fout, "2247\n");
  fflush(_coverage_fout);
  }
  if (! host) {
    {
    fprintf(_coverage_fout, "2248\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2704U, "sxddd", "write-req: error",
                    host, (host->host)->used, (int )host->port,
                    (host->unixsocket)->used);
    {
    fprintf(_coverage_fout, "2249\n");
    fflush(_coverage_fout);
    }
    (hctx->proc)->disabled_until = srv->cur_ts + 10L;
    {
    fprintf(_coverage_fout, "2250\n");
    fflush(_coverage_fout);
    }
    (hctx->proc)->state = (enum __anonenum_state_139 )4;
    {
    fprintf(_coverage_fout, "2251\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )5);
  } else {
    {
    fprintf(_coverage_fout, "2252\n");
    fflush(_coverage_fout);
    }
    if (! (host->host)->used) {
      {
      fprintf(_coverage_fout, "2253\n");
      fflush(_coverage_fout);
      }
      goto _L;
    } else {
      {
      fprintf(_coverage_fout, "2254\n");
      fflush(_coverage_fout);
      }
      if (! host->port) {
        {
        fprintf(_coverage_fout, "2255\n");
        fflush(_coverage_fout);
        }
        _L: 
        if (! (host->unixsocket)->used) {
          {
          fprintf(_coverage_fout, "2256\n");
          fflush(_coverage_fout);
          }
          log_error_write(srv, "mod_fastcgi.c", 2704U, "sxddd",
                          "write-req: error", host, (host->host)->used,
                          (int )host->port, (host->unixsocket)->used);
          {
          fprintf(_coverage_fout, "2257\n");
          fflush(_coverage_fout);
          }
          (hctx->proc)->disabled_until = srv->cur_ts + 10L;
          {
          fprintf(_coverage_fout, "2258\n");
          fflush(_coverage_fout);
          }
          (hctx->proc)->state = (enum __anonenum_state_139 )4;
          {
          fprintf(_coverage_fout, "2259\n");
          fflush(_coverage_fout);
          }
          return ((handler_t )5);
        } else {
          {
          fprintf(_coverage_fout, "2260\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2261\n");
        fflush(_coverage_fout);
        }

      }
    }
  }
  {
  fprintf(_coverage_fout, "2262\n");
  fflush(_coverage_fout);
  }
  if ((int )hctx->state == 2) {
    {
    fprintf(_coverage_fout, "2263\n");
    fflush(_coverage_fout);
    }
    socket_error_len = (socklen_t )sizeof(socket_error);
    {
    fprintf(_coverage_fout, "2264\n");
    fflush(_coverage_fout);
    }
    tmp___1 = getsockopt(hctx->fd, 1, 4,
                         (void */* __restrict  */)((void *)(& socket_error)),
                         (socklen_t */* __restrict  */)(& socket_error_len));
    {
    fprintf(_coverage_fout, "2265\n");
    fflush(_coverage_fout);
    }
    if (0 != tmp___1) {
      {
      fprintf(_coverage_fout, "2266\n");
      fflush(_coverage_fout);
      }
      tmp = __errno_location();
      {
      fprintf(_coverage_fout, "2267\n");
      fflush(_coverage_fout);
      }
      tmp___0 = strerror(*tmp);
      {
      fprintf(_coverage_fout, "2268\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 2724U, "ss", "getsockopt failed:",
                      tmp___0);
      {
      fprintf(_coverage_fout, "2269\n");
      fflush(_coverage_fout);
      }
      (hctx->proc)->disabled_until = srv->cur_ts + 10L;
      {
      fprintf(_coverage_fout, "2270\n");
      fflush(_coverage_fout);
      }
      (hctx->proc)->state = (enum __anonenum_state_139 )4;
      {
      fprintf(_coverage_fout, "2271\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )5);
    } else {
      {
      fprintf(_coverage_fout, "2272\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2273\n");
    fflush(_coverage_fout);
    }
    if (socket_error != 0) {
      {
      fprintf(_coverage_fout, "2274\n");
      fflush(_coverage_fout);
      }
      if (! (hctx->proc)->is_local) {
        {
        fprintf(_coverage_fout, "2275\n");
        fflush(_coverage_fout);
        }
        tmp___2 = strerror(socket_error);
        {
        fprintf(_coverage_fout, "2276\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 2736U, "sssb",
                        "establishing connection failed:", tmp___2, "socket:",
                        (hctx->proc)->connection_name);
      } else {
        {
        fprintf(_coverage_fout, "2277\n");
        fflush(_coverage_fout);
        }
        if (p->conf.debug) {
          {
          fprintf(_coverage_fout, "2278\n");
          fflush(_coverage_fout);
          }
          tmp___2 = strerror(socket_error);
          {
          fprintf(_coverage_fout, "2279\n");
          fflush(_coverage_fout);
          }
          log_error_write(srv, "mod_fastcgi.c", 2736U, "sssb",
                          "establishing connection failed:", tmp___2, "socket:",
                          (hctx->proc)->connection_name);
        } else {
          {
          fprintf(_coverage_fout, "2280\n");
          fflush(_coverage_fout);
          }

        }
      }
      {
      fprintf(_coverage_fout, "2281\n");
      fflush(_coverage_fout);
      }
      (hctx->proc)->disabled_until = srv->cur_ts + 5L;
      {
      fprintf(_coverage_fout, "2282\n");
      fflush(_coverage_fout);
      }
      if ((hctx->proc)->is_local) {
        {
        fprintf(_coverage_fout, "2283\n");
        fflush(_coverage_fout);
        }
        (hctx->proc)->state = (enum __anonenum_state_139 )3;
      } else {
        {
        fprintf(_coverage_fout, "2284\n");
        fflush(_coverage_fout);
        }
        (hctx->proc)->state = (enum __anonenum_state_139 )4;
      }
      {
      fprintf(_coverage_fout, "2285\n");
      fflush(_coverage_fout);
      }
      (hctx->proc)->state = (enum __anonenum_state_139 )4;
      {
      fprintf(_coverage_fout, "2286\n");
      fflush(_coverage_fout);
      }
      fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
      {
      fprintf(_coverage_fout, "2287\n");
      fflush(_coverage_fout);
      }
      buffer_append_string(p->statuskey, ".died");
      {
      fprintf(_coverage_fout, "2288\n");
      fflush(_coverage_fout);
      }
      if ((p->statuskey)->used) {
        {
        fprintf(_coverage_fout, "2289\n");
        fflush(_coverage_fout);
        }
        tmp___3 = (p->statuskey)->used - 1U;
      } else {
        {
        fprintf(_coverage_fout, "2290\n");
        fflush(_coverage_fout);
        }
        tmp___3 = 0U;
      }
      {
      fprintf(_coverage_fout, "2291\n");
      fflush(_coverage_fout);
      }
      status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___3);
      {
      fprintf(_coverage_fout, "2292\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )5);
    } else {
      {
      fprintf(_coverage_fout, "2293\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2294\n");
    fflush(_coverage_fout);
    }
    hctx->state = (fcgi_connection_state_t )3;
  } else {
    {
    fprintf(_coverage_fout, "2295\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2296\n");
  fflush(_coverage_fout);
  }
  switch ((int )hctx->state) {
  {
  fprintf(_coverage_fout, "2297\n");
  fflush(_coverage_fout);
  }
  case 2: 
  break;
  {
  fprintf(_coverage_fout, "2298\n");
  fflush(_coverage_fout);
  }
  case 1: 
  hctx->proc = (fcgi_proc *)((void *)0);
  {
  fprintf(_coverage_fout, "2299\n");
  fflush(_coverage_fout);
  }
  proc = (hctx->host)->first;
  {
  fprintf(_coverage_fout, "2300\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2301\n");
    fflush(_coverage_fout);
    }
    if (proc) {
      {
      fprintf(_coverage_fout, "2302\n");
      fflush(_coverage_fout);
      }
      if (! ((int )proc->state != 1)) {
        {
        fprintf(_coverage_fout, "2303\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "2304\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "2305\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2306\n");
    fflush(_coverage_fout);
    }
    proc = proc->next;
  }
  {
  fprintf(_coverage_fout, "2307\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )proc == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "2308\n");
    fflush(_coverage_fout);
    }
    hctx->fde_ndx = -1;
    {
    fprintf(_coverage_fout, "2309\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )5);
  } else {
    {
    fprintf(_coverage_fout, "2310\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2311\n");
  fflush(_coverage_fout);
  }
  hctx->proc = proc;
  {
  fprintf(_coverage_fout, "2312\n");
  fflush(_coverage_fout);
  }
  proc = proc->next;
  {
  fprintf(_coverage_fout, "2313\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2314\n");
    fflush(_coverage_fout);
    }
    if (proc) {
      {
      fprintf(_coverage_fout, "2315\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "2316\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2317\n");
    fflush(_coverage_fout);
    }
    if ((int )proc->state != 1) {
      {
      fprintf(_coverage_fout, "2318\n");
      fflush(_coverage_fout);
      }
      goto __Cont;
    } else {
      {
      fprintf(_coverage_fout, "2319\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2320\n");
    fflush(_coverage_fout);
    }
    if (proc->load < (hctx->proc)->load) {
      {
      fprintf(_coverage_fout, "2321\n");
      fflush(_coverage_fout);
      }
      hctx->proc = proc;
    } else {
      {
      fprintf(_coverage_fout, "2322\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2323\n");
    fflush(_coverage_fout);
    }
    __Cont: 
    proc = proc->next;
  }
  {
  fprintf(_coverage_fout, "2324\n");
  fflush(_coverage_fout);
  }
  if ((host->unixsocket)->used) {
    {
    fprintf(_coverage_fout, "2325\n");
    fflush(_coverage_fout);
    }
    ret = 1;
  } else {
    {
    fprintf(_coverage_fout, "2326\n");
    fflush(_coverage_fout);
    }
    ret = 2;
  }
  {
  fprintf(_coverage_fout, "2327\n");
  fflush(_coverage_fout);
  }
  hctx->fd = socket(ret, 1, 0);
  {
  fprintf(_coverage_fout, "2328\n");
  fflush(_coverage_fout);
  }
  if (-1 == hctx->fd) {
    {
    fprintf(_coverage_fout, "2329\n");
    fflush(_coverage_fout);
    }
    tmp___4 = __errno_location();
    {
    fprintf(_coverage_fout, "2330\n");
    fflush(_coverage_fout);
    }
    if (*tmp___4 == 24) {
      {
      fprintf(_coverage_fout, "2331\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 2795U, "sd",
                      "wait for fd at connection:", con->fd);
      {
      fprintf(_coverage_fout, "2332\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )6);
    } else {
      {
      fprintf(_coverage_fout, "2333\n");
      fflush(_coverage_fout);
      }
      tmp___5 = __errno_location();
      {
      fprintf(_coverage_fout, "2334\n");
      fflush(_coverage_fout);
      }
      if (*tmp___5 == 4) {
        {
        fprintf(_coverage_fout, "2335\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 2795U, "sd",
                        "wait for fd at connection:", con->fd);
        {
        fprintf(_coverage_fout, "2336\n");
        fflush(_coverage_fout);
        }
        return ((handler_t )6);
      } else {
        {
        fprintf(_coverage_fout, "2337\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "2338\n");
    fflush(_coverage_fout);
    }
    tmp___6 = __errno_location();
    {
    fprintf(_coverage_fout, "2339\n");
    fflush(_coverage_fout);
    }
    tmp___7 = strerror(*tmp___6);
    {
    fprintf(_coverage_fout, "2340\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2801U, "ssdd", "socket failed:",
                    tmp___7, srv->cur_fds, srv->max_fds);
    {
    fprintf(_coverage_fout, "2341\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )5);
  } else {
    {
    fprintf(_coverage_fout, "2342\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2343\n");
  fflush(_coverage_fout);
  }
  hctx->fde_ndx = -1;
  {
  fprintf(_coverage_fout, "2344\n");
  fflush(_coverage_fout);
  }
  (srv->cur_fds) ++;
  {
  fprintf(_coverage_fout, "2345\n");
  fflush(_coverage_fout);
  }
  fdevent_register(srv->ev, hctx->fd, & fcgi_handle_fdevent, (void *)hctx);
  {
  fprintf(_coverage_fout, "2346\n");
  fflush(_coverage_fout);
  }
  tmp___10 = fdevent_fcntl_set(srv->ev, hctx->fd);
  {
  fprintf(_coverage_fout, "2347\n");
  fflush(_coverage_fout);
  }
  if (-1 == tmp___10) {
    {
    fprintf(_coverage_fout, "2348\n");
    fflush(_coverage_fout);
    }
    tmp___8 = __errno_location();
    {
    fprintf(_coverage_fout, "2349\n");
    fflush(_coverage_fout);
    }
    tmp___9 = strerror(*tmp___8);
    {
    fprintf(_coverage_fout, "2350\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2812U, "ss", "fcntl failed:", tmp___9);
    {
    fprintf(_coverage_fout, "2351\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )5);
  } else {
    {
    fprintf(_coverage_fout, "2352\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2353\n");
  fflush(_coverage_fout);
  }
  if ((hctx->proc)->is_local) {
    {
    fprintf(_coverage_fout, "2354\n");
    fflush(_coverage_fout);
    }
    hctx->pid = (hctx->proc)->pid;
  } else {
    {
    fprintf(_coverage_fout, "2355\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2356\n");
  fflush(_coverage_fout);
  }
  tmp___11 = fcgi_establish_connection(srv, hctx);
  {
  fprintf(_coverage_fout, "2357\n");
  fflush(_coverage_fout);
  }
  switch ((int )tmp___11) {
  {
  fprintf(_coverage_fout, "2358\n");
  fflush(_coverage_fout);
  }
  case 2: 
  fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
  {
  fprintf(_coverage_fout, "2359\n");
  fflush(_coverage_fout);
  }
  fcgi_set_state(srv, hctx, (fcgi_connection_state_t )2);
  {
  fprintf(_coverage_fout, "2360\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )4);
  {
  fprintf(_coverage_fout, "2361\n");
  fflush(_coverage_fout);
  }
  case 3: 
  log_error_write(srv, "mod_fastcgi.c", 2834U, "ssdsd",
                  "backend is overloaded; we\'ll disable it for 2 seconds and send the request to another backend instead:",
                  "reconnects:", hctx->reconnects, "load:", host->load);
  {
  fprintf(_coverage_fout, "2362\n");
  fflush(_coverage_fout);
  }
  (hctx->proc)->disabled_until = srv->cur_ts + 2L;
  {
  fprintf(_coverage_fout, "2363\n");
  fflush(_coverage_fout);
  }
  (hctx->proc)->state = (enum __anonenum_state_139 )2;
  {
  fprintf(_coverage_fout, "2364\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
  {
  fprintf(_coverage_fout, "2365\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(p->statuskey, ".overloaded");
  {
  fprintf(_coverage_fout, "2366\n");
  fflush(_coverage_fout);
  }
  if ((p->statuskey)->used) {
    {
    fprintf(_coverage_fout, "2367\n");
    fflush(_coverage_fout);
    }
    tmp___12 = (p->statuskey)->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "2368\n");
    fflush(_coverage_fout);
    }
    tmp___12 = 0U;
  }
  {
  fprintf(_coverage_fout, "2369\n");
  fflush(_coverage_fout);
  }
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___12);
  {
  fprintf(_coverage_fout, "2370\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )5);
  {
  fprintf(_coverage_fout, "2371\n");
  fflush(_coverage_fout);
  }
  case 4: 
  (hctx->proc)->disabled_until = srv->cur_ts + 5L;
  {
  fprintf(_coverage_fout, "2372\n");
  fflush(_coverage_fout);
  }
  if ((hctx->proc)->is_local) {
    {
    fprintf(_coverage_fout, "2373\n");
    fflush(_coverage_fout);
    }
    (hctx->proc)->state = (enum __anonenum_state_139 )3;
  } else {
    {
    fprintf(_coverage_fout, "2374\n");
    fflush(_coverage_fout);
    }
    (hctx->proc)->state = (enum __anonenum_state_139 )4;
  }
  {
  fprintf(_coverage_fout, "2375\n");
  fflush(_coverage_fout);
  }
  log_error_write(srv, "mod_fastcgi.c", 2864U, "ssdsd",
                  "backend died; we\'ll disable it for 5 seconds and send the request to another backend instead:",
                  "reconnects:", hctx->reconnects, "load:", host->load);
  {
  fprintf(_coverage_fout, "2376\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
  {
  fprintf(_coverage_fout, "2377\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(p->statuskey, ".died");
  {
  fprintf(_coverage_fout, "2378\n");
  fflush(_coverage_fout);
  }
  if ((p->statuskey)->used) {
    {
    fprintf(_coverage_fout, "2379\n");
    fflush(_coverage_fout);
    }
    tmp___13 = (p->statuskey)->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "2380\n");
    fflush(_coverage_fout);
    }
    tmp___13 = 0U;
  }
  {
  fprintf(_coverage_fout, "2381\n");
  fflush(_coverage_fout);
  }
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___13);
  {
  fprintf(_coverage_fout, "2382\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )5);
  {
  fprintf(_coverage_fout, "2383\n");
  fflush(_coverage_fout);
  }
  case 1: 
  fcgi_set_state(srv, hctx, (fcgi_connection_state_t )3);
  {
  fprintf(_coverage_fout, "2384\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "2385\n");
  fflush(_coverage_fout);
  }
  case 0: 
  break;
  }
  {
  fprintf(_coverage_fout, "2386\n");
  fflush(_coverage_fout);
  }
  case 3: 
  ((hctx->proc)->load) ++;
  {
  fprintf(_coverage_fout, "2387\n");
  fflush(_coverage_fout);
  }
  (hctx->proc)->last_used = srv->cur_ts;
  {
  fprintf(_coverage_fout, "2388\n");
  fflush(_coverage_fout);
  }
  hctx->got_proc = 1;
  {
  fprintf(_coverage_fout, "2389\n");
  fflush(_coverage_fout);
  }
  status_counter_inc(srv, "fastcgi.requests",
                     (size_t )(sizeof("fastcgi.requests") - 1UL));
  {
  fprintf(_coverage_fout, "2390\n");
  fflush(_coverage_fout);
  }
  status_counter_inc(srv, "fastcgi.active-requests",
                     (size_t )(sizeof("fastcgi.active-requests") - 1UL));
  {
  fprintf(_coverage_fout, "2391\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
  {
  fprintf(_coverage_fout, "2392\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(p->statuskey, ".connected");
  {
  fprintf(_coverage_fout, "2393\n");
  fflush(_coverage_fout);
  }
  if ((p->statuskey)->used) {
    {
    fprintf(_coverage_fout, "2394\n");
    fflush(_coverage_fout);
    }
    tmp___14 = (p->statuskey)->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "2395\n");
    fflush(_coverage_fout);
    }
    tmp___14 = 0U;
  }
  {
  fprintf(_coverage_fout, "2396\n");
  fflush(_coverage_fout);
  }
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___14);
  {
  fprintf(_coverage_fout, "2397\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
  {
  fprintf(_coverage_fout, "2398\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(p->statuskey, ".load");
  {
  fprintf(_coverage_fout, "2399\n");
  fflush(_coverage_fout);
  }
  if ((p->statuskey)->used) {
    {
    fprintf(_coverage_fout, "2400\n");
    fflush(_coverage_fout);
    }
    tmp___15 = (p->statuskey)->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "2401\n");
    fflush(_coverage_fout);
    }
    tmp___15 = 0U;
  }
  {
  fprintf(_coverage_fout, "2402\n");
  fflush(_coverage_fout);
  }
  status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp___15,
                     (int )(hctx->proc)->load);
  {
  fprintf(_coverage_fout, "2403\n");
  fflush(_coverage_fout);
  }
  fastcgi_status_copy_procname(p->statuskey, hctx->host,
                               (fcgi_proc *)((void *)0));
  {
  fprintf(_coverage_fout, "2404\n");
  fflush(_coverage_fout);
  }
  buffer_append_string(p->statuskey, ".load");
  {
  fprintf(_coverage_fout, "2405\n");
  fflush(_coverage_fout);
  }
  if ((p->statuskey)->used) {
    {
    fprintf(_coverage_fout, "2406\n");
    fflush(_coverage_fout);
    }
    tmp___16 = (p->statuskey)->used - 1U;
  } else {
    {
    fprintf(_coverage_fout, "2407\n");
    fflush(_coverage_fout);
    }
    tmp___16 = 0U;
  }
  {
  fprintf(_coverage_fout, "2408\n");
  fflush(_coverage_fout);
  }
  status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp___16,
                     (hctx->host)->load);
  {
  fprintf(_coverage_fout, "2409\n");
  fflush(_coverage_fout);
  }
  if (p->conf.debug) {
    {
    fprintf(_coverage_fout, "2410\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2913U, "ssdsbsd", "got proc:", "pid:",
                    (hctx->proc)->pid, "socket:", (hctx->proc)->connection_name,
                    "load:", (hctx->proc)->load);
  } else {
    {
    fprintf(_coverage_fout, "2411\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2412\n");
  fflush(_coverage_fout);
  }
  if (hctx->request_id == 0U) {
    {
    fprintf(_coverage_fout, "2413\n");
    fflush(_coverage_fout);
    }
    hctx->request_id = fcgi_requestid_new(srv, p);
  } else {
    {
    fprintf(_coverage_fout, "2414\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2924U, "sd",
                    "fcgi-request is already in use:", hctx->request_id);
  }
  {
  fprintf(_coverage_fout, "2415\n");
  fflush(_coverage_fout);
  }
  fcgi_create_env(srv, hctx, hctx->request_id);
  {
  fprintf(_coverage_fout, "2416\n");
  fflush(_coverage_fout);
  }
  fcgi_set_state(srv, hctx, (fcgi_connection_state_t )4);
  {
  fprintf(_coverage_fout, "2417\n");
  fflush(_coverage_fout);
  }
  case 4: 
  ret = (*(srv->network_backend_write))(srv, con, hctx->fd, hctx->wb);
  {
  fprintf(_coverage_fout, "2418\n");
  fflush(_coverage_fout);
  }
  chunkqueue_remove_finished_chunks(hctx->wb);
  {
  fprintf(_coverage_fout, "2419\n");
  fflush(_coverage_fout);
  }
  if (ret < 0) {
    {
    fprintf(_coverage_fout, "2420\n");
    fflush(_coverage_fout);
    }
    tmp___17 = __errno_location();
    {
    fprintf(_coverage_fout, "2421\n");
    fflush(_coverage_fout);
    }
    switch (*tmp___17) {
    {
    fprintf(_coverage_fout, "2422\n");
    fflush(_coverage_fout);
    }
    case 107: 
    if ((hctx->wb)->bytes_out == 0LL) {
      {
      fprintf(_coverage_fout, "2423\n");
      fflush(_coverage_fout);
      }
      if (hctx->reconnects < 5) {
        {
        fprintf(_coverage_fout, "2424\n");
        fflush(_coverage_fout);
        }
        usleep(10000U);
        {
        fprintf(_coverage_fout, "2425\n");
        fflush(_coverage_fout);
        }
        fcgi_reconnect(srv, hctx);
        {
        fprintf(_coverage_fout, "2426\n");
        fflush(_coverage_fout);
        }
        return ((handler_t )6);
      } else {
        {
        fprintf(_coverage_fout, "2427\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "2428\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2429\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2965U, "ssosd",
                    "[REPORT ME] connection was dropped after accept(). reconnect() denied:",
                    "write-offset:", (hctx->wb)->bytes_out,
                    "reconnect attempts:", hctx->reconnects);
    {
    fprintf(_coverage_fout, "2430\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )5);
    {
    fprintf(_coverage_fout, "2431\n");
    fflush(_coverage_fout);
    }
    case 4: 
    case 11: 
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    {
    fprintf(_coverage_fout, "2432\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )4);
    {
    fprintf(_coverage_fout, "2433\n");
    fflush(_coverage_fout);
    }
    default: 
    tmp___18 = __errno_location();
    {
    fprintf(_coverage_fout, "2434\n");
    fflush(_coverage_fout);
    }
    tmp___19 = __errno_location();
    {
    fprintf(_coverage_fout, "2435\n");
    fflush(_coverage_fout);
    }
    tmp___20 = strerror(*tmp___19);
    {
    fprintf(_coverage_fout, "2436\n");
    fflush(_coverage_fout);
    }
    log_error_write(srv, "mod_fastcgi.c", 2977U, "ssd", "write failed:",
                    tmp___20, *tmp___18);
    {
    fprintf(_coverage_fout, "2437\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )5);
    }
  } else {
    {
    fprintf(_coverage_fout, "2438\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2439\n");
  fflush(_coverage_fout);
  }
  if ((hctx->wb)->bytes_out == (hctx->wb)->bytes_in) {
    {
    fprintf(_coverage_fout, "2440\n");
    fflush(_coverage_fout);
    }
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
    {
    fprintf(_coverage_fout, "2441\n");
    fflush(_coverage_fout);
    }
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1);
    {
    fprintf(_coverage_fout, "2442\n");
    fflush(_coverage_fout);
    }
    fcgi_set_state(srv, hctx, (fcgi_connection_state_t )5);
  } else {
    {
    fprintf(_coverage_fout, "2443\n");
    fflush(_coverage_fout);
    }
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    {
    fprintf(_coverage_fout, "2444\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )4);
  }
  {
  fprintf(_coverage_fout, "2445\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "2446\n");
  fflush(_coverage_fout);
  }
  case 5: 
  break;
  {
  fprintf(_coverage_fout, "2447\n");
  fflush(_coverage_fout);
  }
  default: 
  log_error_write(srv, "mod_fastcgi.c", 3000U, "s", "(debug) unknown state");
  {
  fprintf(_coverage_fout, "2448\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )5);
  }
  {
  fprintf(_coverage_fout, "2449\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )4);
}
}
static handler_t mod_fastcgi_handle_subrequest(server *srv , connection *con ,
                                               void *p_d ) 
{ 
  plugin_data *p ;
  handler_ctx *hctx ;
  fcgi_proc *proc ;
  fcgi_extension_host *host ;
  size_t k ;
  int ndx ;
  int used ;
  handler_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2450\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)p_d;
  {
  fprintf(_coverage_fout, "2451\n");
  fflush(_coverage_fout);
  }
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
  {
  fprintf(_coverage_fout, "2452\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )((void *)0) == (unsigned int )hctx) {
    {
    fprintf(_coverage_fout, "2453\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )1);
  } else {
    {
    fprintf(_coverage_fout, "2454\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2455\n");
  fflush(_coverage_fout);
  }
  if ((size_t )con->mode != p->id) {
    {
    fprintf(_coverage_fout, "2456\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )1);
  } else {
    {
    fprintf(_coverage_fout, "2457\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2458\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )hctx->host == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "2459\n");
    fflush(_coverage_fout);
    }
    used = -1;
    {
    fprintf(_coverage_fout, "2460\n");
    fflush(_coverage_fout);
    }
    ndx = (hctx->ext)->last_used_ndx + 1;
    {
    fprintf(_coverage_fout, "2461\n");
    fflush(_coverage_fout);
    }
    if ((size_t )ndx >= (hctx->ext)->used) {
      {
      fprintf(_coverage_fout, "2462\n");
      fflush(_coverage_fout);
      }
      ndx = 0;
    } else {
      {
      fprintf(_coverage_fout, "2463\n");
      fflush(_coverage_fout);
      }
      if (ndx < 0) {
        {
        fprintf(_coverage_fout, "2464\n");
        fflush(_coverage_fout);
        }
        ndx = 0;
      } else {
        {
        fprintf(_coverage_fout, "2465\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "2466\n");
    fflush(_coverage_fout);
    }
    host = *((hctx->ext)->hosts + ndx);
    {
    fprintf(_coverage_fout, "2467\n");
    fflush(_coverage_fout);
    }
    if (host->load > 0) {
      {
      fprintf(_coverage_fout, "2468\n");
      fflush(_coverage_fout);
      }
      k = 0U;
      {
      fprintf(_coverage_fout, "2469\n");
      fflush(_coverage_fout);
      }
      ndx = -1;
      {
      fprintf(_coverage_fout, "2470\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "2471\n");
        fflush(_coverage_fout);
        }
        if (k < (hctx->ext)->used) {
          {
          fprintf(_coverage_fout, "2472\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "2473\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "2474\n");
        fflush(_coverage_fout);
        }
        host = *((hctx->ext)->hosts + k);
        {
        fprintf(_coverage_fout, "2475\n");
        fflush(_coverage_fout);
        }
        if (host->active_procs == 0U) {
          {
          fprintf(_coverage_fout, "2476\n");
          fflush(_coverage_fout);
          }
          goto __Cont;
        } else {
          {
          fprintf(_coverage_fout, "2477\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "2478\n");
        fflush(_coverage_fout);
        }
        if (used == -1) {
          {
          fprintf(_coverage_fout, "2479\n");
          fflush(_coverage_fout);
          }
          used = host->load;
          {
          fprintf(_coverage_fout, "2480\n");
          fflush(_coverage_fout);
          }
          ndx = (int )k;
        } else {
          {
          fprintf(_coverage_fout, "2481\n");
          fflush(_coverage_fout);
          }
          if (host->load < used) {
            {
            fprintf(_coverage_fout, "2482\n");
            fflush(_coverage_fout);
            }
            used = host->load;
            {
            fprintf(_coverage_fout, "2483\n");
            fflush(_coverage_fout);
            }
            ndx = (int )k;
          } else {
            {
            fprintf(_coverage_fout, "2484\n");
            fflush(_coverage_fout);
            }

          }
        }
        {
        fprintf(_coverage_fout, "2485\n");
        fflush(_coverage_fout);
        }
        __Cont: 
        k ++;
      }
    } else {
      {
      fprintf(_coverage_fout, "2486\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2487\n");
    fflush(_coverage_fout);
    }
    if (ndx == -1) {
      {
      fprintf(_coverage_fout, "2488\n");
      fflush(_coverage_fout);
      }
      fcgi_connection_close(srv, hctx);
      {
      fprintf(_coverage_fout, "2489\n");
      fflush(_coverage_fout);
      }
      con->http_status = 500;
      {
      fprintf(_coverage_fout, "2490\n");
      fflush(_coverage_fout);
      }
      con->mode = (connection_type )0;
      {
      fprintf(_coverage_fout, "2491\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )2);
    } else {
      {
      fprintf(_coverage_fout, "2492\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2493\n");
    fflush(_coverage_fout);
    }
    (hctx->ext)->last_used_ndx = ndx;
    {
    fprintf(_coverage_fout, "2494\n");
    fflush(_coverage_fout);
    }
    host = *((hctx->ext)->hosts + ndx);
    {
    fprintf(_coverage_fout, "2495\n");
    fflush(_coverage_fout);
    }
    hctx->host = host;
    {
    fprintf(_coverage_fout, "2496\n");
    fflush(_coverage_fout);
    }
    ((hctx->host)->load) ++;
    {
    fprintf(_coverage_fout, "2497\n");
    fflush(_coverage_fout);
    }
    hctx->proc = (fcgi_proc *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "2498\n");
    fflush(_coverage_fout);
    }
    host = hctx->host;
  }
  {
  fprintf(_coverage_fout, "2499\n");
  fflush(_coverage_fout);
  }
  tmp = fcgi_write_request(srv, hctx);
  {
  fprintf(_coverage_fout, "2500\n");
  fflush(_coverage_fout);
  }
  switch ((int )tmp) {
  {
  fprintf(_coverage_fout, "2501\n");
  fflush(_coverage_fout);
  }
  case 5: 
  proc = hctx->proc;
  {
  fprintf(_coverage_fout, "2502\n");
  fflush(_coverage_fout);
  }
  host = hctx->host;
  {
  fprintf(_coverage_fout, "2503\n");
  fflush(_coverage_fout);
  }
  if ((int )hctx->state == 1) {
    {
    fprintf(_coverage_fout, "2504\n");
    fflush(_coverage_fout);
    }
    goto _L;
  } else {
    {
    fprintf(_coverage_fout, "2505\n");
    fflush(_coverage_fout);
    }
    if ((int )hctx->state == 2) {
      {
      fprintf(_coverage_fout, "2506\n");
      fflush(_coverage_fout);
      }
      _L: 
      if (proc) {
        {
        fprintf(_coverage_fout, "2507\n");
        fflush(_coverage_fout);
        }
        (host->active_procs) --;
      } else {
        {
        fprintf(_coverage_fout, "2508\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2509\n");
      fflush(_coverage_fout);
      }
      fcgi_restart_dead_procs(srv, p, host);
      {
      fprintf(_coverage_fout, "2510\n");
      fflush(_coverage_fout);
      }
      if (hctx->reconnects < 5) {
        {
        fprintf(_coverage_fout, "2511\n");
        fflush(_coverage_fout);
        }
        fcgi_reconnect(srv, hctx);
        {
        fprintf(_coverage_fout, "2512\n");
        fflush(_coverage_fout);
        }
        joblist_append(srv, con);
        {
        fprintf(_coverage_fout, "2513\n");
        fflush(_coverage_fout);
        }
        return ((handler_t )6);
      } else {
        {
        fprintf(_coverage_fout, "2514\n");
        fflush(_coverage_fout);
        }
        fcgi_connection_close(srv, hctx);
        {
        fprintf(_coverage_fout, "2515\n");
        fflush(_coverage_fout);
        }
        buffer_reset(con->physical.path);
        {
        fprintf(_coverage_fout, "2516\n");
        fflush(_coverage_fout);
        }
        con->mode = (connection_type )0;
        {
        fprintf(_coverage_fout, "2517\n");
        fflush(_coverage_fout);
        }
        con->http_status = 500;
        {
        fprintf(_coverage_fout, "2518\n");
        fflush(_coverage_fout);
        }
        joblist_append(srv, con);
        {
        fprintf(_coverage_fout, "2519\n");
        fflush(_coverage_fout);
        }
        return ((handler_t )2);
      }
    } else {
      {
      fprintf(_coverage_fout, "2520\n");
      fflush(_coverage_fout);
      }
      fcgi_connection_close(srv, hctx);
      {
      fprintf(_coverage_fout, "2521\n");
      fflush(_coverage_fout);
      }
      buffer_reset(con->physical.path);
      {
      fprintf(_coverage_fout, "2522\n");
      fflush(_coverage_fout);
      }
      con->mode = (connection_type )0;
      {
      fprintf(_coverage_fout, "2523\n");
      fflush(_coverage_fout);
      }
      con->http_status = 503;
      {
      fprintf(_coverage_fout, "2524\n");
      fflush(_coverage_fout);
      }
      joblist_append(srv, con);
      {
      fprintf(_coverage_fout, "2525\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )2);
    }
  }
  {
  fprintf(_coverage_fout, "2526\n");
  fflush(_coverage_fout);
  }
  case 4: 
  if (con->file_started == 1) {
    {
    fprintf(_coverage_fout, "2527\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )2);
  } else {
    {
    fprintf(_coverage_fout, "2528\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )4);
  }
  {
  fprintf(_coverage_fout, "2529\n");
  fflush(_coverage_fout);
  }
  case 6: 
  return ((handler_t )6);
  {
  fprintf(_coverage_fout, "2530\n");
  fflush(_coverage_fout);
  }
  default: 
  log_error_write(srv, "mod_fastcgi.c", 3128U, "s",
                  "subrequest write-req default");
  {
  fprintf(_coverage_fout, "2531\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )5);
  }
}
}
static handler_t fcgi_handle_fdevent(void *s , void *ctx , int revents ) 
{ 
  server *srv ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2532\n");
  fflush(_coverage_fout);
  }
  srv = (server *)s;
  {
  fprintf(_coverage_fout, "2533\n");
  fflush(_coverage_fout);
  }
  hctx = (handler_ctx *)ctx;
  {
  fprintf(_coverage_fout, "2534\n");
  fflush(_coverage_fout);
  }
  con = hctx->remote_conn;
  {
  fprintf(_coverage_fout, "2535\n");
  fflush(_coverage_fout);
  }
  p = hctx->plugin_data;
  {
  fprintf(_coverage_fout, "2536\n");
  fflush(_coverage_fout);
  }
  proc = hctx->proc;
  {
  fprintf(_coverage_fout, "2537\n");
  fflush(_coverage_fout);
  }
  host = hctx->host;
  {
  fprintf(_coverage_fout, "2538\n");
  fflush(_coverage_fout);
  }
  if (revents & 1) {
    {
    fprintf(_coverage_fout, "2539\n");
    fflush(_coverage_fout);
    }
    if ((int )hctx->state == 5) {
      {
      fprintf(_coverage_fout, "2540\n");
      fflush(_coverage_fout);
      }
      tmp = fcgi_demux_response(srv, hctx);
      {
      fprintf(_coverage_fout, "2541\n");
      fflush(_coverage_fout);
      }
      switch (tmp) {
      {
      fprintf(_coverage_fout, "2542\n");
      fflush(_coverage_fout);
      }
      case 0: 
      break;
      {
      fprintf(_coverage_fout, "2543\n");
      fflush(_coverage_fout);
      }
      case 1: 
      if ((int )host->mode == 2) {
        {
        fprintf(_coverage_fout, "2544\n");
        fflush(_coverage_fout);
        }
        if (con->http_status == 200) {
          {
          fprintf(_coverage_fout, "2545\n");
          fflush(_coverage_fout);
          }
          goto _L;
        } else {
          {
          fprintf(_coverage_fout, "2546\n");
          fflush(_coverage_fout);
          }
          if (con->http_status == 0) {
            {
            fprintf(_coverage_fout, "2547\n");
            fflush(_coverage_fout);
            }
            _L: 
            buffer_copy_string_buffer(con->physical.doc_root,
                                      (buffer const   *)host->docroot);
            {
            fprintf(_coverage_fout, "2548\n");
            fflush(_coverage_fout);
            }
            buffer_copy_string_buffer(con->physical.path,
                                      (buffer const   *)host->docroot);
            {
            fprintf(_coverage_fout, "2549\n");
            fflush(_coverage_fout);
            }
            buffer_append_string_buffer(con->physical.path,
                                        (buffer const   *)con->uri.path);
            {
            fprintf(_coverage_fout, "2550\n");
            fflush(_coverage_fout);
            }
            fcgi_connection_close(srv, hctx);
            {
            fprintf(_coverage_fout, "2551\n");
            fflush(_coverage_fout);
            }
            con->mode = (connection_type )0;
            {
            fprintf(_coverage_fout, "2552\n");
            fflush(_coverage_fout);
            }
            con->file_started = 1;
          } else {
            {
            fprintf(_coverage_fout, "2553\n");
            fflush(_coverage_fout);
            }
            fcgi_connection_close(srv, hctx);
          }
        }
      } else {
        {
        fprintf(_coverage_fout, "2554\n");
        fflush(_coverage_fout);
        }
        fcgi_connection_close(srv, hctx);
      }
      {
      fprintf(_coverage_fout, "2555\n");
      fflush(_coverage_fout);
      }
      joblist_append(srv, con);
      {
      fprintf(_coverage_fout, "2556\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )2);
      {
      fprintf(_coverage_fout, "2557\n");
      fflush(_coverage_fout);
      }
      case -1: 
      if (proc->pid) {
        {
        fprintf(_coverage_fout, "2558\n");
        fflush(_coverage_fout);
        }
        if ((int )proc->state != 4) {
          {
          fprintf(_coverage_fout, "2559\n");
          fflush(_coverage_fout);
          }
          tmp___0 = waitpid(proc->pid, & status, 1);
          {
          fprintf(_coverage_fout, "2560\n");
          fflush(_coverage_fout);
          }
          switch (tmp___0) {
          {
          fprintf(_coverage_fout, "2561\n");
          fflush(_coverage_fout);
          }
          case 0: 
          break;
          {
          fprintf(_coverage_fout, "2562\n");
          fflush(_coverage_fout);
          }
          case -1: 
          break;
          {
          fprintf(_coverage_fout, "2563\n");
          fflush(_coverage_fout);
          }
          default: 
          __constr_expr_3.__in = status;
          {
          fprintf(_coverage_fout, "2564\n");
          fflush(_coverage_fout);
          }
          if ((__constr_expr_3.__i & 127) == 0) {
            {
            fprintf(_coverage_fout, "2565\n");
            fflush(_coverage_fout);
            }
            __constr_expr_0.__in = status;
            {
            fprintf(_coverage_fout, "2566\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 3188U, "sdsd",
                            "child exited, pid:", proc->pid, "status:",
                            (__constr_expr_0.__i & 65280) >> 8);
          } else {
            {
            fprintf(_coverage_fout, "2567\n");
            fflush(_coverage_fout);
            }
            __constr_expr_2.__in = status;
            {
            fprintf(_coverage_fout, "2568\n");
            fflush(_coverage_fout);
            }
            if ((int )((signed char )((__constr_expr_2.__i & 127) + 1)) >> 1 > 0) {
              {
              fprintf(_coverage_fout, "2569\n");
              fflush(_coverage_fout);
              }
              __constr_expr_1.__in = status;
              {
              fprintf(_coverage_fout, "2570\n");
              fflush(_coverage_fout);
              }
              log_error_write(srv, "mod_fastcgi.c", 3192U, "sd",
                              "child signaled:", __constr_expr_1.__i & 127);
            } else {
              {
              fprintf(_coverage_fout, "2571\n");
              fflush(_coverage_fout);
              }
              log_error_write(srv, "mod_fastcgi.c", 3196U, "sd",
                              "child died somehow:", status);
            }
          }
          {
          fprintf(_coverage_fout, "2572\n");
          fflush(_coverage_fout);
          }
          if (p->conf.debug) {
            {
            fprintf(_coverage_fout, "2573\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 3202U, "ssbsdsd",
                            "--- fastcgi spawning", "\n\tsocket",
                            proc->connection_name, "\n\tcurrent:", 1, "/",
                            (int )host->min_procs);
          } else {
            {
            fprintf(_coverage_fout, "2574\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "2575\n");
          fflush(_coverage_fout);
          }
          tmp___1 = fcgi_spawn_connection(srv, p, host, proc);
          {
          fprintf(_coverage_fout, "2576\n");
          fflush(_coverage_fout);
          }
          if (tmp___1) {
            {
            fprintf(_coverage_fout, "2577\n");
            fflush(_coverage_fout);
            }
            proc->state = (enum __anonenum_state_139 )4;
            {
            fprintf(_coverage_fout, "2578\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 3212U, "s",
                            "respawning failed, will retry later");
          } else {
            {
            fprintf(_coverage_fout, "2579\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "2580\n");
          fflush(_coverage_fout);
          }
          break;
          }
        } else {
          {
          fprintf(_coverage_fout, "2581\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2582\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2583\n");
      fflush(_coverage_fout);
      }
      if (con->file_started == 0) {
        {
        fprintf(_coverage_fout, "2584\n");
        fflush(_coverage_fout);
        }
        if ((hctx->wb)->bytes_out == 0LL) {
          {
          fprintf(_coverage_fout, "2585\n");
          fflush(_coverage_fout);
          }
          if (hctx->reconnects < 5) {
            {
            fprintf(_coverage_fout, "2586\n");
            fflush(_coverage_fout);
            }
            fcgi_reconnect(srv, hctx);
            {
            fprintf(_coverage_fout, "2587\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 3227U, "ssbsbs",
                            "response not received, request not sent",
                            "on socket:", proc->connection_name, "for",
                            con->uri.path, ", reconnecting");
            {
            fprintf(_coverage_fout, "2588\n");
            fflush(_coverage_fout);
            }
            return ((handler_t )6);
          } else {
            {
            fprintf(_coverage_fout, "2589\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "2590\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "2591\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 3235U, "sosbsbs",
                        "response not received, request sent:",
                        (hctx->wb)->bytes_out, "on socket:",
                        proc->connection_name, "for", con->uri.path,
                        ", closing connection");
        {
        fprintf(_coverage_fout, "2592\n");
        fflush(_coverage_fout);
        }
        fcgi_connection_close(srv, hctx);
        {
        fprintf(_coverage_fout, "2593\n");
        fflush(_coverage_fout);
        }
        connection_set_state(srv, con, (connection_state_t )5);
        {
        fprintf(_coverage_fout, "2594\n");
        fflush(_coverage_fout);
        }
        buffer_reset(con->physical.path);
        {
        fprintf(_coverage_fout, "2595\n");
        fflush(_coverage_fout);
        }
        con->http_status = 500;
        {
        fprintf(_coverage_fout, "2596\n");
        fflush(_coverage_fout);
        }
        con->mode = (connection_type )0;
      } else {
        {
        fprintf(_coverage_fout, "2597\n");
        fflush(_coverage_fout);
        }
        fcgi_connection_close(srv, hctx);
        {
        fprintf(_coverage_fout, "2598\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 3250U, "ssbsbs",
                        "response already sent out, but backend returned error",
                        "on socket:", proc->connection_name, "for",
                        con->uri.path, ", terminating connection");
        {
        fprintf(_coverage_fout, "2599\n");
        fflush(_coverage_fout);
        }
        connection_set_state(srv, con, (connection_state_t )9);
      }
      {
      fprintf(_coverage_fout, "2600\n");
      fflush(_coverage_fout);
      }
      joblist_append(srv, con);
      {
      fprintf(_coverage_fout, "2601\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )2);
      }
    } else {
      {
      fprintf(_coverage_fout, "2602\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "2603\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2604\n");
  fflush(_coverage_fout);
  }
  if (revents & (1 << 2)) {
    {
    fprintf(_coverage_fout, "2605\n");
    fflush(_coverage_fout);
    }
    if ((int )hctx->state == 2) {
      {
      fprintf(_coverage_fout, "2606\n");
      fflush(_coverage_fout);
      }
      tmp___2 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
      {
      fprintf(_coverage_fout, "2607\n");
      fflush(_coverage_fout);
      }
      return (tmp___2);
    } else {
      {
      fprintf(_coverage_fout, "2608\n");
      fflush(_coverage_fout);
      }
      if ((int )hctx->state == 4) {
        {
        fprintf(_coverage_fout, "2609\n");
        fflush(_coverage_fout);
        }
        tmp___2 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
        {
        fprintf(_coverage_fout, "2610\n");
        fflush(_coverage_fout);
        }
        return (tmp___2);
      } else {
        {
        fprintf(_coverage_fout, "2611\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 3276U, "sd",
                        "got a FDEVENT_OUT and didn\'t know why:",
                        (unsigned int )hctx->state);
      }
    }
  } else {
    {
    fprintf(_coverage_fout, "2612\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2613\n");
  fflush(_coverage_fout);
  }
  if (revents & (1 << 4)) {
    {
    fprintf(_coverage_fout, "2614\n");
    fflush(_coverage_fout);
    }
    if ((int )hctx->state == 2) {
      {
      fprintf(_coverage_fout, "2615\n");
      fflush(_coverage_fout);
      }
      tmp___3 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
      {
      fprintf(_coverage_fout, "2616\n");
      fflush(_coverage_fout);
      }
      return (tmp___3);
    } else {
      {
      fprintf(_coverage_fout, "2617\n");
      fflush(_coverage_fout);
      }
      if ((int )hctx->state == 5) {
        {
        fprintf(_coverage_fout, "2618\n");
        fflush(_coverage_fout);
        }
        if (! ((hctx->proc)->port == 0U)) {
          {
          fprintf(_coverage_fout, "2619\n");
          fflush(_coverage_fout);
          }
          log_error_write(srv, "mod_fastcgi.c", 3303U, "sbSBSDSd",
                          "error: unexpected close of fastcgi connection for",
                          con->uri.path, "(no fastcgi process on host:",
                          host->host, ", port: ", (int )host->port, " ?)",
                          (unsigned int )hctx->state);
          {
          fprintf(_coverage_fout, "2620\n");
          fflush(_coverage_fout);
          }
          connection_set_state(srv, con, (connection_state_t )9);
          {
          fprintf(_coverage_fout, "2621\n");
          fflush(_coverage_fout);
          }
          fcgi_connection_close(srv, hctx);
          {
          fprintf(_coverage_fout, "2622\n");
          fflush(_coverage_fout);
          }
          joblist_append(srv, con);
        } else {
          {
          fprintf(_coverage_fout, "2623\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2624\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 3303U, "sbSBSDSd",
                        "error: unexpected close of fastcgi connection for",
                        con->uri.path, "(no fastcgi process on host:",
                        host->host, ", port: ", (int )host->port, " ?)",
                        (unsigned int )hctx->state);
        {
        fprintf(_coverage_fout, "2625\n");
        fflush(_coverage_fout);
        }
        connection_set_state(srv, con, (connection_state_t )9);
        {
        fprintf(_coverage_fout, "2626\n");
        fflush(_coverage_fout);
        }
        fcgi_connection_close(srv, hctx);
        {
        fprintf(_coverage_fout, "2627\n");
        fflush(_coverage_fout);
        }
        joblist_append(srv, con);
      }
    }
  } else {
    {
    fprintf(_coverage_fout, "2628\n");
    fflush(_coverage_fout);
    }
    if (revents & (1 << 3)) {
      {
      fprintf(_coverage_fout, "2629\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 3318U, "s",
                      "fcgi: got a FDEVENT_ERR. Don\'t know why.");
      {
      fprintf(_coverage_fout, "2630\n");
      fflush(_coverage_fout);
      }
      connection_set_state(srv, con, (connection_state_t )9);
      {
      fprintf(_coverage_fout, "2631\n");
      fflush(_coverage_fout);
      }
      fcgi_connection_close(srv, hctx);
      {
      fprintf(_coverage_fout, "2632\n");
      fflush(_coverage_fout);
      }
      joblist_append(srv, con);
    } else {
      {
      fprintf(_coverage_fout, "2633\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "2634\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )2);
}
}
static int fcgi_patch_connection(server *srv , connection *con , plugin_data *p ) 
{ 
  size_t i ;
  size_t j ;
  plugin_config *s ;
  data_config *dc ;
  int tmp ;
  data_unset *du ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2635\n");
  fflush(_coverage_fout);
  }
  s = *(p->config_storage + 0);
  {
  fprintf(_coverage_fout, "2636\n");
  fflush(_coverage_fout);
  }
  p->conf.exts = s->exts;
  {
  fprintf(_coverage_fout, "2637\n");
  fflush(_coverage_fout);
  }
  p->conf.debug = s->debug;
  {
  fprintf(_coverage_fout, "2638\n");
  fflush(_coverage_fout);
  }
  p->conf.ext_mapping = s->ext_mapping;
  {
  fprintf(_coverage_fout, "2639\n");
  fflush(_coverage_fout);
  }
  i = 1U;
  {
  fprintf(_coverage_fout, "2640\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2641\n");
    fflush(_coverage_fout);
    }
    if (i < (srv->config_context)->used) {
      {
      fprintf(_coverage_fout, "2642\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "2643\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2644\n");
    fflush(_coverage_fout);
    }
    dc = (data_config *)*((srv->config_context)->data + i);
    {
    fprintf(_coverage_fout, "2645\n");
    fflush(_coverage_fout);
    }
    s = *(p->config_storage + i);
    {
    fprintf(_coverage_fout, "2646\n");
    fflush(_coverage_fout);
    }
    tmp = config_check_cond(srv, con, dc);
    {
    fprintf(_coverage_fout, "2647\n");
    fflush(_coverage_fout);
    }
    if (! tmp) {
      {
      fprintf(_coverage_fout, "2648\n");
      fflush(_coverage_fout);
      }
      goto __Cont;
    } else {
      {
      fprintf(_coverage_fout, "2649\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2650\n");
    fflush(_coverage_fout);
    }
    j = 0U;
    {
    fprintf(_coverage_fout, "2651\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "2652\n");
      fflush(_coverage_fout);
      }
      if (j < (dc->value)->used) {
        {
        fprintf(_coverage_fout, "2653\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "2654\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "2655\n");
      fflush(_coverage_fout);
      }
      du = *((dc->value)->data + j);
      {
      fprintf(_coverage_fout, "2656\n");
      fflush(_coverage_fout);
      }
      tmp___2 = buffer_is_equal_string(du->key, "fastcgi.server",
                                       (size_t )(sizeof("fastcgi.server") - 1UL));
      {
      fprintf(_coverage_fout, "2657\n");
      fflush(_coverage_fout);
      }
      if (tmp___2) {
        {
        fprintf(_coverage_fout, "2658\n");
        fflush(_coverage_fout);
        }
        p->conf.exts = s->exts;
      } else {
        {
        fprintf(_coverage_fout, "2659\n");
        fflush(_coverage_fout);
        }
        tmp___1 = buffer_is_equal_string(du->key, "fastcgi.debug",
                                         (size_t )(sizeof("fastcgi.debug") - 1UL));
        {
        fprintf(_coverage_fout, "2660\n");
        fflush(_coverage_fout);
        }
        if (tmp___1) {
          {
          fprintf(_coverage_fout, "2661\n");
          fflush(_coverage_fout);
          }
          p->conf.debug = s->debug;
        } else {
          {
          fprintf(_coverage_fout, "2662\n");
          fflush(_coverage_fout);
          }
          tmp___0 = buffer_is_equal_string(du->key, "fastcgi.map-extensions",
                                           (size_t )(sizeof("fastcgi.map-extensions") - 1UL));
          {
          fprintf(_coverage_fout, "2663\n");
          fflush(_coverage_fout);
          }
          if (tmp___0) {
            {
            fprintf(_coverage_fout, "2664\n");
            fflush(_coverage_fout);
            }
            p->conf.ext_mapping = s->ext_mapping;
          } else {
            {
            fprintf(_coverage_fout, "2665\n");
            fflush(_coverage_fout);
            }

          }
        }
      }
      {
      fprintf(_coverage_fout, "2666\n");
      fflush(_coverage_fout);
      }
      j ++;
    }
    {
    fprintf(_coverage_fout, "2667\n");
    fflush(_coverage_fout);
    }
    __Cont: 
    i ++;
  }
  {
  fprintf(_coverage_fout, "2668\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
static handler_t fcgi_check_extension(server *srv , connection *con ,
                                      void *p_d , int uri_path_handler ) 
{ 
  plugin_data *p ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2669\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)p_d;
  {
  fprintf(_coverage_fout, "2670\n");
  fflush(_coverage_fout);
  }
  extension = (fcgi_extension *)((void *)0);
  {
  fprintf(_coverage_fout, "2671\n");
  fflush(_coverage_fout);
  }
  host = (fcgi_extension_host *)((void *)0);
  {
  fprintf(_coverage_fout, "2672\n");
  fflush(_coverage_fout);
  }
  if (con->file_started == 1) {
    {
    fprintf(_coverage_fout, "2673\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )1);
  } else {
    {
    fprintf(_coverage_fout, "2674\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2675\n");
  fflush(_coverage_fout);
  }
  if (uri_path_handler) {
    {
    fprintf(_coverage_fout, "2676\n");
    fflush(_coverage_fout);
    }
    fn = con->uri.path;
  } else {
    {
    fprintf(_coverage_fout, "2677\n");
    fflush(_coverage_fout);
    }
    fn = con->physical.path;
  }
  {
  fprintf(_coverage_fout, "2678\n");
  fflush(_coverage_fout);
  }
  tmp = buffer_is_empty(fn);
  {
  fprintf(_coverage_fout, "2679\n");
  fflush(_coverage_fout);
  }
  if (tmp) {
    {
    fprintf(_coverage_fout, "2680\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )1);
  } else {
    {
    fprintf(_coverage_fout, "2681\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2682\n");
  fflush(_coverage_fout);
  }
  s_len = fn->used - 1U;
  {
  fprintf(_coverage_fout, "2683\n");
  fflush(_coverage_fout);
  }
  fcgi_patch_connection(srv, con, p);
  {
  fprintf(_coverage_fout, "2684\n");
  fflush(_coverage_fout);
  }
  k = 0U;
  {
  fprintf(_coverage_fout, "2685\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2686\n");
    fflush(_coverage_fout);
    }
    if (k < (p->conf.ext_mapping)->used) {
      {
      fprintf(_coverage_fout, "2687\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "2688\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2689\n");
    fflush(_coverage_fout);
    }
    ds = (data_string *)*((p->conf.ext_mapping)->data + k);
    {
    fprintf(_coverage_fout, "2690\n");
    fflush(_coverage_fout);
    }
    if ((ds->key)->used == 0U) {
      {
      fprintf(_coverage_fout, "2691\n");
      fflush(_coverage_fout);
      }
      goto __Cont;
    } else {
      {
      fprintf(_coverage_fout, "2692\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2693\n");
    fflush(_coverage_fout);
    }
    ct_len = (ds->key)->used - 1U;
    {
    fprintf(_coverage_fout, "2694\n");
    fflush(_coverage_fout);
    }
    if (s_len < ct_len) {
      {
      fprintf(_coverage_fout, "2695\n");
      fflush(_coverage_fout);
      }
      goto __Cont;
    } else {
      {
      fprintf(_coverage_fout, "2696\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2697\n");
    fflush(_coverage_fout);
    }
    if (0) {
      {
      fprintf(_coverage_fout, "2698\n");
      fflush(_coverage_fout);
      }
      if (0) {
        {
        fprintf(_coverage_fout, "2699\n");
        fflush(_coverage_fout);
        }
        __s1_len___0 = strlen((char const   *)((fn->ptr + s_len) - ct_len));
        {
        fprintf(_coverage_fout, "2700\n");
        fflush(_coverage_fout);
        }
        __s2_len___0 = strlen((char const   *)(ds->key)->ptr);
        {
        fprintf(_coverage_fout, "2701\n");
        fflush(_coverage_fout);
        }
        if (! ((unsigned int )((void const   *)(((fn->ptr + s_len) - ct_len) + 1)) - (unsigned int )((void const   *)((fn->ptr + s_len) - ct_len)) == 1U)) {
          {
          fprintf(_coverage_fout, "2702\n");
          fflush(_coverage_fout);
          }
          goto _L___2;
        } else {
          {
          fprintf(_coverage_fout, "2703\n");
          fflush(_coverage_fout);
          }
          if (__s1_len___0 >= 4U) {
            {
            fprintf(_coverage_fout, "2704\n");
            fflush(_coverage_fout);
            }
            _L___2: 
            if (! ((unsigned int )((void const   *)((ds->key)->ptr + 1)) - (unsigned int )((void const   *)(ds->key)->ptr) == 1U)) {
              {
              fprintf(_coverage_fout, "2705\n");
              fflush(_coverage_fout);
              }
              tmp___24 = 1;
            } else {
              {
              fprintf(_coverage_fout, "2706\n");
              fflush(_coverage_fout);
              }
              if (__s2_len___0 >= 4U) {
                {
                fprintf(_coverage_fout, "2707\n");
                fflush(_coverage_fout);
                }
                tmp___24 = 1;
              } else {
                {
                fprintf(_coverage_fout, "2708\n");
                fflush(_coverage_fout);
                }
                tmp___24 = 0;
              }
            }
          } else {
            {
            fprintf(_coverage_fout, "2709\n");
            fflush(_coverage_fout);
            }
            tmp___24 = 0;
          }
        }
        {
        fprintf(_coverage_fout, "2710\n");
        fflush(_coverage_fout);
        }
        if (tmp___24) {
          {
          fprintf(_coverage_fout, "2711\n");
          fflush(_coverage_fout);
          }
          tmp___20 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                      (char const   *)(ds->key)->ptr);
        } else {
          {
          fprintf(_coverage_fout, "2712\n");
          fflush(_coverage_fout);
          }
          tmp___23 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                      (char const   *)(ds->key)->ptr);
          {
          fprintf(_coverage_fout, "2713\n");
          fflush(_coverage_fout);
          }
          tmp___20 = tmp___23;
        }
      } else {
        {
        fprintf(_coverage_fout, "2714\n");
        fflush(_coverage_fout);
        }
        tmp___23 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                    (char const   *)(ds->key)->ptr);
        {
        fprintf(_coverage_fout, "2715\n");
        fflush(_coverage_fout);
        }
        tmp___20 = tmp___23;
      }
      {
      fprintf(_coverage_fout, "2716\n");
      fflush(_coverage_fout);
      }
      tmp___14 = tmp___20;
    } else {
      {
      fprintf(_coverage_fout, "2717\n");
      fflush(_coverage_fout);
      }
      tmp___14 = strncmp((char const   *)((fn->ptr + s_len) - ct_len),
                         (char const   *)(ds->key)->ptr, ct_len);
    }
    {
    fprintf(_coverage_fout, "2718\n");
    fflush(_coverage_fout);
    }
    if (0 == tmp___14) {
      {
      fprintf(_coverage_fout, "2719\n");
      fflush(_coverage_fout);
      }
      k = 0U;
      {
      fprintf(_coverage_fout, "2720\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "2721\n");
        fflush(_coverage_fout);
        }
        if (k < (p->conf.exts)->used) {
          {
          fprintf(_coverage_fout, "2722\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "2723\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "2724\n");
        fflush(_coverage_fout);
        }
        extension = *((p->conf.exts)->exts + k);
        {
        fprintf(_coverage_fout, "2725\n");
        fflush(_coverage_fout);
        }
        tmp___0 = buffer_is_equal(ds->value, extension->key);
        {
        fprintf(_coverage_fout, "2726\n");
        fflush(_coverage_fout);
        }
        if (tmp___0) {
          {
          fprintf(_coverage_fout, "2727\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "2728\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "2729\n");
        fflush(_coverage_fout);
        }
        k ++;
      }
      {
      fprintf(_coverage_fout, "2730\n");
      fflush(_coverage_fout);
      }
      if (k == (p->conf.exts)->used) {
        {
        fprintf(_coverage_fout, "2731\n");
        fflush(_coverage_fout);
        }
        extension = (fcgi_extension *)((void *)0);
      } else {
        {
        fprintf(_coverage_fout, "2732\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2733\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "2734\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2735\n");
    fflush(_coverage_fout);
    }
    __Cont: 
    k ++;
  }
  {
  fprintf(_coverage_fout, "2736\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )extension == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "2737\n");
    fflush(_coverage_fout);
    }
    k = 0U;
    {
    fprintf(_coverage_fout, "2738\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "2739\n");
      fflush(_coverage_fout);
      }
      if (k < (p->conf.exts)->used) {
        {
        fprintf(_coverage_fout, "2740\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "2741\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "2742\n");
      fflush(_coverage_fout);
      }
      extension = *((p->conf.exts)->exts + k);
      {
      fprintf(_coverage_fout, "2743\n");
      fflush(_coverage_fout);
      }
      if ((extension->key)->used == 0U) {
        {
        fprintf(_coverage_fout, "2744\n");
        fflush(_coverage_fout);
        }
        goto __Cont___0;
      } else {
        {
        fprintf(_coverage_fout, "2745\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2746\n");
      fflush(_coverage_fout);
      }
      ct_len___0 = (extension->key)->used - 1U;
      {
      fprintf(_coverage_fout, "2747\n");
      fflush(_coverage_fout);
      }
      if (s_len < ct_len___0) {
        {
        fprintf(_coverage_fout, "2748\n");
        fflush(_coverage_fout);
        }
        goto __Cont___0;
      } else {
        {
        fprintf(_coverage_fout, "2749\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2750\n");
      fflush(_coverage_fout);
      }
      if ((int )*((extension->key)->ptr) == 47) {
        {
        fprintf(_coverage_fout, "2751\n");
        fflush(_coverage_fout);
        }
        if (0) {
          {
          fprintf(_coverage_fout, "2752\n");
          fflush(_coverage_fout);
          }
          if (0) {
            {
            fprintf(_coverage_fout, "2753\n");
            fflush(_coverage_fout);
            }
            __s1_len___4 = strlen((char const   *)fn->ptr);
            {
            fprintf(_coverage_fout, "2754\n");
            fflush(_coverage_fout);
            }
            __s2_len___4 = strlen((char const   *)(extension->key)->ptr);
            {
            fprintf(_coverage_fout, "2755\n");
            fflush(_coverage_fout);
            }
            if (! ((unsigned int )((void const   *)(fn->ptr + 1)) - (unsigned int )((void const   *)fn->ptr) == 1U)) {
              {
              fprintf(_coverage_fout, "2756\n");
              fflush(_coverage_fout);
              }
              goto _L___10;
            } else {
              {
              fprintf(_coverage_fout, "2757\n");
              fflush(_coverage_fout);
              }
              if (__s1_len___4 >= 4U) {
                {
                fprintf(_coverage_fout, "2758\n");
                fflush(_coverage_fout);
                }
                _L___10: 
                if (! ((unsigned int )((void const   *)((extension->key)->ptr + 1)) - (unsigned int )((void const   *)(extension->key)->ptr) == 1U)) {
                  {
                  fprintf(_coverage_fout, "2759\n");
                  fflush(_coverage_fout);
                  }
                  tmp___76 = 1;
                } else {
                  {
                  fprintf(_coverage_fout, "2760\n");
                  fflush(_coverage_fout);
                  }
                  if (__s2_len___4 >= 4U) {
                    {
                    fprintf(_coverage_fout, "2761\n");
                    fflush(_coverage_fout);
                    }
                    tmp___76 = 1;
                  } else {
                    {
                    fprintf(_coverage_fout, "2762\n");
                    fflush(_coverage_fout);
                    }
                    tmp___76 = 0;
                  }
                }
              } else {
                {
                fprintf(_coverage_fout, "2763\n");
                fflush(_coverage_fout);
                }
                tmp___76 = 0;
              }
            }
            {
            fprintf(_coverage_fout, "2764\n");
            fflush(_coverage_fout);
            }
            if (tmp___76) {
              {
              fprintf(_coverage_fout, "2765\n");
              fflush(_coverage_fout);
              }
              tmp___72 = __builtin_strcmp((char const   *)fn->ptr,
                                          (char const   *)(extension->key)->ptr);
            } else {
              {
              fprintf(_coverage_fout, "2766\n");
              fflush(_coverage_fout);
              }
              tmp___75 = __builtin_strcmp((char const   *)fn->ptr,
                                          (char const   *)(extension->key)->ptr);
              {
              fprintf(_coverage_fout, "2767\n");
              fflush(_coverage_fout);
              }
              tmp___72 = tmp___75;
            }
          } else {
            {
            fprintf(_coverage_fout, "2768\n");
            fflush(_coverage_fout);
            }
            tmp___75 = __builtin_strcmp((char const   *)fn->ptr,
                                        (char const   *)(extension->key)->ptr);
            {
            fprintf(_coverage_fout, "2769\n");
            fflush(_coverage_fout);
            }
            tmp___72 = tmp___75;
          }
          {
          fprintf(_coverage_fout, "2770\n");
          fflush(_coverage_fout);
          }
          tmp___66 = tmp___72;
        } else {
          {
          fprintf(_coverage_fout, "2771\n");
          fflush(_coverage_fout);
          }
          tmp___66 = strncmp((char const   *)fn->ptr,
                             (char const   *)(extension->key)->ptr, ct_len___0);
        }
        {
        fprintf(_coverage_fout, "2772\n");
        fflush(_coverage_fout);
        }
        if (tmp___66 == 0) {
          {
          fprintf(_coverage_fout, "2773\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "2774\n");
          fflush(_coverage_fout);
          }
          goto _L___11;
        }
      } else {
        {
        fprintf(_coverage_fout, "2775\n");
        fflush(_coverage_fout);
        }
        _L___11: 
        if (0) {
          {
          fprintf(_coverage_fout, "2776\n");
          fflush(_coverage_fout);
          }
          if (0) {
            {
            fprintf(_coverage_fout, "2777\n");
            fflush(_coverage_fout);
            }
            __s1_len___2 = strlen((char const   *)((fn->ptr + s_len) - ct_len___0));
            {
            fprintf(_coverage_fout, "2778\n");
            fflush(_coverage_fout);
            }
            __s2_len___2 = strlen((char const   *)(extension->key)->ptr);
            {
            fprintf(_coverage_fout, "2779\n");
            fflush(_coverage_fout);
            }
            if (! ((unsigned int )((void const   *)(((fn->ptr + s_len) - ct_len___0) + 1)) - (unsigned int )((void const   *)((fn->ptr + s_len) - ct_len___0)) == 1U)) {
              {
              fprintf(_coverage_fout, "2780\n");
              fflush(_coverage_fout);
              }
              goto _L___6;
            } else {
              {
              fprintf(_coverage_fout, "2781\n");
              fflush(_coverage_fout);
              }
              if (__s1_len___2 >= 4U) {
                {
                fprintf(_coverage_fout, "2782\n");
                fflush(_coverage_fout);
                }
                _L___6: 
                if (! ((unsigned int )((void const   *)((extension->key)->ptr + 1)) - (unsigned int )((void const   *)(extension->key)->ptr) == 1U)) {
                  {
                  fprintf(_coverage_fout, "2783\n");
                  fflush(_coverage_fout);
                  }
                  tmp___50 = 1;
                } else {
                  {
                  fprintf(_coverage_fout, "2784\n");
                  fflush(_coverage_fout);
                  }
                  if (__s2_len___2 >= 4U) {
                    {
                    fprintf(_coverage_fout, "2785\n");
                    fflush(_coverage_fout);
                    }
                    tmp___50 = 1;
                  } else {
                    {
                    fprintf(_coverage_fout, "2786\n");
                    fflush(_coverage_fout);
                    }
                    tmp___50 = 0;
                  }
                }
              } else {
                {
                fprintf(_coverage_fout, "2787\n");
                fflush(_coverage_fout);
                }
                tmp___50 = 0;
              }
            }
            {
            fprintf(_coverage_fout, "2788\n");
            fflush(_coverage_fout);
            }
            if (tmp___50) {
              {
              fprintf(_coverage_fout, "2789\n");
              fflush(_coverage_fout);
              }
              tmp___46 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                          (char const   *)(extension->key)->ptr);
            } else {
              {
              fprintf(_coverage_fout, "2790\n");
              fflush(_coverage_fout);
              }
              tmp___49 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                          (char const   *)(extension->key)->ptr);
              {
              fprintf(_coverage_fout, "2791\n");
              fflush(_coverage_fout);
              }
              tmp___46 = tmp___49;
            }
          } else {
            {
            fprintf(_coverage_fout, "2792\n");
            fflush(_coverage_fout);
            }
            tmp___49 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                        (char const   *)(extension->key)->ptr);
            {
            fprintf(_coverage_fout, "2793\n");
            fflush(_coverage_fout);
            }
            tmp___46 = tmp___49;
          }
          {
          fprintf(_coverage_fout, "2794\n");
          fflush(_coverage_fout);
          }
          tmp___40 = tmp___46;
        } else {
          {
          fprintf(_coverage_fout, "2795\n");
          fflush(_coverage_fout);
          }
          tmp___40 = strncmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                             (char const   *)(extension->key)->ptr, ct_len___0);
        }
        {
        fprintf(_coverage_fout, "2796\n");
        fflush(_coverage_fout);
        }
        if (0 == tmp___40) {
          {
          fprintf(_coverage_fout, "2797\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "2798\n");
          fflush(_coverage_fout);
          }

        }
      }
      {
      fprintf(_coverage_fout, "2799\n");
      fflush(_coverage_fout);
      }
      __Cont___0: 
      k ++;
    }
    {
    fprintf(_coverage_fout, "2800\n");
    fflush(_coverage_fout);
    }
    if (k == (p->conf.exts)->used) {
      {
      fprintf(_coverage_fout, "2801\n");
      fflush(_coverage_fout);
      }
      return ((handler_t )1);
    } else {
      {
      fprintf(_coverage_fout, "2802\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "2803\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2804\n");
  fflush(_coverage_fout);
  }
  k = 0U;
  {
  fprintf(_coverage_fout, "2805\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2806\n");
    fflush(_coverage_fout);
    }
    if (k < extension->used) {
      {
      fprintf(_coverage_fout, "2807\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "2808\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2809\n");
    fflush(_coverage_fout);
    }
    host = *(extension->hosts + k);
    {
    fprintf(_coverage_fout, "2810\n");
    fflush(_coverage_fout);
    }
    if (host->active_procs == 0U) {
      {
      fprintf(_coverage_fout, "2811\n");
      fflush(_coverage_fout);
      }
      host = (fcgi_extension_host *)((void *)0);
      {
      fprintf(_coverage_fout, "2812\n");
      fflush(_coverage_fout);
      }
      goto __Cont___1;
    } else {
      {
      fprintf(_coverage_fout, "2813\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2814\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "2815\n");
    fflush(_coverage_fout);
    }
    __Cont___1: 
    k ++;
  }
  {
  fprintf(_coverage_fout, "2816\n");
  fflush(_coverage_fout);
  }
  if (! host) {
    {
    fprintf(_coverage_fout, "2817\n");
    fflush(_coverage_fout);
    }
    buffer_reset(con->physical.path);
    {
    fprintf(_coverage_fout, "2818\n");
    fflush(_coverage_fout);
    }
    con->http_status = 500;
    {
    fprintf(_coverage_fout, "2819\n");
    fflush(_coverage_fout);
    }
    if (! extension->note_is_sent) {
      {
      fprintf(_coverage_fout, "2820\n");
      fflush(_coverage_fout);
      }
      extension->note_is_sent = 1;
      {
      fprintf(_coverage_fout, "2821\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 3477U, "sbsbs", "all handlers for ",
                      con->uri.path, "on", extension->key, "are down.");
    } else {
      {
      fprintf(_coverage_fout, "2822\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "2823\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )2);
  } else {
    {
    fprintf(_coverage_fout, "2824\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2825\n");
  fflush(_coverage_fout);
  }
  extension->note_is_sent = 0;
  {
  fprintf(_coverage_fout, "2826\n");
  fflush(_coverage_fout);
  }
  if (uri_path_handler) {
    {
    fprintf(_coverage_fout, "2827\n");
    fflush(_coverage_fout);
    }
    if ((int )host->check_local == 0) {
      {
      fprintf(_coverage_fout, "2828\n");
      fflush(_coverage_fout);
      }
      hctx = handler_ctx_init();
      {
      fprintf(_coverage_fout, "2829\n");
      fflush(_coverage_fout);
      }
      hctx->remote_conn = con;
      {
      fprintf(_coverage_fout, "2830\n");
      fflush(_coverage_fout);
      }
      hctx->plugin_data = p;
      {
      fprintf(_coverage_fout, "2831\n");
      fflush(_coverage_fout);
      }
      hctx->proc = (fcgi_proc *)((void *)0);
      {
      fprintf(_coverage_fout, "2832\n");
      fflush(_coverage_fout);
      }
      hctx->ext = extension;
      {
      fprintf(_coverage_fout, "2833\n");
      fflush(_coverage_fout);
      }
      hctx->conf.exts = p->conf.exts;
      {
      fprintf(_coverage_fout, "2834\n");
      fflush(_coverage_fout);
      }
      hctx->conf.debug = p->conf.debug;
      {
      fprintf(_coverage_fout, "2835\n");
      fflush(_coverage_fout);
      }
      *(con->plugin_ctx + p->id) = (void *)hctx;
      {
      fprintf(_coverage_fout, "2836\n");
      fflush(_coverage_fout);
      }
      con->mode = (enum __anonenum_connection_type_90 )p->id;
      {
      fprintf(_coverage_fout, "2837\n");
      fflush(_coverage_fout);
      }
      if (con->conf.log_request_handling) {
        {
        fprintf(_coverage_fout, "2838\n");
        fflush(_coverage_fout);
        }
        log_error_write(srv, "mod_fastcgi.c", 3516U, "s",
                        "handling it in mod_fastcgi");
      } else {
        {
        fprintf(_coverage_fout, "2839\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "2840\n");
      fflush(_coverage_fout);
      }
      if ((int )*((extension->key)->ptr + 0) == 47) {
        {
        fprintf(_coverage_fout, "2841\n");
        fflush(_coverage_fout);
        }
        if ((con->uri.path)->used > (extension->key)->used) {
          {
          fprintf(_coverage_fout, "2842\n");
          fflush(_coverage_fout);
          }
          tmp___80 = __builtin_strchr(((con->uri.path)->ptr + (extension->key)->used) - 1,
                                      '/');
          {
          fprintf(_coverage_fout, "2843\n");
          fflush(_coverage_fout);
          }
          pathinfo = tmp___80;
          {
          fprintf(_coverage_fout, "2844\n");
          fflush(_coverage_fout);
          }
          if ((unsigned int )((void *)0) != (unsigned int )pathinfo) {
            {
            fprintf(_coverage_fout, "2845\n");
            fflush(_coverage_fout);
            }
            buffer_copy_string(con->request.pathinfo, (char const   *)pathinfo);
            {
            fprintf(_coverage_fout, "2846\n");
            fflush(_coverage_fout);
            }
            (con->uri.path)->used -= (con->request.pathinfo)->used - 1U;
            {
            fprintf(_coverage_fout, "2847\n");
            fflush(_coverage_fout);
            }
            *((con->uri.path)->ptr + ((con->uri.path)->used - 1U)) = (char )'\000';
          } else {
            {
            fprintf(_coverage_fout, "2848\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "2849\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "2850\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "2851\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "2852\n");
    fflush(_coverage_fout);
    }
    hctx___0 = handler_ctx_init();
    {
    fprintf(_coverage_fout, "2853\n");
    fflush(_coverage_fout);
    }
    hctx___0->remote_conn = con;
    {
    fprintf(_coverage_fout, "2854\n");
    fflush(_coverage_fout);
    }
    hctx___0->plugin_data = p;
    {
    fprintf(_coverage_fout, "2855\n");
    fflush(_coverage_fout);
    }
    hctx___0->proc = (fcgi_proc *)((void *)0);
    {
    fprintf(_coverage_fout, "2856\n");
    fflush(_coverage_fout);
    }
    hctx___0->ext = extension;
    {
    fprintf(_coverage_fout, "2857\n");
    fflush(_coverage_fout);
    }
    hctx___0->conf.exts = p->conf.exts;
    {
    fprintf(_coverage_fout, "2858\n");
    fflush(_coverage_fout);
    }
    hctx___0->conf.debug = p->conf.debug;
    {
    fprintf(_coverage_fout, "2859\n");
    fflush(_coverage_fout);
    }
    *(con->plugin_ctx + p->id) = (void *)hctx___0;
    {
    fprintf(_coverage_fout, "2860\n");
    fflush(_coverage_fout);
    }
    con->mode = (enum __anonenum_connection_type_90 )p->id;
    {
    fprintf(_coverage_fout, "2861\n");
    fflush(_coverage_fout);
    }
    if (con->conf.log_request_handling) {
      {
      fprintf(_coverage_fout, "2862\n");
      fflush(_coverage_fout);
      }
      log_error_write(srv, "mod_fastcgi.c", 3569U, "s",
                      "handling it in mod_fastcgi");
    } else {
      {
      fprintf(_coverage_fout, "2863\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "2864\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )1);
}
}
static handler_t fcgi_check_extension_1(server *srv , connection *con ,
                                        void *p_d ) 
{ 
  handler_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2865\n");
  fflush(_coverage_fout);
  }
  tmp = fcgi_check_extension(srv, con, p_d, 1);
  {
  fprintf(_coverage_fout, "2866\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
static handler_t fcgi_check_extension_2(server *srv , connection *con ,
                                        void *p_d ) 
{ 
  handler_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2867\n");
  fflush(_coverage_fout);
  }
  tmp = fcgi_check_extension(srv, con, p_d, 0);
  {
  fprintf(_coverage_fout, "2868\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
static handler_t mod_fastcgi_handle_joblist(server *srv , connection *con ,
                                            void *p_d ) 
{ 
  plugin_data *p ;
  handler_ctx *hctx ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2869\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)p_d;
  {
  fprintf(_coverage_fout, "2870\n");
  fflush(_coverage_fout);
  }
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
  {
  fprintf(_coverage_fout, "2871\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )hctx == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "2872\n");
    fflush(_coverage_fout);
    }
    return ((handler_t )1);
  } else {
    {
    fprintf(_coverage_fout, "2873\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2874\n");
  fflush(_coverage_fout);
  }
  if (hctx->fd != -1) {
    {
    fprintf(_coverage_fout, "2875\n");
    fflush(_coverage_fout);
    }
    switch ((int )hctx->state) {
    {
    fprintf(_coverage_fout, "2876\n");
    fflush(_coverage_fout);
    }
    case 5: 
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1);
    {
    fprintf(_coverage_fout, "2877\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "2878\n");
    fflush(_coverage_fout);
    }
    case 4: 
    case 2: 
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    {
    fprintf(_coverage_fout, "2879\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "2880\n");
    fflush(_coverage_fout);
    }
    case 1: 
    break;
    {
    fprintf(_coverage_fout, "2881\n");
    fflush(_coverage_fout);
    }
    default: 
    log_error_write(srv, "mod_fastcgi.c", 3607U, "sd", "unhandled fcgi.state",
                    (unsigned int )hctx->state);
    {
    fprintf(_coverage_fout, "2882\n");
    fflush(_coverage_fout);
    }
    break;
    }
  } else {
    {
    fprintf(_coverage_fout, "2883\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "2884\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )1);
}
}
static handler_t fcgi_connection_close_callback(server *srv , connection *con ,
                                                void *p_d ) 
{ 
  plugin_data *p ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2885\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)p_d;
  {
  fprintf(_coverage_fout, "2886\n");
  fflush(_coverage_fout);
  }
  fcgi_connection_close(srv, (handler_ctx *)*(con->plugin_ctx + p->id));
  {
  fprintf(_coverage_fout, "2887\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )1);
}
}
static handler_t mod_fastcgi_handle_trigger(server *srv , void *p_d ) 
{ 
  plugin_data *p ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2888\n");
  fflush(_coverage_fout);
  }
  p = (plugin_data *)p_d;
  {
  fprintf(_coverage_fout, "2889\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "2890\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2891\n");
    fflush(_coverage_fout);
    }
    if (i < (srv->config_context)->used) {
      {
      fprintf(_coverage_fout, "2892\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "2893\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "2894\n");
    fflush(_coverage_fout);
    }
    conf = *(p->config_storage + i);
    {
    fprintf(_coverage_fout, "2895\n");
    fflush(_coverage_fout);
    }
    exts = conf->exts;
    {
    fprintf(_coverage_fout, "2896\n");
    fflush(_coverage_fout);
    }
    j = 0U;
    {
    fprintf(_coverage_fout, "2897\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "2898\n");
      fflush(_coverage_fout);
      }
      if (j < exts->used) {
        {
        fprintf(_coverage_fout, "2899\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "2900\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "2901\n");
      fflush(_coverage_fout);
      }
      ex = *(exts->exts + j);
      {
      fprintf(_coverage_fout, "2902\n");
      fflush(_coverage_fout);
      }
      n = 0U;
      {
      fprintf(_coverage_fout, "2903\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "2904\n");
        fflush(_coverage_fout);
        }
        if (n < ex->used) {
          {
          fprintf(_coverage_fout, "2905\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "2906\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "2907\n");
        fflush(_coverage_fout);
        }
        sum_load = 0UL;
        {
        fprintf(_coverage_fout, "2908\n");
        fflush(_coverage_fout);
        }
        host = *(ex->hosts + n);
        {
        fprintf(_coverage_fout, "2909\n");
        fflush(_coverage_fout);
        }
        fcgi_restart_dead_procs(srv, p, host);
        {
        fprintf(_coverage_fout, "2910\n");
        fflush(_coverage_fout);
        }
        proc = host->first;
        {
        fprintf(_coverage_fout, "2911\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "2912\n");
          fflush(_coverage_fout);
          }
          if (proc) {
            {
            fprintf(_coverage_fout, "2913\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "2914\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "2915\n");
          fflush(_coverage_fout);
          }
          sum_load += (unsigned long )proc->load;
          {
          fprintf(_coverage_fout, "2916\n");
          fflush(_coverage_fout);
          }
          proc = proc->next;
        }
        {
        fprintf(_coverage_fout, "2917\n");
        fflush(_coverage_fout);
        }
        if (host->num_procs) {
          {
          fprintf(_coverage_fout, "2918\n");
          fflush(_coverage_fout);
          }
          if (host->num_procs < (size_t )host->max_procs) {
            {
            fprintf(_coverage_fout, "2919\n");
            fflush(_coverage_fout);
            }
            if (sum_load / (unsigned long )host->num_procs > (unsigned long )host->max_load_per_proc) {
              {
              fprintf(_coverage_fout, "2920\n");
              fflush(_coverage_fout);
              }
              if (p->conf.debug) {
                {
                fprintf(_coverage_fout, "2921\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 3671U, "s",
                                "overload detected, spawning a new child");
              } else {
                {
                fprintf(_coverage_fout, "2922\n");
                fflush(_coverage_fout);
                }

              }
              {
              fprintf(_coverage_fout, "2923\n");
              fflush(_coverage_fout);
              }
              proc = host->unused_procs;
              {
              fprintf(_coverage_fout, "2924\n");
              fflush(_coverage_fout);
              }
              while (1) {
                {
                fprintf(_coverage_fout, "2925\n");
                fflush(_coverage_fout);
                }
                if (proc) {
                  {
                  fprintf(_coverage_fout, "2926\n");
                  fflush(_coverage_fout);
                  }
                  if (! (proc->pid != 0)) {
                    {
                    fprintf(_coverage_fout, "2927\n");
                    fflush(_coverage_fout);
                    }
                    break;
                  } else {
                    {
                    fprintf(_coverage_fout, "2928\n");
                    fflush(_coverage_fout);
                    }

                  }
                } else {
                  {
                  fprintf(_coverage_fout, "2929\n");
                  fflush(_coverage_fout);
                  }
                  break;
                }
                {
                fprintf(_coverage_fout, "2930\n");
                fflush(_coverage_fout);
                }
                proc = proc->next;
              }
              {
              fprintf(_coverage_fout, "2931\n");
              fflush(_coverage_fout);
              }
              if (proc) {
                {
                fprintf(_coverage_fout, "2932\n");
                fflush(_coverage_fout);
                }
                if ((unsigned int )proc == (unsigned int )host->unused_procs) {
                  {
                  fprintf(_coverage_fout, "2933\n");
                  fflush(_coverage_fout);
                  }
                  host->unused_procs = proc->next;
                } else {
                  {
                  fprintf(_coverage_fout, "2934\n");
                  fflush(_coverage_fout);
                  }

                }
                {
                fprintf(_coverage_fout, "2935\n");
                fflush(_coverage_fout);
                }
                if (proc->next) {
                  {
                  fprintf(_coverage_fout, "2936\n");
                  fflush(_coverage_fout);
                  }
                  (proc->next)->prev = (struct fcgi_proc *)((void *)0);
                } else {
                  {
                  fprintf(_coverage_fout, "2937\n");
                  fflush(_coverage_fout);
                  }

                }
                {
                fprintf(_coverage_fout, "2938\n");
                fflush(_coverage_fout);
                }
                (host->max_id) ++;
              } else {
                {
                fprintf(_coverage_fout, "2939\n");
                fflush(_coverage_fout);
                }
                proc = fastcgi_process_init();
                {
                fprintf(_coverage_fout, "2940\n");
                fflush(_coverage_fout);
                }
                tmp = host->max_id;
                {
                fprintf(_coverage_fout, "2941\n");
                fflush(_coverage_fout);
                }
                (host->max_id) ++;
                {
                fprintf(_coverage_fout, "2942\n");
                fflush(_coverage_fout);
                }
                proc->id = tmp;
              }
              {
              fprintf(_coverage_fout, "2943\n");
              fflush(_coverage_fout);
              }
              (host->num_procs) ++;
              {
              fprintf(_coverage_fout, "2944\n");
              fflush(_coverage_fout);
              }
              tmp___0 = buffer_is_empty(host->unixsocket);
              {
              fprintf(_coverage_fout, "2945\n");
              fflush(_coverage_fout);
              }
              if (tmp___0) {
                {
                fprintf(_coverage_fout, "2946\n");
                fflush(_coverage_fout);
                }
                proc->port = (size_t )host->port + proc->id;
              } else {
                {
                fprintf(_coverage_fout, "2947\n");
                fflush(_coverage_fout);
                }
                buffer_copy_string_buffer(proc->unixsocket,
                                          (buffer const   *)host->unixsocket);
                {
                fprintf(_coverage_fout, "2948\n");
                fflush(_coverage_fout);
                }
                buffer_append_string(proc->unixsocket, "-");
                {
                fprintf(_coverage_fout, "2949\n");
                fflush(_coverage_fout);
                }
                buffer_append_long(proc->unixsocket, (long )proc->id);
              }
              {
              fprintf(_coverage_fout, "2950\n");
              fflush(_coverage_fout);
              }
              tmp___1 = fcgi_spawn_connection(srv, p, host, proc);
              {
              fprintf(_coverage_fout, "2951\n");
              fflush(_coverage_fout);
              }
              if (tmp___1) {
                {
                fprintf(_coverage_fout, "2952\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 3699U, "s",
                                "ERROR: spawning fcgi failed.");
                {
                fprintf(_coverage_fout, "2953\n");
                fflush(_coverage_fout);
                }
                return ((handler_t )5);
              } else {
                {
                fprintf(_coverage_fout, "2954\n");
                fflush(_coverage_fout);
                }

              }
              {
              fprintf(_coverage_fout, "2955\n");
              fflush(_coverage_fout);
              }
              proc->prev = (struct fcgi_proc *)((void *)0);
              {
              fprintf(_coverage_fout, "2956\n");
              fflush(_coverage_fout);
              }
              proc->next = host->first;
              {
              fprintf(_coverage_fout, "2957\n");
              fflush(_coverage_fout);
              }
              if (host->first) {
                {
                fprintf(_coverage_fout, "2958\n");
                fflush(_coverage_fout);
                }
                (host->first)->prev = proc;
              } else {
                {
                fprintf(_coverage_fout, "2959\n");
                fflush(_coverage_fout);
                }

              }
              {
              fprintf(_coverage_fout, "2960\n");
              fflush(_coverage_fout);
              }
              host->first = proc;
            } else {
              {
              fprintf(_coverage_fout, "2961\n");
              fflush(_coverage_fout);
              }

            }
          } else {
            {
            fprintf(_coverage_fout, "2962\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "2963\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "2964\n");
        fflush(_coverage_fout);
        }
        proc = host->first;
        {
        fprintf(_coverage_fout, "2965\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "2966\n");
          fflush(_coverage_fout);
          }
          if (proc) {
            {
            fprintf(_coverage_fout, "2967\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "2968\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "2969\n");
          fflush(_coverage_fout);
          }
          if (proc->load != 0U) {
            {
            fprintf(_coverage_fout, "2970\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "2971\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "2972\n");
          fflush(_coverage_fout);
          }
          if (host->num_procs <= (size_t )host->min_procs) {
            {
            fprintf(_coverage_fout, "2973\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "2974\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "2975\n");
          fflush(_coverage_fout);
          }
          if (proc->pid == 0) {
            {
            fprintf(_coverage_fout, "2976\n");
            fflush(_coverage_fout);
            }
            goto __Cont;
          } else {
            {
            fprintf(_coverage_fout, "2977\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "2978\n");
          fflush(_coverage_fout);
          }
          if (srv->cur_ts - proc->last_used > (time_t )host->idle_timeout) {
            {
            fprintf(_coverage_fout, "2979\n");
            fflush(_coverage_fout);
            }
            if (p->conf.debug) {
              {
              fprintf(_coverage_fout, "2980\n");
              fflush(_coverage_fout);
              }
              log_error_write(srv, "mod_fastcgi.c", 3722U, "ssbsd",
                              "idle-timeout reached; terminating child:",
                              "socket:", proc->connection_name, "pid", proc->pid);
            } else {
              {
              fprintf(_coverage_fout, "2981\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "2982\n");
            fflush(_coverage_fout);
            }
            if (proc->next) {
              {
              fprintf(_coverage_fout, "2983\n");
              fflush(_coverage_fout);
              }
              (proc->next)->prev = proc->prev;
            } else {
              {
              fprintf(_coverage_fout, "2984\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "2985\n");
            fflush(_coverage_fout);
            }
            if (proc->prev) {
              {
              fprintf(_coverage_fout, "2986\n");
              fflush(_coverage_fout);
              }
              (proc->prev)->next = proc->next;
            } else {
              {
              fprintf(_coverage_fout, "2987\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "2988\n");
            fflush(_coverage_fout);
            }
            if ((unsigned int )proc->prev == (unsigned int )((void *)0)) {
              {
              fprintf(_coverage_fout, "2989\n");
              fflush(_coverage_fout);
              }
              host->first = proc->next;
            } else {
              {
              fprintf(_coverage_fout, "2990\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "2991\n");
            fflush(_coverage_fout);
            }
            proc->prev = (struct fcgi_proc *)((void *)0);
            {
            fprintf(_coverage_fout, "2992\n");
            fflush(_coverage_fout);
            }
            proc->next = host->unused_procs;
            {
            fprintf(_coverage_fout, "2993\n");
            fflush(_coverage_fout);
            }
            if (host->unused_procs) {
              {
              fprintf(_coverage_fout, "2994\n");
              fflush(_coverage_fout);
              }
              (host->unused_procs)->prev = proc;
            } else {
              {
              fprintf(_coverage_fout, "2995\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "2996\n");
            fflush(_coverage_fout);
            }
            host->unused_procs = proc;
            {
            fprintf(_coverage_fout, "2997\n");
            fflush(_coverage_fout);
            }
            kill(proc->pid, 15);
            {
            fprintf(_coverage_fout, "2998\n");
            fflush(_coverage_fout);
            }
            proc->state = (enum __anonenum_state_139 )5;
            {
            fprintf(_coverage_fout, "2999\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 3744U, "ssbsd", "killed:",
                            "socket:", proc->connection_name, "pid", proc->pid);
            {
            fprintf(_coverage_fout, "3000\n");
            fflush(_coverage_fout);
            }
            (host->num_procs) --;
            {
            fprintf(_coverage_fout, "3001\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "3002\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "3003\n");
          fflush(_coverage_fout);
          }
          __Cont: 
          proc = proc->next;
        }
        {
        fprintf(_coverage_fout, "3004\n");
        fflush(_coverage_fout);
        }
        proc = host->unused_procs;
        {
        fprintf(_coverage_fout, "3005\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "3006\n");
          fflush(_coverage_fout);
          }
          if (proc) {
            {
            fprintf(_coverage_fout, "3007\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "3008\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "3009\n");
          fflush(_coverage_fout);
          }
          if (proc->pid == 0) {
            {
            fprintf(_coverage_fout, "3010\n");
            fflush(_coverage_fout);
            }
            goto __Cont___0;
          } else {
            {
            fprintf(_coverage_fout, "3011\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "3012\n");
          fflush(_coverage_fout);
          }
          tmp___2 = waitpid(proc->pid, & status, 1);
          {
          fprintf(_coverage_fout, "3013\n");
          fflush(_coverage_fout);
          }
          switch (tmp___2) {
          {
          fprintf(_coverage_fout, "3014\n");
          fflush(_coverage_fout);
          }
          case 0: 
          break;
          {
          fprintf(_coverage_fout, "3015\n");
          fflush(_coverage_fout);
          }
          case -1: 
          tmp___5 = __errno_location();
          {
          fprintf(_coverage_fout, "3016\n");
          fflush(_coverage_fout);
          }
          if (*tmp___5 != 4) {
            {
            fprintf(_coverage_fout, "3017\n");
            fflush(_coverage_fout);
            }
            tmp___3 = __errno_location();
            {
            fprintf(_coverage_fout, "3018\n");
            fflush(_coverage_fout);
            }
            tmp___4 = strerror(*tmp___3);
            {
            fprintf(_coverage_fout, "3019\n");
            fflush(_coverage_fout);
            }
            log_error_write(srv, "mod_fastcgi.c", 3768U, "sddss", "pid ",
                            proc->pid, (unsigned int )proc->state, "not found:",
                            tmp___4);
          } else {
            {
            fprintf(_coverage_fout, "3020\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "3021\n");
          fflush(_coverage_fout);
          }
          break;
          {
          fprintf(_coverage_fout, "3022\n");
          fflush(_coverage_fout);
          }
          default: 
          __constr_expr_4.__in = status;
          {
          fprintf(_coverage_fout, "3023\n");
          fflush(_coverage_fout);
          }
          if ((__constr_expr_4.__i & 127) == 0) {
            {
            fprintf(_coverage_fout, "3024\n");
            fflush(_coverage_fout);
            }
            if ((int )proc->state != 5) {
              {
              fprintf(_coverage_fout, "3025\n");
              fflush(_coverage_fout);
              }
              __constr_expr_0.__in = status;
              {
              fprintf(_coverage_fout, "3026\n");
              fflush(_coverage_fout);
              }
              log_error_write(srv, "mod_fastcgi.c", 3785U, "sdb",
                              "child exited:",
                              (__constr_expr_0.__i & 65280) >> 8,
                              proc->connection_name);
            } else {
              {
              fprintf(_coverage_fout, "3027\n");
              fflush(_coverage_fout);
              }

            }
          } else {
            {
            fprintf(_coverage_fout, "3028\n");
            fflush(_coverage_fout);
            }
            __constr_expr_3.__in = status;
            {
            fprintf(_coverage_fout, "3029\n");
            fflush(_coverage_fout);
            }
            if ((int )((signed char )((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
              {
              fprintf(_coverage_fout, "3030\n");
              fflush(_coverage_fout);
              }
              __constr_expr_2.__in = status;
              {
              fprintf(_coverage_fout, "3031\n");
              fflush(_coverage_fout);
              }
              if ((__constr_expr_2.__i & 127) != 15) {
                {
                fprintf(_coverage_fout, "3032\n");
                fflush(_coverage_fout);
                }
                __constr_expr_1.__in = status;
                {
                fprintf(_coverage_fout, "3033\n");
                fflush(_coverage_fout);
                }
                log_error_write(srv, "mod_fastcgi.c", 3791U, "sd",
                                "child signaled:", __constr_expr_1.__i & 127);
              } else {
                {
                fprintf(_coverage_fout, "3034\n");
                fflush(_coverage_fout);
                }

              }
            } else {
              {
              fprintf(_coverage_fout, "3035\n");
              fflush(_coverage_fout);
              }
              log_error_write(srv, "mod_fastcgi.c", 3796U, "sd",
                              "child died somehow:", status);
            }
          }
          {
          fprintf(_coverage_fout, "3036\n");
          fflush(_coverage_fout);
          }
          proc->pid = 0;
          {
          fprintf(_coverage_fout, "3037\n");
          fflush(_coverage_fout);
          }
          proc->state = (enum __anonenum_state_139 )0;
          {
          fprintf(_coverage_fout, "3038\n");
          fflush(_coverage_fout);
          }
          (host->max_id) --;
          }
          {
          fprintf(_coverage_fout, "3039\n");
          fflush(_coverage_fout);
          }
          __Cont___0: 
          proc = proc->next;
        }
        {
        fprintf(_coverage_fout, "3040\n");
        fflush(_coverage_fout);
        }
        n ++;
      }
      {
      fprintf(_coverage_fout, "3041\n");
      fflush(_coverage_fout);
      }
      j ++;
    }
    {
    fprintf(_coverage_fout, "3042\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "3043\n");
  fflush(_coverage_fout);
  }
  return ((handler_t )1);
}
}
int mod_fastcgi_plugin_init(plugin *p ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "3044\n");
  fflush(_coverage_fout);
  }
  p->version = (unsigned int )(((1 << 16) | (4 << 8)) | 17);
  {
  fprintf(_coverage_fout, "3045\n");
  fflush(_coverage_fout);
  }
  p->name = buffer_init_string("fastcgi");
  {
  fprintf(_coverage_fout, "3046\n");
  fflush(_coverage_fout);
  }
  p->init = & mod_fastcgi_init;
  {
  fprintf(_coverage_fout, "3047\n");
  fflush(_coverage_fout);
  }
  p->cleanup = & mod_fastcgi_free;
  {
  fprintf(_coverage_fout, "3048\n");
  fflush(_coverage_fout);
  }
  p->set_defaults = & mod_fastcgi_set_defaults;
  {
  fprintf(_coverage_fout, "3049\n");
  fflush(_coverage_fout);
  }
  p->connection_reset = & fcgi_connection_reset;
  {
  fprintf(_coverage_fout, "3050\n");
  fflush(_coverage_fout);
  }
  p->handle_connection_close = & fcgi_connection_close_callback;
  {
  fprintf(_coverage_fout, "3051\n");
  fflush(_coverage_fout);
  }
  p->handle_uri_clean = & fcgi_check_extension_1;
  {
  fprintf(_coverage_fout, "3052\n");
  fflush(_coverage_fout);
  }
  p->handle_subrequest_start = & fcgi_check_extension_2;
  {
  fprintf(_coverage_fout, "3053\n");
  fflush(_coverage_fout);
  }
  p->handle_subrequest = & mod_fastcgi_handle_subrequest;
  {
  fprintf(_coverage_fout, "3054\n");
  fflush(_coverage_fout);
  }
  p->handle_joblist = & mod_fastcgi_handle_joblist;
  {
  fprintf(_coverage_fout, "3055\n");
  fflush(_coverage_fout);
  }
  p->handle_trigger = & mod_fastcgi_handle_trigger;
  {
  fprintf(_coverage_fout, "3056\n");
  fflush(_coverage_fout);
  }
  p->data = (void *)0;
  {
  fprintf(_coverage_fout, "3057\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
