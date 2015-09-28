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
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_3 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_2 {
   int __count ;
   union __anonunion___value_3 __value ;
};
typedef struct __anonstruct___mbstate_t_2 __mbstate_t;
struct __anonstruct__G_fpos_t_4 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_4 _G_fpos_t;
struct __anonstruct__G_fpos64_t_5 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_5 _G_fpos64_t;
typedef short _G_int16_t;
typedef int _G_int32_t;
typedef unsigned short _G_uint16_t;
typedef unsigned int _G_uint32_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
struct _IO_jump_t;
struct _IO_FILE;
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
struct _IO_FILE_plus;
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
typedef int __io_close_fn(void *__cookie );
typedef __gnuc_va_list va_list;
typedef __off64_t off_t;
typedef __ssize_t ssize_t;
typedef _G_fpos64_t fpos_t;
typedef long wchar_t;
struct __anonstruct___wait_terminated_6 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_7 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_6 __wait_terminated ;
   struct __anonstruct___wait_stopped_7 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_8 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_8  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_9 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_9 div_t;
struct __anonstruct_ldiv_t_10 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_10 ldiv_t;
struct __anonstruct_lldiv_t_11 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_11 lldiv_t;
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
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long u_int64_t;
typedef int register_t;
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_12 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_12 __sigset_t;
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
struct __anonstruct_fd_set_13 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_13 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_14 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_14 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_16 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_16 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_15 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_15 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_17 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_17 pthread_mutexattr_t;
struct __anonstruct___data_19 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_18 {
   struct __anonstruct___data_19 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_18 pthread_cond_t;
union __anonunion_pthread_condattr_t_20 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_20 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_22 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   unsigned char __flags ;
   unsigned char __shared ;
   unsigned char __pad1 ;
   unsigned char __pad2 ;
   int __writer ;
};
union __anonunion_pthread_rwlock_t_21 {
   struct __anonstruct___data_22 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_21 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_23 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_23 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_24 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_24 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_25 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_25 pthread_barrierattr_t;
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
struct __locale_data;
struct __locale_struct {
   struct __locale_data *__locales[13] ;
   unsigned short const   *__ctype_b ;
   int const   *__ctype_tolower ;
   int const   *__ctype_toupper ;
   char const   *__names[13] ;
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
enum __anonenum_26 {
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
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_27 {
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
enum __anonenum_28 {
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
    _SC_RAW_SOCKETS = 236,
    _SC_V7_ILP32_OFF32 = 237,
    _SC_V7_ILP32_OFFBIG = 238,
    _SC_V7_LP64_OFF64 = 239,
    _SC_V7_LPBIG_OFFBIG = 240,
    _SC_SS_REPL_MAX = 241,
    _SC_TRACE_EVENT_NAME_MAX = 242,
    _SC_TRACE_NAME_MAX = 243,
    _SC_TRACE_SYS_MAX = 244,
    _SC_TRACE_USER_EVENT_MAX = 245,
    _SC_XOPEN_STREAMS = 246,
    _SC_THREAD_ROBUST_PRIO_INHERIT = 247,
    _SC_THREAD_ROBUST_PRIO_PROTECT = 248
} ;
enum __anonenum_29 {
    _CS_PATH = 0,
    _CS_V6_WIDTH_RESTRICTED_ENVS = 1,
    _CS_GNU_LIBC_VERSION = 2,
    _CS_GNU_LIBPTHREAD_VERSION = 3,
    _CS_V5_WIDTH_RESTRICTED_ENVS = 4,
    _CS_V7_WIDTH_RESTRICTED_ENVS = 5,
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
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS = 1131,
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS = 1132,
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS = 1133,
    _CS_POSIX_V7_ILP32_OFF32_LIBS = 1134,
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS = 1135,
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS = 1136,
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS = 1137,
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS = 1138,
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS = 1139,
    _CS_POSIX_V7_LP64_OFF64_CFLAGS = 1140,
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS = 1141,
    _CS_POSIX_V7_LP64_OFF64_LIBS = 1142,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS = 1143,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS = 1144,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS = 1145,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS = 1146,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS = 1147,
    _CS_V6_ENV = 1148,
    _CS_V7_ENV = 1149
} ;
typedef signed char int8;
typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
enum TIFFIgnoreSense {
    TIS_STORE = 0,
    TIS_EXTRACT = 1,
    TIS_EMPTY = 2
} ;
struct __anonstruct_TIFFHeader_30 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
   uint32 tiff_diroff ;
};
typedef struct __anonstruct_TIFFHeader_30 TIFFHeader;
struct __anonstruct_TIFFDirEntry_31 {
   uint16 tdir_tag ;
   uint16 tdir_type ;
   uint32 tdir_count ;
   uint32 tdir_offset ;
};
typedef struct __anonstruct_TIFFDirEntry_31 TIFFDirEntry;
enum __anonenum_TIFFDataType_32 {
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
} ;
typedef enum __anonenum_TIFFDataType_32 TIFFDataType;
struct tiff;
typedef struct tiff TIFF;
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrip_t;
typedef uint32 ttile_t;
typedef int32 tsize_t;
typedef void *tdata_t;
typedef uint32 toff_t;
typedef void *thandle_t;
typedef unsigned char TIFFRGBValue;
struct __anonstruct_TIFFDisplay_33 {
   float d_mat[3][3] ;
   float d_YCR ;
   float d_YCG ;
   float d_YCB ;
   uint32 d_Vrwr ;
   uint32 d_Vrwg ;
   uint32 d_Vrwb ;
   float d_Y0R ;
   float d_Y0G ;
   float d_Y0B ;
   float d_gammaR ;
   float d_gammaG ;
   float d_gammaB ;
};
typedef struct __anonstruct_TIFFDisplay_33 TIFFDisplay;
struct __anonstruct_TIFFYCbCrToRGB_34 {
   TIFFRGBValue *clamptab ;
   int *Cr_r_tab ;
   int *Cb_b_tab ;
   int32 *Cr_g_tab ;
   int32 *Cb_g_tab ;
   int32 *Y_tab ;
};
typedef struct __anonstruct_TIFFYCbCrToRGB_34 TIFFYCbCrToRGB;
struct __anonstruct_TIFFCIELabToRGB_35 {
   int range ;
   float rstep ;
   float gstep ;
   float bstep ;
   float X0 ;
   float Y0 ;
   float Z0 ;
   TIFFDisplay display ;
   float Yr2r[1501] ;
   float Yg2g[1501] ;
   float Yb2b[1501] ;
};
typedef struct __anonstruct_TIFFCIELabToRGB_35 TIFFCIELabToRGB;
struct _TIFFRGBAImage;
typedef struct _TIFFRGBAImage TIFFRGBAImage;
typedef void (*tileContigRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                  uint32  , uint32  , uint32  , int32  ,
                                  int32  , unsigned char * );
typedef void (*tileSeparateRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                    uint32  , uint32  , uint32  , int32  ,
                                    int32  , unsigned char * , unsigned char * ,
                                    unsigned char * , unsigned char * );
union __anonunion_put_36 {
   void (*any)(TIFFRGBAImage * ) ;
   void (*contig)(TIFFRGBAImage * , uint32 * , uint32  , uint32  , uint32  ,
                  uint32  , int32  , int32  , unsigned char * ) ;
   void (*separate)(TIFFRGBAImage * , uint32 * , uint32  , uint32  , uint32  ,
                    uint32  , int32  , int32  , unsigned char * ,
                    unsigned char * , unsigned char * , unsigned char * ) ;
};
struct _TIFFRGBAImage {
   TIFF *tif ;
   int stoponerr ;
   int isContig ;
   int alpha ;
   uint32 width ;
   uint32 height ;
   uint16 bitspersample ;
   uint16 samplesperpixel ;
   uint16 orientation ;
   uint16 req_orientation ;
   uint16 photometric ;
   uint16 *redcmap ;
   uint16 *greencmap ;
   uint16 *bluecmap ;
   int (*get)(TIFFRGBAImage * , uint32 * , uint32  , uint32  ) ;
   union __anonunion_put_36 put ;
   TIFFRGBValue *Map ;
   uint32 **BWmap ;
   uint32 **PALmap ;
   TIFFYCbCrToRGB *ycbcr ;
   TIFFCIELabToRGB *cielab ;
   int row_offset ;
   int col_offset ;
};
typedef int (*TIFFInitMethod)(TIFF * , int  );
struct __anonstruct_TIFFCodec_37 {
   char *name ;
   uint16 scheme ;
   int (*init)(TIFF * , int  ) ;
};
typedef struct __anonstruct_TIFFCodec_37 TIFFCodec;
typedef void (*TIFFErrorHandler)(char const   * , char const   * , va_list  );
typedef tsize_t (*TIFFReadWriteProc)(thandle_t  , tdata_t  , tsize_t  );
typedef toff_t (*TIFFSeekProc)(thandle_t  , toff_t  , int  );
typedef int (*TIFFCloseProc)(thandle_t  );
typedef toff_t (*TIFFSizeProc)(thandle_t  );
typedef int (*TIFFMapFileProc)(thandle_t  , tdata_t * , toff_t * );
typedef void (*TIFFUnmapFileProc)(thandle_t  , tdata_t  , toff_t  );
typedef void (*TIFFExtendProc)(TIFF * );
struct __anonstruct_TIFFFieldInfo_38 {
   ttag_t field_tag ;
   short field_readcount ;
   short field_writecount ;
   TIFFDataType field_type ;
   unsigned short field_bit ;
   unsigned char field_oktochange ;
   unsigned char field_passcount ;
   char *field_name ;
};
typedef struct __anonstruct_TIFFFieldInfo_38 TIFFFieldInfo;
struct _TIFFTagValue {
   TIFFFieldInfo const   *info ;
   int count ;
   void *value ;
};
typedef struct _TIFFTagValue TIFFTagValue;
typedef int (*TIFFVSetMethod)(TIFF * , ttag_t  , va_list  );
typedef int (*TIFFVGetMethod)(TIFF * , ttag_t  , va_list  );
typedef void (*TIFFPrintMethod)(TIFF * , FILE * , long  );
struct __anonstruct_TIFFTagMethods_39 {
   int (*vsetfield)(TIFF * , ttag_t  , va_list  ) ;
   int (*vgetfield)(TIFF * , ttag_t  , va_list  ) ;
   void (*printdir)(TIFF * , FILE * , long  ) ;
};
typedef struct __anonstruct_TIFFTagMethods_39 TIFFTagMethods;
struct cpTag {
   uint16 tag ;
   uint16 count ;
   TIFFDataType type ;
};
typedef int (*copyFunc)(TIFF *in , TIFF *out , uint32 l , uint32 w ,
                        uint16 samplesperpixel );
typedef int (*readFunc)(TIFF * , uint8 * , uint32  , uint32  , tsample_t  );
typedef int (*writeFunc)(TIFF * , uint8 * , uint32  , uint32  , tsample_t  );
typedef void biasFn(void *image , void *bias , uint32 pixels );
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
extern int __underflow(_IO_FILE * ) ;
extern int __uflow(_IO_FILE * ) ;
extern int __overflow(_IO_FILE * , int  ) ;
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
extern  __attribute__((__nothrow__)) int renameat(int __oldfd ,
                                                  char const   *__old ,
                                                  int __newfd ,
                                                  char const   *__new ) ;
extern FILE *tmpfile(void)  __asm__("tmpfile64")  ;
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *fmemopen(void *__s , size_t __len ,
                                                    char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *open_memstream(char **__bufloc ,
                                                          size_t *__sizeloc ) ;
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
__inline extern int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
                                                                              size_t __maxlen ,
                                                                              char const   * __restrict  __format ,
                                                                              __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  vdprintf)(int __fd ,
                                               char const   * __restrict  __fmt ,
                                               __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  dprintf)(int __fd ,
                                              char const   * __restrict  __fmt 
                                              , ...) ;
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...)  __asm__("__isoc99_fscanf")  ;
extern int scanf(char const   * __restrict  __format  , ...)  __asm__("__isoc99_scanf")  ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...)  __asm__("__isoc99_sscanf")  ;
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s ,
                                              char const   * __restrict  __format ,
                                              __gnuc_va_list __arg )  __asm__("__isoc99_vfscanf")  ;
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format ,
                                             __gnuc_va_list __arg )  __asm__("__isoc99_vscanf")  ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsscanf)(char const   * __restrict  __s ,
                                                                            char const   * __restrict  __format ,
                                                                            __gnuc_va_list __arg )  __asm__("__isoc99_vsscanf")  ;
extern int fgetc(FILE *__stream ) ;
extern int getc(FILE *__stream ) ;
__inline extern int getchar(void) ;
__inline extern int getc_unlocked(FILE *__fp ) ;
__inline extern int getchar_unlocked(void) ;
__inline extern int fgetc_unlocked(FILE *__fp ) ;
extern int fputc(int __c , FILE *__stream ) ;
extern int putc(int __c , FILE *__stream ) ;
__inline extern int putchar(int __c ) ;
__inline extern int fputc_unlocked(int __c , FILE *__stream ) ;
__inline extern int putc_unlocked(int __c , FILE *__stream ) ;
__inline extern int putchar_unlocked(int __c ) ;
extern int getw(FILE *__stream ) ;
extern int putw(int __w , FILE *__stream ) ;
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
extern char *gets(char *__s ) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr ,
                            size_t * __restrict  __n , int __delimiter ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr ,
                          size_t * __restrict  __n , int __delimiter ,
                          FILE * __restrict  __stream ) ;
extern __ssize_t getline(char ** __restrict  __lineptr ,
                         size_t * __restrict  __n , FILE * __restrict  __stream ) ;
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
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
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
__inline extern int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ 
  int tmp ;

  {
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  return (tmp);
}
}
__inline extern int getchar(void) 
{ 
  int tmp ;

  {
  tmp = _IO_getc(stdin);
  return (tmp);
}
}
__inline extern int fgetc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end),
                             0L);
  if (tmp___3) {
    tmp___0 = __uflow(__fp);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __fp->_IO_read_ptr;
    (__fp->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return (tmp___2);
}
}
__inline extern int getc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end),
                             0L);
  if (tmp___3) {
    tmp___0 = __uflow(__fp);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __fp->_IO_read_ptr;
    (__fp->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return (tmp___2);
}
}
__inline extern int getchar_unlocked(void) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned long )stdin->_IO_read_ptr >= (unsigned long )stdin->_IO_read_end),
                             0L);
  if (tmp___3) {
    tmp___0 = __uflow(stdin);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = stdin->_IO_read_ptr;
    (stdin->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return (tmp___2);
}
}
__inline extern int putchar(int __c ) 
{ 
  int tmp ;

  {
  tmp = _IO_putc(__c, stdout);
  return (tmp);
}
}
__inline extern int fputc_unlocked(int __c , FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = __stream->_IO_write_ptr;
    (__stream->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return (tmp___3);
}
}
__inline extern int putc_unlocked(int __c , FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = __stream->_IO_write_ptr;
    (__stream->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return (tmp___3);
}
}
__inline extern int putchar_unlocked(int __c ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned long )stdout->_IO_write_ptr >= (unsigned long )stdout->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___0 = __overflow(stdout, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = stdout->_IO_write_ptr;
    (stdout->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return (tmp___3);
}
}
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern int feof_unlocked(FILE *__stream ) 
{ 


  {
  return ((__stream->_flags & 16) != 0);
}
}
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
__inline extern int ferror_unlocked(FILE *__stream ) 
{ 


  {
  return ((__stream->_flags & 32) != 0);
}
}
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
__inline extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) strtod)(char const   * __restrict  __nptr ,
                                                                                      char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) float ( __attribute__((__nonnull__(1))) strtof)(char const   * __restrict  __nptr ,
                                                                                     char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1))) strtold)(char const   * __restrict  __nptr ,
                                                                                            char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) strtol)(char const   * __restrict  __nptr ,
                                                                                    char ** __restrict  __endptr ,
                                                                                    int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1))) strtoul)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ,
                                                                                              int __base ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoq)(char const   * __restrict  __nptr ,
                                                                                         char ** __restrict  __endptr ,
                                                                                         int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtouq)(char const   * __restrict  __nptr ,
                                                                                                   char ** __restrict  __endptr ,
                                                                                                   int __base ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoll)(char const   * __restrict  __nptr ,
                                                                                          char ** __restrict  __endptr ,
                                                                                          int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtoull)(char const   * __restrict  __nptr ,
                                                                                                    char ** __restrict  __endptr ,
                                                                                                    int __base ) ;
__inline extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr ) 
{ 
  double tmp ;

  {
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((int )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr ) 
{ 
  long long tmp ;

  {
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) a64l)(char const   *__s )  __attribute__((__pure__)) ;
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline extern unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 


  {
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 


  {
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline extern unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 


  {
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
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
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__)) realloc)(void *__ptr ,
                                                                                              size_t __size ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) unsetenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int clearenv(void) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mktemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemp)(char *__template )  __asm__("mkstemp64")  ;
extern int ( __attribute__((__nonnull__(1))) mkstemps)(char *__template ,
                                                       int __suffixlen )  __asm__("mkstemps64")  ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) getsubopt)(char ** __restrict  __optionp ,
                                                                                          char * const  * __restrict  __tokens ,
                                                                                          char ** __restrict  __valuep ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) getloadavg)(double *__loadavg ,
                                                                                       int __nelem ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) strcoll_l)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          __locale_t __l )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2,4))) strxfrm_l)(char *__dest ,
                                                                                           char const   *__src ,
                                                                                           size_t __n ,
                                                                                           __locale_t __l ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strndup)(char const   *__string ,
                                                                                      size_t __n )  __attribute__((__malloc__)) ;
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
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strnlen)(char const   *__string ,
                                                                                       size_t __maxlen )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) strerror_r)(int __errnum ,
                                                                                       char *__buf ,
                                                                                       size_t __buflen )  __asm__("__xpg_strerror_r")  ;
extern  __attribute__((__nothrow__)) char *strerror_l(int __errnum ,
                                                      __locale_t __l ) ;
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
extern  __attribute__((__nothrow__)) char *strsignal(int __sig ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) __stpcpy)(char * __restrict  __dest ,
                                                                                         char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) stpcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) __stpncpy)(char * __restrict  __dest ,
                                                                                          char const   * __restrict  __src ,
                                                                                          size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) stpncpy)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern void *__rawmemchr(void const   *__s , int __c ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject) {

      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) ;
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        if ((int const   )*(__s + __result) != (int const   )__reject2) {

        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) ;
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          if ((int const   )*(__s + __result) != (int const   )__reject3) {

          } else {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strspn_c1(char const   *__s , int __accept ) ;
__inline extern size_t __strspn_c1(char const   *__s , int __accept ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while ((int const   )*(__s + __result) == (int const   )__accept) {
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) == (int const   )__accept1) {

    } else
    if ((int const   )*(__s + __result) == (int const   )__accept2) {

    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) == (int const   )__accept1) {

    } else
    if ((int const   )*(__s + __result) == (int const   )__accept2) {

    } else
    if ((int const   )*(__s + __result) == (int const   )__accept3) {

    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ 
  char *tmp ;

  {
  while (1) {
    if ((int const   )*__s != 0) {
      if ((int const   )*__s != (int const   )__accept1) {
        if ((int const   )*__s != (int const   )__accept2) {

        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __s ++;
  }
  if ((int const   )*__s == 0) {
    tmp = (char *)((void *)0);
  } else {
    tmp = (char *)((size_t )__s);
  }
  return (tmp);
}
}
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ 
  char *tmp ;

  {
  while (1) {
    if ((int const   )*__s != 0) {
      if ((int const   )*__s != (int const   )__accept1) {
        if ((int const   )*__s != (int const   )__accept2) {
          if ((int const   )*__s != (int const   )__accept3) {

          } else {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __s ++;
  }
  if ((int const   )*__s == 0) {
    tmp = (char *)((void *)0);
  } else {
    tmp = (char *)((size_t )__s);
  }
  return (tmp);
}
}
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ 
  char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  if ((unsigned long )__s == (unsigned long )((void *)0)) {
    __s = *__nextp;
  } else {

  }
  while ((int )*__s == (int )__sep) {
    __s ++;
  }
  __result = (char *)((void *)0);
  if ((int )*__s != 0) {
    tmp = __s;
    __s ++;
    __result = tmp;
    while ((int )*__s != 0) {
      tmp___0 = __s;
      __s ++;
      if ((int )*tmp___0 == (int )__sep) {
        *(__s + -1) = (char )'\000';
        break;
      } else {

      }
    }
  } else {

  }
  *__nextp = __s;
  return (__result);
}
}
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
__inline extern char *__strsep_1c(char **__s , char __reject ) ;
__inline extern char *__strsep_1c(char **__s , char __reject ) 
{ 
  register char *__retval ;
  char *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;

  {
  __retval = *__s;
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    tmp___2 = __builtin_strchr(__retval, (int )__reject);
    tmp___0 = tmp___2;
    *__s = tmp___0;
    if ((unsigned long )tmp___0 != (unsigned long )((void *)0)) {
      tmp = *__s;
      (*__s) ++;
      *tmp = (char )'\000';
    } else {

    }
  } else {

  }
  return (__retval);
}
}
__inline extern char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
__inline extern char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    __cp = __retval;
    while (1) {
      if ((int )*__cp == 0) {
        __cp = (char *)((void *)0);
        break;
      } else {

      }
      if ((int )*__cp == (int )__reject1) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else
      if ((int )*__cp == (int )__reject2) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else {

      }
      __cp ++;
    }
    *__s = __cp;
  } else {

  }
  return (__retval);
}
}
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) ;
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    __cp = __retval;
    while (1) {
      if ((int )*__cp == 0) {
        __cp = (char *)((void *)0);
        break;
      } else {

      }
      if ((int )*__cp == (int )__reject1) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else
      if ((int )*__cp == (int )__reject2) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else
      if ((int )*__cp == (int )__reject3) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else {

      }
      __cp ++;
    }
    *__s = __cp;
  } else {

  }
  return (__retval);
}
}
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) unsigned short const   **__ctype_b_loc(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **__ctype_toupper_loc(void)  __attribute__((__const__)) ;
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
__inline extern  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline extern  __attribute__((__nothrow__)) int toupper(int __c ) ;
extern  __attribute__((__nothrow__)) int isblank(int  ) ;
extern  __attribute__((__nothrow__)) int isascii(int __c ) ;
extern  __attribute__((__nothrow__)) int toascii(int __c ) ;
extern  __attribute__((__nothrow__)) int _toupper(int  ) ;
extern  __attribute__((__nothrow__)) int _tolower(int  ) ;
__inline extern  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline extern int tolower(int __c ) 
{ 
  __int32_t const   **tmp ;
  __int32_t tmp___0 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp = __ctype_tolower_loc();
      tmp___0 = *(*tmp + __c);
    } else {
      tmp___0 = (__int32_t const   )__c;
    }
  } else {
    tmp___0 = (__int32_t const   )__c;
  }
  return ((int )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) int toupper(int __c ) ;
__inline extern int toupper(int __c ) 
{ 
  __int32_t const   **tmp ;
  __int32_t tmp___0 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp = __ctype_toupper_loc();
      tmp___0 = *(*tmp + __c);
    } else {
      tmp___0 = (__int32_t const   )__c;
    }
  } else {
    tmp___0 = (__int32_t const   )__c;
  }
  return ((int )tmp___0);
}
}
extern  __attribute__((__nothrow__)) int isalnum_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isalpha_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int iscntrl_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isdigit_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int islower_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isgraph_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isprint_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ispunct_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isspace_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isupper_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isxdigit_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int isblank_l(int  , __locale_t  ) ;
extern  __attribute__((__nothrow__)) int __tolower_l(int __c , __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int tolower_l(int __c , __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int __toupper_l(int __c , __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int toupper_l(int __c , __locale_t __l ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) access)(char const   *__name ,
                                                                                   int __type ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) faccessat)(int __fd ,
                                                                                      char const   *__file ,
                                                                                      int __type ,
                                                                                      int __flag ) ;
extern  __attribute__((__nothrow__)) __off64_t lseek(int __fd ,
                                                     __off64_t __offset ,
                                                     int __whence )  __asm__("lseek64")  ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes ,
                     __off64_t __offset )  __asm__("pread64")  ;
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __nbytes ,
                      __off64_t __offset )  __asm__("pwrite64")  ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fchownat)(int __fd ,
                                                                                     char const   *__file ,
                                                                                     __uid_t __owner ,
                                                                                     __gid_t __group ,
                                                                                     int __flag ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chdir)(char const   *__path ) ;
extern  __attribute__((__nothrow__)) int fchdir(int __fd ) ;
extern  __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) getwd)(char *__buf )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
extern char **__environ ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execve)(char const   *__path ,
                                                                                     char * const  *__argv ,
                                                                                     char * const  *__envp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fexecve)(int __fd ,
                                                                                    char * const  *__argv ,
                                                                                    char * const  *__envp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execv)(char const   *__path ,
                                                                                    char * const  *__argv ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execle)(char const   *__path ,
                                                                                     char const   *__arg 
                                                                                     , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execl)(char const   *__path ,
                                                                                    char const   *__arg 
                                                                                    , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execvp)(char const   *__file ,
                                                                                     char * const  *__argv ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execlp)(char const   *__file ,
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
extern  __attribute__((__nothrow__)) __pid_t getpgid(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) int setpgid(__pid_t __pid , __pid_t __pgid ) ;
extern  __attribute__((__nothrow__)) int setpgrp(void) ;
extern  __attribute__((__nothrow__)) __pid_t setsid(void) ;
extern  __attribute__((__nothrow__)) __pid_t getsid(__pid_t __pid ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4))) linkat)(int __fromfd ,
                                                                                     char const   *__from ,
                                                                                     int __tofd ,
                                                                                     char const   *__to ,
                                                                                     int __flags ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) symlink)(char const   *__from ,
                                                                                      char const   *__to ) ;
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(1,2))) readlink)(char const   * __restrict  __path ,
                                                                                           char * __restrict  __buf ,
                                                                                           size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,3))) symlinkat)(char const   *__from ,
                                                                                        int __tofd ,
                                                                                        char const   *__to ) ;
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(2,3))) readlinkat)(int __fd ,
                                                                                             char const   * __restrict  __path ,
                                                                                             char * __restrict  __buf ,
                                                                                             size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) unlink)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) unlinkat)(int __fd ,
                                                                                     char const   *__name ,
                                                                                     int __flag ) ;
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
extern char const   *TIFFGetVersion(void) ;
extern TIFFCodec const   *TIFFFindCODEC(uint16  ) ;
extern TIFFCodec *TIFFRegisterCODEC(uint16  , char const   * ,
                                    int (*)(TIFF * , int  ) ) ;
extern void TIFFUnRegisterCODEC(TIFFCodec * ) ;
extern int TIFFIsCODECConfigured(uint16  ) ;
extern TIFFCodec *TIFFGetConfiguredCODECs(void) ;
extern tdata_t _TIFFmalloc(tsize_t  ) ;
extern tdata_t _TIFFrealloc(tdata_t  , tsize_t  ) ;
extern void _TIFFmemset(tdata_t  , int  , tsize_t  ) ;
extern void _TIFFmemcpy(tdata_t  , tdata_t const    , tsize_t  ) ;
extern int _TIFFmemcmp(tdata_t const    , tdata_t const    , tsize_t  ) ;
extern void _TIFFfree(tdata_t  ) ;
extern int TIFFGetTagListCount(TIFF * ) ;
extern ttag_t TIFFGetTagListEntry(TIFF * , int tag_index ) ;
extern void TIFFMergeFieldInfo(TIFF * , TIFFFieldInfo const   * , int  ) ;
extern TIFFFieldInfo const   *TIFFFindFieldInfo(TIFF * , ttag_t  ,
                                                TIFFDataType  ) ;
extern TIFFFieldInfo const   *TIFFFindFieldInfoByName(TIFF * , char const   * ,
                                                      TIFFDataType  ) ;
extern TIFFFieldInfo const   *TIFFFieldWithTag(TIFF * , ttag_t  ) ;
extern TIFFFieldInfo const   *TIFFFieldWithName(TIFF * , char const   * ) ;
extern TIFFTagMethods *TIFFAccessTagMethods(TIFF * ) ;
extern void *TIFFGetClientInfo(TIFF * , char const   * ) ;
extern void TIFFSetClientInfo(TIFF * , void * , char const   * ) ;
extern void TIFFCleanup(TIFF * ) ;
extern void TIFFClose(TIFF * ) ;
extern int TIFFFlush(TIFF * ) ;
extern int TIFFFlushData(TIFF * ) ;
extern int TIFFGetField(TIFF * , ttag_t   , ...) ;
extern int TIFFVGetField(TIFF * , ttag_t  , va_list  ) ;
extern int TIFFGetFieldDefaulted(TIFF * , ttag_t   , ...) ;
extern int TIFFVGetFieldDefaulted(TIFF * , ttag_t  , va_list  ) ;
extern int TIFFReadDirectory(TIFF * ) ;
extern int TIFFReadCustomDirectory(TIFF * , toff_t  , TIFFFieldInfo const   * ,
                                   size_t  ) ;
extern int TIFFReadEXIFDirectory(TIFF * , toff_t  ) ;
extern tsize_t TIFFScanlineSize(TIFF * ) ;
extern tsize_t TIFFRasterScanlineSize(TIFF * ) ;
extern tsize_t TIFFStripSize(TIFF * ) ;
extern tsize_t TIFFRawStripSize(TIFF * , tstrip_t  ) ;
extern tsize_t TIFFVStripSize(TIFF * , uint32  ) ;
extern tsize_t TIFFTileRowSize(TIFF * ) ;
extern tsize_t TIFFTileSize(TIFF * ) ;
extern tsize_t TIFFVTileSize(TIFF * , uint32  ) ;
extern uint32 TIFFDefaultStripSize(TIFF * , uint32  ) ;
extern void TIFFDefaultTileSize(TIFF * , uint32 * , uint32 * ) ;
extern int TIFFFileno(TIFF * ) ;
extern int TIFFSetFileno(TIFF * , int  ) ;
extern thandle_t TIFFClientdata(TIFF * ) ;
extern thandle_t TIFFSetClientdata(TIFF * , thandle_t  ) ;
extern int TIFFGetMode(TIFF * ) ;
extern int TIFFSetMode(TIFF * , int  ) ;
extern int TIFFIsTiled(TIFF * ) ;
extern int TIFFIsByteSwapped(TIFF * ) ;
extern int TIFFIsUpSampled(TIFF * ) ;
extern int TIFFIsMSB2LSB(TIFF * ) ;
extern int TIFFIsBigEndian(TIFF * ) ;
extern TIFFReadWriteProc TIFFGetReadProc(TIFF * ) ;
extern TIFFReadWriteProc TIFFGetWriteProc(TIFF * ) ;
extern TIFFSeekProc TIFFGetSeekProc(TIFF * ) ;
extern TIFFCloseProc TIFFGetCloseProc(TIFF * ) ;
extern TIFFSizeProc TIFFGetSizeProc(TIFF * ) ;
extern TIFFMapFileProc TIFFGetMapFileProc(TIFF * ) ;
extern TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF * ) ;
extern uint32 TIFFCurrentRow(TIFF * ) ;
extern tdir_t TIFFCurrentDirectory(TIFF * ) ;
extern tdir_t TIFFNumberOfDirectories(TIFF * ) ;
extern uint32 TIFFCurrentDirOffset(TIFF * ) ;
extern tstrip_t TIFFCurrentStrip(TIFF * ) ;
extern ttile_t TIFFCurrentTile(TIFF * ) ;
extern int TIFFReadBufferSetup(TIFF * , tdata_t  , tsize_t  ) ;
extern int TIFFWriteBufferSetup(TIFF * , tdata_t  , tsize_t  ) ;
extern int TIFFSetupStrips(TIFF * ) ;
extern int TIFFWriteCheck(TIFF * , int  , char const   * ) ;
extern void TIFFFreeDirectory(TIFF * ) ;
extern int TIFFCreateDirectory(TIFF * ) ;
extern int TIFFLastDirectory(TIFF * ) ;
extern int TIFFSetDirectory(TIFF * , tdir_t  ) ;
extern int TIFFSetSubDirectory(TIFF * , uint32  ) ;
extern int TIFFUnlinkDirectory(TIFF * , tdir_t  ) ;
extern int TIFFSetField(TIFF * , ttag_t   , ...) ;
extern int TIFFVSetField(TIFF * , ttag_t  , va_list  ) ;
extern int TIFFWriteDirectory(TIFF * ) ;
extern int TIFFCheckpointDirectory(TIFF * ) ;
extern int TIFFRewriteDirectory(TIFF * ) ;
extern int TIFFReassignTagToIgnore(enum TIFFIgnoreSense  , int  ) ;
extern void TIFFPrintDirectory(TIFF * , FILE * , long  ) ;
extern int TIFFReadScanline(TIFF * , tdata_t  , uint32  , tsample_t  ) ;
extern int TIFFWriteScanline(TIFF * , tdata_t  , uint32  , tsample_t  ) ;
extern int TIFFReadRGBAImage(TIFF * , uint32  , uint32  , uint32 * , int  ) ;
extern int TIFFReadRGBAImageOriented(TIFF * , uint32  , uint32  , uint32 * ,
                                     int  , int  ) ;
extern int TIFFReadRGBAStrip(TIFF * , tstrip_t  , uint32 * ) ;
extern int TIFFReadRGBATile(TIFF * , uint32  , uint32  , uint32 * ) ;
extern int TIFFRGBAImageOK(TIFF * , char * ) ;
extern int TIFFRGBAImageBegin(TIFFRGBAImage * , TIFF * , int  , char * ) ;
extern int TIFFRGBAImageGet(TIFFRGBAImage * , uint32 * , uint32  , uint32  ) ;
extern void TIFFRGBAImageEnd(TIFFRGBAImage * ) ;
extern TIFF *TIFFOpen(char const   * , char const   * ) ;
extern TIFF *TIFFFdOpen(int  , char const   * , char const   * ) ;
extern TIFF *TIFFClientOpen(char const   * , char const   * , thandle_t  ,
                            tsize_t (*)(thandle_t  , tdata_t  , tsize_t  ) ,
                            tsize_t (*)(thandle_t  , tdata_t  , tsize_t  ) ,
                            toff_t (*)(thandle_t  , toff_t  , int  ) ,
                            int (*)(thandle_t  ) , toff_t (*)(thandle_t  ) ,
                            int (*)(thandle_t  , tdata_t * , toff_t * ) ,
                            void (*)(thandle_t  , tdata_t  , toff_t  ) ) ;
extern char const   *TIFFFileName(TIFF * ) ;
extern char const   *TIFFSetFileName(TIFF * , char const   * ) ;
extern void TIFFError(char const   * , char const   *  , ...) ;
extern void TIFFWarning(char const   * , char const   *  , ...) ;
extern TIFFErrorHandler TIFFSetErrorHandler(void (*)(char const   * ,
                                                     char const   * , va_list  ) ) ;
extern TIFFErrorHandler TIFFSetWarningHandler(void (*)(char const   * ,
                                                       char const   * ,
                                                       va_list  ) ) ;
extern TIFFExtendProc TIFFSetTagExtender(void (*)(TIFF * ) ) ;
extern ttile_t TIFFComputeTile(TIFF * , uint32  , uint32  , uint32  ,
                               tsample_t  ) ;
extern int TIFFCheckTile(TIFF * , uint32  , uint32  , uint32  , tsample_t  ) ;
extern ttile_t TIFFNumberOfTiles(TIFF * ) ;
extern tsize_t TIFFReadTile(TIFF * , tdata_t  , uint32  , uint32  , uint32  ,
                            tsample_t  ) ;
extern tsize_t TIFFWriteTile(TIFF * , tdata_t  , uint32  , uint32  , uint32  ,
                             tsample_t  ) ;
extern tstrip_t TIFFComputeStrip(TIFF * , uint32  , tsample_t  ) ;
extern tstrip_t TIFFNumberOfStrips(TIFF * ) ;
extern tsize_t TIFFReadEncodedStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFReadRawStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFReadEncodedTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFReadRawTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFWriteEncodedStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFWriteRawStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFWriteEncodedTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
extern tsize_t TIFFWriteRawTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
extern int TIFFDataWidth(TIFFDataType  ) ;
extern void TIFFSetWriteOffset(TIFF * , toff_t  ) ;
extern void TIFFSwabShort(uint16 * ) ;
extern void TIFFSwabLong(uint32 * ) ;
extern void TIFFSwabDouble(double * ) ;
extern void TIFFSwabArrayOfShort(uint16 * , unsigned long  ) ;
extern void TIFFSwabArrayOfTriples(uint8 * , unsigned long  ) ;
extern void TIFFSwabArrayOfLong(uint32 * , unsigned long  ) ;
extern void TIFFSwabArrayOfDouble(double * , unsigned long  ) ;
extern void TIFFReverseBits(unsigned char * , unsigned long  ) ;
extern unsigned char const   *TIFFGetBitRevTable(int  ) ;
extern double LogL16toY(int  ) ;
extern double LogL10toY(int  ) ;
extern void XYZtoRGB24(float * , uint8 * ) ;
extern int uv_decode(double * , double * , int  ) ;
extern void LogLuv24toXYZ(uint32  , float * ) ;
extern void LogLuv32toXYZ(uint32  , float * ) ;
extern int LogL16fromY(double  , int  ) ;
extern int LogL10fromY(double  , int  ) ;
extern int uv_encode(double  , double  , int  ) ;
extern uint32 LogLuv24fromXYZ(float * , int  ) ;
extern uint32 LogLuv32fromXYZ(float * , int  ) ;
extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB * , TIFFDisplay * , float * ) ;
extern void TIFFCIELabToXYZ(TIFFCIELabToRGB * , uint32  , int32  , int32  ,
                            float * , float * , float * ) ;
extern void TIFFXYZToRGB(TIFFCIELabToRGB * , float  , float  , float  ,
                         uint32 * , uint32 * , uint32 * ) ;
extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB * , float * , float * ) ;
extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB * , uint32  , int32  , int32  ,
                           uint32 * , uint32 * , uint32 * ) ;
static int outtiled  =    -1;
static uint32 tilewidth  ;
static uint32 tilelength  ;
static uint16 config  ;
static uint16 compression  ;
static uint16 predictor  ;
static uint16 fillorder  ;
static uint16 orientation  ;
static uint32 rowsperstrip  ;
static uint32 g3opts  ;
static int ignore  =    0;
static uint32 defg3opts  =    (uint32 )-1;
static int quality  =    75;
static int jpegcolormode  =    1;
static uint16 defcompression  =    (uint16 )-1;
static uint16 defpredictor  =    (uint16 )-1;
static int tiffcp(TIFF *in , TIFF *out ) ;
static int processCompressOptions(char *opt ) ;
static void usage(void) ;
static char comma  =    (char )',';
static TIFF *bias  =    (TIFF *)((void *)0);
static int pageNum  =    0;
static int nextSrcImage(TIFF *tif , char **imageSpec ) 
{ 
  char *start ;
  tdir_t nextImage ;
  long tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;
  char const   *tmp___2 ;

  {
  if ((int )*(*imageSpec) == (int )comma) {
    start = *imageSpec + 1;
    tmp = strtol((char const   */* __restrict  */)start,
                 (char **/* __restrict  */)imageSpec, 0);
    nextImage = (tdir_t )tmp;
    if ((unsigned long )start == (unsigned long )*imageSpec) {
      nextImage = TIFFCurrentDirectory(tif);
    } else {

    }
    if (*(*imageSpec)) {
      if ((int )*(*imageSpec) == (int )comma) {
        if ((int )*(*imageSpec + 1) == 0) {
          *imageSpec = (char *)((void *)0);
        } else {

        }
      } else {
        tmp___0 = TIFFFileName(tif);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"Expected a %c separated image # list after %s\n",
                (int )comma, tmp___0);
        exit(-4);
      }
    } else {

    }
    tmp___1 = TIFFSetDirectory(tif, nextImage);
    if (tmp___1) {
      return (1);
    } else {

    }
    tmp___2 = TIFFFileName(tif);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s%c%d not found!\n", tmp___2,
            (int )comma, (int )nextImage);
  } else {

  }
  return (0);
}
}
static TIFF *openSrcImage(char **imageSpec ) 
{ 
  TIFF *tif ;
  char *fn ;
  void *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  fn = *imageSpec;
  tmp___0 = __builtin_strchr(fn, (int )comma);
  *imageSpec = tmp___0;
  if (*imageSpec) {
    *(*imageSpec) = (char )'\000';
    tif = TIFFOpen((char const   *)fn, "r");
    if (! *(*imageSpec + 1)) {
      *imageSpec = (char *)((void *)0);
      return (tif);
    } else {

    }
    if (tif) {
      *(*imageSpec) = comma;
      tmp___1 = nextSrcImage(tif, imageSpec);
      if (tmp___1) {

      } else {
        TIFFClose(tif);
        tif = (TIFF *)((void *)0);
      }
    } else {

    }
  } else {
    tif = TIFFOpen((char const   *)fn, "r");
  }
  return (tif);
}
}
int main(int argc , char **argv ) 
{ 
  uint16 defconfig ;
  uint16 deffillorder ;
  uint32 deftilewidth ;
  uint32 deftilelength ;
  uint32 defrowsperstrip ;
  uint32 diroff ;
  TIFF *in ;
  TIFF *out ;
  char mode[10] ;
  char *mp ;
  int c ;
  char *tmp ;
  uint16 samples ;
  char **biasFn ;
  int tmp___0 ;
  int tmp___1 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___5 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___12 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  unsigned long tmp___17 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___21 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___28 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  long tmp___32 ;
  int tmp___33 ;
  char *tmp___34 ;
  char *tmp___35 ;
  char *tmp___36 ;
  char *tmp___37 ;
  char *imageCursor ;
  char const   *tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;

  {
  defconfig = (uint16 )-1;
  deffillorder = (uint16 )0;
  deftilewidth = (uint32 )-1;
  deftilelength = (uint32 )-1;
  defrowsperstrip = (uint32 )0;
  diroff = (uint32 )0;
  mp = mode;
  tmp = mp;
  mp ++;
  *tmp = (char )'w';
  *mp = (char )'\000';
  while (1) {
    c = getopt(argc, (char * const  *)argv, ",:b:c:f:l:o:z:p:r:w:aistBLMC");
    if (c != -1) {

    } else {
      break;
    }
    switch (c) {
    case 44: 
    if ((int )*(optarg + 0) != 61) {
      usage();
    } else {

    }
    comma = *(optarg + 1);
    break;
    case 98: 
    if (bias) {
      fputs((char const   */* __restrict  */)"Only 1 bias image may be specified\n",
            (FILE */* __restrict  */)stderr);
      exit(-2);
    } else {

    }
    samples = (uint16 )-1;
    biasFn = & optarg;
    bias = openSrcImage(biasFn);
    if (! bias) {
      exit(-5);
    } else {

    }
    tmp___0 = TIFFIsTiled(bias);
    if (tmp___0) {
      fputs((char const   */* __restrict  */)"Bias image must be organized in strips\n",
            (FILE */* __restrict  */)stderr);
      exit(-7);
    } else {

    }
    TIFFGetField(bias, (ttag_t )277, & samples);
    if ((int )samples != 1) {
      fputs((char const   */* __restrict  */)"Bias image must be monochrome\n",
            (FILE */* __restrict  */)stderr);
      exit(-7);
    } else {

    }
    break;
    case 97: 
    mode[0] = (char )'a';
    break;
    case 99: 
    tmp___1 = processCompressOptions(optarg);
    if (tmp___1) {

    } else {
      usage();
    }
    break;
    case 102: 
    if (0) {
      __s1_len___0 = strlen((char const   *)optarg);
      __s2_len___0 = strlen("lsb2msb");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___2;
      } else
      if (__s1_len___0 >= 4U) {
        _L___2: /* CIL Label */ 
        if (! ((size_t )((void const   *)("lsb2msb" + 1)) - (size_t )((void const   *)"lsb2msb") == 1U)) {
          tmp___15 = 1;
        } else
        if (__s2_len___0 >= 4U) {
          tmp___15 = 1;
        } else {
          tmp___15 = 0;
        }
      } else {
        tmp___15 = 0;
      }
      if (tmp___15) {
        tmp___10 = __builtin_strcmp((char const   *)optarg, "lsb2msb");
        tmp___14 = tmp___10;
      } else {
        tmp___13 = __builtin_strcmp((char const   *)optarg, "lsb2msb");
        tmp___14 = tmp___13;
      }
    } else {
      tmp___13 = __builtin_strcmp((char const   *)optarg, "lsb2msb");
      tmp___14 = tmp___13;
    }
    if (tmp___14 == 0) {
      deffillorder = (uint16 )2;
    } else {
      if (0) {
        __s1_len = strlen((char const   *)optarg);
        __s2_len = strlen("msb2lsb");
        if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
          goto _L___0;
        } else
        if (__s1_len >= 4U) {
          _L___0: /* CIL Label */ 
          if (! ((size_t )((void const   *)("msb2lsb" + 1)) - (size_t )((void const   *)"msb2lsb") == 1U)) {
            tmp___8 = 1;
          } else
          if (__s2_len >= 4U) {
            tmp___8 = 1;
          } else {
            tmp___8 = 0;
          }
        } else {
          tmp___8 = 0;
        }
        if (tmp___8) {
          tmp___3 = __builtin_strcmp((char const   *)optarg, "msb2lsb");
          tmp___7 = tmp___3;
        } else {
          tmp___6 = __builtin_strcmp((char const   *)optarg, "msb2lsb");
          tmp___7 = tmp___6;
        }
      } else {
        tmp___6 = __builtin_strcmp((char const   *)optarg, "msb2lsb");
        tmp___7 = tmp___6;
      }
      if (tmp___7 == 0) {
        deffillorder = (uint16 )1;
      } else {
        usage();
      }
    }
    break;
    case 105: 
    ignore = 1;
    break;
    case 108: 
    outtiled = 1;
    tmp___16 = atoi((char const   *)optarg);
    deftilelength = (uint32 )tmp___16;
    break;
    case 111: 
    tmp___17 = strtoul((char const   */* __restrict  */)optarg,
                       (char **/* __restrict  */)((void *)0), 0);
    diroff = (uint32 )tmp___17;
    break;
    case 112: 
    if (0) {
      __s1_len___2 = strlen((char const   *)optarg);
      __s2_len___2 = strlen("separate");
      if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
        goto _L___6;
      } else
      if (__s1_len___2 >= 4U) {
        _L___6: /* CIL Label */ 
        if (! ((size_t )((void const   *)("separate" + 1)) - (size_t )((void const   *)"separate") == 1U)) {
          tmp___31 = 1;
        } else
        if (__s2_len___2 >= 4U) {
          tmp___31 = 1;
        } else {
          tmp___31 = 0;
        }
      } else {
        tmp___31 = 0;
      }
      if (tmp___31) {
        tmp___26 = __builtin_strcmp((char const   *)optarg, "separate");
        tmp___30 = tmp___26;
      } else {
        tmp___29 = __builtin_strcmp((char const   *)optarg, "separate");
        tmp___30 = tmp___29;
      }
    } else {
      tmp___29 = __builtin_strcmp((char const   *)optarg, "separate");
      tmp___30 = tmp___29;
    }
    if (tmp___30 == 0) {
      defconfig = (uint16 )2;
    } else {
      if (0) {
        __s1_len___1 = strlen((char const   *)optarg);
        __s2_len___1 = strlen("contig");
        if (! ((size_t )((void const   *)(optarg + 1)) - (size_t )((void const   *)optarg) == 1U)) {
          goto _L___4;
        } else
        if (__s1_len___1 >= 4U) {
          _L___4: /* CIL Label */ 
          if (! ((size_t )((void const   *)("contig" + 1)) - (size_t )((void const   *)"contig") == 1U)) {
            tmp___24 = 1;
          } else
          if (__s2_len___1 >= 4U) {
            tmp___24 = 1;
          } else {
            tmp___24 = 0;
          }
        } else {
          tmp___24 = 0;
        }
        if (tmp___24) {
          tmp___19 = __builtin_strcmp((char const   *)optarg, "contig");
          tmp___23 = tmp___19;
        } else {
          tmp___22 = __builtin_strcmp((char const   *)optarg, "contig");
          tmp___23 = tmp___22;
        }
      } else {
        tmp___22 = __builtin_strcmp((char const   *)optarg, "contig");
        tmp___23 = tmp___22;
      }
      if (tmp___23 == 0) {
        defconfig = (uint16 )1;
      } else {
        usage();
      }
    }
    break;
    case 114: 
    tmp___32 = atol((char const   *)optarg);
    defrowsperstrip = (uint32 )tmp___32;
    break;
    case 115: 
    outtiled = 0;
    break;
    case 116: 
    outtiled = 1;
    break;
    case 119: 
    outtiled = 1;
    tmp___33 = atoi((char const   *)optarg);
    deftilewidth = (uint32 )tmp___33;
    break;
    case 66: 
    tmp___34 = mp;
    mp ++;
    *tmp___34 = (char )'b';
    *mp = (char )'\000';
    break;
    case 76: 
    tmp___35 = mp;
    mp ++;
    *tmp___35 = (char )'l';
    *mp = (char )'\000';
    break;
    case 77: 
    tmp___36 = mp;
    mp ++;
    *tmp___36 = (char )'m';
    *mp = (char )'\000';
    break;
    case 67: 
    tmp___37 = mp;
    mp ++;
    *tmp___37 = (char )'c';
    *mp = (char )'\000';
    break;
    case 63: 
    usage();
    }
  }
  if (argc - optind < 2) {
    usage();
  } else {

  }
  out = TIFFOpen((char const   *)*(argv + (argc - 1)), (char const   *)(mode));
  if ((unsigned long )out == (unsigned long )((void *)0)) {
    return (-2);
  } else {

  }
  if (argc - optind == 2) {
    pageNum = -1;
  } else {

  }
  while (optind < argc - 1) {
    imageCursor = *(argv + optind);
    in = openSrcImage(& imageCursor);
    if ((unsigned long )in == (unsigned long )((void *)0)) {
      return (-3);
    } else {

    }
    if (diroff != 0U) {
      tmp___39 = TIFFSetSubDirectory(in, diroff);
      if (tmp___39) {

      } else {
        tmp___38 = TIFFFileName(in);
        TIFFError(tmp___38, "Error, setting subdirectory at %#x", diroff);
        TIFFClose(out);
        return (1);
      }
    } else {

    }
    while (1) {
      config = defconfig;
      compression = defcompression;
      predictor = defpredictor;
      fillorder = deffillorder;
      rowsperstrip = defrowsperstrip;
      tilewidth = deftilewidth;
      tilelength = deftilelength;
      g3opts = defg3opts;
      tmp___40 = tiffcp(in, out);
      if (tmp___40) {
        tmp___41 = TIFFWriteDirectory(out);
        if (tmp___41) {

        } else {
          TIFFClose(out);
          return (1);
        }
      } else {
        TIFFClose(out);
        return (1);
      }
      if (imageCursor) {
        tmp___42 = nextSrcImage(in, & imageCursor);
        if (tmp___42) {

        } else {
          break;
        }
      } else {
        tmp___43 = TIFFReadDirectory(in);
        if (tmp___43) {

        } else {
          break;
        }
      }
    }
    TIFFClose(in);
    optind ++;
  }
  TIFFClose(out);
  return (0);
}
}
static void processG3Options(char *cp ) 
{ 
  size_t tmp ;
  size_t tmp___0 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___4 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  size_t tmp___10 ;
  size_t tmp___11 ;
  size_t tmp___12 ;
  size_t tmp___13 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___17 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  size_t tmp___23 ;
  size_t tmp___24 ;
  size_t tmp___25 ;
  size_t tmp___26 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___30 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  size_t tmp___36 ;
  size_t tmp___37 ;
  void *tmp___38 ;
  char *tmp___39 ;
  void *tmp___40 ;
  char *tmp___41 ;

  {
  tmp___41 = __builtin_strchr(cp, ':');
  cp = tmp___41;
  if (cp) {
    if (defg3opts == 4294967295U) {
      defg3opts = (uint32 )0;
    } else {

    }
    while (1) {
      cp ++;
      if (0) {
        if (0) {
          __s1_len___1 = strlen((char const   *)cp);
          __s2_len___1 = strlen("1d");
          if (! ((size_t )((void const   *)(cp + 1)) - (size_t )((void const   *)cp) == 1U)) {
            goto _L___4;
          } else
          if (__s1_len___1 >= 4U) {
            _L___4: /* CIL Label */ 
            if (! ((size_t )((void const   *)("1d" + 1)) - (size_t )((void const   *)"1d") == 1U)) {
              tmp___33 = 1;
            } else
            if (__s2_len___1 >= 4U) {
              tmp___33 = 1;
            } else {
              tmp___33 = 0;
            }
          } else {
            tmp___33 = 0;
          }
          if (tmp___33) {
            tmp___28 = __builtin_strcmp((char const   *)cp, "1d");
            tmp___32 = tmp___28;
          } else {
            tmp___31 = __builtin_strcmp((char const   *)cp, "1d");
            tmp___32 = tmp___31;
          }
        } else {
          tmp___31 = __builtin_strcmp((char const   *)cp, "1d");
          tmp___32 = tmp___31;
        }
        tmp___35 = tmp___32;
      } else {
        tmp___34 = strncmp((char const   *)cp, "1d", (size_t )2);
        tmp___35 = tmp___34;
      }
      if (tmp___35 == 0) {
        defg3opts &= 4294967294U;
      } else {
        if (0) {
          if (0) {
            __s1_len___0 = strlen((char const   *)cp);
            __s2_len___0 = strlen("2d");
            if (! ((size_t )((void const   *)(cp + 1)) - (size_t )((void const   *)cp) == 1U)) {
              goto _L___2;
            } else
            if (__s1_len___0 >= 4U) {
              _L___2: /* CIL Label */ 
              if (! ((size_t )((void const   *)("2d" + 1)) - (size_t )((void const   *)"2d") == 1U)) {
                tmp___20 = 1;
              } else
              if (__s2_len___0 >= 4U) {
                tmp___20 = 1;
              } else {
                tmp___20 = 0;
              }
            } else {
              tmp___20 = 0;
            }
            if (tmp___20) {
              tmp___15 = __builtin_strcmp((char const   *)cp, "2d");
              tmp___19 = tmp___15;
            } else {
              tmp___18 = __builtin_strcmp((char const   *)cp, "2d");
              tmp___19 = tmp___18;
            }
          } else {
            tmp___18 = __builtin_strcmp((char const   *)cp, "2d");
            tmp___19 = tmp___18;
          }
          tmp___22 = tmp___19;
        } else {
          tmp___21 = strncmp((char const   *)cp, "2d", (size_t )2);
          tmp___22 = tmp___21;
        }
        if (tmp___22 == 0) {
          defg3opts |= 1U;
        } else {
          if (0) {
            if (0) {
              __s1_len = strlen((char const   *)cp);
              __s2_len = strlen("fill");
              if (! ((size_t )((void const   *)(cp + 1)) - (size_t )((void const   *)cp) == 1U)) {
                goto _L___0;
              } else
              if (__s1_len >= 4U) {
                _L___0: /* CIL Label */ 
                if (! ((size_t )((void const   *)("fill" + 1)) - (size_t )((void const   *)"fill") == 1U)) {
                  tmp___7 = 1;
                } else
                if (__s2_len >= 4U) {
                  tmp___7 = 1;
                } else {
                  tmp___7 = 0;
                }
              } else {
                tmp___7 = 0;
              }
              if (tmp___7) {
                tmp___2 = __builtin_strcmp((char const   *)cp, "fill");
                tmp___6 = tmp___2;
              } else {
                tmp___5 = __builtin_strcmp((char const   *)cp, "fill");
                tmp___6 = tmp___5;
              }
            } else {
              tmp___5 = __builtin_strcmp((char const   *)cp, "fill");
              tmp___6 = tmp___5;
            }
            tmp___9 = tmp___6;
          } else {
            tmp___8 = strncmp((char const   *)cp, "fill", (size_t )4);
            tmp___9 = tmp___8;
          }
          if (tmp___9 == 0) {
            defg3opts |= 4U;
          } else {
            usage();
          }
        }
      }
      tmp___39 = __builtin_strchr(cp, ':');
      cp = tmp___39;
      if (cp) {

      } else {
        break;
      }
    }
  } else {

  }
  return;
}
}
static int processCompressOptions(char *opt ) 
{ 
  char *cp ;
  void *tmp ;
  char *tmp___0 ;
  unsigned short const   **tmp___1 ;
  void *tmp___2 ;
  char *tmp___3 ;
  char *cp___0 ;
  void *tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  char *cp___1 ;
  void *tmp___7 ;
  char *tmp___8 ;
  int tmp___9 ;
  size_t tmp___10 ;
  size_t tmp___11 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___15 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  size_t tmp___21 ;
  size_t tmp___22 ;
  size_t tmp___23 ;
  size_t tmp___24 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___28 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  size_t tmp___34 ;
  size_t tmp___35 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___39 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  size_t tmp___43 ;
  size_t tmp___44 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___48 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  size_t tmp___54 ;
  size_t tmp___55 ;
  size_t tmp___56 ;
  size_t tmp___57 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___58 ;
  int tmp___59 ;
  int tmp___60 ;
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___61 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___62 ;
  int tmp___63 ;
  int tmp___64 ;
  int tmp___65 ;
  int tmp___66 ;
  size_t tmp___67 ;
  size_t tmp___68 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___69 ;
  int tmp___70 ;
  int tmp___71 ;
  unsigned char const   *__s2___4 ;
  register int __result___9 ;
  int tmp___72 ;
  unsigned char const   *__s1___4 ;
  register int __result___10 ;
  int tmp___73 ;
  int tmp___74 ;
  int tmp___75 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___76 ;
  int tmp___77 ;
  int tmp___78 ;
  unsigned char const   *__s2___5 ;
  register int __result___11 ;
  int tmp___79 ;
  unsigned char const   *__s1___5 ;
  register int __result___12 ;
  int tmp___80 ;
  int tmp___81 ;
  int tmp___82 ;

  {
  if (0) {
    __s1_len___5 = strlen((char const   *)opt);
    __s2_len___5 = strlen("none");
    if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
      goto _L___12;
    } else
    if (__s1_len___5 >= 4U) {
      _L___12: /* CIL Label */ 
      if (! ((size_t )((void const   *)("none" + 1)) - (size_t )((void const   *)"none") == 1U)) {
        tmp___82 = 1;
      } else
      if (__s2_len___5 >= 4U) {
        tmp___82 = 1;
      } else {
        tmp___82 = 0;
      }
    } else {
      tmp___82 = 0;
    }
    if (tmp___82) {
      tmp___77 = __builtin_strcmp((char const   *)opt, "none");
      tmp___81 = tmp___77;
    } else {
      tmp___80 = __builtin_strcmp((char const   *)opt, "none");
      tmp___81 = tmp___80;
    }
  } else {
    tmp___80 = __builtin_strcmp((char const   *)opt, "none");
    tmp___81 = tmp___80;
  }
  if (tmp___81 == 0) {
    defcompression = (uint16 )1;
  } else {
    if (0) {
      __s1_len___4 = strlen((char const   *)opt);
      __s2_len___4 = strlen("packbits");
      if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
        goto _L___10;
      } else
      if (__s1_len___4 >= 4U) {
        _L___10: /* CIL Label */ 
        if (! ((size_t )((void const   *)("packbits" + 1)) - (size_t )((void const   *)"packbits") == 1U)) {
          tmp___75 = 1;
        } else
        if (__s2_len___4 >= 4U) {
          tmp___75 = 1;
        } else {
          tmp___75 = 0;
        }
      } else {
        tmp___75 = 0;
      }
      if (tmp___75) {
        tmp___70 = __builtin_strcmp((char const   *)opt, "packbits");
        tmp___74 = tmp___70;
      } else {
        tmp___73 = __builtin_strcmp((char const   *)opt, "packbits");
        tmp___74 = tmp___73;
      }
    } else {
      tmp___73 = __builtin_strcmp((char const   *)opt, "packbits");
      tmp___74 = tmp___73;
    }
    if (tmp___74 == 0) {
      defcompression = (uint16 )32773;
    } else {
      if (0) {
        if (0) {
          __s1_len___3 = strlen((char const   *)opt);
          __s2_len___3 = strlen("jpeg");
          if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
            goto _L___8;
          } else
          if (__s1_len___3 >= 4U) {
            _L___8: /* CIL Label */ 
            if (! ((size_t )((void const   *)("jpeg" + 1)) - (size_t )((void const   *)"jpeg") == 1U)) {
              tmp___64 = 1;
            } else
            if (__s2_len___3 >= 4U) {
              tmp___64 = 1;
            } else {
              tmp___64 = 0;
            }
          } else {
            tmp___64 = 0;
          }
          if (tmp___64) {
            tmp___59 = __builtin_strcmp((char const   *)opt, "jpeg");
            tmp___63 = tmp___59;
          } else {
            tmp___62 = __builtin_strcmp((char const   *)opt, "jpeg");
            tmp___63 = tmp___62;
          }
        } else {
          tmp___62 = __builtin_strcmp((char const   *)opt, "jpeg");
          tmp___63 = tmp___62;
        }
        tmp___66 = tmp___63;
      } else {
        tmp___65 = strncmp((char const   *)opt, "jpeg", (size_t )4);
        tmp___66 = tmp___65;
      }
      if (tmp___66 == 0) {
        tmp___0 = __builtin_strchr(opt, ':');
        cp = tmp___0;
        if (cp) {
          tmp___1 = __ctype_b_loc();
          if ((int const   )*(*tmp___1 + (int )*(cp + 1)) & 2048) {
            quality = atoi((char const   *)(cp + 1));
          } else {

          }
        } else {

        }
        if (cp) {
          tmp___3 = __builtin_strchr(cp, 'r');
          if (tmp___3) {
            jpegcolormode = 0;
          } else {

          }
        } else {

        }
        defcompression = (uint16 )7;
      } else {
        if (0) {
          if (0) {
            __s1_len___2 = strlen((char const   *)opt);
            __s2_len___2 = strlen("g3");
            if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
              goto _L___6;
            } else
            if (__s1_len___2 >= 4U) {
              _L___6: /* CIL Label */ 
              if (! ((size_t )((void const   *)("g3" + 1)) - (size_t )((void const   *)"g3") == 1U)) {
                tmp___51 = 1;
              } else
              if (__s2_len___2 >= 4U) {
                tmp___51 = 1;
              } else {
                tmp___51 = 0;
              }
            } else {
              tmp___51 = 0;
            }
            if (tmp___51) {
              tmp___46 = __builtin_strcmp((char const   *)opt, "g3");
              tmp___50 = tmp___46;
            } else {
              tmp___49 = __builtin_strcmp((char const   *)opt, "g3");
              tmp___50 = tmp___49;
            }
          } else {
            tmp___49 = __builtin_strcmp((char const   *)opt, "g3");
            tmp___50 = tmp___49;
          }
          tmp___53 = tmp___50;
        } else {
          tmp___52 = strncmp((char const   *)opt, "g3", (size_t )2);
          tmp___53 = tmp___52;
        }
        if (tmp___53 == 0) {
          processG3Options(opt);
          defcompression = (uint16 )3;
        } else {
          if (0) {
            __s1_len___1 = strlen((char const   *)opt);
            __s2_len___1 = strlen("g4");
            if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
              goto _L___4;
            } else
            if (__s1_len___1 >= 4U) {
              _L___4: /* CIL Label */ 
              if (! ((size_t )((void const   *)("g4" + 1)) - (size_t )((void const   *)"g4") == 1U)) {
                tmp___42 = 1;
              } else
              if (__s2_len___1 >= 4U) {
                tmp___42 = 1;
              } else {
                tmp___42 = 0;
              }
            } else {
              tmp___42 = 0;
            }
            if (tmp___42) {
              tmp___37 = __builtin_strcmp((char const   *)opt, "g4");
              tmp___41 = tmp___37;
            } else {
              tmp___40 = __builtin_strcmp((char const   *)opt, "g4");
              tmp___41 = tmp___40;
            }
          } else {
            tmp___40 = __builtin_strcmp((char const   *)opt, "g4");
            tmp___41 = tmp___40;
          }
          if (tmp___41 == 0) {
            defcompression = (uint16 )4;
          } else {
            if (0) {
              if (0) {
                __s1_len___0 = strlen((char const   *)opt);
                __s2_len___0 = strlen("lzw");
                if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
                  goto _L___2;
                } else
                if (__s1_len___0 >= 4U) {
                  _L___2: /* CIL Label */ 
                  if (! ((size_t )((void const   *)("lzw" + 1)) - (size_t )((void const   *)"lzw") == 1U)) {
                    tmp___31 = 1;
                  } else
                  if (__s2_len___0 >= 4U) {
                    tmp___31 = 1;
                  } else {
                    tmp___31 = 0;
                  }
                } else {
                  tmp___31 = 0;
                }
                if (tmp___31) {
                  tmp___26 = __builtin_strcmp((char const   *)opt, "lzw");
                  tmp___30 = tmp___26;
                } else {
                  tmp___29 = __builtin_strcmp((char const   *)opt, "lzw");
                  tmp___30 = tmp___29;
                }
              } else {
                tmp___29 = __builtin_strcmp((char const   *)opt, "lzw");
                tmp___30 = tmp___29;
              }
              tmp___33 = tmp___30;
            } else {
              tmp___32 = strncmp((char const   *)opt, "lzw", (size_t )3);
              tmp___33 = tmp___32;
            }
            if (tmp___33 == 0) {
              tmp___5 = __builtin_strchr(opt, ':');
              cp___0 = tmp___5;
              if (cp___0) {
                tmp___6 = atoi((char const   *)(cp___0 + 1));
                defpredictor = (uint16 )tmp___6;
              } else {

              }
              defcompression = (uint16 )5;
            } else {
              if (0) {
                if (0) {
                  __s1_len = strlen((char const   *)opt);
                  __s2_len = strlen("zip");
                  if (! ((size_t )((void const   *)(opt + 1)) - (size_t )((void const   *)opt) == 1U)) {
                    goto _L___0;
                  } else
                  if (__s1_len >= 4U) {
                    _L___0: /* CIL Label */ 
                    if (! ((size_t )((void const   *)("zip" + 1)) - (size_t )((void const   *)"zip") == 1U)) {
                      tmp___18 = 1;
                    } else
                    if (__s2_len >= 4U) {
                      tmp___18 = 1;
                    } else {
                      tmp___18 = 0;
                    }
                  } else {
                    tmp___18 = 0;
                  }
                  if (tmp___18) {
                    tmp___13 = __builtin_strcmp((char const   *)opt, "zip");
                    tmp___17 = tmp___13;
                  } else {
                    tmp___16 = __builtin_strcmp((char const   *)opt, "zip");
                    tmp___17 = tmp___16;
                  }
                } else {
                  tmp___16 = __builtin_strcmp((char const   *)opt, "zip");
                  tmp___17 = tmp___16;
                }
                tmp___20 = tmp___17;
              } else {
                tmp___19 = strncmp((char const   *)opt, "zip", (size_t )3);
                tmp___20 = tmp___19;
              }
              if (tmp___20 == 0) {
                tmp___8 = __builtin_strchr(opt, ':');
                cp___1 = tmp___8;
                if (cp___1) {
                  tmp___9 = atoi((char const   *)(cp___1 + 1));
                  defpredictor = (uint16 )tmp___9;
                } else {

                }
                defcompression = (uint16 )8;
              } else {
                return (0);
              }
            }
          }
        }
      }
    }
  }
  return (1);
}
}
char *stuff[47]  = 
  {      (char *)"usage: tiffcp [options] input... output",      (char *)"where options are:",      (char *)" -a\t\tappend to output instead of overwriting",      (char *)" -o offset\tset initial directory offset", 
        (char *)" -p contig\tpack samples contiguously (e.g. RGBRGB...)",      (char *)" -p separate\tstore samples separately (e.g. RRR...GGG...BBB...)",      (char *)" -s\t\twrite output in strips",      (char *)" -t\t\twrite output in tiles", 
        (char *)" -i\t\tignore read errors",      (char *)" -b file[,#]\tbias (dark) monochrome image to be subtracted from all others",      (char *)" -,=%\t\tuse % rather than , to separate image #\'s (per Note below)",      (char *)"", 
        (char *)" -r #\t\tmake each strip have no more than # rows",      (char *)" -w #\t\tset output tile width (pixels)",      (char *)" -l #\t\tset output tile length (pixels)",      (char *)"", 
        (char *)" -f lsb2msb\tforce lsb-to-msb FillOrder for output",      (char *)" -f msb2lsb\tforce msb-to-lsb FillOrder for output",      (char *)"",      (char *)" -c lzw[:opts]\tcompress output with Lempel-Ziv & Welch encoding", 
        (char *)" -c zip[:opts]\tcompress output with deflate encoding",      (char *)" -c jpeg[:opts]\tcompress output with JPEG encoding",      (char *)" -c packbits\tcompress output with packbits encoding",      (char *)" -c g3[:opts]\tcompress output with CCITT Group 3 encoding", 
        (char *)" -c g4\t\tcompress output with CCITT Group 4 encoding",      (char *)" -c none\tuse no compression algorithm on output",      (char *)"",      (char *)"Group 3 options:", 
        (char *)" 1d\t\tuse default CCITT Group 3 1D-encoding",      (char *)" 2d\t\tuse optional CCITT Group 3 2D-encoding",      (char *)" fill\t\tbyte-align EOL codes",      (char *)"For example, -c g3:2d:fill to get G3-2D-encoded data with byte-aligned EOLs", 
        (char *)"",      (char *)"JPEG options:",      (char *)" #\t\tset compression quality level (0-100, default 75)",      (char *)" r\t\toutput color image as RGB rather than YCbCr", 
        (char *)"For example, -c jpeg:r:50 to get JPEG-encoded RGB data with 50% comp. quality",      (char *)"",      (char *)"LZW and deflate options:",      (char *)" #\t\tset predictor value", 
        (char *)"For example, -c lzw:2 to get LZW-encoded data with horizontal differencing",      (char *)"",      (char *)"Note that input filenames may be of the form filename,x,y,z",      (char *)"where x, y, and z specify image numbers in the filename to copy.", 
        (char *)"example:  tiffcp -c none -b esp.tif,1 esp.tif,0 test.tif",      (char *)"  subtract 2nd image in esp.tif from 1st yielding uncompressed result test.tif",      (char *)((void *)0)};
static void usage(void) 
{ 
  char buf[8192] ;
  int i ;
  char const   *tmp ;

  {
  setbuf((FILE */* __restrict  */)stderr, (char */* __restrict  */)(buf));
  tmp = TIFFGetVersion();
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"%s\n\n", tmp);
  i = 0;
  while ((unsigned long )stuff[i] != (unsigned long )((void *)0)) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s\n", stuff[i]);
    i ++;
  }
  exit(-1);
}
}
static void cpTag(TIFF *in , TIFF *out , uint16 tag , uint16 count ,
                  TIFFDataType type ) 
{ 
  uint16 shortv ;
  int tmp ;
  uint16 shortv1 ;
  uint16 shortv2 ;
  int tmp___0 ;
  uint16 *tr ;
  uint16 *tg ;
  uint16 *tb ;
  uint16 *ta ;
  int tmp___1 ;
  uint16 shortv1___0 ;
  uint16 *shortav ;
  int tmp___2 ;
  uint32 longv ;
  int tmp___3 ;
  float floatv ;
  int tmp___4 ;
  float *floatav ;
  int tmp___5 ;
  char *stringv ;
  int tmp___6 ;
  double doublev ;
  int tmp___7 ;
  double *doubleav ;
  int tmp___8 ;
  char const   *tmp___9 ;

  {
  switch ((unsigned int )type) {
  case 3U: 
  if ((int )count == 1) {
    tmp = TIFFGetField(in, (ttag_t )tag, & shortv);
    if (tmp) {
      TIFFSetField(out, (ttag_t )tag, (int )shortv);
    } else {

    }
  } else
  if ((int )count == 2) {
    tmp___0 = TIFFGetField(in, (ttag_t )tag, & shortv1, & shortv2);
    if (tmp___0) {
      TIFFSetField(out, (ttag_t )tag, (int )shortv1, (int )shortv2);
    } else {

    }
  } else
  if ((int )count == 4) {
    tmp___1 = TIFFGetField(in, (ttag_t )tag, & tr, & tg, & tb, & ta);
    if (tmp___1) {
      TIFFSetField(out, (ttag_t )tag, tr, tg, tb, ta);
    } else {

    }
  } else
  if ((int )count == 65535) {
    tmp___2 = TIFFGetField(in, (ttag_t )tag, & shortv1___0, & shortav);
    if (tmp___2) {
      TIFFSetField(out, (ttag_t )tag, (int )shortv1___0, shortav);
    } else {

    }
  } else {

  }
  break;
  case 4U: 
  tmp___3 = TIFFGetField(in, (ttag_t )tag, & longv);
  if (tmp___3) {
    TIFFSetField(out, (ttag_t )tag, longv);
  } else {

  }
  break;
  case 5U: 
  if ((int )count == 1) {
    tmp___4 = TIFFGetField(in, (ttag_t )tag, & floatv);
    if (tmp___4) {
      TIFFSetField(out, (ttag_t )tag, (double )floatv);
    } else {

    }
  } else
  if ((int )count == 65535) {
    tmp___5 = TIFFGetField(in, (ttag_t )tag, & floatav);
    if (tmp___5) {
      TIFFSetField(out, (ttag_t )tag, floatav);
    } else {

    }
  } else {

  }
  break;
  case 2U: 
  tmp___6 = TIFFGetField(in, (ttag_t )tag, & stringv);
  if (tmp___6) {
    TIFFSetField(out, (ttag_t )tag, stringv);
  } else {

  }
  break;
  case 12U: 
  if ((int )count == 1) {
    tmp___7 = TIFFGetField(in, (ttag_t )tag, & doublev);
    if (tmp___7) {
      TIFFSetField(out, (ttag_t )tag, doublev);
    } else {

    }
  } else
  if ((int )count == 65535) {
    tmp___8 = TIFFGetField(in, (ttag_t )tag, & doubleav);
    if (tmp___8) {
      TIFFSetField(out, (ttag_t )tag, doubleav);
    } else {

    }
  } else {

  }
  break;
  default: 
  tmp___9 = TIFFFileName(in);
  TIFFError(tmp___9, "Data type %d is not supported, tag %d skipped.",
            (int )tag, (unsigned int )type);
  }
  return;
}
}
static struct cpTag tags[33]  = 
  {      {(uint16 )254, (uint16 )1, (TIFFDataType )4}, 
        {(uint16 )263, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )269, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )270, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )271, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )272, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )280, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )281, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )282, (uint16 )1, (TIFFDataType )5}, 
        {(uint16 )283, (uint16 )1, (TIFFDataType )5}, 
        {(uint16 )285, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )286, (uint16 )1, (TIFFDataType )5}, 
        {(uint16 )287, (uint16 )1, (TIFFDataType )5}, 
        {(uint16 )296, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )305, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )306, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )315, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )316, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )318, (uint16 )-1, (TIFFDataType )5}, 
        {(uint16 )319, (uint16 )-1, (TIFFDataType )5}, 
        {(uint16 )321, (uint16 )2, (TIFFDataType )3}, 
        {(uint16 )332, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )336, (uint16 )2, (TIFFDataType )3}, 
        {(uint16 )337, (uint16 )1, (TIFFDataType )2}, 
        {(uint16 )339, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )529, (uint16 )-1, (TIFFDataType )5}, 
        {(uint16 )530, (uint16 )2, (TIFFDataType )3}, 
        {(uint16 )531, (uint16 )1, (TIFFDataType )3}, 
        {(uint16 )532, (uint16 )-1, (TIFFDataType )5}, 
        {(uint16 )338, (uint16 )-1, (TIFFDataType )3}, 
        {(uint16 )340, (uint16 )1, (TIFFDataType )12}, 
        {(uint16 )341, (uint16 )1, (TIFFDataType )12}, 
        {(uint16 )37439, (uint16 )1, (TIFFDataType )12}};
static copyFunc pickCopyFunc(TIFF *in , TIFF *out , uint16 bitspersample ,
                             uint16 samplesperpixel ) ;
static int tiffcp(TIFF *in , TIFF *out ) 
{ 
  uint16 bitspersample ;
  uint16 samplesperpixel ;
  int (*cf)(TIFF *in , TIFF *out , uint32 l , uint32 w , uint16 samplesperpixel ) ;
  uint32 width ;
  uint32 length ;
  struct cpTag *p ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  uint16 input_compression ;
  uint16 input_photometric ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  uint32 len32 ;
  void **data ;
  int tmp___13 ;
  uint16 ninks ;
  char const   *inknames ;
  int inknameslen ;
  size_t tmp___14 ;
  char const   *cp ;
  void *tmp___15 ;
  char *tmp___16 ;
  size_t tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  unsigned short pg0 ;
  unsigned short pg1 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;

  {
  tmp = TIFFGetField(in, (ttag_t )256, & width);
  if (tmp) {
    TIFFSetField(out, (ttag_t )256, width);
  } else {

  }
  tmp___0 = TIFFGetField(in, (ttag_t )257, & length);
  if (tmp___0) {
    TIFFSetField(out, (ttag_t )257, length);
  } else {

  }
  tmp___1 = TIFFGetField(in, (ttag_t )258, & bitspersample);
  if (tmp___1) {
    TIFFSetField(out, (ttag_t )258, (int )bitspersample);
  } else {

  }
  tmp___2 = TIFFGetField(in, (ttag_t )277, & samplesperpixel);
  if (tmp___2) {
    TIFFSetField(out, (ttag_t )277, (int )samplesperpixel);
  } else {

  }
  if ((int )compression != 65535) {
    TIFFSetField(out, (ttag_t )259, (int )compression);
  } else {
    tmp___3 = TIFFGetField(in, (ttag_t )259, & compression);
    if (tmp___3) {
      TIFFSetField(out, (ttag_t )259, (int )compression);
    } else {

    }
  }
  if ((int )compression == 7) {
    tmp___4 = TIFFGetField(in, (ttag_t )259, & input_compression);
    if (tmp___4) {
      if ((int )input_compression == 7) {
        TIFFSetField(in, (ttag_t )65538, 1);
      } else {

      }
    } else {

    }
    tmp___5 = TIFFGetField(in, (ttag_t )262, & input_photometric);
    if (tmp___5) {
      if ((int )input_photometric == 2) {
        if (jpegcolormode == 1) {
          TIFFSetField(out, (ttag_t )262, 6);
        } else {
          TIFFSetField(out, (ttag_t )262, 2);
        }
      } else {
        TIFFSetField(out, (ttag_t )262, (int )input_photometric);
      }
    } else {

    }
  } else
  if ((int )compression == 34676) {
    goto _L;
  } else
  if ((int )compression == 34677) {
    _L: /* CIL Label */ 
    if ((int )samplesperpixel == 1) {
      tmp___6 = 32844;
    } else {
      tmp___6 = 32845;
    }
    TIFFSetField(out, (ttag_t )262, tmp___6);
  } else {
    cpTag(in, out, (uint16 )262, (uint16 )1, (TIFFDataType )3);
  }
  if ((int )fillorder != 0) {
    TIFFSetField(out, (ttag_t )266, (int )fillorder);
  } else {
    cpTag(in, out, (uint16 )266, (uint16 )1, (TIFFDataType )3);
  }
  TIFFGetFieldDefaulted(in, (ttag_t )274, & orientation);
  switch ((int )orientation) {
  case 7: 
  case 3: 
  tmp___7 = TIFFFileName(in);
  TIFFWarning(tmp___7, "using bottom-left orientation");
  orientation = (uint16 )4;
  case 4: 
  case 8: 
  break;
  default: 
  case 6: 
  case 2: 
  tmp___8 = TIFFFileName(in);
  TIFFWarning(tmp___8, "using top-left orientation");
  orientation = (uint16 )1;
  case 1: 
  case 5: 
  break;
  }
  TIFFSetField(out, (ttag_t )274, (int )orientation);
  if (outtiled == -1) {
    outtiled = TIFFIsTiled(in);
  } else {

  }
  if (outtiled) {
    if (tilewidth == 4294967295U) {
      TIFFGetField(in, (ttag_t )322, & tilewidth);
    } else {

    }
    if (tilelength == 4294967295U) {
      TIFFGetField(in, (ttag_t )323, & tilelength);
    } else {

    }
    TIFFDefaultTileSize(out, & tilewidth, & tilelength);
    TIFFSetField(out, (ttag_t )322, tilewidth);
    TIFFSetField(out, (ttag_t )323, tilelength);
  } else {
    if (rowsperstrip == 0U) {
      tmp___9 = TIFFGetField(in, (ttag_t )278, & rowsperstrip);
      if (tmp___9) {

      } else {
        rowsperstrip = TIFFDefaultStripSize(out, rowsperstrip);
      }
    } else
    if (rowsperstrip == 4294967295U) {
      rowsperstrip = length;
    } else {

    }
    TIFFSetField(out, (ttag_t )278, rowsperstrip);
  }
  if ((int )config != 65535) {
    TIFFSetField(out, (ttag_t )284, (int )config);
  } else {
    tmp___10 = TIFFGetField(in, (ttag_t )284, & config);
    if (tmp___10) {
      TIFFSetField(out, (ttag_t )284, (int )config);
    } else {

    }
  }
  if ((int )samplesperpixel <= 4) {
    cpTag(in, out, (uint16 )301, (uint16 )4, (TIFFDataType )3);
  } else {

  }
  cpTag(in, out, (uint16 )320, (uint16 )4, (TIFFDataType )3);
  switch ((int )compression) {
  case 7: 
  TIFFSetField(out, (ttag_t )65537, quality);
  TIFFSetField(out, (ttag_t )65538, jpegcolormode);
  break;
  case 32946: 
  case 8: 
  case 5: 
  if ((int )predictor != 65535) {
    TIFFSetField(out, (ttag_t )317, (int )predictor);
  } else {
    tmp___11 = TIFFGetField(in, (ttag_t )317, & predictor);
    if (tmp___11) {
      TIFFSetField(out, (ttag_t )317, (int )predictor);
    } else {

    }
  }
  break;
  case 4: 
  case 3: 
  if ((int )compression == 3) {
    if (g3opts != 4294967295U) {
      TIFFSetField(out, (ttag_t )292, g3opts);
    } else {
      tmp___12 = TIFFGetField(in, (ttag_t )292, & g3opts);
      if (tmp___12) {
        TIFFSetField(out, (ttag_t )292, g3opts);
      } else {

      }
    }
  } else {
    cpTag(in, out, (uint16 )293, (uint16 )1, (TIFFDataType )4);
  }
  cpTag(in, out, (uint16 )326, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )327, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )328, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34908, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34910, (uint16 )1, (TIFFDataType )4);
  cpTag(in, out, (uint16 )34909, (uint16 )1, (TIFFDataType )2);
  break;
  }
  tmp___13 = TIFFGetField(in, (ttag_t )34675, & len32, & data);
  if (tmp___13) {
    TIFFSetField(out, (ttag_t )34675, len32, data);
  } else {

  }
  tmp___19 = TIFFGetField(in, (ttag_t )334, & ninks);
  if (tmp___19) {
    TIFFSetField(out, (ttag_t )334, (int )ninks);
    tmp___18 = TIFFGetField(in, (ttag_t )333, & inknames);
    if (tmp___18) {
      tmp___14 = strlen(inknames);
      inknameslen = (int )(tmp___14 + 1U);
      cp = inknames;
      while ((int )ninks > 1) {
        tmp___15 = __rawmemchr((void const   *)cp, '\000');
        cp = (char const   *)((char *)tmp___15);
        if (cp) {
          cp ++;
          tmp___17 = strlen(cp);
          inknameslen = (int )((size_t )inknameslen + (tmp___17 + 1U));
        } else {

        }
        ninks = (uint16 )((int )ninks - 1);
      }
      TIFFSetField(out, (ttag_t )333, inknameslen, inknames);
    } else {

    }
  } else {

  }
  tmp___21 = TIFFGetField(in, (ttag_t )297, & pg0, & pg1);
  if (tmp___21) {
    if (pageNum < 0) {
      TIFFSetField(out, (ttag_t )297, (int )pg0, (int )pg1);
    } else {
      tmp___20 = pageNum;
      pageNum ++;
      TIFFSetField(out, (ttag_t )297, tmp___20, 0);
    }
  } else {

  }
  p = tags;
  while ((unsigned long )p < (unsigned long )(& tags[sizeof(tags) / sizeof(tags[0])])) {
    cpTag(in, out, p->tag, p->count, p->type);
    p ++;
  }
  cf = pickCopyFunc(in, out, bitspersample, samplesperpixel);
  if (cf) {
    tmp___22 = (*cf)(in, out, length, width, samplesperpixel);
    tmp___23 = tmp___22;
  } else {
    tmp___23 = 0;
  }
  return (tmp___23);
}
}
static int cpContig2ContigByRow(TIFF *in , TIFF *out , uint32 imagelength ,
                                uint32 imagewidth , tsample_t spp ) 
{ 
  tdata_t buf ;
  tsize_t tmp ;
  tdata_t tmp___0 ;
  uint32 row ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = TIFFScanlineSize(in);
  tmp___0 = _TIFFmalloc(tmp);
  buf = tmp___0;
  row = (uint32 )0;
  while (row < imagelength) {
    tmp___1 = TIFFReadScanline(in, buf, row, (tsample_t )0);
    if (tmp___1 < 0) {
      if (! ignore) {
        goto bad;
      } else {

      }
    } else {

    }
    tmp___2 = TIFFWriteScanline(out, buf, row, (tsample_t )0);
    if (tmp___2 < 0) {
      goto bad;
    } else {

    }
    row ++;
  }
  _TIFFfree(buf);
  return (1);
  bad: 
  _TIFFfree(buf);
  return (0);
}
}
static void subtract8(void *i , void *b , uint32 pixels ) 
{ 
  uint8 *image ;
  uint8 *bias___0 ;
  uint32 tmp ;

  {
  image = (uint8 *)i;
  bias___0 = (uint8 *)b;
  while (1) {
    tmp = pixels;
    pixels --;
    if (tmp) {

    } else {
      break;
    }
    if ((int )*image > (int )*bias___0) {
      *image = (uint8 )((int )*image - (int )*bias___0);
    } else {
      *image = (uint8 )0;
    }
    image ++;
    bias___0 ++;
  }
  return;
}
}
static void subtract16(void *i , void *b , uint32 pixels ) 
{ 
  uint16 *image ;
  uint16 *bias___0 ;
  uint32 tmp ;

  {
  image = (uint16 *)i;
  bias___0 = (uint16 *)b;
  while (1) {
    tmp = pixels;
    pixels --;
    if (tmp) {

    } else {
      break;
    }
    if ((int )*image > (int )*bias___0) {
      *image = (uint16 )((int )*image - (int )*bias___0);
    } else {
      *image = (uint16 )0;
    }
    image ++;
    bias___0 ++;
  }
  return;
}
}
static void subtract32(void *i , void *b , uint32 pixels ) 
{ 
  uint32 *image ;
  uint32 *bias___0 ;
  uint32 tmp ;

  {
  image = (uint32 *)i;
  bias___0 = (uint32 *)b;
  while (1) {
    tmp = pixels;
    pixels --;
    if (tmp) {

    } else {
      break;
    }
    if (*image > *bias___0) {
      *image -= *bias___0;
    } else {
      *image = (uint32 )0;
    }
    image ++;
    bias___0 ++;
  }
  return;
}
}
static biasFn *lineSubtractFn(unsigned int bits ) 
{ 


  {
  switch (bits) {
  case 8U: 
  return (& subtract8);
  case 16U: 
  return (& subtract16);
  case 32U: 
  return (& subtract32);
  }
  return ((biasFn *)((void *)0));
}
}
static int cpBiasedContig2Contig(TIFF *in , TIFF *out , uint32 imagelength ,
                                 uint32 imagewidth , tsample_t spp ) 
{ 
  tsize_t biasSize ;
  tsize_t tmp ;
  tsize_t bufSize ;
  tsize_t tmp___0 ;
  tdata_t buf ;
  tdata_t biasBuf ;
  uint32 biasWidth ;
  uint32 biasLength ;
  uint16 sampleBits ;
  biasFn *subtractLine ;
  uint32 row ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  tdir_t tmp___4 ;
  tdir_t tmp___5 ;
  char const   *tmp___6 ;
  tdir_t tmp___7 ;
  char const   *tmp___8 ;
  tdir_t tmp___9 ;
  char const   *tmp___10 ;

  {
  if ((int )spp == 1) {
    tmp = TIFFScanlineSize(bias);
    biasSize = tmp;
    tmp___0 = TIFFScanlineSize(in);
    bufSize = tmp___0;
    biasWidth = (uint32 )0;
    biasLength = (uint32 )0;
    TIFFGetField(bias, (ttag_t )256, & biasWidth);
    TIFFGetField(bias, (ttag_t )257, & biasLength);
    if (biasSize == bufSize) {
      if (imagelength == biasLength) {
        if (imagewidth == biasWidth) {
          sampleBits = (uint16 )0;
          TIFFGetField(in, (ttag_t )258, & sampleBits);
          subtractLine = lineSubtractFn((unsigned int )sampleBits);
          if (subtractLine) {
            buf = _TIFFmalloc(bufSize);
            biasBuf = _TIFFmalloc(bufSize);
            row = (uint32 )0;
            while (row < imagelength) {
              tmp___1 = TIFFReadScanline(in, buf, row, (tsample_t )0);
              if (tmp___1 < 0) {
                if (! ignore) {
                  goto bad;
                } else {

                }
              } else {

              }
              tmp___2 = TIFFReadScanline(bias, biasBuf, row, (tsample_t )0);
              if (tmp___2 < 0) {
                if (! ignore) {
                  goto bad;
                } else {

                }
              } else {

              }
              (*subtractLine)(buf, biasBuf, imagewidth);
              tmp___3 = TIFFWriteScanline(out, buf, row, (tsample_t )0);
              if (tmp___3 < 0) {
                goto bad;
              } else {

              }
              row ++;
            }
            _TIFFfree(buf);
            _TIFFfree(biasBuf);
            tmp___4 = TIFFCurrentDirectory(bias);
            TIFFSetDirectory(bias, tmp___4);
            return (1);
            bad: 
            _TIFFfree(buf);
            _TIFFfree(biasBuf);
            return (0);
          } else {
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"No support for biasing %d bit pixels\n",
                    (int )sampleBits);
            return (0);
          }
        } else {

        }
      } else {

      }
    } else {

    }
    tmp___5 = TIFFCurrentDirectory(in);
    tmp___6 = TIFFFileName(in);
    tmp___7 = TIFFCurrentDirectory(bias);
    tmp___8 = TIFFFileName(bias);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Bias image %s,%d\nis not the same size as %s,%d\n",
            tmp___8, (int )tmp___7, tmp___6, (int )tmp___5);
    return (0);
  } else {
    tmp___9 = TIFFCurrentDirectory(in);
    tmp___10 = TIFFFileName(in);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Can\'t bias %s,%d as it has >1 Sample/Pixel\n",
            tmp___10, (int )tmp___9);
    return (0);
  }
}
}
static int cpDecodedStrips(TIFF *in , TIFF *out , uint32 imagelength ,
                           uint32 imagewidth , tsample_t spp ) 
{ 
  tsize_t stripsize ;
  tsize_t tmp ;
  tdata_t buf ;
  tdata_t tmp___0 ;
  tstrip_t s ;
  tstrip_t ns ;
  tstrip_t tmp___1 ;
  uint32 row ;
  tsize_t cc ;
  tsize_t tmp___2 ;
  tsize_t tmp___3 ;
  tsize_t tmp___4 ;
  tsize_t tmp___5 ;

  {
  tmp = TIFFStripSize(in);
  stripsize = tmp;
  tmp___0 = _TIFFmalloc(stripsize);
  buf = tmp___0;
  if (buf) {
    tmp___1 = TIFFNumberOfStrips(in);
    ns = tmp___1;
    row = (uint32 )0;
    s = (tstrip_t )0;
    while (s < ns) {
      if (row + rowsperstrip > imagelength) {
        tmp___2 = TIFFVStripSize(in, imagelength - row);
        tmp___3 = tmp___2;
      } else {
        tmp___3 = stripsize;
      }
      cc = tmp___3;
      tmp___4 = TIFFReadEncodedStrip(in, s, buf, cc);
      if (tmp___4 < 0) {
        if (! ignore) {
          goto bad;
        } else {

        }
      } else {

      }
      tmp___5 = TIFFWriteEncodedStrip(out, s, buf, cc);
      if (tmp___5 < 0) {
        goto bad;
      } else {

      }
      row += rowsperstrip;
      s ++;
    }
    _TIFFfree(buf);
    return (1);
  } else {

  }
  return (0);
  bad: 
  _TIFFfree(buf);
  return (0);
}
}
static int cpSeparate2SeparateByRow(TIFF *in , TIFF *out , uint32 imagelength ,
                                    uint32 imagewidth , tsample_t spp ) 
{ 
  tdata_t buf ;
  tsize_t tmp ;
  tdata_t tmp___0 ;
  uint32 row ;
  tsample_t s ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = TIFFScanlineSize(in);
  tmp___0 = _TIFFmalloc(tmp);
  buf = tmp___0;
  s = (tsample_t )0;
  while ((int )s < (int )spp) {
    row = (uint32 )0;
    while (row < imagelength) {
      tmp___1 = TIFFReadScanline(in, buf, row, s);
      if (tmp___1 < 0) {
        if (! ignore) {
          goto bad;
        } else {

        }
      } else {

      }
      tmp___2 = TIFFWriteScanline(out, buf, row, s);
      if (tmp___2 < 0) {
        goto bad;
      } else {

      }
      row ++;
    }
    s = (tsample_t )((int )s + 1);
  }
  _TIFFfree(buf);
  return (1);
  bad: 
  _TIFFfree(buf);
  return (0);
}
}
static int cpContig2SeparateByRow(TIFF *in , TIFF *out , uint32 imagelength ,
                                  uint32 imagewidth , tsample_t spp ) 
{ 
  tdata_t inbuf ;
  tsize_t tmp ;
  tdata_t tmp___0 ;
  tdata_t outbuf ;
  tsize_t tmp___1 ;
  tdata_t tmp___2 ;
  register uint8 *inp ;
  register uint8 *outp ;
  register uint32 n ;
  uint32 row ;
  tsample_t s ;
  int tmp___3 ;
  uint8 *tmp___4 ;
  uint32 tmp___5 ;
  int tmp___6 ;

  {
  tmp = TIFFScanlineSize(in);
  tmp___0 = _TIFFmalloc(tmp);
  inbuf = tmp___0;
  tmp___1 = TIFFScanlineSize(out);
  tmp___2 = _TIFFmalloc(tmp___1);
  outbuf = tmp___2;
  s = (tsample_t )0;
  while ((int )s < (int )spp) {
    row = (uint32 )0;
    while (row < imagelength) {
      tmp___3 = TIFFReadScanline(in, inbuf, row, (tsample_t )0);
      if (tmp___3 < 0) {
        if (! ignore) {
          goto bad;
        } else {

        }
      } else {

      }
      inp = (uint8 *)inbuf + (int )s;
      outp = (uint8 *)outbuf;
      n = imagewidth;
      while (1) {
        tmp___5 = n;
        n --;
        if (tmp___5 > 0U) {

        } else {
          break;
        }
        tmp___4 = outp;
        outp ++;
        *tmp___4 = *inp;
        inp += (int )spp;
      }
      tmp___6 = TIFFWriteScanline(out, outbuf, row, s);
      if (tmp___6 < 0) {
        goto bad;
      } else {

      }
      row ++;
    }
    s = (tsample_t )((int )s + 1);
  }
  if (inbuf) {
    _TIFFfree(inbuf);
  } else {

  }
  if (outbuf) {
    _TIFFfree(outbuf);
  } else {

  }
  return (1);
  bad: 
  if (inbuf) {
    _TIFFfree(inbuf);
  } else {

  }
  if (outbuf) {
    _TIFFfree(outbuf);
  } else {

  }
  return (0);
}
}
static int cpSeparate2ContigByRow(TIFF *in , TIFF *out , uint32 imagelength ,
                                  uint32 imagewidth , tsample_t spp ) 
{ 
  tdata_t inbuf ;
  tsize_t tmp ;
  tdata_t tmp___0 ;
  tdata_t outbuf ;
  tsize_t tmp___1 ;
  tdata_t tmp___2 ;
  register uint8 *inp ;
  register uint8 *outp ;
  register uint32 n ;
  uint32 row ;
  tsample_t s ;
  int tmp___3 ;
  uint8 *tmp___4 ;
  uint32 tmp___5 ;
  int tmp___6 ;

  {
  tmp = TIFFScanlineSize(in);
  tmp___0 = _TIFFmalloc(tmp);
  inbuf = tmp___0;
  tmp___1 = TIFFScanlineSize(out);
  tmp___2 = _TIFFmalloc(tmp___1);
  outbuf = tmp___2;
  row = (uint32 )0;
  while (row < imagelength) {
    s = (tsample_t )0;
    while ((int )s < (int )spp) {
      tmp___3 = TIFFReadScanline(in, inbuf, row, s);
      if (tmp___3 < 0) {
        if (! ignore) {
          goto bad;
        } else {

        }
      } else {

      }
      inp = (uint8 *)inbuf;
      outp = (uint8 *)outbuf + (int )s;
      n = imagewidth;
      while (1) {
        tmp___5 = n;
        n --;
        if (tmp___5 > 0U) {

        } else {
          break;
        }
        tmp___4 = inp;
        inp ++;
        *outp = *tmp___4;
        outp += (int )spp;
      }
      s = (tsample_t )((int )s + 1);
    }
    tmp___6 = TIFFWriteScanline(out, outbuf, row, (tsample_t )0);
    if (tmp___6 < 0) {
      goto bad;
    } else {

    }
    row ++;
  }
  if (inbuf) {
    _TIFFfree(inbuf);
  } else {

  }
  if (outbuf) {
    _TIFFfree(outbuf);
  } else {

  }
  return (1);
  bad: 
  if (inbuf) {
    _TIFFfree(inbuf);
  } else {

  }
  if (outbuf) {
    _TIFFfree(outbuf);
  } else {

  }
  return (0);
}
}
static void cpStripToTile(uint8 *out , uint8 *in , uint32 rows , uint32 cols ,
                          int outskew , int inskew ) 
{ 
  uint32 j ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  uint32 tmp___1 ;
  uint32 tmp___2 ;

  {
  while (1) {
    tmp___2 = rows;
    rows --;
    if (tmp___2 > 0U) {

    } else {
      break;
    }
    j = cols;
    while (1) {
      tmp___1 = j;
      j --;
      if (tmp___1 > 0U) {

      } else {
        break;
      }
      tmp = out;
      out ++;
      tmp___0 = in;
      in ++;
      *tmp = *tmp___0;
    }
    out += outskew;
    in += inskew;
  }
  return;
}
}
static void cpContigBufToSeparateBuf(uint8 *out , uint8 *in , uint32 rows ,
                                     uint32 cols , int outskew , int inskew ,
                                     tsample_t spp , int bytes_per_sample ) 
{ 
  uint32 j ;
  int n ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  int tmp___1 ;
  uint32 tmp___2 ;
  uint32 tmp___3 ;

  {
  while (1) {
    tmp___3 = rows;
    rows --;
    if (tmp___3 > 0U) {

    } else {
      break;
    }
    j = cols;
    while (1) {
      tmp___2 = j;
      j --;
      if (tmp___2 > 0U) {

      } else {
        break;
      }
      n = bytes_per_sample;
      while (1) {
        tmp___1 = n;
        n --;
        if (tmp___1) {

        } else {
          break;
        }
        tmp = out;
        out ++;
        tmp___0 = in;
        in ++;
        *tmp = *tmp___0;
      }
      in += ((int )spp - 1) * bytes_per_sample;
    }
    out += outskew;
    in += inskew;
  }
  return;
}
}
static void cpSeparateBufToContigBuf(uint8 *out , uint8 *in , uint32 rows ,
                                     uint32 cols , int outskew , int inskew ,
                                     tsample_t spp , int bytes_per_sample ) 
{ 
  uint32 j ;
  int n ;
  uint8 *tmp ;
  uint8 *tmp___0 ;
  int tmp___1 ;
  uint32 tmp___2 ;
  uint32 tmp___3 ;

  {
  while (1) {
    tmp___3 = rows;
    rows --;
    if (tmp___3 > 0U) {

    } else {
      break;
    }
    j = cols;
    while (1) {
      tmp___2 = j;
      j --;
      if (tmp___2 > 0U) {

      } else {
        break;
      }
      n = bytes_per_sample;
      while (1) {
        tmp___1 = n;
        n --;
        if (tmp___1) {

        } else {
          break;
        }
        tmp = out;
        out ++;
        tmp___0 = in;
        in ++;
        *tmp = *tmp___0;
      }
      out += ((int )spp - 1) * bytes_per_sample;
    }
    out += outskew;
    in += inskew;
  }
  return;
}
}
static int cpImage(TIFF *in , TIFF *out ,
                   int (*fin)(TIFF * , uint8 * , uint32  , uint32  , tsample_t  ) ,
                   int (*fout)(TIFF * , uint8 * , uint32  , uint32  ,
                               tsample_t  ) , uint32 imagelength ,
                   uint32 imagewidth , tsample_t spp ) 
{ 
  int status ;
  tdata_t buf ;
  tsize_t tmp ;
  tdata_t tmp___0 ;
  int tmp___1 ;

  {
  status = 0;
  tmp = TIFFRasterScanlineSize(in);
  tmp___0 = _TIFFmalloc((tsize_t )((uint32 )tmp * imagelength));
  buf = tmp___0;
  if (buf) {
    tmp___1 = (*fin)(in, (uint8 *)buf, imagelength, imagewidth, spp);
    if (tmp___1) {
      status = (*fout)(out, (uint8 *)buf, imagelength, imagewidth, spp);
    } else {

    }
    _TIFFfree(buf);
  } else {

  }
  return (status);
}
}
static int readContigStripsIntoBuffer(TIFF *in , uint8 *buf ,
                                      uint32 imagelength , uint32 imagewidth ,
                                      tsample_t spp ) 
{ 
  tsize_t scanlinesize ;
  tsize_t tmp ;
  uint8 *bufp ;
  uint32 row ;
  int tmp___0 ;

  {
  tmp = TIFFScanlineSize(in);
  scanlinesize = tmp;
  bufp = buf;
  row = (uint32 )0;
  while (row < imagelength) {
    tmp___0 = TIFFReadScanline(in, (tdata_t )bufp, row, (tsample_t )0);
    if (tmp___0 < 0) {
      if (! ignore) {
        return (0);
      } else {

      }
    } else {

    }
    bufp += scanlinesize;
    row ++;
  }
  return (1);
}
}
static int readSeparateStripsIntoBuffer(TIFF *in , uint8 *buf ,
                                        uint32 imagelength , uint32 imagewidth ,
                                        tsample_t spp ) 
{ 
  int status ;
  tsize_t scanlinesize ;
  tsize_t tmp ;
  tdata_t scanline ;
  tdata_t tmp___0 ;
  uint8 *bufp ;
  uint32 row ;
  tsample_t s ;
  uint8 *bp ;
  tsize_t n ;
  uint8 *sbuf ;
  int tmp___1 ;
  uint8 *tmp___2 ;
  tsize_t tmp___3 ;

  {
  status = 1;
  tmp = TIFFScanlineSize(in);
  scanlinesize = tmp;
  tmp___0 = _TIFFmalloc(scanlinesize);
  scanline = tmp___0;
  if (! scanlinesize) {
    return (0);
  } else {

  }
  if (scanline) {
    bufp = buf;
    row = (uint32 )0;
    while (row < imagelength) {
      s = (tsample_t )0;
      while ((int )s < (int )spp) {
        bp = bufp + (int )s;
        n = scanlinesize;
        sbuf = (uint8 *)scanline;
        tmp___1 = TIFFReadScanline(in, scanline, row, s);
        if (tmp___1 < 0) {
          if (! ignore) {
            status = 0;
            goto done;
          } else {

          }
        } else {

        }
        while (1) {
          tmp___3 = n;
          n --;
          if (tmp___3 > 0) {

          } else {
            break;
          }
          tmp___2 = sbuf;
          sbuf ++;
          *bp = *tmp___2;
          bp += (int )spp;
        }
        s = (tsample_t )((int )s + 1);
      }
      bufp += scanlinesize * (tsize_t )spp;
      row ++;
    }
    done: 
    _TIFFfree(scanline);
    return (status);
  } else {

  }
  return (0);
}
}
static int readContigTilesIntoBuffer(TIFF *in , uint8 *buf ,
                                     uint32 imagelength , uint32 imagewidth ,
                                     tsample_t spp ) 
{ 
  int status ;
  tdata_t tilebuf ;
  tsize_t tmp ;
  tdata_t tmp___0 ;
  uint32 imagew ;
  tsize_t tmp___1 ;
  uint32 tilew ;
  tsize_t tmp___2 ;
  int iskew ;
  uint8 *bufp ;
  uint32 tw ;
  uint32 tl ;
  uint32 row ;
  uint32 nrow ;
  uint32 tmp___3 ;
  uint32 colb ;
  uint32 col ;
  tsize_t tmp___4 ;
  uint32 width ;
  uint32 oskew ;

  {
  status = 1;
  tmp = TIFFTileSize(in);
  tmp___0 = _TIFFmalloc(tmp);
  tilebuf = tmp___0;
  tmp___1 = TIFFScanlineSize(in);
  imagew = (uint32 )tmp___1;
  tmp___2 = TIFFTileRowSize(in);
  tilew = (uint32 )tmp___2;
  iskew = (int )(imagew - tilew);
  bufp = buf;
  if ((unsigned long )tilebuf == (unsigned long )((tdata_t )0)) {
    return (0);
  } else {

  }
  TIFFGetField(in, (ttag_t )322, & tw);
  TIFFGetField(in, (ttag_t )323, & tl);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + tl > imagelength) {
      tmp___3 = imagelength - row;
    } else {
      tmp___3 = tl;
    }
    nrow = tmp___3;
    colb = (uint32 )0;
    col = (uint32 )0;
    while (col < imagewidth) {
      tmp___4 = TIFFReadTile(in, tilebuf, col, row, (uint32 )0, (tsample_t )0);
      if (tmp___4 < 0) {
        if (! ignore) {
          status = 0;
          goto done;
        } else {

        }
      } else {

      }
      if (colb + tilew > imagew) {
        width = imagew - colb;
        oskew = tilew - width;
        cpStripToTile(bufp + colb, (uint8 *)tilebuf, nrow, width,
                      (int )(oskew + (uint32 )iskew), (int )oskew);
      } else {
        cpStripToTile(bufp + colb, (uint8 *)tilebuf, nrow, tilew, iskew, 0);
      }
      colb += tilew;
      col += tw;
    }
    bufp += imagew * nrow;
    row += tl;
  }
  done: 
  _TIFFfree(tilebuf);
  return (status);
}
}
static int readSeparateTilesIntoBuffer(TIFF *in , uint8 *buf ,
                                       uint32 imagelength , uint32 imagewidth ,
                                       tsample_t spp ) 
{ 
  int status ;
  uint32 imagew ;
  tsize_t tmp ;
  uint32 tilew ;
  tsize_t tmp___0 ;
  int iskew ;
  tdata_t tilebuf ;
  tsize_t tmp___1 ;
  tdata_t tmp___2 ;
  uint8 *bufp ;
  uint32 tw ;
  uint32 tl ;
  uint32 row ;
  uint16 bps ;
  uint16 bytes_per_sample ;
  uint32 nrow ;
  uint32 tmp___3 ;
  uint32 colb ;
  uint32 col ;
  tsample_t s ;
  tsize_t tmp___4 ;
  uint32 width ;
  int oskew ;

  {
  status = 1;
  tmp = TIFFRasterScanlineSize(in);
  imagew = (uint32 )tmp;
  tmp___0 = TIFFTileRowSize(in);
  tilew = (uint32 )tmp___0;
  iskew = (int )(imagew - tilew * (uint32 )spp);
  tmp___1 = TIFFTileSize(in);
  tmp___2 = _TIFFmalloc(tmp___1);
  tilebuf = tmp___2;
  bufp = buf;
  if ((unsigned long )tilebuf == (unsigned long )((tdata_t )0)) {
    return (0);
  } else {

  }
  TIFFGetField(in, (ttag_t )322, & tw);
  TIFFGetField(in, (ttag_t )323, & tl);
  TIFFGetField(in, (ttag_t )258, & bps);
  if ((int )bps % 8 == 0) {

  } else {
    __assert_fail("bps % 8 == 0", "tiffcp.c", 1163U,
                  "readSeparateTilesIntoBuffer");
  }
  bytes_per_sample = (uint16 )((int )bps / 8);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + tl > imagelength) {
      tmp___3 = imagelength - row;
    } else {
      tmp___3 = tl;
    }
    nrow = tmp___3;
    colb = (uint32 )0;
    col = (uint32 )0;
    while (col < imagewidth) {
      s = (tsample_t )0;
      while ((int )s < (int )spp) {
        tmp___4 = TIFFReadTile(in, tilebuf, col, row, (uint32 )0, s);
        if (tmp___4 < 0) {
          if (! ignore) {
            status = 0;
            goto done;
          } else {

          }
        } else {

        }
        if (colb + tilew * (uint32 )spp > imagew) {
          width = imagew - colb;
          oskew = (int )(tilew * (uint32 )spp - width);
          cpSeparateBufToContigBuf((bufp + colb) + (int )s * (int )bytes_per_sample,
                                   (uint8 *)tilebuf, nrow,
                                   width / (uint32 )((int )spp * (int )bytes_per_sample),
                                   oskew + iskew, oskew / (int )spp, spp,
                                   (int )bytes_per_sample);
        } else {
          cpSeparateBufToContigBuf((bufp + colb) + (int )s * (int )bytes_per_sample,
                                   (uint8 *)tilebuf, nrow, tw, iskew, 0, spp,
                                   (int )bytes_per_sample);
        }
        s = (tsample_t )((int )s + 1);
      }
      colb += tilew * (uint32 )spp;
      col += tw;
    }
    bufp += imagew * nrow;
    row += tl;
  }
  done: 
  _TIFFfree(tilebuf);
  return (status);
}
}
static int writeBufferToContigStrips(TIFF *out , uint8 *buf ,
                                     uint32 imagelength , uint32 imagewidth ,
                                     tsample_t spp ) 
{ 
  uint32 row ;
  uint32 rowsperstrip___0 ;
  tstrip_t strip ;
  uint32 nrows ;
  uint32 tmp ;
  tsize_t stripsize ;
  tsize_t tmp___0 ;
  tstrip_t tmp___1 ;
  tsize_t tmp___2 ;

  {
  strip = (tstrip_t )0;
  TIFFGetFieldDefaulted(out, (ttag_t )278, & rowsperstrip___0);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + rowsperstrip___0 > imagelength) {
      tmp = imagelength - row;
    } else {
      tmp = rowsperstrip___0;
    }
    nrows = tmp;
    tmp___0 = TIFFVStripSize(out, nrows);
    stripsize = tmp___0;
    tmp___1 = strip;
    strip ++;
    tmp___2 = TIFFWriteEncodedStrip(out, tmp___1, (tdata_t )buf, stripsize);
    if (tmp___2 < 0) {
      return (0);
    } else {

    }
    buf += stripsize;
    row += rowsperstrip___0;
  }
  return (1);
}
}
static int writeBufferToSeparateStrips(TIFF *out , uint8 *buf ,
                                       uint32 imagelength , uint32 imagewidth ,
                                       tsample_t spp ) 
{ 
  uint32 rowsize ;
  uint32 rowsperstrip___0 ;
  tdata_t obuf ;
  tsize_t tmp ;
  tdata_t tmp___0 ;
  tstrip_t strip ;
  tsample_t s ;
  uint32 row ;
  uint32 nrows ;
  uint32 tmp___1 ;
  tsize_t stripsize ;
  tsize_t tmp___2 ;
  tstrip_t tmp___3 ;
  tsize_t tmp___4 ;

  {
  rowsize = imagewidth * (uint32 )spp;
  tmp = TIFFStripSize(out);
  tmp___0 = _TIFFmalloc(tmp);
  obuf = tmp___0;
  strip = (tstrip_t )0;
  if ((unsigned long )obuf == (unsigned long )((void *)0)) {
    return (0);
  } else {

  }
  TIFFGetFieldDefaulted(out, (ttag_t )278, & rowsperstrip___0);
  s = (tsample_t )0;
  while ((int )s < (int )spp) {
    row = (uint32 )0;
    while (row < imagelength) {
      if (row + rowsperstrip___0 > imagelength) {
        tmp___1 = imagelength - row;
      } else {
        tmp___1 = rowsperstrip___0;
      }
      nrows = tmp___1;
      tmp___2 = TIFFVStripSize(out, nrows);
      stripsize = tmp___2;
      cpContigBufToSeparateBuf((uint8 *)obuf, (buf + row * rowsize) + (int )s,
                               nrows, imagewidth, 0, 0, spp, 1);
      tmp___3 = strip;
      strip ++;
      tmp___4 = TIFFWriteEncodedStrip(out, tmp___3, obuf, stripsize);
      if (tmp___4 < 0) {
        _TIFFfree(obuf);
        return (0);
      } else {

      }
      row += rowsperstrip___0;
    }
    s = (tsample_t )((int )s + 1);
  }
  _TIFFfree(obuf);
  return (1);
}
}
static int writeBufferToContigTiles(TIFF *out , uint8 *buf ,
                                    uint32 imagelength , uint32 imagewidth ,
                                    tsample_t spp ) 
{ 
  uint32 imagew ;
  tsize_t tmp ;
  uint32 tilew ;
  tsize_t tmp___0 ;
  int iskew ;
  tdata_t obuf ;
  tsize_t tmp___1 ;
  tdata_t tmp___2 ;
  uint8 *bufp ;
  uint32 tl ;
  uint32 tw ;
  uint32 row ;
  uint32 nrow ;
  uint32 tmp___3 ;
  uint32 colb ;
  uint32 col ;
  uint32 width ;
  int oskew ;
  tsize_t tmp___4 ;

  {
  tmp = TIFFScanlineSize(out);
  imagew = (uint32 )tmp;
  tmp___0 = TIFFTileRowSize(out);
  tilew = (uint32 )tmp___0;
  iskew = (int )(imagew - tilew);
  tmp___1 = TIFFTileSize(out);
  tmp___2 = _TIFFmalloc(tmp___1);
  obuf = tmp___2;
  bufp = buf;
  if ((unsigned long )obuf == (unsigned long )((void *)0)) {
    return (0);
  } else {

  }
  TIFFGetField(out, (ttag_t )323, & tl);
  TIFFGetField(out, (ttag_t )322, & tw);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + tl > imagelength) {
      tmp___3 = imagelength - row;
    } else {
      tmp___3 = tl;
    }
    nrow = tmp___3;
    colb = (uint32 )0;
    col = (uint32 )0;
    while (col < imagewidth) {
      if (colb + tilew > imagew) {
        width = imagew - colb;
        oskew = (int )(tilew - width);
        cpStripToTile((uint8 *)obuf, bufp + colb, nrow, width, oskew,
                      oskew + iskew);
      } else {
        cpStripToTile((uint8 *)obuf, bufp + colb, nrow, tilew, 0, iskew);
      }
      tmp___4 = TIFFWriteTile(out, obuf, col, row, (uint32 )0, (tsample_t )0);
      if (tmp___4 < 0) {
        _TIFFfree(obuf);
        return (0);
      } else {

      }
      colb += tilew;
      col += tw;
    }
    bufp += nrow * imagew;
    row += tilelength;
  }
  _TIFFfree(obuf);
  return (1);
}
}
static int writeBufferToSeparateTiles(TIFF *out , uint8 *buf ,
                                      uint32 imagelength , uint32 imagewidth ,
                                      tsample_t spp ) 
{ 
  uint32 imagew ;
  tsize_t tmp ;
  tsize_t tilew ;
  tsize_t tmp___0 ;
  uint32 iimagew ;
  tsize_t tmp___1 ;
  int iskew ;
  tdata_t obuf ;
  tsize_t tmp___2 ;
  tdata_t tmp___3 ;
  uint8 *bufp ;
  uint32 tl ;
  uint32 tw ;
  uint32 row ;
  uint16 bps ;
  uint16 bytes_per_sample ;
  uint32 nrow ;
  uint32 tmp___4 ;
  uint32 colb ;
  uint32 col ;
  tsample_t s ;
  uint32 width ;
  int oskew ;
  tsize_t tmp___5 ;

  {
  tmp = TIFFScanlineSize(out);
  imagew = (uint32 )tmp;
  tmp___0 = TIFFTileRowSize(out);
  tilew = tmp___0;
  tmp___1 = TIFFRasterScanlineSize(out);
  iimagew = (uint32 )tmp___1;
  iskew = (int )(iimagew - (uint32 )(tilew * (tsize_t )spp));
  tmp___2 = TIFFTileSize(out);
  tmp___3 = _TIFFmalloc(tmp___2);
  obuf = tmp___3;
  bufp = buf;
  if ((unsigned long )obuf == (unsigned long )((void *)0)) {
    return (0);
  } else {

  }
  TIFFGetField(out, (ttag_t )323, & tl);
  TIFFGetField(out, (ttag_t )322, & tw);
  TIFFGetField(out, (ttag_t )258, & bps);
  if ((int )bps % 8 == 0) {

  } else {
    __assert_fail("bps % 8 == 0", "tiffcp.c", 1322U,
                  "writeBufferToSeparateTiles");
  }
  bytes_per_sample = (uint16 )((int )bps / 8);
  row = (uint32 )0;
  while (row < imagelength) {
    if (row + tl > imagelength) {
      tmp___4 = imagelength - row;
    } else {
      tmp___4 = tl;
    }
    nrow = tmp___4;
    colb = (uint32 )0;
    col = (uint32 )0;
    while (col < imagewidth) {
      s = (tsample_t )0;
      while ((int )s < (int )spp) {
        if (colb + (uint32 )tilew > imagew) {
          width = imagew - colb;
          oskew = (int )((uint32 )tilew - width);
          cpContigBufToSeparateBuf((uint8 *)obuf,
                                   (bufp + colb * (uint32 )spp) + (int )s, nrow,
                                   width / (uint32 )bytes_per_sample, oskew,
                                   oskew * (int )spp + iskew, spp,
                                   (int )bytes_per_sample);
        } else {
          cpContigBufToSeparateBuf((uint8 *)obuf,
                                   (bufp + colb * (uint32 )spp) + (int )s, nrow,
                                   tilewidth, 0, iskew, spp,
                                   (int )bytes_per_sample);
        }
        tmp___5 = TIFFWriteTile(out, obuf, col, row, (uint32 )0, s);
        if (tmp___5 < 0) {
          _TIFFfree(obuf);
          return (0);
        } else {

        }
        s = (tsample_t )((int )s + 1);
      }
      colb += (uint32 )tilew;
      col += tw;
    }
    bufp += nrow * iimagew;
    row += tl;
  }
  _TIFFfree(obuf);
  return (1);
}
}
static int cpContigStrips2ContigTiles(TIFF *in , TIFF *out ,
                                      uint32 imagelength , uint32 imagewidth ,
                                      tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readContigStripsIntoBuffer,
                & writeBufferToContigTiles, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpContigStrips2SeparateTiles(TIFF *in , TIFF *out ,
                                        uint32 imagelength , uint32 imagewidth ,
                                        tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readContigStripsIntoBuffer,
                & writeBufferToSeparateTiles, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpSeparateStrips2ContigTiles(TIFF *in , TIFF *out ,
                                        uint32 imagelength , uint32 imagewidth ,
                                        tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readSeparateStripsIntoBuffer,
                & writeBufferToContigTiles, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpSeparateStrips2SeparateTiles(TIFF *in , TIFF *out ,
                                          uint32 imagelength ,
                                          uint32 imagewidth , tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readSeparateStripsIntoBuffer,
                & writeBufferToSeparateTiles, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpContigTiles2ContigTiles(TIFF *in , TIFF *out , uint32 imagelength ,
                                     uint32 imagewidth , tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readContigTilesIntoBuffer,
                & writeBufferToContigTiles, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpContigTiles2SeparateTiles(TIFF *in , TIFF *out ,
                                       uint32 imagelength , uint32 imagewidth ,
                                       tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readContigTilesIntoBuffer,
                & writeBufferToSeparateTiles, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpSeparateTiles2ContigTiles(TIFF *in , TIFF *out ,
                                       uint32 imagelength , uint32 imagewidth ,
                                       tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readSeparateTilesIntoBuffer,
                & writeBufferToContigTiles, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpSeparateTiles2SeparateTiles(TIFF *in , TIFF *out ,
                                         uint32 imagelength ,
                                         uint32 imagewidth , tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readSeparateTilesIntoBuffer,
                & writeBufferToSeparateTiles, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpContigTiles2ContigStrips(TIFF *in , TIFF *out ,
                                      uint32 imagelength , uint32 imagewidth ,
                                      tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readContigTilesIntoBuffer,
                & writeBufferToContigStrips, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpContigTiles2SeparateStrips(TIFF *in , TIFF *out ,
                                        uint32 imagelength , uint32 imagewidth ,
                                        tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readContigTilesIntoBuffer,
                & writeBufferToSeparateStrips, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpSeparateTiles2ContigStrips(TIFF *in , TIFF *out ,
                                        uint32 imagelength , uint32 imagewidth ,
                                        tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readSeparateTilesIntoBuffer,
                & writeBufferToContigStrips, imagelength, imagewidth, spp);
  return (tmp);
}
}
static int cpSeparateTiles2SeparateStrips(TIFF *in , TIFF *out ,
                                          uint32 imagelength ,
                                          uint32 imagewidth , tsample_t spp ) 
{ 
  int tmp ;

  {
  tmp = cpImage(in, out, & readSeparateTilesIntoBuffer,
                & writeBufferToSeparateStrips, imagelength, imagewidth, spp);
  return (tmp);
}
}
static copyFunc pickCopyFunc(TIFF *in , TIFF *out , uint16 bitspersample ,
                             uint16 samplesperpixel ) 
{ 
  uint16 shortv ;
  uint32 w ;
  uint32 l ;
  uint32 tw ;
  uint32 tl ;
  int bychunk ;
  char const   *tmp ;
  uint32 irps ;
  int tmp___0 ;
  char const   *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int (*tmp___11)(TIFF *in , TIFF *out , uint32 imagelength ,
                  uint32 imagewidth , tsample_t spp ) ;
  char const   *tmp___12 ;

  {
  TIFFGetField(in, (ttag_t )284, & shortv);
  if ((int )shortv != (int )config) {
    if ((int )bitspersample != 8) {
      if ((int )samplesperpixel > 1) {
        tmp = TIFFFileName(in);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: Cannot handle different planar configuration w/ bits/sample != 8\n",
                tmp);
        return ((copyFunc )((void *)0));
      } else {

      }
    } else {

    }
  } else {

  }
  TIFFGetField(in, (ttag_t )256, & w);
  TIFFGetField(in, (ttag_t )257, & l);
  tmp___7 = TIFFIsTiled(out);
  if (tmp___7) {
    goto _L;
  } else {
    tmp___8 = TIFFIsTiled(in);
    if (tmp___8) {
      _L: /* CIL Label */ 
      if (bias) {
        tmp___1 = TIFFFileName(in);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s: Cannot handle tiled configuration w/bias image\n",
                tmp___1);
        return ((copyFunc )((void *)0));
      } else {

      }
      tmp___6 = TIFFIsTiled(out);
      if (tmp___6) {
        tmp___2 = TIFFGetField(in, (ttag_t )322, & tw);
        if (tmp___2) {

        } else {
          tw = w;
        }
        tmp___3 = TIFFGetField(in, (ttag_t )323, & tl);
        if (tmp___3) {

        } else {
          tl = l;
        }
        if (tw == tilewidth) {
          if (tl == tilelength) {
            tmp___4 = 1;
          } else {
            tmp___4 = 0;
          }
        } else {
          tmp___4 = 0;
        }
        bychunk = tmp___4;
      } else {
        TIFFGetField(in, (ttag_t )322, & tw);
        TIFFGetField(in, (ttag_t )323, & tl);
        if (tw == w) {
          if (tl == rowsperstrip) {
            tmp___5 = 1;
          } else {
            tmp___5 = 0;
          }
        } else {
          tmp___5 = 0;
        }
        bychunk = tmp___5;
      }
    } else {
      irps = (uint32 )-1L;
      TIFFGetField(in, (ttag_t )278, & irps);
      if (! bias) {
        if (rowsperstrip == irps) {
          tmp___0 = 1;
        } else {
          tmp___0 = 0;
        }
      } else {
        tmp___0 = 0;
      }
      bychunk = tmp___0;
    }
  }
  tmp___9 = TIFFIsTiled(in);
  tmp___10 = TIFFIsTiled(out);
  switch ((long )((((((int )shortv << 11) | ((int )config << 3)) | (tmp___9 << 2)) | (tmp___10 << 1)) | bychunk)) {
  case (long )((((1 << 11) | (1 << 3)) | (1 << 1)) | 1): 
  case (long )(((1 << 11) | (1 << 3)) | (1 << 1)): 
  return (& cpContigStrips2ContigTiles);
  case (long )((((1 << 11) | (2 << 3)) | (1 << 1)) | 1): 
  case (long )(((1 << 11) | (2 << 3)) | (1 << 1)): 
  return (& cpContigStrips2SeparateTiles);
  case (long )((((2 << 11) | (1 << 3)) | (1 << 1)) | 1): 
  case (long )(((2 << 11) | (1 << 3)) | (1 << 1)): 
  return (& cpSeparateStrips2ContigTiles);
  case (long )((((2 << 11) | (2 << 3)) | (1 << 1)) | 1): 
  case (long )(((2 << 11) | (2 << 3)) | (1 << 1)): 
  return (& cpSeparateStrips2SeparateTiles);
  case (long )(((((1 << 11) | (1 << 3)) | (1 << 2)) | (1 << 1)) | 1): 
  case (long )((((1 << 11) | (1 << 3)) | (1 << 2)) | (1 << 1)): 
  return (& cpContigTiles2ContigTiles);
  case (long )(((((1 << 11) | (2 << 3)) | (1 << 2)) | (1 << 1)) | 1): 
  case (long )((((1 << 11) | (2 << 3)) | (1 << 2)) | (1 << 1)): 
  return (& cpContigTiles2SeparateTiles);
  case (long )(((((2 << 11) | (1 << 3)) | (1 << 2)) | (1 << 1)) | 1): 
  case (long )((((2 << 11) | (1 << 3)) | (1 << 2)) | (1 << 1)): 
  return (& cpSeparateTiles2ContigTiles);
  case (long )(((((2 << 11) | (2 << 3)) | (1 << 2)) | (1 << 1)) | 1): 
  case (long )((((2 << 11) | (2 << 3)) | (1 << 2)) | (1 << 1)): 
  return (& cpSeparateTiles2SeparateTiles);
  case (long )((((1 << 11) | (1 << 3)) | (1 << 2)) | 1): 
  case (long )(((1 << 11) | (1 << 3)) | (1 << 2)): 
  return (& cpContigTiles2ContigStrips);
  case (long )((((1 << 11) | (2 << 3)) | (1 << 2)) | 1): 
  case (long )(((1 << 11) | (2 << 3)) | (1 << 2)): 
  return (& cpContigTiles2SeparateStrips);
  case (long )((((2 << 11) | (1 << 3)) | (1 << 2)) | 1): 
  case (long )(((2 << 11) | (1 << 3)) | (1 << 2)): 
  return (& cpSeparateTiles2ContigStrips);
  case (long )((((2 << 11) | (2 << 3)) | (1 << 2)) | 1): 
  case (long )(((2 << 11) | (2 << 3)) | (1 << 2)): 
  return (& cpSeparateTiles2SeparateStrips);
  case (long )((1 << 11) | (1 << 3)): 
  if (bias) {
    tmp___11 = & cpBiasedContig2Contig;
  } else {
    tmp___11 = & cpContig2ContigByRow;
  }
  return (tmp___11);
  case (long )(((1 << 11) | (1 << 3)) | 1): 
  return (& cpDecodedStrips);
  case (long )(((1 << 11) | (2 << 3)) | 1): 
  case (long )((1 << 11) | (2 << 3)): 
  return (& cpContig2SeparateByRow);
  case (long )(((2 << 11) | (1 << 3)) | 1): 
  case (long )((2 << 11) | (1 << 3)): 
  return (& cpSeparate2ContigByRow);
  case (long )(((2 << 11) | (2 << 3)) | 1): 
  case (long )((2 << 11) | (2 << 3)): 
  return (& cpSeparate2SeparateByRow);
  }
  tmp___12 = TIFFFileName(in);
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"tiffcp: %s: Don\'t know how to copy/convert image.\n",
          tmp___12);
  return ((copyFunc )((void *)0));
}
}
