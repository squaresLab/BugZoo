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
} ;
typedef int YYSTYPE;
typedef unsigned int size_t;
typedef long wchar_t;
struct __anonstruct___wait_terminated_1 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_2 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_1 __wait_terminated ;
   struct __anonstruct___wait_stopped_2 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_3 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_3  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_4 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_4 div_t;
struct __anonstruct_ldiv_t_5 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_5 ldiv_t;
struct __anonstruct_lldiv_t_6 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_6 lldiv_t;
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
struct __anonstruct___fsid_t_7 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_7 __fsid_t;
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
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef int register_t;
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_8 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_8 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef long __fd_mask;
struct __anonstruct_fd_set_9 {
   __fd_mask fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_9 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_10 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_10 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_12 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_12 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_11 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_11 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_13 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_13 pthread_mutexattr_t;
struct __anonstruct___data_15 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_14 {
   struct __anonstruct___data_15 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_14 pthread_cond_t;
union __anonunion_pthread_condattr_t_16 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_16 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_18 {
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
union __anonunion_pthread_rwlock_t_17 {
   struct __anonstruct___data_18 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_17 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_19 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_19 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_20 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_20 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_21 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_21 pthread_barrierattr_t;
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
typedef int (*comparison_fn_t)(void const   * , void const   * );
typedef int (*__compar_d_fn_t)(void const   * , void const   * , void * );
typedef long double float_t;
typedef long double double_t;
enum __anonenum_22 {
    FP_NAN = 0,
    FP_INFINITE = 1,
    FP_ZERO = 2,
    FP_SUBNORMAL = 3,
    FP_NORMAL = 4
} ;
enum __anonenum__LIB_VERSION_TYPE_23 {
    _IEEE_ = -1,
    _SVID_ = 0,
    _XOPEN_ = 1,
    _POSIX_ = 2,
    _ISOC_ = 3
} ;
typedef enum __anonenum__LIB_VERSION_TYPE_23 _LIB_VERSION_TYPE;
struct exception {
   int type ;
   char *name ;
   double arg1 ;
   double arg2 ;
   double retval ;
};
union __anonunion___u_24 {
   float __f ;
   int __i ;
};
union __anonunion___u_25 {
   double __d ;
   int __i[2] ;
};
union __anonunion___u_26 {
   long double __l ;
   int __i[3] ;
};
union __anonunion___n_27 {
   long double __xld ;
   unsigned int __xi[3] ;
};
union __anonunion_28 {
   double __d ;
   int __i[2] ;
};
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_30 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_29 {
   int __count ;
   union __anonunion___value_30 __value ;
};
typedef struct __anonstruct___mbstate_t_29 __mbstate_t;
struct __anonstruct__G_fpos_t_31 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_31 _G_fpos_t;
struct __anonstruct__G_fpos64_t_32 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_32 _G_fpos64_t;
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
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf , size_t __n );
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
typedef int __io_close_fn(void *__cookie );
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;
struct __anonstruct__IO_cookie_io_functions_t_33 {
   __io_read_fn *read ;
   __io_write_fn *write ;
   __io_seek_fn *seek ;
   __io_close_fn *close ;
};
typedef struct __anonstruct__IO_cookie_io_functions_t_33 _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;
struct _IO_cookie_file;
struct _IO_cookie_file;
typedef __gnuc_va_list va_list;
typedef _G_fpos_t fpos_t;
typedef _G_fpos64_t fpos64_t;
struct obstack;
struct obstack;
typedef long Lmid_t;
struct __anonstruct_Dl_info_34 {
   char const   *dli_fname ;
   void *dli_fbase ;
   char const   *dli_sname ;
   void *dli_saddr ;
};
typedef struct __anonstruct_Dl_info_34 Dl_info;
enum __anonenum_35 {
    RTLD_DL_SYMENT = 1,
    RTLD_DL_LINKMAP = 2
} ;
enum __anonenum_36 {
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
} ;
struct __anonstruct_Dl_serpath_37 {
   char *dls_name ;
   unsigned int dls_flags ;
};
typedef struct __anonstruct_Dl_serpath_37 Dl_serpath;
struct __anonstruct_Dl_serinfo_38 {
   size_t dls_size ;
   unsigned int dls_cnt ;
   Dl_serpath dls_serpath[1] ;
};
typedef struct __anonstruct_Dl_serinfo_38 Dl_serinfo;
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
struct _zend_leak_info {
   void *addr ;
   size_t size ;
   char const   *filename ;
   uint lineno ;
   char const   *orig_filename ;
   uint orig_lineno ;
};
typedef struct _zend_leak_info zend_leak_info;
struct _zend_mm_heap;
typedef struct _zend_mm_heap zend_mm_heap;
struct _zend_mm_storage;
typedef struct _zend_mm_storage zend_mm_storage;
struct _zend_mm_segment {
   size_t size ;
   struct _zend_mm_segment *next_segment ;
};
typedef struct _zend_mm_segment zend_mm_segment;
struct _zend_mm_mem_handlers {
   char const   *name ;
   zend_mm_storage *(*init)(void *params ) ;
   void (*dtor)(zend_mm_storage *storage ) ;
   void (*compact)(zend_mm_storage *storage ) ;
   zend_mm_segment *(*_alloc)(zend_mm_storage *storage , size_t size ) ;
   zend_mm_segment *(*_realloc)(zend_mm_storage *storage , zend_mm_segment *ptr , size_t size ) ;
   void (*_free)(zend_mm_storage *storage , zend_mm_segment *ptr ) ;
};
typedef struct _zend_mm_mem_handlers zend_mm_mem_handlers;
struct _zend_mm_storage {
   zend_mm_mem_handlers const   *handlers ;
   void *data ;
};
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;
typedef long long zend_long64;
typedef unsigned long long zend_ulong64;
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;
typedef unsigned int zend_object_handle;
struct _zend_object_handlers;
typedef struct _zend_object_handlers zend_object_handlers;
struct _zend_object_value {
   zend_object_handle handle ;
   zend_object_handlers const   *handlers ;
};
typedef struct _zend_object_value zend_object_value;
typedef ulong (*hash_func_t)(char const   *arKey , uint nKeyLength );
typedef int (*compare_func_t)(void const   * , void const   * );
typedef void (*sort_func_t)(void * , size_t  , size_t  , int (*)(void const   * , void const   * ) );
typedef void (*dtor_func_t)(void *pDest );
typedef void (*copy_ctor_func_t)(void *pElement );
typedef void (*copy_ctor_param_func_t)(void *pElement , void *pParam );
struct _hashtable;
struct _hashtable;
struct bucket {
   ulong h ;
   uint nKeyLength ;
   void *pData ;
   void *pDataPtr ;
   struct bucket *pListNext ;
   struct bucket *pListLast ;
   struct bucket *pNext ;
   struct bucket *pLast ;
   char const   *arKey ;
};
typedef struct bucket Bucket;
struct _hashtable {
   uint nTableSize ;
   uint nTableMask ;
   uint nNumOfElements ;
   ulong nNextFreeElement ;
   Bucket *pInternalPointer ;
   Bucket *pListHead ;
   Bucket *pListTail ;
   Bucket **arBuckets ;
   void (*pDestructor)(void *pDest ) ;
   zend_bool persistent ;
   unsigned char nApplyCount ;
   zend_bool bApplyProtection ;
};
typedef struct _hashtable HashTable;
struct _zend_hash_key {
   char const   *arKey ;
   uint nKeyLength ;
   ulong h ;
};
typedef struct _zend_hash_key zend_hash_key;
typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht , void *source_data , zend_hash_key *hash_key , void *pParam );
typedef Bucket *HashPosition;
typedef int (*apply_func_t)(void *pDest );
typedef int (*apply_func_arg_t)(void *pDest , void *argument );
typedef int (*apply_func_args_t)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key );
struct _HashPointer {
   HashPosition pos ;
   ulong h ;
};
typedef struct _HashPointer HashPointer;
struct _zend_ts_hashtable {
   HashTable hash ;
   zend_uint reader ;
};
typedef struct _zend_ts_hashtable TsHashTable;
struct _zend_llist_element {
   struct _zend_llist_element *next ;
   struct _zend_llist_element *prev ;
   char data[1] ;
};
typedef struct _zend_llist_element zend_llist_element;
typedef void (*llist_dtor_func_t)(void * );
typedef int (*llist_compare_func_t)(zend_llist_element const   ** , zend_llist_element const   ** );
typedef void (*llist_apply_with_args_func_t)(void *data , int num_args , va_list args );
typedef void (*llist_apply_with_arg_func_t)(void *data , void *arg );
typedef void (*llist_apply_func_t)(void * );
struct _zend_llist {
   zend_llist_element *head ;
   zend_llist_element *tail ;
   size_t count ;
   size_t size ;
   void (*dtor)(void * ) ;
   unsigned char persistent ;
   zend_llist_element *traverse_ptr ;
};
typedef struct _zend_llist zend_llist;
typedef zend_llist_element *zend_llist_position;
struct _zval_struct;
typedef struct _zval_struct zval;
struct _zend_class_entry;
typedef struct _zend_class_entry zend_class_entry;
struct _zend_guard {
   zend_bool in_get ;
   zend_bool in_set ;
   zend_bool in_unset ;
   zend_bool in_isset ;
   zend_bool dummy ;
};
typedef struct _zend_guard zend_guard;
struct _zend_object {
   zend_class_entry *ce ;
   HashTable *properties ;
   zval **properties_table ;
   HashTable *guards ;
};
typedef struct _zend_object zend_object;
union _zend_function;
union _zend_function;
struct _zend_property_info;
struct _zend_property_info;
struct _zend_literal;
struct _zend_literal;
typedef zval *(*zend_object_read_property_t)(zval *object , zval *member , int type , struct _zend_literal  const  *key );
typedef zval *(*zend_object_read_dimension_t)(zval *object , zval *offset , int type );
typedef void (*zend_object_write_property_t)(zval *object , zval *member , zval *value , struct _zend_literal  const  *key );
typedef void (*zend_object_write_dimension_t)(zval *object , zval *offset , zval *value );
typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object , zval *member , struct _zend_literal  const  *key );
typedef void (*zend_object_set_t)(zval **object , zval *value );
typedef zval *(*zend_object_get_t)(zval *object );
typedef int (*zend_object_has_property_t)(zval *object , zval *member , int has_set_exists , struct _zend_literal  const  *key );
typedef int (*zend_object_has_dimension_t)(zval *object , zval *member , int check_empty );
typedef void (*zend_object_unset_property_t)(zval *object , zval *member , struct _zend_literal  const  *key );
typedef void (*zend_object_unset_dimension_t)(zval *object , zval *offset );
typedef HashTable *(*zend_object_get_properties_t)(zval *object );
typedef HashTable *(*zend_object_get_debug_info_t)(zval *object , int *is_temp );
typedef int (*zend_object_call_method_t)(char const   *method , int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr , char *method , int method_len , struct _zend_literal  const  *key );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );
typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );
typedef zend_class_entry *(*zend_object_get_class_entry_t)(zval const   *object );
typedef int (*zend_object_get_class_name_t)(zval const   *object , char const   **class_name , zend_uint *class_name_len , int parent );
typedef int (*zend_object_compare_t)(zval *object1 , zval *object2 );
typedef int (*zend_object_cast_t)(zval *readobj , zval *retval , int type );
typedef int (*zend_object_count_elements_t)(zval *object , long *count );
typedef int (*zend_object_get_closure_t)(zval *obj , zend_class_entry **ce_ptr , union _zend_function **fptr_ptr , zval **zobj_ptr );
typedef HashTable *(*zend_object_get_gc_t)(zval *object , zval ***table , int *n );
struct _zend_object_handlers {
   void (*add_ref)(zval *object ) ;
   void (*del_ref)(zval *object ) ;
   zend_object_value (*clone_obj)(zval *object ) ;
   zval *(*read_property)(zval *object , zval *member , int type , struct _zend_literal  const  *key ) ;
   void (*write_property)(zval *object , zval *member , zval *value , struct _zend_literal  const  *key ) ;
   zval *(*read_dimension)(zval *object , zval *offset , int type ) ;
   void (*write_dimension)(zval *object , zval *offset , zval *value ) ;
   zval **(*get_property_ptr_ptr)(zval *object , zval *member , struct _zend_literal  const  *key ) ;
   zval *(*get)(zval *object ) ;
   void (*set)(zval **object , zval *value ) ;
   int (*has_property)(zval *object , zval *member , int has_set_exists , struct _zend_literal  const  *key ) ;
   void (*unset_property)(zval *object , zval *member , struct _zend_literal  const  *key ) ;
   int (*has_dimension)(zval *object , zval *member , int check_empty ) ;
   void (*unset_dimension)(zval *object , zval *offset ) ;
   HashTable *(*get_properties)(zval *object ) ;
   union _zend_function *(*get_method)(zval **object_ptr , char *method , int method_len , struct _zend_literal  const  *key ) ;
   int (*call_method)(char const   *method , int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
   union _zend_function *(*get_constructor)(zval *object ) ;
   zend_class_entry *(*get_class_entry)(zval const   *object ) ;
   int (*get_class_name)(zval const   *object , char const   **class_name , zend_uint *class_name_len , int parent ) ;
   int (*compare_objects)(zval *object1 , zval *object2 ) ;
   int (*cast_object)(zval *readobj , zval *retval , int type ) ;
   int (*count_elements)(zval *object , long *count ) ;
   HashTable *(*get_debug_info)(zval *object , int *is_temp ) ;
   int (*get_closure)(zval *obj , zend_class_entry **ce_ptr , union _zend_function **fptr_ptr , zval **zobj_ptr ) ;
   HashTable *(*get_gc)(zval *object , zval ***table , int *n ) ;
};
struct __anonstruct_str_39 {
   char *val ;
   int len ;
};
union _zvalue_value {
   long lval ;
   double dval ;
   struct __anonstruct_str_39 str ;
   HashTable *ht ;
   zend_object_value obj ;
};
typedef union _zvalue_value zvalue_value;
struct _zval_struct {
   zvalue_value value ;
   zend_uint refcount__gc ;
   zend_uchar type ;
   zend_uchar is_ref__gc ;
};
union _zend_function;
struct _zend_object_iterator;
typedef struct _zend_object_iterator zend_object_iterator;
struct _zend_object_iterator_funcs {
   void (*dtor)(zend_object_iterator *iter ) ;
   int (*valid)(zend_object_iterator *iter ) ;
   void (*get_current_data)(zend_object_iterator *iter , zval ***data ) ;
   int (*get_current_key)(zend_object_iterator *iter , char **str_key , uint *str_key_len , ulong *int_key ) ;
   void (*move_forward)(zend_object_iterator *iter ) ;
   void (*rewind)(zend_object_iterator *iter ) ;
   void (*invalidate_current)(zend_object_iterator *iter ) ;
};
typedef struct _zend_object_iterator_funcs zend_object_iterator_funcs;
struct _zend_object_iterator {
   void *data ;
   zend_object_iterator_funcs *funcs ;
   ulong index ;
};
struct _zend_class_iterator_funcs {
   zend_object_iterator_funcs *funcs ;
   union _zend_function *zf_new_iterator ;
   union _zend_function *zf_valid ;
   union _zend_function *zf_current ;
   union _zend_function *zf_key ;
   union _zend_function *zf_next ;
   union _zend_function *zf_rewind ;
};
typedef struct _zend_class_iterator_funcs zend_class_iterator_funcs;
enum zend_object_iterator_kind {
    ZEND_ITER_INVALID = 0,
    ZEND_ITER_PLAIN_ARRAY = 1,
    ZEND_ITER_PLAIN_OBJECT = 2,
    ZEND_ITER_OBJECT = 3
} ;
struct _zend_serialize_data;
struct _zend_serialize_data;
struct _zend_unserialize_data;
struct _zend_unserialize_data;
typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;
struct _zend_trait_method_reference {
   char const   *method_name ;
   unsigned int mname_len ;
   zend_class_entry *ce ;
   char const   *class_name ;
   unsigned int cname_len ;
};
typedef struct _zend_trait_method_reference zend_trait_method_reference;
struct _zend_trait_precedence {
   zend_trait_method_reference *trait_method ;
   zend_class_entry **exclude_from_classes ;
   union _zend_function *function ;
};
typedef struct _zend_trait_precedence zend_trait_precedence;
struct _zend_trait_alias {
   zend_trait_method_reference *trait_method ;
   char const   *alias ;
   unsigned int alias_len ;
   zend_uint modifiers ;
   union _zend_function *function ;
};
typedef struct _zend_trait_alias zend_trait_alias;
struct __anonstruct_user_41 {
   char const   *filename ;
   zend_uint line_start ;
   zend_uint line_end ;
   char const   *doc_comment ;
   zend_uint doc_comment_len ;
};
struct _zend_function_entry;
struct _zend_module_entry;
struct __anonstruct_internal_42 {
   struct _zend_function_entry  const  *builtin_functions ;
   struct _zend_module_entry *module ;
};
union __anonunion_info_40 {
   struct __anonstruct_user_41 user ;
   struct __anonstruct_internal_42 internal ;
};
struct _zend_class_entry {
   char type ;
   char const   *name ;
   zend_uint name_length ;
   struct _zend_class_entry *parent ;
   int refcount ;
   zend_uint ce_flags ;
   HashTable function_table ;
   HashTable properties_info ;
   zval **default_properties_table ;
   zval **default_static_members_table ;
   zval **static_members_table ;
   HashTable constants_table ;
   int default_properties_count ;
   int default_static_members_count ;
   union _zend_function *constructor ;
   union _zend_function *destructor ;
   union _zend_function *clone ;
   union _zend_function *__get ;
   union _zend_function *__set ;
   union _zend_function *__unset ;
   union _zend_function *__isset ;
   union _zend_function *__call ;
   union _zend_function *__callstatic ;
   union _zend_function *__tostring ;
   union _zend_function *serialize_func ;
   union _zend_function *unserialize_func ;
   zend_class_iterator_funcs iterator_funcs ;
   zend_object_value (*create_object)(zend_class_entry *class_type ) ;
   zend_object_iterator *(*get_iterator)(zend_class_entry *ce , zval *object , int by_ref ) ;
   int (*interface_gets_implemented)(zend_class_entry *iface , zend_class_entry *class_type ) ;
   union _zend_function *(*get_static_method)(zend_class_entry *ce , char *method , int method_len ) ;
   int (*serialize)(zval *object , unsigned char **buffer , zend_uint *buf_len , zend_serialize_data *data ) ;
   int (*unserialize)(zval **object , zend_class_entry *ce , unsigned char const   *buf , zend_uint buf_len , zend_unserialize_data *data ) ;
   zend_class_entry **interfaces ;
   zend_uint num_interfaces ;
   zend_class_entry **traits ;
   zend_uint num_traits ;
   zend_trait_alias **trait_aliases ;
   zend_trait_precedence **trait_precedences ;
   union __anonunion_info_40 info ;
};
typedef size_t (*zend_stream_fsizer_t)(void *handle );
typedef size_t (*zend_stream_reader_t)(void *handle , char *buf , size_t len );
typedef void (*zend_stream_closer_t)(void *handle );
enum __anonenum_zend_stream_type_43 {
    ZEND_HANDLE_FILENAME = 0,
    ZEND_HANDLE_FD = 1,
    ZEND_HANDLE_FP = 2,
    ZEND_HANDLE_STREAM = 3,
    ZEND_HANDLE_MAPPED = 4
} ;
typedef enum __anonenum_zend_stream_type_43 zend_stream_type;
struct _zend_mmap {
   size_t len ;
   size_t pos ;
   void *map ;
   char *buf ;
   void *old_handle ;
   void (*old_closer)(void *handle ) ;
};
typedef struct _zend_mmap zend_mmap;
struct _zend_stream {
   void *handle ;
   int isatty ;
   zend_mmap mmap ;
   size_t (*reader)(void *handle , char *buf , size_t len ) ;
   size_t (*fsizer)(void *handle ) ;
   void (*closer)(void *handle ) ;
};
typedef struct _zend_stream zend_stream;
union __anonunion_handle_44 {
   int fd ;
   FILE *fp ;
   zend_stream stream ;
};
struct _zend_file_handle {
   zend_stream_type type ;
   char const   *filename ;
   char *opened_path ;
   union __anonunion_handle_44 handle ;
   zend_bool free_filename ;
};
typedef struct _zend_file_handle zend_file_handle;
struct _zend_utility_functions {
   void ( /* format attribute */  (*error_function))(int type , char const   *error_filename , uint error_lineno , char const   *format , va_list args ) ;
   int ( /* format attribute */  (*printf_function))(char const   *format  , ...) ;
   int (*write_function)(char const   *str , uint str_length ) ;
   FILE *(*fopen_function)(char const   *filename , char **opened_path ) ;
   void (*message_handler)(long message , void const   *data ) ;
   int (*get_configuration_directive)(char const   *name , uint name_length , zval *contents ) ;
   void (*ticks_function)(int ticks ) ;
   void (*on_timeout)(int seconds ) ;
   int (*stream_open_function)(char const   *filename , zend_file_handle *handle ) ;
   int (*vspprintf_function)(char **pbuf , size_t max_len , char const   *format , va_list ap ) ;
   char *(*getenv_function)(char *name , size_t name_len ) ;
   char *(*resolve_path_function)(char const   *filename , int filename_len ) ;
};
typedef struct _zend_utility_functions zend_utility_functions;
struct _zend_utility_values {
   char *import_use_extension ;
   uint import_use_extension_length ;
   zend_bool html_errors ;
};
typedef struct _zend_utility_values zend_utility_values;
typedef int (*zend_write_func_t)(char const   *str , uint str_length );
typedef __sig_atomic_t sig_atomic_t;
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
struct __anonstruct__kill_46 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_47 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_48 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_49 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
struct __anonstruct__sigfault_50 {
   void *si_addr ;
};
struct __anonstruct__sigpoll_51 {
   long si_band ;
   int si_fd ;
};
union __anonunion__sifields_45 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_46 _kill ;
   struct __anonstruct__timer_47 _timer ;
   struct __anonstruct__rt_48 _rt ;
   struct __anonstruct__sigchld_49 _sigchld ;
   struct __anonstruct__sigfault_50 _sigfault ;
   struct __anonstruct__sigpoll_51 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_45 _sifields ;
};
typedef struct siginfo siginfo_t;
enum __anonenum_52 {
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
enum __anonenum_53 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
enum __anonenum_54 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
enum __anonenum_55 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
enum __anonenum_56 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
enum __anonenum_57 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
enum __anonenum_58 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
enum __anonenum_59 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
struct __anonstruct__sigev_thread_61 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_60 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_61 _sigev_thread ;
};
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_60 _sigev_un ;
};
typedef struct sigevent sigevent_t;
enum __anonenum_62 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
typedef void (*__sighandler_t)(int  );
typedef void (*sighandler_t)(int  );
typedef void (*sig_t)(int  );
union __anonunion___sigaction_handler_63 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_63 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
struct sigvec {
   void (*sv_handler)(int  ) ;
   int sv_mask ;
   int sv_flags ;
};
typedef signed char __s8;
typedef unsigned char __u8;
typedef short __s16;
typedef unsigned short __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
typedef unsigned short umode_t;
struct __anonstruct___kernel_fd_set_64 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___kernel_fd_set_64 __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int  );
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
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
typedef char *__kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;
typedef long long __kernel_loff_t;
struct __anonstruct___kernel_fsid_t_65 {
   int val[2] ;
};
typedef struct __anonstruct___kernel_fsid_t_65 __kernel_fsid_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
struct _fpx_sw_bytes {
   __u32 magic1 ;
   __u32 extended_size ;
   __u64 xstate_bv ;
   __u32 xstate_size ;
   __u32 padding[7] ;
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
union __anonunion____missing_field_name_66 {
   unsigned long padding2[12] ;
   struct _fpx_sw_bytes sw_reserved ;
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
   unsigned long padding1[44] ;
   union __anonunion____missing_field_name_66 __annonCompField2 ;
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
struct _xsave_hdr {
   __u64 xstate_bv ;
   __u64 reserved1[2] ;
   __u64 reserved2[5] ;
};
struct _ymmh_state {
   __u32 ymmh_space[64] ;
};
struct _xstate {
   struct _fpstate fpstate ;
   struct _xsave_hdr xstate_hdr ;
   struct _ymmh_state ymmh ;
};
struct sigstack {
   void *ss_sp ;
   int ss_onstack ;
};
enum __anonenum_67 {
    SS_ONSTACK = 1,
    SS_DISABLE = 2
} ;
struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};
typedef struct sigaltstack stack_t;
typedef int greg_t;
typedef greg_t gregset_t[19];
enum __anonenum_68 {
    REG_GS = 0,
    REG_FS = 1,
    REG_ES = 2,
    REG_DS = 3,
    REG_EDI = 4,
    REG_ESI = 5,
    REG_EBP = 6,
    REG_ESP = 7,
    REG_EBX = 8,
    REG_EDX = 9,
    REG_ECX = 10,
    REG_EAX = 11,
    REG_TRAPNO = 12,
    REG_ERR = 13,
    REG_EIP = 14,
    REG_CS = 15,
    REG_EFL = 16,
    REG_UESP = 17,
    REG_SS = 18
} ;
struct _libc_fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
struct _libc_fpstate {
   unsigned long cw ;
   unsigned long sw ;
   unsigned long tag ;
   unsigned long ipoff ;
   unsigned long cssel ;
   unsigned long dataoff ;
   unsigned long datasel ;
   struct _libc_fpreg _st[8] ;
   unsigned long status ;
};
typedef struct _libc_fpstate *fpregset_t;
struct __anonstruct_mcontext_t_69 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
typedef struct __anonstruct_mcontext_t_69 mcontext_t;
struct ucontext {
   unsigned long uc_flags ;
   struct ucontext *uc_link ;
   stack_t uc_stack ;
   mcontext_t uc_mcontext ;
   __sigset_t uc_sigmask ;
   struct _libc_fpstate __fpregs_mem ;
};
typedef struct ucontext ucontext_t;
struct _zend_signal_entry_t {
   int flags ;
   void *handler ;
};
typedef struct _zend_signal_entry_t zend_signal_entry_t;
struct _zend_signal_t {
   int signo ;
   siginfo_t *siginfo ;
   void *context ;
};
typedef struct _zend_signal_t zend_signal_t;
struct _zend_signal_queue_t {
   zend_signal_t zend_signal ;
   struct _zend_signal_queue_t *next ;
};
typedef struct _zend_signal_queue_t zend_signal_queue_t;
struct _zend_signal_globals_t {
   int depth ;
   int blocked ;
   int running ;
   int active ;
   int initialized ;
   zend_bool check ;
   zend_signal_entry_t handlers[65] ;
   zend_signal_queue_t pstorage[32] ;
   zend_signal_queue_t *phead ;
   zend_signal_queue_t *ptail ;
   zend_signal_queue_t *pavail ;
};
typedef struct _zend_signal_globals_t zend_signal_globals_t;
union __anonunion_u_70 {
   zval *pz ;
   zend_object_handlers const   *handlers ;
};
struct _gc_root_buffer {
   struct _gc_root_buffer *prev ;
   struct _gc_root_buffer *next ;
   zend_object_handle handle ;
   union __anonunion_u_70 u ;
};
typedef struct _gc_root_buffer gc_root_buffer;
union __anonunion_u_71 {
   gc_root_buffer *buffered ;
   struct _zval_gc_info *next ;
};
struct _zval_gc_info {
   zval z ;
   union __anonunion_u_71 u ;
};
typedef struct _zval_gc_info zval_gc_info;
struct _zend_gc_globals {
   zend_bool gc_enabled ;
   zend_bool gc_active ;
   gc_root_buffer *buf ;
   gc_root_buffer roots ;
   gc_root_buffer *unused ;
   gc_root_buffer *first_unused ;
   gc_root_buffer *last_unused ;
   zval_gc_info *zval_to_free ;
   zval_gc_info *free_list ;
   zval_gc_info *next_to_free ;
   zend_uint gc_runs ;
   zend_uint collected ;
};
typedef struct _zend_gc_globals zend_gc_globals;
typedef int error_t;
enum __anonenum_zend_error_handling_t_72 {
    EH_NORMAL = 0,
    EH_SUPPRESS = 1,
    EH_THROW = 2
} ;
typedef enum __anonenum_zend_error_handling_t_72 zend_error_handling_t;
struct __anonstruct_zend_error_handling_73 {
   zend_error_handling_t handling ;
   zend_class_entry *exception ;
   zval *user_handler ;
};
typedef struct __anonstruct_zend_error_handling_73 zend_error_handling;
struct _zend_op_array;
typedef struct _zend_op_array zend_op_array;
struct _zend_op;
typedef struct _zend_op zend_op;
struct _zend_compiler_context {
   zend_uint opcodes_size ;
   int vars_size ;
   int literals_size ;
   int current_brk_cont ;
   int backpatch_count ;
   HashTable *labels ;
};
typedef struct _zend_compiler_context zend_compiler_context;
struct _zend_literal {
   zval constant ;
   zend_ulong hash_value ;
   zend_uint cache_slot ;
};
typedef struct _zend_literal zend_literal;
union _znode_op {
   zend_uint constant ;
   zend_uint var ;
   zend_uint num ;
   zend_ulong hash ;
   zend_uint opline_num ;
   zend_op *jmp_addr ;
   zval *zv ;
   zend_literal *literal ;
   void *ptr ;
};
typedef union _znode_op znode_op;
union __anonunion_u_74 {
   znode_op op ;
   zval constant ;
   zend_op_array *op_array ;
};
struct _znode {
   int op_type ;
   union __anonunion_u_74 u ;
   zend_uint EA ;
};
typedef struct _znode znode;
struct _zend_execute_data;
typedef struct _zend_execute_data zend_execute_data;
typedef int (*user_opcode_handler_t)(zend_execute_data *execute_data );
typedef int ( __attribute__((__fastcall__)) (*opcode_handler_t))(zend_execute_data *execute_data );
struct _zend_op {
   int ( __attribute__((__fastcall__)) (*handler))(zend_execute_data *execute_data ) ;
   znode_op op1 ;
   znode_op op2 ;
   znode_op result ;
   ulong extended_value ;
   uint lineno ;
   zend_uchar opcode ;
   zend_uchar op1_type ;
   zend_uchar op2_type ;
   zend_uchar result_type ;
};
struct _zend_brk_cont_element {
   int start ;
   int cont ;
   int brk ;
   int parent ;
};
typedef struct _zend_brk_cont_element zend_brk_cont_element;
struct _zend_label {
   int brk_cont ;
   zend_uint opline_num ;
};
typedef struct _zend_label zend_label;
struct _zend_try_catch_element {
   zend_uint try_op ;
   zend_uint catch_op ;
};
typedef struct _zend_try_catch_element zend_try_catch_element;
struct _zend_property_info {
   zend_uint flags ;
   char const   *name ;
   int name_length ;
   ulong h ;
   int offset ;
   char const   *doc_comment ;
   int doc_comment_len ;
   zend_class_entry *ce ;
};
typedef struct _zend_property_info zend_property_info;
struct _zend_arg_info {
   char const   *name ;
   zend_uint name_len ;
   char const   *class_name ;
   zend_uint class_name_len ;
   zend_uchar type_hint ;
   zend_bool allow_null ;
   zend_bool pass_by_reference ;
};
typedef struct _zend_arg_info zend_arg_info;
struct _zend_internal_function_info {
   char const   *_name ;
   zend_uint _name_len ;
   char const   *_class_name ;
   zend_uint required_num_args ;
   zend_uchar _type_hint ;
   zend_bool return_reference ;
   zend_bool pass_rest_by_reference ;
};
typedef struct _zend_internal_function_info zend_internal_function_info;
struct _zend_compiled_variable {
   char const   *name ;
   int name_len ;
   ulong hash_value ;
};
typedef struct _zend_compiled_variable zend_compiled_variable;
struct _zend_op_array {
   zend_uchar type ;
   char const   *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
   zend_uint *refcount ;
   zend_op *opcodes ;
   zend_uint last ;
   zend_compiled_variable *vars ;
   int last_var ;
   zend_uint T ;
   zend_brk_cont_element *brk_cont_array ;
   int last_brk_cont ;
   zend_try_catch_element *try_catch_array ;
   int last_try_catch ;
   HashTable *static_variables ;
   zend_uint this_var ;
   char const   *filename ;
   zend_uint line_start ;
   zend_uint line_end ;
   char const   *doc_comment ;
   zend_uint doc_comment_len ;
   zend_uint early_binding ;
   zend_literal *literals ;
   int last_literal ;
   void **run_time_cache ;
   int last_cache_slot ;
   void *reserved[4] ;
};
struct _zend_internal_function {
   zend_uchar type ;
   char const   *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
   void (*handler)(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
   struct _zend_module_entry *module ;
};
typedef struct _zend_internal_function zend_internal_function;
struct __anonstruct_common_75 {
   zend_uchar type ;
   char const   *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
};
union _zend_function {
   zend_uchar type ;
   struct __anonstruct_common_75 common ;
   zend_op_array op_array ;
   zend_internal_function internal_function ;
};
typedef union _zend_function zend_function;
struct _zend_function_state {
   zend_function *function ;
   void **arguments ;
};
typedef struct _zend_function_state zend_function_state;
struct _zend_switch_entry {
   znode cond ;
   int default_case ;
   int control_var ;
};
typedef struct _zend_switch_entry zend_switch_entry;
struct _list_llist_element {
   znode var ;
   zend_llist dimensions ;
   znode value ;
};
typedef struct _list_llist_element list_llist_element;
union _temp_variable;
union _temp_variable;
struct _zend_execute_data {
   struct _zend_op *opline ;
   zend_function_state function_state ;
   zend_function *fbc ;
   zend_class_entry *called_scope ;
   zend_op_array *op_array ;
   zval *object ;
   union _temp_variable *Ts ;
   zval ***CVs ;
   HashTable *symbol_table ;
   struct _zend_execute_data *prev_execute_data ;
   zval *old_error_reporting ;
   zend_bool nested ;
   zval **original_return_value ;
   zend_class_entry *current_scope ;
   zend_class_entry *current_called_scope ;
   zval *current_this ;
   zval *current_object ;
};
typedef int __jmp_buf[6];
struct __jmp_buf_tag {
   __jmp_buf __jmpbuf ;
   int __mask_was_saved ;
   __sigset_t __saved_mask ;
};
typedef struct __jmp_buf_tag jmp_buf[1];
typedef struct __jmp_buf_tag sigjmp_buf[1];
struct _zend_compiler_globals;
typedef struct _zend_compiler_globals zend_compiler_globals;
struct _zend_executor_globals;
typedef struct _zend_executor_globals zend_executor_globals;
struct _zend_php_scanner_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
struct _zend_ini_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;
struct _zend_stack {
   int top ;
   int max ;
   void **elements ;
};
typedef struct _zend_stack zend_stack;
struct _zend_ptr_stack {
   int top ;
   int max ;
   void **elements ;
   void **top_element ;
   zend_bool persistent ;
};
typedef struct _zend_ptr_stack zend_ptr_stack;
typedef void (*zend_objects_store_dtor_t)(void *object , zend_object_handle handle );
typedef void (*zend_objects_free_object_storage_t)(void *object );
typedef void (*zend_objects_store_clone_t)(void *object , void **object_clone );
struct _store_object {
   void *object ;
   void (*dtor)(void *object , zend_object_handle handle ) ;
   void (*free_storage)(void *object ) ;
   void (*clone)(void *object , void **object_clone ) ;
   zend_object_handlers const   *handlers ;
   zend_uint refcount ;
   gc_root_buffer *buffered ;
};
struct __anonstruct_free_list_76 {
   int next ;
};
union _store_bucket {
   struct _store_object obj ;
   struct __anonstruct_free_list_76 free_list ;
};
struct _zend_object_store_bucket {
   zend_bool destructor_called ;
   zend_bool valid ;
   union _store_bucket bucket ;
};
typedef struct _zend_object_store_bucket zend_object_store_bucket;
struct _zend_objects_store {
   zend_object_store_bucket *object_buckets ;
   zend_uint top ;
   zend_uint size ;
   int free_list_head ;
};
typedef struct _zend_objects_store zend_objects_store;
struct _zend_ini_entry;
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
struct _zend_module_dep;
typedef struct _zend_module_dep zend_module_dep;
struct _zend_module_entry {
   unsigned short size ;
   unsigned int zend_api ;
   unsigned char zend_debug ;
   unsigned char zts ;
   struct _zend_ini_entry  const  *ini_entry ;
   struct _zend_module_dep  const  *deps ;
   char const   *name ;
   struct _zend_function_entry  const  *functions ;
   int (*module_startup_func)(int type , int module_number ) ;
   int (*module_shutdown_func)(int type , int module_number ) ;
   int (*request_startup_func)(int type , int module_number ) ;
   int (*request_shutdown_func)(int type , int module_number ) ;
   void (*info_func)(zend_module_entry *zend_module ) ;
   char const   *version ;
   size_t globals_size ;
   void *globals_ptr ;
   void (*globals_ctor)(void *global ) ;
   void (*globals_dtor)(void *global ) ;
   int (*post_deactivate_func)(void) ;
   int module_started ;
   unsigned char type ;
   void *handle ;
   int module_number ;
   char const   *build_id ;
};
struct _zend_module_dep {
   char const   *name ;
   char const   *rel ;
   char const   *version ;
   unsigned char type ;
};
typedef unsigned short fpu_control_t;
struct _zend_encoding;
typedef struct _zend_encoding zend_encoding;
typedef size_t (*zend_encoding_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length );
typedef zend_encoding const   *(*zend_encoding_fetcher)(char const   *encoding_name );
typedef char const   *(*zend_encoding_name_getter)(zend_encoding const   *encoding );
typedef int (*zend_encoding_lexer_compatibility_checker)(zend_encoding const   *encoding );
typedef zend_encoding const   *(*zend_encoding_detector)(unsigned char const   *string , size_t length , zend_encoding const   **list , size_t list_size );
typedef size_t (*zend_encoding_converter)(unsigned char **to , size_t *to_length , unsigned char const   *from , size_t from_length , zend_encoding const   *encoding_to , zend_encoding const   *encoding_from );
typedef int (*zend_encoding_list_parser)(char const   *encoding_list , size_t encoding_list_len , zend_encoding const   ***return_list , size_t *return_size , int persistent );
typedef zend_encoding const   *(*zend_encoding_internal_encoding_getter)(void);
typedef int (*zend_encoding_internal_encoding_setter)(zend_encoding const   *encoding );
struct _zend_multibyte_functions {
   char const   *provider_name ;
   zend_encoding const   *(*encoding_fetcher)(char const   *encoding_name ) ;
   char const   *(*encoding_name_getter)(zend_encoding const   *encoding ) ;
   int (*lexer_compatibility_checker)(zend_encoding const   *encoding ) ;
   zend_encoding const   *(*encoding_detector)(unsigned char const   *string , size_t length , zend_encoding const   **list , size_t list_size ) ;
   size_t (*encoding_converter)(unsigned char **to , size_t *to_length , unsigned char const   *from , size_t from_length , zend_encoding const   *encoding_to , zend_encoding const   *encoding_from ) ;
   int (*encoding_list_parser)(char const   *encoding_list , size_t encoding_list_len , zend_encoding const   ***return_list , size_t *return_size , int persistent ) ;
   zend_encoding const   *(*internal_encoding_getter)(void) ;
   int (*internal_encoding_setter)(zend_encoding const   *encoding ) ;
};
typedef struct _zend_multibyte_functions zend_multibyte_functions;
struct _zend_declarables {
   zval ticks ;
};
typedef struct _zend_declarables zend_declarables;
struct _zend_vm_stack;
typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;
struct _zend_ini_parser_param;
struct _zend_compiler_globals {
   zend_stack bp_stack ;
   zend_stack switch_cond_stack ;
   zend_stack foreach_copy_stack ;
   zend_stack object_stack ;
   zend_stack declare_stack ;
   zend_class_entry *active_class_entry ;
   zend_llist list_llist ;
   zend_llist dimension_llist ;
   zend_stack list_stack ;
   zend_stack function_call_stack ;
   char *compiled_filename ;
   int zend_lineno ;
   char *heredoc ;
   int heredoc_len ;
   zend_op_array *active_op_array ;
   HashTable *function_table ;
   HashTable *class_table ;
   HashTable filenames_table ;
   HashTable *auto_globals ;
   zend_bool parse_error ;
   zend_bool in_compilation ;
   zend_bool short_tags ;
   zend_bool asp_tags ;
   zend_declarables declarables ;
   zend_bool unclean_shutdown ;
   zend_bool ini_parser_unbuffered_errors ;
   zend_llist open_files ;
   long catch_begin ;
   struct _zend_ini_parser_param *ini_parser_param ;
   int interactive ;
   zend_uint start_lineno ;
   zend_bool increment_lineno ;
   znode implementing_class ;
   zend_uint access_type ;
   char *doc_comment ;
   zend_uint doc_comment_len ;
   zend_uint compiler_options ;
   zval *current_namespace ;
   HashTable *current_import ;
   zend_bool in_namespace ;
   zend_bool has_bracketed_namespaces ;
   zend_compiler_context context ;
   zend_stack context_stack ;
   char *interned_strings_start ;
   char *interned_strings_end ;
   char *interned_strings_top ;
   char *interned_strings_snapshot_top ;
   HashTable interned_strings ;
   zend_encoding const   **script_encoding_list ;
   size_t script_encoding_list_size ;
   zend_bool multibyte ;
   zend_bool detect_unicode ;
   zend_bool encoding_declared ;
};
struct _zend_executor_globals {
   zval **return_value_ptr_ptr ;
   zval uninitialized_zval ;
   zval *uninitialized_zval_ptr ;
   zval error_zval ;
   zval *error_zval_ptr ;
   zend_ptr_stack arg_types_stack ;
   HashTable *symtable_cache[32] ;
   HashTable **symtable_cache_limit ;
   HashTable **symtable_cache_ptr ;
   zend_op **opline_ptr ;
   HashTable *active_symbol_table ;
   HashTable symbol_table ;
   HashTable included_files ;
   jmp_buf *bailout ;
   int error_reporting ;
   int orig_error_reporting ;
   int exit_status ;
   zend_op_array *active_op_array ;
   HashTable *function_table ;
   HashTable *class_table ;
   HashTable *zend_constants ;
   zend_class_entry *scope ;
   zend_class_entry *called_scope ;
   zval *This ;
   long precision ;
   int ticks_count ;
   zend_bool in_execution ;
   HashTable *in_autoload ;
   zend_function *autoload_func ;
   zend_bool full_tables_cleanup ;
   zend_bool no_extensions ;
   HashTable regular_list ;
   HashTable persistent_list ;
   zend_vm_stack argument_stack ;
   int user_error_handler_error_reporting ;
   zval *user_error_handler ;
   zval *user_exception_handler ;
   zend_stack user_error_handlers_error_reporting ;
   zend_ptr_stack user_error_handlers ;
   zend_ptr_stack user_exception_handlers ;
   zend_error_handling_t error_handling ;
   zend_class_entry *exception_class ;
   int timeout_seconds ;
   int lambda_count ;
   HashTable *ini_directives ;
   HashTable *modified_ini_directives ;
   zend_ini_entry *error_reporting_ini_entry ;
   zend_objects_store objects_store ;
   zval *exception ;
   zval *prev_exception ;
   zend_op *opline_before_exception ;
   zend_op exception_op[3] ;
   struct _zend_execute_data *current_execute_data ;
   struct _zend_module_entry *current_module ;
   zend_property_info std_property_info ;
   zend_bool active ;
   zend_op *start_op ;
   void *saved_fpu_cw_ptr ;
   fpu_control_t saved_fpu_cw ;
   void *reserved[4] ;
};
struct _zend_ini_scanner_globals {
   zend_file_handle *yy_in ;
   zend_file_handle *yy_out ;
   unsigned int yy_leng ;
   unsigned char *yy_start ;
   unsigned char *yy_text ;
   unsigned char *yy_cursor ;
   unsigned char *yy_marker ;
   unsigned char *yy_limit ;
   int yy_state ;
   zend_stack state_stack ;
   char *filename ;
   int lineno ;
   int scanner_mode ;
};
struct _zend_php_scanner_globals {
   zend_file_handle *yy_in ;
   zend_file_handle *yy_out ;
   unsigned int yy_leng ;
   unsigned char *yy_start ;
   unsigned char *yy_text ;
   unsigned char *yy_cursor ;
   unsigned char *yy_marker ;
   unsigned char *yy_limit ;
   int yy_state ;
   zend_stack state_stack ;
   unsigned char *script_org ;
   size_t script_org_size ;
   unsigned char *script_filtered ;
   size_t script_filtered_size ;
   size_t (*input_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ) ;
   size_t (*output_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ) ;
   zend_encoding const   *script_encoding ;
};
typedef int (*unary_op_type)(zval * , zval * );
typedef int (*binary_op_type)(zval * , zval * , zval * );
typedef zend_bool (*zend_auto_global_callback)(char const   *name , uint name_len );
struct _zend_auto_global {
   char const   *name ;
   uint name_len ;
   zend_bool (*auto_global_callback)(char const   *name , uint name_len ) ;
   zend_bool jit ;
   zend_bool armed ;
};
typedef struct _zend_auto_global zend_auto_global;
struct _zend_constant {
   zval value ;
   int flags ;
   char *name ;
   uint name_len ;
   int module_number ;
};
typedef struct _zend_constant zend_constant;
struct _zend_rsrc_list_entry {
   void *ptr ;
   int type ;
   int refcount ;
};
typedef struct _zend_rsrc_list_entry zend_rsrc_list_entry;
typedef void (*rsrc_dtor_func_t)(zend_rsrc_list_entry *rsrc );
struct _zend_rsrc_list_dtors_entry {
   void (*list_dtor)(void * ) ;
   void (*plist_dtor)(void * ) ;
   void (*list_dtor_ex)(zend_rsrc_list_entry *rsrc ) ;
   void (*plist_dtor_ex)(zend_rsrc_list_entry *rsrc ) ;
   char const   *type_name ;
   int module_number ;
   int resource_id ;
   unsigned char type ;
};
typedef struct _zend_rsrc_list_dtors_entry zend_rsrc_list_dtors_entry;
struct __anonstruct_var_77 {
   zval **ptr_ptr ;
   zval *ptr ;
   zend_bool fcall_returned_reference ;
};
struct __anonstruct_str_offset_78 {
   zval **ptr_ptr ;
   zval *str ;
   zend_uint offset ;
};
struct __anonstruct_fe_79 {
   zval **ptr_ptr ;
   zval *ptr ;
   HashPointer fe_pos ;
};
union _temp_variable {
   zval tmp_var ;
   struct __anonstruct_var_77 var ;
   struct __anonstruct_str_offset_78 str_offset ;
   struct __anonstruct_fe_79 fe ;
   zend_class_entry *class_entry ;
};
typedef union _temp_variable temp_variable;
struct _zend_vm_stack {
   void **top ;
   void **end ;
   zend_vm_stack prev ;
};
struct _zend_free_op {
   zval *var ;
};
typedef struct _zend_free_op zend_free_op;
struct _zend_function_entry {
   char const   *fname ;
   void (*handler)(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
   struct _zend_arg_info  const  *arg_info ;
   zend_uint num_args ;
   zend_uint flags ;
};
typedef struct _zend_function_entry zend_function_entry;
struct _zend_fcall_info {
   size_t size ;
   HashTable *function_table ;
   zval *function_name ;
   HashTable *symbol_table ;
   zval **retval_ptr_ptr ;
   zend_uint param_count ;
   zval ***params ;
   zval *object_ptr ;
   zend_bool no_separation ;
};
typedef struct _zend_fcall_info zend_fcall_info;
struct _zend_fcall_info_cache {
   zend_bool initialized ;
   zend_function *function_handler ;
   zend_class_entry *calling_scope ;
   zend_class_entry *called_scope ;
   zval *object_ptr ;
};
typedef struct _zend_fcall_info_cache zend_fcall_info_cache;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_80 {
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
enum __anonenum_81 {
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
enum __anonenum_82 {
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
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};
struct stat64 {
   __dev_t st_dev ;
   unsigned int __pad1 ;
   __ino_t __st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned int __pad2 ;
   __off64_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt64_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __ino64_t st_ino ;
};
enum __anonenum_83 {
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
struct utimbuf {
   __time_t actime ;
   __time_t modtime ;
};
struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
struct dirent64 {
   __ino64_t d_ino ;
   __off64_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
enum __anonenum_84 {
    DT_UNKNOWN = 0,
    DT_FIFO = 1,
    DT_CHR = 2,
    DT_DIR = 4,
    DT_BLK = 6,
    DT_REG = 8,
    DT_LNK = 10,
    DT_SOCK = 12,
    DT_WHT = 14
} ;
struct __dirstream;
typedef struct __dirstream DIR;
struct _cwd_state {
   char *cwd ;
   int cwd_length ;
};
typedef struct _cwd_state cwd_state;
typedef int (*verify_path_func)(cwd_state const   * );
struct _realpath_cache_bucket {
   unsigned long key ;
   char *path ;
   int path_len ;
   char *realpath ;
   int realpath_len ;
   int is_dir ;
   time_t expires ;
   struct _realpath_cache_bucket *next ;
};
typedef struct _realpath_cache_bucket realpath_cache_bucket;
struct _virtual_cwd_globals {
   cwd_state cwd ;
   long realpath_cache_size ;
   long realpath_cache_size_limit ;
   long realpath_cache_ttl ;
   realpath_cache_bucket *realpath_cache[1024] ;
};
typedef struct _virtual_cwd_globals virtual_cwd_globals;
struct _zend_lex_state {
   unsigned int yy_leng ;
   unsigned char *yy_start ;
   unsigned char *yy_text ;
   unsigned char *yy_cursor ;
   unsigned char *yy_marker ;
   unsigned char *yy_limit ;
   int yy_state ;
   zend_stack state_stack ;
   zend_file_handle *in ;
   uint lineno ;
   char *filename ;
   unsigned char *script_org ;
   size_t script_org_size ;
   unsigned char *script_filtered ;
   size_t script_filtered_size ;
   size_t (*input_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ) ;
   size_t (*output_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ) ;
   zend_encoding const   *script_encoding ;
};
typedef struct _zend_lex_state zend_lex_state;
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
__inline extern  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__, __nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__, __nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__, __nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr , char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) float strtof(char const   * __restrict  __nptr , char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long double strtold(char const   * __restrict  __nptr , char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long strtol_l(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , __locale_t __loc )  __attribute__((__nonnull__(1,4))) ;
extern  __attribute__((__nothrow__)) unsigned long strtoul_l(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , __locale_t __loc )  __attribute__((__nonnull__(1,4))) ;
extern  __attribute__((__nothrow__)) long long strtoll_l(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , __locale_t __loc )  __attribute__((__nonnull__(1,4))) ;
extern  __attribute__((__nothrow__)) unsigned long long strtoull_l(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , __locale_t __loc )  __attribute__((__nonnull__(1,4))) ;
extern  __attribute__((__nothrow__)) double strtod_l(char const   * __restrict  __nptr , char ** __restrict  __endptr , __locale_t __loc )  __attribute__((__nonnull__(1,3))) ;
extern  __attribute__((__nothrow__)) float strtof_l(char const   * __restrict  __nptr , char ** __restrict  __endptr , __locale_t __loc )  __attribute__((__nonnull__(1,3))) ;
extern  __attribute__((__nothrow__)) long double strtold_l(char const   * __restrict  __nptr , char ** __restrict  __endptr , __locale_t __loc )  __attribute__((__nonnull__(1,3))) ;
__inline extern  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__, __nonnull__(1))) ;
__inline extern double atof(char const   *__nptr ) 
{ double tmp ;

  {
  tmp = strtod((char const   */* __restrict  */)__nptr, (char **/* __restrict  */)((char **)((void *)0)));
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__, __nonnull__(1))) ;
__inline extern int atoi(char const   *__nptr ) 
{ long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr, (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((int )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__, __nonnull__(1))) ;
__inline extern long atol(char const   *__nptr ) 
{ long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr, (char **/* __restrict  */)((char **)((void *)0)), 10);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__, __nonnull__(1))) ;
__inline extern long long atoll(char const   *__nptr ) 
{ long long tmp ;

  {
  tmp = strtoll((char const   */* __restrict  */)__nptr, (char **/* __restrict  */)((char **)((void *)0)), 10);
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;
extern  __attribute__((__nothrow__)) long a64l(char const   *__s )  __attribute__((__pure__, __nonnull__(1))) ;
extern int select(int __nfds , fd_set * __restrict  __readfds , fd_set * __restrict  __writefds , fd_set * __restrict  __exceptfds , struct timeval * __restrict  __timeout ) ;
extern int pselect(int __nfds , fd_set * __restrict  __readfds , fd_set * __restrict  __writefds , fd_set * __restrict  __exceptfds , struct timespec  const  * __restrict  __timeout , __sigset_t const   * __restrict  __sigmask ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major , unsigned int __minor ) ;
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
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major , unsigned int __minor ) ;
__inline extern unsigned long long gnu_dev_makedev(unsigned int __major , unsigned int __minor ) 
{ 

  {
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
extern  __attribute__((__nothrow__)) long random(void) ;
extern  __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) char *initstate(unsigned int __seed , char *__statebuf , size_t __statelen )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *setstate(char *__statebuf )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int random_r(struct random_data * __restrict  __buf , int32_t * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int srandom_r(unsigned int __seed , struct random_data *__buf )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int initstate_r(unsigned int __seed , char * __restrict  __statebuf , size_t __statelen , struct random_data * __restrict  __buf )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) int setstate_r(char * __restrict  __statebuf , struct random_data * __restrict  __buf )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int rand(void) ;
extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;
extern  __attribute__((__nothrow__)) double drand48(void) ;
extern  __attribute__((__nothrow__)) double erand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long lrand48(void) ;
extern  __attribute__((__nothrow__)) long nrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long mrand48(void) ;
extern  __attribute__((__nothrow__)) long jrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void srand48(long __seedval ) ;
extern  __attribute__((__nothrow__)) unsigned short *seed48(unsigned short *__seed16v )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void lcong48(unsigned short *__param )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int drand48_r(struct drand48_data * __restrict  __buffer , double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int erand48_r(unsigned short *__xsubi , struct drand48_data * __restrict  __buffer , double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int lrand48_r(struct drand48_data * __restrict  __buffer , long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int nrand48_r(unsigned short *__xsubi , struct drand48_data * __restrict  __buffer , long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int mrand48_r(struct drand48_data * __restrict  __buffer , long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int jrand48_r(unsigned short *__xsubi , struct drand48_data * __restrict  __buffer , long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int srand48_r(long __seedval , struct drand48_data *__buffer )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int seed48_r(unsigned short *__seed16v , struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int lcong48_r(unsigned short *__param , struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb , size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size )  __attribute__((__warn_unused_result__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void cfree(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void *alloca(size_t __size ) ;
extern  __attribute__((__nothrow__)) void *valloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) int posix_memalign(void **__memptr , size_t __alignment , size_t __size )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int at_quick_exit(void (*__func)(void) )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int on_exit(void (*__func)(int __status , void *__arg ) , void *__arg )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void quick_exit(int __status ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *__secure_getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int putenv(char *__string )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int setenv(char const   *__name , char const   *__value , int __replace )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int unsetenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int clearenv(void) ;
extern  __attribute__((__nothrow__)) char *mktemp(char *__template )  __attribute__((__nonnull__(1))) ;
extern int mkstemp(char *__template )  __attribute__((__nonnull__(1))) ;
extern int mkstemp64(char *__template )  __attribute__((__nonnull__(1))) ;
extern int mkstemps(char *__template , int __suffixlen )  __attribute__((__nonnull__(1))) ;
extern int mkstemps64(char *__template , int __suffixlen )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *mkdtemp(char *__template )  __attribute__((__nonnull__(1))) ;
extern int mkostemp(char *__template , int __flags )  __attribute__((__nonnull__(1))) ;
extern int mkostemp64(char *__template , int __flags )  __attribute__((__nonnull__(1))) ;
extern int mkostemps(char *__template , int __suffixlen , int __flags )  __attribute__((__nonnull__(1))) ;
extern int mkostemps64(char *__template , int __suffixlen , int __flags )  __attribute__((__nonnull__(1))) ;
extern int system(char const   *__command ) ;
extern  __attribute__((__nothrow__)) char *canonicalize_file_name(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name , char * __restrict  __resolved ) ;
extern void *bsearch(void const   *__key , void const   *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,2,5))) ;
extern void qsort(void *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,4))) ;
extern void qsort_r(void *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * , void * ) , void *__arg )  __attribute__((__nonnull__(1,4))) ;
extern  __attribute__((__nothrow__)) int abs(int __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long labs(long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long long llabs(long long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer , long long __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) char *ecvt(double __value , int __ndigit , int * __restrict  __decpt , int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) char *fcvt(double __value , int __ndigit , int * __restrict  __decpt , int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) char *gcvt(double __value , int __ndigit , char *__buf )  __attribute__((__nonnull__(3))) ;
extern  __attribute__((__nothrow__)) char *qecvt(long double __value , int __ndigit , int * __restrict  __decpt , int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) char *qfcvt(long double __value , int __ndigit , int * __restrict  __decpt , int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) char *qgcvt(long double __value , int __ndigit , char *__buf )  __attribute__((__nonnull__(3))) ;
extern  __attribute__((__nothrow__)) int ecvt_r(double __value , int __ndigit , int * __restrict  __decpt , int * __restrict  __sign , char * __restrict  __buf , size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
extern  __attribute__((__nothrow__)) int fcvt_r(double __value , int __ndigit , int * __restrict  __decpt , int * __restrict  __sign , char * __restrict  __buf , size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
extern  __attribute__((__nothrow__)) int qecvt_r(long double __value , int __ndigit , int * __restrict  __decpt , int * __restrict  __sign , char * __restrict  __buf , size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
extern  __attribute__((__nothrow__)) int qfcvt_r(long double __value , int __ndigit , int * __restrict  __decpt , int * __restrict  __sign , char * __restrict  __buf , size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
extern  __attribute__((__nothrow__)) int mblen(char const   *__s , size_t __n ) ;
extern  __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict  __pwc , char const   * __restrict  __s , size_t __n ) ;
extern  __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;
extern  __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict  __pwcs , char const   * __restrict  __s , size_t __n ) ;
extern  __attribute__((__nothrow__)) size_t wcstombs(char * __restrict  __s , wchar_t const   * __restrict  __pwcs , size_t __n ) ;
extern  __attribute__((__nothrow__)) int rpmatch(char const   *__response )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int getsubopt(char ** __restrict  __optionp , char * const  * __restrict  __tokens , char ** __restrict  __valuep )  __attribute__((__nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) void setkey(char const   *__key )  __attribute__((__nonnull__(1))) ;
extern int posix_openpt(int __oflag ) ;
extern  __attribute__((__nothrow__)) int grantpt(int __fd ) ;
extern  __attribute__((__nothrow__)) int unlockpt(int __fd ) ;
extern  __attribute__((__nothrow__)) char *ptsname(int __fd ) ;
extern  __attribute__((__nothrow__)) int ptsname_r(int __fd , char *__buf , size_t __buflen )  __attribute__((__nonnull__(2))) ;
extern int getpt(void) ;
extern  __attribute__((__nothrow__)) int getloadavg(double *__loadavg , int __nelem )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memmove(void *__dest , void const   *__src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memccpy(void * __restrict  __dest , void const   * __restrict  __src , int __c , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 , void const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c , size_t __n )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *rawmemchr(void const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *memrchr(void const   *__s , int __c , size_t __n )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strncpy(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strcat(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strncat(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) size_t strxfrm(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int strcoll_l(char const   *__s1 , char const   *__s2 , __locale_t __l )  __attribute__((__pure__, __nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) size_t strxfrm_l(char *__dest , char const   *__src , size_t __n , __locale_t __l )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) char *strdup(char const   *__s )  __attribute__((__nonnull__(1), __malloc__)) ;
extern  __attribute__((__nothrow__)) char *strndup(char const   *__string , size_t __n )  __attribute__((__nonnull__(1), __malloc__)) ;
extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strchrnul(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s , char const   *__reject )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s , char const   *__accept )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strpbrk(char const   *__s , char const   *__accept )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack , char const   *__needle )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strtok(char * __restrict  __s , char const   * __restrict  __delim )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *__strtok_r(char * __restrict  __s , char const   * __restrict  __delim , char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) char *strtok_r(char * __restrict  __s , char const   * __restrict  __delim , char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) char *strcasestr(char const   *__haystack , char const   *__needle )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memmem(void const   *__haystack , size_t __haystacklen , void const   *__needle , size_t __needlelen )  __attribute__((__pure__, __nonnull__(1,3))) ;
extern  __attribute__((__nothrow__)) void *__mempcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *mempcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) size_t strnlen(char const   *__string , size_t __maxlen )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) char *strerror_r(int __errnum , char *__buf , size_t __buflen )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *strerror_l(int __errnum , __locale_t __l ) ;
extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void bcopy(void const   *__src , void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 , void const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ffsl(long __l )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ffsll(long long __ll )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strcasecmp_l(char const   *__s1 , char const   *__s2 , __locale_t __loc )  __attribute__((__pure__, __nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) int strncasecmp_l(char const   *__s1 , char const   *__s2 , size_t __n , __locale_t __loc )  __attribute__((__pure__, __nonnull__(1,2,4))) ;
extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp , char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strsignal(int __sig ) ;
extern  __attribute__((__nothrow__)) char *__stpcpy(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *stpcpy(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *__stpncpy(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *stpncpy(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strverscmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strfry(char *__string )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *memfrob(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *basename(char const   *__filename )  __attribute__((__nonnull__(1))) ;
extern void *__rawmemchr(void const   *__s , int __c ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) 
{ register size_t __result ;

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
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 , int __reject2 ) ;
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 , int __reject2 ) 
{ register size_t __result ;

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
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 , int __reject2 , int __reject3 ) ;
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 , int __reject2 , int __reject3 ) 
{ register size_t __result ;

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
{ register size_t __result ;

  {
  __result = (size_t )0;
  while ((int const   )*(__s + __result) == (int const   )__accept) {
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 , int __accept2 ) ;
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 , int __accept2 ) 
{ register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) == (int const   )__accept1) {

    } else {
      if ((int const   )*(__s + __result) == (int const   )__accept2) {

      } else {
        break;
      }
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 , int __accept2 , int __accept3 ) ;
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 , int __accept2 , int __accept3 ) 
{ register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) == (int const   )__accept1) {

    } else {
      if ((int const   )*(__s + __result) == (int const   )__accept2) {

      } else {
        if ((int const   )*(__s + __result) == (int const   )__accept3) {

        } else {
          break;
        }
      }
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 , int __accept2 ) ;
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 , int __accept2 ) 
{ char *tmp ;

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
    tmp = (char *)((unsigned int )__s);
  }
  return (tmp);
}
}
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 , int __accept2 , int __accept3 ) ;
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 , int __accept2 , int __accept3 ) 
{ char *tmp ;

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
    tmp = (char *)((unsigned int )__s);
  }
  return (tmp);
}
}
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  if ((unsigned int )__s == (unsigned int )((void *)0)) {
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
{ register char *__retval ;
  char *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    tmp___2 = __builtin_strchr(__retval, (int )__reject);
    tmp___0 = tmp___2;
    *__s = tmp___0;
    if ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
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
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
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
      } else {
        if ((int )*__cp == (int )__reject2) {
          tmp = __cp;
          __cp ++;
          *tmp = (char )'\000';
          break;
        } else {

        }
      }
      __cp ++;
    }
    *__s = __cp;
  } else {

  }
  return (__retval);
}
}
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 , char __reject3 ) ;
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 , char __reject3 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
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
      } else {
        if ((int )*__cp == (int )__reject2) {
          tmp = __cp;
          __cp ++;
          *tmp = (char )'\000';
          break;
        } else {
          if ((int )*__cp == (int )__reject3) {
            tmp = __cp;
            __cp ++;
            *tmp = (char )'\000';
            break;
          } else {

          }
        }
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
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string , size_t __n )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) double acos(double __x ) ;
extern  __attribute__((__nothrow__)) double __acos(double __x ) ;
extern  __attribute__((__nothrow__)) double asin(double __x ) ;
extern  __attribute__((__nothrow__)) double __asin(double __x ) ;
extern  __attribute__((__nothrow__)) double atan(double __x ) ;
extern  __attribute__((__nothrow__)) double __atan(double __x ) ;
extern  __attribute__((__nothrow__)) double atan2(double __y , double __x ) ;
extern  __attribute__((__nothrow__)) double __atan2(double __y , double __x ) ;
extern  __attribute__((__nothrow__)) double cos(double __x ) ;
extern  __attribute__((__nothrow__)) double __cos(double __x ) ;
extern  __attribute__((__nothrow__)) double sin(double __x ) ;
extern  __attribute__((__nothrow__)) double __sin(double __x ) ;
extern  __attribute__((__nothrow__)) double tan(double __x ) ;
extern  __attribute__((__nothrow__)) double __tan(double __x ) ;
extern  __attribute__((__nothrow__)) double cosh(double __x ) ;
extern  __attribute__((__nothrow__)) double __cosh(double __x ) ;
extern  __attribute__((__nothrow__)) double sinh(double __x ) ;
extern  __attribute__((__nothrow__)) double __sinh(double __x ) ;
extern  __attribute__((__nothrow__)) double tanh(double __x ) ;
extern  __attribute__((__nothrow__)) double __tanh(double __x ) ;
extern  __attribute__((__nothrow__)) void sincos(double __x , double *__sinx , double *__cosx ) ;
extern  __attribute__((__nothrow__)) void __sincos(double __x , double *__sinx , double *__cosx ) ;
extern  __attribute__((__nothrow__)) double acosh(double __x ) ;
extern  __attribute__((__nothrow__)) double __acosh(double __x ) ;
extern  __attribute__((__nothrow__)) double asinh(double __x ) ;
extern  __attribute__((__nothrow__)) double __asinh(double __x ) ;
extern  __attribute__((__nothrow__)) double atanh(double __x ) ;
extern  __attribute__((__nothrow__)) double __atanh(double __x ) ;
extern  __attribute__((__nothrow__)) double exp(double __x ) ;
extern  __attribute__((__nothrow__)) double __exp(double __x ) ;
extern  __attribute__((__nothrow__)) double frexp(double __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) double __frexp(double __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) double ldexp(double __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) double __ldexp(double __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) double log(double __x ) ;
extern  __attribute__((__nothrow__)) double __log(double __x ) ;
extern  __attribute__((__nothrow__)) double log10(double __x ) ;
extern  __attribute__((__nothrow__)) double __log10(double __x ) ;
extern  __attribute__((__nothrow__)) double modf(double __x , double *__iptr ) ;
extern  __attribute__((__nothrow__)) double __modf(double __x , double *__iptr ) ;
extern  __attribute__((__nothrow__)) double exp10(double __x ) ;
extern  __attribute__((__nothrow__)) double __exp10(double __x ) ;
extern  __attribute__((__nothrow__)) double pow10(double __x ) ;
extern  __attribute__((__nothrow__)) double __pow10(double __x ) ;
extern  __attribute__((__nothrow__)) double expm1(double __x ) ;
extern  __attribute__((__nothrow__)) double __expm1(double __x ) ;
extern  __attribute__((__nothrow__)) double log1p(double __x ) ;
extern  __attribute__((__nothrow__)) double __log1p(double __x ) ;
extern  __attribute__((__nothrow__)) double logb(double __x ) ;
extern  __attribute__((__nothrow__)) double __logb(double __x ) ;
extern  __attribute__((__nothrow__)) double exp2(double __x ) ;
extern  __attribute__((__nothrow__)) double __exp2(double __x ) ;
extern  __attribute__((__nothrow__)) double log2(double __x ) ;
extern  __attribute__((__nothrow__)) double __log2(double __x ) ;
extern  __attribute__((__nothrow__)) double pow(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __pow(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double sqrt(double __x ) ;
extern  __attribute__((__nothrow__)) double __sqrt(double __x ) ;
extern  __attribute__((__nothrow__)) double hypot(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __hypot(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double cbrt(double __x ) ;
extern  __attribute__((__nothrow__)) double __cbrt(double __x ) ;
__inline extern  __attribute__((__nothrow__)) double ceil(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __ceil(double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) double fabs(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __fabs(double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) double floor(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __floor(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double fmod(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __fmod(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) int __isinf(double __value )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int __finite(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isinf(double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int finite(double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double drem(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __drem(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double significand(double __x ) ;
extern  __attribute__((__nothrow__)) double __significand(double __x ) ;
extern  __attribute__((__nothrow__)) double copysign(double __x , double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __copysign(double __x , double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double nan(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __nan(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __isnan(double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isnan(double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double j0(double  ) ;
extern  __attribute__((__nothrow__)) double __j0(double  ) ;
extern  __attribute__((__nothrow__)) double j1(double  ) ;
extern  __attribute__((__nothrow__)) double __j1(double  ) ;
extern  __attribute__((__nothrow__)) double jn(int  , double  ) ;
extern  __attribute__((__nothrow__)) double __jn(int  , double  ) ;
extern  __attribute__((__nothrow__)) double y0(double  ) ;
extern  __attribute__((__nothrow__)) double __y0(double  ) ;
extern  __attribute__((__nothrow__)) double y1(double  ) ;
extern  __attribute__((__nothrow__)) double __y1(double  ) ;
extern  __attribute__((__nothrow__)) double yn(int  , double  ) ;
extern  __attribute__((__nothrow__)) double __yn(int  , double  ) ;
extern  __attribute__((__nothrow__)) double erf(double  ) ;
extern  __attribute__((__nothrow__)) double __erf(double  ) ;
extern  __attribute__((__nothrow__)) double erfc(double  ) ;
extern  __attribute__((__nothrow__)) double __erfc(double  ) ;
extern  __attribute__((__nothrow__)) double lgamma(double  ) ;
extern  __attribute__((__nothrow__)) double __lgamma(double  ) ;
extern  __attribute__((__nothrow__)) double tgamma(double  ) ;
extern  __attribute__((__nothrow__)) double __tgamma(double  ) ;
extern  __attribute__((__nothrow__)) double gamma(double  ) ;
extern  __attribute__((__nothrow__)) double __gamma(double  ) ;
extern  __attribute__((__nothrow__)) double lgamma_r(double  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) double __lgamma_r(double  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) double rint(double __x ) ;
extern  __attribute__((__nothrow__)) double __rint(double __x ) ;
extern  __attribute__((__nothrow__)) double nextafter(double __x , double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __nextafter(double __x , double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double nexttoward(double __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __nexttoward(double __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double remainder(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __remainder(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double scalbn(double __x , int __n ) ;
extern  __attribute__((__nothrow__)) double __scalbn(double __x , int __n ) ;
extern  __attribute__((__nothrow__)) int ilogb(double __x ) ;
extern  __attribute__((__nothrow__)) int __ilogb(double __x ) ;
extern  __attribute__((__nothrow__)) double scalbln(double __x , long __n ) ;
extern  __attribute__((__nothrow__)) double __scalbln(double __x , long __n ) ;
extern  __attribute__((__nothrow__)) double nearbyint(double __x ) ;
extern  __attribute__((__nothrow__)) double __nearbyint(double __x ) ;
extern  __attribute__((__nothrow__)) double round(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __round(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double trunc(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double __trunc(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double remquo(double __x , double __y , int *__quo ) ;
extern  __attribute__((__nothrow__)) double __remquo(double __x , double __y , int *__quo ) ;
__inline extern  __attribute__((__nothrow__)) long lrint(double __x ) ;
extern  __attribute__((__nothrow__)) long __lrint(double __x ) ;
__inline extern  __attribute__((__nothrow__)) long long llrint(double __x ) ;
extern  __attribute__((__nothrow__)) long long __llrint(double __x ) ;
extern  __attribute__((__nothrow__)) long lround(double __x ) ;
extern  __attribute__((__nothrow__)) long __lround(double __x ) ;
extern  __attribute__((__nothrow__)) long long llround(double __x ) ;
extern  __attribute__((__nothrow__)) long long __llround(double __x ) ;
extern  __attribute__((__nothrow__)) double fdim(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __fdim(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double fmax(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __fmax(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double fmin(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) double __fmin(double __x , double __y ) ;
extern  __attribute__((__nothrow__)) int __fpclassify(double __value )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) double fma(double __x , double __y , double __z ) ;
extern  __attribute__((__nothrow__)) double __fma(double __x , double __y , double __z ) ;
extern  __attribute__((__nothrow__)) double scalb(double __x , double __n ) ;
extern  __attribute__((__nothrow__)) double __scalb(double __x , double __n ) ;
extern  __attribute__((__nothrow__)) float acosf(float __x ) ;
extern  __attribute__((__nothrow__)) float __acosf(float __x ) ;
extern  __attribute__((__nothrow__)) float asinf(float __x ) ;
extern  __attribute__((__nothrow__)) float __asinf(float __x ) ;
extern  __attribute__((__nothrow__)) float atanf(float __x ) ;
extern  __attribute__((__nothrow__)) float __atanf(float __x ) ;
extern  __attribute__((__nothrow__)) float atan2f(float __y , float __x ) ;
extern  __attribute__((__nothrow__)) float __atan2f(float __y , float __x ) ;
extern  __attribute__((__nothrow__)) float cosf(float __x ) ;
extern  __attribute__((__nothrow__)) float __cosf(float __x ) ;
extern  __attribute__((__nothrow__)) float sinf(float __x ) ;
extern  __attribute__((__nothrow__)) float __sinf(float __x ) ;
extern  __attribute__((__nothrow__)) float tanf(float __x ) ;
extern  __attribute__((__nothrow__)) float __tanf(float __x ) ;
extern  __attribute__((__nothrow__)) float coshf(float __x ) ;
extern  __attribute__((__nothrow__)) float __coshf(float __x ) ;
extern  __attribute__((__nothrow__)) float sinhf(float __x ) ;
extern  __attribute__((__nothrow__)) float __sinhf(float __x ) ;
extern  __attribute__((__nothrow__)) float tanhf(float __x ) ;
extern  __attribute__((__nothrow__)) float __tanhf(float __x ) ;
extern  __attribute__((__nothrow__)) void sincosf(float __x , float *__sinx , float *__cosx ) ;
extern  __attribute__((__nothrow__)) void __sincosf(float __x , float *__sinx , float *__cosx ) ;
extern  __attribute__((__nothrow__)) float acoshf(float __x ) ;
extern  __attribute__((__nothrow__)) float __acoshf(float __x ) ;
extern  __attribute__((__nothrow__)) float asinhf(float __x ) ;
extern  __attribute__((__nothrow__)) float __asinhf(float __x ) ;
extern  __attribute__((__nothrow__)) float atanhf(float __x ) ;
extern  __attribute__((__nothrow__)) float __atanhf(float __x ) ;
extern  __attribute__((__nothrow__)) float expf(float __x ) ;
extern  __attribute__((__nothrow__)) float __expf(float __x ) ;
extern  __attribute__((__nothrow__)) float frexpf(float __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) float __frexpf(float __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) float ldexpf(float __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) float __ldexpf(float __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) float logf(float __x ) ;
extern  __attribute__((__nothrow__)) float __logf(float __x ) ;
extern  __attribute__((__nothrow__)) float log10f(float __x ) ;
extern  __attribute__((__nothrow__)) float __log10f(float __x ) ;
extern  __attribute__((__nothrow__)) float modff(float __x , float *__iptr ) ;
extern  __attribute__((__nothrow__)) float __modff(float __x , float *__iptr ) ;
extern  __attribute__((__nothrow__)) float exp10f(float __x ) ;
extern  __attribute__((__nothrow__)) float __exp10f(float __x ) ;
extern  __attribute__((__nothrow__)) float pow10f(float __x ) ;
extern  __attribute__((__nothrow__)) float __pow10f(float __x ) ;
extern  __attribute__((__nothrow__)) float expm1f(float __x ) ;
extern  __attribute__((__nothrow__)) float __expm1f(float __x ) ;
extern  __attribute__((__nothrow__)) float log1pf(float __x ) ;
extern  __attribute__((__nothrow__)) float __log1pf(float __x ) ;
extern  __attribute__((__nothrow__)) float logbf(float __x ) ;
extern  __attribute__((__nothrow__)) float __logbf(float __x ) ;
extern  __attribute__((__nothrow__)) float exp2f(float __x ) ;
extern  __attribute__((__nothrow__)) float __exp2f(float __x ) ;
extern  __attribute__((__nothrow__)) float log2f(float __x ) ;
extern  __attribute__((__nothrow__)) float __log2f(float __x ) ;
extern  __attribute__((__nothrow__)) float powf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __powf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float sqrtf(float __x ) ;
extern  __attribute__((__nothrow__)) float __sqrtf(float __x ) ;
extern  __attribute__((__nothrow__)) float hypotf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __hypotf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float cbrtf(float __x ) ;
extern  __attribute__((__nothrow__)) float __cbrtf(float __x ) ;
__inline extern  __attribute__((__nothrow__)) float ceilf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __ceilf(float __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) float fabsf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __fabsf(float __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) float floorf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __floorf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float fmodf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __fmodf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) int __isinff(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __finitef(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isinff(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int finitef(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float dremf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __dremf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float significandf(float __x ) ;
extern  __attribute__((__nothrow__)) float __significandf(float __x ) ;
extern  __attribute__((__nothrow__)) float copysignf(float __x , float __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __copysignf(float __x , float __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float nanf(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __nanf(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __isnanf(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isnanf(float __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float j0f(float  ) ;
extern  __attribute__((__nothrow__)) float __j0f(float  ) ;
extern  __attribute__((__nothrow__)) float j1f(float  ) ;
extern  __attribute__((__nothrow__)) float __j1f(float  ) ;
extern  __attribute__((__nothrow__)) float jnf(int  , float  ) ;
extern  __attribute__((__nothrow__)) float __jnf(int  , float  ) ;
extern  __attribute__((__nothrow__)) float y0f(float  ) ;
extern  __attribute__((__nothrow__)) float __y0f(float  ) ;
extern  __attribute__((__nothrow__)) float y1f(float  ) ;
extern  __attribute__((__nothrow__)) float __y1f(float  ) ;
extern  __attribute__((__nothrow__)) float ynf(int  , float  ) ;
extern  __attribute__((__nothrow__)) float __ynf(int  , float  ) ;
extern  __attribute__((__nothrow__)) float erff(float  ) ;
extern  __attribute__((__nothrow__)) float __erff(float  ) ;
extern  __attribute__((__nothrow__)) float erfcf(float  ) ;
extern  __attribute__((__nothrow__)) float __erfcf(float  ) ;
extern  __attribute__((__nothrow__)) float lgammaf(float  ) ;
extern  __attribute__((__nothrow__)) float __lgammaf(float  ) ;
extern  __attribute__((__nothrow__)) float tgammaf(float  ) ;
extern  __attribute__((__nothrow__)) float __tgammaf(float  ) ;
extern  __attribute__((__nothrow__)) float gammaf(float  ) ;
extern  __attribute__((__nothrow__)) float __gammaf(float  ) ;
extern  __attribute__((__nothrow__)) float lgammaf_r(float  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) float __lgammaf_r(float  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) float rintf(float __x ) ;
extern  __attribute__((__nothrow__)) float __rintf(float __x ) ;
extern  __attribute__((__nothrow__)) float nextafterf(float __x , float __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __nextafterf(float __x , float __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float nexttowardf(float __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __nexttowardf(float __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float remainderf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __remainderf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float scalbnf(float __x , int __n ) ;
extern  __attribute__((__nothrow__)) float __scalbnf(float __x , int __n ) ;
extern  __attribute__((__nothrow__)) int ilogbf(float __x ) ;
extern  __attribute__((__nothrow__)) int __ilogbf(float __x ) ;
extern  __attribute__((__nothrow__)) float scalblnf(float __x , long __n ) ;
extern  __attribute__((__nothrow__)) float __scalblnf(float __x , long __n ) ;
extern  __attribute__((__nothrow__)) float nearbyintf(float __x ) ;
extern  __attribute__((__nothrow__)) float __nearbyintf(float __x ) ;
extern  __attribute__((__nothrow__)) float roundf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __roundf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float truncf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float __truncf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float remquof(float __x , float __y , int *__quo ) ;
extern  __attribute__((__nothrow__)) float __remquof(float __x , float __y , int *__quo ) ;
__inline extern  __attribute__((__nothrow__)) long lrintf(float __x ) ;
extern  __attribute__((__nothrow__)) long __lrintf(float __x ) ;
__inline extern  __attribute__((__nothrow__)) long long llrintf(float __x ) ;
extern  __attribute__((__nothrow__)) long long __llrintf(float __x ) ;
extern  __attribute__((__nothrow__)) long lroundf(float __x ) ;
extern  __attribute__((__nothrow__)) long __lroundf(float __x ) ;
extern  __attribute__((__nothrow__)) long long llroundf(float __x ) ;
extern  __attribute__((__nothrow__)) long long __llroundf(float __x ) ;
extern  __attribute__((__nothrow__)) float fdimf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __fdimf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float fmaxf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __fmaxf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float fminf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) float __fminf(float __x , float __y ) ;
extern  __attribute__((__nothrow__)) int __fpclassifyf(float __value )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int __signbitf(float __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) float fmaf(float __x , float __y , float __z ) ;
extern  __attribute__((__nothrow__)) float __fmaf(float __x , float __y , float __z ) ;
extern  __attribute__((__nothrow__)) float scalbf(float __x , float __n ) ;
extern  __attribute__((__nothrow__)) float __scalbf(float __x , float __n ) ;
extern  __attribute__((__nothrow__)) long double acosl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __acosl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double asinl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __asinl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double atanl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __atanl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double atan2l(long double __y , long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long double __atan2l(long double __y , long double __x ) ;
extern  __attribute__((__nothrow__)) long double cosl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __cosl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double sinl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __sinl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double tanl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __tanl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double coshl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __coshl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double sinhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __sinhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double tanhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __tanhl(long double __x ) ;
extern  __attribute__((__nothrow__)) void sincosl(long double __x , long double *__sinx , long double *__cosx ) ;
extern  __attribute__((__nothrow__)) void __sincosl(long double __x , long double *__sinx , long double *__cosx ) ;
extern  __attribute__((__nothrow__)) long double acoshl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __acoshl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double asinhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __asinhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double atanhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __atanhl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double expl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __expl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double frexpl(long double __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) long double __frexpl(long double __x , int *__exponent ) ;
extern  __attribute__((__nothrow__)) long double ldexpl(long double __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) long double __ldexpl(long double __x , int __exponent ) ;
extern  __attribute__((__nothrow__)) long double logl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __logl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double log10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __log10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double modfl(long double __x , long double *__iptr ) ;
extern  __attribute__((__nothrow__)) long double __modfl(long double __x , long double *__iptr ) ;
extern  __attribute__((__nothrow__)) long double exp10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __exp10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double pow10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __pow10l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double expm1l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __expm1l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double log1pl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __log1pl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double logbl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __logbl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double exp2l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __exp2l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double log2l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __log2l(long double __x ) ;
extern  __attribute__((__nothrow__)) long double powl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double __powl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double sqrtl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __sqrtl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double hypotl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double __hypotl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double cbrtl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __cbrtl(long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long double ceill(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __ceill(long double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) long double fabsl(long double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) long double __fabsl(long double __x )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) long double floorl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __floorl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double fmodl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double __fmodl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) int __isinfl(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __finitel(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isinfl(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int finitel(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double dreml(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double __dreml(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double significandl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __significandl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double copysignl(long double __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __copysignl(long double __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double nanl(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __nanl(char const   *__tagb )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int __isnanl(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int isnanl(long double __value )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double j0l(long double  ) ;
extern  __attribute__((__nothrow__)) long double __j0l(long double  ) ;
extern  __attribute__((__nothrow__)) long double j1l(long double  ) ;
extern  __attribute__((__nothrow__)) long double __j1l(long double  ) ;
extern  __attribute__((__nothrow__)) long double jnl(int  , long double  ) ;
extern  __attribute__((__nothrow__)) long double __jnl(int  , long double  ) ;
extern  __attribute__((__nothrow__)) long double y0l(long double  ) ;
extern  __attribute__((__nothrow__)) long double __y0l(long double  ) ;
extern  __attribute__((__nothrow__)) long double y1l(long double  ) ;
extern  __attribute__((__nothrow__)) long double __y1l(long double  ) ;
extern  __attribute__((__nothrow__)) long double ynl(int  , long double  ) ;
extern  __attribute__((__nothrow__)) long double __ynl(int  , long double  ) ;
extern  __attribute__((__nothrow__)) long double erfl(long double  ) ;
extern  __attribute__((__nothrow__)) long double __erfl(long double  ) ;
extern  __attribute__((__nothrow__)) long double erfcl(long double  ) ;
extern  __attribute__((__nothrow__)) long double __erfcl(long double  ) ;
extern  __attribute__((__nothrow__)) long double lgammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double __lgammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double tgammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double __tgammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double gammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double __gammal(long double  ) ;
extern  __attribute__((__nothrow__)) long double lgammal_r(long double  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) long double __lgammal_r(long double  , int *__signgamp ) ;
extern  __attribute__((__nothrow__)) long double rintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __rintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double nextafterl(long double __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __nextafterl(long double __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double nexttowardl(long double __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __nexttowardl(long double __x , long double __y )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double remainderl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double __remainderl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double scalbnl(long double __x , int __n ) ;
extern  __attribute__((__nothrow__)) long double __scalbnl(long double __x , int __n ) ;
extern  __attribute__((__nothrow__)) int ilogbl(long double __x ) ;
extern  __attribute__((__nothrow__)) int __ilogbl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double scalblnl(long double __x , long __n ) ;
extern  __attribute__((__nothrow__)) long double __scalblnl(long double __x , long __n ) ;
extern  __attribute__((__nothrow__)) long double nearbyintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double __nearbyintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double roundl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __roundl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double truncl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double __truncl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double remquol(long double __x , long double __y , int *__quo ) ;
extern  __attribute__((__nothrow__)) long double __remquol(long double __x , long double __y , int *__quo ) ;
__inline extern  __attribute__((__nothrow__)) long lrintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long __lrintl(long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long long llrintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long long __llrintl(long double __x ) ;
extern  __attribute__((__nothrow__)) long lroundl(long double __x ) ;
extern  __attribute__((__nothrow__)) long __lroundl(long double __x ) ;
extern  __attribute__((__nothrow__)) long long llroundl(long double __x ) ;
extern  __attribute__((__nothrow__)) long long __llroundl(long double __x ) ;
extern  __attribute__((__nothrow__)) long double fdiml(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double __fdiml(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double fmaxl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double __fmaxl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double fminl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) long double __fminl(long double __x , long double __y ) ;
extern  __attribute__((__nothrow__)) int __fpclassifyl(long double __value )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long double fmal(long double __x , long double __y , long double __z ) ;
extern  __attribute__((__nothrow__)) long double __fmal(long double __x , long double __y , long double __z ) ;
extern  __attribute__((__nothrow__)) long double scalbl(long double __x , long double __n ) ;
extern  __attribute__((__nothrow__)) long double __scalbl(long double __x , long double __n ) ;
extern int signgam ;
extern _LIB_VERSION_TYPE _LIB_VERSION ;
extern int matherr(struct exception *__exc ) ;
__inline extern  __attribute__((__nothrow__)) int __signbitf(float __x )  __attribute__((__const__)) ;
__inline extern int __signbitf(float __x ) 
{ union __anonunion___u_24 __u ;

  {
  __u.__f = __x;
  return (__u.__i < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
__inline extern int __signbit(double __x ) 
{ union __anonunion___u_25 __u ;

  {
  __u.__d = __x;
  return (__u.__i[1] < 0);
}
}
__inline extern  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
__inline extern int __signbitl(long double __x ) 
{ union __anonunion___u_26 __u ;

  {
  __u.__l = __x;
  return ((__u.__i[2] & 0x8000) != 0);
}
}
__inline extern  __attribute__((__nothrow__)) double __sgn(double __x ) ;
__inline extern  __attribute__((__nothrow__)) double __sgn(double __x ) ;
__inline extern double __sgn(double __x ) 
{ double tmp ;
  double tmp___0 ;

  {
  if (__x == 0.0) {
    tmp___0 = 0.0;
  } else {
    if (__x > 0.0) {
      tmp = 1.0;
    } else {
      tmp = - 1.0;
    }
    tmp___0 = tmp;
  }
  return (tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) float __sgnf(float __x ) ;
__inline extern  __attribute__((__nothrow__)) float __sgnf(float __x ) ;
__inline extern float __sgnf(float __x ) 
{ double tmp ;
  double tmp___0 ;

  {
  if ((double )__x == 0.0) {
    tmp___0 = 0.0;
  } else {
    if ((double )__x > 0.0) {
      tmp = 1.0;
    } else {
      tmp = - 1.0;
    }
    tmp___0 = tmp;
  }
  return ((float )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) long double __sgnl(long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long double __sgnl(long double __x ) ;
__inline extern long double __sgnl(long double __x ) 
{ double tmp ;
  double tmp___0 ;

  {
  if (__x == (long double )0.0) {
    tmp___0 = 0.0;
  } else {
    if (__x > (long double )0.0) {
      tmp = 1.0;
    } else {
      tmp = - 1.0;
    }
    tmp___0 = tmp;
  }
  return ((long double )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) long double __atan2l(long double __y , long double __x ) ;
__inline extern long double __atan2l(long double __y , long double __x ) 
{ long double tmp ;

  {
  tmp = __builtin_atan2l(__y, __x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) double fabs(double __x )  __attribute__((__const__)) ;
__inline extern double fabs(double __x ) 
{ double tmp ;

  {
  tmp = __builtin_fabs(__x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) float fabsf(float __x )  __attribute__((__const__)) ;
__inline extern float fabsf(float __x ) 
{ float tmp ;

  {
  tmp = __builtin_fabsf(__x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long double fabsl(long double __x )  __attribute__((__const__)) ;
__inline extern long double fabsl(long double __x ) 
{ long double tmp ;

  {
  tmp = __builtin_fabsl(__x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long double __fabsl(long double __x )  __attribute__((__const__)) ;
__inline extern long double __fabsl(long double __x ) 
{ long double tmp ;

  {
  tmp = __builtin_fabsl(__x);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long double __sgn1l(long double __x ) ;
__inline extern  __attribute__((__nothrow__)) long double __sgn1l(long double __x ) ;
__inline extern long double __sgn1l(long double __x ) 
{ union __anonunion___n_27 __n ;

  {
  __n.__xld = __x;
  __n.__xi[2] = (__n.__xi[2] & 32768U) | 16383U;
  __n.__xi[1] = 0x80000000;
  __n.__xi[0] = 0U;
  return (__n.__xld);
}
}
__inline extern  __attribute__((__nothrow__)) double floor(double __x )  __attribute__((__const__)) ;
__inline extern double floor(double __x ) 
{ register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0400, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return ((double )__value);
}
}
__inline extern  __attribute__((__nothrow__)) float floorf(float __x )  __attribute__((__const__)) ;
__inline extern float floorf(float __x ) 
{ register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0400, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return ((float )__value);
}
}
__inline extern  __attribute__((__nothrow__)) long double floorl(long double __x )  __attribute__((__const__)) ;
__inline extern long double floorl(long double __x ) 
{ register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0400, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return (__value);
}
}
__inline extern  __attribute__((__nothrow__)) double ceil(double __x )  __attribute__((__const__)) ;
__inline extern double ceil(double __x ) 
{ register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0800, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return ((double )__value);
}
}
__inline extern  __attribute__((__nothrow__)) float ceilf(float __x )  __attribute__((__const__)) ;
__inline extern float ceilf(float __x ) 
{ register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0800, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return ((float )__value);
}
}
__inline extern  __attribute__((__nothrow__)) long double ceill(long double __x )  __attribute__((__const__)) ;
__inline extern long double ceill(long double __x ) 
{ register long double __value ;
  register int __ignore ;
  unsigned short __cw ;
  unsigned short __cwtmp ;

  {
  __asm__  volatile   ("fnstcw %3\n\t"
                       "movzwl %3, %1\n\t"
                       "andl $0xf3ff, %1\n\t"
                       "orl $0x0800, %1\n\t"
                       "movw %w1, %2\n\t"
                       "fldcw %2\n\t"
                       "frndint\n\t"
                       "fldcw %3": "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw): "0" (__x));
  return (__value);
}
}
__inline extern  __attribute__((__nothrow__)) long lrintf(float __x ) ;
__inline extern long lrintf(float __x ) 
{ long __lrintres ;

  {
  __asm__  volatile   ("fistpl %0": "=m" (__lrintres): "t" (__x): "st");
  return (__lrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long lrint(double __x ) ;
__inline extern long lrint(double __x ) 
{ long __lrintres ;

  {
  __asm__  volatile   ("fistpl %0": "=m" (__lrintres): "t" (__x): "st");
  return (__lrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long lrintl(long double __x ) ;
__inline extern long lrintl(long double __x ) 
{ long __lrintres ;

  {
  __asm__  volatile   ("fistpl %0": "=m" (__lrintres): "t" (__x): "st");
  return (__lrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long long llrintf(float __x ) ;
__inline extern long long llrintf(float __x ) 
{ long long __llrintres ;

  {
  __asm__  volatile   ("fistpll %0": "=m" (__llrintres): "t" (__x): "st");
  return (__llrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long long llrint(double __x ) ;
__inline extern long long llrint(double __x ) 
{ long long __llrintres ;

  {
  __asm__  volatile   ("fistpll %0": "=m" (__llrintres): "t" (__x): "st");
  return (__llrintres);
}
}
__inline extern  __attribute__((__nothrow__)) long long llrintl(long double __x ) ;
__inline extern long long llrintl(long double __x ) 
{ long long __llrintres ;

  {
  __asm__  volatile   ("fistpll %0": "=m" (__llrintres): "t" (__x): "st");
  return (__llrintres);
}
}
__inline extern  __attribute__((__nothrow__)) int __finite(double __x )  __attribute__((__const__)) ;
__inline extern int __finite(double __x ) 
{ union __anonunion_28 __constr_expr_0 ;

  {
  __constr_expr_0.__d = __x;
  return ((int )((((unsigned int )__constr_expr_0.__i[1] | 0x800fffffu) + 1U) >> 31));
}
}
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
extern void _IO_cookie_init(struct _IO_cookie_file *__cfile , int __read_write , void *__cookie , _IO_cookie_io_functions_t __fns ) ;
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
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   , __gnuc_va_list  , int * __restrict   ) ;
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   , __gnuc_va_list  ) ;
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
extern  __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
extern  __attribute__((__nothrow__)) int rename(char const   *__old , char const   *__new ) ;
extern  __attribute__((__nothrow__)) int renameat(int __oldfd , char const   *__old , int __newfd , char const   *__new ) ;
extern FILE *tmpfile(void) ;
extern FILE *tmpfile64(void) ;
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir , char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern int fcloseall(void) ;
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern FILE *freopen(char const   * __restrict  __filename , char const   * __restrict  __modes , FILE * __restrict  __stream ) ;
extern FILE *fopen64(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern FILE *freopen64(char const   * __restrict  __filename , char const   * __restrict  __modes , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd , char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *fopencookie(void * __restrict  __magic_cookie , char const   * __restrict  __modes , _IO_cookie_io_functions_t __io_funcs ) ;
extern  __attribute__((__nothrow__)) FILE *fmemopen(void *__s , size_t __len , char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *open_memstream(char **__bufloc , size_t *__sizeloc ) ;
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream , char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream , char * __restrict  __buf , int __modes , size_t __n ) ;
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream , char * __restrict  __buf , size_t __size ) ;
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format  , ...) ;
extern int vfprintf(FILE * __restrict  __s , char const   * __restrict  __format , __gnuc_va_list __arg ) ;
__inline extern int vprintf(char const   * __restrict  __fmt , __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s , char const   * __restrict  __format , __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s , size_t __maxlen , char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s , size_t __maxlen , char const   * __restrict  __format , __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vasprintf)(char ** __restrict  __ptr , char const   * __restrict  __f , __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  __asprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  asprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...) ;
extern int ( /* format attribute */  vdprintf)(int __fd , char const   * __restrict  __fmt , __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  dprintf)(int __fd , char const   * __restrict  __fmt  , ...) ;
extern int fscanf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int scanf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s , char const   * __restrict  __format  , ...) ;
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s , char const   * __restrict  __format , __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format , __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsscanf)(char const   * __restrict  __s , char const   * __restrict  __format , __gnuc_va_list __arg ) ;
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
extern char *fgets(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
extern char *gets(char *__s ) ;
extern char *fgets_unlocked(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr , size_t * __restrict  __n , int __delimiter , FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr , size_t * __restrict  __n , int __delimiter , FILE * __restrict  __stream ) ;
__inline extern __ssize_t getline(char ** __restrict  __lineptr , size_t * __restrict  __n , FILE * __restrict  __stream ) ;
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern int puts(char const   *__s ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __s ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern int fseek(FILE *__stream , long __off , int __whence ) ;
extern long ftell(FILE *__stream ) ;
extern void rewind(FILE *__stream ) ;
extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;
extern __off_t ftello(FILE *__stream ) ;
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos ) ;
extern int fsetpos(FILE *__stream , fpos_t const   *__pos ) ;
extern int fseeko64(FILE *__stream , __off64_t __off , int __whence ) ;
extern __off64_t ftello64(FILE *__stream ) ;
extern int fgetpos64(FILE * __restrict  __stream , fpos64_t * __restrict  __pos ) ;
extern int fsetpos64(FILE *__stream , fpos64_t const   *__pos ) ;
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
extern void perror(char const   *__s ) ;
extern int sys_nerr ;
extern char const   * const  sys_errlist[] ;
extern int _sys_nerr ;
extern char const   * const  _sys_errlist[] ;
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
extern FILE *popen(char const   *__command , char const   *__modes ) ;
extern int pclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
extern char *cuserid(char *__s ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  obstack_printf)(struct obstack * __restrict  __obstack , char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  obstack_vprintf)(struct obstack * __restrict  __obstack , char const   * __restrict  __format , __gnuc_va_list __args ) ;
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
__inline extern int vprintf(char const   * __restrict  __fmt , __gnuc_va_list __arg ) 
{ int tmp ;

  {
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  return (tmp);
}
}
__inline extern int getchar(void) 
{ int tmp ;

  {
  tmp = _IO_getc(stdin);
  return (tmp);
}
}
__inline extern int fgetc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end), 0L);
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
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end), 0L);
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
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned int )stdin->_IO_read_ptr >= (unsigned int )stdin->_IO_read_end), 0L);
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
{ int tmp ;

  {
  tmp = _IO_putc(__c, stdout);
  return (tmp);
}
}
__inline extern int fputc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end), 0L);
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
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end), 0L);
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
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )stdout->_IO_write_ptr >= (unsigned int )stdout->_IO_write_end), 0L);
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
__inline extern __ssize_t getline(char ** __restrict  __lineptr , size_t * __restrict  __n , FILE * __restrict  __stream ) 
{ __ssize_t tmp ;

  {
  tmp = __getdelim(__lineptr, __n, '\n', __stream);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern int feof_unlocked(FILE *__stream ) 
{ 

  {
  return ((__stream->_flags & 0x10) != 0);
}
}
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
__inline extern int ferror_unlocked(FILE *__stream ) 
{ 

  {
  return ((__stream->_flags & 0x20) != 0);
}
}
extern  __attribute__((__nothrow__)) void _dl_mcount_wrapper_check(void *__selfpc ) ;
extern  __attribute__((__nothrow__)) void *dlopen(char const   *__file , int __mode ) ;
extern  __attribute__((__nothrow__)) int dlclose(void *__handle )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *dlsym(void * __restrict  __handle , char const   * __restrict  __name )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) void *dlmopen(Lmid_t __nsid , char const   *__file , int __mode ) ;
extern  __attribute__((__nothrow__)) void *dlvsym(void * __restrict  __handle , char const   * __restrict  __name , char const   * __restrict  __version )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) char *dlerror(void) ;
extern  __attribute__((__nothrow__)) int dladdr(void const   *__address , Dl_info *__info )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int dladdr1(void const   *__address , Dl_info *__info , void **__extra_info , int __flags )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int dlinfo(void * __restrict  __handle , int __request , void * __restrict  __arg )  __attribute__((__nonnull__(1,3))) ;
extern char __attribute__((__visibility__("default")))  *zend_strndup(char const   *s , unsigned int length )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  *_emalloc(size_t size )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  *_safe_emalloc(size_t nmemb , size_t size , size_t offset )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  *_safe_malloc(size_t nmemb , size_t size , size_t offset )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  _efree(void *ptr ) ;
extern void __attribute__((__visibility__("default")))  *_ecalloc(size_t nmemb , size_t size )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  *_erealloc(void *ptr , size_t size , int allow_failure ) ;
extern void __attribute__((__visibility__("default")))  *_safe_erealloc(void *ptr , size_t nmemb , size_t size , size_t offset ) ;
extern void __attribute__((__visibility__("default")))  *_safe_realloc(void *ptr , size_t nmemb , size_t size , size_t offset ) ;
extern char __attribute__((__visibility__("default")))  *_estrdup(char const   *s )  __attribute__((__malloc__)) ;
extern char __attribute__((__visibility__("default")))  *_estrndup(char const   *s , unsigned int length )  __attribute__((__malloc__)) ;
extern size_t __attribute__((__visibility__("default")))  _zend_mem_block_size(void *ptr ) ;
__inline static void *__zend_malloc(size_t len ) 
{ void *tmp ;
  void *tmp___0 ;

  {
  tmp___0 = malloc(len);
  tmp = tmp___0;
  if (tmp) {
    return (tmp);
  } else {

  }
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Out of memory\n");
  exit(1);
}
}
__inline static void *__zend_calloc(size_t nmemb , size_t len ) 
{ void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;

  {
  tmp___0 = _safe_malloc(nmemb, len, 0U);
  tmp = (void *)tmp___0;
  memset(tmp, 0, nmemb * len);
  return (tmp);
}
}
__inline static void *__zend_realloc(void *p , size_t len ) 
{ 

  {
  p = realloc(p, len);
  if (p) {
    return (p);
  } else {

  }
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Out of memory\n");
  exit(1);
}
}
extern int __attribute__((__visibility__("default")))  zend_set_memory_limit(size_t memory_limit ) ;
extern void __attribute__((__visibility__("default")))  start_memory_manager(void) ;
extern void __attribute__((__visibility__("default")))  shutdown_memory_manager(int silent , int full_shutdown ) ;
extern int __attribute__((__visibility__("default")))  is_zend_mm(void) ;
extern size_t __attribute__((__visibility__("default")))  zend_memory_usage(int real_usage ) ;
extern size_t __attribute__((__visibility__("default")))  zend_memory_peak_usage(int real_usage ) ;
extern zend_mm_heap __attribute__((__visibility__("default")))  *zend_mm_startup(void) ;
extern void __attribute__((__visibility__("default")))  zend_mm_shutdown(zend_mm_heap *heap , int full_shutdown , int silent ) ;
extern void __attribute__((__visibility__("default")))  *_zend_mm_alloc(zend_mm_heap *heap , size_t size )  __attribute__((__malloc__)) ;
extern void __attribute__((__visibility__("default")))  _zend_mm_free(zend_mm_heap *heap , void *p ) ;
extern void __attribute__((__visibility__("default")))  *_zend_mm_realloc(zend_mm_heap *heap , void *p , size_t size ) ;
extern size_t __attribute__((__visibility__("default")))  _zend_mm_block_size(zend_mm_heap *heap , void *p ) ;
extern zend_mm_heap __attribute__((__visibility__("default")))  *zend_mm_startup_ex(zend_mm_mem_handlers const   *handlers , size_t block_size , size_t reserve_size , int internal , void *params ) ;
extern zend_mm_heap __attribute__((__visibility__("default")))  *zend_mm_set_heap(zend_mm_heap *new_heap ) ;
extern zend_mm_storage __attribute__((__visibility__("default")))  *zend_mm_get_storage(zend_mm_heap *heap ) ;
extern void __attribute__((__visibility__("default")))  zend_mm_set_custom_handlers(zend_mm_heap *heap , void *(*_malloc)(size_t  ) , void (*_free)(void * ) , void *(*_realloc)(void * , size_t  ) ) ;
extern char const __attribute__((__visibility__("default")))  *(*zend_new_interned_string)(char const   *str , int len , int free_src ) ;
extern void __attribute__((__visibility__("default")))  (*zend_interned_strings_snapshot)(void) ;
extern void __attribute__((__visibility__("default")))  (*zend_interned_strings_restore)(void) ;
extern void zend_interned_strings_init(void) ;
extern void zend_interned_strings_dtor(void) ;
static char const   long_min_digits[11]  = 
  {      (char const   )'2',      (char const   )'1',      (char const   )'4',      (char const   )'7', 
        (char const   )'4',      (char const   )'8',      (char const   )'3',      (char const   )'6', 
        (char const   )'4',      (char const   )'8',      (char const   )'\000'};
extern int __attribute__((__visibility__("default")))  _zend_hash_init(HashTable *ht , uint nSize , ulong (*pHashFunction)(char const   *arKey , uint nKeyLength ) , void (*pDestructor)(void *pDest ) , zend_bool persistent ) ;
extern int __attribute__((__visibility__("default")))  _zend_hash_init_ex(HashTable *ht , uint nSize , ulong (*pHashFunction)(char const   *arKey , uint nKeyLength ) , void (*pDestructor)(void *pDest ) , zend_bool persistent , zend_bool bApplyProtection ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_destroy(HashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_clean(HashTable *ht ) ;
extern int __attribute__((__visibility__("default")))  _zend_hash_add_or_update(HashTable *ht , char const   *arKey , uint nKeyLength , void *pData , uint nDataSize , void **pDest , int flag ) ;
extern int __attribute__((__visibility__("default")))  _zend_hash_quick_add_or_update(HashTable *ht , char const   *arKey , uint nKeyLength , ulong h , void *pData , uint nDataSize , void **pDest , int flag ) ;
extern int __attribute__((__visibility__("default")))  _zend_hash_index_update_or_next_insert(HashTable *ht , ulong h , void *pData , uint nDataSize , void **pDest , int flag ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_add_empty_element(HashTable *ht , char const   *arKey , uint nKeyLength ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_graceful_destroy(HashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_graceful_reverse_destroy(HashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_apply(HashTable *ht , int (*apply_func)(void *pDest ) ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_apply_with_argument(HashTable *ht , int (*apply_func)(void *pDest , void *argument ) , void * ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_apply_with_arguments(HashTable *ht , int (*apply_func)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ) , int   , ...) ;
extern void __attribute__((__visibility__("default")))  zend_hash_reverse_apply(HashTable *ht , int (*apply_func)(void *pDest ) ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_del_key_or_index(HashTable *ht , char const   *arKey , uint nKeyLength , ulong h , int flag ) ;
extern ulong __attribute__((__visibility__("default")))  zend_get_hash_value(char const   *arKey , uint nKeyLength ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_find(HashTable const   *ht , char const   *arKey , uint nKeyLength , void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_quick_find(HashTable const   *ht , char const   *arKey , uint nKeyLength , ulong h , void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_index_find(HashTable const   *ht , ulong h , void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_exists(HashTable const   *ht , char const   *arKey , uint nKeyLength ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_quick_exists(HashTable const   *ht , char const   *arKey , uint nKeyLength , ulong h ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_index_exists(HashTable const   *ht , ulong h ) ;
extern ulong __attribute__((__visibility__("default")))  zend_hash_next_free_element(HashTable const   *ht ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_move_forward_ex(HashTable *ht , HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_move_backwards_ex(HashTable *ht , HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_get_current_key_ex(HashTable const   *ht , char **str_index , uint *str_length , ulong *num_index , zend_bool duplicate , HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_get_current_key_type_ex(HashTable *ht , HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_get_current_data_ex(HashTable *ht , void **pData , HashPosition *pos ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_internal_pointer_reset_ex(HashTable *ht , HashPosition *pos ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_internal_pointer_end_ex(HashTable *ht , HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_update_current_key_ex(HashTable *ht , int key_type , char const   *str_index , uint str_length , ulong num_index , int mode , HashPosition *pos ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_get_pointer(HashTable const   *ht , HashPointer *ptr ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_set_pointer(HashTable *ht , HashPointer const   *ptr ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_copy(HashTable *target , HashTable *source , void (*pCopyConstructor)(void *pElement ) , void *tmp , uint size ) ;
extern void __attribute__((__visibility__("default")))  _zend_hash_merge(HashTable *target , HashTable *source , void (*pCopyConstructor)(void *pElement ) , void *tmp , uint size , int overwrite ) ;
extern void __attribute__((__visibility__("default")))  zend_hash_merge_ex(HashTable *target , HashTable *source , void (*pCopyConstructor)(void *pElement ) , uint size , zend_bool (*pMergeSource)(HashTable *target_ht , void *source_data , zend_hash_key *hash_key , void *pParam ) , void *pParam ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_sort(HashTable *ht , void (*sort_func)(void * , size_t  , size_t  , int (*)(void const   * , void const   * ) ) , int (*compare_func)(void const   * , void const   * ) , int renumber ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_compare(HashTable *ht1 , HashTable *ht2 , int (*compar)(void const   * , void const   * ) , zend_bool ordered ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_minmax(HashTable const   *ht , int (*compar)(void const   * , void const   * ) , int flag , void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_num_elements(HashTable const   *ht ) ;
extern int __attribute__((__visibility__("default")))  zend_hash_rehash(HashTable *ht ) ;
__inline static ulong zend_inline_hash_func(char const   *arKey , uint nKeyLength ) 
{ register ulong hash ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  char const   *tmp___10 ;
  char const   *tmp___11 ;
  char const   *tmp___12 ;
  char const   *tmp___13 ;

  {
  hash = (ulong )5381;
  while (nKeyLength >= 8U) {
    tmp = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp;
    tmp___0 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___0;
    tmp___1 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___1;
    tmp___2 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___2;
    tmp___3 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___3;
    tmp___4 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___4;
    tmp___5 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___5;
    tmp___6 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (ulong )*tmp___6;
    nKeyLength -= 8U;
  }
  switch ((int )nKeyLength) {
  case 7: 
  tmp___7 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___7;
  case 6: 
  tmp___8 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___8;
  case 5: 
  tmp___9 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___9;
  case 4: 
  tmp___10 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___10;
  case 3: 
  tmp___11 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___11;
  case 2: 
  tmp___12 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___12;
  case 1: 
  tmp___13 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (ulong )*tmp___13;
  break;
  case 0: 
  break;
  }
  return (hash);
}
}
extern ulong __attribute__((__visibility__("default")))  zend_hash_func(char const   *arKey , uint nKeyLength ) ;
__inline static int zend_symtable_update(HashTable *ht , char const   *arKey , uint nKeyLength , void *pData , uint nDataSize , void **pDest ) 
{ ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else {
            if ((int const   )*tmp == 48) {
              if (nKeyLength > 2U) {
                break;
              } else {
                goto _L;
              }
            } else {
              _L: /* CIL Label */ 
              if (end - tmp > 10) {
                break;
              } else {
                if (end - tmp == 10) {
                  if ((int const   )*tmp > 50) {
                    break;
                  } else {

                  }
                } else {

                }
              }
            }
          }
          idx = (unsigned long )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (unsigned long )(- ((long )idx));
            } else {
              if (idx > 2147483647UL) {
                break;
              } else {

              }
            }
            tmp___0 = _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, 1);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize, pDest, 1);
  return ((int )tmp___1);
}
}
__inline static int zend_symtable_del(HashTable *ht , char const   *arKey , uint nKeyLength ) 
{ ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else {
            if ((int const   )*tmp == 48) {
              if (nKeyLength > 2U) {
                break;
              } else {
                goto _L;
              }
            } else {
              _L: /* CIL Label */ 
              if (end - tmp > 10) {
                break;
              } else {
                if (end - tmp == 10) {
                  if ((int const   )*tmp > 50) {
                    break;
                  } else {

                  }
                } else {

                }
              }
            }
          }
          idx = (unsigned long )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (unsigned long )(- ((long )idx));
            } else {
              if (idx > 2147483647UL) {
                break;
              } else {

              }
            }
            tmp___0 = zend_hash_del_key_or_index(ht, (char const   *)((void *)0), 0U, idx, 1);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0UL, 0);
  return ((int )tmp___1);
}
}
__inline static int zend_symtable_find(HashTable *ht , char const   *arKey , uint nKeyLength , void **pData ) 
{ ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else {
            if ((int const   )*tmp == 48) {
              if (nKeyLength > 2U) {
                break;
              } else {
                goto _L;
              }
            } else {
              _L: /* CIL Label */ 
              if (end - tmp > 10) {
                break;
              } else {
                if (end - tmp == 10) {
                  if ((int const   )*tmp > 50) {
                    break;
                  } else {

                  }
                } else {

                }
              }
            }
          }
          idx = (unsigned long )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (unsigned long )(- ((long )idx));
            } else {
              if (idx > 2147483647UL) {
                break;
              } else {

              }
            }
            tmp___0 = zend_hash_index_find((HashTable const   *)ht, idx, pData);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = zend_hash_find((HashTable const   *)ht, arKey, nKeyLength, pData);
  return ((int )tmp___1);
}
}
__inline static int zend_symtable_exists(HashTable *ht , char const   *arKey , uint nKeyLength ) 
{ ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else {
            if ((int const   )*tmp == 48) {
              if (nKeyLength > 2U) {
                break;
              } else {
                goto _L;
              }
            } else {
              _L: /* CIL Label */ 
              if (end - tmp > 10) {
                break;
              } else {
                if (end - tmp == 10) {
                  if ((int const   )*tmp > 50) {
                    break;
                  } else {

                  }
                } else {

                }
              }
            }
          }
          idx = (unsigned long )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (unsigned long )(- ((long )idx));
            } else {
              if (idx > 2147483647UL) {
                break;
              } else {

              }
            }
            tmp___0 = zend_hash_index_exists((HashTable const   *)ht, idx);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = zend_hash_exists((HashTable const   *)ht, arKey, nKeyLength);
  return ((int )tmp___1);
}
}
__inline static int zend_symtable_update_current_key_ex(HashTable *ht , char const   *arKey , uint nKeyLength , int mode , HashPosition *pos ) 
{ ulong idx ;
  register char const   *tmp ;
  char const   *end ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  while (1) {
    while (1) {
      tmp = arKey;
      if ((int const   )*tmp == 45) {
        tmp ++;
      } else {

      }
      if ((int const   )*tmp >= 48) {
        if ((int const   )*tmp <= 57) {
          end = (arKey + nKeyLength) - 1;
          if ((int const   )*end != 0) {
            break;
          } else {
            if ((int const   )*tmp == 48) {
              if (nKeyLength > 2U) {
                break;
              } else {
                goto _L;
              }
            } else {
              _L: /* CIL Label */ 
              if (end - tmp > 10) {
                break;
              } else {
                if (end - tmp == 10) {
                  if ((int const   )*tmp > 50) {
                    break;
                  } else {

                  }
                } else {

                }
              }
            }
          }
          idx = (unsigned long )((int const   )*tmp - 48);
          while (1) {
            tmp ++;
            if ((unsigned int )tmp != (unsigned int )end) {
              if ((int const   )*tmp >= 48) {
                if ((int const   )*tmp <= 57) {

                } else {
                  break;
                }
              } else {
                break;
              }
            } else {
              break;
            }
            idx = idx * 10UL + (ulong )((int const   )*tmp - 48);
          }
          if ((unsigned int )tmp == (unsigned int )end) {
            if ((int const   )*arKey == 45) {
              if (idx - 1UL > 2147483647UL) {
                break;
              } else {

              }
              idx = (unsigned long )(- ((long )idx));
            } else {
              if (idx > 2147483647UL) {
                break;
              } else {

              }
            }
            tmp___0 = zend_hash_update_current_key_ex(ht, 2, (char const   *)((void *)0), 0U, idx, mode, pos);
            return ((int )tmp___0);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
    }
    break;
  }
  tmp___1 = zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0UL, mode, pos);
  return ((int )tmp___1);
}
}
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_init(TsHashTable *ht , uint nSize , ulong (*pHashFunction)(char const   *arKey , uint nKeyLength ) , void (*pDestructor)(void *pDest ) , zend_bool persistent ) ;
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_init_ex(TsHashTable *ht , uint nSize , ulong (*pHashFunction)(char const   *arKey , uint nKeyLength ) , void (*pDestructor)(void *pDest ) , zend_bool persistent , zend_bool bApplyProtection ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_destroy(TsHashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_clean(TsHashTable *ht ) ;
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_add_or_update(TsHashTable *ht , char *arKey , uint nKeyLength , void *pData , uint nDataSize , void **pDest , int flag ) ;
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_quick_add_or_update(TsHashTable *ht , char *arKey , uint nKeyLength , ulong h , void *pData , uint nDataSize , void **pDest , int flag ) ;
extern int __attribute__((__visibility__("default")))  _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht , ulong h , void *pData , uint nDataSize , void **pDest , int flag ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_add_empty_element(TsHashTable *ht , char *arKey , uint nKeyLength ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_graceful_destroy(TsHashTable *ht ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_apply(TsHashTable *ht , int (*apply_func)(void *pDest ) ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_apply_with_argument(TsHashTable *ht , int (*apply_func)(void *pDest , void *argument ) , void * ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_apply_with_arguments(TsHashTable *ht , int (*apply_func)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ) , int   , ...) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_reverse_apply(TsHashTable *ht , int (*apply_func)(void *pDest ) ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_del_key_or_index(TsHashTable *ht , char *arKey , uint nKeyLength , ulong h , int flag ) ;
extern ulong __attribute__((__visibility__("default")))  zend_ts_get_hash_value(TsHashTable *ht , char *arKey , uint nKeyLength ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_find(TsHashTable *ht , char *arKey , uint nKeyLength , void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_quick_find(TsHashTable *ht , char *arKey , uint nKeyLength , ulong h , void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_index_find(TsHashTable *ht , ulong h , void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_exists(TsHashTable *ht , char *arKey , uint nKeyLength ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_index_exists(TsHashTable *ht , ulong h ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_copy(TsHashTable *target , TsHashTable *source , void (*pCopyConstructor)(void *pElement ) , void *tmp , uint size ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_copy_to_hash(HashTable *target , TsHashTable *source , void (*pCopyConstructor)(void *pElement ) , void *tmp , uint size ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_merge(TsHashTable *target , TsHashTable *source , void (*pCopyConstructor)(void *pElement ) , void *tmp , uint size , int overwrite ) ;
extern void __attribute__((__visibility__("default")))  zend_ts_hash_merge_ex(TsHashTable *target , TsHashTable *source , void (*pCopyConstructor)(void *pElement ) , uint size , zend_bool (*pMergeSource)(HashTable *target_ht , void *source_data , zend_hash_key *hash_key , void *pParam ) , void *pParam ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_sort(TsHashTable *ht , void (*sort_func)(void * , size_t  , size_t  , int (*)(void const   * , void const   * ) ) , int (*compare_func)(void const   * , void const   * ) , int renumber ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_compare(TsHashTable *ht1 , TsHashTable *ht2 , int (*compar)(void const   * , void const   * ) , zend_bool ordered ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_minmax(TsHashTable *ht , int (*compar)(void const   * , void const   * ) , int flag , void **pData ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_num_elements(TsHashTable *ht ) ;
extern int __attribute__((__visibility__("default")))  zend_ts_hash_rehash(TsHashTable *ht ) ;
extern ulong __attribute__((__visibility__("default")))  zend_ts_hash_func(char *arKey , uint nKeyLength ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_init(zend_llist *l , size_t size , void (*dtor)(void * ) , unsigned char persistent ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_add_element(zend_llist *l , void *element ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_prepend_element(zend_llist *l , void *element ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_del_element(zend_llist *l , void *element , int (*compare)(void *element1 , void *element2 ) ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_destroy(zend_llist *l ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_clean(zend_llist *l ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_remove_tail(zend_llist *l ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_copy(zend_llist *dst , zend_llist *src ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_apply(zend_llist *l , void (*func)(void * ) ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_apply_with_del(zend_llist *l , int (*func)(void *data ) ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_apply_with_argument(zend_llist *l , void (*func)(void *data , void *arg ) , void *arg ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_apply_with_arguments(zend_llist *l , void (*func)(void *data , int num_args , va_list args ) , int num_args  , ...) ;
extern int __attribute__((__visibility__("default")))  zend_llist_count(zend_llist *l ) ;
extern void __attribute__((__visibility__("default")))  zend_llist_sort(zend_llist *l , int (*comp_func)(zend_llist_element const   ** , zend_llist_element const   ** ) ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_get_first_ex(zend_llist *l , zend_llist_position *pos ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_get_last_ex(zend_llist *l , zend_llist_position *pos ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_get_next_ex(zend_llist *l , zend_llist_position *pos ) ;
extern void __attribute__((__visibility__("default")))  *zend_llist_get_prev_ex(zend_llist *l , zend_llist_position *pos ) ;
extern  __attribute__((__noreturn__)) void zend_error_noreturn(int type , char const   *format  , ...) ;
extern zend_object_handlers __attribute__((__visibility__("default")))  std_object_handlers ;
extern union _zend_function  __attribute__((__visibility__("default"))) *zend_std_get_static_method(zend_class_entry *ce , char const   *function_name_strval , int function_name_strlen , struct _zend_literal  const  *key ) ;
extern zval __attribute__((__visibility__("default")))  **zend_std_get_static_property(zend_class_entry *ce , char const   *property_name , int property_name_len , zend_bool silent , struct _zend_literal  const  *key ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_std_unset_static_property(zend_class_entry *ce , char const   *property_name , int property_name_len , struct _zend_literal  const  *key ) ;
extern union _zend_function  __attribute__((__visibility__("default"))) *zend_std_get_constructor(zval *object ) ;
extern struct _zend_property_info  __attribute__((__visibility__("default"))) *zend_get_property_info(zend_class_entry *ce , zval *member , int silent ) ;
extern HashTable __attribute__((__visibility__("default")))  *zend_std_get_properties(zval *object ) ;
extern HashTable __attribute__((__visibility__("default")))  *zend_std_get_debug_info(zval *object , int *is_temp ) ;
extern int __attribute__((__visibility__("default")))  zend_std_cast_object_tostring(zval *readobj , zval *writeobj , int type ) ;
extern void __attribute__((__visibility__("default")))  zend_std_write_property(zval *object , zval *member , zval *value , struct _zend_literal  const  *key ) ;
extern void __attribute__((__visibility__("default")))  rebuild_object_properties(zend_object *zobj ) ;
extern int __attribute__((__visibility__("default")))  zend_check_private(union _zend_function *fbc , zend_class_entry *ce , char *function_name_strval , int function_name_strlen ) ;
extern int __attribute__((__visibility__("default")))  zend_check_protected(zend_class_entry *ce , zend_class_entry *scope ) ;
extern int __attribute__((__visibility__("default")))  zend_check_property_access(zend_object *zobj , char const   *prop_info_name , int prop_info_name_len ) ;
extern void __attribute__((__visibility__("default")))  zend_std_call_user_call(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
__inline static zend_uint ( __attribute__((__always_inline__)) zval_refcount_p)(zval *pz ) 
{ 

  {
  return (pz->refcount__gc);
}
}
__inline static zend_uint ( __attribute__((__always_inline__)) zval_set_refcount_p)(zval *pz , zend_uint rc ) 
{ zend_uint tmp ;

  {
  tmp = rc;
  pz->refcount__gc = tmp;
  return (tmp);
}
}
__inline static zend_uint ( __attribute__((__always_inline__)) zval_addref_p)(zval *pz ) 
{ 

  {
  (pz->refcount__gc) ++;
  return (pz->refcount__gc);
}
}
__inline static zend_uint ( __attribute__((__always_inline__)) zval_delref_p)(zval *pz ) 
{ 

  {
  (pz->refcount__gc) --;
  return (pz->refcount__gc);
}
}
__inline static zend_bool ( __attribute__((__always_inline__)) zval_isref_p)(zval *pz ) 
{ 

  {
  return (pz->is_ref__gc);
}
}
__inline static zend_bool ( __attribute__((__always_inline__)) zval_set_isref_p)(zval *pz ) 
{ zend_uchar tmp ;

  {
  tmp = (unsigned char)1;
  pz->is_ref__gc = tmp;
  return (tmp);
}
}
__inline static zend_bool ( __attribute__((__always_inline__)) zval_unset_isref_p)(zval *pz ) 
{ zend_uchar tmp ;

  {
  tmp = (unsigned char)0;
  pz->is_ref__gc = tmp;
  return (tmp);
}
}
__inline static zend_bool ( __attribute__((__always_inline__)) zval_set_isref_to_p)(zval *pz , zend_bool isref ) 
{ zend_uchar tmp ;

  {
  tmp = isref;
  pz->is_ref__gc = tmp;
  return (tmp);
}
}
extern enum zend_object_iterator_kind  __attribute__((__visibility__("default"))) zend_iterator_unwrap(zval *array_ptr , zend_object_iterator **iter ) ;
extern zval __attribute__((__visibility__("default")))  *zend_iterator_wrap(zend_object_iterator *iter ) ;
extern void __attribute__((__visibility__("default")))  zend_register_iterator_wrapper(void) ;
extern int __attribute__((__visibility__("default")))  zend_stream_open(char const   *filename , zend_file_handle *handle ) ;
extern int __attribute__((__visibility__("default")))  zend_stream_fixup(zend_file_handle *file_handle , char **buf , size_t *len ) ;
extern void __attribute__((__visibility__("default")))  zend_file_handle_dtor(zend_file_handle *fh ) ;
extern int __attribute__((__visibility__("default")))  zend_compare_file_handles(zend_file_handle *fh1 , zend_file_handle *fh2 ) ;
extern int zend_startup(zend_utility_functions *utility_functions , char **extensions ) ;
extern void zend_shutdown(void) ;
extern void zend_register_standard_ini_entries(void) ;
extern void zend_post_startup(void) ;
extern void zend_set_utility_values(zend_utility_values *utility_values ) ;
extern void __attribute__((__visibility__("default")))  _zend_bailout(char *filename , uint lineno ) ;
extern char __attribute__((__visibility__("default")))  *get_zend_version(void) ;
extern void __attribute__((__visibility__("default")))  zend_make_printable_zval(zval *expr , zval *expr_copy , int *use_copy ) ;
extern int __attribute__((__visibility__("default")))  zend_print_zval(zval *expr , int indent ) ;
extern int __attribute__((__visibility__("default")))  zend_print_zval_ex(int (*write_func)(char const   *str , uint str_length ) , zval *expr , int indent ) ;
extern void __attribute__((__visibility__("default")))  zend_print_zval_r(zval *expr , int indent ) ;
extern void __attribute__((__visibility__("default")))  zend_print_flat_zval_r(zval *expr ) ;
extern void __attribute__((__visibility__("default")))  zend_print_zval_r_ex(int (*write_func)(char const   *str , uint str_length ) , zval *expr , int indent ) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  zend_output_debug_string)(zend_bool trigger_break , char const   *format  , ...) ;
extern void zend_activate(void) ;
extern void zend_deactivate(void) ;
extern void zend_call_destructors(void) ;
extern void zend_activate_modules(void) ;
extern void zend_deactivate_modules(void) ;
extern void zend_post_deactivate_modules(void) ;
extern void __attribute__((__visibility__("default")))  free_estring(char **str_p ) ;
extern int __attribute__((__visibility__("default")))  ( /* format attribute */  (*zend_printf))(char const   *format  , ...) ;
extern int (* __attribute__((__visibility__("default"))) zend_write)(char const   *str , uint str_length ) ;
extern FILE __attribute__((__visibility__("default")))  *(*zend_fopen)(char const   *filename , char **opened_path ) ;
extern void __attribute__((__visibility__("default")))  (*zend_ticks_function)(int ticks ) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  (*zend_error_cb))(int type , char const   *error_filename , uint error_lineno , char const   *format , va_list args ) ;
extern void __attribute__((__visibility__("default")))  (*zend_on_timeout)(int seconds ) ;
extern int __attribute__((__visibility__("default")))  (*zend_stream_open_function)(char const   *filename , zend_file_handle *handle ) ;
extern int (*zend_vspprintf)(char **pbuf , size_t max_len , char const   *format , va_list ap ) ;
extern char __attribute__((__visibility__("default")))  *(*zend_getenv)(char *name , size_t name_len ) ;
extern char __attribute__((__visibility__("default")))  *(*zend_resolve_path)(char const   *filename , int filename_len ) ;
extern void __attribute__((__visibility__("default")))  ( /* format attribute */  zend_error)(int type , char const   *format  , ...) ;
extern void zenderror(char const   *error ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_standard_class_def ;
extern zend_utility_values __attribute__((__visibility__("default")))  zend_uv ;
extern zval __attribute__((__visibility__("default")))  zval_used_for_init ;
__inline extern int __sigismember(__sigset_t const   *__set , int __sig ) ;
__inline extern int __sigaddset(__sigset_t *__set , int __sig ) ;
__inline extern int __sigdelset(__sigset_t *__set , int __sig ) ;
__inline extern int __sigismember(__sigset_t const   *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  if (__set->__val[__word] & __mask) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
__inline extern int __sigaddset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  __set->__val[__word] |= __mask;
  return (0);
}
}
__inline extern int __sigdelset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  __set->__val[__word] &= ~ __mask;
  return (0);
}
}
extern  __attribute__((__nothrow__)) __sighandler_t __sysv_signal(int __sig , void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) __sighandler_t sysv_signal(int __sig , void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig , void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) __sighandler_t bsd_signal(int __sig , void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig ) ;
extern  __attribute__((__nothrow__)) int killpg(__pid_t __pgrp , int __sig ) ;
extern  __attribute__((__nothrow__)) int raise(int __sig ) ;
extern  __attribute__((__nothrow__)) __sighandler_t ssignal(int __sig , void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) int gsignal(int __sig ) ;
extern void psignal(int __sig , char const   *__s ) ;
extern void psiginfo(siginfo_t const   *__pinfo , char const   *__s ) ;
extern int __sigpause(int __sig_or_mask , int __is_sig ) ;
extern int sigpause(int __sig )  __asm__("__xpg_sigpause")  ;
extern  __attribute__((__nothrow__)) int sigblock(int __mask )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigsetmask(int __mask )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int siggetmask(void)  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigemptyset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigfillset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigaddset(sigset_t *__set , int __signo )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigdelset(sigset_t *__set , int __signo )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigismember(sigset_t const   *__set , int __signo )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigisemptyset(sigset_t const   *__set )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigandset(sigset_t *__set , sigset_t const   *__left , sigset_t const   *__right )  __attribute__((__nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) int sigorset(sigset_t *__set , sigset_t const   *__left , sigset_t const   *__right )  __attribute__((__nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) int sigprocmask(int __how , sigset_t const   * __restrict  __set , sigset_t * __restrict  __oset ) ;
extern int sigsuspend(sigset_t const   *__set )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigaction(int __sig , struct sigaction  const  * __restrict  __act , struct sigaction * __restrict  __oact ) ;
extern  __attribute__((__nothrow__)) int sigpending(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
extern int sigwait(sigset_t const   * __restrict  __set , int * __restrict  __sig )  __attribute__((__nonnull__(1,2))) ;
extern int sigwaitinfo(sigset_t const   * __restrict  __set , siginfo_t * __restrict  __info )  __attribute__((__nonnull__(1))) ;
extern int sigtimedwait(sigset_t const   * __restrict  __set , siginfo_t * __restrict  __info , struct timespec  const  * __restrict  __timeout )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigqueue(__pid_t __pid , int __sig , union sigval __val ) ;
extern char const   * const  _sys_siglist[65] ;
extern char const   * const  sys_siglist[65] ;
extern  __attribute__((__nothrow__)) int sigvec(int __sig , struct sigvec  const  *__vec , struct sigvec *__ovec ) ;
extern  __attribute__((__nothrow__)) int sigreturn(struct sigcontext *__scp ) ;
extern  __attribute__((__nothrow__)) int siginterrupt(int __sig , int __interrupt ) ;
extern  __attribute__((__nothrow__)) int sigstack(struct sigstack *__ss , struct sigstack *__oss )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigaltstack(struct sigaltstack  const  * __restrict  __ss , struct sigaltstack * __restrict  __oss ) ;
extern  __attribute__((__nothrow__)) int sighold(int __sig ) ;
extern  __attribute__((__nothrow__)) int sigrelse(int __sig ) ;
extern  __attribute__((__nothrow__)) int sigignore(int __sig ) ;
extern  __attribute__((__nothrow__)) __sighandler_t sigset(int __sig , void (*__disp)(int  ) ) ;
extern  __attribute__((__nothrow__)) int pthread_sigmask(int __how , __sigset_t const   * __restrict  __newmask , __sigset_t * __restrict  __oldmask ) ;
extern  __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid , int __signo ) ;
extern  __attribute__((__nothrow__)) int pthread_sigqueue(pthread_t __threadid , int __signo , union sigval __value ) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;
extern zend_signal_globals_t __attribute__((__visibility__("default")))  zend_signal_globals ;
extern void zend_signal_handler_defer(int signo , siginfo_t *siginfo , void *context ) ;
extern void zend_signal_handler_unblock() ;
extern void zend_signal_activate(void) ;
extern void zend_signal_deactivate(void) ;
extern void zend_signal_startup() ;
extern void zend_signal_shutdown(void) ;
extern int __attribute__((__visibility__("default")))  zend_signal(int signo , void (*handler)(int  ) ) ;
extern int __attribute__((__visibility__("default")))  zend_sigaction(int signo , struct sigaction  const  *act , struct sigaction *oldact ) ;
extern void __attribute__((__visibility__("default")))  zend_message_dispatcher(long message , void const   *data ) ;
extern int __attribute__((__visibility__("default")))  zend_get_configuration_directive(char const   *name , uint name_length , zval *contents ) ;
extern zend_gc_globals __attribute__((__visibility__("default")))  gc_globals ;
extern int __attribute__((__visibility__("default")))  gc_collect_cycles(void) ;
extern void __attribute__((__visibility__("default")))  gc_zval_possible_root(zval *zv ) ;
extern void __attribute__((__visibility__("default")))  gc_zobj_possible_root(zval *zv ) ;
extern void __attribute__((__visibility__("default")))  gc_remove_zval_from_buffer(zval *zv ) ;
extern void __attribute__((__visibility__("default")))  gc_globals_ctor(void) ;
extern void __attribute__((__visibility__("default")))  gc_globals_dtor(void) ;
extern void __attribute__((__visibility__("default")))  gc_init(void) ;
extern void __attribute__((__visibility__("default")))  gc_reset(void) ;
__inline static void ( __attribute__((__always_inline__)) gc_zval_check_possible_root)(zval *z ) 
{ 

  {
  if ((int )z->type == 4) {
    gc_zval_possible_root(z);
  } else {
    if ((int )z->type == 5) {
      gc_zval_possible_root(z);
    } else {

    }
  }
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) gc_remove_from_buffer)(gc_root_buffer *root ) 
{ 

  {
  (root->next)->prev = root->prev;
  (root->prev)->next = root->next;
  root->prev = gc_globals.unused;
  gc_globals.unused = root;
  return;
}
}
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
extern char *program_invocation_name ;
extern char *program_invocation_short_name ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_perror_fail(int __errnum , char const   *__file , unsigned int __line , char const   *__function ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert(char const   *__assertion , char const   *__file , int __line ) ;
extern void __attribute__((__visibility__("default")))  zend_freedtoa(char *s ) ;
extern char __attribute__((__visibility__("default")))  *zend_dtoa(double _d , int mode , int ndigits , int *decpt , int *sign , char **rve ) ;
extern double __attribute__((__visibility__("default")))  zend_strtod(char const   *s00 , char const   **se ) ;
extern double __attribute__((__visibility__("default")))  zend_hex_strtod(char const   *str , char const   **endptr ) ;
extern double __attribute__((__visibility__("default")))  zend_oct_strtod(char const   *str , char const   **endptr ) ;
extern double __attribute__((__visibility__("default")))  zend_bin_strtod(char const   *str , char const   **endptr ) ;
extern int __attribute__((__visibility__("default")))  zend_startup_strtod(void) ;
extern int __attribute__((__visibility__("default")))  zend_shutdown_strtod(void) ;
extern int __attribute__((__visibility__("default")))  add_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  sub_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  mul_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  div_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  mod_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  boolean_xor_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  boolean_not_function(zval *result , zval *op1 ) ;
extern int __attribute__((__visibility__("default")))  bitwise_not_function(zval *result , zval *op1 ) ;
extern int __attribute__((__visibility__("default")))  bitwise_or_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  bitwise_and_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  bitwise_xor_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  shift_left_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  shift_right_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  concat_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_equal_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_identical_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_not_identical_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_not_equal_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_smaller_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  is_smaller_or_equal_function(zval *result , zval *op1 , zval *op2 ) ;
extern zend_bool __attribute__((__visibility__("default")))  instanceof_function_ex(zend_class_entry const   *instance_ce , zend_class_entry const   *ce , zend_bool interfaces_only ) ;
extern zend_bool __attribute__((__visibility__("default")))  instanceof_function(zend_class_entry const   *instance_ce , zend_class_entry const   *ce ) ;
__inline static long ( __attribute__((__always_inline__)) zend_dval_to_lval)(double d ) 
{ 

  {
  if (d > (double )2147483647L) {
    return ((long )((unsigned long )((long long )d)));
  } else {
    if (d < (double )(-0x7FFFFFFF-1)) {
      return ((long )((unsigned long )((long long )d)));
    } else {

    }
  }
  return ((long )d);
}
}
__inline static zend_uchar is_numeric_string(char const   *str , int length , long *lval , double *dval , int allow_errors ) 
{ char const   *ptr ;
  int base ;
  int digits ;
  int dp_or_e ;
  double local_dval ;
  zend_uchar type ;
  char const   *e ;
  char const   *tmp ;
  double __attribute__((__visibility__("default")))  tmp___0 ;
  double __attribute__((__visibility__("default")))  tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  int cmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___7 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  double __attribute__((__visibility__("default")))  tmp___11 ;

  {
  base = 10;
  digits = 0;
  dp_or_e = 0;
  if (! length) {
    return ((unsigned char)0);
  } else {

  }
  while (1) {
    if ((int const   )*str == 32) {

    } else {
      if ((int const   )*str == 9) {

      } else {
        if ((int const   )*str == 10) {

        } else {
          if ((int const   )*str == 13) {

          } else {
            if ((int const   )*str == 11) {

            } else {
              if ((int const   )*str == 12) {

              } else {
                break;
              }
            }
          }
        }
      }
    }
    str ++;
    length --;
  }
  ptr = str;
  if ((int const   )*ptr == 45) {
    ptr ++;
  } else {
    if ((int const   )*ptr == 43) {
      ptr ++;
    } else {

    }
  }
  if ((int const   )*ptr >= 48) {
    if ((int const   )*ptr <= 57) {
      if (length > 2) {
        if ((int const   )*str == 48) {
          if ((int const   )*(str + 1) == 120) {
            base = 16;
            ptr += 2;
          } else {
            if ((int const   )*(str + 1) == 88) {
              base = 16;
              ptr += 2;
            } else {

            }
          }
        } else {

        }
      } else {

      }
      while ((int const   )*ptr == 48) {
        ptr ++;
      }
      type = (unsigned char)1;
      while (1) {
        if (digits >= 11) {
          if (dval) {
            break;
          } else {
            if (allow_errors == 1) {
              break;
            } else {

            }
          }
        } else {

        }
        check_digits: 
        if ((int const   )*ptr >= 48) {
          if ((int const   )*ptr <= 57) {
            goto __Cont;
          } else {
            goto _L___3;
          }
        } else {
          _L___3: /* CIL Label */ 
          if (base == 16) {
            if ((int const   )*ptr >= 65) {
              if ((int const   )*ptr <= 70) {
                goto __Cont;
              } else {
                goto _L___2;
              }
            } else {
              _L___2: /* CIL Label */ 
              if ((int const   )*ptr >= 97) {
                if ((int const   )*ptr <= 102) {
                  goto __Cont;
                } else {
                  goto _L___1;
                }
              } else {
                goto _L___1;
              }
            }
          } else {
            _L___1: /* CIL Label */ 
            if (base == 10) {
              if ((int const   )*ptr == 46) {
                if (dp_or_e < 1) {
                  goto process_double;
                } else {
                  goto _L___0;
                }
              } else {
                _L___0: /* CIL Label */ 
                if ((int const   )*ptr == 101) {
                  goto _L;
                } else {
                  if ((int const   )*ptr == 69) {
                    _L: /* CIL Label */ 
                    if (dp_or_e < 2) {
                      e = ptr + 1;
                      if ((int const   )*e == 45) {
                        tmp = e;
                        e ++;
                        ptr = tmp;
                      } else {
                        if ((int const   )*e == 43) {
                          tmp = e;
                          e ++;
                          ptr = tmp;
                        } else {

                        }
                      }
                      if ((int const   )*e >= 48) {
                        if ((int const   )*e <= 57) {
                          goto process_double;
                        } else {

                        }
                      } else {

                      }
                    } else {

                    }
                  } else {

                  }
                }
              }
            } else {

            }
          }
        }
        break;
        __Cont: /* CIL Label */ 
        digits ++;
        ptr ++;
      }
      if (base == 10) {
        if (digits >= 11) {
          dp_or_e = -1;
          goto process_double;
        } else {

        }
      } else {
        if (digits < 8) {

        } else {
          if (digits == 8) {
            if ((int const   )*(ptr + - digits) <= 55) {

            } else {
              goto _L___4;
            }
          } else {
            _L___4: /* CIL Label */ 
            if (dval) {
              tmp___0 = zend_hex_strtod(str, & ptr);
              local_dval = (double )tmp___0;
            } else {

            }
            type = (unsigned char)2;
          }
        }
      }
    } else {
      goto _L___5;
    }
  } else {
    _L___5: /* CIL Label */ 
    if ((int const   )*ptr == 46) {
      if ((int const   )*(ptr + 1) >= 48) {
        if ((int const   )*(ptr + 1) <= 57) {
          process_double: 
          type = (unsigned char)2;
          if (dval) {
            tmp___1 = zend_strtod(str, & ptr);
            local_dval = (double )tmp___1;
          } else {
            if (allow_errors != 1) {
              if (dp_or_e != -1) {
                tmp___3 = ptr;
                ptr ++;
                if ((int const   )*tmp___3 == 46) {
                  dp_or_e = 1;
                } else {
                  dp_or_e = 2;
                }
                goto check_digits;
              } else {

              }
            } else {

            }
          }
        } else {
          return ((unsigned char)0);
        }
      } else {
        return ((unsigned char)0);
      }
    } else {
      return ((unsigned char)0);
    }
  }
  if ((unsigned int )ptr != (unsigned int )(str + length)) {
    if (! allow_errors) {
      return ((unsigned char)0);
    } else {

    }
    if (allow_errors == -1) {
      zend_error(1 << 3L, "A non well formed numeric value encountered");
    } else {

    }
  } else {

  }
  if ((int )type == 1) {
    if (digits == 10) {
      if (0) {
        __s1_len = strlen(ptr + - digits);
        __s2_len = strlen(long_min_digits);
        if (! ((unsigned int )((void const   *)((ptr + - digits) + 1)) - (unsigned int )((void const   *)(ptr + - digits)) == 1U)) {
          goto _L___7;
        } else {
          if (__s1_len >= 4U) {
            _L___7: /* CIL Label */ 
            if (! ((unsigned int )((void const   *)(long_min_digits + 1)) - (unsigned int )((void const   *)(long_min_digits)) == 1U)) {
              tmp___10 = 1;
            } else {
              if (__s2_len >= 4U) {
                tmp___10 = 1;
              } else {
                tmp___10 = 0;
              }
            }
          } else {
            tmp___10 = 0;
          }
        }
        if (tmp___10) {
          tmp___5 = __builtin_strcmp(ptr + - digits, long_min_digits);
          tmp___9 = tmp___5;
        } else {
          tmp___8 = __builtin_strcmp(ptr + - digits, long_min_digits);
          tmp___9 = tmp___8;
        }
      } else {
        tmp___8 = __builtin_strcmp(ptr + - digits, long_min_digits);
        tmp___9 = tmp___8;
      }
      cmp = tmp___9;
      if (cmp < 0) {

      } else {
        if (cmp == 0) {
          if ((int const   )*str == 45) {

          } else {
            goto _L___8;
          }
        } else {
          _L___8: /* CIL Label */ 
          if (dval) {
            tmp___11 = zend_strtod(str, (char const   **)((void *)0));
            *dval = (double )tmp___11;
          } else {

          }
          return ((unsigned char)2);
        }
      }
    } else {

    }
    if (lval) {
      *lval = strtol((char const   */* __restrict  */)str, (char **/* __restrict  */)((void *)0), base);
    } else {

    }
    return ((unsigned char)1);
  } else {
    if (dval) {
      *dval = local_dval;
    } else {

    }
    return ((unsigned char)2);
  }
}
}
__inline static char *zend_memnstr(char *haystack , char *needle , int needle_len , char *end ) 
{ char *p ;
  char ne ;
  void *tmp ;
  int tmp___0 ;
  void *tmp___1 ;

  {
  p = haystack;
  ne = *(needle + (needle_len - 1));
  if (needle_len == 1) {
    tmp = memchr((void const   *)p, (int )*needle, (unsigned int )(end - p));
    return ((char *)tmp);
  } else {

  }
  if (needle_len > end - haystack) {
    return ((char *)((void *)0));
  } else {

  }
  end -= needle_len;
  while ((unsigned int )p <= (unsigned int )end) {
    tmp___1 = memchr((void const   *)p, (int )*needle, (unsigned int )((end - p) + 1));
    p = (char *)tmp___1;
    if (p) {
      if ((int )ne == (int )*(p + (needle_len - 1))) {
        tmp___0 = memcmp((void const   *)needle, (void const   *)p, (unsigned int )(needle_len - 1));
        if (tmp___0) {

        } else {
          return (p);
        }
      } else {

      }
    } else {

    }
    if ((unsigned int )p == (unsigned int )((void *)0)) {
      return ((char *)((void *)0));
    } else {

    }
    p ++;
  }
  return ((char *)((void *)0));
}
}
__inline static void const   *zend_memrchr(void const   *s , int c , size_t n ) 
{ register unsigned char const   *e ;

  {
  if (n <= 0U) {
    return ((void const   *)((void *)0));
  } else {

  }
  e = ((unsigned char const   *)s + n) - 1;
  while ((unsigned int )e >= (unsigned int )((unsigned char const   *)s)) {
    if ((int const   )*e == (int const   )((unsigned char const   )c)) {
      return ((void const   *)e);
    } else {

    }
    e --;
  }
  return ((void const   *)((void *)0));
}
}
extern int __attribute__((__visibility__("default")))  increment_function(zval *op1 ) ;
extern int __attribute__((__visibility__("default")))  decrement_function(zval *op2 ) ;
extern void __attribute__((__visibility__("default")))  convert_scalar_to_number(zval *op ) ;
extern void __attribute__((__visibility__("default")))  _convert_to_string(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_long(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_double(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_long_base(zval *op , int base ) ;
extern void __attribute__((__visibility__("default")))  convert_to_null(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_boolean(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_array(zval *op ) ;
extern void __attribute__((__visibility__("default")))  convert_to_object(zval *op ) ;
extern void __attribute__((__visibility__("default")))  multi_convert_to_long_ex(int argc  , ...) ;
extern void __attribute__((__visibility__("default")))  multi_convert_to_double_ex(int argc  , ...) ;
extern void __attribute__((__visibility__("default")))  multi_convert_to_string_ex(int argc  , ...) ;
extern int __attribute__((__visibility__("default")))  add_char_to_string(zval *result , zval const   *op1 , zval const   *op2 ) ;
extern int __attribute__((__visibility__("default")))  add_string_to_string(zval *result , zval const   *op1 , zval const   *op2 ) ;
extern double __attribute__((__visibility__("default")))  zend_string_to_double(char const   *number , zend_uint length ) ;
extern int __attribute__((__visibility__("default")))  zval_is_true(zval *op ) ;
extern int __attribute__((__visibility__("default")))  compare_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  numeric_compare_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  string_compare_function_ex(zval *result , zval *op1 , zval *op2 , zend_bool case_insensitive ) ;
extern int __attribute__((__visibility__("default")))  string_compare_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  string_case_compare_function(zval *result , zval *op1 , zval *op2 ) ;
extern int __attribute__((__visibility__("default")))  string_locale_compare_function(zval *result , zval *op1 , zval *op2 ) ;
extern void __attribute__((__visibility__("default")))  zend_str_tolower(char *str , unsigned int length ) ;
extern char __attribute__((__visibility__("default")))  *zend_str_tolower_copy(char *dest , char const   *source , unsigned int length ) ;
extern char __attribute__((__visibility__("default")))  *zend_str_tolower_dup(char const   *source , unsigned int length ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_zval_strcmp(zval *s1 , zval *s2 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_zval_strncmp(zval *s1 , zval *s2 , zval *s3 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_zval_strcasecmp(zval *s1 , zval *s2 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_zval_strncasecmp(zval *s1 , zval *s2 , zval *s3 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_strcmp(char const   *s1 , uint len1 , char const   *s2 , uint len2 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_strncmp(char const   *s1 , uint len1 , char const   *s2 , uint len2 , uint length ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_strcasecmp(char const   *s1 , uint len1 , char const   *s2 , uint len2 ) ;
extern int __attribute__((__visibility__("default")))  zend_binary_strncasecmp(char const   *s1 , uint len1 , char const   *s2 , uint len2 , uint length ) ;
extern void __attribute__((__visibility__("default")))  zendi_smart_strcmp(zval *result , zval *s1 , zval *s2 ) ;
extern void __attribute__((__visibility__("default")))  zend_compare_symbol_tables(zval *result , HashTable *ht1 , HashTable *ht2 ) ;
extern void __attribute__((__visibility__("default")))  zend_compare_arrays(zval *result , zval *a1 , zval *a2 ) ;
extern void __attribute__((__visibility__("default")))  zend_compare_objects(zval *result , zval *o1 , zval *o2 ) ;
extern int __attribute__((__visibility__("default")))  zend_atoi(char const   *str , int str_len ) ;
extern long __attribute__((__visibility__("default")))  zend_atol(char const   *str , int str_len ) ;
extern void __attribute__((__visibility__("default")))  zend_locale_sprintf_double(zval *op ) ;
__inline static int ( __attribute__((__always_inline__)) fast_increment_function)(zval *op1 ) 
{ long tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp) {
    __asm__  ("incl (%0)\n\t"
              "jno  0f\n\t"
              "movl $0x0, (%0)\n\t"
              "movl $0x41e00000, 0x4(%0)\n\t"
              "movb $0x2,0xc(%0)\n"
              "0:": : "r" (op1));
    return (0);
  } else {

  }
  tmp___0 = increment_function(op1);
  return ((int )tmp___0);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_decrement_function)(zval *op1 ) 
{ long tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp) {
    __asm__  ("decl (%0)\n\t"
              "jno  0f\n\t"
              "movl $0x00200000, (%0)\n\t"
              "movl $0xc1e00000, 0x4(%0)\n\t"
              "movb $0x2,0xc(%0)\n"
              "0:": : "r" (op1));
    return (0);
  } else {

  }
  tmp___0 = decrement_function(op1);
  return ((int )tmp___0);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_add_function)(zval *result , zval *op1 , zval *op2 ) 
{ long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      __asm__  ("movl\t(%1), %%eax\n\t"
                "addl   (%2), %%eax\n\t"
                "jo     0f\n\t"
                "movl   %%eax, (%0)\n\t"
                "movb   $0x1,0xc(%0)\n\t"
                "jmp    1f\n"
                "0:\n\t"
                "fildl\t(%1)\n\t"
                "fildl\t(%2)\n\t"
                "faddp\t%%st, %%st(1)\n\t"
                "movb   $0x2,0xc(%0)\n\t"
                "fstpl\t(%0)\n"
                "1:": : "r" (result), "r" (op1), "r" (op2): "eax");
      return (0);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        result->value.dval = (double )op1->value.lval + op2->value.dval;
        result->type = (unsigned char)2;
        return (0);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        result->value.dval = op1->value.dval + op2->value.dval;
        result->type = (unsigned char)2;
        return (0);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          result->value.dval = op1->value.dval + (double )op2->value.lval;
          result->type = (unsigned char)2;
          return (0);
        } else {

        }
      }
    } else {

    }
  }
  tmp___5 = add_function(result, op1, op2);
  return ((int )tmp___5);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_sub_function)(zval *result , zval *op1 , zval *op2 ) 
{ long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      __asm__  ("movl\t(%1), %%eax\n\t"
                "subl   (%2), %%eax\n\t"
                "jo     0f\n\t"
                "movl   %%eax, (%0)\n\t"
                "movb   $0x1,0xc(%0)\n\t"
                "jmp    1f\n"
                "0:\n\t"
                "fildl\t(%2)\n\t"
                "fildl\t(%1)\n\t"
                "fsubp\t%%st, %%st(1)\n\t"
                "movb   $0x2,0xc(%0)\n\t"
                "fstpl\t(%0)\n"
                "1:": : "r" (result), "r" (op1), "r" (op2): "eax");
      return (0);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        result->value.dval = (double )op1->value.lval - op2->value.dval;
        result->type = (unsigned char)2;
        return (0);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        result->value.dval = op1->value.dval - op2->value.dval;
        result->type = (unsigned char)2;
        return (0);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          result->value.dval = op1->value.dval - (double )op2->value.lval;
          result->type = (unsigned char)2;
          return (0);
        } else {

        }
      }
    } else {

    }
  }
  tmp___5 = sub_function(result, op1, op2);
  return ((int )tmp___5);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_mul_function)(zval *result , zval *op1 , zval *op2 ) 
{ long overflow ;
  long __tmpvar ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      while (1) {
        __asm__  ("imul %3,%0\n"
                  "adc $0,%1": "=r" (__tmpvar), "=r" (overflow): "0" (op1->value.lval), "r" (op2->value.lval), "1" (0));
        if (overflow) {
          result->value.dval = (double )op1->value.lval * (double )op2->value.lval;
        } else {
          result->value.lval = __tmpvar;
        }
        break;
      }
      if (overflow) {
        result->type = (unsigned char)2;
      } else {
        result->type = (unsigned char)1;
      }
      return (0);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        result->value.dval = (double )op1->value.lval * op2->value.dval;
        result->type = (unsigned char)2;
        return (0);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        result->value.dval = op1->value.dval * op2->value.dval;
        result->type = (unsigned char)2;
        return (0);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          result->value.dval = op1->value.dval * (double )op2->value.lval;
          result->type = (unsigned char)2;
          return (0);
        } else {

        }
      }
    } else {

    }
  }
  tmp___5 = mul_function(result, op1, op2);
  return ((int )tmp___5);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_div_function)(zval *result , zval *op1 , zval *op2 ) 
{ long tmp ;
  int tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  long tmp___10 ;
  long tmp___11 ;
  int __attribute__((__visibility__("default")))  tmp___12 ;

  {
  tmp___11 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___11) {
    goto _L;
  } else {
    _L: /* CIL Label */ 
    tmp___10 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___10) {

    } else {

    }
  }
  tmp___12 = div_function(result, op1, op2);
  return ((int )tmp___12);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_mod_function)(zval *result , zval *op1 , zval *op2 ) 
{ long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  tmp___2 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___2) {
    tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___1) {
      tmp___0 = __builtin_expect((long )(op2->value.lval == 0L), 0L);
      if (tmp___0) {
        zend_error(1 << 1L, "Division by zero");
        result->value.lval = 0L;
        result->type = (unsigned char)3;
        return (-1);
      } else {
        tmp = __builtin_expect((long )(op2->value.lval == -1L), 0L);
        if (tmp) {
          result->value.lval = 0L;
          result->type = (unsigned char)1;
          return (0);
        } else {

        }
      }
      result->value.lval = op1->value.lval % op2->value.lval;
      result->type = (unsigned char)1;
      return (0);
    } else {

    }
  } else {

  }
  tmp___3 = mod_function(result, op1, op2);
  return ((int )tmp___3);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_equal_function)(zval *result , zval *op1 , zval *op2 ) 
{ long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      return (op1->value.lval == op2->value.lval);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        return ((double )op1->value.lval == op2->value.dval);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        return (op1->value.dval == op2->value.dval);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          return (op1->value.dval == (double )op2->value.lval);
        } else {

        }
      }
    } else {

    }
  }
  compare_function(result, op1, op2);
  return (result->value.lval == 0L);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_not_equal_function)(zval *result , zval *op1 , zval *op2 ) 
{ long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      return (op1->value.lval != op2->value.lval);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        return ((double )op1->value.lval != op2->value.dval);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        return (op1->value.dval != op2->value.dval);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          return (op1->value.dval != (double )op2->value.lval);
        } else {

        }
      }
    } else {

    }
  }
  compare_function(result, op1, op2);
  return (result->value.lval != 0L);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_is_smaller_function)(zval *result , zval *op1 , zval *op2 ) 
{ long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      return (op1->value.lval < op2->value.lval);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        return ((double )op1->value.lval < op2->value.dval);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        return (op1->value.dval < op2->value.dval);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          return (op1->value.dval < (double )op2->value.lval);
        } else {

        }
      }
    } else {

    }
  }
  compare_function(result, op1, op2);
  return (result->value.lval < 0L);
}
}
__inline static int ( __attribute__((__always_inline__)) fast_is_smaller_or_equal_function)(zval *result , zval *op1 , zval *op2 ) 
{ long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((int )op1->type == 1), 1L);
  if (tmp___4) {
    tmp___0 = __builtin_expect((long )((int )op2->type == 1), 1L);
    if (tmp___0) {
      return (op1->value.lval <= op2->value.lval);
    } else {
      tmp = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp) {
        return ((double )op1->value.lval <= op2->value.dval);
      } else {

      }
    }
  } else {
    tmp___3 = __builtin_expect((long )((int )op1->type == 2), 1L);
    if (tmp___3) {
      tmp___2 = __builtin_expect((long )((int )op2->type == 2), 1L);
      if (tmp___2) {
        return (op1->value.dval <= op2->value.dval);
      } else {
        tmp___1 = __builtin_expect((long )((int )op2->type == 1), 1L);
        if (tmp___1) {
          return (op1->value.dval <= (double )op2->value.lval);
        } else {

        }
      }
    } else {

    }
  }
  compare_function(result, op1, op2);
  return (result->value.lval <= 0L);
}
}
extern void __attribute__((__visibility__("default")))  _zval_dtor_func(zval *zvalue ) ;
__inline static void ( __attribute__((__always_inline__)) _zval_dtor)(zval *zvalue ) 
{ 

  {
  if ((int )zvalue->type <= 3) {
    return;
  } else {

  }
  _zval_dtor_func(zvalue);
  return;
}
}
extern void __attribute__((__visibility__("default")))  _zval_copy_ctor_func(zval *zvalue ) ;
__inline static void ( __attribute__((__always_inline__)) _zval_copy_ctor)(zval *zvalue ) 
{ 

  {
  if ((int )zvalue->type <= 3) {
    return;
  } else {

  }
  _zval_copy_ctor_func(zvalue);
  return;
}
}
extern int __attribute__((__visibility__("default")))  zval_copy_static_var(zval **p , int num_args , va_list args , zend_hash_key *key ) ;
extern int __attribute__((__visibility__("default")))  zend_print_variable(zval *var ) ;
extern void __attribute__((__visibility__("default")))  _zval_ptr_dtor(zval **zval_ptr ) ;
extern void __attribute__((__visibility__("default")))  _zval_internal_dtor(zval *zvalue ) ;
extern void __attribute__((__visibility__("default")))  _zval_internal_ptr_dtor(zval **zvalue ) ;
extern void __attribute__((__visibility__("default")))  _zval_dtor_wrapper(zval *zvalue ) ;
extern void __attribute__((__visibility__("default")))  zval_add_ref(zval **p ) ;
extern void __attribute__((__visibility__("default")))  zend_save_error_handling(zend_error_handling *current ) ;
extern void __attribute__((__visibility__("default")))  zend_replace_error_handling(zend_error_handling_t error_handling , zend_class_entry *exception_class , zend_error_handling *current ) ;
extern void __attribute__((__visibility__("default")))  zend_restore_error_handling(zend_error_handling *saved ) ;
extern opcode_handler_t __attribute__((__visibility__("default")))  *zend_opcode_handlers ;
char *zend_visibility_string(zend_uint fn_flags ) ;
extern  __attribute__((__nothrow__)) int setjmp(struct __jmp_buf_tag *__env ) ;
extern  __attribute__((__nothrow__)) int __sigsetjmp(struct __jmp_buf_tag *__env , int __savemask ) ;
extern  __attribute__((__nothrow__)) int _setjmp(struct __jmp_buf_tag *__env ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void longjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void _longjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void siglongjmp(struct __jmp_buf_tag *__env , int __val ) ;
struct _zend_compiler_globals  __attribute__((__visibility__("default"))) compiler_globals  ;
extern int zendparse(void) ;
zend_executor_globals __attribute__((__visibility__("default")))  executor_globals  ;
extern zend_php_scanner_globals __attribute__((__visibility__("default")))  language_scanner_globals ;
extern zend_ini_scanner_globals __attribute__((__visibility__("default")))  ini_scanner_globals ;
extern int __attribute__((__visibility__("default")))  zend_stack_init(zend_stack *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_push(zend_stack *stack , void const   *element , int size ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_top(zend_stack const   *stack , void **element ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_del_top(zend_stack *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_int_top(zend_stack const   *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_is_empty(zend_stack const   *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_destroy(zend_stack *stack ) ;
extern void __attribute__((__visibility__("default")))  **zend_stack_base(zend_stack const   *stack ) ;
extern int __attribute__((__visibility__("default")))  zend_stack_count(zend_stack const   *stack ) ;
extern void __attribute__((__visibility__("default")))  zend_stack_apply(zend_stack *stack , int type , int (*apply_function)(void *element ) ) ;
extern void __attribute__((__visibility__("default")))  zend_stack_apply_with_argument(zend_stack *stack , int type , int (*apply_function)(void *element , void *arg ) , void *arg ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_init(zend_ptr_stack *stack ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_init_ex(zend_ptr_stack *stack , zend_bool persistent ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_n_push(zend_ptr_stack *stack , int count  , ...) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_n_pop(zend_ptr_stack *stack , int count  , ...) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_destroy(zend_ptr_stack *stack ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_apply(zend_ptr_stack *stack , void (*func)(void * ) ) ;
extern void __attribute__((__visibility__("default")))  zend_ptr_stack_clean(zend_ptr_stack *stack , void (*func)(void * ) , zend_bool free_elements ) ;
extern int __attribute__((__visibility__("default")))  zend_ptr_stack_num_elements(zend_ptr_stack *stack ) ;
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_3_push)(zend_ptr_stack *stack , void *a , void *b , void *c ) 
{ void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void *tmp___1 ;
  void **tmp___2 ;
  void **tmp___3 ;
  void **tmp___4 ;

  {
  if (stack->top + 3 > stack->max) {
    while (1) {
      stack->max += 64;
      if (stack->top + 3 > stack->max) {

      } else {
        break;
      }
    }
    if (stack->persistent) {
      tmp = __zend_realloc((void *)stack->elements, sizeof(void *) * (unsigned int )stack->max);
      tmp___1 = tmp;
    } else {
      tmp___0 = _erealloc((void *)stack->elements, sizeof(void *) * (unsigned int )stack->max, 0);
      tmp___1 = (void *)tmp___0;
    }
    stack->elements = (void **)tmp___1;
    stack->top_element = stack->elements + stack->top;
  } else {

  }
  stack->top += 3;
  tmp___2 = stack->top_element;
  (stack->top_element) ++;
  *tmp___2 = a;
  tmp___3 = stack->top_element;
  (stack->top_element) ++;
  *tmp___3 = b;
  tmp___4 = stack->top_element;
  (stack->top_element) ++;
  *tmp___4 = c;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_2_push)(zend_ptr_stack *stack , void *a , void *b ) 
{ void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void *tmp___1 ;
  void **tmp___2 ;
  void **tmp___3 ;

  {
  if (stack->top + 2 > stack->max) {
    while (1) {
      stack->max += 64;
      if (stack->top + 2 > stack->max) {

      } else {
        break;
      }
    }
    if (stack->persistent) {
      tmp = __zend_realloc((void *)stack->elements, sizeof(void *) * (unsigned int )stack->max);
      tmp___1 = tmp;
    } else {
      tmp___0 = _erealloc((void *)stack->elements, sizeof(void *) * (unsigned int )stack->max, 0);
      tmp___1 = (void *)tmp___0;
    }
    stack->elements = (void **)tmp___1;
    stack->top_element = stack->elements + stack->top;
  } else {

  }
  stack->top += 2;
  tmp___2 = stack->top_element;
  (stack->top_element) ++;
  *tmp___2 = a;
  tmp___3 = stack->top_element;
  (stack->top_element) ++;
  *tmp___3 = b;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_3_pop)(zend_ptr_stack *stack , void **a , void **b , void **c ) 
{ 

  {
  (stack->top_element) --;
  *a = *(stack->top_element);
  (stack->top_element) --;
  *b = *(stack->top_element);
  (stack->top_element) --;
  *c = *(stack->top_element);
  stack->top -= 3;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_2_pop)(zend_ptr_stack *stack , void **a , void **b ) 
{ 

  {
  (stack->top_element) --;
  *a = *(stack->top_element);
  (stack->top_element) --;
  *b = *(stack->top_element);
  stack->top -= 2;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_ptr_stack_push)(zend_ptr_stack *stack , void *ptr ) 
{ void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void *tmp___1 ;
  void **tmp___2 ;

  {
  if (stack->top + 1 > stack->max) {
    while (1) {
      stack->max += 64;
      if (stack->top + 1 > stack->max) {

      } else {
        break;
      }
    }
    if (stack->persistent) {
      tmp = __zend_realloc((void *)stack->elements, sizeof(void *) * (unsigned int )stack->max);
      tmp___1 = tmp;
    } else {
      tmp___0 = _erealloc((void *)stack->elements, sizeof(void *) * (unsigned int )stack->max, 0);
      tmp___1 = (void *)tmp___0;
    }
    stack->elements = (void **)tmp___1;
    stack->top_element = stack->elements + stack->top;
  } else {

  }
  (stack->top) ++;
  tmp___2 = stack->top_element;
  (stack->top_element) ++;
  *tmp___2 = ptr;
  return;
}
}
__inline static void *( __attribute__((__always_inline__)) zend_ptr_stack_pop)(zend_ptr_stack *stack ) 
{ 

  {
  (stack->top) --;
  (stack->top_element) --;
  return (*(stack->top_element));
}
}
extern void __attribute__((__visibility__("default")))  zend_object_std_init(zend_object *object , zend_class_entry *ce ) ;
extern void __attribute__((__visibility__("default")))  zend_object_std_dtor(zend_object *object ) ;
extern zend_object_value __attribute__((__visibility__("default")))  zend_objects_new(zend_object **object , zend_class_entry *class_type ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_destroy_object(zend_object *object , zend_object_handle handle ) ;
extern zend_object __attribute__((__visibility__("default")))  *zend_objects_get_address(zval const   *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_clone_members(zend_object *new_object , zend_object_value new_obj_val , zend_object *old_object , zend_object_handle handle ) ;
extern zend_object_value __attribute__((__visibility__("default")))  zend_objects_clone_obj(zval *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_free_object_storage(zend_object *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_init(zend_objects_store *objects , zend_uint init_size ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_call_destructors(zend_objects_store *objects ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_mark_destructed(zend_objects_store *objects ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_destroy(zend_objects_store *objects ) ;
extern zend_object_handle __attribute__((__visibility__("default")))  zend_objects_store_put(void *object , void (*dtor)(void *object , zend_object_handle handle ) , void (*storage)(void *object ) , void (*clone)(void *object , void **object_clone ) ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_add_ref(zval *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_del_ref(zval *object ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_add_ref_by_handle(zend_object_handle handle ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_del_ref_by_handle_ex(zend_object_handle handle , zend_object_handlers const   *handlers ) ;
__inline static void ( __attribute__((__always_inline__)) zend_objects_store_del_ref_by_handle)(zend_object_handle handle ) 
{ 

  {
  zend_objects_store_del_ref_by_handle_ex(handle, (zend_object_handlers const   *)((void *)0));
  return;
}
}
extern zend_uint __attribute__((__visibility__("default")))  zend_objects_store_get_refcount(zval *object ) ;
extern zend_object_value __attribute__((__visibility__("default")))  zend_objects_store_clone_obj(zval *object ) ;
extern void __attribute__((__visibility__("default")))  *zend_object_store_get_object(zval const   *object ) ;
extern void __attribute__((__visibility__("default")))  *zend_object_store_get_object_by_handle(zend_object_handle handle ) ;
extern void __attribute__((__visibility__("default")))  zend_object_store_set_object(zval *zobject , void *object ) ;
extern void __attribute__((__visibility__("default")))  zend_object_store_ctor_failed(zval *zobject ) ;
extern void __attribute__((__visibility__("default")))  zend_objects_store_free_object_storage(zend_objects_store *objects ) ;
extern zval __attribute__((__visibility__("default")))  *zend_object_create_proxy(zval *object , zval *member ) ;
extern zend_object_handlers __attribute__((__visibility__("default")))  *zend_get_std_object_handlers(void) ;
extern HashTable __attribute__((__visibility__("default")))  module_registry ;
extern void module_destructor(zend_module_entry *module ) ;
extern int module_registry_cleanup(zend_module_entry *module ) ;
extern int module_registry_request_startup(zend_module_entry *module ) ;
extern int module_registry_unload_temp(zend_module_entry const   *module ) ;
extern void __attribute__((__visibility__("default")))  zend_init_fpu(void) ;
extern void __attribute__((__visibility__("default")))  zend_shutdown_fpu(void) ;
extern void __attribute__((__visibility__("default")))  zend_ensure_fpu_mode(void) ;
extern fpu_control_t __fpu_control ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf32be ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf32le ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf16be ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf16le ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_utf8 ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_functions(zend_multibyte_functions const   *functions ) ;
extern zend_multibyte_functions const __attribute__((__visibility__("default")))  *zend_multibyte_get_functions(void) ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_fetch_encoding(char const   *name ) ;
extern char const __attribute__((__visibility__("default")))  *zend_multibyte_get_encoding_name(zend_encoding const   *encoding ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_check_lexer_compatibility(zend_encoding const   *encoding ) ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_encoding_detector(unsigned char const   *string , size_t length , zend_encoding const   **list , size_t list_size ) ;
extern size_t __attribute__((__visibility__("default")))  zend_multibyte_encoding_converter(unsigned char **to , size_t *to_length , unsigned char const   *from , size_t from_length , zend_encoding const   *encoding_to , zend_encoding const   *encoding_from ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_parse_encoding_list(char const   *encoding_list , size_t encoding_list_len , zend_encoding const   ***return_list , size_t *return_size , int persistent ) ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_get_internal_encoding(void) ;
extern zend_encoding const __attribute__((__visibility__("default")))  *zend_multibyte_get_script_encoding(void) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_script_encoding(zend_encoding const   **encoding_list , size_t encoding_list_size ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_internal_encoding(zend_encoding const   *encoding ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_script_encoding_by_string(char const   *new_value , size_t new_value_length ) ;
void init_compiler(void) ;
void shutdown_compiler(void) ;
void zend_init_compiler_data_structures(void) ;
void zend_init_compiler_context(void) ;
zend_op_array __attribute__((__visibility__("default")))  *(*zend_compile_file)(zend_file_handle *file_handle , int type )  ;
zend_op_array __attribute__((__visibility__("default")))  *(*zend_compile_string)(zval *source_string , char *filename )  ;
extern int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
extern void startup_scanner(void) ;
extern void shutdown_scanner(void) ;
char __attribute__((__visibility__("default")))  *zend_set_compiled_filename(char const   *new_compiled_filename ) ;
void __attribute__((__visibility__("default")))  zend_restore_compiled_filename(char *original_compiled_filename ) ;
char __attribute__((__visibility__("default")))  *zend_get_compiled_filename(void) ;
int __attribute__((__visibility__("default")))  zend_get_compiled_lineno(void) ;
extern size_t __attribute__((__visibility__("default")))  zend_get_scanned_file_offset(void) ;
void zend_resolve_non_class_name(znode *element_name , zend_bool check_namespace ) ;
void zend_resolve_class_name(znode *class_name , ulong fetch_type , int check_ns_name ) ;
char const __attribute__((__visibility__("default")))  *zend_get_compiled_variable_name(zend_op_array const   *op_array , zend_uint var , int *name_len ) ;
void zend_do_binary_op(zend_uchar op , znode *result , znode const   *op1 , znode const   *op2 ) ;
void zend_do_unary_op(zend_uchar op , znode *result , znode const   *op1 ) ;
void zend_do_binary_assign_op(zend_uchar op , znode *result , znode const   *op1 , znode const   *op2 ) ;
void zend_do_assign(znode *result , znode *variable , znode *value ) ;
void zend_do_assign_ref(znode *result , znode const   *lvar , znode const   *rvar ) ;
void fetch_simple_variable(znode *result , znode *varname , int bp ) ;
void fetch_simple_variable_ex(znode *result , znode *varname , int bp , zend_uchar op ) ;
void zend_do_indirect_references(znode *result , znode const   *num_references , znode *variable ) ;
void zend_do_fetch_static_variable(znode *varname , znode const   *static_assignment , int fetch_type ) ;
void zend_do_fetch_global_variable(znode *varname , znode const   *static_assignment , int fetch_type ) ;
void fetch_array_begin(znode *result , znode *varname , znode *first_dim ) ;
void fetch_array_dim(znode *result , znode const   *parent , znode const   *dim ) ;
void fetch_string_offset(znode *result , znode const   *parent , znode const   *offset ) ;
void zend_do_fetch_static_member(znode *result , znode *class_name ) ;
void zend_do_print(znode *result , znode const   *arg ) ;
void zend_do_echo(znode const   *arg ) ;
extern unary_op_type __attribute__((__visibility__("default")))  get_unary_op(int opcode ) ;
extern binary_op_type __attribute__((__visibility__("default")))  get_binary_op(int opcode ) ;
void zend_do_while_cond(znode const   *expr , znode *close_bracket_token ) ;
void zend_do_while_end(znode const   *while_token , znode const   *close_bracket_token ) ;
void zend_do_do_while_begin(void) ;
void zend_do_do_while_end(znode const   *do_token , znode const   *expr_open_bracket , znode const   *expr ) ;
void zend_do_if_cond(znode const   *cond , znode *closing_bracket_token ) ;
void zend_do_if_after_statement(znode const   *closing_bracket_token , unsigned char initialize ) ;
void zend_do_if_end(void) ;
void zend_do_for_cond(znode const   *expr , znode *second_semicolon_token ) ;
void zend_do_for_before_statement(znode const   *cond_start , znode const   *second_semicolon_token ) ;
void zend_do_for_end(znode const   *second_semicolon_token ) ;
void zend_do_pre_incdec(znode *result , znode const   *op1 , zend_uchar op ) ;
void zend_do_post_incdec(znode *result , znode const   *op1 , zend_uchar op ) ;
void zend_do_begin_variable_parse(void) ;
void zend_do_end_variable_parse(znode *variable , int type , int arg_offset ) ;
void zend_check_writable_variable(znode const   *variable ) ;
void zend_do_free(znode *op1 ) ;
void zend_do_add_string(znode *result , znode const   *op1 , znode *op2 ) ;
void zend_do_add_variable(znode *result , znode const   *op1 , znode const   *op2 ) ;
int zend_do_verify_access_types(znode const   *current_access_type , znode const   *new_modifier ) ;
void zend_do_begin_function_declaration(znode *function_token , znode *function_name , int is_method , int return_reference , znode *fn_flags_znode ) ;
void zend_do_end_function_declaration(znode const   *function_token ) ;
void zend_do_receive_arg(zend_uchar op , znode *varname , znode const   *offset , znode const   *initialization , znode *class_type , unsigned char pass_by_reference ) ;
int zend_do_begin_function_call(znode *function_name , zend_bool check_namespace ) ;
void zend_do_begin_method_call(znode *left_bracket ) ;
void zend_do_clone(znode *result , znode const   *expr ) ;
void zend_do_begin_dynamic_function_call(znode *function_name , int ns_call ) ;
void zend_do_fetch_class(znode *result , znode *class_name ) ;
void zend_do_build_full_name(znode *result , znode *prefix , znode *name , int is_class_member ) ;
int zend_do_begin_class_member_function_call(znode *class_name , znode *method_name ) ;
void zend_do_end_function_call(znode *function_name , znode *result , znode const   *argument_list , int is_method , int is_dynamic_fcall ) ;
void zend_do_return(znode *expr , int do_end_vparse ) ;
void zend_do_handle_exception(void) ;
void zend_do_begin_lambda_function_declaration(znode *result , znode *function_token , int return_reference , int is_static ) ;
void zend_do_fetch_lexical_variable(znode *varname , zend_bool is_ref ) ;
void zend_do_try(znode *try_token ) ;
void zend_do_begin_catch(znode *try_token , znode *class_name , znode *catch_var , znode *first_catch ) ;
void zend_do_end_catch(znode const   *try_token ) ;
void zend_do_throw(znode const   *expr ) ;
int __attribute__((__visibility__("default")))  do_bind_function(zend_op_array const   *op_array , zend_op *opline , HashTable *function_table , zend_bool compile_time ) ;
zend_class_entry __attribute__((__visibility__("default")))  *do_bind_class(zend_op_array const   *op_array , zend_op const   *opline , HashTable *class_table , zend_bool compile_time ) ;
zend_class_entry __attribute__((__visibility__("default")))  *do_bind_inherited_class(zend_op_array const   *op_array , zend_op const   *opline , HashTable *class_table , zend_class_entry *parent_ce , zend_bool compile_time ) ;
void __attribute__((__visibility__("default")))  zend_do_inherit_interfaces(zend_class_entry *ce , zend_class_entry const   *iface ) ;
void __attribute__((__visibility__("default")))  zend_do_implement_interface(zend_class_entry *ce , zend_class_entry *iface ) ;
void zend_do_implements_interface(znode *interface_name ) ;
void zend_add_trait_precedence(znode *precedence_znode ) ;
void zend_add_trait_alias(znode *alias_znode ) ;
void zend_do_implements_trait(znode *trait_name ) ;
void __attribute__((__visibility__("default")))  zend_do_implement_trait(zend_class_entry *ce , zend_class_entry *trait ) ;
void __attribute__((__visibility__("default")))  zend_do_bind_traits(zend_class_entry *ce ) ;
void zend_prepare_trait_precedence(znode *result , znode *method_reference , znode *trait_list ) ;
void zend_prepare_reference(znode *result , znode *class_name , znode *method_name ) ;
void zend_prepare_trait_alias(znode *result , znode *method_reference , znode *modifiers , znode *alias ) ;
extern void init_trait_alias_list(znode *result , znode const   *trait_alias ) ;
extern void add_trait_alias(znode *result , znode const   *trait_alias ) ;
extern void init_trait_alias(znode *result , znode const   *method_name , znode const   *alias , znode const   *modifiers ) ;
void __attribute__((__visibility__("default")))  zend_do_inheritance(zend_class_entry *ce , zend_class_entry *parent_ce ) ;
void zend_do_early_binding(void) ;
void __attribute__((__visibility__("default")))  zend_do_delayed_early_binding(zend_op_array const   *op_array ) ;
void zend_do_pass_param(znode *param , zend_uchar op , int offset ) ;
void zend_do_boolean_or_begin(znode *expr1 , znode *op_token ) ;
void zend_do_boolean_or_end(znode *result , znode const   *expr1 , znode const   *expr2 , znode *op_token ) ;
void zend_do_boolean_and_begin(znode *expr1 , znode *op_token ) ;
void zend_do_boolean_and_end(znode *result , znode const   *expr1 , znode const   *expr2 , znode const   *op_token ) ;
void zend_do_brk_cont(zend_uchar op , znode const   *expr ) ;
void zend_do_switch_cond(znode const   *cond ) ;
void zend_do_switch_end(znode const   *case_list ) ;
void zend_do_case_before_statement(znode const   *case_list , znode *case_token , znode const   *case_expr ) ;
void zend_do_case_after_statement(znode *result , znode const   *case_token ) ;
void zend_do_default_before_statement(znode const   *case_list , znode *default_token ) ;
void zend_do_begin_class_declaration(znode const   *class_token , znode *class_name , znode const   *parent_class_name ) ;
void zend_do_end_class_declaration(znode const   *class_token , znode const   *parent_token ) ;
void zend_do_declare_property(znode const   *var_name , znode const   *value , zend_uint access_type ) ;
void zend_do_declare_class_constant(znode *var_name , znode const   *value ) ;
void zend_do_fetch_property(znode *result , znode *object , znode const   *property ) ;
void zend_do_halt_compiler_register(void) ;
void zend_do_push_object(znode const   *object ) ;
void zend_do_pop_object(znode *object ) ;
void zend_do_begin_new_object(znode *new_token , znode *class_type ) ;
void zend_do_end_new_object(znode *result , znode const   *new_token , znode const   *argument_list ) ;
void zend_do_fetch_constant(znode *result , znode *constant_container , znode *constant_name , int mode , zend_bool check_namespace ) ;
void zend_do_shell_exec(znode *result , znode const   *cmd ) ;
void zend_do_init_array(znode *result , znode const   *expr , znode const   *offset , zend_bool is_ref ) ;
void zend_do_add_array_element(znode *result , znode const   *expr , znode const   *offset , zend_bool is_ref ) ;
void zend_do_add_static_array_element(znode *result , znode *offset , znode const   *expr ) ;
void zend_do_list_init(void) ;
void zend_do_list_end(znode *result , znode *expr ) ;
void zend_do_add_list_element(znode const   *element ) ;
void zend_do_new_list_begin(void) ;
void zend_do_new_list_end(void) ;
void zend_init_list(void *result , void *item ) ;
void zend_add_to_list(void *result , void *item ) ;
void zend_do_cast(znode *result , znode const   *expr , int type ) ;
void zend_do_include_or_eval(int type , znode *result , znode const   *op1 ) ;
void zend_do_unset(znode const   *variable ) ;
void zend_do_isset_or_isempty(int type , znode *result , znode *variable ) ;
void zend_do_instanceof(znode *result , znode const   *expr , znode const   *class_znode , int type ) ;
void zend_do_foreach_begin(znode *foreach_token , znode *open_brackets_token , znode *array , znode *as_token , int variable ) ;
void zend_do_foreach_cont(znode *foreach_token , znode const   *open_brackets_token , znode const   *as_token , znode *value , znode *key ) ;
void zend_do_foreach_end(znode const   *foreach_token , znode const   *as_token ) ;
void zend_do_declare_begin(void) ;
void zend_do_declare_stmt(znode *var , znode *val ) ;
void zend_do_declare_end(znode const   *declare_token ) ;
void zend_do_exit(znode *result , znode const   *message ) ;
void zend_do_begin_silence(znode *strudel_token ) ;
void zend_do_end_silence(znode const   *strudel_token ) ;
void zend_do_jmp_set(znode const   *value , znode *jmp_token , znode *colon_token ) ;
void zend_do_jmp_set_else(znode *result , znode const   *false_value , znode const   *jmp_token , znode const   *colon_token ) ;
void zend_do_begin_qm_op(znode const   *cond , znode *qm_token ) ;
void zend_do_qm_true(znode const   *true_value , znode *qm_token , znode *colon_token ) ;
void zend_do_qm_false(znode *result , znode const   *false_value , znode const   *qm_token , znode const   *colon_token ) ;
void zend_do_extended_info(void) ;
void zend_do_extended_fcall_begin(void) ;
void zend_do_extended_fcall_end(void) ;
void zend_do_ticks(void) ;
void zend_do_abstract_method(znode const   *function_name , znode *modifiers , znode const   *body ) ;
void zend_do_declare_constant(znode *name , znode *value ) ;
void zend_do_build_namespace_name(znode *result , znode *prefix , znode *name ) ;
void zend_do_begin_namespace(znode const   *name , zend_bool with_bracket ) ;
void zend_do_end_namespace(void) ;
void zend_verify_namespace(void) ;
void zend_do_use(znode *ns_name , znode *new_name , int is_global ) ;
void zend_do_end_compilation(void) ;
void zend_do_label(znode *label ) ;
void zend_do_goto(znode const   *label ) ;
void zend_resolve_goto_label(zend_op_array *op_array , zend_op *opline , int pass2 ) ;
void zend_release_labels(void) ;
void __attribute__((__visibility__("default")))  function_add_ref(zend_function *function ) ;
extern zend_op_array __attribute__((__visibility__("default")))  *compile_file(zend_file_handle *file_handle , int type ) ;
extern zend_op_array __attribute__((__visibility__("default")))  *compile_string(zval *source_string , char *filename ) ;
extern zend_op_array __attribute__((__visibility__("default")))  *compile_filename(int type , zval *filename ) ;
extern int __attribute__((__visibility__("default")))  zend_execute_scripts(int type , zval **retval , int file_count  , ...) ;
extern int __attribute__((__visibility__("default")))  open_file_for_scanning(zend_file_handle *file_handle ) ;
extern void __attribute__((__visibility__("default")))  init_op_array(zend_op_array *op_array , zend_uchar type , int initial_ops_size ) ;
extern void __attribute__((__visibility__("default")))  destroy_op_array(zend_op_array *op_array ) ;
extern void __attribute__((__visibility__("default")))  zend_destroy_file_handle(zend_file_handle *file_handle ) ;
extern int __attribute__((__visibility__("default")))  zend_cleanup_class_data(zend_class_entry **pce ) ;
extern int __attribute__((__visibility__("default")))  zend_cleanup_user_class_data(zend_class_entry **pce ) ;
extern void __attribute__((__visibility__("default")))  zend_cleanup_internal_class_data(zend_class_entry *ce ) ;
extern void __attribute__((__visibility__("default")))  zend_cleanup_internal_classes(void) ;
extern int __attribute__((__visibility__("default")))  zend_cleanup_function_data(zend_function *function ) ;
extern int __attribute__((__visibility__("default")))  zend_cleanup_function_data_full(zend_function *function ) ;
extern void __attribute__((__visibility__("default")))  destroy_zend_function(zend_function *function ) ;
extern void __attribute__((__visibility__("default")))  zend_function_dtor(zend_function *function ) ;
extern void __attribute__((__visibility__("default")))  destroy_zend_class(zend_class_entry **pce ) ;
extern void zend_class_add_ref(zend_class_entry **ce ) ;
void __attribute__((__visibility__("default")))  zend_mangle_property_name(char **dest , int *dest_length , char const   *src1 , int src1_length , char const   *src2 , int src2_length , int internal ) ;
int __attribute__((__visibility__("default")))  zend_unmangle_property_name(char const   *mangled_property , int len , char const   **class_name , char const   **prop_name ) ;
extern zend_op *get_next_op(zend_op_array *op_array ) ;
extern void init_op(zend_op *op ) ;
extern int get_next_op_number(zend_op_array *op_array ) ;
extern int print_class(zend_class_entry *class_entry ) ;
extern void print_op_array(zend_op_array *op_array , int optimizations ) ;
extern int __attribute__((__visibility__("default")))  pass_two(zend_op_array *op_array ) ;
extern zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array ) ;
void zend_do_first_catch(znode *open_parentheses ) ;
void zend_initialize_try_catch_element(znode const   *try_token ) ;
void zend_do_mark_last_catch(znode const   *first_catch , znode const   *last_additional_catch ) ;
zend_bool __attribute__((__visibility__("default")))  zend_is_compiling(void) ;
extern char __attribute__((__visibility__("default")))  *zend_make_compiled_string_description(char const   *name ) ;
void __attribute__((__visibility__("default")))  zend_initialize_class_data(zend_class_entry *ce , zend_bool nullify_handlers ) ;
int zend_get_class_fetch_type(char const   *class_name , uint class_name_len ) ;
int __attribute__((__visibility__("default")))  zend_register_auto_global(char const   *name , uint name_len , zend_bool jit , zend_bool (*auto_global_callback)(char const   *name , uint name_len ) ) ;
void __attribute__((__visibility__("default")))  zend_activate_auto_globals(void) ;
zend_bool __attribute__((__visibility__("default")))  zend_is_auto_global(char const   *name , uint name_len ) ;
zend_bool __attribute__((__visibility__("default")))  zend_is_auto_global_quick(char const   *name , uint name_len , ulong hashval ) ;
size_t __attribute__((__visibility__("default")))  zend_dirname(char *path , size_t len ) ;
int zendlex(znode *zendlval ) ;
int zend_add_literal(zend_op_array *op_array , zval const   *zv ) ;
extern void clean_module_constants(int module_number ) ;
extern void free_zend_constant(zend_constant *c ) ;
extern int zend_startup_constants(void) ;
extern int zend_shutdown_constants(void) ;
extern void zend_register_standard_constants(void) ;
extern void clean_non_persistent_constants(void) ;
extern int __attribute__((__visibility__("default")))  zend_get_constant(char const   *name , uint name_len , zval *result ) ;
extern int __attribute__((__visibility__("default")))  zend_get_constant_ex(char const   *name , uint name_len , zval *result , zend_class_entry *scope , ulong flags ) ;
extern void __attribute__((__visibility__("default")))  zend_register_long_constant(char const   *name , uint name_len , long lval , int flags , int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_register_double_constant(char const   *name , uint name_len , double dval , int flags , int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_register_string_constant(char const   *name , uint name_len , char *strval , int flags , int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_register_stringl_constant(char const   *name , uint name_len , char *strval , uint strlen , int flags , int module_number ) ;
extern int __attribute__((__visibility__("default")))  zend_register_constant(zend_constant *c ) ;
extern void zend_copy_constants(HashTable *target , HashTable *sourc ) ;
extern void copy_zend_constant(zend_constant *c ) ;
extern zend_constant *zend_quick_get_constant(zend_literal const   *key , ulong flags ) ;
extern int __attribute__((__visibility__("default")))  zend_register_list_destructors(void (*ld)(void * ) , void (*pld)(void * ) , int module_number ) ;
extern int __attribute__((__visibility__("default")))  zend_register_list_destructors_ex(void (*ld)(zend_rsrc_list_entry *rsrc ) , void (*pld)(zend_rsrc_list_entry *rsrc ) , char const   *type_name , int module_number ) ;
extern void list_entry_destructor(void *ptr ) ;
extern void plist_entry_destructor(void *ptr ) ;
extern void zend_clean_module_rsrc_dtors(int module_number ) ;
extern int zend_init_rsrc_list(void) ;
extern int zend_init_rsrc_plist(void) ;
extern void zend_destroy_rsrc_list(HashTable *ht ) ;
extern int zend_init_rsrc_list_dtors(void) ;
extern void zend_destroy_rsrc_list_dtors(void) ;
extern int __attribute__((__visibility__("default")))  zend_list_insert(void *ptr , int type ) ;
extern int __attribute__((__visibility__("default")))  _zend_list_addref(int id ) ;
extern int __attribute__((__visibility__("default")))  _zend_list_delete(int id ) ;
extern void __attribute__((__visibility__("default")))  *_zend_list_find(int id , int *type ) ;
extern int __attribute__((__visibility__("default")))  zend_register_resource(zval *rsrc_result , void *rsrc_pointer , int rsrc_type ) ;
extern void __attribute__((__visibility__("default")))  *zend_fetch_resource(zval **passed_id , int default_id , char const   *resource_type_name , int *found_resource_type , int num_resource_types  , ...) ;
extern char const __attribute__((__visibility__("default")))  *zend_rsrc_list_get_rsrc_type(int resource ) ;
extern int __attribute__((__visibility__("default")))  zend_fetch_list_dtor_id(char *type_name ) ;
extern int __attribute__((__visibility__("default")))  le_index_ptr ;
extern void __attribute__((__visibility__("default")))  (*zend_execute)(zend_op_array *op_array ) ;
extern void __attribute__((__visibility__("default")))  (*zend_execute_internal)(zend_execute_data *execute_data_ptr , int return_value_used ) ;
extern void init_executor(void) ;
extern void shutdown_executor(void) ;
extern void shutdown_destructors(void) ;
extern void __attribute__((__visibility__("default")))  execute(zend_op_array *op_array ) ;
extern void __attribute__((__visibility__("default")))  execute_internal(zend_execute_data *execute_data_ptr , int return_value_used ) ;
extern int __attribute__((__visibility__("default")))  zend_is_true(zval *op ) ;
__inline static void ( __attribute__((__always_inline__)) safe_free_zval_ptr_rel)(zval *p ) 
{ 

  {
  if ((unsigned int )p != (unsigned int )executor_globals.uninitialized_zval_ptr) {
    while (1) {
      if ((gc_root_buffer *)((unsigned long )((zval_gc_info *)p)->u.buffered & 4294967292UL)) {
        gc_remove_zval_from_buffer(p);
      } else {

      }
      _efree((void *)p);
      break;
    }
  } else {

  }
  return;
}
}
extern int __attribute__((__visibility__("default")))  zend_lookup_class(char const   *name , int name_length , zend_class_entry ***ce ) ;
extern int __attribute__((__visibility__("default")))  zend_lookup_class_ex(char const   *name , int name_length , zend_literal const   *key , int use_autoload , zend_class_entry ***ce ) ;
extern int __attribute__((__visibility__("default")))  zend_eval_string(char *str , zval *retval_ptr , char *string_name ) ;
extern int __attribute__((__visibility__("default")))  zend_eval_stringl(char *str , int str_len , zval *retval_ptr , char *string_name ) ;
extern int __attribute__((__visibility__("default")))  zend_eval_string_ex(char *str , zval *retval_ptr , char *string_name , int handle_exceptions ) ;
extern int __attribute__((__visibility__("default")))  zend_eval_stringl_ex(char *str , int str_len , zval *retval_ptr , char *string_name , int handle_exceptions ) ;
extern char __attribute__((__visibility__("default")))  *zend_verify_arg_class_kind(zend_arg_info const   *cur_arg_info , ulong fetch_type , char const   **class_name , zend_class_entry **pce ) ;
extern int __attribute__((__visibility__("default")))  zend_verify_arg_error(int error_type , zend_function const   *zf , zend_uint arg_num , char const   *need_msg , char const   *need_kind , char const   *given_msg , char const   *given_kind ) ;
__inline static void ( __attribute__((__always_inline__)) i_zval_ptr_dtor)(zval *zval_ptr ) 
{ zend_uint tmp ;
  zend_uint tmp___0 ;

  {
  tmp___0 = zval_delref_p(zval_ptr);
  if (tmp___0) {
    tmp = zval_refcount_p(zval_ptr);
    if (tmp == 1U) {
      zval_unset_isref_p(zval_ptr);
    } else {

    }
    gc_zval_check_possible_root(zval_ptr);
  } else {
    if ((unsigned int )zval_ptr != (unsigned int )(& executor_globals.uninitialized_zval)) {
      if ((gc_root_buffer *)((unsigned long )((zval_gc_info *)zval_ptr)->u.buffered & 4294967292UL)) {
        gc_remove_zval_from_buffer(zval_ptr);
      } else {

      }
      _zval_dtor(zval_ptr);
      _efree((void *)zval_ptr);
    } else {

    }
  }
  return;
}
}
__inline static int ( __attribute__((__always_inline__)) i_zend_is_true)(zval *op ) 
{ int result ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval tmp___1 ;
  int tmp___2 ;
  zval *tmp___3 ;
  zval *tmp___4 ;

  {
  switch ((int )op->type) {
  case 0: 
  result = 0;
  break;
  case 1: 
  case 3: 
  case 7: 
  if (op->value.lval) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 2: 
  if (op->value.dval) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 6: 
  if (op->value.str.len == 0) {
    result = 0;
  } else {
    if (op->value.str.len == 1) {
      if ((int )*(op->value.str.val + 0) == 48) {
        result = 0;
      } else {
        result = 1;
      }
    } else {
      result = 1;
    }
  }
  break;
  case 4: 
  tmp___0 = zend_hash_num_elements((HashTable const   *)op->value.ht);
  if (tmp___0) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 5: 
  if ((int )op->type == 5) {
    if ((unsigned int )(op->value.obj.handlers)->get_class_entry != (unsigned int )((void *)0)) {
      if ((op->value.obj.handlers)->cast_object) {
        tmp___2 = (*((op->value.obj.handlers)->cast_object))(op, & tmp___1, 3);
        if (tmp___2 == 0) {
          result = (int )tmp___1.value.lval;
          break;
        } else {

        }
      } else {
        if ((op->value.obj.handlers)->get) {
          tmp___4 = (*((op->value.obj.handlers)->get))(op);
          tmp___3 = tmp___4;
          if ((int )tmp___3->type != 5) {
            convert_to_boolean(tmp___3);
            result = (int )tmp___3->value.lval;
            _zval_ptr_dtor(& tmp___3);
            break;
          } else {

          }
        } else {

        }
      }
    } else {

    }
  } else {

  }
  result = 1;
  break;
  default: 
  result = 0;
  break;
  }
  return (result);
}
}
extern int __attribute__((__visibility__("default")))  zval_update_constant(zval **pp , void *arg ) ;
extern int __attribute__((__visibility__("default")))  zval_update_constant_inline_change(zval **pp , void *arg ) ;
extern int __attribute__((__visibility__("default")))  zval_update_constant_no_inline_change(zval **pp , void *arg ) ;
extern int __attribute__((__visibility__("default")))  zval_update_constant_ex(zval **pp , void *arg , zend_class_entry *scope ) ;
__inline static zend_vm_stack ( __attribute__((__always_inline__)) zend_vm_stack_new_page)(int count ) 
{ zend_vm_stack page ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  tmp = _emalloc((((sizeof(*page) + 4U) - 1U) & 4294967292U) + sizeof(void *) * (unsigned int )count);
  page = (struct _zend_vm_stack *)tmp;
  page->top = (void **)((char *)page + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U));
  page->end = page->top + count;
  page->prev = (struct _zend_vm_stack *)((void *)0);
  return (page);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_init)(void) 
{ 

  {
  executor_globals.argument_stack = zend_vm_stack_new_page(16368);
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_destroy)(void) 
{ zend_vm_stack stack ;
  zend_vm_stack p ;

  {
  stack = executor_globals.argument_stack;
  while ((unsigned int )stack != (unsigned int )((void *)0)) {
    p = stack->prev;
    _efree((void *)stack);
    stack = p;
  }
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_extend)(int count ) 
{ zend_vm_stack p ;
  int tmp ;
  zend_vm_stack tmp___0 ;

  {
  if (count >= 16368) {
    tmp = count;
  } else {
    tmp = 16368;
  }
  tmp___0 = zend_vm_stack_new_page(tmp);
  p = tmp___0;
  p->prev = executor_globals.argument_stack;
  executor_globals.argument_stack = p;
  return;
}
}
__inline static void **( __attribute__((__always_inline__)) zend_vm_stack_top)(void) 
{ 

  {
  return ((executor_globals.argument_stack)->top);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_push)(void *ptr ) 
{ long tmp ;
  void **tmp___0 ;

  {
  while (1) {
    tmp = __builtin_expect((long )(1 > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top), 0L);
    if (tmp) {
      zend_vm_stack_extend(1);
    } else {

    }
    break;
  }
  tmp___0 = (executor_globals.argument_stack)->top;
  ((executor_globals.argument_stack)->top) ++;
  *tmp___0 = ptr;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_push_nocheck)(void *ptr ) 
{ void **tmp ;

  {
  tmp = (executor_globals.argument_stack)->top;
  ((executor_globals.argument_stack)->top) ++;
  *tmp = ptr;
  return;
}
}
__inline static void *( __attribute__((__always_inline__)) zend_vm_stack_pop)(void) 
{ void *el ;
  zend_vm_stack p ;
  long tmp ;

  {
  ((executor_globals.argument_stack)->top) --;
  el = *((executor_globals.argument_stack)->top);
  tmp = __builtin_expect((long )((unsigned int )(executor_globals.argument_stack)->top == (unsigned int )((void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U)))), 0L);
  if (tmp) {
    p = executor_globals.argument_stack;
    executor_globals.argument_stack = p->prev;
    _efree((void *)p);
  } else {

  }
  return (el);
}
}
__inline static void *( __attribute__((__always_inline__)) zend_vm_stack_alloc)(size_t size ) 
{ void *ret ;
  int extra ;
  void **old_top ;
  long tmp ;
  long tmp___0 ;

  {
  size = (size + (sizeof(void *) - 1U)) / sizeof(void *);
  if (4U > sizeof(void *)) {
    extra = (int )((4UL - ((unsigned long )(executor_globals.argument_stack)->top & 3UL)) / (unsigned long )sizeof(void *));
    tmp = __builtin_expect((long )((unsigned long )((size + (size_t )extra) + (((sizeof(void *) + 4U) - 1U) & 4294967292U) / sizeof(void *)) > (unsigned long )((executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top)), 0L);
    if (tmp) {
      zend_vm_stack_extend((int )size);
    } else {
      old_top = (executor_globals.argument_stack)->top;
      (executor_globals.argument_stack)->top += extra;
      *((executor_globals.argument_stack)->top) = (void *)old_top;
      (executor_globals.argument_stack)->top += (((sizeof(void *) + 4U) - 1U) & 4294967292U) / sizeof(void *);
    }
  } else {
    while (1) {
      tmp___0 = __builtin_expect((long )((int )size > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top), 0L);
      if (tmp___0) {
        zend_vm_stack_extend((int )size);
      } else {

      }
      break;
    }
  }
  ret = (void *)(executor_globals.argument_stack)->top;
  (executor_globals.argument_stack)->top += size;
  return (ret);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_free_int)(void *ptr ) 
{ zend_vm_stack p ;
  long tmp ;

  {
  tmp = __builtin_expect((long )((unsigned int )((void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U))) == (unsigned int )((void **)ptr)), 0L);
  if (tmp) {
    p = executor_globals.argument_stack;
    executor_globals.argument_stack = p->prev;
    _efree((void *)p);
  } else {
    (executor_globals.argument_stack)->top = (void **)ptr;
  }
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_free)(void *ptr ) 
{ zend_vm_stack p ;
  long tmp ;

  {
  tmp = __builtin_expect((long )((unsigned int )((void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U))) == (unsigned int )((void **)ptr)), 0L);
  if (tmp) {
    p = executor_globals.argument_stack;
    executor_globals.argument_stack = p->prev;
    _efree((void *)p);
  } else {
    if (4U > sizeof(void *)) {
      ptr = (void *)((char *)ptr - (((sizeof(void *) + 4U) - 1U) & 4294967292U));
      (executor_globals.argument_stack)->top = *((void ***)ptr);
    } else {
      (executor_globals.argument_stack)->top = (void **)ptr;
    }
  }
  return;
}
}
__inline static void **( __attribute__((__always_inline__)) zend_vm_stack_push_args)(int count ) 
{ zend_vm_stack p ;
  void *data ;
  zend_vm_stack r ;
  long tmp ;
  int tmp___0 ;
  void **tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  void **tmp___4 ;

  {
  tmp___2 = __builtin_expect((long )((executor_globals.argument_stack)->top - (void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U)) < count), 0L);
  if (tmp___2) {
    goto _L;
  } else {
    tmp___3 = __builtin_expect((long )((unsigned int )(executor_globals.argument_stack)->top == (unsigned int )(executor_globals.argument_stack)->end), 0L);
    if (tmp___3) {
      _L: /* CIL Label */ 
      p = executor_globals.argument_stack;
      zend_vm_stack_extend(count + 1);
      (executor_globals.argument_stack)->top += count;
      *((executor_globals.argument_stack)->top) = (void *)((unsigned long )count);
      while (1) {
        tmp___0 = count;
        count --;
        if (tmp___0 > 0) {

        } else {
          break;
        }
        (p->top) --;
        data = *(p->top);
        tmp = __builtin_expect((long )((unsigned int )p->top == (unsigned int )((void **)((char *)p + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U)))), 0L);
        if (tmp) {
          r = p;
          (executor_globals.argument_stack)->prev = p->prev;
          p = p->prev;
          _efree((void *)r);
        } else {

        }
        *((void **)((char *)executor_globals.argument_stack + (((sizeof(struct _zend_vm_stack ) + 4U) - 1U) & 4294967292U)) + count) = data;
      }
      tmp___1 = (executor_globals.argument_stack)->top;
      ((executor_globals.argument_stack)->top) ++;
      return (tmp___1);
    } else {

    }
  }
  *((executor_globals.argument_stack)->top) = (void *)((unsigned long )count);
  tmp___4 = (executor_globals.argument_stack)->top;
  ((executor_globals.argument_stack)->top) ++;
  return (tmp___4);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_vm_stack_clear_multiple)(void) 
{ void **p ;
  int delete_count ;
  zval *q ;

  {
  p = (executor_globals.argument_stack)->top - 1;
  delete_count = (int )((unsigned long )*p);
  while (1) {
    delete_count --;
    if (delete_count >= 0) {

    } else {
      break;
    }
    p --;
    q = *((zval **)p);
    *p = (void *)0;
    i_zval_ptr_dtor(q);
  }
  zend_vm_stack_free_int((void *)p);
  return;
}
}
__inline static zval **( __attribute__((__always_inline__)) zend_vm_stack_get_arg)(int requested_arg ) 
{ void **p ;
  int arg_count ;
  long tmp ;

  {
  p = ((executor_globals.current_execute_data)->prev_execute_data)->function_state.arguments;
  arg_count = (int )((unsigned long )*p);
  tmp = __builtin_expect((long )(requested_arg > arg_count), 0L);
  if (tmp) {
    return ((zval **)((void *)0));
  } else {

  }
  return ((((zval **)p - arg_count) + requested_arg) - 1);
}
}
__inline static void ( __attribute__((__always_inline__)) zend_arg_types_stack_2_pop)(zend_ptr_stack *stack , zval **object , zend_function **fbc ) 
{ void *a ;
  void *b ;

  {
  zend_ptr_stack_2_pop(stack, & a, & b);
  *object = (zval *)a;
  *fbc = (zend_function *)b;
  return;
}
}
__inline static void ( __attribute__((__always_inline__)) zend_arg_types_stack_3_pop)(zend_ptr_stack *stack , zend_class_entry **called_scope , zval **object , zend_function **fbc ) 
{ void *a ;
  void *b ;
  void *c ;

  {
  zend_ptr_stack_3_pop(stack, & a, & b, & c);
  *called_scope = (zend_class_entry *)a;
  *object = (zval *)b;
  *fbc = (zend_function *)c;
  return;
}
}
extern void execute_new_code(void) ;
extern char const __attribute__((__visibility__("default")))  *get_active_class_name(char const   **space ) ;
extern char const __attribute__((__visibility__("default")))  *get_active_function_name(void) ;
extern char const __attribute__((__visibility__("default")))  *zend_get_executed_filename(void) ;
extern uint __attribute__((__visibility__("default")))  zend_get_executed_lineno(void) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_executing(void) ;
extern void __attribute__((__visibility__("default")))  zend_set_timeout(long seconds , int reset_signals ) ;
extern void __attribute__((__visibility__("default")))  zend_unset_timeout(void) ;
extern void __attribute__((__visibility__("default")))  zend_timeout(int dummy ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_fetch_class(char const   *class_name , uint class_name_len , int fetch_type ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_fetch_class_by_name(char const   *class_name , uint class_name_len , zend_literal const   *key , int fetch_type ) ;
extern void zend_verify_abstract_class(zend_class_entry *ce ) ;
extern zval __attribute__((__visibility__("default")))  **zend_get_compiled_variable_value(zend_execute_data const   *execute_data_ptr , zend_uint var ) ;
extern int __attribute__((__visibility__("default")))  zend_set_user_opcode_handler(zend_uchar opcode , int (*handler)(zend_execute_data *execute_data ) ) ;
extern user_opcode_handler_t __attribute__((__visibility__("default")))  zend_get_user_opcode_handler(zend_uchar opcode ) ;
extern zval __attribute__((__visibility__("default")))  *zend_get_zval_ptr(int op_type , znode_op const   *node , temp_variable const   *Ts , zend_free_op *should_free , int type ) ;
extern zval __attribute__((__visibility__("default")))  **zend_get_zval_ptr_ptr(int op_type , znode_op const   *node , temp_variable const   *Ts , zend_free_op *should_free , int type ) ;
extern int __attribute__((__visibility__("default")))  zend_do_fcall(zend_execute_data *execute_data ) ;
extern int zend_next_free_module(void) ;
extern int __attribute__((__visibility__("default")))  zend_get_parameters(int ht , int param_count  , ...) ;
extern int __attribute__((__visibility__("default")))  _zend_get_parameters_array(int ht , int param_count , zval **argument_array ) ;
extern int __attribute__((__visibility__("default"), __deprecated__))  zend_get_parameters_ex(int param_count  , ...) ;
extern int __attribute__((__visibility__("default")))  _zend_get_parameters_array_ex(int param_count , zval ***argument_array ) ;
extern int __attribute__((__visibility__("default")))  zend_copy_parameters_array(int param_count , zval *argument_array ) ;
extern int __attribute__((__visibility__("default")))  zend_parse_parameters(int num_args , char const   *type_spec  , ...) ;
extern int __attribute__((__visibility__("default")))  zend_parse_parameters_ex(int flags , int num_args , char const   *type_spec  , ...) ;
extern char __attribute__((__visibility__("default")))  *zend_zval_type_name(zval const   *arg ) ;
extern int __attribute__((__visibility__("default")))  zend_parse_method_parameters(int num_args , zval *this_ptr , char const   *type_spec  , ...) ;
extern int __attribute__((__visibility__("default")))  zend_parse_method_parameters_ex(int flags , int num_args , zval *this_ptr , char const   *type_spec  , ...) ;
extern int __attribute__((__visibility__("default")))  zend_register_functions(zend_class_entry *scope , zend_function_entry const   *functions , HashTable *function_table , int type ) ;
extern void __attribute__((__visibility__("default")))  zend_unregister_functions(zend_function_entry const   *functions , int count , HashTable *function_table ) ;
extern int __attribute__((__visibility__("default")))  zend_startup_module(zend_module_entry *module_entry ) ;
extern zend_module_entry __attribute__((__visibility__("default")))  *zend_register_internal_module(zend_module_entry *module_entry ) ;
extern zend_module_entry __attribute__((__visibility__("default")))  *zend_register_module_ex(zend_module_entry *module ) ;
extern int __attribute__((__visibility__("default")))  zend_startup_module_ex(zend_module_entry *module ) ;
extern int __attribute__((__visibility__("default")))  zend_startup_modules(void) ;
extern void __attribute__((__visibility__("default")))  zend_collect_module_handlers(void) ;
extern void __attribute__((__visibility__("default")))  zend_destroy_modules(void) ;
extern void __attribute__((__visibility__("default")))  zend_check_magic_method_implementation(zend_class_entry const   *ce , zend_function const   *fptr , int error_type ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_register_internal_class(zend_class_entry *class_entry ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_register_internal_class_ex(zend_class_entry *class_entry , zend_class_entry *parent_ce , char *parent_name ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_register_internal_interface(zend_class_entry *orig_class_entry ) ;
extern void __attribute__((__visibility__("default")))  zend_class_implements(zend_class_entry *class_entry , int num_interfaces  , ...) ;
extern int __attribute__((__visibility__("default")))  zend_register_class_alias_ex(char const   *name , int name_len , zend_class_entry *ce ) ;
extern int __attribute__((__visibility__("default")))  zend_disable_function(char *function_name , uint function_name_length ) ;
extern int __attribute__((__visibility__("default")))  zend_disable_class(char *class_name , uint class_name_length ) ;
extern void __attribute__((__visibility__("default")))  zend_wrong_param_count(void) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_callable_ex(zval *callable , zval *object_ptr , uint check_flags , char **callable_name , int *callable_name_len , zend_fcall_info_cache *fcc , char **error ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_callable(zval *callable , uint check_flags , char **callable_name ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_make_callable(zval *callable , char **callable_name ) ;
extern char const __attribute__((__visibility__("default")))  *zend_get_module_version(char const   *module_name ) ;
extern int __attribute__((__visibility__("default")))  zend_get_module_started(char const   *module_name ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property(zend_class_entry *ce , char const   *name , int name_length , zval *property , int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_ex(zend_class_entry *ce , char const   *name , int name_length , zval *property , int access_type , char const   *doc_comment , int doc_comment_len ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_null(zend_class_entry *ce , char const   *name , int name_length , int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_bool(zend_class_entry *ce , char const   *name , int name_length , long value , int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_long(zend_class_entry *ce , char const   *name , int name_length , long value , int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_double(zend_class_entry *ce , char const   *name , int name_length , double value , int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_string(zend_class_entry *ce , char const   *name , int name_length , char const   *value , int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_property_stringl(zend_class_entry *ce , char const   *name , int name_length , char const   *value , int value_len , int access_type ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant(zend_class_entry *ce , char const   *name , size_t name_length , zval *value ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_null(zend_class_entry *ce , char const   *name , size_t name_length ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_long(zend_class_entry *ce , char const   *name , size_t name_length , long value ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_bool(zend_class_entry *ce , char const   *name , size_t name_length , zend_bool value ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_double(zend_class_entry *ce , char const   *name , size_t name_length , double value ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_stringl(zend_class_entry *ce , char const   *name , size_t name_length , char const   *value , size_t value_length ) ;
extern int __attribute__((__visibility__("default")))  zend_declare_class_constant_string(zend_class_entry *ce , char const   *name , size_t name_length , char const   *value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_class_constants(zend_class_entry *class_type ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property(zend_class_entry *scope , zval *object , char const   *name , int name_length , zval *value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_null(zend_class_entry *scope , zval *object , char const   *name , int name_length ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_bool(zend_class_entry *scope , zval *object , char const   *name , int name_length , long value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_long(zend_class_entry *scope , zval *object , char const   *name , int name_length , long value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_double(zend_class_entry *scope , zval *object , char const   *name , int name_length , double value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_string(zend_class_entry *scope , zval *object , char const   *name , int name_length , char const   *value ) ;
extern void __attribute__((__visibility__("default")))  zend_update_property_stringl(zend_class_entry *scope , zval *object , char const   *name , int name_length , char const   *value , int value_length ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property(zend_class_entry *scope , char const   *name , int name_length , zval *value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_null(zend_class_entry *scope , char const   *name , int name_length ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_bool(zend_class_entry *scope , char const   *name , int name_length , long value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_long(zend_class_entry *scope , char const   *name , int name_length , long value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_double(zend_class_entry *scope , char const   *name , int name_length , double value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_string(zend_class_entry *scope , char const   *name , int name_length , char const   *value ) ;
extern int __attribute__((__visibility__("default")))  zend_update_static_property_stringl(zend_class_entry *scope , char const   *name , int name_length , char const   *value , int value_length ) ;
extern zval __attribute__((__visibility__("default")))  *zend_read_property(zend_class_entry *scope , zval *object , char const   *name , int name_length , zend_bool silent ) ;
extern zval __attribute__((__visibility__("default")))  *zend_read_static_property(zend_class_entry *scope , char const   *name , int name_length , zend_bool silent ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_get_class_entry(zval const   *zobject ) ;
extern int __attribute__((__visibility__("default")))  zend_get_object_classname(zval const   *object , char const   **class_name , zend_uint *class_name_len ) ;
extern char __attribute__((__visibility__("default")))  *zend_get_type_by_const(int type ) ;
extern int __attribute__((__visibility__("default")))  _array_init(zval *arg , uint size ) ;
extern int __attribute__((__visibility__("default")))  _object_init(zval *arg ) ;
extern int __attribute__((__visibility__("default")))  _object_init_ex(zval *arg , zend_class_entry *ce ) ;
extern int __attribute__((__visibility__("default")))  _object_and_properties_init(zval *arg , zend_class_entry *ce , HashTable *properties ) ;
extern void __attribute__((__visibility__("default")))  object_properties_init(zend_object *object , zend_class_entry *class_type ) ;
extern void __attribute__((__visibility__("default")))  zend_merge_properties(zval *obj , HashTable *properties , int destroy_ht ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_function(zval *arg , char const   *key , void (*function_ptr)(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_long_ex(zval *arg , char const   *key , uint key_len , long n ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_null_ex(zval *arg , char const   *key , uint key_len ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_bool_ex(zval *arg , char const   *key , uint key_len , int b ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_resource_ex(zval *arg , char const   *key , uint key_len , int r ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_double_ex(zval *arg , char const   *key , uint key_len , double d ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_string_ex(zval *arg , char const   *key , uint key_len , char *str , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_stringl_ex(zval *arg , char const   *key , uint key_len , char *str , uint length , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_assoc_zval_ex(zval *arg , char const   *key , uint key_len , zval *value ) ;
extern int __attribute__((__visibility__("default")))  add_index_long(zval *arg , ulong idx , long n ) ;
extern int __attribute__((__visibility__("default")))  add_index_null(zval *arg , ulong idx ) ;
extern int __attribute__((__visibility__("default")))  add_index_bool(zval *arg , ulong idx , int b ) ;
extern int __attribute__((__visibility__("default")))  add_index_resource(zval *arg , ulong idx , int r ) ;
extern int __attribute__((__visibility__("default")))  add_index_double(zval *arg , ulong idx , double d ) ;
extern int __attribute__((__visibility__("default")))  add_index_string(zval *arg , ulong idx , char const   *str , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_index_stringl(zval *arg , ulong idx , char const   *str , uint length , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_index_zval(zval *arg , ulong index , zval *value ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_long(zval *arg , long n ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_null(zval *arg ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_bool(zval *arg , int b ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_resource(zval *arg , int r ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_double(zval *arg , double d ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_string(zval *arg , char const   *str , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_stringl(zval *arg , char const   *str , uint length , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_next_index_zval(zval *arg , zval *value ) ;
extern int __attribute__((__visibility__("default")))  add_get_assoc_string_ex(zval *arg , char const   *key , uint key_len , char const   *str , void **dest , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_get_assoc_stringl_ex(zval *arg , char const   *key , uint key_len , char const   *str , uint length , void **dest , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_get_index_long(zval *arg , ulong idx , long l , void **dest ) ;
extern int __attribute__((__visibility__("default")))  add_get_index_double(zval *arg , ulong idx , double d , void **dest ) ;
extern int __attribute__((__visibility__("default")))  add_get_index_string(zval *arg , ulong idx , char const   *str , void **dest , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_get_index_stringl(zval *arg , ulong idx , char const   *str , uint length , void **dest , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_property_long_ex(zval *arg , char const   *key , uint key_len , long l ) ;
extern int __attribute__((__visibility__("default")))  add_property_null_ex(zval *arg , char const   *key , uint key_len ) ;
extern int __attribute__((__visibility__("default")))  add_property_bool_ex(zval *arg , char const   *key , uint key_len , int b ) ;
extern int __attribute__((__visibility__("default")))  add_property_resource_ex(zval *arg , char const   *key , uint key_len , long r ) ;
extern int __attribute__((__visibility__("default")))  add_property_double_ex(zval *arg , char const   *key , uint key_len , double d ) ;
extern int __attribute__((__visibility__("default")))  add_property_string_ex(zval *arg , char const   *key , uint key_len , char const   *str , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_property_stringl_ex(zval *arg , char const   *key , uint key_len , char const   *str , uint length , int duplicate ) ;
extern int __attribute__((__visibility__("default")))  add_property_zval_ex(zval *arg , char const   *key , uint key_len , zval *value ) ;
extern int __attribute__((__visibility__("default")))  call_user_function(HashTable *function_table , zval **object_pp , zval *function_name , zval *retval_ptr , zend_uint param_count , zval **params ) ;
extern int __attribute__((__visibility__("default")))  call_user_function_ex(HashTable *function_table , zval **object_pp , zval *function_name , zval **retval_ptr_ptr , zend_uint param_count , zval ***params , int no_separation , HashTable *symbol_table ) ;
extern zend_fcall_info const __attribute__((__visibility__("default")))  empty_fcall_info ;
extern zend_fcall_info_cache const __attribute__((__visibility__("default")))  empty_fcall_info_cache ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_init(zval *callable , uint check_flags , zend_fcall_info *fci , zend_fcall_info_cache *fcc , char **callable_name , char **error ) ;
extern void __attribute__((__visibility__("default")))  zend_fcall_info_args_clear(zend_fcall_info *fci , int free_mem ) ;
extern void __attribute__((__visibility__("default")))  zend_fcall_info_args_save(zend_fcall_info *fci , int *param_count , zval ****params ) ;
extern void __attribute__((__visibility__("default")))  zend_fcall_info_args_restore(zend_fcall_info *fci , int param_count , zval ***params ) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_args(zend_fcall_info *fci , zval *args ) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_argp(zend_fcall_info *fci , int argc , zval ***argv ) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_argv(zend_fcall_info *fci , int argc , va_list *argv ) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_argn(zend_fcall_info *fci , int argc  , ...) ;
extern int __attribute__((__visibility__("default")))  zend_fcall_info_call(zend_fcall_info *fci , zend_fcall_info_cache *fcc , zval **retval , zval *args ) ;
extern int __attribute__((__visibility__("default")))  zend_call_function(zend_fcall_info *fci , zend_fcall_info_cache *fci_cache ) ;
extern int __attribute__((__visibility__("default")))  zend_set_hash_symbol(zval *symbol , char const   *name , int name_length , zend_bool is_ref , int num_symbol_tables  , ...) ;
extern void __attribute__((__visibility__("default")))  zend_delete_variable(zend_execute_data *ex , HashTable *ht , char const   *name , int name_len , ulong hash_value ) ;
extern int __attribute__((__visibility__("default")))  zend_delete_global_variable(char const   *name , int name_len ) ;
extern int __attribute__((__visibility__("default")))  zend_delete_global_variable_ex(char const   *name , int name_len , ulong hash_value ) ;
extern void __attribute__((__visibility__("default")))  zend_reset_all_cv(HashTable *symbol_table ) ;
extern void __attribute__((__visibility__("default")))  zend_rebuild_symbol_table(void) ;
extern void __attribute__((__visibility__("default")))  zif_display_disabled_function(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
extern void __attribute__((__visibility__("default")))  zif_display_disabled_class(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
extern void __attribute__((__visibility__("default")))  zend_exception_set_previous(zval *exception , zval *add_previous ) ;
extern void __attribute__((__visibility__("default")))  zend_exception_save(void) ;
extern void __attribute__((__visibility__("default")))  zend_exception_restore(void) ;
extern void zend_throw_exception_internal(zval *exception ) ;
extern void zend_register_default_exception(void) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_exception_get_default(void) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_get_error_exception(void) ;
extern void __attribute__((__visibility__("default")))  zend_register_default_classes(void) ;
extern zval __attribute__((__visibility__("default")))  *zend_throw_exception(zend_class_entry *exception_ce , char *message , long code ) ;
extern zval __attribute__((__visibility__("default")))  *zend_throw_exception_ex(zend_class_entry *exception_ce , long code , char *format  , ...) ;
extern void __attribute__((__visibility__("default")))  zend_throw_exception_object(zval *exception ) ;
extern void __attribute__((__visibility__("default")))  zend_clear_exception(void) ;
extern zval __attribute__((__visibility__("default")))  *zend_throw_error_exception(zend_class_entry *exception_ce , char *message , long code , int severity ) ;
extern void __attribute__((__visibility__("default")))  (*zend_throw_exception_hook)(zval *ex ) ;
extern void __attribute__((__visibility__("default")))  zend_exception_error(zval *exception , int severity ) ;
extern int zend_spprintf(char **message , int max_len , char *format  , ...) ;
extern  __attribute__((__nothrow__)) int access(char const   *__name , int __type )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int euidaccess(char const   *__name , int __type )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int eaccess(char const   *__name , int __type )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int faccessat(int __fd , char const   *__file , int __type , int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) __off_t lseek(int __fd , __off_t __offset , int __whence ) ;
extern  __attribute__((__nothrow__)) __off64_t lseek64(int __fd , __off64_t __offset , int __whence ) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes , __off_t __offset ) ;
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __n , __off_t __offset ) ;
extern ssize_t pread64(int __fd , void *__buf , size_t __nbytes , __off64_t __offset ) ;
extern ssize_t pwrite64(int __fd , void const   *__buf , size_t __n , __off64_t __offset ) ;
extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
extern  __attribute__((__nothrow__)) int pipe2(int *__pipedes , int __flags ) ;
extern  __attribute__((__nothrow__)) unsigned int alarm(unsigned int __seconds ) ;
extern unsigned int sleep(unsigned int __seconds ) ;
extern  __attribute__((__nothrow__)) __useconds_t ualarm(__useconds_t __value , __useconds_t __interval ) ;
extern int usleep(__useconds_t __useconds ) ;
extern int pause(void) ;
extern  __attribute__((__nothrow__)) int chown(char const   *__file , __uid_t __owner , __gid_t __group )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner , __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int lchown(char const   *__file , __uid_t __owner , __gid_t __group )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int fchownat(int __fd , char const   *__file , __uid_t __owner , __gid_t __group , int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int chdir(char const   *__path )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int fchdir(int __fd ) ;
extern  __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;
extern  __attribute__((__nothrow__)) char *get_current_dir_name(void) ;
extern  __attribute__((__nothrow__)) char *getwd(char *__buf )  __attribute__((__nonnull__(1), __deprecated__)) ;
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
extern  __attribute__((__nothrow__)) int dup3(int __fd , int __fd2 , int __flags ) ;
extern char **__environ ;
extern char **environ ;
extern  __attribute__((__nothrow__)) int execve(char const   *__path , char * const  *__argv , char * const  *__envp )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int fexecve(int __fd , char * const  *__argv , char * const  *__envp )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int execv(char const   *__path , char * const  *__argv )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execle(char const   *__path , char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execl(char const   *__path , char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execvp(char const   *__file , char * const  *__argv )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execlp(char const   *__file , char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execvpe(char const   *__file , char * const  *__argv , char * const  *__envp )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int nice(int __inc ) ;
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
extern  __attribute__((__nothrow__)) long pathconf(char const   *__path , int __name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long fpathconf(int __fd , int __name ) ;
extern  __attribute__((__nothrow__)) long sysconf(int __name ) ;
extern  __attribute__((__nothrow__)) size_t confstr(int __name , char *__buf , size_t __len ) ;
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
extern  __attribute__((__nothrow__)) int group_member(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid , __uid_t __euid ) ;
extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid , __gid_t __egid ) ;
extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int getresuid(__uid_t *__ruid , __uid_t *__euid , __uid_t *__suid ) ;
extern  __attribute__((__nothrow__)) int getresgid(__gid_t *__rgid , __gid_t *__egid , __gid_t *__sgid ) ;
extern  __attribute__((__nothrow__)) int setresuid(__uid_t __ruid , __uid_t __euid , __uid_t __suid ) ;
extern  __attribute__((__nothrow__)) int setresgid(__gid_t __rgid , __gid_t __egid , __gid_t __sgid ) ;
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
extern  __attribute__((__nothrow__)) __pid_t vfork(void) ;
extern  __attribute__((__nothrow__)) char *ttyname(int __fd ) ;
extern  __attribute__((__nothrow__)) int ttyname_r(int __fd , char *__buf , size_t __buflen )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int isatty(int __fd ) ;
extern  __attribute__((__nothrow__)) int ttyslot(void) ;
extern  __attribute__((__nothrow__)) int link(char const   *__from , char const   *__to )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int linkat(int __fromfd , char const   *__from , int __tofd , char const   *__to , int __flags )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) int symlink(char const   *__from , char const   *__to )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) ssize_t readlink(char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int symlinkat(char const   *__from , int __tofd , char const   *__to )  __attribute__((__nonnull__(1,3))) ;
extern  __attribute__((__nothrow__)) ssize_t readlinkat(int __fd , char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) int unlink(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int unlinkat(int __fd , char const   *__name , int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int rmdir(char const   *__path )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd ) ;
extern  __attribute__((__nothrow__)) int tcsetpgrp(int __fd , __pid_t __pgrp_id ) ;
extern char *getlogin(void) ;
extern int getlogin_r(char *__name , size_t __name_len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int setlogin(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern char *optarg ;
extern int optind ;
extern int opterr ;
extern int optopt ;
extern  __attribute__((__nothrow__)) int getopt(int ___argc , char * const  *___argv , char const   *__shortopts ) ;
extern  __attribute__((__nothrow__)) int gethostname(char *__name , size_t __len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sethostname(char const   *__name , size_t __len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sethostid(long __id ) ;
extern  __attribute__((__nothrow__)) int getdomainname(char *__name , size_t __len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int setdomainname(char const   *__name , size_t __len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int vhangup(void) ;
extern  __attribute__((__nothrow__)) int revoke(char const   *__file )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int profil(unsigned short *__sample_buffer , size_t __size , size_t __offset , unsigned int __scale )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int acct(char const   *__name ) ;
extern  __attribute__((__nothrow__)) char *getusershell(void) ;
extern  __attribute__((__nothrow__)) void endusershell(void) ;
extern  __attribute__((__nothrow__)) void setusershell(void) ;
extern  __attribute__((__nothrow__)) int daemon(int __nochdir , int __noclose ) ;
extern  __attribute__((__nothrow__)) int chroot(char const   *__path )  __attribute__((__nonnull__(1))) ;
extern char *getpass(char const   *__prompt )  __attribute__((__nonnull__(1))) ;
extern int fsync(int __fd ) ;
extern long gethostid(void) ;
extern  __attribute__((__nothrow__)) void sync(void) ;
extern  __attribute__((__nothrow__)) int getpagesize(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int getdtablesize(void) ;
extern  __attribute__((__nothrow__)) int truncate(char const   *__file , __off_t __length )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int truncate64(char const   *__file , __off64_t __length )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd , __off_t __length ) ;
extern  __attribute__((__nothrow__)) int ftruncate64(int __fd , __off64_t __length ) ;
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
extern int lockf(int __fd , int __cmd , __off_t __len ) ;
extern int lockf64(int __fd , int __cmd , __off64_t __len ) ;
extern int fdatasync(int __fildes ) ;
extern  __attribute__((__nothrow__)) char *crypt(char const   *__key , char const   *__salt )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void encrypt(char *__block , int __edflag )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void swab(void const   * __restrict  __from , void * __restrict  __to , ssize_t __n )  __attribute__((__nonnull__(1,2))) ;
__inline extern  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
__inline extern  __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__statbuf )  __attribute__((__nonnull__(2))) ;
__inline extern  __attribute__((__nothrow__)) int stat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
__inline extern  __attribute__((__nothrow__)) int fstat64(int __fd , struct stat64 *__statbuf )  __attribute__((__nonnull__(2))) ;
__inline extern  __attribute__((__nothrow__)) int fstatat(int __fd , char const   * __restrict  __filename , struct stat * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3))) ;
__inline extern  __attribute__((__nothrow__)) int fstatat64(int __fd , char const   * __restrict  __filename , struct stat64 * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3))) ;
__inline extern  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
__inline extern  __attribute__((__nothrow__)) int lstat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int chmod(char const   *__file , __mode_t __mode )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int lchmod(char const   *__file , __mode_t __mode )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int fchmodat(int __fd , char const   *__file , __mode_t __mode , int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;
extern  __attribute__((__nothrow__)) __mode_t getumask(void) ;
extern  __attribute__((__nothrow__)) int mkdir(char const   *__path , __mode_t __mode )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int mkdirat(int __fd , char const   *__path , __mode_t __mode )  __attribute__((__nonnull__(2))) ;
__inline extern  __attribute__((__nothrow__)) int mknod(char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) int mknodat(int __fd , char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int mkfifo(char const   *__path , __mode_t __mode )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int mkfifoat(int __fd , char const   *__path , __mode_t __mode )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int utimensat(int __fd , char const   *__path , struct timespec  const  *__times , int __flags )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int futimens(int __fd , struct timespec  const  *__times ) ;
extern  __attribute__((__nothrow__)) int __fxstat(int __ver , int __fildes , struct stat *__stat_buf )  __attribute__((__nonnull__(3))) ;
extern  __attribute__((__nothrow__)) int __xstat(int __ver , char const   *__filename , struct stat *__stat_buf )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) int __lxstat(int __ver , char const   *__filename , struct stat *__stat_buf )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) int __fxstatat(int __ver , int __fildes , char const   *__filename , struct stat *__stat_buf , int __flag )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) int __fxstat64(int __ver , int __fildes , struct stat64 *__stat_buf )  __attribute__((__nonnull__(3))) ;
extern  __attribute__((__nothrow__)) int __xstat64(int __ver , char const   *__filename , struct stat64 *__stat_buf )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) int __lxstat64(int __ver , char const   *__filename , struct stat64 *__stat_buf )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) int __fxstatat64(int __ver , int __fildes , char const   *__filename , struct stat64 *__stat_buf , int __flag )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) int __xmknod(int __ver , char const   *__path , __mode_t __mode , __dev_t *__dev )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) int __xmknodat(int __ver , int __fd , char const   *__path , __mode_t __mode , __dev_t *__dev )  __attribute__((__nonnull__(3,5))) ;
__inline extern  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
__inline extern int stat(char const   * __restrict  __path , struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __xstat(3, (char const   *)__path, (struct stat *)__statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
__inline extern int lstat(char const   * __restrict  __path , struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __lxstat(3, (char const   *)__path, (struct stat *)__statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__statbuf )  __attribute__((__nonnull__(2))) ;
__inline extern int fstat(int __fd , struct stat *__statbuf ) 
{ int tmp ;

  {
  tmp = __fxstat(3, __fd, __statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int fstatat(int __fd , char const   * __restrict  __filename , struct stat * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3))) ;
__inline extern int fstatat(int __fd , char const   * __restrict  __filename , struct stat * __restrict  __statbuf , int __flag ) 
{ int tmp ;

  {
  tmp = __fxstatat(3, __fd, (char const   *)__filename, (struct stat *)__statbuf, __flag);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int mknod(char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(1))) ;
__inline extern int mknod(char const   *__path , __mode_t __mode , __dev_t __dev ) 
{ int tmp ;

  {
  tmp = __xmknod(1, __path, __mode, & __dev);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int mknodat(int __fd , char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(2))) ;
__inline extern int mknodat(int __fd , char const   *__path , __mode_t __mode , __dev_t __dev ) 
{ int tmp ;

  {
  tmp = __xmknodat(1, __fd, __path, __mode, & __dev);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int stat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
__inline extern int stat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __xstat64(3, (char const   *)__path, (struct stat64 *)__statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int lstat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
__inline extern int lstat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __lxstat64(3, (char const   *)__path, (struct stat64 *)__statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int fstat64(int __fd , struct stat64 *__statbuf )  __attribute__((__nonnull__(2))) ;
__inline extern int fstat64(int __fd , struct stat64 *__statbuf ) 
{ int tmp ;

  {
  tmp = __fxstat64(3, __fd, __statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int fstatat64(int __fd , char const   * __restrict  __filename , struct stat64 * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3))) ;
__inline extern int fstatat64(int __fd , char const   * __restrict  __filename , struct stat64 * __restrict  __statbuf , int __flag ) 
{ int tmp ;

  {
  tmp = __fxstatat64(3, __fd, (char const   *)__filename, (struct stat64 *)__statbuf, __flag);
  return (tmp);
}
}
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
extern  __attribute__((__nothrow__)) int isctype(int __c , int __mask ) ;
extern  __attribute__((__nothrow__)) int isascii(int __c ) ;
extern  __attribute__((__nothrow__)) int toascii(int __c ) ;
extern  __attribute__((__nothrow__)) int _toupper(int  ) ;
extern  __attribute__((__nothrow__)) int _tolower(int  ) ;
__inline extern  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline extern int tolower(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp = __ctype_tolower_loc();
      tmp___0 = *(*tmp + __c);
    } else {
      tmp___0 = (int const   )__c;
    }
  } else {
    tmp___0 = (int const   )__c;
  }
  return ((int )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) int toupper(int __c ) ;
__inline extern int toupper(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp = __ctype_toupper_loc();
      tmp___0 = *(*tmp + __c);
    } else {
      tmp___0 = (int const   )__c;
    }
  } else {
    tmp___0 = (int const   )__c;
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
extern  __attribute__((__nothrow__)) int utime(char const   *__file , struct utimbuf  const  *__file_times )  __attribute__((__nonnull__(1))) ;
extern DIR *opendir(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern DIR *fdopendir(int __fd ) ;
extern int closedir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern struct dirent *readdir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern struct dirent64 *readdir64(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern int readdir_r(DIR * __restrict  __dirp , struct dirent * __restrict  __entry , struct dirent ** __restrict  __result )  __attribute__((__nonnull__(1,2,3))) ;
extern int readdir64_r(DIR * __restrict  __dirp , struct dirent64 * __restrict  __entry , struct dirent64 ** __restrict  __result )  __attribute__((__nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) void rewinddir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void seekdir(DIR *__dirp , long __pos )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long telldir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int dirfd(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern int scandir(char const   * __restrict  __dir , struct dirent *** __restrict  __namelist , int (*__selector)(struct dirent  const  * ) , int (*__cmp)(struct dirent  const  ** , struct dirent  const  ** ) )  __attribute__((__nonnull__(1,2))) ;
extern int scandir64(char const   * __restrict  __dir , struct dirent64 *** __restrict  __namelist , int (*__selector)(struct dirent64  const  * ) , int (*__cmp)(struct dirent64  const  ** , struct dirent64  const  ** ) )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int alphasort(struct dirent  const  **__e1 , struct dirent  const  **__e2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int alphasort64(struct dirent64  const  **__e1 , struct dirent64  const  **__e2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) __ssize_t getdirentries(int __fd , char * __restrict  __buf , size_t __nbytes , __off_t * __restrict  __basep )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) __ssize_t getdirentries64(int __fd , char * __restrict  __buf , size_t __nbytes , __off64_t * __restrict  __basep )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) int versionsort(struct dirent  const  **__e1 , struct dirent  const  **__e2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int versionsort64(struct dirent64  const  **__e1 , struct dirent64  const  **__e2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern void __attribute__((__visibility__("default")))  virtual_cwd_startup(void) ;
extern void __attribute__((__visibility__("default")))  virtual_cwd_shutdown(void) ;
extern char __attribute__((__visibility__("default")))  *virtual_getcwd_ex(size_t *length ) ;
extern char __attribute__((__visibility__("default")))  *virtual_getcwd(char *buf , size_t size ) ;
extern int __attribute__((__visibility__("default")))  virtual_chdir(char const   *path ) ;
extern int __attribute__((__visibility__("default")))  virtual_chdir_file(char const   *path , int (*p_chdir)(char const   *path ) ) ;
extern int __attribute__((__visibility__("default")))  virtual_filepath(char const   *path , char **filepath ) ;
extern int __attribute__((__visibility__("default")))  virtual_filepath_ex(char const   *path , char **filepath , int (*verify_path)(cwd_state const   * ) ) ;
extern char __attribute__((__visibility__("default")))  *virtual_realpath(char const   *path , char *real_path ) ;
extern FILE __attribute__((__visibility__("default")))  *virtual_fopen(char const   *path , char const   *mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_open(char const   *path , int flags  , ...) ;
extern int __attribute__((__visibility__("default")))  virtual_creat(char const   *path , mode_t mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_rename(char *oldname , char *newname ) ;
extern int __attribute__((__visibility__("default")))  virtual_stat(char const   *path , struct stat *buf ) ;
extern int __attribute__((__visibility__("default")))  virtual_lstat(char const   *path , struct stat *buf ) ;
extern int __attribute__((__visibility__("default")))  virtual_unlink(char const   *path ) ;
extern int __attribute__((__visibility__("default")))  virtual_mkdir(char const   *pathname , mode_t mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_rmdir(char const   *pathname ) ;
extern DIR __attribute__((__visibility__("default")))  *virtual_opendir(char const   *pathname ) ;
extern FILE __attribute__((__visibility__("default")))  *virtual_popen(char const   *command , char const   *type ) ;
extern int __attribute__((__visibility__("default")))  virtual_access(char const   *pathname , int mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_utime(char const   *filename , struct utimbuf *buf ) ;
extern int __attribute__((__visibility__("default")))  virtual_chmod(char const   *filename , mode_t mode ) ;
extern int __attribute__((__visibility__("default")))  virtual_chown(char const   *filename , uid_t owner , gid_t group , int link ) ;
extern int __attribute__((__visibility__("default")))  virtual_file_ex(cwd_state *state , char const   *path , int (*verify_path)(cwd_state const   * ) , int use_realpath ) ;
extern char __attribute__((__visibility__("default")))  *tsrm_realpath(char const   *path , char *real_path ) ;
extern virtual_cwd_globals cwd_globals ;
extern void __attribute__((__visibility__("default")))  realpath_cache_clean(void) ;
extern void __attribute__((__visibility__("default")))  realpath_cache_del(char const   *path , int path_len ) ;
extern realpath_cache_bucket __attribute__((__visibility__("default")))  *realpath_cache_lookup(char const   *path , int path_len , time_t t ) ;
extern int __attribute__((__visibility__("default")))  realpath_cache_size(void) ;
extern int __attribute__((__visibility__("default")))  realpath_cache_max_buckets(void) ;
extern realpath_cache_bucket __attribute__((__visibility__("default")))  **realpath_cache_get_buckets(void) ;
extern void __attribute__((__visibility__("default")))  zend_save_lexical_state(zend_lex_state *lex_state ) ;
extern void __attribute__((__visibility__("default")))  zend_restore_lexical_state(zend_lex_state *lex_state ) ;
extern int __attribute__((__visibility__("default")))  zend_prepare_string_for_scanning(zval *str , char *filename ) ;
extern void __attribute__((__visibility__("default")))  zend_multibyte_yyinput_again(size_t (*old_input_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ) , zend_encoding const   *old_encoding ) ;
extern int __attribute__((__visibility__("default")))  zend_multibyte_set_filter(zend_encoding const   *onetime_encoding ) ;
static void zend_duplicate_property_info(zend_property_info *property_info ) 
{ char __attribute__((__visibility__("default")))  *tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;

  {
  if ((unsigned int )property_info->name >= (unsigned int )compiler_globals.interned_strings_start) {
    if ((unsigned int )property_info->name < (unsigned int )compiler_globals.interned_strings_end) {

    } else {
      tmp = _estrndup(property_info->name, (unsigned int )property_info->name_length);
      property_info->name = (char const   *)tmp;
    }
  } else {
    tmp = _estrndup(property_info->name, (unsigned int )property_info->name_length);
    property_info->name = (char const   *)tmp;
  }
  if (property_info->doc_comment) {
    tmp___0 = _estrndup(property_info->doc_comment, (unsigned int )property_info->doc_comment_len);
    property_info->doc_comment = (char const   *)tmp___0;
  } else {

  }
  return;
}
}
static void zend_duplicate_property_info_internal(zend_property_info *property_info ) 
{ char __attribute__((__visibility__("default")))  *tmp ;

  {
  if ((unsigned int )property_info->name >= (unsigned int )compiler_globals.interned_strings_start) {
    if ((unsigned int )property_info->name < (unsigned int )compiler_globals.interned_strings_end) {

    } else {
      tmp = zend_strndup(property_info->name, (unsigned int )property_info->name_length);
      property_info->name = (char const   *)tmp;
    }
  } else {
    tmp = zend_strndup(property_info->name, (unsigned int )property_info->name_length);
    property_info->name = (char const   *)tmp;
  }
  return;
}
}
static void zend_destroy_property_info(zend_property_info *property_info ) 
{ 

  {
  while (1) {
    if ((unsigned int )property_info->name >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )property_info->name < (unsigned int )compiler_globals.interned_strings_end) {

      } else {
        _efree((void *)((char *)property_info->name));
      }
    } else {
      _efree((void *)((char *)property_info->name));
    }
    break;
  }
  if (property_info->doc_comment) {
    _efree((void *)((char *)property_info->doc_comment));
  } else {

  }
  return;
}
}
static void zend_destroy_property_info_internal(zend_property_info *property_info ) 
{ 

  {
  while (1) {
    if ((unsigned int )((char *)property_info->name) >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((char *)property_info->name) < (unsigned int )compiler_globals.interned_strings_end) {

      } else {
        free((void *)((char *)property_info->name));
      }
    } else {
      free((void *)((char *)property_info->name));
    }
    break;
  }
  return;
}
}
static void build_runtime_defined_function_key(zval *result , char const   *name , int name_length ) 
{ char char_pos_buf[32] ;
  uint char_pos_len ;
  char const   *filename ;
  int tmp ;
  size_t tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;

  {
  tmp = sprintf((char */* __restrict  */)(char_pos_buf), (char const   */* __restrict  */)"%p", language_scanner_globals.yy_text);
  char_pos_len = (unsigned int )tmp;
  if ((compiler_globals.active_op_array)->filename) {
    filename = (compiler_globals.active_op_array)->filename;
  } else {
    filename = "-";
  }
  tmp___0 = strlen(filename);
  result->value.str.len = (int )(((size_t )(1 + name_length) + tmp___0) + char_pos_len);
  tmp___1 = _safe_emalloc((unsigned int )result->value.str.len, 1U, 1U);
  result->value.str.val = (char *)tmp___1;
  *(result->value.str.val + 0) = (char )'\000';
  sprintf((char */* __restrict  */)(result->value.str.val + 1), (char const   */* __restrict  */)"%s%s%s", name, filename, char_pos_buf);
  result->type = (unsigned char)6;
  zval_set_refcount_p(result, 1U);
  return;
}
}
static void init_compiler_declarables(void) 
{ 

  {
  compiler_globals.declarables.ticks.type = (unsigned char)1;
  compiler_globals.declarables.ticks.value.lval = 0L;
  return;
}
}
void zend_init_compiler_context(void) 
{ 

  {
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    compiler_globals.context.opcodes_size = 8192U;
  } else {
    compiler_globals.context.opcodes_size = 64U;
  }
  compiler_globals.context.vars_size = 0;
  compiler_globals.context.literals_size = 0;
  compiler_globals.context.current_brk_cont = -1;
  compiler_globals.context.backpatch_count = 0;
  compiler_globals.context.labels = (HashTable *)((void *)0);
  return;
}
}
void zend_init_compiler_data_structures(void) 
{ 

  {
  zend_stack_init(& compiler_globals.bp_stack);
  zend_stack_init(& compiler_globals.function_call_stack);
  zend_stack_init(& compiler_globals.switch_cond_stack);
  zend_stack_init(& compiler_globals.foreach_copy_stack);
  zend_stack_init(& compiler_globals.object_stack);
  zend_stack_init(& compiler_globals.declare_stack);
  compiler_globals.active_class_entry = (zend_class_entry *)((void *)0);
  zend_llist_init(& compiler_globals.list_llist, sizeof(list_llist_element ), (void (*)(void * ))((void *)0), (unsigned char)0);
  zend_llist_init(& compiler_globals.dimension_llist, sizeof(int ), (void (*)(void * ))((void *)0), (unsigned char)0);
  zend_stack_init(& compiler_globals.list_stack);
  compiler_globals.in_compilation = (unsigned char)0;
  compiler_globals.start_lineno = 0U;
  compiler_globals.current_namespace = (zval *)((void *)0);
  compiler_globals.in_namespace = (unsigned char)0;
  compiler_globals.has_bracketed_namespaces = (unsigned char)0;
  compiler_globals.current_import = (HashTable *)((void *)0);
  init_compiler_declarables();
  zend_stack_init(& compiler_globals.context_stack);
  compiler_globals.encoding_declared = (unsigned char)0;
  return;
}
}
void __attribute__((__visibility__("default")))  file_handle_dtor(zend_file_handle *fh ) 
{ 

  {
  zend_file_handle_dtor(fh);
  return;
}
}
void init_compiler(void) 
{ 

  {
  compiler_globals.active_op_array = (zend_op_array *)((void *)0);
  zend_init_compiler_data_structures();
  zend_init_rsrc_list();
  _zend_hash_init(& compiler_globals.filenames_table, 5U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void *pDest ))(& free_estring), (unsigned char)0);
  zend_llist_init(& compiler_globals.open_files, sizeof(zend_file_handle ), (void (*)(void * ))(& file_handle_dtor), (unsigned char)0);
  compiler_globals.unclean_shutdown = (unsigned char)0;
  return;
}
}
void shutdown_compiler(void) 
{ 

  {
  zend_stack_destroy(& compiler_globals.bp_stack);
  zend_stack_destroy(& compiler_globals.function_call_stack);
  zend_stack_destroy(& compiler_globals.switch_cond_stack);
  zend_stack_destroy(& compiler_globals.foreach_copy_stack);
  zend_stack_destroy(& compiler_globals.object_stack);
  zend_stack_destroy(& compiler_globals.declare_stack);
  zend_stack_destroy(& compiler_globals.list_stack);
  zend_hash_destroy(& compiler_globals.filenames_table);
  zend_llist_destroy(& compiler_globals.open_files);
  zend_stack_destroy(& compiler_globals.context_stack);
  return;
}
}
char __attribute__((__visibility__("default")))  *zend_set_compiled_filename(char const   *new_compiled_filename ) 
{ char **pp ;
  char *p ;
  int length ;
  size_t tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;

  {
  tmp = strlen(new_compiled_filename);
  length = (int )tmp;
  tmp___0 = zend_hash_find((HashTable const   *)(& compiler_globals.filenames_table), new_compiled_filename, (unsigned int )(length + 1), (void **)(& pp));
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )0) {
    compiler_globals.compiled_filename = *pp;
    return ((char __attribute__((__visibility__("default")))  *)*pp);
  } else {

  }
  tmp___1 = _estrndup(new_compiled_filename, (unsigned int )length);
  p = (char *)tmp___1;
  _zend_hash_add_or_update(& compiler_globals.filenames_table, new_compiled_filename, (unsigned int )(length + 1), (void *)(& p), sizeof(char *), (void **)(& pp), 1);
  compiler_globals.compiled_filename = p;
  return ((char __attribute__((__visibility__("default")))  *)p);
}
}
void __attribute__((__visibility__("default")))  zend_restore_compiled_filename(char *original_compiled_filename ) 
{ 

  {
  compiler_globals.compiled_filename = original_compiled_filename;
  return;
}
}
char __attribute__((__visibility__("default")))  *zend_get_compiled_filename(void) 
{ 

  {
  return ((char __attribute__((__visibility__("default")))  *)compiler_globals.compiled_filename);
}
}
int __attribute__((__visibility__("default")))  zend_get_compiled_lineno(void) 
{ 

  {
  return ((int __attribute__((__visibility__("default")))  )compiler_globals.zend_lineno);
}
}
zend_bool __attribute__((__visibility__("default")))  zend_is_compiling(void) 
{ 

  {
  return ((unsigned char __attribute__((__visibility__("default")))  )compiler_globals.in_compilation);
}
}
static zend_uint get_temporary_variable(zend_op_array *op_array ) 
{ zend_uint tmp ;

  {
  tmp = op_array->T;
  (op_array->T) ++;
  return (tmp * (((sizeof(temp_variable ) + 4U) - 1U) & 4294967292U));
}
}
static int lookup_cv(zend_op_array *op_array , char *name , int name_len , ulong hash ) 
{ int i ;
  ulong hash_value ;
  ulong tmp ;
  ulong tmp___0 ;
  int tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  char const __attribute__((__visibility__("default")))  *tmp___3 ;

  {
  i = 0;
  if (hash) {
    tmp___0 = hash;
  } else {
    tmp = zend_inline_hash_func((char const   *)name, (unsigned int )(name_len + 1));
    tmp___0 = tmp;
  }
  hash_value = tmp___0;
  while (i < op_array->last_var) {
    if ((unsigned int )(op_array->vars + i)->name == (unsigned int )name) {
      goto _L;
    } else {
      if ((op_array->vars + i)->hash_value == hash_value) {
        if ((op_array->vars + i)->name_len == name_len) {
          tmp___1 = memcmp((void const   *)(op_array->vars + i)->name, (void const   *)name, (unsigned int )name_len);
          if (tmp___1 == 0) {
            _L: /* CIL Label */ 
            while (1) {
              if ((unsigned int )name >= (unsigned int )compiler_globals.interned_strings_start) {
                if ((unsigned int )name < (unsigned int )compiler_globals.interned_strings_end) {

                } else {
                  _efree((void *)name);
                }
              } else {
                _efree((void *)name);
              }
              break;
            }
            return (i);
          } else {

          }
        } else {

        }
      } else {

      }
    }
    i ++;
  }
  i = op_array->last_var;
  (op_array->last_var) ++;
  if (op_array->last_var > compiler_globals.context.vars_size) {
    compiler_globals.context.vars_size += 16;
    tmp___2 = _erealloc((void *)op_array->vars, (unsigned int )compiler_globals.context.vars_size * sizeof(zend_compiled_variable ), 0);
    op_array->vars = (zend_compiled_variable *)tmp___2;
  } else {

  }
  tmp___3 = (*zend_new_interned_string)((char const   *)name, name_len + 1, 1);
  (op_array->vars + i)->name = (char const   *)tmp___3;
  (op_array->vars + i)->name_len = name_len;
  (op_array->vars + i)->hash_value = hash_value;
  return (i);
}
}
void zend_del_literal(zend_op_array *op_array , int n ) 
{ 

  {
  _zval_dtor(& (op_array->literals + n)->constant);
  if (n + 1 == op_array->last_literal) {
    (op_array->last_literal) --;
  } else {
    (op_array->literals + n)->constant.type = (unsigned char)0;
  }
  return;
}
}
__inline static void zend_insert_literal(zend_op_array *op_array , zval const   *zv , int literal_position ) 
{ zval *z ;
  char const __attribute__((__visibility__("default")))  *tmp ;

  {
  if ((int const   )zv->type == 6) {
    z = (zval *)zv;
    tmp = (*zend_new_interned_string)((char const   *)zv->value.str.val, (int )(zv->value.str.len + 1), 1);
    z->value.str.val = (char *)tmp;
  } else {
    if ((int const   )zv->type == 8) {
      z = (zval *)zv;
      tmp = (*zend_new_interned_string)((char const   *)zv->value.str.val, (int )(zv->value.str.len + 1), 1);
      z->value.str.val = (char *)tmp;
    } else {

    }
  }
  (op_array->literals + literal_position)->constant = (struct _zval_struct )*zv;
  zval_set_refcount_p(& (op_array->literals + literal_position)->constant, 2U);
  zval_set_isref_p(& (op_array->literals + literal_position)->constant);
  (op_array->literals + literal_position)->hash_value = 0UL;
  (op_array->literals + literal_position)->cache_slot = 4294967295U;
  return;
}
}
int zend_add_literal(zend_op_array *op_array , zval const   *zv ) 
{ int i ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  i = op_array->last_literal;
  (op_array->last_literal) ++;
  if (i >= compiler_globals.context.literals_size) {
    while (i >= compiler_globals.context.literals_size) {
      compiler_globals.context.literals_size += 16;
    }
    tmp = _erealloc((void *)op_array->literals, (unsigned int )compiler_globals.context.literals_size * sizeof(zend_literal ), 0);
    op_array->literals = (zend_literal *)tmp;
  } else {

  }
  zend_insert_literal(op_array, zv, i);
  return (i);
}
}
int zend_append_individual_literal(zend_op_array *op_array , zval const   *zv ) 
{ int i ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  i = op_array->last_literal;
  (op_array->last_literal) ++;
  tmp = _erealloc((void *)op_array->literals, (unsigned int )(i + 1) * sizeof(zend_literal ), 0);
  op_array->literals = (zend_literal *)tmp;
  zend_insert_literal(op_array, zv, i);
  return (i);
}
}
int zend_add_func_name_literal(zend_op_array *op_array , zval const   *zv ) 
{ int ret ;
  char *lc_name ;
  zval c ;
  int lc_literal ;
  char __attribute__((__visibility__("default")))  *tmp ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  ulong __attribute__((__visibility__("default")))  tmp___1 ;

  {
  if (op_array->last_literal > 0) {
    if ((unsigned int )(& (op_array->literals + (op_array->last_literal - 1))->constant) == (unsigned int )zv) {
      if ((op_array->literals + (op_array->last_literal - 1))->cache_slot == 4294967295U) {
        ret = op_array->last_literal - 1;
      } else {
        ret = zend_add_literal(op_array, zv);
      }
    } else {
      ret = zend_add_literal(op_array, zv);
    }
  } else {
    ret = zend_add_literal(op_array, zv);
  }
  tmp = zend_str_tolower_dup((char const   *)zv->value.str.val, (unsigned int )zv->value.str.len);
  lc_name = (char *)tmp;
  while (1) {
    __s = (char const   *)lc_name;
    __l = (int )zv->value.str.len;
    __z = & c;
    __z->value.str.len = __l;
    __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
    __z->type = (unsigned char)6;
    break;
  }
  lc_literal = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& c));
  while (1) {
    if ((unsigned int )((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val - sizeof(Bucket )))->h;
      } else {
        tmp___1 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = (unsigned long )tmp___1;
      }
    } else {
      tmp___1 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.len + 1));
      ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = (unsigned long )tmp___1;
    }
    break;
  }
  return (ret);
}
}
int zend_add_ns_func_name_literal(zend_op_array *op_array , zval const   *zv ) 
{ int ret ;
  char *lc_name ;
  char const   *ns_separator ;
  int lc_len ;
  zval c ;
  int lc_literal ;
  char __attribute__((__visibility__("default")))  *tmp ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  ulong __attribute__((__visibility__("default")))  tmp___1 ;
  void const   *tmp___2 ;
  char __attribute__((__visibility__("default")))  *tmp___3 ;
  char const   *__s___0 ;
  int __l___0 ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  ulong __attribute__((__visibility__("default")))  tmp___5 ;

  {
  if (op_array->last_literal > 0) {
    if ((unsigned int )(& (op_array->literals + (op_array->last_literal - 1))->constant) == (unsigned int )zv) {
      if ((op_array->literals + (op_array->last_literal - 1))->cache_slot == 4294967295U) {
        ret = op_array->last_literal - 1;
      } else {
        ret = zend_add_literal(op_array, zv);
      }
    } else {
      ret = zend_add_literal(op_array, zv);
    }
  } else {
    ret = zend_add_literal(op_array, zv);
  }
  tmp = zend_str_tolower_dup((char const   *)zv->value.str.val, (unsigned int )zv->value.str.len);
  lc_name = (char *)tmp;
  while (1) {
    __s = (char const   *)lc_name;
    __l = (int )zv->value.str.len;
    __z = & c;
    __z->value.str.len = __l;
    __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
    __z->type = (unsigned char)6;
    break;
  }
  lc_literal = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& c));
  while (1) {
    if ((unsigned int )((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val - sizeof(Bucket )))->h;
      } else {
        tmp___1 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = (unsigned long )tmp___1;
      }
    } else {
      tmp___1 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.len + 1));
      ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = (unsigned long )tmp___1;
    }
    break;
  }
  tmp___2 = zend_memrchr((void const   *)zv->value.str.val, '\\', (unsigned int )zv->value.str.len);
  ns_separator = (char const   *)tmp___2 + 1;
  lc_len = (int )(zv->value.str.len - (int const   )(ns_separator - (char const   *)zv->value.str.val));
  tmp___3 = zend_str_tolower_dup(ns_separator, (unsigned int )lc_len);
  lc_name = (char *)tmp___3;
  while (1) {
    __s___0 = (char const   *)lc_name;
    __l___0 = lc_len;
    __z___0 = & c;
    __z___0->value.str.len = __l___0;
    __z___0->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s___0));
    __z___0->type = (unsigned char)6;
    break;
  }
  lc_literal = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& c));
  while (1) {
    if ((unsigned int )((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val - sizeof(Bucket )))->h;
      } else {
        tmp___5 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = (unsigned long )tmp___5;
      }
    } else {
      tmp___5 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.len + 1));
      ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = (unsigned long )tmp___5;
    }
    break;
  }
  return (ret);
}
}
int zend_add_class_name_literal(zend_op_array *op_array , zval const   *zv ) 
{ int ret ;
  char *lc_name ;
  int lc_len ;
  zval c ;
  int lc_literal ;
  char __attribute__((__visibility__("default")))  *tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  ulong __attribute__((__visibility__("default")))  tmp___2 ;
  int tmp___3 ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;

  {
  if (op_array->last_literal > 0) {
    if ((unsigned int )(& (op_array->literals + (op_array->last_literal - 1))->constant) == (unsigned int )zv) {
      if ((op_array->literals + (op_array->last_literal - 1))->cache_slot == 4294967295U) {
        ret = op_array->last_literal - 1;
      } else {
        ret = zend_add_literal(op_array, zv);
      }
    } else {
      ret = zend_add_literal(op_array, zv);
    }
  } else {
    ret = zend_add_literal(op_array, zv);
  }
  if ((int )*(zv->value.str.val + 0) == 92) {
    lc_len = (int )(zv->value.str.len - 1);
    tmp = zend_str_tolower_dup((char const   *)(zv->value.str.val + 1), (unsigned int )lc_len);
    lc_name = (char *)tmp;
  } else {
    lc_len = (int )zv->value.str.len;
    tmp___0 = zend_str_tolower_dup((char const   *)zv->value.str.val, (unsigned int )lc_len);
    lc_name = (char *)tmp___0;
  }
  while (1) {
    __s = (char const   *)lc_name;
    __l = lc_len;
    __z = & c;
    __z->value.str.len = __l;
    __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
    __z->type = (unsigned char)6;
    break;
  }
  lc_literal = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& c));
  while (1) {
    if ((unsigned int )((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val - sizeof(Bucket )))->h;
      } else {
        tmp___2 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = (unsigned long )tmp___2;
      }
    } else {
      tmp___2 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + lc_literal)->constant.value.str.len + 1));
      ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + lc_literal)->constant))->hash_value = (unsigned long )tmp___2;
    }
    break;
  }
  while (1) {
    tmp___3 = (compiler_globals.active_op_array)->last_cache_slot;
    ((compiler_globals.active_op_array)->last_cache_slot) ++;
    ((compiler_globals.active_op_array)->literals + ret)->cache_slot = (unsigned int )tmp___3;
    if ((compiler_globals.active_op_array)->fn_flags & 16U) {
      if ((compiler_globals.active_op_array)->run_time_cache) {
        tmp___4 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
        (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___4;
        *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
      } else {

      }
    } else {

    }
    break;
  }
  return (ret);
}
}
int zend_add_const_name_literal(zend_op_array *op_array , zval const   *zv , int unqualified ) 
{ int ret ;
  int tmp_literal ;
  char *name ;
  char *tmp_name ;
  char const   *ns_separator ;
  int name_len ;
  int ns_len ;
  zval c ;
  void const   *tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  ulong __attribute__((__visibility__("default")))  tmp___2 ;
  char __attribute__((__visibility__("default")))  *tmp___3 ;
  char const   *__s___0 ;
  int __l___0 ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  ulong __attribute__((__visibility__("default")))  tmp___5 ;
  char __attribute__((__visibility__("default")))  *tmp___6 ;
  char const   *__s___1 ;
  int __l___1 ;
  zval *__z___1 ;
  char __attribute__((__visibility__("default")))  *tmp___7 ;
  ulong __attribute__((__visibility__("default")))  tmp___8 ;
  char __attribute__((__visibility__("default")))  *tmp___9 ;
  char const   *__s___2 ;
  int __l___2 ;
  zval *__z___2 ;
  char __attribute__((__visibility__("default")))  *tmp___10 ;
  ulong __attribute__((__visibility__("default")))  tmp___11 ;

  {
  if (op_array->last_literal > 0) {
    if ((unsigned int )(& (op_array->literals + (op_array->last_literal - 1))->constant) == (unsigned int )zv) {
      if ((op_array->literals + (op_array->last_literal - 1))->cache_slot == 4294967295U) {
        ret = op_array->last_literal - 1;
      } else {
        ret = zend_add_literal(op_array, zv);
      }
    } else {
      ret = zend_add_literal(op_array, zv);
    }
  } else {
    ret = zend_add_literal(op_array, zv);
  }
  if ((int )*(zv->value.str.val + 0) == 92) {
    name_len = (int )(zv->value.str.len - 1);
    name = (char *)(zv->value.str.val + 1);
  } else {
    name_len = (int )zv->value.str.len;
    name = (char *)zv->value.str.val;
  }
  tmp = zend_memrchr((void const   *)name, '\\', (unsigned int )name_len);
  ns_separator = (char const   *)tmp;
  if (ns_separator) {
    ns_len = ns_separator - (char const   *)name;
  } else {
    ns_len = 0;
  }
  if (ns_len) {
    tmp___0 = _estrndup((char const   *)name, (unsigned int )name_len);
    tmp_name = (char *)tmp___0;
    zend_str_tolower(tmp_name, (unsigned int )ns_len);
    while (1) {
      __s = (char const   *)tmp_name;
      __l = name_len;
      __z = & c;
      __z->value.str.len = __l;
      __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
      __z->type = (unsigned char)6;
      break;
    }
    tmp_literal = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& c));
    while (1) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val - sizeof(Bucket )))->h;
        } else {
          tmp___2 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = (unsigned long )tmp___2;
        }
      } else {
        tmp___2 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = (unsigned long )tmp___2;
      }
      break;
    }
    tmp___3 = zend_str_tolower_dup((char const   *)name, (unsigned int )name_len);
    tmp_name = (char *)tmp___3;
    while (1) {
      __s___0 = (char const   *)tmp_name;
      __l___0 = name_len;
      __z___0 = & c;
      __z___0->value.str.len = __l___0;
      __z___0->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s___0));
      __z___0->type = (unsigned char)6;
      break;
    }
    tmp_literal = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& c));
    while (1) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val - sizeof(Bucket )))->h;
        } else {
          tmp___5 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = (unsigned long )tmp___5;
        }
      } else {
        tmp___5 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = (unsigned long )tmp___5;
      }
      break;
    }
  } else {

  }
  if (ns_len) {
    if (! unqualified) {
      return (ret);
    } else {

    }
    ns_len ++;
    name += ns_len;
    name_len -= ns_len;
  } else {

  }
  tmp___6 = _estrndup((char const   *)name, (unsigned int )name_len);
  tmp_name = (char *)tmp___6;
  while (1) {
    __s___1 = (char const   *)tmp_name;
    __l___1 = name_len;
    __z___1 = & c;
    __z___1->value.str.len = __l___1;
    __z___1->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s___1));
    __z___1->type = (unsigned char)6;
    break;
  }
  tmp_literal = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& c));
  while (1) {
    if ((unsigned int )((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val - sizeof(Bucket )))->h;
      } else {
        tmp___8 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = (unsigned long )tmp___8;
      }
    } else {
      tmp___8 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.len + 1));
      ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = (unsigned long )tmp___8;
    }
    break;
  }
  tmp___9 = zend_str_tolower_dup((char const   *)name, (unsigned int )name_len);
  tmp_name = (char *)tmp___9;
  while (1) {
    __s___2 = (char const   *)tmp_name;
    __l___2 = name_len;
    __z___2 = & c;
    __z___2->value.str.len = __l___2;
    __z___2->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s___2));
    __z___2->type = (unsigned char)6;
    break;
  }
  tmp_literal = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& c));
  while (1) {
    if ((unsigned int )((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val - sizeof(Bucket )))->h;
      } else {
        tmp___11 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = (unsigned long )tmp___11;
      }
    } else {
      tmp___11 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + tmp_literal)->constant.value.str.len + 1));
      ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + tmp_literal)->constant))->hash_value = (unsigned long )tmp___11;
    }
    break;
  }
  return (ret);
}
}
__inline static zend_bool zend_is_function_or_method_call(znode const   *variable ) 
{ zend_uint type ;
  int tmp ;

  {
  type = (zend_uint )variable->EA;
  if (type & (unsigned int )(1 << 1)) {
    tmp = 1;
  } else {
    if (type == (zend_uint )(1 << 3)) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  }
  return ((unsigned char )tmp);
}
}
void zend_do_binary_op(zend_uchar op , znode *result , znode const   *op1 , znode const   *op2 ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = op;
  opline->result_type = (unsigned char )(1 << 1);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )op1->op_type;
    if (op1->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )op1->u.op;
    }
    break;
  }
  while (1) {
    opline->op2_type = (unsigned char )op2->op_type;
    if (op2->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & op2->u.constant);
      opline->op2.constant = (unsigned int )tmp___1;
    } else {
      opline->op2 = (union _znode_op )op2->u.op;
    }
    break;
  }
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_unary_op(zend_uchar op , znode *result , znode const   *op1 ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = op;
  opline->result_type = (unsigned char )(1 << 1);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )op1->op_type;
    if (op1->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )op1->u.op;
    }
    break;
  }
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
static void zend_do_op_data(zend_op *data_op , znode const   *value ) 
{ int tmp ;

  {
  data_op->opcode = (unsigned char)137;
  while (1) {
    data_op->op1_type = (unsigned char )value->op_type;
    if (value->op_type == 1) {
      tmp = zend_add_literal(compiler_globals.active_op_array, & value->u.constant);
      data_op->op1.constant = (unsigned int )tmp;
    } else {
      data_op->op1 = (union _znode_op )value->u.op;
    }
    break;
  }
  data_op->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_binary_assign_op(zend_uchar op , znode *result , znode const   *op1 , znode const   *op2 ) 
{ int last_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  zend_op *last_op ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  last_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  if (last_op_number > 0) {
    last_op = (compiler_globals.active_op_array)->opcodes + (last_op_number - 1);
    switch ((int )last_op->opcode) {
    case 88: 
    last_op->opcode = op;
    last_op->extended_value = 136UL;
    zend_do_op_data(opline, op2);
    opline->result_type = (unsigned char )(1 << 3);
    while (1) {
      result->op_type = (int )last_op->result_type;
      if (result->op_type == 1) {
        result->u.constant = ((compiler_globals.active_op_array)->literals + last_op->result.constant)->constant;
      } else {
        result->u.op = last_op->result;
        result->EA = 0U;
      }
      break;
    }
    return;
    case 87: 
    last_op->opcode = op;
    last_op->extended_value = 147UL;
    zend_do_op_data(opline, op2);
    opline->op2.var = get_temporary_variable(compiler_globals.active_op_array);
    opline->op2_type = (unsigned char )(1 << 2);
    opline->result_type = (unsigned char )(1 << 3);
    while (1) {
      result->op_type = (int )last_op->result_type;
      if (result->op_type == 1) {
        result->u.constant = ((compiler_globals.active_op_array)->literals + last_op->result.constant)->constant;
      } else {
        result->u.op = last_op->result;
        result->EA = 0U;
      }
      break;
    }
    return;
    default: ;
    break;
    }
  } else {

  }
  opline->opcode = op;
  while (1) {
    opline->op1_type = (unsigned char )op1->op_type;
    if (op1->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )op1->u.op;
    }
    break;
  }
  while (1) {
    opline->op2_type = (unsigned char )op2->op_type;
    if (op2->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, & op2->u.constant);
      opline->op2.constant = (unsigned int )tmp___2;
    } else {
      opline->op2 = (union _znode_op )op2->u.op;
    }
    break;
  }
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void fetch_simple_variable_ex(znode *result , znode *varname , int bp , zend_uchar op ) 
{ zend_op opline ;
  zend_op *opline_ptr ;
  zend_llist *fetch_list_ptr ;
  ulong hash ;
  int tmp ;
  zend_bool __attribute__((__visibility__("default")))  tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  ulong __attribute__((__visibility__("default")))  tmp___3 ;
  zend_bool __attribute__((__visibility__("default")))  tmp___4 ;

  {
  if (varname->op_type == 1) {
    hash = (ulong )0;
    if ((int )varname->u.constant.type != 6) {
      if ((int )varname->u.constant.type != 6) {
        _convert_to_string(& varname->u.constant);
      } else {

      }
    } else {
      if ((unsigned int )varname->u.constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )varname->u.constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          hash = ((Bucket *)(varname->u.constant.value.str.val - sizeof(Bucket )))->h;
        } else {

        }
      } else {

      }
    }
    tmp___0 = zend_is_auto_global_quick((char const   *)varname->u.constant.value.str.val, (unsigned int )varname->u.constant.value.str.len, hash);
    if (tmp___0) {

    } else {
      if ((unsigned int )varname->u.constant.value.str.len == sizeof("this") - 1U) {
        tmp___1 = memcmp((void const   *)varname->u.constant.value.str.val, (void const   *)"this", sizeof("this"));
        if (tmp___1) {
          goto _L___0;
        } else {

        }
      } else {
        _L___0: /* CIL Label */ 
        if ((compiler_globals.active_op_array)->last == 0U) {
          goto _L;
        } else {
          if ((int )((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->opcode != 57) {
            _L: /* CIL Label */ 
            result->op_type = 1 << 4;
            tmp = lookup_cv(compiler_globals.active_op_array, varname->u.constant.value.str.val, varname->u.constant.value.str.len, hash);
            result->u.op.var = (unsigned int )tmp;
            varname->u.constant.value.str.val = (char *)((compiler_globals.active_op_array)->vars + result->u.op.var)->name;
            result->EA = 0U;
            return;
          } else {

          }
        }
      }
    }
  } else {

  }
  if (bp) {
    opline_ptr = & opline;
    init_op(opline_ptr);
  } else {
    opline_ptr = get_next_op(compiler_globals.active_op_array);
  }
  opline_ptr->opcode = op;
  opline_ptr->result_type = (unsigned char )(1 << 2);
  opline_ptr->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline_ptr->op1_type = (unsigned char )varname->op_type;
    if (varname->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& varname->u.constant));
      opline_ptr->op1.constant = (unsigned int )tmp___2;
    } else {
      opline_ptr->op1 = varname->u.op;
    }
    break;
  }
  while (1) {
    result->op_type = (int )opline_ptr->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline_ptr->result.constant)->constant;
    } else {
      result->u.op = opline_ptr->result;
      result->EA = 0U;
    }
    break;
  }
  opline_ptr->op2_type = (unsigned char )(1 << 3);
  opline_ptr->extended_value = 268435456UL;
  if (varname->op_type == 1) {
    while (1) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.val - sizeof(Bucket )))->h;
        } else {
          tmp___3 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant))->hash_value = (unsigned long )tmp___3;
        }
      } else {
        tmp___3 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant))->hash_value = (unsigned long )tmp___3;
      }
      break;
    }
    tmp___4 = zend_is_auto_global_quick((char const   *)varname->u.constant.value.str.val, (unsigned int )varname->u.constant.value.str.len, ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant))->hash_value);
    if (tmp___4) {
      opline_ptr->extended_value = 0UL;
    } else {

    }
  } else {

  }
  if (bp) {
    zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& fetch_list_ptr));
    zend_llist_add_element(fetch_list_ptr, (void *)opline_ptr);
  } else {

  }
  return;
}
}
void fetch_simple_variable(znode *result , znode *varname , int bp ) 
{ 

  {
  fetch_simple_variable_ex(result, varname, bp, (unsigned char)83);
  return;
}
}
void zend_do_fetch_static_member(znode *result , znode *class_name ) 
{ znode class_node ;
  zend_llist *fetch_list_ptr ;
  zend_llist_element *le ;
  zend_op *opline_ptr ;
  zend_op opline ;
  int tmp ;
  zval _c ;
  char const   *__s ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  int tmp___2 ;
  ulong __attribute__((__visibility__("default")))  tmp___3 ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  zval _c___0 ;
  char const   *__s___0 ;
  char __attribute__((__visibility__("default")))  *tmp___7 ;
  int __l___0 ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___8 ;
  int tmp___9 ;
  ulong __attribute__((__visibility__("default")))  tmp___10 ;
  void __attribute__((__visibility__("default")))  *tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  void __attribute__((__visibility__("default")))  *tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;

  {
  if (class_name->op_type == 1) {
    tmp = zend_get_class_fetch_type((char const   *)class_name->u.constant.value.str.val, (unsigned int )class_name->u.constant.value.str.len);
    if (0 == tmp) {
      zend_resolve_class_name(class_name, 4UL, 1);
      class_node = *class_name;
    } else {
      zend_do_fetch_class(& class_node, class_name);
    }
  } else {
    zend_do_fetch_class(& class_node, class_name);
  }
  zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& fetch_list_ptr));
  if (result->op_type == 1 << 4) {
    init_op(& opline);
    opline.opcode = (unsigned char)83;
    opline.result_type = (unsigned char )(1 << 2);
    opline.result.var = get_temporary_variable(compiler_globals.active_op_array);
    opline.op1_type = (unsigned char)1;
    while (1) {
      while (1) {
        tmp___0 = _estrdup(((compiler_globals.active_op_array)->vars + result->u.op.var)->name);
        __s = (char const   *)tmp___0;
        __l = ((compiler_globals.active_op_array)->vars + result->u.op.var)->name_len;
        __z = & _c;
        __z->value.str.len = __l;
        __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
        __z->type = (unsigned char)6;
        break;
      }
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c));
      opline.op1.constant = (unsigned int )tmp___2;
      break;
    }
    while (1) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val - sizeof(Bucket )))->h;
        } else {
          tmp___3 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant))->hash_value = (unsigned long )tmp___3;
        }
      } else {
        tmp___3 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant))->hash_value = (unsigned long )tmp___3;
      }
      break;
    }
    while (1) {
      ((compiler_globals.active_op_array)->literals + opline.op1.constant)->cache_slot = (unsigned int )(compiler_globals.active_op_array)->last_cache_slot;
      (compiler_globals.active_op_array)->last_cache_slot += 2;
      if ((compiler_globals.active_op_array)->fn_flags & 16U) {
        if ((compiler_globals.active_op_array)->run_time_cache) {
          tmp___4 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
          (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___4;
          *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
          *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 2)) = (void *)0;
        } else {

        }
      } else {

      }
      break;
    }
    if (class_node.op_type == 1) {
      opline.op2_type = (unsigned char)1;
      tmp___5 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& class_node.u.constant));
      opline.op2.constant = (unsigned int )tmp___5;
    } else {
      while (1) {
        opline.op2_type = (unsigned char )class_node.op_type;
        if (class_node.op_type == 1) {
          tmp___6 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& class_node.u.constant));
          opline.op2.constant = (unsigned int )tmp___6;
        } else {
          opline.op2 = class_node.u.op;
        }
        break;
      }
    }
    while (1) {
      result->op_type = (int )opline.result_type;
      if (result->op_type == 1) {
        result->u.constant = ((compiler_globals.active_op_array)->literals + opline.result.constant)->constant;
      } else {
        result->u.op = opline.result;
        result->EA = 0U;
      }
      break;
    }
    opline.extended_value |= 805306368UL;
    opline_ptr = & opline;
    zend_llist_add_element(fetch_list_ptr, (void *)(& opline));
  } else {
    le = fetch_list_ptr->head;
    opline_ptr = (zend_op *)(le->data);
    if ((int )opline_ptr->opcode != 83) {
      if ((int )opline_ptr->op1_type == 1 << 4) {
        init_op(& opline);
        opline.opcode = (unsigned char)83;
        opline.result_type = (unsigned char )(1 << 2);
        opline.result.var = get_temporary_variable(compiler_globals.active_op_array);
        opline.op1_type = (unsigned char)1;
        while (1) {
          while (1) {
            tmp___7 = _estrdup(((compiler_globals.active_op_array)->vars + opline_ptr->op1.var)->name);
            __s___0 = (char const   *)tmp___7;
            __l___0 = ((compiler_globals.active_op_array)->vars + opline_ptr->op1.var)->name_len;
            __z___0 = & _c___0;
            __z___0->value.str.len = __l___0;
            __z___0->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s___0));
            __z___0->type = (unsigned char)6;
            break;
          }
          tmp___9 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c___0));
          opline.op1.constant = (unsigned int )tmp___9;
          break;
        }
        while (1) {
          if ((unsigned int )((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
            if ((unsigned int )((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
              ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val - sizeof(Bucket )))->h;
            } else {
              tmp___10 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.len + 1));
              ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant))->hash_value = (unsigned long )tmp___10;
            }
          } else {
            tmp___10 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant.value.str.len + 1));
            ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op1.constant)->constant))->hash_value = (unsigned long )tmp___10;
          }
          break;
        }
        while (1) {
          ((compiler_globals.active_op_array)->literals + opline.op1.constant)->cache_slot = (unsigned int )(compiler_globals.active_op_array)->last_cache_slot;
          (compiler_globals.active_op_array)->last_cache_slot += 2;
          if ((compiler_globals.active_op_array)->fn_flags & 16U) {
            if ((compiler_globals.active_op_array)->run_time_cache) {
              tmp___11 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
              (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___11;
              *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
              *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 2)) = (void *)0;
            } else {

            }
          } else {

          }
          break;
        }
        if (class_node.op_type == 1) {
          opline.op2_type = (unsigned char)1;
          tmp___12 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& class_node.u.constant));
          opline.op2.constant = (unsigned int )tmp___12;
        } else {
          while (1) {
            opline.op2_type = (unsigned char )class_node.op_type;
            if (class_node.op_type == 1) {
              tmp___13 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& class_node.u.constant));
              opline.op2.constant = (unsigned int )tmp___13;
            } else {
              opline.op2 = class_node.u.op;
            }
            break;
          }
        }
        opline.extended_value |= 805306368UL;
        while (1) {
          opline_ptr->op1_type = opline.result_type;
          opline_ptr->op1 = opline.result;
          break;
        }
        zend_llist_prepend_element(fetch_list_ptr, (void *)(& opline));
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      if ((int )opline_ptr->op1_type == 1) {
        while (1) {
          ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->cache_slot = (unsigned int )(compiler_globals.active_op_array)->last_cache_slot;
          (compiler_globals.active_op_array)->last_cache_slot += 2;
          if ((compiler_globals.active_op_array)->fn_flags & 16U) {
            if ((compiler_globals.active_op_array)->run_time_cache) {
              tmp___14 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
              (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___14;
              *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
              *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 2)) = (void *)0;
            } else {

            }
          } else {

          }
          break;
        }
      } else {

      }
      if (class_node.op_type == 1) {
        opline_ptr->op2_type = (unsigned char)1;
        tmp___15 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& class_node.u.constant));
        opline_ptr->op2.constant = (unsigned int )tmp___15;
      } else {
        while (1) {
          opline_ptr->op2_type = (unsigned char )class_node.op_type;
          if (class_node.op_type == 1) {
            tmp___16 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& class_node.u.constant));
            opline_ptr->op2.constant = (unsigned int )tmp___16;
          } else {
            opline_ptr->op2 = class_node.u.op;
          }
          break;
        }
      }
      opline_ptr->extended_value |= 805306368UL;
    }
  }
  return;
}
}
void fetch_array_begin(znode *result , znode *varname , znode *first_dim ) 
{ 

  {
  fetch_simple_variable(result, varname, 1);
  fetch_array_dim(result, (znode const   *)result, (znode const   *)first_dim);
  return;
}
}
void fetch_array_dim(znode *result , znode const   *parent , znode const   *dim ) 
{ zend_op opline ;
  zend_llist *fetch_list_ptr ;
  int tmp ;
  zend_bool tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  ulong index___0 ;
  int numeric ;
  register char const   *tmp___3 ;
  char const   *end ;
  zval *__z ;
  ulong __attribute__((__visibility__("default")))  tmp___4 ;

  {
  zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& fetch_list_ptr));
  tmp___0 = zend_is_function_or_method_call(parent);
  if (tmp___0) {
    init_op(& opline);
    opline.opcode = (unsigned char)156;
    while (1) {
      opline.op1_type = (unsigned char )parent->op_type;
      if (parent->op_type == 1) {
        tmp = zend_add_literal(compiler_globals.active_op_array, & parent->u.constant);
        opline.op1.constant = (unsigned int )tmp;
      } else {
        opline.op1 = (union _znode_op )parent->u.op;
      }
      break;
    }
    opline.op2_type = (unsigned char )(1 << 3);
    opline.result_type = (unsigned char )(1 << 2);
    opline.result.var = opline.op1.var;
    zend_llist_add_element(fetch_list_ptr, (void *)(& opline));
  } else {

  }
  init_op(& opline);
  opline.opcode = (unsigned char)84;
  opline.result_type = (unsigned char )(1 << 2);
  opline.result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline.op1_type = (unsigned char )parent->op_type;
    if (parent->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & parent->u.constant);
      opline.op1.constant = (unsigned int )tmp___1;
    } else {
      opline.op1 = (union _znode_op )parent->u.op;
    }
    break;
  }
  while (1) {
    opline.op2_type = (unsigned char )dim->op_type;
    if (dim->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, & dim->u.constant);
      opline.op2.constant = (unsigned int )tmp___2;
    } else {
      opline.op2 = (union _znode_op )dim->u.op;
    }
    break;
  }
  if ((int )opline.op2_type == 1) {
    if ((int )((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.type == 6) {
      numeric = 0;
      while (1) {
        tmp___3 = (char const   *)((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val;
        if ((int const   )*tmp___3 == 45) {
          tmp___3 ++;
        } else {

        }
        if ((int const   )*tmp___3 >= 48) {
          if ((int const   )*tmp___3 <= 57) {
            end = (char const   *)(((((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val + ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.len) + 1) - 1);
            if ((int const   )*end != 0) {
              break;
            } else {
              if ((int const   )*tmp___3 == 48) {
                if (((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.len + 1 > 2) {
                  break;
                } else {
                  goto _L;
                }
              } else {
                _L: /* CIL Label */ 
                if (end - tmp___3 > 10) {
                  break;
                } else {
                  if (end - tmp___3 == 10) {
                    if ((int const   )*tmp___3 > 50) {
                      break;
                    } else {

                    }
                  } else {

                  }
                }
              }
            }
            index___0 = (unsigned long )((int const   )*tmp___3 - 48);
            while (1) {
              tmp___3 ++;
              if ((unsigned int )tmp___3 != (unsigned int )end) {
                if ((int const   )*tmp___3 >= 48) {
                  if ((int const   )*tmp___3 <= 57) {

                  } else {
                    break;
                  }
                } else {
                  break;
                }
              } else {
                break;
              }
              index___0 = index___0 * 10UL + (ulong )((int const   )*tmp___3 - 48);
            }
            if ((unsigned int )tmp___3 == (unsigned int )end) {
              if ((int )*(((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val) == 45) {
                if (index___0 - 1UL > 2147483647UL) {
                  break;
                } else {

                }
                index___0 = (unsigned long )(- ((long )index___0));
              } else {
                if (index___0 > 2147483647UL) {
                  break;
                } else {

                }
              }
              numeric = 1;
            } else {

            }
          } else {

          }
        } else {

        }
        break;
      }
      if (numeric) {
        _zval_dtor(& ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant);
        __z = & ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant;
        __z->value.lval = (long )index___0;
        __z->type = (unsigned char)1;
      } else {
        while (1) {
          if ((unsigned int )((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
            if ((unsigned int )((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
              ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val - sizeof(Bucket )))->h;
            } else {
              tmp___4 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.len + 1));
              ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant))->hash_value = (unsigned long )tmp___4;
            }
          } else {
            tmp___4 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.len + 1));
            ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant))->hash_value = (unsigned long )tmp___4;
          }
          break;
        }
      }
    } else {

    }
  } else {

  }
  while (1) {
    result->op_type = (int )opline.result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline.result.constant)->constant;
    } else {
      result->u.op = opline.result;
      result->EA = 0U;
    }
    break;
  }
  zend_llist_add_element(fetch_list_ptr, (void *)(& opline));
  return;
}
}
void fetch_string_offset(znode *result , znode const   *parent , znode const   *offset ) 
{ 

  {
  fetch_array_dim(result, parent, offset);
  return;
}
}
void zend_do_print(znode *result , znode const   *arg ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->result_type = (unsigned char )(1 << 1);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)41;
  while (1) {
    opline->op1_type = (unsigned char )arg->op_type;
    if (arg->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & arg->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )arg->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_echo(znode const   *arg ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)40;
  while (1) {
    opline->op1_type = (unsigned char )arg->op_type;
    if (arg->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & arg->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )arg->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_abstract_method(znode const   *function_name , znode *modifiers , znode const   *body ) 
{ char *method_type ;
  zend_op *opline ;
  zend_op *tmp ;

  {
  if ((compiler_globals.active_class_entry)->ce_flags & 128U) {
    modifiers->u.constant.value.lval |= 2L;
    method_type = (char *)"Interface";
  } else {
    method_type = (char *)"Abstract";
  }
  if (modifiers->u.constant.value.lval & 2L) {
    if (modifiers->u.constant.value.lval & 1024L) {
      zend_error(1 << 6L, "%s function %s::%s() cannot be declared private", method_type, (compiler_globals.active_class_entry)->name, function_name->u.constant.value.str.val);
    } else {

    }
    if (body->u.constant.value.lval == 2L) {
      tmp = get_next_op(compiler_globals.active_op_array);
      opline = tmp;
      opline->opcode = (unsigned char)142;
      opline->op1_type = (unsigned char )(1 << 3);
      opline->op2_type = (unsigned char )(1 << 3);
    } else {
      zend_error(1 << 6L, "%s function %s::%s() cannot contain body", method_type, (compiler_globals.active_class_entry)->name, function_name->u.constant.value.str.val);
    }
  } else {
    if (body->u.constant.value.lval == 2L) {
      zend_error(1 << 6L, "Non-abstract method %s::%s() must contain body", (compiler_globals.active_class_entry)->name, function_name->u.constant.value.str.val);
    } else {

    }
  }
  return;
}
}
static zend_bool opline_is_fetch_this(zend_op const   *opline ) 
{ int tmp ;

  {
  if ((int const   )opline->opcode == 83) {
    if ((int const   )opline->op1_type == 1) {
      if ((int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.type == 6) {
        if (((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value == 275574653UL) {
          if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len == sizeof("this") - 1U) {
            tmp = memcmp((void const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (void const   *)"this", sizeof("this"));
            if (tmp) {
              return ((unsigned char)0);
            } else {
              return ((unsigned char)1);
            }
          } else {
            return ((unsigned char)0);
          }
        } else {
          return ((unsigned char)0);
        }
      } else {
        return ((unsigned char)0);
      }
    } else {
      return ((unsigned char)0);
    }
  } else {
    return ((unsigned char)0);
  }
}
}
void zend_do_assign(znode *result , znode *variable , znode *value ) 
{ int last_op_number ;
  zend_op *opline ;
  zend_llist *fetch_list_ptr ;
  zval _c ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp ;
  int tmp___0 ;
  ulong __attribute__((__visibility__("default")))  tmp___1 ;
  int n ;
  zend_op *last_op ;
  int opline_no ;
  zend_uchar tmp___2 ;
  zend_uchar tmp___3 ;
  int opline_no___0 ;
  zend_uchar tmp___4 ;
  zend_uchar tmp___5 ;
  zend_bool tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  if (value->op_type == 1 << 4) {
    zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& fetch_list_ptr));
    if (fetch_list_ptr) {
      if (fetch_list_ptr->head) {
        opline = (zend_op *)((fetch_list_ptr->head)->data);
        if ((int )opline->opcode == 84) {
          if ((int )opline->op1_type == 1 << 4) {
            if (opline->op1.var == value->u.op.var) {
              opline = get_next_op(compiler_globals.active_op_array);
              opline->opcode = (unsigned char)80;
              opline->result_type = (unsigned char )(1 << 2);
              opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
              opline->op1_type = (unsigned char)1;
              while (1) {
                while (1) {
                  __s = ((compiler_globals.active_op_array)->vars + value->u.op.var)->name;
                  __l = ((compiler_globals.active_op_array)->vars + value->u.op.var)->name_len;
                  __z = & _c;
                  __z->value.str.len = __l;
                  tmp = _estrndup(__s, (unsigned int )__l);
                  __z->value.str.val = (char *)tmp;
                  __z->type = (unsigned char)6;
                  break;
                }
                tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c));
                opline->op1.constant = (unsigned int )tmp___0;
                break;
              }
              while (1) {
                if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
                  if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
                    ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val - sizeof(Bucket )))->h;
                  } else {
                    tmp___1 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
                    ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___1;
                  }
                } else {
                  tmp___1 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
                  ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___1;
                }
                break;
              }
              opline->op2_type = (unsigned char )(1 << 3);
              opline->extended_value = 268435456UL;
              while (1) {
                value->op_type = (int )opline->result_type;
                if (value->op_type == 1) {
                  value->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
                } else {
                  value->u.op = opline->result;
                  value->EA = 0U;
                }
                break;
              }
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  zend_do_end_variable_parse(variable, 1, 0);
  last_op_number = get_next_op_number(compiler_globals.active_op_array);
  opline = get_next_op(compiler_globals.active_op_array);
  if (variable->op_type == 1 << 4) {
    if (variable->u.op.var == (compiler_globals.active_op_array)->this_var) {
      zend_error(1 << 6L, "Cannot re-assign $this");
    } else {

    }
  } else {
    if (variable->op_type == 1 << 2) {
      n = 0;
      while (last_op_number - n > 0) {
        last_op = (compiler_globals.active_op_array)->opcodes + ((last_op_number - n) - 1);
        if ((int )last_op->result_type == 1 << 2) {
          if (last_op->result.var == variable->u.op.var) {
            if ((int )last_op->opcode == 85) {
              if (n > 0) {
                opline_no = (int )((unsigned int )(opline - (compiler_globals.active_op_array)->opcodes) / sizeof(*opline));
                *opline = *last_op;
                last_op->opcode = (unsigned char)0;
                memset((void *)(& last_op->result), 0, sizeof(last_op->result));
                memset((void *)(& last_op->op1), 0, sizeof(last_op->op1));
                memset((void *)(& last_op->op2), 0, sizeof(last_op->op2));
                tmp___3 = (unsigned char )(1 << 3);
                last_op->op2_type = tmp___3;
                tmp___2 = tmp___3;
                last_op->op1_type = tmp___2;
                last_op->result_type = tmp___2;
                opline = get_next_op(compiler_globals.active_op_array);
                last_op = (compiler_globals.active_op_array)->opcodes + opline_no;
              } else {

              }
              last_op->opcode = (unsigned char)136;
              zend_do_op_data(opline, (znode const   *)value);
              opline->result_type = (unsigned char )(1 << 3);
              while (1) {
                result->op_type = (int )last_op->result_type;
                if (result->op_type == 1) {
                  result->u.constant = ((compiler_globals.active_op_array)->literals + last_op->result.constant)->constant;
                } else {
                  result->u.op = last_op->result;
                  result->EA = 0U;
                }
                break;
              }
              return;
            } else {
              if ((int )last_op->opcode == 84) {
                if (n > 0) {
                  opline_no___0 = (int )((unsigned int )(opline - (compiler_globals.active_op_array)->opcodes) / sizeof(*opline));
                  *opline = *last_op;
                  last_op->opcode = (unsigned char)0;
                  memset((void *)(& last_op->result), 0, sizeof(last_op->result));
                  memset((void *)(& last_op->op1), 0, sizeof(last_op->op1));
                  memset((void *)(& last_op->op2), 0, sizeof(last_op->op2));
                  tmp___5 = (unsigned char )(1 << 3);
                  last_op->op2_type = tmp___5;
                  tmp___4 = tmp___5;
                  last_op->op1_type = tmp___4;
                  last_op->result_type = tmp___4;
                  opline = get_next_op(compiler_globals.active_op_array);
                  last_op = (compiler_globals.active_op_array)->opcodes + opline_no___0;
                } else {

                }
                last_op->opcode = (unsigned char)147;
                zend_do_op_data(opline, (znode const   *)value);
                opline->op2.var = get_temporary_variable(compiler_globals.active_op_array);
                opline->op2_type = (unsigned char )(1 << 2);
                opline->result_type = (unsigned char )(1 << 3);
                while (1) {
                  result->op_type = (int )last_op->result_type;
                  if (result->op_type == 1) {
                    result->u.constant = ((compiler_globals.active_op_array)->literals + last_op->result.constant)->constant;
                  } else {
                    result->u.op = last_op->result;
                    result->EA = 0U;
                  }
                  break;
                }
                return;
              } else {
                tmp___6 = opline_is_fetch_this((zend_op const   *)last_op);
                if (tmp___6) {
                  zend_error(1 << 6L, "Cannot re-assign $this");
                } else {
                  break;
                }
              }
            }
          } else {

          }
        } else {

        }
        n ++;
      }
    } else {

    }
  }
  opline->opcode = (unsigned char)38;
  while (1) {
    opline->op1_type = (unsigned char )variable->op_type;
    if (variable->op_type == 1) {
      tmp___7 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& variable->u.constant));
      opline->op1.constant = (unsigned int )tmp___7;
    } else {
      opline->op1 = variable->u.op;
    }
    break;
  }
  while (1) {
    opline->op2_type = (unsigned char )value->op_type;
    if (value->op_type == 1) {
      tmp___8 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& value->u.constant));
      opline->op2.constant = (unsigned int )tmp___8;
    } else {
      opline->op2 = value->u.op;
    }
    break;
  }
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_assign_ref(znode *result , znode const   *lvar , znode const   *rvar ) 
{ zend_op *opline ;
  int last_op_number ;
  int tmp ;
  zend_bool tmp___0 ;
  zend_bool tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  if (lvar->op_type == (int const   )(1 << 4)) {
    if (lvar->u.op.var == (zend_uint const   )(compiler_globals.active_op_array)->this_var) {
      zend_error(1 << 6L, "Cannot re-assign $this");
    } else {

    }
  } else {
    if (lvar->op_type == (int const   )(1 << 2)) {
      tmp = get_next_op_number(compiler_globals.active_op_array);
      last_op_number = tmp;
      if (last_op_number > 0) {
        opline = (compiler_globals.active_op_array)->opcodes + (last_op_number - 1);
        tmp___0 = opline_is_fetch_this((zend_op const   *)opline);
        if (tmp___0) {
          zend_error(1 << 6L, "Cannot re-assign $this");
        } else {

        }
      } else {

      }
    } else {

    }
  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)39;
  tmp___1 = zend_is_function_or_method_call(rvar);
  if (tmp___1) {
    opline->extended_value = 1UL;
  } else {
    if (rvar->EA & (unsigned int const   )(1 << 6)) {
      opline->extended_value = (unsigned long )(1 << 1);
    } else {
      opline->extended_value = 0UL;
    }
  }
  if (result) {
    opline->result_type = (unsigned char )(1 << 2);
    opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
    while (1) {
      result->op_type = (int )opline->result_type;
      if (result->op_type == 1) {
        result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
      } else {
        result->u.op = opline->result;
        result->EA = 0U;
      }
      break;
    }
  } else {
    opline->result_type = (unsigned char )((1 << 3) | (1 << 5));
  }
  while (1) {
    opline->op1_type = (unsigned char )lvar->op_type;
    if (lvar->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, & lvar->u.constant);
      opline->op1.constant = (unsigned int )tmp___2;
    } else {
      opline->op1 = (union _znode_op )lvar->u.op;
    }
    break;
  }
  while (1) {
    opline->op2_type = (unsigned char )rvar->op_type;
    if (rvar->op_type == 1) {
      tmp___3 = zend_add_literal(compiler_globals.active_op_array, & rvar->u.constant);
      opline->op2.constant = (unsigned int )tmp___3;
    } else {
      opline->op2 = (union _znode_op )rvar->u.op;
    }
    break;
  }
  return;
}
}
__inline static void do_begin_loop(void) 
{ zend_brk_cont_element *brk_cont_element ;
  int parent ;

  {
  parent = compiler_globals.context.current_brk_cont;
  compiler_globals.context.current_brk_cont = (compiler_globals.active_op_array)->last_brk_cont;
  brk_cont_element = get_next_brk_cont_element(compiler_globals.active_op_array);
  brk_cont_element->start = get_next_op_number(compiler_globals.active_op_array);
  brk_cont_element->parent = parent;
  return;
}
}
__inline static void do_end_loop(int cont_addr , int has_loop_var ) 
{ 

  {
  if (! has_loop_var) {
    ((compiler_globals.active_op_array)->brk_cont_array + compiler_globals.context.current_brk_cont)->start = -1;
  } else {

  }
  ((compiler_globals.active_op_array)->brk_cont_array + compiler_globals.context.current_brk_cont)->cont = cont_addr;
  ((compiler_globals.active_op_array)->brk_cont_array + compiler_globals.context.current_brk_cont)->brk = get_next_op_number(compiler_globals.active_op_array);
  compiler_globals.context.current_brk_cont = ((compiler_globals.active_op_array)->brk_cont_array + compiler_globals.context.current_brk_cont)->parent;
  return;
}
}
void zend_do_while_cond(znode const   *expr , znode *close_bracket_token ) 
{ int while_cond_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  int tmp___1 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  while_cond_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)43;
  while (1) {
    opline->op1_type = (unsigned char )expr->op_type;
    if (expr->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )expr->u.op;
    }
    break;
  }
  close_bracket_token->u.op.opline_num = (unsigned int )while_cond_op_number;
  opline->op2_type = (unsigned char )(1 << 3);
  do_begin_loop();
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_while_end(znode const   *while_token , znode const   *close_bracket_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)42;
  opline->op1.opline_num = (unsigned int )while_token->u.op.opline_num;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + close_bracket_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp___0;
  do_end_loop((int )while_token->u.op.opline_num, 0);
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_do_for_cond(znode const   *expr , znode *second_semicolon_token ) 
{ int for_cond_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  int tmp___1 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  for_cond_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)45;
  while (1) {
    opline->op1_type = (unsigned char )expr->op_type;
    if (expr->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )expr->u.op;
    }
    break;
  }
  second_semicolon_token->u.op.opline_num = (unsigned int )for_cond_op_number;
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_for_before_statement(znode const   *cond_start , znode const   *second_semicolon_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)42;
  opline->op1.opline_num = (unsigned int )cond_start->u.op.opline_num;
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + second_semicolon_token->u.op.opline_num)->extended_value = (unsigned long )tmp___0;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  do_begin_loop();
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_for_end(znode const   *second_semicolon_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)42;
  opline->op1.opline_num = (unsigned int )(second_semicolon_token->u.op.opline_num + 1U);
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + second_semicolon_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp___0;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  do_end_loop((int )(second_semicolon_token->u.op.opline_num + 1U), 0);
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_do_pre_incdec(znode *result , znode const   *op1 , zend_uchar op ) 
{ int last_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *last_op ;
  int tmp___0 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  last_op_number = tmp;
  if (last_op_number > 0) {
    last_op = (compiler_globals.active_op_array)->opcodes + (last_op_number - 1);
    if ((int )last_op->opcode == 88) {
      if ((int )op == 34) {
        last_op->opcode = (unsigned char)132;
      } else {
        last_op->opcode = (unsigned char)133;
      }
      last_op->result_type = (unsigned char )(1 << 2);
      last_op->result.var = get_temporary_variable(compiler_globals.active_op_array);
      while (1) {
        result->op_type = (int )last_op->result_type;
        if (result->op_type == 1) {
          result->u.constant = ((compiler_globals.active_op_array)->literals + last_op->result.constant)->constant;
        } else {
          result->u.op = last_op->result;
          result->EA = 0U;
        }
        break;
      }
      return;
    } else {

    }
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = op;
  while (1) {
    opline->op1_type = (unsigned char )op1->op_type;
    if (op1->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )op1->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_post_incdec(znode *result , znode const   *op1 , zend_uchar op ) 
{ int last_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *last_op ;
  int tmp___0 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  last_op_number = tmp;
  if (last_op_number > 0) {
    last_op = (compiler_globals.active_op_array)->opcodes + (last_op_number - 1);
    if ((int )last_op->opcode == 88) {
      if ((int )op == 36) {
        last_op->opcode = (unsigned char)134;
      } else {
        last_op->opcode = (unsigned char)135;
      }
      last_op->result_type = (unsigned char )(1 << 1);
      last_op->result.var = get_temporary_variable(compiler_globals.active_op_array);
      while (1) {
        result->op_type = (int )last_op->result_type;
        if (result->op_type == 1) {
          result->u.constant = ((compiler_globals.active_op_array)->literals + last_op->result.constant)->constant;
        } else {
          result->u.op = last_op->result;
          result->EA = 0U;
        }
        break;
      }
      return;
    } else {

    }
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = op;
  while (1) {
    opline->op1_type = (unsigned char )op1->op_type;
    if (op1->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )op1->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->result_type = (unsigned char )(1 << 1);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_if_cond(znode const   *cond , znode *closing_bracket_token ) 
{ int if_cond_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  int tmp___1 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  if_cond_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)43;
  while (1) {
    opline->op1_type = (unsigned char )cond->op_type;
    if (cond->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & cond->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )cond->u.op;
    }
    break;
  }
  closing_bracket_token->u.op.opline_num = (unsigned int )if_cond_op_number;
  opline->op2_type = (unsigned char )(1 << 3);
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_if_after_statement(znode const   *closing_bracket_token , unsigned char initialize ) 
{ int if_end_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  zend_llist *jmp_list_ptr ;
  zend_llist jmp_list ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  if_end_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)42;
  if (initialize) {
    zend_llist_init(& jmp_list, sizeof(int ), (void (*)(void * ))((void *)0), (unsigned char)0);
    zend_stack_push(& compiler_globals.bp_stack, (void const   *)((void *)(& jmp_list)), (int )sizeof(zend_llist ));
  } else {

  }
  zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& jmp_list_ptr));
  zend_llist_add_element(jmp_list_ptr, (void *)(& if_end_op_number));
  ((compiler_globals.active_op_array)->opcodes + closing_bracket_token->u.op.opline_num)->op2.opline_num = (unsigned int )(if_end_op_number + 1);
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_if_end(void) 
{ int next_op_number ;
  int tmp ;
  zend_llist *jmp_list_ptr ;
  zend_llist_element *le ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  next_op_number = tmp;
  zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& jmp_list_ptr));
  le = jmp_list_ptr->head;
  while (le) {
    ((compiler_globals.active_op_array)->opcodes + *((int *)(le->data)))->op1.opline_num = (unsigned int )next_op_number;
    le = le->next;
  }
  zend_llist_destroy(jmp_list_ptr);
  zend_stack_del_top(& compiler_globals.bp_stack);
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_check_writable_variable(znode const   *variable ) 
{ zend_uint type ;

  {
  type = (zend_uint )variable->EA;
  if (type & (unsigned int )(1 << 1)) {
    zend_error(1 << 6L, "Can\'t use method return value in write context");
  } else {

  }
  if (type == (zend_uint )(1 << 3)) {
    zend_error(1 << 6L, "Can\'t use function return value in write context");
  } else {

  }
  return;
}
}
void zend_do_begin_variable_parse(void) 
{ zend_llist fetch_list ;

  {
  zend_llist_init(& fetch_list, sizeof(zend_op ), (void (*)(void * ))((void *)0), (unsigned char)0);
  zend_stack_push(& compiler_globals.bp_stack, (void const   *)((void *)(& fetch_list)), (int )sizeof(zend_llist ));
  return;
}
}
void zend_do_end_variable_parse(znode *variable , int type , int arg_offset ) 
{ zend_llist *fetch_list_ptr ;
  zend_llist_element *le ;
  zend_op *opline ;
  zend_op *opline_ptr ;
  zend_uint this_var ;
  int tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  int tmp___1 ;
  zend_bool tmp___2 ;

  {
  opline = (zend_op *)((void *)0);
  this_var = (zend_uint )-1;
  zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& fetch_list_ptr));
  le = fetch_list_ptr->head;
  if (le) {
    opline_ptr = (zend_op *)(le->data);
    tmp___2 = opline_is_fetch_this((zend_op const   *)opline_ptr);
    if (tmp___2) {
      if ((compiler_globals.active_op_array)->last == 0U) {
        goto _L;
      } else {
        if ((int )((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->opcode != 57) {
          _L: /* CIL Label */ 
          this_var = opline_ptr->result.var;
          if ((compiler_globals.active_op_array)->this_var == 4294967295U) {
            tmp = lookup_cv(compiler_globals.active_op_array, ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.val, ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.value.str.len, ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant))->hash_value);
            (compiler_globals.active_op_array)->this_var = (unsigned int )tmp;
            ((compiler_globals.active_op_array)->literals + opline_ptr->op1.constant)->constant.type = (unsigned char)0;
          } else {
            zend_del_literal(compiler_globals.active_op_array, (int )opline_ptr->op1.constant);
          }
          le = le->next;
          if (variable->op_type == 1 << 2) {
            if (variable->u.op.var == this_var) {
              variable->op_type = 1 << 4;
              variable->u.op.var = (compiler_globals.active_op_array)->this_var;
            } else {

            }
          } else {

          }
        } else {
          if ((compiler_globals.active_op_array)->this_var == 4294967295U) {
            tmp___0 = _estrndup("this", sizeof("this") - 1U);
            tmp___1 = lookup_cv(compiler_globals.active_op_array, (char *)tmp___0, (int )(sizeof("this") - 1U), 275574653UL);
            (compiler_globals.active_op_array)->this_var = (unsigned int )tmp___1;
          } else {

          }
        }
      }
    } else {

    }
    while (le) {
      opline_ptr = (zend_op *)(le->data);
      if ((int )opline_ptr->opcode == 156) {
        if (type != 0) {
          if (type != 3) {
            opline = get_next_op(compiler_globals.active_op_array);
            memcpy((void */* __restrict  */)opline, (void const   */* __restrict  */)opline_ptr, sizeof(zend_op ));
          } else {

          }
        } else {

        }
        le = le->next;
        continue;
      } else {

      }
      opline = get_next_op(compiler_globals.active_op_array);
      memcpy((void */* __restrict  */)opline, (void const   */* __restrict  */)opline_ptr, sizeof(zend_op ));
      if ((int )opline->op1_type == 1 << 2) {
        if (opline->op1.var == this_var) {
          opline->op1_type = (unsigned char )(1 << 4);
          opline->op1.var = (compiler_globals.active_op_array)->this_var;
        } else {

        }
      } else {

      }
      switch (type) {
      case 0: 
      if ((int )opline->opcode == 84) {
        if ((int )opline->op2_type == 1 << 3) {
          zend_error(1 << 6L, "Cannot use [] for reading");
        } else {

        }
      } else {

      }
      opline->opcode = (unsigned char )((int )opline->opcode - 3);
      break;
      case 1: 
      break;
      case 2: 
      opline->opcode = (unsigned char )((int )opline->opcode + 3);
      break;
      case 3: 
      if ((int )opline->opcode == 84) {
        if ((int )opline->op2_type == 1 << 3) {
          zend_error(1 << 6L, "Cannot use [] for reading");
        } else {

        }
      } else {

      }
      opline->opcode = (unsigned char )((int )opline->opcode + 6);
      break;
      case 5: 
      opline->opcode = (unsigned char )((int )opline->opcode + 9);
      opline->extended_value |= (unsigned long )arg_offset;
      break;
      case 6: 
      if ((int )opline->opcode == 84) {
        if ((int )opline->op2_type == 1 << 3) {
          zend_error(1 << 6L, "Cannot use [] for unsetting");
        } else {

        }
      } else {

      }
      opline->opcode = (unsigned char )((int )opline->opcode + 12);
      break;
      }
      le = le->next;
    }
    if (opline) {
      if (type == 1) {
        if (arg_offset) {
          opline->extended_value |= 67108864UL;
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  zend_llist_destroy(fetch_list_ptr);
  zend_stack_del_top(& compiler_globals.bp_stack);
  return;
}
}
void zend_do_add_string(znode *result , znode const   *op1 , znode *op2 ) 
{ zend_op *opline ;
  int ch ;
  zval *__z ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if (op2->u.constant.value.str.len > 1) {
    opline = get_next_op(compiler_globals.active_op_array);
    opline->opcode = (unsigned char)55;
  } else {
    if (op2->u.constant.value.str.len == 1) {
      ch = (int )*(op2->u.constant.value.str.val);
      _efree((void *)op2->u.constant.value.str.val);
      __z = & op2->u.constant;
      __z->value.lval = (long )ch;
      __z->type = (unsigned char)1;
      opline = get_next_op(compiler_globals.active_op_array);
      opline->opcode = (unsigned char)54;
    } else {
      _efree((void *)op2->u.constant.value.str.val);
      return;
    }
  }
  if (op1) {
    while (1) {
      opline->op1_type = (unsigned char )op1->op_type;
      if (op1->op_type == 1) {
        tmp = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
        opline->op1.constant = (unsigned int )tmp;
      } else {
        opline->op1 = (union _znode_op )op1->u.op;
      }
      break;
    }
    while (1) {
      opline->result_type = (unsigned char )op1->op_type;
      if (op1->op_type == 1) {
        tmp___0 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
        opline->result.constant = (unsigned int )tmp___0;
      } else {
        opline->result = (union _znode_op )op1->u.op;
      }
      break;
    }
  } else {
    opline->op1_type = (unsigned char )(1 << 3);
    opline->result_type = (unsigned char )(1 << 1);
    opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  }
  while (1) {
    opline->op2_type = (unsigned char )op2->op_type;
    if (op2->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& op2->u.constant));
      opline->op2.constant = (unsigned int )tmp___1;
    } else {
      opline->op2 = op2->u.op;
    }
    break;
  }
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_add_variable(znode *result , znode const   *op1 , znode const   *op2 ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)56;
  if (op1) {
    while (1) {
      opline->op1_type = (unsigned char )op1->op_type;
      if (op1->op_type == 1) {
        tmp___0 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
        opline->op1.constant = (unsigned int )tmp___0;
      } else {
        opline->op1 = (union _znode_op )op1->u.op;
      }
      break;
    }
    while (1) {
      opline->result_type = (unsigned char )op1->op_type;
      if (op1->op_type == 1) {
        tmp___1 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
        opline->result.constant = (unsigned int )tmp___1;
      } else {
        opline->result = (union _znode_op )op1->u.op;
      }
      break;
    }
  } else {
    opline->op1_type = (unsigned char )(1 << 3);
    opline->result_type = (unsigned char )(1 << 1);
    opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  }
  while (1) {
    opline->op2_type = (unsigned char )op2->op_type;
    if (op2->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, & op2->u.constant);
      opline->op2.constant = (unsigned int )tmp___2;
    } else {
      opline->op2 = (union _znode_op )op2->u.op;
    }
    break;
  }
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_free(znode *op1 ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  zend_op *opline___0 ;
  int tmp___1 ;

  {
  if (op1->op_type == 1 << 1) {
    tmp = get_next_op(compiler_globals.active_op_array);
    opline = tmp;
    opline->opcode = (unsigned char)70;
    while (1) {
      opline->op1_type = (unsigned char )op1->op_type;
      if (op1->op_type == 1) {
        tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& op1->u.constant));
        opline->op1.constant = (unsigned int )tmp___0;
      } else {
        opline->op1 = op1->u.op;
      }
      break;
    }
    opline->op2_type = (unsigned char )(1 << 3);
  } else {
    if (op1->op_type == 1 << 2) {
      opline___0 = (compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U);
      while (1) {
        if ((int )opline___0->opcode == 58) {

        } else {
          if ((int )opline___0->opcode == 103) {

          } else {
            if ((int )opline___0->opcode == 137) {

            } else {
              break;
            }
          }
        }
        opline___0 --;
      }
      if ((int )opline___0->result_type == 1 << 2) {
        if (opline___0->result.var == op1->u.op.var) {
          if ((int )opline___0->opcode == 80) {
            goto _L;
          } else {
            if ((int )opline___0->opcode == 81) {
              goto _L;
            } else {
              if ((int )opline___0->opcode == 82) {
                goto _L;
              } else {
                if ((int )opline___0->opcode == 157) {
                  _L: /* CIL Label */ 
                  opline___0 = get_next_op(compiler_globals.active_op_array);
                  opline___0->opcode = (unsigned char)70;
                  while (1) {
                    opline___0->op1_type = (unsigned char )op1->op_type;
                    if (op1->op_type == 1) {
                      tmp___1 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& op1->u.constant));
                      opline___0->op1.constant = (unsigned int )tmp___1;
                    } else {
                      opline___0->op1 = op1->u.op;
                    }
                    break;
                  }
                  opline___0->op2_type = (unsigned char )(1 << 3);
                } else {
                  opline___0->result_type = (unsigned char )((int )opline___0->result_type | (1 << 5));
                }
              }
            }
          }
        } else {
          goto _L___2;
        }
      } else {
        _L___2: /* CIL Label */ 
        while ((unsigned int )opline___0 > (unsigned int )(compiler_globals.active_op_array)->opcodes) {
          if ((int )opline___0->opcode == 81) {
            if ((int )opline___0->op1_type == 1 << 2) {
              if (opline___0->op1.var == op1->u.op.var) {
                opline___0->extended_value = 0UL;
                break;
              } else {
                goto _L___1;
              }
            } else {
              goto _L___1;
            }
          } else {
            _L___1: /* CIL Label */ 
            _L___0: /* CIL Label */ 
            if ((int )opline___0->result_type == 1 << 2) {
              if (opline___0->result.var == op1->u.op.var) {
                if ((int )opline___0->opcode == 68) {
                  opline___0->result_type = (unsigned char )((int )opline___0->result_type | (1 << 5));
                } else {

                }
                break;
              } else {

              }
            } else {

            }
          }
          opline___0 --;
        }
      }
    } else {
      if (op1->op_type == 1) {
        _zval_dtor(& op1->u.constant);
      } else {

      }
    }
  }
  return;
}
}
int zend_do_verify_access_types(znode const   *current_access_type , znode const   *new_modifier ) 
{ 

  {
  if (current_access_type->u.constant.value.lval & 1792L) {
    if (new_modifier->u.constant.value.lval & 1792L) {
      zend_error(1 << 6L, "Multiple access type modifiers are not allowed");
    } else {

    }
  } else {

  }
  if (current_access_type->u.constant.value.lval & 2L) {
    if (new_modifier->u.constant.value.lval & 2L) {
      zend_error(1 << 6L, "Multiple abstract modifiers are not allowed");
    } else {

    }
  } else {

  }
  if (current_access_type->u.constant.value.lval & 1L) {
    if (new_modifier->u.constant.value.lval & 1L) {
      zend_error(1 << 6L, "Multiple static modifiers are not allowed");
    } else {

    }
  } else {

  }
  if (current_access_type->u.constant.value.lval & 4L) {
    if (new_modifier->u.constant.value.lval & 4L) {
      zend_error(1 << 6L, "Multiple final modifiers are not allowed");
    } else {

    }
  } else {

  }
  if (((current_access_type->u.constant.value.lval | new_modifier->u.constant.value.lval) & 6L) == 6L) {
    zend_error(1 << 6L, "Cannot use the final modifier on an abstract class member");
  } else {

  }
  return ((int )(current_access_type->u.constant.value.lval | new_modifier->u.constant.value.lval));
}
}
void zend_do_begin_function_declaration(znode *function_token , znode *function_name , int is_method , int return_reference , znode *fn_flags_znode ) 
{ zend_op_array op_array ;
  char *name ;
  int name_len ;
  int function_begin_line ;
  zend_uint fn_flags ;
  char const   *lcname ;
  zend_bool orig_interactive ;
  zend_bool use_heap ;
  char const   *tmp ;
  char const   *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  int result ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  char const __attribute__((__visibility__("default")))  *tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  char *class_lcname ;
  long tmp___13 ;
  void __attribute__((__visibility__("default")))  *tmp___14 ;
  void *tmp___15 ;
  long tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  long tmp___28 ;
  zend_op *opline ;
  zend_op *tmp___29 ;
  zval key ;
  znode tmp___30 ;
  char __attribute__((__visibility__("default")))  *tmp___31 ;
  char __attribute__((__visibility__("default")))  *tmp___32 ;
  int tmp___33 ;
  ulong __attribute__((__visibility__("default")))  tmp___34 ;
  zval _c ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___35 ;
  int tmp___36 ;
  ulong __attribute__((__visibility__("default")))  tmp___37 ;
  zend_op *opline___0 ;
  zend_op *tmp___38 ;
  zend_switch_entry switch_entry ;
  zend_op dummy_opline ;

  {
  name = function_name->u.constant.value.str.val;
  name_len = function_name->u.constant.value.str.len;
  function_begin_line = (int )function_token->u.op.opline_num;
  if (is_method) {
    if ((compiler_globals.active_class_entry)->ce_flags & 128U) {
      if (fn_flags_znode->u.constant.value.lval & -258L) {
        zend_error(1 << 6L, "Access type for interface method %s::%s() must be omitted", (compiler_globals.active_class_entry)->name, function_name->u.constant.value.str.val);
      } else {

      }
      fn_flags_znode->u.constant.value.lval |= 2L;
    } else {

    }
    fn_flags = (unsigned int )fn_flags_znode->u.constant.value.lval;
  } else {
    fn_flags = 0U;
  }
  if (fn_flags & 1U) {
    if (fn_flags & 2U) {
      if (! ((compiler_globals.active_class_entry)->ce_flags & 128U)) {
        if (is_method) {
          tmp = "::";
        } else {
          tmp = "";
        }
        if (is_method) {
          tmp___0 = (compiler_globals.active_class_entry)->name;
        } else {
          tmp___0 = "";
        }
        zend_error(1 << 11L, "Static function %s%s%s() should not be abstract", tmp___0, tmp, function_name->u.constant.value.str.val);
      } else {

      }
    } else {

    }
  } else {

  }
  function_token->u.op_array = compiler_globals.active_op_array;
  orig_interactive = (unsigned char )compiler_globals.interactive;
  compiler_globals.interactive = 0;
  init_op_array(& op_array, (unsigned char)2, 64);
  compiler_globals.interactive = (int )orig_interactive;
  op_array.function_name = (char const   *)name;
  if (return_reference) {
    op_array.fn_flags |= 67108864U;
  } else {

  }
  op_array.fn_flags |= fn_flags;
  if (is_method) {
    op_array.scope = compiler_globals.active_class_entry;
  } else {
    op_array.scope = (zend_class_entry *)((void *)0);
  }
  op_array.prototype = (union _zend_function *)((void *)0);
  tmp___1 = zend_get_compiled_lineno();
  op_array.line_start = (unsigned int )tmp___1;
  if (is_method) {
    tmp___2 = zend_str_tolower_dup((char const   *)name, (unsigned int )name_len);
    tmp___3 = (*zend_new_interned_string)((char const   *)tmp___2, name_len + 1, 1);
    lcname = (char const   *)tmp___3;
    if ((unsigned int )lcname >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )lcname < (unsigned int )compiler_globals.interned_strings_end) {
        tmp___4 = _zend_hash_quick_add_or_update(& (compiler_globals.active_class_entry)->function_table, lcname, (unsigned int )(name_len + 1), ((Bucket *)((char *)lcname - sizeof(Bucket )))->h, (void *)(& op_array), sizeof(zend_op_array ), (void **)(& compiler_globals.active_op_array), 1 << 1);
        result = (int )tmp___4;
      } else {
        tmp___5 = _zend_hash_add_or_update(& (compiler_globals.active_class_entry)->function_table, lcname, (unsigned int )(name_len + 1), (void *)(& op_array), sizeof(zend_op_array ), (void **)(& compiler_globals.active_op_array), 1 << 1);
        result = (int )tmp___5;
      }
    } else {
      tmp___5 = _zend_hash_add_or_update(& (compiler_globals.active_class_entry)->function_table, lcname, (unsigned int )(name_len + 1), (void *)(& op_array), sizeof(zend_op_array ), (void **)(& compiler_globals.active_op_array), 1 << 1);
      result = (int )tmp___5;
    }
    if (result == -1) {
      zend_error(1 << 6L, "Cannot redeclare %s::%s()", (compiler_globals.active_class_entry)->name, name);
    } else {

    }
    zend_stack_push(& compiler_globals.context_stack, (void const   *)((void *)(& compiler_globals.context)), (int )sizeof(compiler_globals.context));
    zend_init_compiler_context();
    if (fn_flags & 2U) {
      (compiler_globals.active_class_entry)->ce_flags |= 16U;
    } else {

    }
    if (! (fn_flags & 1792U)) {
      fn_flags |= 256U;
    } else {

    }
    if ((compiler_globals.active_class_entry)->ce_flags & 128U) {
      if ((unsigned int )name_len == sizeof("__call") - 1U) {
        tmp___12 = memcmp((void const   *)lcname, (void const   *)"__call", sizeof("__call") - 1U);
        if (tmp___12) {
          goto _L___4;
        } else {
          if (fn_flags & 1537U) {
            zend_error(1 << 1L, "The magic method __call() must have public visibility and cannot be static");
          } else {

          }
        }
      } else {
        _L___4: /* CIL Label */ 
        if ((unsigned int )name_len == sizeof("__callstatic") - 1U) {
          tmp___11 = memcmp((void const   *)lcname, (void const   *)"__callstatic", sizeof("__callstatic") - 1U);
          if (tmp___11) {
            goto _L___3;
          } else {
            if (fn_flags & 1536U) {
              zend_error(1 << 1L, "The magic method __callStatic() must have public visibility and be static");
            } else {
              if ((fn_flags & 1U) == 0U) {
                zend_error(1 << 1L, "The magic method __callStatic() must have public visibility and be static");
              } else {

              }
            }
          }
        } else {
          _L___3: /* CIL Label */ 
          if ((unsigned int )name_len == sizeof("__get") - 1U) {
            tmp___10 = memcmp((void const   *)lcname, (void const   *)"__get", sizeof("__get") - 1U);
            if (tmp___10) {
              goto _L___2;
            } else {
              if (fn_flags & 1537U) {
                zend_error(1 << 1L, "The magic method __get() must have public visibility and cannot be static");
              } else {

              }
            }
          } else {
            _L___2: /* CIL Label */ 
            if ((unsigned int )name_len == sizeof("__set") - 1U) {
              tmp___9 = memcmp((void const   *)lcname, (void const   *)"__set", sizeof("__set") - 1U);
              if (tmp___9) {
                goto _L___1;
              } else {
                if (fn_flags & 1537U) {
                  zend_error(1 << 1L, "The magic method __set() must have public visibility and cannot be static");
                } else {

                }
              }
            } else {
              _L___1: /* CIL Label */ 
              if ((unsigned int )name_len == sizeof("__unset") - 1U) {
                tmp___8 = memcmp((void const   *)lcname, (void const   *)"__unset", sizeof("__unset") - 1U);
                if (tmp___8) {
                  goto _L___0;
                } else {
                  if (fn_flags & 1537U) {
                    zend_error(1 << 1L, "The magic method __unset() must have public visibility and cannot be static");
                  } else {

                  }
                }
              } else {
                _L___0: /* CIL Label */ 
                if ((unsigned int )name_len == sizeof("__isset") - 1U) {
                  tmp___7 = memcmp((void const   *)lcname, (void const   *)"__isset", sizeof("__isset") - 1U);
                  if (tmp___7) {
                    goto _L;
                  } else {
                    if (fn_flags & 1537U) {
                      zend_error(1 << 1L, "The magic method __isset() must have public visibility and cannot be static");
                    } else {

                    }
                  }
                } else {
                  _L: /* CIL Label */ 
                  if ((unsigned int )name_len == sizeof("__tostring") - 1U) {
                    tmp___6 = memcmp((void const   *)lcname, (void const   *)"__tostring", sizeof("__tostring") - 1U);
                    if (tmp___6) {

                    } else {
                      if (fn_flags & 1537U) {
                        zend_error(1 << 1L, "The magic method __toString() must have public visibility and cannot be static");
                      } else {

                      }
                    }
                  } else {

                  }
                }
              }
            }
          }
        }
      }
    } else {
      tmp___16 = __builtin_expect((long )((compiler_globals.active_class_entry)->name_length + 1U > 32768U), 0L);
      use_heap = (unsigned char )tmp___16;
      if (use_heap) {
        tmp___14 = _emalloc((compiler_globals.active_class_entry)->name_length + 1U);
        class_lcname = (char *)tmp___14;
      } else {
        tmp___15 = __builtin_alloca((compiler_globals.active_class_entry)->name_length + 1U);
        class_lcname = (char *)tmp___15;
      }
      zend_str_tolower_copy(class_lcname, (compiler_globals.active_class_entry)->name, (compiler_globals.active_class_entry)->name_length);
      if ((compiler_globals.active_class_entry)->name_length == (zend_uint )name_len) {
        if (((compiler_globals.active_class_entry)->ce_flags & 288U) != 288U) {
          tmp___27 = memcmp((void const   *)class_lcname, (void const   *)lcname, (unsigned int )name_len);
          if (tmp___27) {
            goto _L___16;
          } else {
            if (! (compiler_globals.active_class_entry)->constructor) {
              (compiler_globals.active_class_entry)->constructor = (zend_function *)compiler_globals.active_op_array;
            } else {

            }
          }
        } else {
          goto _L___16;
        }
      } else {
        _L___16: /* CIL Label */ 
        _L___15: /* CIL Label */ 
        if ((unsigned int )name_len == sizeof("__construct") - 1U) {
          tmp___26 = memcmp((void const   *)lcname, (void const   *)"__construct", sizeof("__construct"));
          if (tmp___26) {
            goto _L___14;
          } else {
            if ((compiler_globals.active_class_entry)->constructor) {
              zend_error(1 << 11L, "Redefining already defined constructor for class %s", (compiler_globals.active_class_entry)->name);
            } else {

            }
            (compiler_globals.active_class_entry)->constructor = (zend_function *)compiler_globals.active_op_array;
          }
        } else {
          _L___14: /* CIL Label */ 
          if ((unsigned int )name_len == sizeof("__destruct") - 1U) {
            tmp___25 = memcmp((void const   *)lcname, (void const   *)"__destruct", sizeof("__destruct") - 1U);
            if (tmp___25) {
              goto _L___13;
            } else {
              (compiler_globals.active_class_entry)->destructor = (zend_function *)compiler_globals.active_op_array;
            }
          } else {
            _L___13: /* CIL Label */ 
            if ((unsigned int )name_len == sizeof("__clone") - 1U) {
              tmp___24 = memcmp((void const   *)lcname, (void const   *)"__clone", sizeof("__clone") - 1U);
              if (tmp___24) {
                goto _L___12;
              } else {
                (compiler_globals.active_class_entry)->clone = (zend_function *)compiler_globals.active_op_array;
              }
            } else {
              _L___12: /* CIL Label */ 
              if ((unsigned int )name_len == sizeof("__call") - 1U) {
                tmp___23 = memcmp((void const   *)lcname, (void const   *)"__call", sizeof("__call") - 1U);
                if (tmp___23) {
                  goto _L___11;
                } else {
                  if (fn_flags & 1537U) {
                    zend_error(1 << 1L, "The magic method __call() must have public visibility and cannot be static");
                  } else {

                  }
                  (compiler_globals.active_class_entry)->__call = (zend_function *)compiler_globals.active_op_array;
                }
              } else {
                _L___11: /* CIL Label */ 
                if ((unsigned int )name_len == sizeof("__callstatic") - 1U) {
                  tmp___22 = memcmp((void const   *)lcname, (void const   *)"__callstatic", sizeof("__callstatic") - 1U);
                  if (tmp___22) {
                    goto _L___10;
                  } else {
                    if (fn_flags & 1536U) {
                      zend_error(1 << 1L, "The magic method __callStatic() must have public visibility and be static");
                    } else {
                      if ((fn_flags & 1U) == 0U) {
                        zend_error(1 << 1L, "The magic method __callStatic() must have public visibility and be static");
                      } else {

                      }
                    }
                    (compiler_globals.active_class_entry)->__callstatic = (zend_function *)compiler_globals.active_op_array;
                  }
                } else {
                  _L___10: /* CIL Label */ 
                  if ((unsigned int )name_len == sizeof("__get") - 1U) {
                    tmp___21 = memcmp((void const   *)lcname, (void const   *)"__get", sizeof("__get") - 1U);
                    if (tmp___21) {
                      goto _L___9;
                    } else {
                      if (fn_flags & 1537U) {
                        zend_error(1 << 1L, "The magic method __get() must have public visibility and cannot be static");
                      } else {

                      }
                      (compiler_globals.active_class_entry)->__get = (zend_function *)compiler_globals.active_op_array;
                    }
                  } else {
                    _L___9: /* CIL Label */ 
                    if ((unsigned int )name_len == sizeof("__set") - 1U) {
                      tmp___20 = memcmp((void const   *)lcname, (void const   *)"__set", sizeof("__set") - 1U);
                      if (tmp___20) {
                        goto _L___8;
                      } else {
                        if (fn_flags & 1537U) {
                          zend_error(1 << 1L, "The magic method __set() must have public visibility and cannot be static");
                        } else {

                        }
                        (compiler_globals.active_class_entry)->__set = (zend_function *)compiler_globals.active_op_array;
                      }
                    } else {
                      _L___8: /* CIL Label */ 
                      if ((unsigned int )name_len == sizeof("__unset") - 1U) {
                        tmp___19 = memcmp((void const   *)lcname, (void const   *)"__unset", sizeof("__unset") - 1U);
                        if (tmp___19) {
                          goto _L___7;
                        } else {
                          if (fn_flags & 1537U) {
                            zend_error(1 << 1L, "The magic method __unset() must have public visibility and cannot be static");
                          } else {

                          }
                          (compiler_globals.active_class_entry)->__unset = (zend_function *)compiler_globals.active_op_array;
                        }
                      } else {
                        _L___7: /* CIL Label */ 
                        if ((unsigned int )name_len == sizeof("__isset") - 1U) {
                          tmp___18 = memcmp((void const   *)lcname, (void const   *)"__isset", sizeof("__isset") - 1U);
                          if (tmp___18) {
                            goto _L___6;
                          } else {
                            if (fn_flags & 1537U) {
                              zend_error(1 << 1L, "The magic method __isset() must have public visibility and cannot be static");
                            } else {

                            }
                            (compiler_globals.active_class_entry)->__isset = (zend_function *)compiler_globals.active_op_array;
                          }
                        } else {
                          _L___6: /* CIL Label */ 
                          if ((unsigned int )name_len == sizeof("__tostring") - 1U) {
                            tmp___17 = memcmp((void const   *)lcname, (void const   *)"__tostring", sizeof("__tostring") - 1U);
                            if (tmp___17) {
                              goto _L___5;
                            } else {
                              if (fn_flags & 1537U) {
                                zend_error(1 << 1L, "The magic method __toString() must have public visibility and cannot be static");
                              } else {

                              }
                              (compiler_globals.active_class_entry)->__tostring = (zend_function *)compiler_globals.active_op_array;
                            }
                          } else {
                            _L___5: /* CIL Label */ 
                            if (! (fn_flags & 1U)) {
                              (compiler_globals.active_op_array)->fn_flags |= 65536U;
                            } else {

                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      while (1) {
        tmp___28 = __builtin_expect((long )use_heap, 0L);
        if (tmp___28) {
          _efree((void *)class_lcname);
        } else {

        }
        break;
      }
    }
    while (1) {
      if ((unsigned int )lcname >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )lcname < (unsigned int )compiler_globals.interned_strings_end) {

        } else {
          _efree((void *)((char *)lcname));
        }
      } else {
        _efree((void *)((char *)lcname));
      }
      break;
    }
  } else {
    tmp___29 = get_next_op(compiler_globals.active_op_array);
    opline = tmp___29;
    if (compiler_globals.current_namespace) {
      tmp___30.u.constant = *(compiler_globals.current_namespace);
      _zval_copy_ctor(& tmp___30.u.constant);
      zend_do_build_namespace_name(& tmp___30, & tmp___30, function_name);
      op_array.function_name = (char const   *)tmp___30.u.constant.value.str.val;
      name_len = tmp___30.u.constant.value.str.len;
      tmp___31 = zend_str_tolower_dup((char const   *)tmp___30.u.constant.value.str.val, (unsigned int )name_len);
      lcname = (char const   *)tmp___31;
    } else {
      tmp___32 = zend_str_tolower_dup((char const   *)name, (unsigned int )name_len);
      lcname = (char const   *)tmp___32;
    }
    opline->opcode = (unsigned char)141;
    opline->op1_type = (unsigned char)1;
    build_runtime_defined_function_key(& key, lcname, name_len);
    tmp___33 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& key));
    opline->op1.constant = (unsigned int )tmp___33;
    tmp___34 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len);
    ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___34;
    opline->op2_type = (unsigned char)1;
    while (1) {
      while (1) {
        __s = lcname;
        __l = name_len;
        __z = & _c;
        __z->value.str.len = __l;
        __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
        __z->type = (unsigned char)6;
        break;
      }
      tmp___36 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c));
      opline->op2.constant = (unsigned int )tmp___36;
      break;
    }
    while (1) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val - sizeof(Bucket )))->h;
        } else {
          tmp___37 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___37;
        }
      } else {
        tmp___37 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___37;
      }
      break;
    }
    opline->extended_value = 141UL;
    _zend_hash_quick_add_or_update(compiler_globals.function_table, (char const   *)key.value.str.val, (unsigned int )key.value.str.len, ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value, (void *)(& op_array), sizeof(zend_op_array ), (void **)(& compiler_globals.active_op_array), 1);
    zend_stack_push(& compiler_globals.context_stack, (void const   *)((void *)(& compiler_globals.context)), (int )sizeof(compiler_globals.context));
    zend_init_compiler_context();
  }
  if (compiler_globals.compiler_options & 1U) {
    tmp___38 = get_next_op(compiler_globals.active_op_array);
    opline___0 = tmp___38;
    opline___0->opcode = (unsigned char)104;
    opline___0->lineno = (unsigned int )function_begin_line;
    opline___0->op1_type = (unsigned char )(1 << 3);
    opline___0->op2_type = (unsigned char )(1 << 3);
  } else {

  }
  switch_entry.cond.op_type = 1 << 3;
  switch_entry.default_case = 0;
  switch_entry.control_var = 0;
  zend_stack_push(& compiler_globals.switch_cond_stack, (void const   *)((void *)(& switch_entry)), (int )sizeof(switch_entry));
  dummy_opline.result_type = (unsigned char )(1 << 3);
  dummy_opline.op1_type = (unsigned char )(1 << 3);
  zend_stack_push(& compiler_globals.foreach_copy_stack, (void const   *)((void *)(& dummy_opline)), (int )sizeof(zend_op ));
  if (compiler_globals.doc_comment) {
    (compiler_globals.active_op_array)->doc_comment = (char const   *)compiler_globals.doc_comment;
    (compiler_globals.active_op_array)->doc_comment_len = compiler_globals.doc_comment_len;
    compiler_globals.doc_comment = (char *)((void *)0);
    compiler_globals.doc_comment_len = 0U;
  } else {

  }
  return;
}
}
void zend_do_begin_lambda_function_declaration(znode *result , znode *function_token , int return_reference , int is_static ) 
{ znode function_name ;
  zend_op_array *current_op_array ;
  int current_op_number ;
  int tmp ;
  zend_op *current_op ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  int tmp___1 ;

  {
  current_op_array = compiler_globals.active_op_array;
  tmp = get_next_op_number(compiler_globals.active_op_array);
  current_op_number = tmp;
  function_name.op_type = 1;
  while (1) {
    __s = "{closure}";
    __l = (int )(sizeof("{closure}") - 1U);
    __z = & function_name.u.constant;
    __z->value.str.len = __l;
    tmp___0 = _estrndup(__s, (unsigned int )__l);
    __z->value.str.val = (char *)tmp___0;
    __z->type = (unsigned char)6;
    break;
  }
  zend_do_begin_function_declaration(function_token, & function_name, 0, return_reference, (znode *)((void *)0));
  result->op_type = 1 << 1;
  result->u.op.var = get_temporary_variable(current_op_array);
  current_op = current_op_array->opcodes + current_op_number;
  current_op->opcode = (unsigned char)153;
  zend_del_literal(current_op_array, (int )current_op->op2.constant);
  current_op->op2_type = (unsigned char )(1 << 3);
  while (1) {
    current_op->result_type = (unsigned char )result->op_type;
    if (result->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& result->u.constant));
      current_op->result.constant = (unsigned int )tmp___1;
    } else {
      current_op->result = result->u.op;
    }
    break;
  }
  if (is_static) {
    (compiler_globals.active_op_array)->fn_flags |= 1U;
  } else {

  }
  (compiler_globals.active_op_array)->fn_flags |= 1048576U;
  return;
}
}
void zend_do_handle_exception(void) 
{ zend_op *opline ;
  zend_op *tmp ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)149;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_end_function_declaration(znode const   *function_token ) 
{ char lcname[16] ;
  int name_len ;
  size_t tmp ;
  unsigned int tmp___0 ;
  int tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;

  {
  zend_do_extended_info();
  zend_do_return((znode *)((void *)0), 0);
  pass_two(compiler_globals.active_op_array);
  zend_release_labels();
  if (compiler_globals.active_class_entry) {
    zend_check_magic_method_implementation((zend_class_entry const   *)compiler_globals.active_class_entry, (zend_function const   *)((zend_function *)compiler_globals.active_op_array), 1 << 6L);
  } else {
    tmp = strlen((compiler_globals.active_op_array)->function_name);
    name_len = (int )tmp;
    if ((unsigned int )name_len < sizeof(lcname) - 1U) {
      tmp___0 = (unsigned int )name_len;
    } else {
      tmp___0 = sizeof(lcname) - 1U;
    }
    zend_str_tolower_copy(lcname, (compiler_globals.active_op_array)->function_name, tmp___0);
    lcname[sizeof(lcname) - 1U] = (char )'\000';
    if ((unsigned int )name_len == sizeof("__autoload") - 1U) {
      tmp___1 = memcmp((void const   *)(lcname), (void const   *)"__autoload", sizeof("__autoload"));
      if (tmp___1) {

      } else {
        if ((compiler_globals.active_op_array)->num_args != 1U) {
          zend_error(1 << 6L, "%s() must take exactly 1 argument", "__autoload");
        } else {

        }
      }
    } else {

    }
  }
  tmp___2 = zend_get_compiled_lineno();
  (compiler_globals.active_op_array)->line_end = (unsigned int )tmp___2;
  compiler_globals.active_op_array = (zend_op_array *)function_token->u.op_array;
  zend_stack_del_top(& compiler_globals.switch_cond_stack);
  zend_stack_del_top(& compiler_globals.foreach_copy_stack);
  return;
}
}
void zend_do_receive_arg(zend_uchar op , znode *varname , znode const   *offset , znode const   *initialization , znode *class_type , unsigned char pass_by_reference ) 
{ zend_op *opline ;
  zend_arg_info *cur_arg_info ;
  znode var ;
  int tmp ;
  int tmp___0 ;
  zend_bool __attribute__((__visibility__("default")))  tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  void __attribute__((__visibility__("default")))  *tmp___5 ;
  char __attribute__((__visibility__("default")))  *tmp___6 ;
  char const __attribute__((__visibility__("default")))  *tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  char const __attribute__((__visibility__("default")))  *tmp___11 ;
  int tmp___12 ;

  {
  if (class_type->op_type == 1) {
    if ((int )class_type->u.constant.type == 6) {
      if (class_type->u.constant.value.str.len == 0) {
        _zval_dtor(& class_type->u.constant);
        zend_error(1 << 6L, "Cannot use \'namespace\' as a class name");
        return;
      } else {

      }
    } else {

    }
  } else {

  }
  tmp___1 = zend_is_auto_global_quick((char const   *)varname->u.constant.value.str.val, (unsigned int )varname->u.constant.value.str.len, 0UL);
  if (tmp___1) {
    zend_error(1 << 6L, "Cannot re-assign auto-global variable %s", varname->u.constant.value.str.val);
  } else {
    var.op_type = 1 << 4;
    tmp = lookup_cv(compiler_globals.active_op_array, varname->u.constant.value.str.val, varname->u.constant.value.str.len, 0UL);
    var.u.op.var = (unsigned int )tmp;
    varname->u.constant.value.str.val = (char *)((compiler_globals.active_op_array)->vars + var.u.op.var)->name;
    var.EA = 0U;
    if (((compiler_globals.active_op_array)->vars + var.u.op.var)->hash_value == 275574653UL) {
      if ((unsigned int )varname->u.constant.value.str.len == sizeof("this") - 1U) {
        tmp___0 = memcmp((void const   *)varname->u.constant.value.str.val, (void const   *)"this", sizeof("this") - 1U);
        if (tmp___0) {

        } else {
          if ((compiler_globals.active_op_array)->scope) {
            if (((compiler_globals.active_op_array)->fn_flags & 1U) == 0U) {
              zend_error(1 << 6L, "Cannot re-assign $this");
            } else {

            }
          } else {

          }
          (compiler_globals.active_op_array)->this_var = var.u.op.var;
        }
      } else {

      }
    } else {

    }
  }
  opline = get_next_op(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->num_args) ++;
  opline->opcode = op;
  while (1) {
    opline->result_type = (unsigned char )var.op_type;
    if (var.op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& var.u.constant));
      opline->result.constant = (unsigned int )tmp___2;
    } else {
      opline->result = var.u.op;
    }
    break;
  }
  while (1) {
    opline->op1_type = (unsigned char )offset->op_type;
    if (offset->op_type == 1) {
      tmp___3 = zend_add_literal(compiler_globals.active_op_array, & offset->u.constant);
      opline->op1.constant = (unsigned int )tmp___3;
    } else {
      opline->op1 = (union _znode_op )offset->u.op;
    }
    break;
  }
  if ((int )op == 64) {
    while (1) {
      opline->op2_type = (unsigned char )initialization->op_type;
      if (initialization->op_type == 1) {
        tmp___4 = zend_add_literal(compiler_globals.active_op_array, & initialization->u.constant);
        opline->op2.constant = (unsigned int )tmp___4;
      } else {
        opline->op2 = (union _znode_op )initialization->u.op;
      }
      break;
    }
  } else {
    (compiler_globals.active_op_array)->required_num_args = (compiler_globals.active_op_array)->num_args;
    opline->op2_type = (unsigned char )(1 << 3);
  }
  tmp___5 = _erealloc((void *)(compiler_globals.active_op_array)->arg_info, sizeof(zend_arg_info ) * (compiler_globals.active_op_array)->num_args, 0);
  (compiler_globals.active_op_array)->arg_info = (zend_arg_info *)tmp___5;
  cur_arg_info = (compiler_globals.active_op_array)->arg_info + ((compiler_globals.active_op_array)->num_args - 1U);
  tmp___6 = _estrndup((char const   *)varname->u.constant.value.str.val, (unsigned int )varname->u.constant.value.str.len);
  tmp___7 = (*zend_new_interned_string)((char const   *)tmp___6, varname->u.constant.value.str.len + 1, 1);
  cur_arg_info->name = (char const   *)tmp___7;
  cur_arg_info->name_len = (unsigned int )varname->u.constant.value.str.len;
  cur_arg_info->type_hint = (unsigned char)0;
  cur_arg_info->allow_null = (unsigned char)1;
  cur_arg_info->pass_by_reference = pass_by_reference;
  cur_arg_info->class_name = (char const   *)((void *)0);
  cur_arg_info->class_name_len = 0U;
  if (class_type->op_type != 1 << 3) {
    cur_arg_info->allow_null = (unsigned char)0;
    if ((int )class_type->u.constant.type != 0) {
      if ((int )class_type->u.constant.type == 4) {
        cur_arg_info->type_hint = (unsigned char)4;
        if ((int )op == 64) {
          if ((int const   )initialization->u.constant.type == 0) {
            cur_arg_info->allow_null = (unsigned char)1;
          } else {
            if ((int const   )initialization->u.constant.type == 8) {
              tmp___8 = strcasecmp((char const   *)initialization->u.constant.value.str.val, "NULL");
              if (tmp___8) {
                goto _L;
              } else {
                cur_arg_info->allow_null = (unsigned char)1;
              }
            } else {
              _L: /* CIL Label */ 
              if ((int const   )initialization->u.constant.type != 4) {
                if ((int const   )initialization->u.constant.type != 9) {
                  zend_error(1 << 6L, "Default value for parameters with array type hint can only be an array or NULL");
                } else {

                }
              } else {

              }
            }
          }
        } else {

        }
      } else {
        if ((int )class_type->u.constant.type == 10) {
          cur_arg_info->type_hint = (unsigned char)10;
          if ((int )op == 64) {
            if ((int const   )initialization->u.constant.type == 0) {
              cur_arg_info->allow_null = (unsigned char)1;
            } else {
              if ((int const   )initialization->u.constant.type == 8) {
                tmp___9 = strcasecmp((char const   *)initialization->u.constant.value.str.val, "NULL");
                if (tmp___9) {
                  zend_error(1 << 6L, "Default value for parameters with callable type hint can only be NULL");
                } else {
                  cur_arg_info->allow_null = (unsigned char)1;
                }
              } else {
                zend_error(1 << 6L, "Default value for parameters with callable type hint can only be NULL");
              }
            }
          } else {

          }
        } else {
          cur_arg_info->type_hint = (unsigned char)5;
          tmp___10 = zend_get_class_fetch_type((char const   *)class_type->u.constant.value.str.val, (unsigned int )class_type->u.constant.value.str.len);
          if (0 == tmp___10) {
            zend_resolve_class_name(class_type, opline->extended_value, 1);
          } else {

          }
          tmp___11 = (*zend_new_interned_string)((char const   *)class_type->u.constant.value.str.val, class_type->u.constant.value.str.len + 1, 1);
          class_type->u.constant.value.str.val = (char *)tmp___11;
          cur_arg_info->class_name = (char const   *)class_type->u.constant.value.str.val;
          cur_arg_info->class_name_len = (unsigned int )class_type->u.constant.value.str.len;
          if ((int )op == 64) {
            if ((int const   )initialization->u.constant.type == 0) {
              cur_arg_info->allow_null = (unsigned char)1;
            } else {
              if ((int const   )initialization->u.constant.type == 8) {
                tmp___12 = strcasecmp((char const   *)initialization->u.constant.value.str.val, "NULL");
                if (tmp___12) {
                  zend_error(1 << 6L, "Default value for parameters with a class type hint can only be NULL");
                } else {
                  cur_arg_info->allow_null = (unsigned char)1;
                }
              } else {
                zend_error(1 << 6L, "Default value for parameters with a class type hint can only be NULL");
              }
            }
          } else {

          }
        }
      }
    } else {

    }
  } else {

  }
  return;
}
}
int zend_do_begin_function_call(znode *function_name , zend_bool check_namespace ) 
{ zend_function *function ;
  char *lcname ;
  char *is_compound ;
  void *tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = memchr((void const   *)function_name->u.constant.value.str.val, '\\', (unsigned int )function_name->u.constant.value.str.len);
  is_compound = (char *)tmp;
  zend_resolve_non_class_name(function_name, check_namespace);
  if (check_namespace) {
    if (compiler_globals.current_namespace) {
      if (! is_compound) {
        zend_do_begin_dynamic_function_call(function_name, 1);
        return (1);
      } else {

      }
    } else {

    }
  } else {

  }
  tmp___0 = zend_str_tolower_dup((char const   *)function_name->u.constant.value.str.val, (unsigned int )function_name->u.constant.value.str.len);
  lcname = (char *)tmp___0;
  tmp___1 = zend_hash_find((HashTable const   *)compiler_globals.function_table, (char const   *)lcname, (unsigned int )(function_name->u.constant.value.str.len + 1), (void **)(& function));
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
    zend_do_begin_dynamic_function_call(function_name, 0);
    _efree((void *)lcname);
    return (1);
  } else {
    if (compiler_globals.compiler_options & (unsigned int )(1 << 2)) {
      if ((int )function->type == 1) {
        zend_do_begin_dynamic_function_call(function_name, 0);
        _efree((void *)lcname);
        return (1);
      } else {

      }
    } else {

    }
  }
  _efree((void *)function_name->u.constant.value.str.val);
  function_name->u.constant.value.str.val = lcname;
  zend_stack_push(& compiler_globals.function_call_stack, (void const   *)((void *)(& function)), (int )sizeof(zend_function *));
  zend_do_extended_fcall_begin();
  return (0);
}
}
void zend_do_begin_method_call(znode *left_bracket ) 
{ zend_op *last_op ;
  int last_op_number ;
  unsigned char *ptr ;
  int tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval name ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  int tmp___2 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  zend_op *opline ;
  zend_op *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  void __attribute__((__visibility__("default")))  *tmp___7 ;
  int tmp___8 ;

  {
  ptr = (unsigned char *)((void *)0);
  zend_do_end_variable_parse(left_bracket, 0, 0);
  zend_do_begin_variable_parse();
  tmp = get_next_op_number(compiler_globals.active_op_array);
  last_op_number = tmp - 1;
  last_op = (compiler_globals.active_op_array)->opcodes + last_op_number;
  if ((int )last_op->op2_type == 1) {
    if ((int )((compiler_globals.active_op_array)->literals + last_op->op2.constant)->constant.type == 6) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + last_op->op2.constant)->constant.value.str.len == sizeof("__clone") - 1U) {
        tmp___0 = zend_binary_strcasecmp((char const   *)((compiler_globals.active_op_array)->literals + last_op->op2.constant)->constant.value.str.val, (unsigned int )((compiler_globals.active_op_array)->literals + last_op->op2.constant)->constant.value.str.len, "__clone", sizeof("__clone") - 1U);
        if (tmp___0) {

        } else {
          zend_error(1 << 6L, "Cannot call __clone() method on objects - use \'clone $obj\' instead");
        }
      } else {

      }
    } else {

    }
  } else {

  }
  if ((int )last_op->opcode == 82) {
    if ((int )last_op->op2_type == 1) {
      name = ((compiler_globals.active_op_array)->literals + last_op->op2.constant)->constant;
      if ((unsigned int )name.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )name.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {

        } else {
          tmp___1 = _estrndup((char const   *)name.value.str.val, (unsigned int )name.value.str.len);
          name.value.str.val = (char *)tmp___1;
        }
      } else {
        tmp___1 = _estrndup((char const   *)name.value.str.val, (unsigned int )name.value.str.len);
        name.value.str.val = (char *)tmp___1;
      }
      while (1) {
        if (((compiler_globals.active_op_array)->literals + last_op->op2.constant)->cache_slot == (zend_uint )((compiler_globals.active_op_array)->last_cache_slot - 2)) {
          ((compiler_globals.active_op_array)->literals + last_op->op2.constant)->cache_slot = 4294967295U;
          (compiler_globals.active_op_array)->last_cache_slot -= 2;
        } else {

        }
        break;
      }
      tmp___2 = zend_add_func_name_literal(compiler_globals.active_op_array, (zval const   *)(& name));
      last_op->op2.constant = (unsigned int )tmp___2;
      while (1) {
        ((compiler_globals.active_op_array)->literals + last_op->op2.constant)->cache_slot = (unsigned int )(compiler_globals.active_op_array)->last_cache_slot;
        (compiler_globals.active_op_array)->last_cache_slot += 2;
        if ((compiler_globals.active_op_array)->fn_flags & 16U) {
          if ((compiler_globals.active_op_array)->run_time_cache) {
            tmp___3 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
            (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___3;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 2)) = (void *)0;
          } else {

          }
        } else {

        }
        break;
      }
    } else {

    }
    last_op->opcode = (unsigned char)112;
    last_op->result_type = (unsigned char )(1 << 3);
    left_bracket->u.constant.value.lval = 59L;
  } else {
    tmp___4 = get_next_op(compiler_globals.active_op_array);
    opline = tmp___4;
    opline->opcode = (unsigned char)59;
    opline->op1_type = (unsigned char )(1 << 3);
    if (left_bracket->op_type == 1) {
      opline->op2_type = (unsigned char)1;
      tmp___5 = zend_add_func_name_literal(compiler_globals.active_op_array, (zval const   *)(& left_bracket->u.constant));
      opline->op2.constant = (unsigned int )tmp___5;
      while (1) {
        tmp___6 = (compiler_globals.active_op_array)->last_cache_slot;
        ((compiler_globals.active_op_array)->last_cache_slot) ++;
        ((compiler_globals.active_op_array)->literals + opline->op2.constant)->cache_slot = (unsigned int )tmp___6;
        if ((compiler_globals.active_op_array)->fn_flags & 16U) {
          if ((compiler_globals.active_op_array)->run_time_cache) {
            tmp___7 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
            (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___7;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
          } else {

          }
        } else {

        }
        break;
      }
    } else {
      while (1) {
        opline->op2_type = (unsigned char )left_bracket->op_type;
        if (left_bracket->op_type == 1) {
          tmp___8 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& left_bracket->u.constant));
          opline->op2.constant = (unsigned int )tmp___8;
        } else {
          opline->op2 = left_bracket->u.op;
        }
        break;
      }
    }
  }
  zend_stack_push(& compiler_globals.function_call_stack, (void const   *)((void *)(& ptr)), (int )sizeof(zend_function *));
  zend_do_extended_fcall_begin();
  return;
}
}
void zend_do_clone(znode *result , znode const   *expr ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)110;
  while (1) {
    opline->op1_type = (unsigned char )expr->op_type;
    if (expr->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )expr->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_begin_dynamic_function_call(znode *function_name , int ns_call ) 
{ unsigned char *ptr ;
  zend_op *opline ;
  int tmp ;
  int tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;
  int tmp___5 ;

  {
  ptr = (unsigned char *)((void *)0);
  opline = get_next_op(compiler_globals.active_op_array);
  if (ns_call) {
    opline->opcode = (unsigned char)69;
    opline->op1_type = (unsigned char )(1 << 3);
    opline->op2_type = (unsigned char)1;
    tmp = zend_add_ns_func_name_literal(compiler_globals.active_op_array, (zval const   *)(& function_name->u.constant));
    opline->op2.constant = (unsigned int )tmp;
    while (1) {
      tmp___0 = (compiler_globals.active_op_array)->last_cache_slot;
      ((compiler_globals.active_op_array)->last_cache_slot) ++;
      ((compiler_globals.active_op_array)->literals + opline->op2.constant)->cache_slot = (unsigned int )tmp___0;
      if ((compiler_globals.active_op_array)->fn_flags & 16U) {
        if ((compiler_globals.active_op_array)->run_time_cache) {
          tmp___1 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
          (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___1;
          *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
        } else {

        }
      } else {

      }
      break;
    }
  } else {
    opline->opcode = (unsigned char)59;
    opline->op1_type = (unsigned char )(1 << 3);
    if (function_name->op_type == 1) {
      opline->op2_type = (unsigned char)1;
      tmp___2 = zend_add_func_name_literal(compiler_globals.active_op_array, (zval const   *)(& function_name->u.constant));
      opline->op2.constant = (unsigned int )tmp___2;
      while (1) {
        tmp___3 = (compiler_globals.active_op_array)->last_cache_slot;
        ((compiler_globals.active_op_array)->last_cache_slot) ++;
        ((compiler_globals.active_op_array)->literals + opline->op2.constant)->cache_slot = (unsigned int )tmp___3;
        if ((compiler_globals.active_op_array)->fn_flags & 16U) {
          if ((compiler_globals.active_op_array)->run_time_cache) {
            tmp___4 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
            (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___4;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
          } else {

          }
        } else {

        }
        break;
      }
    } else {
      while (1) {
        opline->op2_type = (unsigned char )function_name->op_type;
        if (function_name->op_type == 1) {
          tmp___5 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& function_name->u.constant));
          opline->op2.constant = (unsigned int )tmp___5;
        } else {
          opline->op2 = function_name->u.op;
        }
        break;
      }
    }
  }
  zend_stack_push(& compiler_globals.function_call_stack, (void const   *)((void *)(& ptr)), (int )sizeof(zend_function *));
  zend_do_extended_fcall_begin();
  return;
}
}
void zend_resolve_non_class_name(znode *element_name , zend_bool check_namespace ) 
{ znode tmp ;
  int len ;
  zval **ns ;
  char *lcname ;
  char *compound ;
  void *tmp___0 ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;

  {
  tmp___0 = memchr((void const   *)element_name->u.constant.value.str.val, '\\', (unsigned int )element_name->u.constant.value.str.len);
  compound = (char *)tmp___0;
  if ((int )*(element_name->u.constant.value.str.val + 0) == 92) {
    memmove((void *)element_name->u.constant.value.str.val, (void const   *)(element_name->u.constant.value.str.val + 1), (unsigned int )element_name->u.constant.value.str.len);
    (element_name->u.constant.value.str.len) --;
    return;
  } else {

  }
  if (! check_namespace) {
    return;
  } else {

  }
  if (compound) {
    if (compiler_globals.current_import) {
      len = compound - element_name->u.constant.value.str.val;
      tmp___1 = zend_str_tolower_dup((char const   *)element_name->u.constant.value.str.val, (unsigned int )len);
      lcname = (char *)tmp___1;
      tmp___2 = zend_hash_find((HashTable const   *)compiler_globals.current_import, (char const   *)lcname, (unsigned int )(len + 1), (void **)(& ns));
      if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {
        tmp.op_type = 1;
        tmp.u.constant = *(*ns);
        _zval_copy_ctor(& tmp.u.constant);
        len ++;
        element_name->u.constant.value.str.len -= len;
        memmove((void *)element_name->u.constant.value.str.val, (void const   *)(element_name->u.constant.value.str.val + len), (unsigned int )(element_name->u.constant.value.str.len + 1));
        zend_do_build_namespace_name(& tmp, & tmp, element_name);
        *element_name = tmp;
        _efree((void *)lcname);
        return;
      } else {

      }
      _efree((void *)lcname);
    } else {

    }
  } else {

  }
  if (compiler_globals.current_namespace) {
    tmp = *element_name;
    tmp.u.constant.value.str.len = (int )(((sizeof("\\") - 1U) + (unsigned int )element_name->u.constant.value.str.len) + (unsigned int )(compiler_globals.current_namespace)->value.str.len);
    tmp___3 = _emalloc((unsigned int )(tmp.u.constant.value.str.len + 1));
    tmp.u.constant.value.str.val = (char *)tmp___3;
    memcpy((void */* __restrict  */)tmp.u.constant.value.str.val, (void const   */* __restrict  */)(compiler_globals.current_namespace)->value.str.val, (unsigned int )(compiler_globals.current_namespace)->value.str.len);
    memcpy((void */* __restrict  */)(tmp.u.constant.value.str.val + (compiler_globals.current_namespace)->value.str.len), (void const   */* __restrict  */)"\\", sizeof("\\") - 1U);
    memcpy((void */* __restrict  */)(tmp.u.constant.value.str.val + (((unsigned int )(compiler_globals.current_namespace)->value.str.len + sizeof("\\")) - 1U)), (void const   */* __restrict  */)element_name->u.constant.value.str.val, (unsigned int )(element_name->u.constant.value.str.len + 1));
    if (element_name->u.constant.value.str.val) {
      if ((unsigned int )element_name->u.constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )element_name->u.constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {

        } else {
          _efree((void *)element_name->u.constant.value.str.val);
        }
      } else {
        _efree((void *)element_name->u.constant.value.str.val);
      }
    } else {

    }
    *element_name = tmp;
  } else {

  }
  return;
}
}
void zend_resolve_class_name(znode *class_name , ulong fetch_type , int check_ns_name ) 
{ char *compound ;
  char *lcname ;
  zval **ns ;
  znode tmp ;
  int len ;
  void *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  int tmp___2 ;
  char __attribute__((__visibility__("default")))  *tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  char __attribute__((__visibility__("default")))  *tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;

  {
  tmp___0 = memchr((void const   *)class_name->u.constant.value.str.val, '\\', (unsigned int )class_name->u.constant.value.str.len);
  compound = (char *)tmp___0;
  if (compound) {
    if ((int )*(class_name->u.constant.value.str.val + 0) == 92) {
      (class_name->u.constant.value.str.len) --;
      memmove((void *)class_name->u.constant.value.str.val, (void const   *)(class_name->u.constant.value.str.val + 1), (unsigned int )(class_name->u.constant.value.str.len + 1));
      tmp___1 = _erealloc((void *)class_name->u.constant.value.str.val, (unsigned int )(class_name->u.constant.value.str.len + 1), 0);
      class_name->u.constant.value.str.val = (char *)tmp___1;
      tmp___2 = zend_get_class_fetch_type((char const   *)class_name->u.constant.value.str.val, (unsigned int )class_name->u.constant.value.str.len);
      if (0 != tmp___2) {
        zend_error(1 << 6L, "\'\\%s\' is an invalid class name", class_name->u.constant.value.str.val);
      } else {

      }
    } else {
      if (compiler_globals.current_import) {
        len = compound - class_name->u.constant.value.str.val;
        tmp___3 = zend_str_tolower_dup((char const   *)class_name->u.constant.value.str.val, (unsigned int )len);
        lcname = (char *)tmp___3;
        tmp___4 = zend_hash_find((HashTable const   *)compiler_globals.current_import, (char const   *)lcname, (unsigned int )(len + 1), (void **)(& ns));
        if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
          tmp.op_type = 1;
          tmp.u.constant = *(*ns);
          _zval_copy_ctor(& tmp.u.constant);
          len ++;
          class_name->u.constant.value.str.len -= len;
          memmove((void *)class_name->u.constant.value.str.val, (void const   *)(class_name->u.constant.value.str.val + len), (unsigned int )(class_name->u.constant.value.str.len + 1));
          zend_do_build_namespace_name(& tmp, & tmp, class_name);
          *class_name = tmp;
          _efree((void *)lcname);
          return;
        } else {

        }
        _efree((void *)lcname);
      } else {

      }
      if (compiler_globals.current_namespace) {
        tmp.op_type = 1;
        tmp.u.constant = *(compiler_globals.current_namespace);
        _zval_copy_ctor(& tmp.u.constant);
        zend_do_build_namespace_name(& tmp, & tmp, class_name);
        *class_name = tmp;
      } else {

      }
    }
  } else {
    if (compiler_globals.current_import) {
      goto _L___0;
    } else {
      if (compiler_globals.current_namespace) {
        _L___0: /* CIL Label */ 
        tmp___5 = zend_str_tolower_dup((char const   *)class_name->u.constant.value.str.val, (unsigned int )class_name->u.constant.value.str.len);
        lcname = (char *)tmp___5;
        if (compiler_globals.current_import) {
          tmp___6 = zend_hash_find((HashTable const   *)compiler_globals.current_import, (char const   *)lcname, (unsigned int )(class_name->u.constant.value.str.len + 1), (void **)(& ns));
          if (tmp___6 == (int __attribute__((__visibility__("default")))  )0) {
            _zval_dtor(& class_name->u.constant);
            class_name->u.constant = *(*ns);
            _zval_copy_ctor(& class_name->u.constant);
          } else {
            goto _L;
          }
        } else {
          _L: /* CIL Label */ 
          if (compiler_globals.current_namespace) {
            tmp.op_type = 1;
            tmp.u.constant = *(compiler_globals.current_namespace);
            _zval_copy_ctor(& tmp.u.constant);
            zend_do_build_namespace_name(& tmp, & tmp, class_name);
            *class_name = tmp;
          } else {

          }
        }
        _efree((void *)lcname);
      } else {

      }
    }
  }
  return;
}
}
void zend_do_fetch_class(znode *result , znode *class_name ) 
{ long fetch_class_op_number ;
  zend_op *opline ;
  int tmp ;
  int fetch_type ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if (class_name->op_type == 1) {
    if ((int )class_name->u.constant.type == 6) {
      if (class_name->u.constant.value.str.len == 0) {
        _zval_dtor(& class_name->u.constant);
        zend_error(1 << 6L, "Cannot use \'namespace\' as a class name");
        return;
      } else {

      }
    } else {

    }
  } else {

  }
  tmp = get_next_op_number(compiler_globals.active_op_array);
  fetch_class_op_number = (long )tmp;
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)109;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->extended_value = 4UL;
  compiler_globals.catch_begin = fetch_class_op_number;
  if (class_name->op_type == 1) {
    fetch_type = zend_get_class_fetch_type((char const   *)class_name->u.constant.value.str.val, (unsigned int )class_name->u.constant.value.str.len);
    switch (fetch_type) {
    case 1: 
    case 2: 
    case 7: 
    opline->op2_type = (unsigned char )(1 << 3);
    opline->extended_value = (unsigned long )fetch_type;
    _zval_dtor(& class_name->u.constant);
    break;
    default: 
    zend_resolve_class_name(class_name, opline->extended_value, 0);
    opline->op2_type = (unsigned char)1;
    tmp___0 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& class_name->u.constant));
    opline->op2.constant = (unsigned int )tmp___0;
    break;
    }
  } else {
    while (1) {
      opline->op2_type = (unsigned char )class_name->op_type;
      if (class_name->op_type == 1) {
        tmp___1 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& class_name->u.constant));
        opline->op2.constant = (unsigned int )tmp___1;
      } else {
        opline->op2 = class_name->u.op;
      }
      break;
    }
  }
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  opline->result_type = (unsigned char )(1 << 2);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  result->EA = (unsigned int )opline->extended_value;
  return;
}
}
void zend_do_label(znode *label ) 
{ zend_label dest ;
  void __attribute__((__visibility__("default")))  *tmp ;
  int tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  if (! compiler_globals.context.labels) {
    tmp = _emalloc(sizeof(HashTable ));
    compiler_globals.context.labels = (HashTable *)tmp;
    _zend_hash_init(compiler_globals.context.labels, 4U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void *pDest ))((void *)0), (unsigned char)0);
  } else {

  }
  dest.brk_cont = compiler_globals.context.current_brk_cont;
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  dest.opline_num = (unsigned int )tmp___0;
  tmp___1 = _zend_hash_add_or_update(compiler_globals.context.labels, (char const   *)label->u.constant.value.str.val, (unsigned int )(label->u.constant.value.str.len + 1), (void *)((void **)(& dest)), sizeof(zend_label ), (void **)((void *)0), 1 << 1);
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
    zend_error(1 << 6L, "Label \'%s\' already defined", label->u.constant.value.str.val);
  } else {

  }
  _zval_dtor(& label->u.constant);
  return;
}
}
void zend_resolve_goto_label(zend_op_array *op_array , zend_op *opline , int pass2 ) 
{ zend_label *dest ;
  long current ;
  long distance ;
  zval *label ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;

  {
  if (pass2) {
    label = opline->op2.zv;
  } else {
    label = & (op_array->literals + opline->op2.constant)->constant;
  }
  if ((unsigned int )compiler_globals.context.labels == (unsigned int )((void *)0)) {
    goto _L;
  } else {
    tmp = zend_hash_find((HashTable const   *)compiler_globals.context.labels, (char const   *)label->value.str.val, (unsigned int )(label->value.str.len + 1), (void **)(& dest));
    if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
      _L: /* CIL Label */ 
      if (pass2) {
        compiler_globals.in_compilation = (unsigned char)1;
        compiler_globals.active_op_array = op_array;
        compiler_globals.zend_lineno = (int )opline->lineno;
        zend_error(1 << 6L, "\'goto\' to undefined label \'%s\'", label->value.str.val);
      } else {
        if (op_array->fn_flags & 16U) {
          (compiler_globals.context.backpatch_count) ++;
        } else {

        }
        return;
      }
    } else {

    }
  }
  opline->op1.opline_num = dest->opline_num;
  _zval_dtor(label);
  label->type = (unsigned char)0;
  current = (long )opline->extended_value;
  distance = 0L;
  while (current != (long )dest->brk_cont) {
    if (current == -1L) {
      if (pass2) {
        compiler_globals.in_compilation = (unsigned char)1;
        compiler_globals.active_op_array = op_array;
        compiler_globals.zend_lineno = (int )opline->lineno;
      } else {

      }
      zend_error(1 << 6L, "\'goto\' into loop or switch statement is disallowed");
    } else {

    }
    current = (long )(op_array->brk_cont_array + current)->parent;
    distance ++;
  }
  if (distance == 0L) {
    opline->opcode = (unsigned char)42;
    opline->extended_value = 0UL;
    opline->op2_type = (unsigned char )(1 << 3);
  } else {
    __z = label;
    __z->value.lval = distance;
    __z->type = (unsigned char)1;
  }
  if (pass2) {
    if (op_array->fn_flags & 16U) {
      (compiler_globals.context.backpatch_count) --;
    } else {

    }
  } else {

  }
  return;
}
}
void zend_do_goto(znode const   *label ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)100;
  opline->extended_value = (unsigned long )compiler_globals.context.current_brk_cont;
  opline->op1_type = (unsigned char )(1 << 3);
  while (1) {
    opline->op2_type = (unsigned char )label->op_type;
    if (label->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & label->u.constant);
      opline->op2.constant = (unsigned int )tmp___0;
    } else {
      opline->op2 = (union _znode_op )label->u.op;
    }
    break;
  }
  zend_resolve_goto_label(compiler_globals.active_op_array, opline, 0);
  return;
}
}
void zend_release_labels(void) 
{ zend_compiler_context *ctx ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  if (compiler_globals.context.labels) {
    zend_hash_destroy(compiler_globals.context.labels);
    _efree((void *)compiler_globals.context.labels);
  } else {

  }
  tmp = zend_stack_is_empty((zend_stack const   *)(& compiler_globals.context_stack));
  if (tmp) {

  } else {
    zend_stack_top((zend_stack const   *)(& compiler_globals.context_stack), (void **)(& ctx));
    compiler_globals.context = *ctx;
    zend_stack_del_top(& compiler_globals.context_stack);
  }
  return;
}
}
void zend_do_build_full_name(znode *result , znode *prefix , znode *name , int is_class_member ) 
{ zend_uint length ;
  void __attribute__((__visibility__("default")))  *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;

  {
  if (! result) {
    result = prefix;
  } else {
    *result = *prefix;
  }
  if (is_class_member) {
    length = ((sizeof("::") - 1U) + (unsigned int )result->u.constant.value.str.len) + (unsigned int )name->u.constant.value.str.len;
    tmp = _erealloc((void *)result->u.constant.value.str.val, length + 1U, 0);
    result->u.constant.value.str.val = (char *)tmp;
    memcpy((void */* __restrict  */)(result->u.constant.value.str.val + result->u.constant.value.str.len), (void const   */* __restrict  */)"::", sizeof("::") - 1U);
    memcpy((void */* __restrict  */)(result->u.constant.value.str.val + (((unsigned int )result->u.constant.value.str.len + sizeof("::")) - 1U)), (void const   */* __restrict  */)name->u.constant.value.str.val, (unsigned int )(name->u.constant.value.str.len + 1));
    if (name->u.constant.value.str.val) {
      if ((unsigned int )name->u.constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )name->u.constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {

        } else {
          _efree((void *)name->u.constant.value.str.val);
        }
      } else {
        _efree((void *)name->u.constant.value.str.val);
      }
    } else {

    }
    result->u.constant.value.str.len = (int )length;
  } else {
    length = ((sizeof("\\") - 1U) + (unsigned int )result->u.constant.value.str.len) + (unsigned int )name->u.constant.value.str.len;
    tmp___0 = _erealloc((void *)result->u.constant.value.str.val, length + 1U, 0);
    result->u.constant.value.str.val = (char *)tmp___0;
    memcpy((void */* __restrict  */)(result->u.constant.value.str.val + result->u.constant.value.str.len), (void const   */* __restrict  */)"\\", sizeof("\\") - 1U);
    memcpy((void */* __restrict  */)(result->u.constant.value.str.val + (((unsigned int )result->u.constant.value.str.len + sizeof("\\")) - 1U)), (void const   */* __restrict  */)name->u.constant.value.str.val, (unsigned int )(name->u.constant.value.str.len + 1));
    if (name->u.constant.value.str.val) {
      if ((unsigned int )name->u.constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )name->u.constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {

        } else {
          _efree((void *)name->u.constant.value.str.val);
        }
      } else {
        _efree((void *)name->u.constant.value.str.val);
      }
    } else {

    }
    result->u.constant.value.str.len = (int )length;
  }
  return;
}
}
int zend_do_begin_class_member_function_call(znode *class_name , znode *method_name ) 
{ znode class_node ;
  unsigned char *ptr ;
  zend_op *opline ;
  char *lcname ;
  char __attribute__((__visibility__("default")))  *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  void __attribute__((__visibility__("default")))  *tmp___6 ;
  void __attribute__((__visibility__("default")))  *tmp___7 ;
  int tmp___8 ;

  {
  ptr = (unsigned char *)((void *)0);
  if (method_name->op_type == 1) {
    tmp = zend_str_tolower_dup((char const   *)method_name->u.constant.value.str.val, (unsigned int )method_name->u.constant.value.str.len);
    lcname = (char *)tmp;
    if (sizeof("__construct") - 1U == (unsigned int )method_name->u.constant.value.str.len) {
      tmp___0 = memcmp((void const   *)lcname, (void const   *)"__construct", sizeof("__construct") - 1U);
      if (tmp___0 == 0) {
        _zval_dtor(& method_name->u.constant);
        method_name->op_type = 1 << 3;
      } else {

      }
    } else {

    }
    _efree((void *)lcname);
  } else {

  }
  if (class_name->op_type == 1) {
    tmp___1 = zend_get_class_fetch_type((char const   *)class_name->u.constant.value.str.val, (unsigned int )class_name->u.constant.value.str.len);
    if (0 == tmp___1) {
      zend_resolve_class_name(class_name, 4UL, 1);
      class_node = *class_name;
      opline = get_next_op(compiler_globals.active_op_array);
    } else {
      zend_do_fetch_class(& class_node, class_name);
      opline = get_next_op(compiler_globals.active_op_array);
      opline->extended_value = (unsigned long )class_node.EA;
    }
  } else {
    zend_do_fetch_class(& class_node, class_name);
    opline = get_next_op(compiler_globals.active_op_array);
    opline->extended_value = (unsigned long )class_node.EA;
  }
  opline->opcode = (unsigned char)113;
  if (class_node.op_type == 1) {
    opline->op1_type = (unsigned char)1;
    tmp___2 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& class_node.u.constant));
    opline->op1.constant = (unsigned int )tmp___2;
  } else {
    while (1) {
      opline->op1_type = (unsigned char )class_node.op_type;
      if (class_node.op_type == 1) {
        tmp___3 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& class_node.u.constant));
        opline->op1.constant = (unsigned int )tmp___3;
      } else {
        opline->op1 = class_node.u.op;
      }
      break;
    }
  }
  if (method_name->op_type == 1) {
    opline->op2_type = (unsigned char)1;
    tmp___4 = zend_add_func_name_literal(compiler_globals.active_op_array, (zval const   *)(& method_name->u.constant));
    opline->op2.constant = (unsigned int )tmp___4;
    if ((int )opline->op1_type == 1) {
      while (1) {
        tmp___5 = (compiler_globals.active_op_array)->last_cache_slot;
        ((compiler_globals.active_op_array)->last_cache_slot) ++;
        ((compiler_globals.active_op_array)->literals + opline->op2.constant)->cache_slot = (unsigned int )tmp___5;
        if ((compiler_globals.active_op_array)->fn_flags & 16U) {
          if ((compiler_globals.active_op_array)->run_time_cache) {
            tmp___6 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
            (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___6;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
          } else {

          }
        } else {

        }
        break;
      }
    } else {
      while (1) {
        ((compiler_globals.active_op_array)->literals + opline->op2.constant)->cache_slot = (unsigned int )(compiler_globals.active_op_array)->last_cache_slot;
        (compiler_globals.active_op_array)->last_cache_slot += 2;
        if ((compiler_globals.active_op_array)->fn_flags & 16U) {
          if ((compiler_globals.active_op_array)->run_time_cache) {
            tmp___7 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
            (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___7;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 2)) = (void *)0;
          } else {

          }
        } else {

        }
        break;
      }
    }
  } else {
    while (1) {
      opline->op2_type = (unsigned char )method_name->op_type;
      if (method_name->op_type == 1) {
        tmp___8 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& method_name->u.constant));
        opline->op2.constant = (unsigned int )tmp___8;
      } else {
        opline->op2 = method_name->u.op;
      }
      break;
    }
  }
  zend_stack_push(& compiler_globals.function_call_stack, (void const   *)((void *)(& ptr)), (int )sizeof(zend_function *));
  zend_do_extended_fcall_begin();
  return (1);
}
}
void zend_do_end_function_call(znode *function_name , znode *result , znode const   *argument_list , int is_method , int is_dynamic_fcall ) 
{ zend_op *opline ;
  int tmp ;
  ulong __attribute__((__visibility__("default")))  tmp___0 ;
  int tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;

  {
  if (is_method) {
    if (function_name) {
      if (function_name->op_type == 1 << 3) {
        if (argument_list->u.constant.value.lval != 0L) {
          zend_error(1 << 1L, "Clone method does not require arguments");
        } else {

        }
        opline = (compiler_globals.active_op_array)->opcodes + function_name->u.constant.value.lval;
      } else {
        goto _L___0;
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0: /* CIL Label */ 
    _L: /* CIL Label */ 
    opline = get_next_op(compiler_globals.active_op_array);
    if (! is_method) {
      if (! is_dynamic_fcall) {
        if (function_name->op_type == 1) {
          opline->opcode = (unsigned char)60;
          while (1) {
            opline->op1_type = (unsigned char )function_name->op_type;
            if (function_name->op_type == 1) {
              tmp = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& function_name->u.constant));
              opline->op1.constant = (unsigned int )tmp;
            } else {
              opline->op1 = function_name->u.op;
            }
            break;
          }
          while (1) {
            if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
              if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
                ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val - sizeof(Bucket )))->h;
              } else {
                tmp___0 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
                ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___0;
              }
            } else {
              tmp___0 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
              ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___0;
            }
            break;
          }
          while (1) {
            tmp___1 = (compiler_globals.active_op_array)->last_cache_slot;
            ((compiler_globals.active_op_array)->last_cache_slot) ++;
            ((compiler_globals.active_op_array)->literals + opline->op1.constant)->cache_slot = (unsigned int )tmp___1;
            if ((compiler_globals.active_op_array)->fn_flags & 16U) {
              if ((compiler_globals.active_op_array)->run_time_cache) {
                tmp___2 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
                (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___2;
                *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
              } else {

              }
            } else {

            }
            break;
          }
        } else {
          opline->opcode = (unsigned char)61;
          opline->op1_type = (unsigned char )(1 << 3);
        }
      } else {
        opline->opcode = (unsigned char)61;
        opline->op1_type = (unsigned char )(1 << 3);
      }
    } else {
      opline->opcode = (unsigned char)61;
      opline->op1_type = (unsigned char )(1 << 3);
    }
  }
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  opline->result_type = (unsigned char )(1 << 2);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  zend_stack_del_top(& compiler_globals.function_call_stack);
  opline->extended_value = (unsigned long )argument_list->u.constant.value.lval;
  return;
}
}
void zend_do_pass_param(znode *param , zend_uchar op , int offset ) 
{ zend_op *opline ;
  int original_op ;
  zend_function **function_ptr_ptr ;
  zend_function *function_ptr ;
  int send_by_reference ;
  int send_function ;
  unsigned int tmp ;
  zend_bool tmp___0 ;
  unsigned int tmp___1 ;
  unsigned int tmp___2 ;
  unsigned int tmp___3 ;
  zend_bool tmp___4 ;
  int tmp___5 ;

  {
  original_op = (int )op;
  send_function = 0;
  zend_stack_top((zend_stack const   *)(& compiler_globals.function_call_stack), (void **)(& function_ptr_ptr));
  function_ptr = *function_ptr_ptr;
  if (original_op == 67) {
    if (function_ptr) {
      if (function_ptr->common.function_name) {
        if ((int )function_ptr->common.type == 2) {
          if (function_ptr) {
            if (function_ptr->common.arg_info) {
              if ((unsigned int )offset <= function_ptr->common.num_args) {
                tmp = (unsigned int )((int )(function_ptr->common.arg_info + ((unsigned int )offset - 1U))->pass_by_reference & 3);
              } else {
                tmp = function_ptr->common.fn_flags & 50331648U;
              }
            } else {
              tmp = function_ptr->common.fn_flags & 50331648U;
            }
            if (tmp) {
              zend_error(1 << 6L, "Call-time pass-by-reference has been removed");
            } else {
              zend_error(1 << 6L, "Call-time pass-by-reference has been removed; If you would like to pass argument by reference, modify the declaration of %s().", function_ptr->common.function_name);
            }
          } else {
            zend_error(1 << 6L, "Call-time pass-by-reference has been removed; If you would like to pass argument by reference, modify the declaration of %s().", function_ptr->common.function_name);
          }
        } else {
          zend_error(1 << 6L, "Call-time pass-by-reference has been removed");
        }
      } else {
        zend_error(1 << 6L, "Call-time pass-by-reference has been removed");
      }
    } else {
      zend_error(1 << 6L, "Call-time pass-by-reference has been removed");
    }
    return;
  } else {

  }
  if (function_ptr) {
    if (function_ptr) {
      if (function_ptr->common.arg_info) {
        if ((unsigned int )offset <= function_ptr->common.num_args) {
          tmp___3 = (unsigned int )((int )(function_ptr->common.arg_info + ((unsigned int )offset - 1U))->pass_by_reference & 2);
        } else {
          tmp___3 = function_ptr->common.fn_flags & 33554432U;
        }
      } else {
        tmp___3 = function_ptr->common.fn_flags & 33554432U;
      }
      if (tmp___3) {
        if (param->op_type & ((1 << 2) | (1 << 4))) {
          if (original_op != 65) {
            send_by_reference = 1;
            if ((int )op == 66) {
              tmp___0 = zend_is_function_or_method_call((znode const   *)param);
              if (tmp___0) {
                op = (unsigned char)106;
                send_function = (1 << 2) | (1 << 3);
              } else {

              }
            } else {

            }
          } else {
            op = (unsigned char)65;
            send_by_reference = 0;
          }
        } else {
          op = (unsigned char)65;
          send_by_reference = 0;
        }
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      if (function_ptr) {
        if (function_ptr->common.arg_info) {
          if ((unsigned int )offset <= function_ptr->common.num_args) {
            tmp___2 = (unsigned int )((int )(function_ptr->common.arg_info + ((unsigned int )offset - 1U))->pass_by_reference & 3);
          } else {
            tmp___2 = function_ptr->common.fn_flags & 50331648U;
          }
        } else {
          tmp___2 = function_ptr->common.fn_flags & 50331648U;
        }
        if (tmp___2) {
          send_by_reference = 1;
        } else {
          send_by_reference = 0;
        }
      } else {
        send_by_reference = 0;
      }
    }
  } else {
    send_by_reference = 0;
  }
  if ((int )op == 66) {
    tmp___4 = zend_is_function_or_method_call((znode const   *)param);
    if (tmp___4) {
      op = (unsigned char)106;
      send_function = 1 << 2;
    } else {
      goto _L___0;
    }
  } else {
    _L___0: /* CIL Label */ 
    if ((int )op == 65) {
      if (param->op_type & ((1 << 2) | (1 << 4))) {
        op = (unsigned char)106;
      } else {

      }
    } else {

    }
  }
  if ((int )op != 106) {
    if (send_by_reference == 1) {
      switch (param->op_type) {
      case 1 << 2: 
      case 1 << 4: 
      op = (unsigned char)67;
      break;
      default: 
      zend_error(1 << 6L, "Only variables can be passed by reference");
      break;
      }
    } else {

    }
  } else {

  }
  if (original_op == 66) {
    switch ((int )op) {
    case 106: 
    zend_do_end_variable_parse(param, 0, 0);
    break;
    case 66: 
    if (function_ptr) {
      zend_do_end_variable_parse(param, 0, 0);
    } else {
      zend_do_end_variable_parse(param, 5, offset);
    }
    break;
    case 67: 
    zend_do_end_variable_parse(param, 1, 0);
    break;
    }
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  if ((int )op == 106) {
    if (function_ptr) {
      opline->extended_value = (unsigned long )(((1 << 1) | send_by_reference) | send_function);
    } else {
      opline->extended_value = (unsigned long )send_function;
    }
  } else {
    if (function_ptr) {
      opline->extended_value = 60UL;
    } else {
      opline->extended_value = 61UL;
    }
  }
  opline->opcode = op;
  while (1) {
    opline->op1_type = (unsigned char )param->op_type;
    if (param->op_type == 1) {
      tmp___5 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& param->u.constant));
      opline->op1.constant = (unsigned int )tmp___5;
    } else {
      opline->op1 = param->u.op;
    }
    break;
  }
  opline->op2.opline_num = (unsigned int )offset;
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
static int generate_free_switch_expr(zend_switch_entry const   *switch_entry ) 
{ zend_op *opline ;
  int tmp ;

  {
  if (switch_entry->cond.op_type != (int const   )(1 << 2)) {
    if (switch_entry->cond.op_type != (int const   )(1 << 1)) {
      return (switch_entry->cond.op_type == (int const   )(1 << 3));
    } else {

    }
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  if (switch_entry->cond.op_type == (int const   )(1 << 1)) {
    opline->opcode = (unsigned char)70;
  } else {
    opline->opcode = (unsigned char)49;
  }
  while (1) {
    opline->op1_type = (unsigned char )switch_entry->cond.op_type;
    if (switch_entry->cond.op_type == 1) {
      tmp = zend_add_literal(compiler_globals.active_op_array, & switch_entry->cond.u.constant);
      opline->op1.constant = (unsigned int )tmp;
    } else {
      opline->op1 = (union _znode_op )switch_entry->cond.u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->extended_value = 0UL;
  return (0);
}
}
static int generate_free_foreach_copy(zend_op const   *foreach_copy ) 
{ zend_op *opline ;

  {
  if ((int const   )foreach_copy->result_type == (int const   )(1 << 3)) {
    if ((int const   )foreach_copy->op1_type == (int const   )(1 << 3)) {
      return (1);
    } else {

    }
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  if ((int const   )foreach_copy->result_type == (int const   )(1 << 1)) {
    opline->opcode = (unsigned char)70;
  } else {
    opline->opcode = (unsigned char)49;
  }
  while (1) {
    opline->op1_type = (unsigned char )foreach_copy->result_type;
    opline->op1 = (union _znode_op )foreach_copy->result;
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->extended_value = 1UL;
  if ((int const   )foreach_copy->op1_type != (int const   )(1 << 3)) {
    opline = get_next_op(compiler_globals.active_op_array);
    if ((int const   )foreach_copy->op1_type == (int const   )(1 << 1)) {
      opline->opcode = (unsigned char)70;
    } else {
      opline->opcode = (unsigned char)49;
    }
    while (1) {
      opline->op1_type = (unsigned char )foreach_copy->op1_type;
      opline->op1 = (union _znode_op )foreach_copy->op1;
      break;
    }
    opline->op2_type = (unsigned char )(1 << 3);
    opline->extended_value = 0UL;
  } else {

  }
  return (0);
}
}
void zend_do_return(znode *expr , int do_end_vparse ) 
{ zend_op *opline ;
  int start_op_number ;
  int end_op_number ;
  zend_bool tmp ;
  int tmp___0 ;
  zend_bool tmp___1 ;
  zval _c ;
  int tmp___2 ;

  {
  if (do_end_vparse) {
    if ((compiler_globals.active_op_array)->fn_flags & 67108864U) {
      tmp = zend_is_function_or_method_call((znode const   *)expr);
      if (tmp) {
        zend_do_end_variable_parse(expr, 0, 0);
      } else {
        zend_do_end_variable_parse(expr, 1, 0);
      }
    } else {
      zend_do_end_variable_parse(expr, 0, 0);
    }
  } else {

  }
  start_op_number = get_next_op_number(compiler_globals.active_op_array);
  zend_stack_apply(& compiler_globals.switch_cond_stack, 1, (int (*)(void *element ))(& generate_free_switch_expr));
  zend_stack_apply(& compiler_globals.foreach_copy_stack, 1, (int (*)(void *element ))(& generate_free_foreach_copy));
  end_op_number = get_next_op_number(compiler_globals.active_op_array);
  while (start_op_number < end_op_number) {
    ((compiler_globals.active_op_array)->opcodes + start_op_number)->extended_value |= (unsigned long )(1 << 2);
    start_op_number ++;
  }
  opline = get_next_op(compiler_globals.active_op_array);
  if ((compiler_globals.active_op_array)->fn_flags & 67108864U) {
    opline->opcode = (unsigned char)111;
  } else {
    opline->opcode = (unsigned char)62;
  }
  if (expr) {
    while (1) {
      opline->op1_type = (unsigned char )expr->op_type;
      if (expr->op_type == 1) {
        tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& expr->u.constant));
        opline->op1.constant = (unsigned int )tmp___0;
      } else {
        opline->op1 = expr->u.op;
      }
      break;
    }
    if (do_end_vparse) {
      tmp___1 = zend_is_function_or_method_call((znode const   *)expr);
      if (tmp___1) {
        opline->extended_value = 1UL;
      } else {

      }
    } else {

    }
  } else {
    opline->op1_type = (unsigned char)1;
    while (1) {
      _c = (struct _zval_struct )zval_used_for_init;
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c));
      opline->op1.constant = (unsigned int )tmp___2;
      break;
    }
  }
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
static int zend_add_try_element(zend_uint try_op ) 
{ int try_catch_offset ;
  int tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;

  {
  tmp = (compiler_globals.active_op_array)->last_try_catch;
  ((compiler_globals.active_op_array)->last_try_catch) ++;
  try_catch_offset = tmp;
  tmp___0 = _erealloc((void *)(compiler_globals.active_op_array)->try_catch_array, sizeof(zend_try_catch_element ) * (unsigned int )(compiler_globals.active_op_array)->last_try_catch, 0);
  (compiler_globals.active_op_array)->try_catch_array = (zend_try_catch_element *)tmp___0;
  ((compiler_globals.active_op_array)->try_catch_array + try_catch_offset)->try_op = try_op;
  return (try_catch_offset);
}
}
static void zend_add_catch_element(int offset , zend_uint catch_op ) 
{ 

  {
  ((compiler_globals.active_op_array)->try_catch_array + offset)->catch_op = catch_op;
  return;
}
}
void zend_do_first_catch(znode *open_parentheses ) 
{ int tmp ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  open_parentheses->u.op.opline_num = (unsigned int )tmp;
  return;
}
}
void zend_initialize_try_catch_element(znode const   *try_token ) 
{ int jmp_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  zend_llist jmp_list ;
  zend_llist *jmp_list_ptr ;
  int tmp___1 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  jmp_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)42;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  zend_llist_init(& jmp_list, sizeof(int ), (void (*)(void * ))((void *)0), (unsigned char)0);
  zend_stack_push(& compiler_globals.bp_stack, (void const   *)((void *)(& jmp_list)), (int )sizeof(zend_llist ));
  zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& jmp_list_ptr));
  zend_llist_add_element(jmp_list_ptr, (void *)(& jmp_op_number));
  tmp___1 = get_next_op_number(compiler_globals.active_op_array);
  zend_add_catch_element((int )try_token->u.op.opline_num, (unsigned int )tmp___1);
  return;
}
}
void zend_do_mark_last_catch(znode const   *first_catch , znode const   *last_additional_catch ) 
{ int tmp ;
  int tmp___0 ;

  {
  ((compiler_globals.active_op_array)->last) --;
  zend_do_if_end();
  if (last_additional_catch->u.op.opline_num == 4294967295U) {
    ((compiler_globals.active_op_array)->opcodes + first_catch->u.op.opline_num)->result.num = 1U;
    tmp = get_next_op_number(compiler_globals.active_op_array);
    ((compiler_globals.active_op_array)->opcodes + first_catch->u.op.opline_num)->extended_value = (unsigned long )tmp;
  } else {
    ((compiler_globals.active_op_array)->opcodes + last_additional_catch->u.op.opline_num)->result.num = 1U;
    tmp___0 = get_next_op_number(compiler_globals.active_op_array);
    ((compiler_globals.active_op_array)->opcodes + last_additional_catch->u.op.opline_num)->extended_value = (unsigned long )tmp___0;
  }
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_do_try(znode *try_token ) 
{ int tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  tmp___0 = zend_add_try_element((unsigned int )tmp);
  try_token->u.op.opline_num = (unsigned int )tmp___0;
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_begin_catch(znode *try_token , znode *class_name , znode *catch_var , znode *first_catch ) 
{ long catch_op_number ;
  zend_op *opline ;
  znode catch_class ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  if (class_name->op_type == 1) {
    tmp = zend_get_class_fetch_type((char const   *)class_name->u.constant.value.str.val, (unsigned int )class_name->u.constant.value.str.len);
    if (0 == tmp) {
      zend_resolve_class_name(class_name, 4UL, 1);
      catch_class = *class_name;
    } else {
      zend_error(1 << 6L, "Bad class name in the catch statement");
    }
  } else {
    zend_error(1 << 6L, "Bad class name in the catch statement");
  }
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  catch_op_number = (long )tmp___0;
  if (first_catch) {
    first_catch->u.op.opline_num = (unsigned int )catch_op_number;
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)107;
  opline->op1_type = (unsigned char)1;
  tmp___1 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& catch_class.u.constant));
  opline->op1.constant = (unsigned int )tmp___1;
  opline->op2_type = (unsigned char )(1 << 4);
  tmp___2 = lookup_cv(compiler_globals.active_op_array, catch_var->u.constant.value.str.val, catch_var->u.constant.value.str.len, 0UL);
  opline->op2.var = (unsigned int )tmp___2;
  catch_var->u.constant.value.str.val = (char *)((compiler_globals.active_op_array)->vars + opline->op2.var)->name;
  opline->result.num = 0U;
  try_token->u.op.opline_num = (unsigned int )catch_op_number;
  return;
}
}
void zend_do_end_catch(znode const   *try_token ) 
{ int jmp_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  zend_llist *jmp_list_ptr ;
  int tmp___1 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  jmp_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)42;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& jmp_list_ptr));
  zend_llist_add_element(jmp_list_ptr, (void *)(& jmp_op_number));
  tmp___1 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + try_token->u.op.opline_num)->extended_value = (unsigned long )tmp___1;
  return;
}
}
void zend_do_throw(znode const   *expr ) 
{ zend_op *opline ;
  int tmp ;

  {
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)108;
  while (1) {
    opline->op1_type = (unsigned char )expr->op_type;
    if (expr->op_type == 1) {
      tmp = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
      opline->op1.constant = (unsigned int )tmp;
    } else {
      opline->op1 = (union _znode_op )expr->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void __attribute__((__visibility__("default")))  function_add_ref(zend_function *function ) 
{ zend_op_array *op_array ;
  HashTable *static_variables ;
  zval *tmp_zval ;
  void __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  if ((int )function->type == 2) {
    op_array = & function->op_array;
    (*(op_array->refcount)) ++;
    if (op_array->static_variables) {
      static_variables = op_array->static_variables;
      tmp = _emalloc(sizeof(HashTable ));
      op_array->static_variables = (HashTable *)tmp;
      tmp___0 = zend_hash_num_elements((HashTable const   *)static_variables);
      _zend_hash_init(op_array->static_variables, (unsigned int )tmp___0, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void * ))(& _zval_ptr_dtor), (unsigned char)0);
      zend_hash_copy(op_array->static_variables, static_variables, (void (*)(void *pElement ))(& zval_add_ref), (void *)(& tmp_zval), sizeof(zval *));
    } else {

    }
    op_array->run_time_cache = (void **)((void *)0);
  } else {

  }
  return;
}
}
static void do_inherit_parent_constructor(zend_class_entry *ce ) 
{ zend_function *function ;
  char *lc_class_name ;
  char *lc_parent_class_name ;
  char __attribute__((__visibility__("default")))  *tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  if (! ce->parent) {
    return;
  } else {

  }
  ce->create_object = (ce->parent)->create_object;
  if (! ce->get_iterator) {
    ce->get_iterator = (ce->parent)->get_iterator;
  } else {

  }
  if (! ce->iterator_funcs.funcs) {
    ce->iterator_funcs.funcs = (ce->parent)->iterator_funcs.funcs;
  } else {

  }
  if (! ce->__get) {
    ce->__get = (ce->parent)->__get;
  } else {

  }
  if (! ce->__set) {
    ce->__set = (ce->parent)->__set;
  } else {

  }
  if (! ce->__unset) {
    ce->__unset = (ce->parent)->__unset;
  } else {

  }
  if (! ce->__isset) {
    ce->__isset = (ce->parent)->__isset;
  } else {

  }
  if (! ce->__call) {
    ce->__call = (ce->parent)->__call;
  } else {

  }
  if (! ce->__callstatic) {
    ce->__callstatic = (ce->parent)->__callstatic;
  } else {

  }
  if (! ce->__tostring) {
    ce->__tostring = (ce->parent)->__tostring;
  } else {

  }
  if (! ce->clone) {
    ce->clone = (ce->parent)->clone;
  } else {

  }
  if (! ce->serialize) {
    ce->serialize = (ce->parent)->serialize;
  } else {

  }
  if (! ce->unserialize) {
    ce->unserialize = (ce->parent)->unserialize;
  } else {

  }
  if (! ce->destructor) {
    ce->destructor = (ce->parent)->destructor;
  } else {

  }
  if (ce->constructor) {
    if ((ce->parent)->constructor) {
      if (((ce->parent)->constructor)->common.fn_flags & 4U) {
        zend_error(1, "Cannot override final %s::%s() with %s::%s()", (ce->parent)->name, ((ce->parent)->constructor)->common.function_name, ce->name, (ce->constructor)->common.function_name);
      } else {

      }
    } else {

    }
    return;
  } else {

  }
  tmp___4 = zend_hash_find((HashTable const   *)(& (ce->parent)->function_table), "__construct", sizeof("__construct"), (void **)(& function));
  if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
    _zend_hash_add_or_update(& ce->function_table, "__construct", sizeof("__construct"), (void *)function, sizeof(zend_function ), (void **)((void *)0), 1);
    function_add_ref(function);
  } else {
    tmp = zend_str_tolower_dup(ce->name, ce->name_length);
    lc_class_name = (char *)tmp;
    tmp___3 = zend_hash_exists((HashTable const   *)(& ce->function_table), (char const   *)lc_class_name, ce->name_length + 1U);
    if (tmp___3) {

    } else {
      tmp___0 = zend_str_tolower_dup((ce->parent)->name, (ce->parent)->name_length);
      lc_parent_class_name = (char *)tmp___0;
      tmp___1 = zend_hash_exists((HashTable const   *)(& ce->function_table), (char const   *)lc_parent_class_name, (ce->parent)->name_length + 1U);
      if (tmp___1) {

      } else {
        tmp___2 = zend_hash_find((HashTable const   *)(& (ce->parent)->function_table), (char const   *)lc_parent_class_name, (ce->parent)->name_length + 1U, (void **)(& function));
        if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {
          if (function->common.fn_flags & 8192U) {
            _zend_hash_add_or_update(& ce->function_table, (char const   *)lc_parent_class_name, (ce->parent)->name_length + 1U, (void *)function, sizeof(zend_function ), (void **)((void *)0), 1);
            function_add_ref(function);
          } else {

          }
        } else {

        }
      }
      _efree((void *)lc_parent_class_name);
    }
    _efree((void *)lc_class_name);
  }
  ce->constructor = (ce->parent)->constructor;
  return;
}
}
char *zend_visibility_string(zend_uint fn_flags ) 
{ 

  {
  if (fn_flags & 1024U) {
    return ((char *)"private");
  } else {

  }
  if (fn_flags & 512U) {
    return ((char *)"protected");
  } else {

  }
  if (fn_flags & 256U) {
    return ((char *)"public");
  } else {

  }
  return ((char *)"");
}
}
static void do_inherit_method(zend_function *function ) 
{ 

  {
  function_add_ref(function);
  return;
}
}
static zend_bool zend_do_perform_implementation_check(zend_function const   *fe , zend_function const   *proto ) 
{ zend_uint i ;
  int tmp ;
  int tmp___0 ;
  char const   *colon ;
  zend_class_entry **fe_ce ;
  zend_class_entry **proto_ce ;
  int found ;
  int found2 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  void *tmp___3 ;
  char *tmp___4 ;
  void const   *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
  if (! proto) {
    return ((unsigned char)1);
  } else {
    if (! proto->common.arg_info) {
      if ((int const   )proto->common.type != 2) {
        return ((unsigned char)1);
      } else {

      }
    } else {

    }
  }
  if (fe->common.fn_flags & 8192U) {
    if (((proto->common.scope)->ce_flags & 128U) == 0U) {
      if ((proto->common.fn_flags & 2U) == 0U) {
        return ((unsigned char)1);
      } else {

      }
    } else {

    }
  } else {

  }
  if (proto->common.required_num_args < fe->common.required_num_args) {
    return ((unsigned char)0);
  } else {
    if (proto->common.num_args > fe->common.num_args) {
      return ((unsigned char)0);
    } else {

    }
  }
  if ((int const   )fe->common.type != 2) {
    if ((proto->common.fn_flags & 16777216U) != 0U) {
      if ((fe->common.fn_flags & 16777216U) == 0U) {
        return ((unsigned char)0);
      } else {

      }
    } else {

    }
  } else {

  }
  if (proto->common.fn_flags & 67108864U) {
    if (! (fe->common.fn_flags & 67108864U)) {
      return ((unsigned char)0);
    } else {

    }
  } else {

  }
  i = 0U;
  while (i < (zend_uint )proto->common.num_args) {
    if ((fe->common.arg_info + i)->class_name) {
      tmp = 1;
    } else {
      tmp = 0;
    }
    if ((proto->common.arg_info + i)->class_name) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
    if (tmp ^ tmp___0) {
      return ((unsigned char)0);
    } else {

    }
    if ((fe->common.arg_info + i)->class_name) {
      tmp___7 = strcasecmp((fe->common.arg_info + i)->class_name, (proto->common.arg_info + i)->class_name);
      if (tmp___7 != 0) {
        if ((int const   )fe->common.type != 2) {
          return ((unsigned char)0);
        } else {
          tmp___4 = __builtin_strchr((char *)(proto->common.arg_info + i)->class_name, '\\');
          if ((unsigned int )tmp___4 != (unsigned int )((void *)0)) {
            goto _L;
          } else {
            tmp___5 = zend_memrchr((void const   *)(fe->common.arg_info + i)->class_name, '\\', (fe->common.arg_info + i)->class_name_len);
            colon = (char const   *)tmp___5;
            if ((unsigned int )colon == (unsigned int )((void *)0)) {
              goto _L;
            } else {
              tmp___6 = strcasecmp(colon + 1, (proto->common.arg_info + i)->class_name);
              if (tmp___6 != 0) {
                _L: /* CIL Label */ 
                tmp___1 = zend_lookup_class((fe->common.arg_info + i)->class_name, (int )(fe->common.arg_info + i)->class_name_len, & fe_ce);
                found = (int )tmp___1;
                tmp___2 = zend_lookup_class((proto->common.arg_info + i)->class_name, (int )(proto->common.arg_info + i)->class_name_len, & proto_ce);
                found2 = (int )tmp___2;
                if (found != 0) {
                  return ((unsigned char)0);
                } else {
                  if (found2 != 0) {
                    return ((unsigned char)0);
                  } else {
                    if ((int )(*fe_ce)->type == 1) {
                      return ((unsigned char)0);
                    } else {
                      if ((int )(*proto_ce)->type == 1) {
                        return ((unsigned char)0);
                      } else {
                        if ((unsigned int )*fe_ce != (unsigned int )*proto_ce) {
                          return ((unsigned char)0);
                        } else {

                        }
                      }
                    }
                  }
                }
              } else {

              }
            }
          }
        }
      } else {

      }
    } else {

    }
    if ((int )(fe->common.arg_info + i)->type_hint != (int )(proto->common.arg_info + i)->type_hint) {
      return ((unsigned char)0);
    } else {

    }
    if ((int )(fe->common.arg_info + i)->pass_by_reference != (int )(proto->common.arg_info + i)->pass_by_reference) {
      return ((unsigned char)0);
    } else {

    }
    i ++;
  }
  if (proto->common.fn_flags & 16777216U) {
    i = (unsigned int )proto->common.num_args;
    while (i < (zend_uint )fe->common.num_args) {
      if (! (fe->common.arg_info + i)->pass_by_reference) {
        return ((unsigned char)0);
      } else {

      }
      i ++;
    }
  } else {

  }
  return ((unsigned char)1);
}
}
static char *zend_get_function_declaration(zend_function *fptr ) 
{ char *offset ;
  char *buf ;
  zend_uint length ;
  void __attribute__((__visibility__("default")))  *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  size_t name_len ;
  size_t tmp___4 ;
  void __attribute__((__visibility__("default")))  *tmp___5 ;
  long tmp___6 ;
  char *tmp___7 ;
  zend_uint i ;
  zend_uint required ;
  zend_arg_info *arg_info ;
  void __attribute__((__visibility__("default")))  *tmp___8 ;
  long tmp___9 ;
  char *tmp___10 ;
  zend_uint type_name_len ;
  char *type_name ;
  char __attribute__((__visibility__("default")))  *tmp___11 ;
  void __attribute__((__visibility__("default")))  *tmp___12 ;
  long tmp___13 ;
  char *tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  void __attribute__((__visibility__("default")))  *tmp___17 ;
  long tmp___18 ;
  zend_uint idx ;
  char *tmp___19 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char *tmp___22 ;
  zend_op *precv ;
  zend_uint idx___0 ;
  zend_op *op ;
  zend_op *end ;
  zval *zv ;
  zval zv_copy ;
  int use_copy ;
  void __attribute__((__visibility__("default")))  *tmp___23 ;
  char *tmp___24 ;
  int tmp___25 ;
  void __attribute__((__visibility__("default")))  *tmp___26 ;
  int tmp___27 ;
  long tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  char *tmp___31 ;
  char *tmp___32 ;
  char *tmp___33 ;
  char *tmp___34 ;
  void __attribute__((__visibility__("default")))  *tmp___35 ;
  long tmp___36 ;
  char *tmp___37 ;
  char *tmp___38 ;
  void __attribute__((__visibility__("default")))  *tmp___39 ;
  long tmp___40 ;
  char *tmp___41 ;

  {
  length = (zend_uint )1024;
  tmp = _emalloc(length * sizeof(char ));
  buf = (char *)tmp;
  offset = buf;
  if (fptr->op_array.fn_flags & 67108864U) {
    tmp___0 = offset;
    offset ++;
    *tmp___0 = (char )'&';
    tmp___1 = offset;
    offset ++;
    *tmp___1 = (char )' ';
  } else {

  }
  if (fptr->common.scope) {
    memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)(fptr->common.scope)->name, (fptr->common.scope)->name_length);
    offset += (fptr->common.scope)->name_length;
    tmp___2 = offset;
    offset ++;
    *tmp___2 = (char )':';
    tmp___3 = offset;
    offset ++;
    *tmp___3 = (char )':';
  } else {

  }
  tmp___4 = strlen(fptr->common.function_name);
  name_len = tmp___4;
  tmp___6 = __builtin_expect((long )((size_t )(offset - buf) + name_len >= length), 0L);
  if (tmp___6) {
    length += name_len + 1U;
    tmp___5 = _erealloc((void *)buf, length, 0);
    buf = (char *)tmp___5;
  } else {

  }
  memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)fptr->common.function_name, name_len);
  offset += name_len;
  tmp___7 = offset;
  offset ++;
  *tmp___7 = (char )'(';
  if (fptr->common.arg_info) {
    arg_info = fptr->common.arg_info;
    required = fptr->common.required_num_args;
    i = 0U;
    while (i < fptr->common.num_args) {
      if (arg_info->class_name) {
        tmp___9 = __builtin_expect((long )((zend_uint )(offset - buf) + arg_info->class_name_len >= length), 0L);
        if (tmp___9) {
          length += arg_info->class_name_len + 1U;
          tmp___8 = _erealloc((void *)buf, length, 0);
          buf = (char *)tmp___8;
        } else {

        }
        memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)arg_info->class_name, arg_info->class_name_len);
        offset += arg_info->class_name_len;
        tmp___10 = offset;
        offset ++;
        *tmp___10 = (char )' ';
      } else {
        if (arg_info->type_hint) {
          tmp___11 = zend_get_type_by_const((int )arg_info->type_hint);
          type_name = (char *)tmp___11;
          type_name_len = strlen((char const   *)type_name);
          tmp___13 = __builtin_expect((long )((zend_uint )(offset - buf) + type_name_len >= length), 0L);
          if (tmp___13) {
            length += type_name_len + 1U;
            tmp___12 = _erealloc((void *)buf, length, 0);
            buf = (char *)tmp___12;
          } else {

          }
          memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)type_name, type_name_len);
          offset += type_name_len;
          tmp___14 = offset;
          offset ++;
          *tmp___14 = (char )' ';
        } else {

        }
      }
      if (arg_info->pass_by_reference) {
        tmp___15 = offset;
        offset ++;
        *tmp___15 = (char )'&';
      } else {

      }
      tmp___16 = offset;
      offset ++;
      *tmp___16 = (char )'$';
      if (arg_info->name) {
        tmp___18 = __builtin_expect((long )((zend_uint )(offset - buf) + arg_info->name_len >= length), 0L);
        if (tmp___18) {
          length += arg_info->name_len + 1U;
          tmp___17 = _erealloc((void *)buf, length, 0);
          buf = (char *)tmp___17;
        } else {

        }
        memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)arg_info->name, arg_info->name_len);
        offset += arg_info->name_len;
      } else {
        idx = i;
        memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)"param", 5U);
        offset += 5;
        while (1) {
          tmp___19 = offset;
          offset ++;
          *tmp___19 = (char )((int )((char )(idx % 10U)) + 48);
          idx /= 10U;
          if (idx > 0U) {

          } else {
            break;
          }
        }
      }
      if (i >= required) {
        tmp___20 = offset;
        offset ++;
        *tmp___20 = (char )' ';
        tmp___21 = offset;
        offset ++;
        *tmp___21 = (char )'=';
        tmp___22 = offset;
        offset ++;
        *tmp___22 = (char )' ';
        if ((int )fptr->type == 2) {
          precv = (zend_op *)((void *)0);
          idx___0 = i;
          op = ((zend_op_array *)fptr)->opcodes;
          end = op + ((zend_op_array *)fptr)->last;
          idx___0 ++;
          while ((unsigned int )op < (unsigned int )end) {
            if ((int )op->opcode == 63) {
              goto _L;
            } else {
              if ((int )op->opcode == 64) {
                _L: /* CIL Label */ 
                if ((unsigned long )op->op1.num == (unsigned long )((long )idx___0)) {
                  precv = op;
                } else {

                }
              } else {

              }
            }
            op ++;
          }
          if (precv) {
            if ((int )precv->opcode == 64) {
              if ((int )precv->op2_type != 1 << 3) {
                while (1) {
                  tmp___23 = _emalloc(sizeof(zval_gc_info ));
                  zv = (zval *)tmp___23;
                  ((zval_gc_info *)zv)->u.buffered = (gc_root_buffer *)((void *)0);
                  break;
                }
                *zv = *(precv->op2.zv);
                _zval_copy_ctor(zv);
                zv->refcount__gc = 1U;
                zv->is_ref__gc = (unsigned char)0;
                zval_update_constant_ex(& zv, (void *)1, fptr->common.scope);
                if ((int )zv->type == 3) {
                  if (zv->value.lval) {
                    memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)"true", 4U);
                    offset += 4;
                  } else {
                    memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)"false", 5U);
                    offset += 5;
                  }
                } else {
                  if ((int )zv->type == 0) {
                    memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)"NULL", 4U);
                    offset += 4;
                  } else {
                    if ((int )zv->type == 6) {
                      tmp___24 = offset;
                      offset ++;
                      *tmp___24 = (char )'\'';
                      if (zv->value.str.len < 10) {
                        tmp___27 = zv->value.str.len;
                      } else {
                        tmp___27 = 10;
                      }
                      tmp___28 = __builtin_expect((long )((zend_uint )((offset - buf) + tmp___27) >= length), 0L);
                      if (tmp___28) {
                        if (zv->value.str.len < 10) {
                          tmp___25 = zv->value.str.len;
                        } else {
                          tmp___25 = 10;
                        }
                        length += (zend_uint )(tmp___25 + 1);
                        tmp___26 = _erealloc((void *)buf, length, 0);
                        buf = (char *)tmp___26;
                      } else {

                      }
                      if (zv->value.str.len < 10) {
                        tmp___29 = zv->value.str.len;
                      } else {
                        tmp___29 = 10;
                      }
                      memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)zv->value.str.val, (unsigned int )tmp___29);
                      if (zv->value.str.len < 10) {
                        tmp___30 = zv->value.str.len;
                      } else {
                        tmp___30 = 10;
                      }
                      offset += tmp___30;
                      if (zv->value.str.len > 10) {
                        tmp___31 = offset;
                        offset ++;
                        *tmp___31 = (char )'.';
                        tmp___32 = offset;
                        offset ++;
                        *tmp___32 = (char )'.';
                        tmp___33 = offset;
                        offset ++;
                        *tmp___33 = (char )'.';
                      } else {

                      }
                      tmp___34 = offset;
                      offset ++;
                      *tmp___34 = (char )'\'';
                    } else {
                      if ((int )zv->type == 4) {
                        memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)"Array", 5U);
                        offset += 5;
                      } else {
                        zend_make_printable_zval(zv, & zv_copy, & use_copy);
                        tmp___36 = __builtin_expect((long )((zend_uint )((offset - buf) + zv_copy.value.str.len) >= length), 0L);
                        if (tmp___36) {
                          length += (zend_uint )(zv_copy.value.str.len + 1);
                          tmp___35 = _erealloc((void *)buf, length, 0);
                          buf = (char *)tmp___35;
                        } else {

                        }
                        memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)zv_copy.value.str.val, (unsigned int )zv_copy.value.str.len);
                        offset += zv_copy.value.str.len;
                        if (use_copy) {
                          _zval_dtor(& zv_copy);
                        } else {

                        }
                      }
                    }
                  }
                }
                _zval_ptr_dtor(& zv);
              } else {

              }
            } else {

            }
          } else {

          }
        } else {
          memcpy((void */* __restrict  */)offset, (void const   */* __restrict  */)"NULL", 4U);
          offset += 4;
        }
      } else {

      }
      i ++;
      if (i < fptr->common.num_args) {
        tmp___37 = offset;
        offset ++;
        *tmp___37 = (char )',';
        tmp___38 = offset;
        offset ++;
        *tmp___38 = (char )' ';
      } else {

      }
      arg_info ++;
      tmp___40 = __builtin_expect((long )((zend_uint )((offset - buf) + 32) >= length), 0L);
      if (tmp___40) {
        length += 33U;
        tmp___39 = _erealloc((void *)buf, length, 0);
        buf = (char *)tmp___39;
      } else {

      }
    }
  } else {

  }
  tmp___41 = offset;
  offset ++;
  *tmp___41 = (char )')';
  *offset = (char )'\000';
  return (buf);
}
}
static void do_inheritance_check_on_method(zend_function *child , zend_function *parent ) 
{ zend_uint child_flags ;
  zend_uint parent_flags ;
  char const   *tmp ;
  zend_class_entry *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  char *tmp___10 ;
  char const   *tmp___11 ;
  char *tmp___12 ;
  char const   *tmp___13 ;
  zend_bool tmp___14 ;
  char *method_prototype ;
  char *tmp___15 ;
  char const   *tmp___16 ;
  zend_bool tmp___17 ;

  {
  parent_flags = parent->common.fn_flags;
  if (((parent->common.scope)->ce_flags & 128U) == 0U) {
    if (parent->common.fn_flags & 2U) {
      if (child->common.prototype) {
        tmp___0 = (child->common.prototype)->common.scope;
      } else {
        tmp___0 = child->common.scope;
      }
      if ((unsigned int )parent->common.scope != (unsigned int )tmp___0) {
        if (child->common.fn_flags & 10U) {
          if (child->common.prototype) {
            tmp = ((child->common.prototype)->common.scope)->name;
          } else {
            tmp = (child->common.scope)->name;
          }
          zend_error(1 << 6L, "Can\'t inherit abstract function %s::%s() (previously declared abstract in %s)", (parent->common.scope)->name, child->common.function_name, tmp);
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  if (parent_flags & 4U) {
    if (parent) {
      if (parent->common.scope) {
        tmp___1 = (parent->common.scope)->name;
      } else {
        tmp___1 = "";
      }
    } else {
      tmp___1 = "";
    }
    zend_error(1 << 6L, "Cannot override final method %s::%s()", tmp___1, child->common.function_name);
  } else {

  }
  child_flags = child->common.fn_flags;
  if ((child_flags & 1U) != (parent_flags & 1U)) {
    if (child->common.fn_flags & 1U) {
      if (child) {
        if (child->common.scope) {
          tmp___2 = (child->common.scope)->name;
        } else {
          tmp___2 = "";
        }
      } else {
        tmp___2 = "";
      }
      if (parent) {
        if (parent->common.scope) {
          tmp___3 = (parent->common.scope)->name;
        } else {
          tmp___3 = "";
        }
      } else {
        tmp___3 = "";
      }
      zend_error(1 << 6L, "Cannot make non static method %s::%s() static in class %s", tmp___3, child->common.function_name, tmp___2);
    } else {
      if (child) {
        if (child->common.scope) {
          tmp___4 = (child->common.scope)->name;
        } else {
          tmp___4 = "";
        }
      } else {
        tmp___4 = "";
      }
      if (parent) {
        if (parent->common.scope) {
          tmp___5 = (parent->common.scope)->name;
        } else {
          tmp___5 = "";
        }
      } else {
        tmp___5 = "";
      }
      zend_error(1 << 6L, "Cannot make static method %s::%s() non static in class %s", tmp___5, child->common.function_name, tmp___4);
    }
  } else {

  }
  if (child_flags & 2U) {
    if (! (parent_flags & 2U)) {
      if (child) {
        if (child->common.scope) {
          tmp___6 = (child->common.scope)->name;
        } else {
          tmp___6 = "";
        }
      } else {
        tmp___6 = "";
      }
      if (parent) {
        if (parent->common.scope) {
          tmp___7 = (parent->common.scope)->name;
        } else {
          tmp___7 = "";
        }
      } else {
        tmp___7 = "";
      }
      zend_error(1 << 6L, "Cannot make non abstract method %s::%s() abstract in class %s", tmp___7, child->common.function_name, tmp___6);
    } else {

    }
  } else {

  }
  if (parent_flags & 2048U) {
    child->common.fn_flags |= 2048U;
  } else {
    if ((child_flags & 1792U) > (parent_flags & 1792U)) {
      if (parent_flags & 256U) {
        tmp___8 = "";
      } else {
        tmp___8 = " or weaker";
      }
      if (parent) {
        if (parent->common.scope) {
          tmp___9 = (parent->common.scope)->name;
        } else {
          tmp___9 = "";
        }
      } else {
        tmp___9 = "";
      }
      tmp___10 = zend_visibility_string(parent_flags);
      if (child) {
        if (child->common.scope) {
          tmp___11 = (child->common.scope)->name;
        } else {
          tmp___11 = "";
        }
      } else {
        tmp___11 = "";
      }
      zend_error(1 << 6L, "Access level to %s::%s() must be %s (as in class %s)%s", tmp___11, child->common.function_name, tmp___10, tmp___9, tmp___8);
    } else {
      if ((child_flags & 1792U) < (parent_flags & 1792U)) {
        if ((parent_flags & 1792U) & 1024U) {
          child->common.fn_flags |= 2048U;
        } else {

        }
      } else {

      }
    }
  }
  if (parent_flags & 1024U) {
    child->common.prototype = (union _zend_function *)((void *)0);
  } else {
    if (parent_flags & 2U) {
      child->common.fn_flags |= 8U;
      child->common.prototype = parent;
    } else {
      if (! (parent->common.fn_flags & 8192U)) {
        goto _L;
      } else {
        if (parent->common.prototype) {
          if (((parent->common.prototype)->common.scope)->ce_flags & 128U) {
            _L: /* CIL Label */ 
            if (parent->common.prototype) {
              child->common.prototype = parent->common.prototype;
            } else {
              child->common.prototype = parent;
            }
          } else {

          }
        } else {

        }
      }
    }
  }
  if (child->common.prototype) {
    if ((child->common.prototype)->common.fn_flags & 2U) {
      tmp___14 = zend_do_perform_implementation_check((zend_function const   *)child, (zend_function const   *)child->common.prototype);
      if (tmp___14) {

      } else {
        tmp___12 = zend_get_function_declaration(child->common.prototype);
        if (child) {
          if (child->common.scope) {
            tmp___13 = (child->common.scope)->name;
          } else {
            tmp___13 = "";
          }
        } else {
          tmp___13 = "";
        }
        zend_error(1 << 6L, "Declaration of %s::%s() must be compatible with %s", tmp___13, child->common.function_name, tmp___12);
      }
    } else {
      goto _L___1;
    }
  } else {
    _L___1: /* CIL Label */ 
    if (executor_globals.error_reporting & (1 << 11L)) {
      goto _L___0;
    } else {
      if (executor_globals.user_error_handler) {
        _L___0: /* CIL Label */ 
        tmp___17 = zend_do_perform_implementation_check((zend_function const   *)child, (zend_function const   *)parent);
        if (tmp___17) {

        } else {
          tmp___15 = zend_get_function_declaration(child->common.prototype);
          method_prototype = tmp___15;
          if (child) {
            if (child->common.scope) {
              tmp___16 = (child->common.scope)->name;
            } else {
              tmp___16 = "";
            }
          } else {
            tmp___16 = "";
          }
          zend_error(1 << 11L, "Declaration of %s::%s() should be compatible with %s", tmp___16, child->common.function_name, method_prototype);
          _efree((void *)method_prototype);
        }
      } else {

      }
    }
  }
  return;
}
}
static zend_bool do_inherit_method_check(HashTable *child_function_table , zend_function *parent , zend_hash_key const   *hash_key , zend_class_entry *child_ce ) 
{ zend_uint parent_flags ;
  zend_function *child ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  parent_flags = parent->common.fn_flags;
  tmp = zend_hash_quick_find((HashTable const   *)child_function_table, (char const   *)hash_key->arKey, (unsigned int )hash_key->nKeyLength, (unsigned long )hash_key->h, (void **)(& child));
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    if (parent_flags & 2U) {
      child_ce->ce_flags |= 16U;
    } else {

    }
    return ((unsigned char)1);
  } else {

  }
  do_inheritance_check_on_method(child, parent);
  return ((unsigned char)0);
}
}
static zend_bool do_inherit_property_access_check(HashTable *target_ht , zend_property_info *parent_info , zend_hash_key const   *hash_key , zend_class_entry *ce ) 
{ zend_property_info *child_info ;
  zend_class_entry *parent_ce ;
  int __attribute__((__visibility__("default")))  tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  parent_ce = ce->parent;
  if (parent_info->flags & 132096U) {
    tmp = zend_hash_quick_find((HashTable const   *)(& ce->properties_info), (char const   *)hash_key->arKey, (unsigned int )hash_key->nKeyLength, (unsigned long )hash_key->h, (void **)(& child_info));
    if (tmp == (int __attribute__((__visibility__("default")))  )0) {
      child_info->flags |= 2048U;
    } else {
      _zend_hash_quick_add_or_update(& ce->properties_info, (char const   *)hash_key->arKey, (unsigned int )hash_key->nKeyLength, (unsigned long )hash_key->h, (void *)parent_info, sizeof(zend_property_info ), (void **)(& child_info), 1);
      if ((int )ce->type & 1) {
        zend_duplicate_property_info_internal(child_info);
      } else {
        zend_duplicate_property_info(child_info);
      }
      child_info->flags &= 4294966271U;
      child_info->flags |= 131072U;
    }
    return ((unsigned char)0);
  } else {

  }
  tmp___4 = zend_hash_quick_find((HashTable const   *)(& ce->properties_info), (char const   *)hash_key->arKey, (unsigned int )hash_key->nKeyLength, (unsigned long )hash_key->h, (void **)(& child_info));
  if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
    if ((parent_info->flags & 1U) != (child_info->flags & 1U)) {
      if (child_info->flags & 1U) {
        tmp___0 = "static ";
      } else {
        tmp___0 = "non static ";
      }
      if (parent_info->flags & 1U) {
        tmp___1 = "static ";
      } else {
        tmp___1 = "non static ";
      }
      zend_error(1 << 6L, "Cannot redeclare %s%s::$%s as %s%s::$%s", tmp___1, parent_ce->name, hash_key->arKey, tmp___0, ce->name, hash_key->arKey);
    } else {

    }
    if (parent_info->flags & 2048U) {
      child_info->flags |= 2048U;
    } else {

    }
    if ((child_info->flags & 1792U) > (parent_info->flags & 1792U)) {
      if (parent_info->flags & 256U) {
        tmp___2 = "";
      } else {
        tmp___2 = " or weaker";
      }
      tmp___3 = zend_visibility_string(parent_info->flags);
      zend_error(1 << 6L, "Access level to %s::$%s must be %s (as in class %s)%s", ce->name, hash_key->arKey, tmp___3, parent_ce->name, tmp___2);
    } else {
      if ((child_info->flags & 1U) == 0U) {
        zval_delref_p(*(ce->default_properties_table + parent_info->offset));
        *(ce->default_properties_table + parent_info->offset) = *(ce->default_properties_table + child_info->offset);
        *(ce->default_properties_table + child_info->offset) = (zval *)((void *)0);
        child_info->offset = parent_info->offset;
      } else {

      }
    }
    return ((unsigned char)0);
  } else {
    return ((unsigned char)1);
  }
}
}
__inline static void do_implement_interface(zend_class_entry *ce , zend_class_entry *iface ) 
{ int tmp ;

  {
  if (! (ce->ce_flags & 128U)) {
    if (iface->interface_gets_implemented) {
      tmp = (*(iface->interface_gets_implemented))(iface, ce);
      if (tmp == -1) {
        zend_error(1 << 4L, "Class %s could not implement interface %s", ce->name, iface->name);
      } else {

      }
    } else {

    }
  } else {

  }
  if ((unsigned int )ce == (unsigned int )iface) {
    zend_error(1, "Interface %s cannot implement itself", ce->name);
  } else {

  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_do_inherit_interfaces(zend_class_entry *ce , zend_class_entry const   *iface ) 
{ zend_uint i ;
  zend_uint ce_num ;
  zend_uint if_num ;
  zend_class_entry *entry ;
  void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  zend_uint tmp___1 ;
  zend_uint tmp___2 ;
  zend_uint tmp___3 ;

  {
  if_num = (zend_uint )iface->num_interfaces;
  if (if_num == 0U) {
    return;
  } else {

  }
  ce_num = ce->num_interfaces;
  if ((int )ce->type == 1) {
    tmp = realloc((void *)ce->interfaces, sizeof(zend_class_entry *) * (ce_num + if_num));
    ce->interfaces = (zend_class_entry **)tmp;
  } else {
    tmp___0 = _erealloc((void *)ce->interfaces, sizeof(zend_class_entry *) * (ce_num + if_num), 0);
    ce->interfaces = (zend_class_entry **)tmp___0;
  }
  while (1) {
    tmp___2 = if_num;
    if_num --;
    if (tmp___2) {

    } else {
      break;
    }
    entry = *(iface->interfaces + if_num);
    i = 0U;
    while (i < ce_num) {
      if ((unsigned int )*(ce->interfaces + i) == (unsigned int )entry) {
        break;
      } else {

      }
      i ++;
    }
    if (i == ce_num) {
      tmp___1 = ce->num_interfaces;
      (ce->num_interfaces) ++;
      *(ce->interfaces + tmp___1) = entry;
    } else {

    }
  }
  while (ce_num < ce->num_interfaces) {
    tmp___3 = ce_num;
    ce_num ++;
    do_implement_interface(ce, *(ce->interfaces + tmp___3));
  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_do_inheritance(zend_class_entry *ce , zend_class_entry *parent_ce ) 
{ zend_property_info *property_info ;
  int i ;
  void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  int tmp___1 ;
  int i___0 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  int tmp___3 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;
  zend_uint tmp___5 ;
  zend_bool tmp___6 ;
  int i___1 ;
  void *tmp___7 ;
  void __attribute__((__visibility__("default")))  *tmp___8 ;
  int tmp___9 ;
  zval *new_zv___0 ;
  void __attribute__((__visibility__("default")))  *tmp___10 ;
  zend_uint tmp___11 ;
  zend_bool tmp___12 ;
  int __attribute__((__visibility__("default")))  tmp___13 ;
  void (*tmp___14)(zend_property_info *property_info ) ;

  {
  if (ce->ce_flags & 128U) {
    if (! (parent_ce->ce_flags & 128U)) {
      zend_error(1 << 6L, "Interface %s may not inherit from class (%s)", ce->name, parent_ce->name);
    } else {

    }
  } else {

  }
  if (parent_ce->ce_flags & 64U) {
    zend_error(1 << 6L, "Class %s may not inherit from final class (%s)", ce->name, parent_ce->name);
  } else {

  }
  ce->parent = parent_ce;
  if (! ce->serialize) {
    ce->serialize = parent_ce->serialize;
  } else {

  }
  if (! ce->unserialize) {
    ce->unserialize = parent_ce->unserialize;
  } else {

  }
  zend_do_inherit_interfaces(ce, (zend_class_entry const   *)parent_ce);
  if (parent_ce->default_properties_count) {
    i = ce->default_properties_count + parent_ce->default_properties_count;
    if ((int )ce->type == 1) {
      tmp = __zend_realloc((void *)ce->default_properties_table, sizeof(void *) * (unsigned int )i);
      ce->default_properties_table = (zval **)tmp;
    } else {
      tmp___0 = _erealloc((void *)ce->default_properties_table, sizeof(void *) * (unsigned int )i, 0);
      ce->default_properties_table = (zval **)tmp___0;
    }
    if (ce->default_properties_count) {
      while (1) {
        tmp___1 = i;
        i --;
        if (tmp___1 > parent_ce->default_properties_count) {

        } else {
          break;
        }
        *(ce->default_properties_table + i) = *(ce->default_properties_table + (i - parent_ce->default_properties_count));
      }
    } else {

    }
    i = 0;
    while (i < parent_ce->default_properties_count) {
      *(ce->default_properties_table + i) = *(parent_ce->default_properties_table + i);
      if (*(ce->default_properties_table + i)) {
        zval_addref_p(*(ce->default_properties_table + i));
      } else {

      }
      i ++;
    }
    ce->default_properties_count += parent_ce->default_properties_count;
  } else {

  }
  if ((int )parent_ce->type != (int )ce->type) {
    zend_update_class_constants(parent_ce);
    if (parent_ce->default_static_members_count) {
      i___0 = ce->default_static_members_count + parent_ce->default_static_members_count;
      tmp___2 = _erealloc((void *)ce->default_static_members_table, sizeof(void *) * (unsigned int )i___0, 0);
      ce->default_static_members_table = (zval **)tmp___2;
      if (ce->default_static_members_count) {
        while (1) {
          tmp___3 = i___0;
          i___0 --;
          if (tmp___3 > parent_ce->default_static_members_count) {

          } else {
            break;
          }
          *(ce->default_static_members_table + i___0) = *(ce->default_static_members_table + (i___0 - parent_ce->default_static_members_count));
        }
      } else {

      }
      i___0 = 0;
      while (i___0 < parent_ce->default_static_members_count) {
        tmp___6 = zval_isref_p(*(parent_ce->static_members_table + i___0));
        if (tmp___6) {

        } else {
          while (1) {
            tmp___5 = zval_refcount_p(*(parent_ce->static_members_table + i___0));
            if (tmp___5 > 1U) {
              zval_delref_p(*(parent_ce->static_members_table + i___0));
              while (1) {
                tmp___4 = _emalloc(sizeof(zval_gc_info ));
                new_zv = (zval *)tmp___4;
                ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
                break;
              }
              while (1) {
                while (1) {
                  new_zv->value = (*(parent_ce->static_members_table + i___0))->value;
                  new_zv->type = (*(parent_ce->static_members_table + i___0))->type;
                  break;
                }
                zval_set_refcount_p(new_zv, 1U);
                zval_unset_isref_p(new_zv);
                break;
              }
              *(parent_ce->static_members_table + i___0) = new_zv;
              _zval_copy_ctor(new_zv);
            } else {

            }
            break;
          }
          zval_set_isref_p(*(parent_ce->static_members_table + i___0));
        }
        *(ce->default_static_members_table + i___0) = *(parent_ce->static_members_table + i___0);
        zval_addref_p(*(ce->default_static_members_table + i___0));
        i___0 ++;
      }
      ce->default_static_members_count += parent_ce->default_static_members_count;
      ce->static_members_table = ce->default_static_members_table;
    } else {

    }
  } else {
    if (parent_ce->default_static_members_count) {
      i___1 = ce->default_static_members_count + parent_ce->default_static_members_count;
      if ((int )ce->type == 1) {
        tmp___7 = __zend_realloc((void *)ce->default_static_members_table, sizeof(void *) * (unsigned int )i___1);
        ce->default_static_members_table = (zval **)tmp___7;
      } else {
        tmp___8 = _erealloc((void *)ce->default_static_members_table, sizeof(void *) * (unsigned int )i___1, 0);
        ce->default_static_members_table = (zval **)tmp___8;
      }
      if (ce->default_static_members_count) {
        while (1) {
          tmp___9 = i___1;
          i___1 --;
          if (tmp___9 > parent_ce->default_static_members_count) {

          } else {
            break;
          }
          *(ce->default_static_members_table + i___1) = *(ce->default_static_members_table + (i___1 - parent_ce->default_static_members_count));
        }
      } else {

      }
      i___1 = 0;
      while (i___1 < parent_ce->default_static_members_count) {
        tmp___12 = zval_isref_p(*(parent_ce->default_static_members_table + i___1));
        if (tmp___12) {

        } else {
          while (1) {
            tmp___11 = zval_refcount_p(*(parent_ce->default_static_members_table + i___1));
            if (tmp___11 > 1U) {
              zval_delref_p(*(parent_ce->default_static_members_table + i___1));
              while (1) {
                tmp___10 = _emalloc(sizeof(zval_gc_info ));
                new_zv___0 = (zval *)tmp___10;
                ((zval_gc_info *)new_zv___0)->u.buffered = (gc_root_buffer *)((void *)0);
                break;
              }
              while (1) {
                while (1) {
                  new_zv___0->value = (*(parent_ce->default_static_members_table + i___1))->value;
                  new_zv___0->type = (*(parent_ce->default_static_members_table + i___1))->type;
                  break;
                }
                zval_set_refcount_p(new_zv___0, 1U);
                zval_unset_isref_p(new_zv___0);
                break;
              }
              *(parent_ce->default_static_members_table + i___1) = new_zv___0;
              _zval_copy_ctor(new_zv___0);
            } else {

            }
            break;
          }
          zval_set_isref_p(*(parent_ce->default_static_members_table + i___1));
        }
        *(ce->default_static_members_table + i___1) = *(parent_ce->default_static_members_table + i___1);
        zval_addref_p(*(ce->default_static_members_table + i___1));
        i___1 ++;
      }
      ce->default_static_members_count += parent_ce->default_static_members_count;
      if ((int )ce->type == 2) {
        ce->static_members_table = ce->default_static_members_table;
      } else {

      }
    } else {

    }
  }
  zend_hash_internal_pointer_reset_ex(& ce->properties_info, (HashPosition *)((void *)0));
  while (1) {
    tmp___13 = zend_hash_get_current_data_ex(& ce->properties_info, (void **)((void *)(& property_info)), (HashPosition *)((void *)0));
    if (tmp___13 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if ((unsigned int )property_info->ce == (unsigned int )ce) {
      if (property_info->flags & 1U) {
        property_info->offset += parent_ce->default_static_members_count;
      } else {
        property_info->offset += parent_ce->default_properties_count;
      }
    } else {

    }
    zend_hash_move_forward_ex(& ce->properties_info, (HashPosition *)((void *)0));
  }
  if ((int )ce->type & 1) {
    tmp___14 = & zend_duplicate_property_info_internal;
  } else {
    tmp___14 = & zend_duplicate_property_info;
  }
  zend_hash_merge_ex(& ce->properties_info, & parent_ce->properties_info, (void (*)(void *pElement ))tmp___14, sizeof(zend_property_info ), (zend_bool (*)(HashTable *target_ht , void *source_data , zend_hash_key *hash_key , void *pParam ))(& do_inherit_property_access_check), (void *)ce);
  _zend_hash_merge(& ce->constants_table, & parent_ce->constants_table, (void (*)(void * ))(& zval_add_ref), (void *)0, sizeof(zval *), 0);
  zend_hash_merge_ex(& ce->function_table, & parent_ce->function_table, (void (*)(void *pElement ))(& do_inherit_method), sizeof(zend_function ), (zend_bool (*)(HashTable *target_ht , void *source_data , zend_hash_key *hash_key , void *pParam ))(& do_inherit_method_check), (void *)ce);
  do_inherit_parent_constructor(ce);
  if (ce->ce_flags & 16U) {
    if ((int )ce->type == 1) {
      ce->ce_flags |= 32U;
    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    if (! (ce->ce_flags & 524288U)) {
      if (! (ce->ce_flags & 4194304U)) {
        zend_verify_abstract_class(ce);
      } else {

      }
    } else {

    }
  }
  ce->ce_flags |= parent_ce->ce_flags & 8388608U;
  return;
}
}
static zend_bool do_inherit_constant_check(HashTable *child_constants_table , zval const   **parent_constant , zend_hash_key const   *hash_key , zend_class_entry const   *iface ) 
{ zval **old_constant ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zend_hash_quick_find((HashTable const   *)child_constants_table, (char const   *)hash_key->arKey, (unsigned int )hash_key->nKeyLength, (unsigned long )hash_key->h, (void **)(& old_constant));
  if (tmp == (int __attribute__((__visibility__("default")))  )0) {
    if ((unsigned int )*old_constant != (unsigned int )*parent_constant) {
      zend_error(1 << 6L, "Cannot inherit previously-inherited or override constant %s from interface %s", hash_key->arKey, iface->name);
    } else {

    }
    return ((unsigned char)0);
  } else {

  }
  return ((unsigned char)1);
}
}
static int do_interface_constant_check(zval **val , int num_args , va_list args , zend_hash_key const   *key ) 
{ zend_class_entry **iface ;
  zend_class_entry **tmp ;

  {
  tmp = __builtin_va_arg(args, zend_class_entry **);
  iface = tmp;
  do_inherit_constant_check(& (*iface)->constants_table, (zval const   **)val, key, (zend_class_entry const   *)*iface);
  return (0);
}
}
void __attribute__((__visibility__("default")))  zend_do_implement_interface(zend_class_entry *ce , zend_class_entry *iface ) 
{ zend_uint i ;
  zend_uint ignore ;
  zend_uint current_iface_num ;
  zend_uint parent_iface_num ;
  zend_uint tmp ;
  void *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_uint tmp___2 ;

  {
  ignore = (zend_uint )0;
  current_iface_num = ce->num_interfaces;
  if (ce->parent) {
    tmp = (ce->parent)->num_interfaces;
  } else {
    tmp = 0U;
  }
  parent_iface_num = tmp;
  i = 0U;
  while (i < ce->num_interfaces) {
    if ((unsigned int )*(ce->interfaces + i) == (unsigned int )((void *)0)) {
      (ce->num_interfaces) --;
      memmove((void *)(ce->interfaces + i), (void const   *)((ce->interfaces + i) + 1), sizeof(zend_class_entry *) * (ce->num_interfaces - i));
      i --;
    } else {
      if ((unsigned int )*(ce->interfaces + i) == (unsigned int )iface) {
        if (i < parent_iface_num) {
          ignore = 1U;
        } else {
          zend_error(1 << 6L, "Class %s cannot implement previously implemented interface %s", ce->name, iface->name);
        }
      } else {

      }
    }
    i ++;
  }
  if (ignore) {
    zend_hash_apply_with_arguments(& ce->constants_table, (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& do_interface_constant_check), 1, & iface);
  } else {
    if (ce->num_interfaces >= current_iface_num) {
      if ((int )ce->type == 1) {
        current_iface_num ++;
        tmp___0 = realloc((void *)ce->interfaces, sizeof(zend_class_entry *) * current_iface_num);
        ce->interfaces = (zend_class_entry **)tmp___0;
      } else {
        current_iface_num ++;
        tmp___1 = _erealloc((void *)ce->interfaces, sizeof(zend_class_entry *) * current_iface_num, 0);
        ce->interfaces = (zend_class_entry **)tmp___1;
      }
    } else {

    }
    tmp___2 = ce->num_interfaces;
    (ce->num_interfaces) ++;
    *(ce->interfaces + tmp___2) = iface;
    zend_hash_merge_ex(& ce->constants_table, & iface->constants_table, (void (*)(void *pElement ))(& zval_add_ref), sizeof(zval *), (zend_bool (*)(HashTable *target_ht , void *source_data , zend_hash_key *hash_key , void *pParam ))(& do_inherit_constant_check), (void *)iface);
    zend_hash_merge_ex(& ce->function_table, & iface->function_table, (void (*)(void *pElement ))(& do_inherit_method), sizeof(zend_function ), (zend_bool (*)(HashTable *target_ht , void *source_data , zend_hash_key *hash_key , void *pParam ))(& do_inherit_method_check), (void *)ce);
    do_implement_interface(ce, iface);
    zend_do_inherit_interfaces(ce, (zend_class_entry const   *)iface);
  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_do_implement_trait(zend_class_entry *ce , zend_class_entry *trait ) 
{ zend_uint i ;
  zend_uint ignore ;
  zend_uint current_trait_num ;
  zend_uint parent_trait_num ;
  zend_uint tmp ;
  void *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_uint tmp___2 ;

  {
  ignore = (zend_uint )0;
  current_trait_num = ce->num_traits;
  if (ce->parent) {
    tmp = (ce->parent)->num_traits;
  } else {
    tmp = 0U;
  }
  parent_trait_num = tmp;
  i = 0U;
  while (i < ce->num_traits) {
    if ((unsigned int )*(ce->traits + i) == (unsigned int )((void *)0)) {
      (ce->num_traits) --;
      memmove((void *)(ce->traits + i), (void const   *)((ce->traits + i) + 1), sizeof(zend_class_entry *) * (ce->num_traits - i));
      i --;
    } else {
      if ((unsigned int )*(ce->traits + i) == (unsigned int )trait) {
        if (i < parent_trait_num) {
          ignore = 1U;
        } else {

        }
      } else {

      }
    }
    i ++;
  }
  if (! ignore) {
    if (ce->num_traits >= current_trait_num) {
      if ((int )ce->type == 1) {
        current_trait_num ++;
        tmp___0 = realloc((void *)ce->traits, sizeof(zend_class_entry *) * current_trait_num);
        ce->traits = (zend_class_entry **)tmp___0;
      } else {
        current_trait_num ++;
        tmp___1 = _erealloc((void *)ce->traits, sizeof(zend_class_entry *) * current_trait_num, 0);
        ce->traits = (zend_class_entry **)tmp___1;
      }
    } else {

    }
    tmp___2 = ce->num_traits;
    (ce->num_traits) ++;
    *(ce->traits + tmp___2) = trait;
  } else {

  }
  return;
}
}
static int zend_traits_merge_functions(zend_function *fn , int num_args , va_list args , zend_hash_key *hash_key ) 
{ size_t current ;
  size_t i ;
  size_t count ;
  HashTable *resulting_table ;
  HashTable **function_tables ;
  zend_class_entry *ce ;
  size_t collision ;
  size_t abstract_solved ;
  zend_function *other_trait_fn ;
  char *tmp ;
  char *tmp___0 ;
  zend_bool tmp___1 ;
  zend_bool tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  zend_function *class_fn ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;

  {
  collision = (size_t )0;
  abstract_solved = (size_t )0;
  current = __builtin_va_arg(args, size_t );
  count = __builtin_va_arg(args, size_t );
  resulting_table = __builtin_va_arg(args, HashTable *);
  function_tables = __builtin_va_arg(args, HashTable **);
  ce = __builtin_va_arg(args, zend_class_entry *);
  i = 0U;
  while (i < count) {
    if (i == current) {
      goto __Cont;
    } else {

    }
    tmp___3 = zend_hash_quick_find((HashTable const   *)*(function_tables + i), hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **)(& other_trait_fn));
    if (tmp___3 == (int __attribute__((__visibility__("default")))  )0) {
      if (other_trait_fn->common.fn_flags & 2U) {
        if (fn->common.fn_flags & 2U) {
          tmp___1 = zend_do_perform_implementation_check((zend_function const   *)fn, (zend_function const   *)other_trait_fn);
          if (tmp___1) {
            tmp___2 = zend_do_perform_implementation_check((zend_function const   *)other_trait_fn, (zend_function const   *)fn);
            if (tmp___2) {

            } else {
              tmp = zend_get_function_declaration(other_trait_fn);
              tmp___0 = zend_get_function_declaration(fn);
              zend_error(1 << 6L, "Declaration of %s must be compatible with %s", tmp___0, tmp);
            }
          } else {
            tmp = zend_get_function_declaration(other_trait_fn);
            tmp___0 = zend_get_function_declaration(fn);
            zend_error(1 << 6L, "Declaration of %s must be compatible with %s", tmp___0, tmp);
          }
        } else {
          do_inheritance_check_on_method(fn, other_trait_fn);
        }
        zend_function_dtor(other_trait_fn);
        zend_hash_del_key_or_index(*(function_tables + i), hash_key->arKey, hash_key->nKeyLength, hash_key->h, 2);
      } else {
        if (fn->common.fn_flags & 2U) {
          do_inheritance_check_on_method(other_trait_fn, fn);
          abstract_solved = 1U;
        } else {
          collision ++;
          zend_function_dtor(other_trait_fn);
          zend_hash_del_key_or_index(*(function_tables + i), hash_key->arKey, hash_key->nKeyLength, hash_key->h, 2);
        }
      }
    } else {

    }
    __Cont: /* CIL Label */ 
    i ++;
  }
  if (collision) {
    tmp___4 = zend_hash_quick_find((HashTable const   *)(& ce->function_table), hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **)(& class_fn));
    if (tmp___4 == (int __attribute__((__visibility__("default")))  )-1) {
      zend_error(1 << 6L, "Trait method %s has not been applied, because there are collisions with other trait methods on %s", fn->common.function_name, ce->name);
    } else {
      if ((unsigned int )class_fn->common.scope != (unsigned int )ce) {
        zend_error(1 << 6L, "Trait method %s has not been applied, because there are collisions with other trait methods on %s", fn->common.function_name, ce->name);
      } else {

      }
    }
    zend_function_dtor(fn);
  } else {
    if (abstract_solved) {
      zend_function_dtor(fn);
    } else {
      tmp___5 = _zend_hash_quick_add_or_update(resulting_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void *)fn, sizeof(zend_function ), (void **)((void *)0), 1 << 1);
      if (tmp___5 == (int __attribute__((__visibility__("default")))  )-1) {
        zend_error(1 << 6L, "Trait method %s has not been applied, because failure occured during updating resulting trait method table", fn->common.function_name);
      } else {

      }
    }
  }
  return (1);
}
}
static void zend_traits_duplicate_function(zend_function *fe , zend_class_entry *target_ce , char *newname ) 
{ zend_literal *literals_copy ;
  zend_compiled_variable *dupvars ;
  zend_op *opcode_copy ;
  zval class_name_zv ;
  int class_name_literal ;
  int i ;
  int number_of_literals ;
  HashTable *tmpHash ;
  void __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  void __attribute__((__visibility__("default")))  *tmp___5 ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___6 ;
  char const   *__s___0 ;
  int __l___0 ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___7 ;
  zend_arg_info *tmpArginfo ;
  void __attribute__((__visibility__("default")))  *tmp___8 ;
  char __attribute__((__visibility__("default")))  *tmp___9 ;
  char __attribute__((__visibility__("default")))  *tmp___10 ;
  char __attribute__((__visibility__("default")))  *tmp___11 ;
  char __attribute__((__visibility__("default")))  *tmp___12 ;
  char __attribute__((__visibility__("default")))  *tmp___13 ;

  {
  if (fe->op_array.static_variables) {
    tmp = _emalloc(sizeof(HashTable ));
    tmpHash = (HashTable *)tmp;
    tmp___0 = zend_hash_num_elements((HashTable const   *)fe->op_array.static_variables);
    _zend_hash_init(tmpHash, (unsigned int )tmp___0, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void * ))(& _zval_ptr_dtor), (unsigned char)0);
    zend_hash_apply_with_arguments(fe->op_array.static_variables, (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& zval_copy_static_var), 1, tmpHash);
    fe->op_array.static_variables = tmpHash;
  } else {

  }
  number_of_literals = fe->op_array.last_literal;
  tmp___1 = _emalloc((unsigned int )number_of_literals * sizeof(zend_literal ));
  literals_copy = (zend_literal *)tmp___1;
  i = 0;
  while (i < number_of_literals) {
    *(literals_copy + i) = *(fe->op_array.literals + i);
    _zval_copy_ctor(& (literals_copy + i)->constant);
    i ++;
  }
  fe->op_array.literals = literals_copy;
  tmp___2 = _emalloc(sizeof(zend_uint ));
  fe->op_array.refcount = (zend_uint *)tmp___2;
  *(fe->op_array.refcount) = 1U;
  if (fe->op_array.vars) {
    i = fe->op_array.last_var;
    tmp___3 = _safe_emalloc((unsigned int )fe->op_array.last_var, sizeof(zend_compiled_variable ), 0U);
    dupvars = (zend_compiled_variable *)tmp___3;
    while (i > 0) {
      i --;
      tmp___4 = _estrndup((fe->op_array.vars + i)->name, (unsigned int )(fe->op_array.vars + i)->name_len);
      (dupvars + i)->name = (char const   *)tmp___4;
      (dupvars + i)->name_len = (fe->op_array.vars + i)->name_len;
      (dupvars + i)->hash_value = (fe->op_array.vars + i)->hash_value;
    }
    fe->op_array.vars = dupvars;
  } else {
    fe->op_array.vars = (zend_compiled_variable *)((void *)0);
  }
  tmp___5 = _safe_emalloc(sizeof(zend_op ), fe->op_array.last, 0U);
  opcode_copy = (zend_op *)tmp___5;
  i = 0;
  while ((zend_uint )i < fe->op_array.last) {
    *(opcode_copy + i) = *(fe->op_array.opcodes + i);
    if ((int )(opcode_copy + i)->op1_type != 1) {
      switch ((int )(opcode_copy + i)->opcode) {
      case 100: 
      case 42: 
      if ((opcode_copy + i)->op1.jmp_addr) {
        if ((unsigned int )(opcode_copy + i)->op1.jmp_addr >= (unsigned int )fe->op_array.opcodes) {
          if ((unsigned int )(opcode_copy + i)->op1.jmp_addr < (unsigned int )(fe->op_array.opcodes + fe->op_array.last)) {
            (opcode_copy + i)->op1.jmp_addr = opcode_copy + ((fe->op_array.opcodes + i)->op1.jmp_addr - fe->op_array.opcodes);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
      }
    } else {
      if (target_ce) {
        if ((int )((opcode_copy + i)->op1.zv)->type == 0) {
          if (((opcode_copy + i)->op1.zv)->value.lval == 288L) {
            if (288U != (target_ce->ce_flags & 288U)) {
              class_name_zv = (struct _zval_struct )zval_used_for_init;
              while (1) {
                __s = target_ce->name;
                __l = (int )target_ce->name_length;
                __z = & class_name_zv;
                __z->value.str.len = __l;
                tmp___6 = _estrndup(__s, (unsigned int )__l);
                __z->value.str.val = (char *)tmp___6;
                __z->type = (unsigned char)6;
                break;
              }
              class_name_literal = zend_append_individual_literal(& fe->op_array, (zval const   *)(& class_name_zv));
              (opcode_copy + i)->op1.zv = & (fe->op_array.literals + class_name_literal)->constant;
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
    }
    if ((int )(opcode_copy + i)->op2_type != 1) {
      switch ((int )(opcode_copy + i)->opcode) {
      case 43: 
      case 44: 
      case 46: 
      case 47: 
      case 152: 
      case 158: 
      if ((opcode_copy + i)->op2.jmp_addr) {
        if ((unsigned int )(opcode_copy + i)->op2.jmp_addr >= (unsigned int )fe->op_array.opcodes) {
          if ((unsigned int )(opcode_copy + i)->op2.jmp_addr < (unsigned int )(fe->op_array.opcodes + fe->op_array.last)) {
            (opcode_copy + i)->op2.jmp_addr = opcode_copy + ((fe->op_array.opcodes + i)->op2.jmp_addr - fe->op_array.opcodes);
          } else {

          }
        } else {

        }
      } else {

      }
      break;
      }
    } else {
      if (target_ce) {
        if ((int )((opcode_copy + i)->op2.zv)->type == 0) {
          if (((opcode_copy + i)->op2.zv)->value.lval == 288L) {
            if (288U != (target_ce->ce_flags & 288U)) {
              class_name_zv = (struct _zval_struct )zval_used_for_init;
              while (1) {
                __s___0 = target_ce->name;
                __l___0 = (int )target_ce->name_length;
                __z___0 = & class_name_zv;
                __z___0->value.str.len = __l___0;
                tmp___7 = _estrndup(__s___0, (unsigned int )__l___0);
                __z___0->value.str.val = (char *)tmp___7;
                __z___0->type = (unsigned char)6;
                break;
              }
              class_name_literal = zend_append_individual_literal(& fe->op_array, (zval const   *)(& class_name_zv));
              (opcode_copy + i)->op2.zv = & (fe->op_array.literals + class_name_literal)->constant;
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
    }
    i ++;
  }
  fe->op_array.opcodes = opcode_copy;
  fe->op_array.function_name = (char const   *)newname;
  if (fe->op_array.arg_info) {
    tmp___8 = _safe_emalloc(sizeof(zend_arg_info ), fe->op_array.num_args, 0U);
    tmpArginfo = (zend_arg_info *)tmp___8;
    i = 0;
    while ((zend_uint )i < fe->op_array.num_args) {
      *(tmpArginfo + i) = *(fe->op_array.arg_info + i);
      tmp___9 = _estrndup((tmpArginfo + i)->name, (tmpArginfo + i)->name_len);
      (tmpArginfo + i)->name = (char const   *)tmp___9;
      if ((tmpArginfo + i)->class_name) {
        tmp___10 = _estrndup((tmpArginfo + i)->class_name, (tmpArginfo + i)->class_name_len);
        (tmpArginfo + i)->class_name = (char const   *)tmp___10;
      } else {

      }
      i ++;
    }
    fe->op_array.arg_info = tmpArginfo;
  } else {

  }
  tmp___11 = _estrndup(fe->op_array.doc_comment, fe->op_array.doc_comment_len);
  fe->op_array.doc_comment = (char const   *)tmp___11;
  tmp___12 = _estrndup((char const   *)((char *)fe->op_array.try_catch_array), sizeof(zend_try_catch_element ) * (unsigned int )fe->op_array.last_try_catch);
  fe->op_array.try_catch_array = (zend_try_catch_element *)tmp___12;
  tmp___13 = _estrndup((char const   *)((char *)fe->op_array.brk_cont_array), sizeof(zend_brk_cont_element ) * (unsigned int )fe->op_array.last_brk_cont);
  fe->op_array.brk_cont_array = (zend_brk_cont_element *)tmp___13;
  return;
}
}
static void zend_add_magic_methods(zend_class_entry *ce , char const   *mname , uint mname_len , zend_function *fe ) 
{ char *lowercase_name ;
  void __attribute__((__visibility__("default")))  *tmp ;
  char const __attribute__((__visibility__("default")))  *tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___7 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  size_t tmp___13 ;
  size_t tmp___14 ;
  size_t tmp___15 ;
  size_t tmp___16 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
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
  int tmp___25 ;
  size_t tmp___26 ;
  size_t tmp___27 ;
  size_t tmp___28 ;
  size_t tmp___29 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___33 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  size_t tmp___39 ;
  size_t tmp___40 ;
  size_t tmp___41 ;
  size_t tmp___42 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
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
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  size_t tmp___52 ;
  size_t tmp___53 ;
  size_t tmp___54 ;
  size_t tmp___55 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___56 ;
  int tmp___57 ;
  int tmp___58 ;
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___59 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___60 ;
  int tmp___61 ;
  int tmp___62 ;
  int tmp___63 ;
  int tmp___64 ;
  size_t tmp___65 ;
  size_t tmp___66 ;
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
  int tmp___76 ;
  int tmp___77 ;
  size_t tmp___78 ;
  size_t tmp___79 ;
  size_t tmp___80 ;
  size_t tmp___81 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___82 ;
  int tmp___83 ;
  int tmp___84 ;
  unsigned char const   *__s2___5 ;
  register int __result___11 ;
  int tmp___85 ;
  unsigned char const   *__s1___5 ;
  register int __result___12 ;
  int tmp___86 ;
  int tmp___87 ;
  int tmp___88 ;
  int tmp___89 ;
  int tmp___90 ;
  size_t tmp___91 ;
  size_t tmp___92 ;
  size_t tmp___93 ;
  size_t tmp___94 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___95 ;
  int tmp___96 ;
  int tmp___97 ;
  unsigned char const   *__s2___6 ;
  register int __result___13 ;
  int tmp___98 ;
  unsigned char const   *__s1___6 ;
  register int __result___14 ;
  int tmp___99 ;
  int tmp___100 ;
  int tmp___101 ;
  int tmp___102 ;
  int tmp___103 ;
  size_t tmp___104 ;
  size_t tmp___105 ;
  size_t tmp___106 ;
  size_t tmp___107 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___108 ;
  int tmp___109 ;
  int tmp___110 ;
  unsigned char const   *__s2___7 ;
  register int __result___15 ;
  int tmp___111 ;
  unsigned char const   *__s1___7 ;
  register int __result___16 ;
  int tmp___112 ;
  int tmp___113 ;
  int tmp___114 ;
  int tmp___115 ;
  int tmp___116 ;
  size_t tmp___117 ;
  size_t tmp___118 ;
  size_t tmp___119 ;
  size_t tmp___120 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___121 ;
  int tmp___122 ;
  int tmp___123 ;
  unsigned char const   *__s2___8 ;
  register int __result___17 ;
  int tmp___124 ;
  unsigned char const   *__s1___8 ;
  register int __result___18 ;
  int tmp___125 ;
  int tmp___126 ;
  int tmp___127 ;
  int tmp___128 ;
  int tmp___129 ;
  size_t tmp___130 ;
  size_t tmp___131 ;

  {
  if (0) {
    if (0) {
      __s1_len___8 = strlen(mname);
      __s2_len___8 = strlen("__clone");
      if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
        goto _L___18;
      } else {
        if (__s1_len___8 >= 4U) {
          _L___18: /* CIL Label */ 
          if (! ((unsigned int )((void const   *)("__clone" + 1)) - (unsigned int )((void const   *)"__clone") == 1U)) {
            tmp___127 = 1;
          } else {
            if (__s2_len___8 >= 4U) {
              tmp___127 = 1;
            } else {
              tmp___127 = 0;
            }
          }
        } else {
          tmp___127 = 0;
        }
      }
      if (tmp___127) {
        tmp___122 = __builtin_strcmp(mname, "__clone");
        tmp___126 = tmp___122;
      } else {
        tmp___125 = __builtin_strcmp(mname, "__clone");
        tmp___126 = tmp___125;
      }
    } else {
      tmp___125 = __builtin_strcmp(mname, "__clone");
      tmp___126 = tmp___125;
    }
    tmp___129 = tmp___126;
  } else {
    tmp___128 = strncmp(mname, "__clone", mname_len);
    tmp___129 = tmp___128;
  }
  if (tmp___129) {
    if (0) {
      if (0) {
        __s1_len___7 = strlen(mname);
        __s2_len___7 = strlen("__construct");
        if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
          goto _L___16;
        } else {
          if (__s1_len___7 >= 4U) {
            _L___16: /* CIL Label */ 
            if (! ((unsigned int )((void const   *)("__construct" + 1)) - (unsigned int )((void const   *)"__construct") == 1U)) {
              tmp___114 = 1;
            } else {
              if (__s2_len___7 >= 4U) {
                tmp___114 = 1;
              } else {
                tmp___114 = 0;
              }
            }
          } else {
            tmp___114 = 0;
          }
        }
        if (tmp___114) {
          tmp___109 = __builtin_strcmp(mname, "__construct");
          tmp___113 = tmp___109;
        } else {
          tmp___112 = __builtin_strcmp(mname, "__construct");
          tmp___113 = tmp___112;
        }
      } else {
        tmp___112 = __builtin_strcmp(mname, "__construct");
        tmp___113 = tmp___112;
      }
      tmp___116 = tmp___113;
    } else {
      tmp___115 = strncmp(mname, "__construct", mname_len);
      tmp___116 = tmp___115;
    }
    if (tmp___116) {
      if (0) {
        if (0) {
          __s1_len___6 = strlen(mname);
          __s2_len___6 = strlen("__destruct");
          if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
            goto _L___14;
          } else {
            if (__s1_len___6 >= 4U) {
              _L___14: /* CIL Label */ 
              if (! ((unsigned int )((void const   *)("__destruct" + 1)) - (unsigned int )((void const   *)"__destruct") == 1U)) {
                tmp___101 = 1;
              } else {
                if (__s2_len___6 >= 4U) {
                  tmp___101 = 1;
                } else {
                  tmp___101 = 0;
                }
              }
            } else {
              tmp___101 = 0;
            }
          }
          if (tmp___101) {
            tmp___96 = __builtin_strcmp(mname, "__destruct");
            tmp___100 = tmp___96;
          } else {
            tmp___99 = __builtin_strcmp(mname, "__destruct");
            tmp___100 = tmp___99;
          }
        } else {
          tmp___99 = __builtin_strcmp(mname, "__destruct");
          tmp___100 = tmp___99;
        }
        tmp___103 = tmp___100;
      } else {
        tmp___102 = strncmp(mname, "__destruct", mname_len);
        tmp___103 = tmp___102;
      }
      if (tmp___103) {
        if (0) {
          if (0) {
            __s1_len___5 = strlen(mname);
            __s2_len___5 = strlen("__get");
            if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
              goto _L___12;
            } else {
              if (__s1_len___5 >= 4U) {
                _L___12: /* CIL Label */ 
                if (! ((unsigned int )((void const   *)("__get" + 1)) - (unsigned int )((void const   *)"__get") == 1U)) {
                  tmp___88 = 1;
                } else {
                  if (__s2_len___5 >= 4U) {
                    tmp___88 = 1;
                  } else {
                    tmp___88 = 0;
                  }
                }
              } else {
                tmp___88 = 0;
              }
            }
            if (tmp___88) {
              tmp___83 = __builtin_strcmp(mname, "__get");
              tmp___87 = tmp___83;
            } else {
              tmp___86 = __builtin_strcmp(mname, "__get");
              tmp___87 = tmp___86;
            }
          } else {
            tmp___86 = __builtin_strcmp(mname, "__get");
            tmp___87 = tmp___86;
          }
          tmp___90 = tmp___87;
        } else {
          tmp___89 = strncmp(mname, "__get", mname_len);
          tmp___90 = tmp___89;
        }
        if (tmp___90) {
          if (0) {
            if (0) {
              __s1_len___4 = strlen(mname);
              __s2_len___4 = strlen("__set");
              if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
                goto _L___10;
              } else {
                if (__s1_len___4 >= 4U) {
                  _L___10: /* CIL Label */ 
                  if (! ((unsigned int )((void const   *)("__set" + 1)) - (unsigned int )((void const   *)"__set") == 1U)) {
                    tmp___75 = 1;
                  } else {
                    if (__s2_len___4 >= 4U) {
                      tmp___75 = 1;
                    } else {
                      tmp___75 = 0;
                    }
                  }
                } else {
                  tmp___75 = 0;
                }
              }
              if (tmp___75) {
                tmp___70 = __builtin_strcmp(mname, "__set");
                tmp___74 = tmp___70;
              } else {
                tmp___73 = __builtin_strcmp(mname, "__set");
                tmp___74 = tmp___73;
              }
            } else {
              tmp___73 = __builtin_strcmp(mname, "__set");
              tmp___74 = tmp___73;
            }
            tmp___77 = tmp___74;
          } else {
            tmp___76 = strncmp(mname, "__set", mname_len);
            tmp___77 = tmp___76;
          }
          if (tmp___77) {
            if (0) {
              if (0) {
                __s1_len___3 = strlen(mname);
                __s2_len___3 = strlen("__call");
                if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
                  goto _L___8;
                } else {
                  if (__s1_len___3 >= 4U) {
                    _L___8: /* CIL Label */ 
                    if (! ((unsigned int )((void const   *)("__call" + 1)) - (unsigned int )((void const   *)"__call") == 1U)) {
                      tmp___62 = 1;
                    } else {
                      if (__s2_len___3 >= 4U) {
                        tmp___62 = 1;
                      } else {
                        tmp___62 = 0;
                      }
                    }
                  } else {
                    tmp___62 = 0;
                  }
                }
                if (tmp___62) {
                  tmp___57 = __builtin_strcmp(mname, "__call");
                  tmp___61 = tmp___57;
                } else {
                  tmp___60 = __builtin_strcmp(mname, "__call");
                  tmp___61 = tmp___60;
                }
              } else {
                tmp___60 = __builtin_strcmp(mname, "__call");
                tmp___61 = tmp___60;
              }
              tmp___64 = tmp___61;
            } else {
              tmp___63 = strncmp(mname, "__call", mname_len);
              tmp___64 = tmp___63;
            }
            if (tmp___64) {
              if (0) {
                if (0) {
                  __s1_len___2 = strlen(mname);
                  __s2_len___2 = strlen("__unset");
                  if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
                    goto _L___6;
                  } else {
                    if (__s1_len___2 >= 4U) {
                      _L___6: /* CIL Label */ 
                      if (! ((unsigned int )((void const   *)("__unset" + 1)) - (unsigned int )((void const   *)"__unset") == 1U)) {
                        tmp___49 = 1;
                      } else {
                        if (__s2_len___2 >= 4U) {
                          tmp___49 = 1;
                        } else {
                          tmp___49 = 0;
                        }
                      }
                    } else {
                      tmp___49 = 0;
                    }
                  }
                  if (tmp___49) {
                    tmp___44 = __builtin_strcmp(mname, "__unset");
                    tmp___48 = tmp___44;
                  } else {
                    tmp___47 = __builtin_strcmp(mname, "__unset");
                    tmp___48 = tmp___47;
                  }
                } else {
                  tmp___47 = __builtin_strcmp(mname, "__unset");
                  tmp___48 = tmp___47;
                }
                tmp___51 = tmp___48;
              } else {
                tmp___50 = strncmp(mname, "__unset", mname_len);
                tmp___51 = tmp___50;
              }
              if (tmp___51) {
                if (0) {
                  if (0) {
                    __s1_len___1 = strlen(mname);
                    __s2_len___1 = strlen("__isset");
                    if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
                      goto _L___4;
                    } else {
                      if (__s1_len___1 >= 4U) {
                        _L___4: /* CIL Label */ 
                        if (! ((unsigned int )((void const   *)("__isset" + 1)) - (unsigned int )((void const   *)"__isset") == 1U)) {
                          tmp___36 = 1;
                        } else {
                          if (__s2_len___1 >= 4U) {
                            tmp___36 = 1;
                          } else {
                            tmp___36 = 0;
                          }
                        }
                      } else {
                        tmp___36 = 0;
                      }
                    }
                    if (tmp___36) {
                      tmp___31 = __builtin_strcmp(mname, "__isset");
                      tmp___35 = tmp___31;
                    } else {
                      tmp___34 = __builtin_strcmp(mname, "__isset");
                      tmp___35 = tmp___34;
                    }
                  } else {
                    tmp___34 = __builtin_strcmp(mname, "__isset");
                    tmp___35 = tmp___34;
                  }
                  tmp___38 = tmp___35;
                } else {
                  tmp___37 = strncmp(mname, "__isset", mname_len);
                  tmp___38 = tmp___37;
                }
                if (tmp___38) {
                  if (0) {
                    if (0) {
                      __s1_len___0 = strlen(mname);
                      __s2_len___0 = strlen("__callstatic");
                      if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
                        goto _L___2;
                      } else {
                        if (__s1_len___0 >= 4U) {
                          _L___2: /* CIL Label */ 
                          if (! ((unsigned int )((void const   *)("__callstatic" + 1)) - (unsigned int )((void const   *)"__callstatic") == 1U)) {
                            tmp___23 = 1;
                          } else {
                            if (__s2_len___0 >= 4U) {
                              tmp___23 = 1;
                            } else {
                              tmp___23 = 0;
                            }
                          }
                        } else {
                          tmp___23 = 0;
                        }
                      }
                      if (tmp___23) {
                        tmp___18 = __builtin_strcmp(mname, "__callstatic");
                        tmp___22 = tmp___18;
                      } else {
                        tmp___21 = __builtin_strcmp(mname, "__callstatic");
                        tmp___22 = tmp___21;
                      }
                    } else {
                      tmp___21 = __builtin_strcmp(mname, "__callstatic");
                      tmp___22 = tmp___21;
                    }
                    tmp___25 = tmp___22;
                  } else {
                    tmp___24 = strncmp(mname, "__callstatic", mname_len);
                    tmp___25 = tmp___24;
                  }
                  if (tmp___25) {
                    if (0) {
                      if (0) {
                        __s1_len = strlen(mname);
                        __s2_len = strlen("__tostring");
                        if (! ((unsigned int )((void const   *)(mname + 1)) - (unsigned int )((void const   *)mname) == 1U)) {
                          goto _L___0;
                        } else {
                          if (__s1_len >= 4U) {
                            _L___0: /* CIL Label */ 
                            if (! ((unsigned int )((void const   *)("__tostring" + 1)) - (unsigned int )((void const   *)"__tostring") == 1U)) {
                              tmp___10 = 1;
                            } else {
                              if (__s2_len >= 4U) {
                                tmp___10 = 1;
                              } else {
                                tmp___10 = 0;
                              }
                            }
                          } else {
                            tmp___10 = 0;
                          }
                        }
                        if (tmp___10) {
                          tmp___5 = __builtin_strcmp(mname, "__tostring");
                          tmp___9 = tmp___5;
                        } else {
                          tmp___8 = __builtin_strcmp(mname, "__tostring");
                          tmp___9 = tmp___8;
                        }
                      } else {
                        tmp___8 = __builtin_strcmp(mname, "__tostring");
                        tmp___9 = tmp___8;
                      }
                      tmp___12 = tmp___9;
                    } else {
                      tmp___11 = strncmp(mname, "__tostring", mname_len);
                      tmp___12 = tmp___11;
                    }
                    if (tmp___12) {
                      if (ce->name_length + 1U == mname_len) {
                        tmp = _emalloc(ce->name_length + 1U);
                        lowercase_name = (char *)tmp;
                        zend_str_tolower_copy(lowercase_name, ce->name, ce->name_length);
                        tmp___0 = (*zend_new_interned_string)((char const   *)lowercase_name, (int )(ce->name_length + 1U), 1);
                        lowercase_name = (char *)tmp___0;
                        tmp___1 = memcmp((void const   *)mname, (void const   *)lowercase_name, mname_len);
                        if (tmp___1) {

                        } else {
                          if (ce->constructor) {
                            zend_error(1 << 6L, "%s has colliding constructor definitions coming from traits", ce->name);
                          } else {

                          }
                          ce->constructor = fe;
                          fe->common.fn_flags |= 8192U;
                        }
                        while (1) {
                          if ((unsigned int )lowercase_name >= (unsigned int )compiler_globals.interned_strings_start) {
                            if ((unsigned int )lowercase_name < (unsigned int )compiler_globals.interned_strings_end) {

                            } else {
                              _efree((void *)lowercase_name);
                            }
                          } else {
                            _efree((void *)lowercase_name);
                          }
                          break;
                        }
                      } else {

                      }
                    } else {
                      ce->__tostring = fe;
                    }
                  } else {
                    ce->__callstatic = fe;
                  }
                } else {
                  ce->__isset = fe;
                }
              } else {
                ce->__unset = fe;
              }
            } else {
              ce->__call = fe;
            }
          } else {
            ce->__set = fe;
          }
        } else {
          ce->__get = fe;
        }
      } else {
        ce->destructor = fe;
        fe->common.fn_flags |= 16384U;
      }
    } else {
      if (ce->constructor) {
        zend_error(1 << 6L, "%s has colliding constructor definitions coming from traits", ce->name);
      } else {

      }
      ce->constructor = fe;
      fe->common.fn_flags |= 8192U;
    }
  } else {
    ce->clone = fe;
    fe->common.fn_flags |= 32768U;
  }
  return;
}
}
static int zend_traits_merge_functions_to_class(zend_function *fn , int num_args , va_list args , zend_hash_key *hash_key ) 
{ zend_class_entry *ce ;
  zend_class_entry *tmp ;
  int add ;
  zend_function *existing_fn ;
  zend_function fn_copy ;
  zend_function *fn_copy_p ;
  zend_function *prototype ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_function *parent_function ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  tmp = __builtin_va_arg(args, zend_class_entry *);
  ce = tmp;
  add = 0;
  existing_fn = (zend_function *)((void *)0);
  prototype = (zend_function *)((void *)0);
  tmp___0 = zend_hash_quick_find((HashTable const   *)(& ce->function_table), hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **)(& existing_fn));
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    add = 1;
  } else {
    if ((unsigned int )existing_fn->common.scope != (unsigned int )ce) {
      add = 1;
    } else {

    }
  }
  if (add) {
    if (ce->parent) {
      tmp___1 = zend_hash_quick_find((HashTable const   *)(& (ce->parent)->function_table), hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void **)(& parent_function));
      if (tmp___1 != (int __attribute__((__visibility__("default")))  )-1) {
        prototype = parent_function;
        if (fn->common.fn_flags & 2U) {
          zend_function_dtor(fn);
          return (1);
        } else {

        }
      } else {

      }
    } else {

    }
    fn->common.scope = ce;
    fn->common.prototype = prototype;
    if (prototype) {
      if (prototype->common.fn_flags & 8U) {
        fn->common.fn_flags |= 8U;
      } else {
        if (prototype->common.fn_flags & 2U) {
          fn->common.fn_flags |= 8U;
        } else {
          goto _L;
        }
      }
    } else {
      _L: /* CIL Label */ 
      if (fn->common.fn_flags & 8U) {
        fn->common.fn_flags -= 8U;
      } else {

      }
    }
    if (prototype) {
      do_inheritance_check_on_method(fn, prototype);
    } else {

    }
    if (existing_fn) {
      if (existing_fn->common.fn_flags & 2U) {
        do_inheritance_check_on_method(fn, existing_fn);
      } else {

      }
    } else {

    }
    if (existing_fn) {
      if ((unsigned int )existing_fn->common.scope != (unsigned int )ce) {
        if ((fn->common.fn_flags & 2U) == 0U) {
          zend_hash_del_key_or_index(& ce->function_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, 2);
        } else {

        }
      } else {

      }
    } else {

    }
    if (fn->common.fn_flags & 2U) {
      ce->ce_flags |= 16U;
    } else {

    }
    if (fn->op_array.static_variables) {
      ce->ce_flags |= 8388608U;
    } else {

    }
    fn_copy = *fn;
    tmp___2 = _estrdup(fn->common.function_name);
    zend_traits_duplicate_function(& fn_copy, ce, (char *)tmp___2);
    tmp___3 = _zend_hash_quick_add_or_update(& ce->function_table, hash_key->arKey, hash_key->nKeyLength, hash_key->h, (void *)(& fn_copy), sizeof(zend_function ), (void **)(& fn_copy_p), 1);
    if (tmp___3 == (int __attribute__((__visibility__("default")))  )-1) {
      zend_error(1 << 6L, "Trait method %s has not been applied, because failure occured during updating class method table", hash_key->arKey);
    } else {

    }
    zend_add_magic_methods(ce, hash_key->arKey, hash_key->nKeyLength, fn_copy_p);
    zend_function_dtor(fn);
  } else {
    zend_function_dtor(fn);
  }
  return (1);
}
}
static int zend_traits_copy_functions(zend_function *fn , int num_args , va_list args , zend_hash_key *hash_key ) 
{ HashTable *target ;
  zend_class_entry *target_ce ;
  zend_trait_alias **aliases ;
  HashTable *exclude_table ;
  char *lcname ;
  unsigned int fnname_len ;
  zend_function fn_copy ;
  void *dummy ;
  size_t i ;
  char __attribute__((__visibility__("default")))  *tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  char __attribute__((__visibility__("default")))  *tmp___3 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;

  {
  i = (size_t )0;
  target = __builtin_va_arg(args, HashTable *);
  target_ce = __builtin_va_arg(args, zend_class_entry *);
  aliases = __builtin_va_arg(args, zend_trait_alias **);
  exclude_table = __builtin_va_arg(args, HashTable *);
  fnname_len = strlen(fn->common.function_name);
  if (aliases) {
    while (*(aliases + i)) {
      if ((unsigned int )(*(aliases + i))->alias != (unsigned int )((void *)0)) {
        if (! ((*(aliases + i))->trait_method)->ce) {
          goto _L;
        } else {
          if ((unsigned int )fn->common.scope == (unsigned int )((*(aliases + i))->trait_method)->ce) {
            _L: /* CIL Label */ 
            if (((*(aliases + i))->trait_method)->mname_len == fnname_len) {
              tmp___2 = zend_binary_strcasecmp(((*(aliases + i))->trait_method)->method_name, ((*(aliases + i))->trait_method)->mname_len, fn->common.function_name, fnname_len);
              if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {
                fn_copy = *fn;
                tmp = _estrndup((*(aliases + i))->alias, (*(aliases + i))->alias_len);
                zend_traits_duplicate_function(& fn_copy, (zend_class_entry *)((void *)0), (char *)tmp);
                if ((*(aliases + i))->modifiers) {
                  fn_copy.common.fn_flags = (*(aliases + i))->modifiers;
                  if (! ((*(aliases + i))->modifiers & 1792U)) {
                    fn_copy.common.fn_flags |= 256U;
                  } else {

                  }
                  fn_copy.common.fn_flags |= fn->common.fn_flags ^ (fn->common.fn_flags & 1792U);
                } else {

                }
                tmp___0 = zend_str_tolower_dup((*(aliases + i))->alias, (*(aliases + i))->alias_len);
                lcname = (char *)tmp___0;
                tmp___1 = _zend_hash_add_or_update(target, (char const   *)lcname, (*(aliases + i))->alias_len + 1U, (void *)(& fn_copy), sizeof(zend_function ), (void **)((void *)0), 1 << 1);
                if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
                  zend_error(1 << 6L, "Failed to add aliased trait method (%s) to the trait table. There is probably already a trait method with the same name", fn_copy.common.function_name);
                } else {

                }
                _efree((void *)lcname);
                if (! ((*(aliases + i))->trait_method)->ce) {
                  ((*(aliases + i))->trait_method)->ce = fn->common.scope;
                } else {

                }
              } else {

              }
            } else {

            }
          } else {

          }
        }
      } else {

      }
      i ++;
    }
  } else {

  }
  tmp___3 = zend_str_tolower_dup(fn->common.function_name, fnname_len);
  lcname = (char *)tmp___3;
  if ((unsigned int )exclude_table == (unsigned int )((void *)0)) {
    goto _L___1;
  } else {
    tmp___7 = zend_hash_find((HashTable const   *)exclude_table, (char const   *)lcname, fnname_len, & dummy);
    if (tmp___7 == (int __attribute__((__visibility__("default")))  )-1) {
      _L___1: /* CIL Label */ 
      fn_copy = *fn;
      tmp___4 = _estrndup(fn->common.function_name, fnname_len);
      zend_traits_duplicate_function(& fn_copy, (zend_class_entry *)((void *)0), (char *)tmp___4);
      if (aliases) {
        i = 0U;
        while (*(aliases + i)) {
          if ((unsigned int )(*(aliases + i))->alias == (unsigned int )((void *)0)) {
            if ((*(aliases + i))->modifiers != 0U) {
              if (! ((*(aliases + i))->trait_method)->ce) {
                goto _L___0;
              } else {
                if ((unsigned int )fn->common.scope == (unsigned int )((*(aliases + i))->trait_method)->ce) {
                  _L___0: /* CIL Label */ 
                  if (((*(aliases + i))->trait_method)->mname_len == fnname_len) {
                    tmp___5 = zend_binary_strcasecmp(((*(aliases + i))->trait_method)->method_name, ((*(aliases + i))->trait_method)->mname_len, fn->common.function_name, fnname_len);
                    if (tmp___5 == (int __attribute__((__visibility__("default")))  )0) {
                      fn_copy.common.fn_flags = (*(aliases + i))->modifiers;
                      if (! ((*(aliases + i))->modifiers & 1792U)) {
                        fn_copy.common.fn_flags |= 256U;
                      } else {

                      }
                      fn_copy.common.fn_flags |= fn->common.fn_flags ^ (fn->common.fn_flags & 1792U);
                      if (! ((*(aliases + i))->trait_method)->ce) {
                        ((*(aliases + i))->trait_method)->ce = fn->common.scope;
                      } else {

                      }
                    } else {

                    }
                  } else {

                  }
                } else {

                }
              }
            } else {

            }
          } else {

          }
          i ++;
        }
      } else {

      }
      tmp___6 = _zend_hash_add_or_update(target, (char const   *)lcname, fnname_len + 1U, (void *)(& fn_copy), sizeof(zend_function ), (void **)((void *)0), 1 << 1);
      if (tmp___6 == (int __attribute__((__visibility__("default")))  )-1) {
        zend_error(1 << 6L, "Failed to add trait method (%s) to the trait table. There is probably already a trait method with the same name", fn_copy.common.function_name);
      } else {

      }
    } else {

    }
  }
  _efree((void *)lcname);
  return (0);
}
}
static void zend_traits_copy_trait_function_table(HashTable *target , zend_class_entry *target_ce , HashTable *source , zend_trait_alias **aliases , HashTable *exclude_table ) 
{ 

  {
  zend_hash_apply_with_arguments(source, (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& zend_traits_copy_functions), 4, target, target_ce, aliases, exclude_table);
  return;
}
}
static void zend_traits_init_trait_structures(zend_class_entry *ce ) 
{ size_t i ;
  size_t j ;
  zend_trait_precedence *cur_precedence ;
  zend_trait_method_reference *cur_method_ref ;
  char *lcname ;
  zend_bool method_exists ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  char *class_name ;
  zend_uint name_length ;
  size_t tmp___2 ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___3 ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___4 ;
  char __attribute__((__visibility__("default")))  *tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;

  {
  j = (size_t )0;
  if (ce->trait_precedences) {
    i = 0U;
    while (1) {
      cur_precedence = *(ce->trait_precedences + i);
      if (cur_precedence) {

      } else {
        break;
      }
      if (cur_precedence->exclude_from_classes) {
        cur_method_ref = cur_precedence->trait_method;
        tmp = zend_fetch_class(cur_method_ref->class_name, cur_method_ref->cname_len, 14);
        (cur_precedence->trait_method)->ce = (zend_class_entry *)tmp;
        tmp___0 = zend_str_tolower_dup(cur_method_ref->method_name, cur_method_ref->mname_len);
        lcname = (char *)tmp___0;
        tmp___1 = zend_hash_exists((HashTable const   *)(& (cur_method_ref->ce)->function_table), (char const   *)lcname, cur_method_ref->mname_len + 1U);
        method_exists = (unsigned char )tmp___1;
        _efree((void *)lcname);
        if (! method_exists) {
          zend_error(1 << 6L, "A precedence rule was defined for %s::%s but this method does not exist", (cur_method_ref->ce)->name, cur_method_ref->method_name);
        } else {

        }
        j = 0U;
        while (*(cur_precedence->exclude_from_classes + j)) {
          class_name = (char *)*(cur_precedence->exclude_from_classes + j);
          tmp___2 = strlen((char const   *)class_name);
          name_length = tmp___2;
          tmp___3 = zend_fetch_class((char const   *)class_name, name_length, 14);
          *(cur_precedence->exclude_from_classes + j) = (zend_class_entry *)tmp___3;
          _efree((void *)class_name);
          j ++;
        }
      } else {

      }
      i ++;
    }
  } else {

  }
  if (ce->trait_aliases) {
    i = 0U;
    while (*(ce->trait_aliases + i)) {
      if (((*(ce->trait_aliases + i))->trait_method)->class_name) {
        cur_method_ref = (*(ce->trait_aliases + i))->trait_method;
        tmp___4 = zend_fetch_class(cur_method_ref->class_name, cur_method_ref->cname_len, 14);
        cur_method_ref->ce = (zend_class_entry *)tmp___4;
        tmp___5 = zend_str_tolower_dup(cur_method_ref->method_name, cur_method_ref->mname_len);
        lcname = (char *)tmp___5;
        tmp___6 = zend_hash_exists((HashTable const   *)(& (cur_method_ref->ce)->function_table), (char const   *)lcname, cur_method_ref->mname_len + 1U);
        method_exists = (unsigned char )tmp___6;
        _efree((void *)lcname);
        if (! method_exists) {
          zend_error(1 << 6L, "An alias was defined for %s::%s but this method does not exist", (cur_method_ref->ce)->name, cur_method_ref->method_name);
        } else {

        }
      } else {

      }
      i ++;
    }
  } else {

  }
  return;
}
}
static void zend_traits_compile_exclude_table(HashTable *exclude_table , zend_trait_precedence **precedences , zend_class_entry *trait ) 
{ size_t i ;
  size_t j ;
  zend_uint lcname_len ;
  char *lcname ;
  char __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  i = (size_t )0;
  if (! precedences) {
    return;
  } else {

  }
  while (*(precedences + i)) {
    if ((*(precedences + i))->exclude_from_classes) {
      j = 0U;
      while (*((*(precedences + i))->exclude_from_classes + j)) {
        if ((unsigned int )*((*(precedences + i))->exclude_from_classes + j) == (unsigned int )trait) {
          lcname_len = ((*(precedences + i))->trait_method)->mname_len;
          tmp = zend_str_tolower_dup(((*(precedences + i))->trait_method)->method_name, lcname_len);
          lcname = (char *)tmp;
          tmp___0 = _zend_hash_add_or_update(exclude_table, (char const   *)lcname, lcname_len, (void *)0, 0U, (void **)((void *)0), 1 << 1);
          if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
            _efree((void *)lcname);
            zend_error(1 << 6L, "Failed to evaluate a trait precedence (%s). Method of trait %s was defined to be excluded multiple times", ((*(precedences + i))->trait_method)->method_name, trait->name);
          } else {

          }
          _efree((void *)lcname);
        } else {

        }
        j ++;
      }
    } else {

    }
    i ++;
  }
  return;
}
}
static void zend_do_traits_method_binding(zend_class_entry *ce ) 
{ HashTable **function_tables ;
  HashTable *resulting_table ;
  HashTable exclude_table ;
  size_t i ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  tmp = malloc(sizeof(HashTable *) * ce->num_traits);
  function_tables = (HashTable **)tmp;
  tmp___0 = malloc(sizeof(HashTable ));
  resulting_table = (HashTable *)tmp___0;
  _zend_hash_init_ex(resulting_table, 10U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void *pDest ))((void *)0), (unsigned char)1, (unsigned char)0);
  i = 0U;
  while (i < ce->num_traits) {
    tmp___1 = malloc(sizeof(HashTable ));
    *(function_tables + i) = (HashTable *)tmp___1;
    _zend_hash_init_ex(*(function_tables + i), (*(ce->traits + i))->function_table.nNumOfElements, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void *pDest ))((void *)0), (unsigned char)1, (unsigned char)0);
    if (ce->trait_precedences) {
      _zend_hash_init_ex(& exclude_table, 2U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void *pDest ))((void *)0), (unsigned char)0, (unsigned char)0);
      zend_traits_compile_exclude_table(& exclude_table, ce->trait_precedences, *(ce->traits + i));
      zend_traits_copy_trait_function_table(*(function_tables + i), ce, & (*(ce->traits + i))->function_table, ce->trait_aliases, & exclude_table);
      zend_hash_graceful_destroy(& exclude_table);
    } else {
      zend_traits_copy_trait_function_table(*(function_tables + i), ce, & (*(ce->traits + i))->function_table, ce->trait_aliases, (HashTable *)((void *)0));
    }
    i ++;
  }
  i = 0U;
  while (i < ce->num_traits) {
    zend_hash_apply_with_arguments(*(function_tables + i), (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& zend_traits_merge_functions), 5, i, ce->num_traits, resulting_table, function_tables, ce);
    i ++;
  }
  zend_hash_apply_with_arguments(resulting_table, (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& zend_traits_merge_functions_to_class), 1, ce);
  i = 0U;
  while (i < ce->num_traits) {
    zend_hash_graceful_destroy(*(function_tables + i));
    free((void *)*(function_tables + i));
    i ++;
  }
  free((void *)function_tables);
  zend_hash_graceful_destroy(resulting_table);
  free((void *)resulting_table);
  return;
}
}
static zend_class_entry *find_first_definition(zend_class_entry *ce , size_t current_trait , char const   *prop_name , int prop_name_length , ulong prop_hash , zend_class_entry *coliding_ce ) 
{ size_t i ;
  zend_property_info *coliding_prop ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  i = 0U;
  while (1) {
    if (i < current_trait) {
      if (i < ce->num_traits) {

      } else {
        break;
      }
    } else {
      break;
    }
    tmp = zend_hash_quick_find((HashTable const   *)(& (*(ce->traits + i))->properties_info), prop_name, (unsigned int )(prop_name_length + 1), prop_hash, (void **)(& coliding_prop));
    if (tmp == (int __attribute__((__visibility__("default")))  )0) {
      return (*(ce->traits + i));
    } else {

    }
    i ++;
  }
  return (coliding_ce);
}
}
static void zend_do_traits_property_binding(zend_class_entry *ce ) 
{ size_t i ;
  zend_property_info *property_info ;
  zend_property_info *coliding_prop ;
  zval compare_result ;
  char const   *prop_name ;
  int prop_name_length ;
  ulong prop_hash ;
  char const   *class_name_unused ;
  zend_bool prop_found ;
  zend_bool not_compatible ;
  zval *prop_value ;
  int __attribute__((__visibility__("default")))  tmp ;
  size_t tmp___0 ;
  ulong __attribute__((__visibility__("default")))  tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  int tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  int tmp___6 ;
  zend_class_entry *tmp___7 ;
  zend_class_entry *tmp___8 ;
  int __attribute__((__visibility__("default")))  tmp___9 ;

  {
  i = 0U;
  while (i < ce->num_traits) {
    zend_hash_internal_pointer_reset_ex(& (*(ce->traits + i))->properties_info, (HashPosition *)((void *)0));
    while (1) {
      tmp___9 = zend_hash_get_current_data_ex(& (*(ce->traits + i))->properties_info, (void **)((void *)(& property_info)), (HashPosition *)((void *)0));
      if (tmp___9 == (int __attribute__((__visibility__("default")))  )0) {

      } else {
        break;
      }
      if ((property_info->flags & 1792U) == 256U) {
        prop_hash = property_info->h;
        prop_name = property_info->name;
        prop_name_length = property_info->name_length;
        tmp = zend_hash_quick_find((HashTable const   *)(& ce->properties_info), property_info->name, (unsigned int )(property_info->name_length + 1), property_info->h, (void **)(& coliding_prop));
        prop_found = (unsigned char )(tmp == (int __attribute__((__visibility__("default")))  )0);
      } else {
        zend_unmangle_property_name(property_info->name, property_info->name_length, & class_name_unused, & prop_name);
        tmp___0 = strlen(prop_name);
        prop_name_length = (int )tmp___0;
        tmp___1 = zend_get_hash_value(prop_name, (unsigned int )(prop_name_length + 1));
        prop_hash = (unsigned long )tmp___1;
        tmp___2 = zend_hash_quick_find((HashTable const   *)(& ce->properties_info), prop_name, (unsigned int )(prop_name_length + 1), prop_hash, (void **)(& coliding_prop));
        prop_found = (unsigned char )(tmp___2 == (int __attribute__((__visibility__("default")))  )0);
      }
      if (prop_found) {
        if (coliding_prop->flags & 131072U) {
          zend_hash_quick_find((HashTable const   *)(& (coliding_prop->ce)->properties_info), prop_name, (unsigned int )(prop_name_length + 1), prop_hash, (void **)(& coliding_prop));
        } else {

        }
        if ((coliding_prop->flags & 1792U) == (property_info->flags & 1792U)) {
          if (property_info->flags & 1U) {
            tmp___3 = compare_function(& compare_result, *(ce->default_static_members_table + coliding_prop->offset), *((*(ce->traits + i))->default_static_members_table + property_info->offset));
            if (-1 == (int )tmp___3) {
              tmp___4 = 1;
            } else {
              if (compare_result.value.lval != 0L) {
                tmp___4 = 1;
              } else {
                tmp___4 = 0;
              }
            }
            not_compatible = (unsigned char )tmp___4;
          } else {
            tmp___5 = compare_function(& compare_result, *(ce->default_properties_table + coliding_prop->offset), *((*(ce->traits + i))->default_properties_table + property_info->offset));
            if (-1 == (int )tmp___5) {
              tmp___6 = 1;
            } else {
              if (compare_result.value.lval != 0L) {
                tmp___6 = 1;
              } else {
                tmp___6 = 0;
              }
            }
            not_compatible = (unsigned char )tmp___6;
          }
        } else {
          not_compatible = (unsigned char)1;
        }
        if (not_compatible) {
          tmp___7 = find_first_definition(ce, i, prop_name, prop_name_length, prop_hash, coliding_prop->ce);
          zend_error(1 << 6L, "%s and %s define the same property ($%s) in the composition of %s. However, the definition differs and is considered incompatible. Class was composed", tmp___7->name, (property_info->ce)->name, prop_name, ce->name);
        } else {
          tmp___8 = find_first_definition(ce, i, prop_name, prop_name_length, prop_hash, coliding_prop->ce);
          zend_error(1 << 11L, "%s and %s define the same property ($%s) in the composition of %s. This might be incompatible, to improve maintainability consider using accessor methods in traits instead. Class was composed", tmp___8->name, (property_info->ce)->name, prop_name, ce->name);
        }
      } else {

      }
      if (property_info->flags & 1U) {
        prop_value = *((*(ce->traits + i))->default_static_members_table + property_info->offset);
      } else {
        prop_value = *((*(ce->traits + i))->default_properties_table + property_info->offset);
      }
      zval_addref_p(prop_value);
      zend_declare_property_ex(ce, prop_name, prop_name_length, prop_value, (int )property_info->flags, property_info->doc_comment, property_info->doc_comment_len);
      zend_hash_move_forward_ex(& (*(ce->traits + i))->properties_info, (HashPosition *)((void *)0));
    }
    i ++;
  }
  return;
}
}
static void zend_do_check_for_inconsistent_traits_aliasing(zend_class_entry *ce ) 
{ int i ;
  zend_trait_alias *cur_alias ;
  char *lc_method_name ;
  char __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  i = 0;
  if (ce->trait_aliases) {
    while (*(ce->trait_aliases + i)) {
      cur_alias = *(ce->trait_aliases + i);
      if (! (cur_alias->trait_method)->ce) {
        if (cur_alias->alias) {
          zend_error(1 << 6L, "An alias (%s) was defined for method %s(), but this method does not exist", cur_alias->alias, (cur_alias->trait_method)->method_name);
        } else {
          tmp = zend_str_tolower_dup((cur_alias->trait_method)->method_name, (cur_alias->trait_method)->mname_len);
          lc_method_name = (char *)tmp;
          tmp___0 = zend_hash_exists((HashTable const   *)(& ce->function_table), (char const   *)lc_method_name, (cur_alias->trait_method)->mname_len + 1U);
          if (tmp___0) {
            _efree((void *)lc_method_name);
            zend_error(1 << 6L, "The modifiers for the trait alias %s() need to be changed in the same statment in which the alias is defined. Error", (cur_alias->trait_method)->method_name);
          } else {
            _efree((void *)lc_method_name);
            zend_error(1 << 6L, "The modifiers of the trait method %s() are changed, but this method does not exist. Error", (cur_alias->trait_method)->method_name);
          }
        }
      } else {

      }
      i ++;
    }
  } else {

  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_do_bind_traits(zend_class_entry *ce ) 
{ 

  {
  if (ce->num_traits <= 0U) {
    return;
  } else {

  }
  zend_traits_init_trait_structures(ce);
  zend_do_traits_method_binding(ce);
  zend_do_check_for_inconsistent_traits_aliasing(ce);
  zend_do_traits_property_binding(ce);
  zend_verify_abstract_class(ce);
  if (ce->ce_flags & 16U) {
    ce->ce_flags -= 16U;
  } else {

  }
  return;
}
}
int __attribute__((__visibility__("default")))  do_bind_function(zend_op_array const   *op_array , zend_op *opline , HashTable *function_table , zend_bool compile_time ) 
{ zend_function *function ;
  zval *op1 ;
  zval *op2 ;
  int error_level ;
  int tmp ;
  zend_function *old_function ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  if (compile_time) {
    op1 = & (op_array->literals + opline->op1.constant)->constant;
    op2 = & (op_array->literals + opline->op2.constant)->constant;
  } else {
    op1 = opline->op1.zv;
    op2 = opline->op2.zv;
  }
  zend_hash_quick_find((HashTable const   *)function_table, (char const   *)op1->value.str.val, (unsigned int )op1->value.str.len, ((zend_literal *)op1)->hash_value, (void **)((void *)(& function)));
  tmp___1 = _zend_hash_quick_add_or_update(function_table, (char const   *)op2->value.str.val, (unsigned int )(op2->value.str.len + 1), ((zend_literal *)op2)->hash_value, (void *)function, sizeof(zend_function ), (void **)((void *)0), 1 << 1);
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
    if (compile_time) {
      tmp = 1 << 6L;
    } else {
      tmp = 1;
    }
    error_level = tmp;
    tmp___0 = zend_hash_quick_find((HashTable const   *)function_table, (char const   *)op2->value.str.val, (unsigned int )(op2->value.str.len + 1), ((zend_literal *)op2)->hash_value, (void **)((void *)(& old_function)));
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )0) {
      if ((int )old_function->type == 2) {
        if (old_function->op_array.last > 0U) {
          zend_error(error_level, "Cannot redeclare %s() (previously declared in %s:%d)", function->common.function_name, old_function->op_array.filename, (old_function->op_array.opcodes + 0)->lineno);
        } else {
          zend_error(error_level, "Cannot redeclare %s()", function->common.function_name);
        }
      } else {
        zend_error(error_level, "Cannot redeclare %s()", function->common.function_name);
      }
    } else {
      zend_error(error_level, "Cannot redeclare %s()", function->common.function_name);
    }
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {
    (*(function->op_array.refcount)) ++;
    function->op_array.static_variables = (HashTable *)((void *)0);
    return ((int __attribute__((__visibility__("default")))  )0);
  }
}
}
void zend_add_trait_precedence(znode *precedence_znode ) 
{ zend_class_entry *ce ;

  {
  ce = compiler_globals.active_class_entry;
  zend_add_to_list((void *)(& ce->trait_precedences), precedence_znode->u.op.ptr);
  return;
}
}
void zend_add_trait_alias(znode *alias_znode ) 
{ zend_class_entry *ce ;

  {
  ce = compiler_globals.active_class_entry;
  zend_add_to_list((void *)(& ce->trait_aliases), alias_znode->u.op.ptr);
  return;
}
}
void zend_prepare_reference(znode *result , znode *class_name , znode *method_name ) 
{ zend_trait_method_reference *method_ref ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  tmp = _emalloc(sizeof(zend_trait_method_reference ));
  method_ref = (zend_trait_method_reference *)tmp;
  method_ref->ce = (zend_class_entry *)((void *)0);
  if (class_name) {
    zend_resolve_class_name(class_name, 4UL, 1);
    method_ref->class_name = (char const   *)class_name->u.constant.value.str.val;
    method_ref->cname_len = (unsigned int )class_name->u.constant.value.str.len;
  } else {
    method_ref->class_name = (char const   *)((void *)0);
    method_ref->cname_len = 0U;
  }
  method_ref->method_name = (char const   *)method_name->u.constant.value.str.val;
  method_ref->mname_len = (unsigned int )method_name->u.constant.value.str.len;
  result->u.op.ptr = (void *)method_ref;
  result->op_type = 1 << 1;
  return;
}
}
void zend_prepare_trait_alias(znode *result , znode *method_reference , znode *modifiers , znode *alias ) 
{ zend_trait_alias *trait_alias ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  tmp = _emalloc(sizeof(zend_trait_alias ));
  trait_alias = (zend_trait_alias *)tmp;
  trait_alias->trait_method = (zend_trait_method_reference *)method_reference->u.op.ptr;
  trait_alias->modifiers = (unsigned int )modifiers->u.constant.value.lval;
  if (modifiers->u.constant.value.lval == 1L) {
    zend_error(1 << 6L, "Cannot use \'static\' as method modifier");
    return;
  } else {

  }
  if (alias) {
    trait_alias->alias = (char const   *)alias->u.constant.value.str.val;
    trait_alias->alias_len = (unsigned int )alias->u.constant.value.str.len;
  } else {
    trait_alias->alias = (char const   *)((void *)0);
  }
  trait_alias->function = (union _zend_function *)((void *)0);
  result->u.op.ptr = (void *)trait_alias;
  return;
}
}
void zend_prepare_trait_precedence(znode *result , znode *method_reference , znode *trait_list ) 
{ zend_trait_precedence *trait_precedence ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  tmp = _emalloc(sizeof(zend_trait_precedence ));
  trait_precedence = (zend_trait_precedence *)tmp;
  trait_precedence->trait_method = (zend_trait_method_reference *)method_reference->u.op.ptr;
  trait_precedence->exclude_from_classes = (zend_class_entry **)trait_list->u.op.ptr;
  trait_precedence->function = (union _zend_function *)((void *)0);
  result->u.op.ptr = (void *)trait_precedence;
  return;
}
}
zend_class_entry __attribute__((__visibility__("default")))  *do_bind_class(zend_op_array const   *op_array , zend_op const   *opline , HashTable *class_table , zend_bool compile_time ) 
{ zend_class_entry *ce ;
  zend_class_entry **pce ;
  zval *op1 ;
  zval *op2 ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  if (compile_time) {
    op1 = & (op_array->literals + opline->op1.constant)->constant;
    op2 = & (op_array->literals + opline->op2.constant)->constant;
  } else {
    op1 = (zval *)opline->op1.zv;
    op2 = (zval *)opline->op2.zv;
  }
  tmp = zend_hash_quick_find((HashTable const   *)class_table, (char const   *)op1->value.str.val, (unsigned int )op1->value.str.len, ((zend_literal *)op1)->hash_value, (void **)(& pce));
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    zend_error(1 << 6L, "Internal Zend error - Missing class information for %s", op1->value.str.val);
    return ((zend_class_entry __attribute__((__visibility__("default")))  *)((void *)0));
  } else {
    ce = *pce;
  }
  (ce->refcount) ++;
  tmp___0 = _zend_hash_quick_add_or_update(class_table, (char const   *)op2->value.str.val, (unsigned int )(op2->value.str.len + 1), ((zend_literal *)op2)->hash_value, (void *)(& ce), sizeof(zend_class_entry *), (void **)((void *)0), 1 << 1);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    (ce->refcount) --;
    if (! compile_time) {
      zend_error(1 << 6L, "Cannot redeclare class %s", ce->name);
    } else {

    }
    return ((zend_class_entry __attribute__((__visibility__("default")))  *)((void *)0));
  } else {
    if (! (ce->ce_flags & 524416U)) {
      zend_verify_abstract_class(ce);
    } else {

    }
    return ((zend_class_entry __attribute__((__visibility__("default")))  *)ce);
  }
}
}
zend_class_entry __attribute__((__visibility__("default")))  *do_bind_inherited_class(zend_op_array const   *op_array , zend_op const   *opline , HashTable *class_table , zend_class_entry *parent_ce , zend_bool compile_time ) 
{ zend_class_entry *ce ;
  zend_class_entry **pce ;
  int found_ce ;
  zval *op1 ;
  zval *op2 ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  if (compile_time) {
    op1 = & (op_array->literals + opline->op1.constant)->constant;
    op2 = & (op_array->literals + opline->op2.constant)->constant;
  } else {
    op1 = (zval *)opline->op1.zv;
    op2 = (zval *)opline->op2.zv;
  }
  tmp = zend_hash_quick_find((HashTable const   *)class_table, (char const   *)op1->value.str.val, (unsigned int )op1->value.str.len, ((zend_literal *)op1)->hash_value, (void **)(& pce));
  found_ce = (int )tmp;
  if (found_ce == -1) {
    if (! compile_time) {
      zend_error(1 << 6L, "Cannot redeclare class %s", op2->value.str.val);
    } else {

    }
    return ((zend_class_entry __attribute__((__visibility__("default")))  *)((void *)0));
  } else {
    ce = *pce;
  }
  if (parent_ce->ce_flags & 128U) {
    zend_error(1 << 6L, "Class %s cannot extend from interface %s", ce->name, parent_ce->name);
  } else {
    if ((parent_ce->ce_flags & 288U) == 288U) {
      zend_error(1 << 6L, "Class %s cannot extend from trait %s", ce->name, parent_ce->name);
    } else {

    }
  }
  zend_do_inheritance(ce, parent_ce);
  (ce->refcount) ++;
  tmp___0 = _zend_hash_quick_add_or_update(class_table, (char const   *)op2->value.str.val, (unsigned int )(op2->value.str.len + 1), ((zend_literal *)op2)->hash_value, (void *)pce, sizeof(zend_class_entry *), (void **)((void *)0), 1 << 1);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    zend_error(1 << 6L, "Cannot redeclare class %s", ce->name);
  } else {

  }
  return ((zend_class_entry __attribute__((__visibility__("default")))  *)ce);
}
}
void zend_do_early_binding(void) 
{ zend_op *opline ;
  HashTable *table ;
  int __attribute__((__visibility__("default")))  tmp ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___0 ;
  zend_op *fetch_class_opline ;
  zval *parent_name ;
  zend_class_entry **pce ;
  zend_uint *opline_num ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___2 ;
  zend_uchar tmp___3 ;
  zend_uchar tmp___4 ;
  zend_uchar tmp___5 ;
  zend_uchar tmp___6 ;

  {
  opline = (compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U);
  while (1) {
    if ((int )opline->opcode == 105) {
      if ((unsigned int )opline > (unsigned int )(compiler_globals.active_op_array)->opcodes) {

      } else {
        break;
      }
    } else {
      break;
    }
    opline --;
  }
  switch ((int )opline->opcode) {
  case 141: 
  tmp = do_bind_function((zend_op_array const   *)compiler_globals.active_op_array, opline, compiler_globals.function_table, (unsigned char)1);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  table = compiler_globals.function_table;
  break;
  case 139: 
  tmp___0 = do_bind_class((zend_op_array const   *)compiler_globals.active_op_array, (zend_op const   *)opline, compiler_globals.class_table, (unsigned char)1);
  if ((unsigned int )tmp___0 == (unsigned int )((void *)0)) {
    return;
  } else {

  }
  table = compiler_globals.class_table;
  break;
  case 140: 
  fetch_class_opline = opline - 1;
  parent_name = & ((compiler_globals.active_op_array)->literals + fetch_class_opline->op2.constant)->constant;
  tmp___1 = zend_lookup_class((char const   *)parent_name->value.str.val, parent_name->value.str.len, & pce);
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
    goto _L;
  } else {
    if (compiler_globals.compiler_options & (unsigned int )(1 << 3)) {
      if ((int )(*pce)->type == 1) {
        _L: /* CIL Label */ 
        if (compiler_globals.compiler_options & (unsigned int )(1 << 4)) {
          opline_num = & (compiler_globals.active_op_array)->early_binding;
          while (*opline_num != 4294967295U) {
            opline_num = & ((compiler_globals.active_op_array)->opcodes + *opline_num)->result.opline_num;
          }
          *opline_num = (unsigned int )(opline - (compiler_globals.active_op_array)->opcodes);
          opline->opcode = (unsigned char)145;
          opline->result_type = (unsigned char )(1 << 3);
          opline->result.opline_num = 4294967295U;
        } else {

        }
        return;
      } else {

      }
    } else {

    }
  }
  tmp___2 = do_bind_inherited_class((zend_op_array const   *)compiler_globals.active_op_array, (zend_op const   *)opline, compiler_globals.class_table, *pce, (unsigned char)1);
  if ((unsigned int )tmp___2 == (unsigned int )((void *)0)) {
    return;
  } else {

  }
  zend_del_literal(compiler_globals.active_op_array, (int )fetch_class_opline->op2.constant);
  fetch_class_opline->opcode = (unsigned char)0;
  memset((void *)(& fetch_class_opline->result), 0, sizeof(fetch_class_opline->result));
  memset((void *)(& fetch_class_opline->op1), 0, sizeof(fetch_class_opline->op1));
  memset((void *)(& fetch_class_opline->op2), 0, sizeof(fetch_class_opline->op2));
  tmp___4 = (unsigned char )(1 << 3);
  fetch_class_opline->op2_type = tmp___4;
  tmp___3 = tmp___4;
  fetch_class_opline->op1_type = tmp___3;
  fetch_class_opline->result_type = tmp___3;
  table = compiler_globals.class_table;
  break;
  case 146: 
  case 144: 
  case 154: 
  case 155: 
  return;
  default: 
  zend_error(1 << 6L, "Invalid binding type");
  return;
  }
  zend_hash_del_key_or_index(table, (char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len, ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value, 2);
  zend_del_literal(compiler_globals.active_op_array, (int )opline->op1.constant);
  zend_del_literal(compiler_globals.active_op_array, (int )opline->op2.constant);
  opline->opcode = (unsigned char)0;
  memset((void *)(& opline->result), 0, sizeof(opline->result));
  memset((void *)(& opline->op1), 0, sizeof(opline->op1));
  memset((void *)(& opline->op2), 0, sizeof(opline->op2));
  tmp___6 = (unsigned char )(1 << 3);
  opline->op2_type = tmp___6;
  tmp___5 = tmp___6;
  opline->op1_type = tmp___5;
  opline->result_type = tmp___5;
  return;
}
}
void __attribute__((__visibility__("default")))  zend_do_delayed_early_binding(zend_op_array const   *op_array ) 
{ zend_bool orig_in_compilation ;
  zend_uint opline_num ;
  zend_class_entry **pce ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  if (op_array->early_binding != 4294967295U) {
    orig_in_compilation = compiler_globals.in_compilation;
    opline_num = (zend_uint )op_array->early_binding;
    compiler_globals.in_compilation = (unsigned char)1;
    while (opline_num != 4294967295U) {
      tmp = zend_lookup_class((char const   *)((op_array->opcodes + (opline_num - 1U))->op2.zv)->value.str.val, ((op_array->opcodes + (opline_num - 1U))->op2.zv)->value.str.len, & pce);
      if (tmp == (int __attribute__((__visibility__("default")))  )0) {
        do_bind_inherited_class(op_array, (zend_op const   *)(op_array->opcodes + opline_num), executor_globals.class_table, *pce, (unsigned char)0);
      } else {

      }
      opline_num = (op_array->opcodes + opline_num)->result.opline_num;
    }
    compiler_globals.in_compilation = orig_in_compilation;
  } else {

  }
  return;
}
}
void zend_do_boolean_or_begin(znode *expr1 , znode *op_token ) 
{ int next_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  next_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)47;
  if (expr1->op_type == 1 << 1) {
    while (1) {
      opline->result_type = (unsigned char )expr1->op_type;
      if (expr1->op_type == 1) {
        tmp___1 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& expr1->u.constant));
        opline->result.constant = (unsigned int )tmp___1;
      } else {
        opline->result = expr1->u.op;
      }
      break;
    }
  } else {
    opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
    opline->result_type = (unsigned char )(1 << 1);
  }
  while (1) {
    opline->op1_type = (unsigned char )expr1->op_type;
    if (expr1->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& expr1->u.constant));
      opline->op1.constant = (unsigned int )tmp___2;
    } else {
      opline->op1 = expr1->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  op_token->u.op.opline_num = (unsigned int )next_op_number;
  while (1) {
    expr1->op_type = (int )opline->result_type;
    if (expr1->op_type == 1) {
      expr1->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      expr1->u.op = opline->result;
      expr1->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_boolean_or_end(znode *result , znode const   *expr1 , znode const   *expr2 , znode *op_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  *result = (struct _znode )*expr1;
  opline->opcode = (unsigned char)52;
  while (1) {
    opline->result_type = (unsigned char )result->op_type;
    if (result->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& result->u.constant));
      opline->result.constant = (unsigned int )tmp___0;
    } else {
      opline->result = result->u.op;
    }
    break;
  }
  while (1) {
    opline->op1_type = (unsigned char )expr2->op_type;
    if (expr2->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & expr2->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )expr2->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  tmp___2 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + op_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp___2;
  return;
}
}
void zend_do_boolean_and_begin(znode *expr1 , znode *op_token ) 
{ int next_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  next_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)46;
  if (expr1->op_type == 1 << 1) {
    while (1) {
      opline->result_type = (unsigned char )expr1->op_type;
      if (expr1->op_type == 1) {
        tmp___1 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& expr1->u.constant));
        opline->result.constant = (unsigned int )tmp___1;
      } else {
        opline->result = expr1->u.op;
      }
      break;
    }
  } else {
    opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
    opline->result_type = (unsigned char )(1 << 1);
  }
  while (1) {
    opline->op1_type = (unsigned char )expr1->op_type;
    if (expr1->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& expr1->u.constant));
      opline->op1.constant = (unsigned int )tmp___2;
    } else {
      opline->op1 = expr1->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  op_token->u.op.opline_num = (unsigned int )next_op_number;
  while (1) {
    expr1->op_type = (int )opline->result_type;
    if (expr1->op_type == 1) {
      expr1->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      expr1->u.op = opline->result;
      expr1->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_boolean_and_end(znode *result , znode const   *expr1 , znode const   *expr2 , znode const   *op_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  *result = (struct _znode )*expr1;
  opline->opcode = (unsigned char)52;
  while (1) {
    opline->result_type = (unsigned char )result->op_type;
    if (result->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& result->u.constant));
      opline->result.constant = (unsigned int )tmp___0;
    } else {
      opline->result = result->u.op;
    }
    break;
  }
  while (1) {
    opline->op1_type = (unsigned char )expr2->op_type;
    if (expr2->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & expr2->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )expr2->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  tmp___2 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + op_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp___2;
  return;
}
}
void zend_do_do_while_begin(void) 
{ 

  {
  do_begin_loop();
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_do_while_end(znode const   *do_token , znode const   *expr_open_bracket , znode const   *expr ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)44;
  while (1) {
    opline->op1_type = (unsigned char )expr->op_type;
    if (expr->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )expr->u.op;
    }
    break;
  }
  opline->op2.opline_num = (unsigned int )do_token->u.op.opline_num;
  opline->op2_type = (unsigned char )(1 << 3);
  do_end_loop((int )expr_open_bracket->u.op.opline_num, 0);
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_do_brk_cont(zend_uchar op , znode const   *expr ) 
{ zend_op *opline ;
  zend_op *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  int tmp___2 ;
  zval _c ;
  zval *__z ;
  int tmp___3 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = op;
  opline->op1.opline_num = (unsigned int )compiler_globals.context.current_brk_cont;
  opline->op1_type = (unsigned char )(1 << 3);
  if (expr) {
    if (expr->op_type != 1) {
      if ((int )op == 50) {
        tmp___0 = "break";
      } else {
        tmp___0 = "continue";
      }
      zend_error(1 << 6L, "\'%s\' operator with non-constant operand is no longer supported", tmp___0);
    } else {
      if ((int const   )expr->u.constant.type != 1) {
        goto _L;
      } else {
        if (expr->u.constant.value.lval < 1L) {
          _L: /* CIL Label */ 
          if ((int )op == 50) {
            tmp___1 = "break";
          } else {
            tmp___1 = "continue";
          }
          zend_error(1 << 6L, "\'%s\' operator accepts only positive numbers", tmp___1);
        } else {

        }
      }
    }
    while (1) {
      opline->op2_type = (unsigned char )expr->op_type;
      if (expr->op_type == 1) {
        tmp___2 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
        opline->op2.constant = (unsigned int )tmp___2;
      } else {
        opline->op2 = (union _znode_op )expr->u.op;
      }
      break;
    }
  } else {
    while (1) {
      __z = & _c;
      __z->value.lval = 1L;
      __z->type = (unsigned char)1;
      tmp___3 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c));
      opline->op2.constant = (unsigned int )tmp___3;
      break;
    }
    opline->op2_type = (unsigned char)1;
  }
  return;
}
}
void zend_do_switch_cond(znode const   *cond ) 
{ zend_switch_entry switch_entry ;

  {
  switch_entry.cond = (struct _znode )*cond;
  switch_entry.default_case = -1;
  switch_entry.control_var = -1;
  zend_stack_push(& compiler_globals.switch_cond_stack, (void const   *)((void *)(& switch_entry)), (int )sizeof(switch_entry));
  do_begin_loop();
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_switch_end(znode const   *case_list ) 
{ zend_op *opline ;
  zend_switch_entry *switch_entry_ptr ;
  int next_op_number ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  zend_stack_top((zend_stack const   *)(& compiler_globals.switch_cond_stack), (void **)(& switch_entry_ptr));
  if (switch_entry_ptr->default_case != -1) {
    opline = get_next_op(compiler_globals.active_op_array);
    opline->opcode = (unsigned char)42;
    opline->op1_type = (unsigned char )(1 << 3);
    opline->op2_type = (unsigned char )(1 << 3);
    opline->op1.opline_num = (unsigned int )switch_entry_ptr->default_case;
  } else {

  }
  if (case_list->op_type != (int const   )(1 << 3)) {
    tmp = get_next_op_number(compiler_globals.active_op_array);
    next_op_number = tmp;
    ((compiler_globals.active_op_array)->opcodes + case_list->u.op.opline_num)->op1.opline_num = (unsigned int )next_op_number;
  } else {

  }
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->brk_cont_array + compiler_globals.context.current_brk_cont)->brk = tmp___0;
  ((compiler_globals.active_op_array)->brk_cont_array + compiler_globals.context.current_brk_cont)->cont = tmp___0;
  compiler_globals.context.current_brk_cont = ((compiler_globals.active_op_array)->brk_cont_array + compiler_globals.context.current_brk_cont)->parent;
  if (switch_entry_ptr->cond.op_type == 1 << 2) {
    goto _L;
  } else {
    if (switch_entry_ptr->cond.op_type == 1 << 1) {
      _L: /* CIL Label */ 
      opline = get_next_op(compiler_globals.active_op_array);
      if (switch_entry_ptr->cond.op_type == 1 << 1) {
        opline->opcode = (unsigned char)70;
      } else {
        opline->opcode = (unsigned char)49;
      }
      while (1) {
        opline->op1_type = (unsigned char )switch_entry_ptr->cond.op_type;
        if (switch_entry_ptr->cond.op_type == 1) {
          tmp___1 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& switch_entry_ptr->cond.u.constant));
          opline->op1.constant = (unsigned int )tmp___1;
        } else {
          opline->op1 = switch_entry_ptr->cond.u.op;
        }
        break;
      }
      opline->op2_type = (unsigned char )(1 << 3);
    } else {

    }
  }
  if (switch_entry_ptr->cond.op_type == 1) {
    _zval_dtor(& switch_entry_ptr->cond.u.constant);
  } else {

  }
  zend_stack_del_top(& compiler_globals.switch_cond_stack);
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_do_case_before_statement(znode const   *case_list , znode *case_token , znode const   *case_expr ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int next_op_number ;
  zend_switch_entry *switch_entry_ptr ;
  znode result ;
  zend_uint tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  zend_stack_top((zend_stack const   *)(& compiler_globals.switch_cond_stack), (void **)(& switch_entry_ptr));
  if (switch_entry_ptr->control_var == -1) {
    tmp___0 = get_temporary_variable(compiler_globals.active_op_array);
    switch_entry_ptr->control_var = (int )tmp___0;
  } else {

  }
  opline->opcode = (unsigned char)48;
  opline->result.var = (unsigned int )switch_entry_ptr->control_var;
  opline->result_type = (unsigned char )(1 << 1);
  while (1) {
    opline->op1_type = (unsigned char )switch_entry_ptr->cond.op_type;
    if (switch_entry_ptr->cond.op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& switch_entry_ptr->cond.u.constant));
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = switch_entry_ptr->cond.u.op;
    }
    break;
  }
  while (1) {
    opline->op2_type = (unsigned char )case_expr->op_type;
    if (case_expr->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, & case_expr->u.constant);
      opline->op2.constant = (unsigned int )tmp___2;
    } else {
      opline->op2 = (union _znode_op )case_expr->u.op;
    }
    break;
  }
  if ((int )opline->op1_type == 1) {
    _zval_copy_ctor(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant);
  } else {

  }
  while (1) {
    result.op_type = (int )opline->result_type;
    if (result.op_type == 1) {
      result.u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result.u.op = opline->result;
      result.EA = 0U;
    }
    break;
  }
  next_op_number = get_next_op_number(compiler_globals.active_op_array);
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)43;
  while (1) {
    opline->op1_type = (unsigned char )result.op_type;
    if (result.op_type == 1) {
      tmp___3 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& result.u.constant));
      opline->op1.constant = (unsigned int )tmp___3;
    } else {
      opline->op1 = result.u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  case_token->u.op.opline_num = (unsigned int )next_op_number;
  if (case_list->op_type == (int const   )(1 << 3)) {
    return;
  } else {

  }
  next_op_number = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + case_list->u.op.opline_num)->op1.opline_num = (unsigned int )next_op_number;
  return;
}
}
void zend_do_case_after_statement(znode *result , znode const   *case_token ) 
{ int next_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  next_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  opline->opcode = (unsigned char)42;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  result->u.op.opline_num = (unsigned int )next_op_number;
  switch ((int )((compiler_globals.active_op_array)->opcodes + case_token->u.op.opline_num)->opcode) {
  case 42: 
  tmp___1 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + case_token->u.op.opline_num)->op1.opline_num = (unsigned int )tmp___1;
  break;
  case 43: 
  tmp___2 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + case_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp___2;
  break;
  }
  return;
}
}
void zend_do_default_before_statement(znode const   *case_list , znode *default_token ) 
{ int next_op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  zend_switch_entry *switch_entry_ptr ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  next_op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  zend_stack_top((zend_stack const   *)(& compiler_globals.switch_cond_stack), (void **)(& switch_entry_ptr));
  opline->opcode = (unsigned char)42;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  default_token->u.op.opline_num = (unsigned int )next_op_number;
  next_op_number = get_next_op_number(compiler_globals.active_op_array);
  switch_entry_ptr->default_case = next_op_number;
  if (case_list->op_type == (int const   )(1 << 3)) {
    return;
  } else {

  }
  ((compiler_globals.active_op_array)->opcodes + case_list->u.op.opline_num)->op1.opline_num = (unsigned int )next_op_number;
  return;
}
}
void zend_do_begin_class_declaration(znode const   *class_token , znode *class_name , znode const   *parent_class_name ) 
{ zend_op *opline ;
  int doing_inheritance ;
  zend_class_entry *new_class_entry ;
  char *lcname ;
  int error ;
  zval **ns_name ;
  zval key ;
  char __attribute__((__visibility__("default")))  *tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___3 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
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
  int __attribute__((__visibility__("default")))  tmp___14 ;
  znode tmp___15 ;
  char __attribute__((__visibility__("default")))  *tmp___16 ;
  char *tmp___17 ;
  char __attribute__((__visibility__("default")))  *tmp___18 ;
  int tmp___19 ;
  void __attribute__((__visibility__("default")))  *tmp___20 ;
  char const __attribute__((__visibility__("default")))  *tmp___21 ;
  char __attribute__((__visibility__("default")))  *tmp___22 ;
  int tmp___23 ;
  ulong __attribute__((__visibility__("default")))  tmp___24 ;
  zval _c ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___25 ;
  int tmp___26 ;
  ulong __attribute__((__visibility__("default")))  tmp___27 ;

  {
  doing_inheritance = 0;
  error = 0;
  if (compiler_globals.active_class_entry) {
    zend_error(1 << 6L, "Class declarations may not be nested");
    return;
  } else {

  }
  tmp = zend_str_tolower_dup((char const   *)class_name->u.constant.value.str.val, (unsigned int )class_name->u.constant.value.str.len);
  lcname = (char *)tmp;
  if (0) {
    __s1_len = strlen((char const   *)lcname);
    __s2_len = strlen("self");
    if (! ((unsigned int )((void const   *)(lcname + 1)) - (unsigned int )((void const   *)lcname) == 1U)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((unsigned int )((void const   *)("self" + 1)) - (unsigned int )((void const   *)"self") == 1U)) {
          tmp___6 = 1;
        } else {
          if (__s2_len >= 4U) {
            tmp___6 = 1;
          } else {
            tmp___6 = 0;
          }
        }
      } else {
        tmp___6 = 0;
      }
    }
    if (tmp___6) {
      tmp___1 = __builtin_strcmp((char const   *)lcname, "self");
      tmp___5 = tmp___1;
    } else {
      tmp___4 = __builtin_strcmp((char const   *)lcname, "self");
      tmp___5 = tmp___4;
    }
  } else {
    tmp___4 = __builtin_strcmp((char const   *)lcname, "self");
    tmp___5 = tmp___4;
  }
  if (tmp___5) {
    if (0) {
      __s1_len___0 = strlen((char const   *)lcname);
      __s2_len___0 = strlen("parent");
      if (! ((unsigned int )((void const   *)(lcname + 1)) - (unsigned int )((void const   *)lcname) == 1U)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4U) {
          _L___2: /* CIL Label */ 
          if (! ((unsigned int )((void const   *)("parent" + 1)) - (unsigned int )((void const   *)"parent") == 1U)) {
            tmp___13 = 1;
          } else {
            if (__s2_len___0 >= 4U) {
              tmp___13 = 1;
            } else {
              tmp___13 = 0;
            }
          }
        } else {
          tmp___13 = 0;
        }
      }
      if (tmp___13) {
        tmp___8 = __builtin_strcmp((char const   *)lcname, "parent");
        tmp___12 = tmp___8;
      } else {
        tmp___11 = __builtin_strcmp((char const   *)lcname, "parent");
        tmp___12 = tmp___11;
      }
    } else {
      tmp___11 = __builtin_strcmp((char const   *)lcname, "parent");
      tmp___12 = tmp___11;
    }
    if (tmp___12) {

    } else {
      _efree((void *)lcname);
      zend_error(1 << 6L, "Cannot use \'%s\' as class name as it is reserved", class_name->u.constant.value.str.val);
    }
  } else {
    _efree((void *)lcname);
    zend_error(1 << 6L, "Cannot use \'%s\' as class name as it is reserved", class_name->u.constant.value.str.val);
  }
  if (compiler_globals.current_import) {
    tmp___14 = zend_hash_find((HashTable const   *)compiler_globals.current_import, (char const   *)lcname, (unsigned int )(class_name->u.constant.value.str.len + 1), (void **)(& ns_name));
    if (tmp___14 == (int __attribute__((__visibility__("default")))  )0) {
      error = 1;
    } else {

    }
  } else {

  }
  if (compiler_globals.current_namespace) {
    tmp___15.u.constant = *(compiler_globals.current_namespace);
    _zval_copy_ctor(& tmp___15.u.constant);
    zend_do_build_namespace_name(& tmp___15, & tmp___15, class_name);
    class_name = & tmp___15;
    _efree((void *)lcname);
    tmp___16 = zend_str_tolower_dup((char const   *)class_name->u.constant.value.str.val, (unsigned int )class_name->u.constant.value.str.len);
    lcname = (char *)tmp___16;
  } else {

  }
  if (error) {
    tmp___18 = zend_str_tolower_dup((char const   *)(*ns_name)->value.str.val, (unsigned int )(*ns_name)->value.str.len);
    tmp___17 = (char *)tmp___18;
    if ((*ns_name)->value.str.len != class_name->u.constant.value.str.len) {
      zend_error(1 << 6L, "Cannot declare class %s because the name is already in use", class_name->u.constant.value.str.val);
    } else {
      tmp___19 = memcmp((void const   *)tmp___17, (void const   *)lcname, (unsigned int )class_name->u.constant.value.str.len);
      if (tmp___19) {
        zend_error(1 << 6L, "Cannot declare class %s because the name is already in use", class_name->u.constant.value.str.val);
      } else {

      }
    }
    _efree((void *)tmp___17);
  } else {

  }
  tmp___20 = _emalloc(sizeof(zend_class_entry ));
  new_class_entry = (zend_class_entry *)tmp___20;
  new_class_entry->type = (char)2;
  tmp___21 = (*zend_new_interned_string)((char const   *)class_name->u.constant.value.str.val, class_name->u.constant.value.str.len + 1, 1);
  new_class_entry->name = (char const   *)tmp___21;
  new_class_entry->name_length = (unsigned int )class_name->u.constant.value.str.len;
  zend_initialize_class_data(new_class_entry, (unsigned char)1);
  tmp___22 = zend_get_compiled_filename();
  new_class_entry->info.user.filename = (char const   *)tmp___22;
  new_class_entry->info.user.line_start = (unsigned int )class_token->u.op.opline_num;
  new_class_entry->ce_flags |= (unsigned int )class_token->EA;
  if (parent_class_name) {
    if (parent_class_name->op_type != (int const   )(1 << 3)) {
      switch ((int )parent_class_name->EA) {
      case 1: 
      zend_error(1 << 6L, "Cannot use \'self\' as class name as it is reserved");
      break;
      case 2: 
      zend_error(1 << 6L, "Cannot use \'parent\' as class name as it is reserved");
      break;
      case 7: 
      zend_error(1 << 6L, "Cannot use \'static\' as class name as it is reserved");
      break;
      default: ;
      break;
      }
      doing_inheritance = 1;
    } else {

    }
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->op1_type = (unsigned char)1;
  build_runtime_defined_function_key(& key, (char const   *)lcname, (int )new_class_entry->name_length);
  tmp___23 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& key));
  opline->op1.constant = (unsigned int )tmp___23;
  tmp___24 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len);
  ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___24;
  opline->op2_type = (unsigned char)1;
  if (doing_inheritance) {
    if ((new_class_entry->ce_flags & 288U) == 288U) {
      zend_error(1 << 6L, "A trait (%s) cannot extend a class", new_class_entry->name);
    } else {

    }
    opline->extended_value = (unsigned long )parent_class_name->u.op.var;
    opline->opcode = (unsigned char)140;
  } else {
    opline->opcode = (unsigned char)139;
  }
  while (1) {
    while (1) {
      __s = (char const   *)lcname;
      __l = (int )new_class_entry->name_length;
      __z = & _c;
      __z->value.str.len = __l;
      __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
      __z->type = (unsigned char)6;
      break;
    }
    tmp___26 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c));
    opline->op2.constant = (unsigned int )tmp___26;
    break;
  }
  while (1) {
    if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val - sizeof(Bucket )))->h;
      } else {
        tmp___27 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___27;
      }
    } else {
      tmp___27 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
      ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___27;
    }
    break;
  }
  _zend_hash_quick_add_or_update(compiler_globals.class_table, (char const   *)key.value.str.val, (unsigned int )key.value.str.len, ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value, (void *)(& new_class_entry), sizeof(zend_class_entry *), (void **)((void *)0), 1);
  compiler_globals.active_class_entry = new_class_entry;
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  opline->result_type = (unsigned char )(1 << 2);
  while (1) {
    compiler_globals.implementing_class.op_type = (int )opline->result_type;
    if (compiler_globals.implementing_class.op_type == 1) {
      compiler_globals.implementing_class.u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      compiler_globals.implementing_class.u.op = opline->result;
      compiler_globals.implementing_class.EA = 0U;
    }
    break;
  }
  if (compiler_globals.doc_comment) {
    (compiler_globals.active_class_entry)->info.user.doc_comment = (char const   *)compiler_globals.doc_comment;
    (compiler_globals.active_class_entry)->info.user.doc_comment_len = compiler_globals.doc_comment_len;
    compiler_globals.doc_comment = (char *)((void *)0);
    compiler_globals.doc_comment_len = 0U;
  } else {

  }
  return;
}
}
static void do_verify_abstract_class(void) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)146;
  while (1) {
    opline->op1_type = (unsigned char )compiler_globals.implementing_class.op_type;
    if (compiler_globals.implementing_class.op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& compiler_globals.implementing_class.u.constant));
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = compiler_globals.implementing_class.u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_end_class_declaration(znode const   *class_token , znode const   *parent_token ) 
{ zend_class_entry *ce ;
  int __attribute__((__visibility__("default")))  tmp ;
  zend_op *opline ;
  int tmp___0 ;

  {
  ce = compiler_globals.active_class_entry;
  if (ce->constructor) {
    (ce->constructor)->common.fn_flags |= 8192U;
    if ((ce->constructor)->common.fn_flags & 1U) {
      zend_error(1 << 6L, "Constructor %s::%s() cannot be static", ce->name, (ce->constructor)->common.function_name);
    } else {

    }
  } else {

  }
  if (ce->destructor) {
    (ce->destructor)->common.fn_flags |= 16384U;
    if ((ce->destructor)->common.fn_flags & 1U) {
      zend_error(1 << 6L, "Destructor %s::%s() cannot be static", ce->name, (ce->destructor)->common.function_name);
    } else {

    }
  } else {

  }
  if (ce->clone) {
    (ce->clone)->common.fn_flags |= 32768U;
    if ((ce->clone)->common.fn_flags & 1U) {
      zend_error(1 << 6L, "Clone method %s::%s() cannot be static", ce->name, (ce->clone)->common.function_name);
    } else {

    }
  } else {

  }
  tmp = zend_get_compiled_lineno();
  ce->info.user.line_end = (unsigned int )tmp;
  if (ce->num_traits > 0U) {
    ce->traits = (zend_class_entry **)((void *)0);
    ce->num_traits = 0U;
    ce->ce_flags |= 4194304U;
    opline = get_next_op(compiler_globals.active_op_array);
    opline->opcode = (unsigned char)155;
    while (1) {
      opline->op1_type = (unsigned char )compiler_globals.implementing_class.op_type;
      if (compiler_globals.implementing_class.op_type == 1) {
        tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& compiler_globals.implementing_class.u.constant));
        opline->op1.constant = (unsigned int )tmp___0;
      } else {
        opline->op1 = compiler_globals.implementing_class.u.op;
      }
      break;
    }
  } else {

  }
  if (! (ce->ce_flags & 160U)) {
    if (parent_token->op_type != (int const   )(1 << 3)) {
      goto _L;
    } else {
      if (ce->num_interfaces > 0U) {
        _L: /* CIL Label */ 
        zend_verify_abstract_class(ce);
        if (ce->num_interfaces) {
          do_verify_abstract_class();
        } else {

        }
      } else {

      }
    }
  } else {

  }
  if (ce->num_interfaces > 0U) {
    ce->interfaces = (zend_class_entry **)((void *)0);
    ce->num_interfaces = 0U;
    ce->ce_flags |= 524288U;
  } else {

  }
  compiler_globals.active_class_entry = (zend_class_entry *)((void *)0);
  return;
}
}
void zend_do_implements_interface(znode *interface_name ) 
{ zend_op *opline ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if (((compiler_globals.active_class_entry)->ce_flags & 288U) == 288U) {
    zend_error(1 << 6L, "Cannot use \'%s\' as interface on \'%s\' since it is a Trait", interface_name->u.constant.value.str.val, (compiler_globals.active_class_entry)->name);
  } else {

  }
  tmp = zend_get_class_fetch_type((char const   *)interface_name->u.constant.value.str.val, (unsigned int )interface_name->u.constant.value.str.len);
  switch (tmp) {
  case 1: 
  case 2: 
  case 7: 
  zend_error(1 << 6L, "Cannot use \'%s\' as interface name as it is reserved", interface_name->u.constant.value.str.val);
  break;
  default: ;
  break;
  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)144;
  while (1) {
    opline->op1_type = (unsigned char )compiler_globals.implementing_class.op_type;
    if (compiler_globals.implementing_class.op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& compiler_globals.implementing_class.u.constant));
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = compiler_globals.implementing_class.u.op;
    }
    break;
  }
  zend_resolve_class_name(interface_name, opline->extended_value, 0);
  opline->extended_value = (opline->extended_value & 4294967280UL) | 6UL;
  opline->op2_type = (unsigned char)1;
  tmp___1 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& interface_name->u.constant));
  opline->op2.constant = (unsigned int )tmp___1;
  ((compiler_globals.active_class_entry)->num_interfaces) ++;
  return;
}
}
void zend_do_implements_trait(znode *trait_name ) 
{ zend_op *opline ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if ((compiler_globals.active_class_entry)->ce_flags & 128U) {
    zend_error(1 << 6L, "Cannot use traits inside of interfaces. %s is used in %s", trait_name->u.constant.value.str.val, (compiler_globals.active_class_entry)->name);
  } else {

  }
  tmp = zend_get_class_fetch_type((char const   *)trait_name->u.constant.value.str.val, (unsigned int )trait_name->u.constant.value.str.len);
  switch (tmp) {
  case 1: 
  case 2: 
  case 7: 
  zend_error(1 << 6L, "Cannot use \'%s\' as trait name as it is reserved", trait_name->u.constant.value.str.val);
  break;
  default: ;
  break;
  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)154;
  while (1) {
    opline->op1_type = (unsigned char )compiler_globals.implementing_class.op_type;
    if (compiler_globals.implementing_class.op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& compiler_globals.implementing_class.u.constant));
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = compiler_globals.implementing_class.u.op;
    }
    break;
  }
  zend_resolve_class_name(trait_name, opline->extended_value, 0);
  opline->extended_value = 14UL;
  opline->op2_type = (unsigned char)1;
  tmp___1 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& trait_name->u.constant));
  opline->op2.constant = (unsigned int )tmp___1;
  ((compiler_globals.active_class_entry)->num_traits) ++;
  return;
}
}
void __attribute__((__visibility__("default")))  zend_mangle_property_name(char **dest , int *dest_length , char const   *src1 , int src1_length , char const   *src2 , int src2_length , int internal ) 
{ char *prop_name ;
  int prop_name_length ;
  void *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;

  {
  prop_name_length = ((1 + src1_length) + 1) + src2_length;
  if (internal) {
    tmp = __zend_malloc((unsigned int )(prop_name_length + 1));
    prop_name = (char *)tmp;
  } else {
    tmp___0 = _emalloc((unsigned int )(prop_name_length + 1));
    prop_name = (char *)tmp___0;
  }
  *(prop_name + 0) = (char )'\000';
  memcpy((void */* __restrict  */)(prop_name + 1), (void const   */* __restrict  */)src1, (unsigned int )(src1_length + 1));
  memcpy((void */* __restrict  */)(((prop_name + 1) + src1_length) + 1), (void const   */* __restrict  */)src2, (unsigned int )(src2_length + 1));
  *dest = prop_name;
  *dest_length = prop_name_length;
  return;
}
}
static int zend_strnlen(char const   *s , int maxlen ) 
{ int len ;
  char const   *tmp ;
  int tmp___0 ;

  {
  len = 0;
  while (1) {
    tmp = s;
    s ++;
    if (*tmp) {
      tmp___0 = maxlen;
      maxlen --;
      if (tmp___0) {

      } else {
        break;
      }
    } else {
      break;
    }
    len ++;
  }
  return (len);
}
}
int __attribute__((__visibility__("default")))  zend_unmangle_property_name(char const   *mangled_property , int len , char const   **class_name , char const   **prop_name ) 
{ int class_name_len ;
  int tmp ;

  {
  *class_name = (char const   *)((void *)0);
  if ((int const   )*(mangled_property + 0) != 0) {
    *prop_name = mangled_property;
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  if (len < 3) {
    zend_error(1 << 3L, "Illegal member variable name");
    *prop_name = mangled_property;
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {
    if ((int const   )*(mangled_property + 1) == 0) {
      zend_error(1 << 3L, "Illegal member variable name");
      *prop_name = mangled_property;
      return ((int __attribute__((__visibility__("default")))  )-1);
    } else {

    }
  }
  len --;
  tmp = zend_strnlen(mangled_property + 1, len - 1);
  class_name_len = tmp + 1;
  if (class_name_len >= len) {
    zend_error(1 << 3L, "Corrupt member variable name");
    *prop_name = mangled_property;
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {
    if ((int const   )*(mangled_property + class_name_len) != 0) {
      zend_error(1 << 3L, "Corrupt member variable name");
      *prop_name = mangled_property;
      return ((int __attribute__((__visibility__("default")))  )-1);
    } else {

    }
  }
  *class_name = mangled_property + 1;
  *prop_name = *class_name + class_name_len;
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
void zend_do_declare_property(znode const   *var_name , znode const   *value , zend_uint access_type ) 
{ zval *property ;
  zend_property_info *existing_property_info ;
  char *comment ;
  int comment_len ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  char const __attribute__((__visibility__("default")))  *tmp___1 ;

  {
  comment = (char *)((void *)0);
  comment_len = 0;
  if ((compiler_globals.active_class_entry)->ce_flags & 128U) {
    zend_error(1 << 6L, "Interfaces may not include member variables");
  } else {

  }
  if (access_type & 2U) {
    zend_error(1 << 6L, "Properties cannot be declared abstract");
  } else {

  }
  if (access_type & 4U) {
    zend_error(1 << 6L, "Cannot declare property %s::$%s final, the final modifier is allowed only for methods and classes", (compiler_globals.active_class_entry)->name, var_name->u.constant.value.str.val);
  } else {

  }
  tmp = zend_hash_find((HashTable const   *)(& (compiler_globals.active_class_entry)->properties_info), (char const   *)var_name->u.constant.value.str.val, (unsigned int )(var_name->u.constant.value.str.len + 1), (void **)(& existing_property_info));
  if (tmp == (int __attribute__((__visibility__("default")))  )0) {
    zend_error(1 << 6L, "Cannot redeclare %s::$%s", (compiler_globals.active_class_entry)->name, var_name->u.constant.value.str.val);
  } else {

  }
  while (1) {
    tmp___0 = _emalloc(sizeof(zval_gc_info ));
    property = (zval *)tmp___0;
    ((zval_gc_info *)property)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  if (value) {
    *property = (struct _zval_struct )value->u.constant;
  } else {
    property->refcount__gc = 1U;
    property->is_ref__gc = (unsigned char)0;
    property->type = (unsigned char)0;
  }
  if (compiler_globals.doc_comment) {
    comment = compiler_globals.doc_comment;
    comment_len = (int )compiler_globals.doc_comment_len;
    compiler_globals.doc_comment = (char *)((void *)0);
    compiler_globals.doc_comment_len = 0U;
  } else {

  }
  tmp___1 = (*zend_new_interned_string)((char const   *)var_name->u.constant.value.str.val, (int )(var_name->u.constant.value.str.len + 1), 0);
  zend_declare_property_ex(compiler_globals.active_class_entry, (char const   *)tmp___1, (int )var_name->u.constant.value.str.len, property, (int )access_type, (char const   *)comment, comment_len);
  _efree((void *)var_name->u.constant.value.str.val);
  return;
}
}
void zend_do_declare_class_constant(znode *var_name , znode const   *value ) 
{ zval *property ;
  char const   *cname ;
  int result ;
  void __attribute__((__visibility__("default")))  *tmp ;
  char const __attribute__((__visibility__("default")))  *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;

  {
  cname = (char const   *)((void *)0);
  if ((int const   )value->u.constant.type == 9) {
    zend_error(1 << 6L, "Arrays are not allowed in class constants");
    return;
  } else {

  }
  if (((compiler_globals.active_class_entry)->ce_flags & 288U) == 288U) {
    zend_error(1 << 6L, "Traits cannot have constants");
    return;
  } else {

  }
  while (1) {
    tmp = _emalloc(sizeof(zval_gc_info ));
    property = (zval *)tmp;
    ((zval_gc_info *)property)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  *property = (struct _zval_struct )value->u.constant;
  tmp___0 = (*zend_new_interned_string)((char const   *)var_name->u.constant.value.str.val, var_name->u.constant.value.str.len + 1, 0);
  cname = (char const   *)tmp___0;
  if ((unsigned int )cname >= (unsigned int )compiler_globals.interned_strings_start) {
    if ((unsigned int )cname < (unsigned int )compiler_globals.interned_strings_end) {
      tmp___1 = _zend_hash_quick_add_or_update(& (compiler_globals.active_class_entry)->constants_table, cname, (unsigned int )(var_name->u.constant.value.str.len + 1), ((Bucket *)((char *)cname - sizeof(Bucket )))->h, (void *)(& property), sizeof(zval *), (void **)((void *)0), 1 << 1);
      result = (int )tmp___1;
    } else {
      tmp___2 = _zend_hash_add_or_update(& (compiler_globals.active_class_entry)->constants_table, cname, (unsigned int )(var_name->u.constant.value.str.len + 1), (void *)(& property), sizeof(zval *), (void **)((void *)0), 1 << 1);
      result = (int )tmp___2;
    }
  } else {
    tmp___2 = _zend_hash_add_or_update(& (compiler_globals.active_class_entry)->constants_table, cname, (unsigned int )(var_name->u.constant.value.str.len + 1), (void *)(& property), sizeof(zval *), (void **)((void *)0), 1 << 1);
    result = (int )tmp___2;
  }
  if (result == -1) {
    while (1) {
      if ((gc_root_buffer *)((unsigned long )((zval_gc_info *)property)->u.buffered & 4294967292UL)) {
        gc_remove_zval_from_buffer(property);
      } else {

      }
      _efree((void *)property);
      break;
    }
    zend_error(1 << 6L, "Cannot redefine class constant %s::%s", (compiler_globals.active_class_entry)->name, var_name->u.constant.value.str.val);
  } else {

  }
  _zval_dtor(& var_name->u.constant);
  if (compiler_globals.doc_comment) {
    _efree((void *)compiler_globals.doc_comment);
    compiler_globals.doc_comment = (char *)((void *)0);
    compiler_globals.doc_comment_len = 0U;
  } else {

  }
  return;
}
}
void zend_do_fetch_property(znode *result , znode *object , znode const   *property ) 
{ zend_op opline ;
  zend_llist *fetch_list_ptr ;
  zend_llist_element *le ;
  zend_op *opline_ptr ;
  int tmp ;
  ulong __attribute__((__visibility__("default")))  tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_bool tmp___2 ;
  int tmp___3 ;
  zend_bool tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  ulong __attribute__((__visibility__("default")))  tmp___7 ;
  void __attribute__((__visibility__("default")))  *tmp___8 ;

  {
  zend_stack_top((zend_stack const   *)(& compiler_globals.bp_stack), (void **)(& fetch_list_ptr));
  if (object->op_type == 1 << 4) {
    if (object->u.op.var == (compiler_globals.active_op_array)->this_var) {
      object->op_type = 1 << 3;
    } else {

    }
  } else {
    if (fetch_list_ptr->count == 1U) {
      le = fetch_list_ptr->head;
      opline_ptr = (zend_op *)(le->data);
      tmp___2 = opline_is_fetch_this((zend_op const   *)opline_ptr);
      if (tmp___2) {
        zend_del_literal(compiler_globals.active_op_array, (int )opline_ptr->op1.constant);
        opline_ptr->op1_type = (unsigned char )(1 << 3);
        while (1) {
          opline_ptr->op2_type = (unsigned char )property->op_type;
          if (property->op_type == 1) {
            tmp = zend_add_literal(compiler_globals.active_op_array, & property->u.constant);
            opline_ptr->op2.constant = (unsigned int )tmp;
          } else {
            opline_ptr->op2 = (union _znode_op )property->u.op;
          }
          break;
        }
        switch ((int )opline_ptr->opcode) {
        case 83: 
        opline_ptr->opcode = (unsigned char)85;
        break;
        case 80: 
        opline_ptr->opcode = (unsigned char)82;
        break;
        case 86: 
        opline_ptr->opcode = (unsigned char)88;
        break;
        case 89: 
        opline_ptr->opcode = (unsigned char)91;
        break;
        case 95: 
        opline_ptr->opcode = (unsigned char)97;
        break;
        case 92: 
        opline_ptr->opcode = (unsigned char)94;
        break;
        }
        if ((int )opline_ptr->op2_type == 1) {
          if ((int )((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant.type == 6) {
            while (1) {
              if ((unsigned int )((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
                if ((unsigned int )((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
                  ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant.value.str.val - sizeof(Bucket )))->h;
                } else {
                  tmp___0 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant.value.str.len + 1));
                  ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant))->hash_value = (unsigned long )tmp___0;
                }
              } else {
                tmp___0 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant.value.str.len + 1));
                ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->constant))->hash_value = (unsigned long )tmp___0;
              }
              break;
            }
            while (1) {
              ((compiler_globals.active_op_array)->literals + opline_ptr->op2.constant)->cache_slot = (unsigned int )(compiler_globals.active_op_array)->last_cache_slot;
              (compiler_globals.active_op_array)->last_cache_slot += 2;
              if ((compiler_globals.active_op_array)->fn_flags & 16U) {
                if ((compiler_globals.active_op_array)->run_time_cache) {
                  tmp___1 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
                  (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___1;
                  *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
                  *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 2)) = (void *)0;
                } else {

                }
              } else {

              }
              break;
            }
          } else {

          }
        } else {

        }
        while (1) {
          result->op_type = (int )opline_ptr->result_type;
          if (result->op_type == 1) {
            result->u.constant = ((compiler_globals.active_op_array)->literals + opline_ptr->result.constant)->constant;
          } else {
            result->u.op = opline_ptr->result;
            result->EA = 0U;
          }
          break;
        }
        return;
      } else {

      }
    } else {

    }
  }
  tmp___4 = zend_is_function_or_method_call((znode const   *)object);
  if (tmp___4) {
    init_op(& opline);
    opline.opcode = (unsigned char)156;
    while (1) {
      opline.op1_type = (unsigned char )object->op_type;
      if (object->op_type == 1) {
        tmp___3 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& object->u.constant));
        opline.op1.constant = (unsigned int )tmp___3;
      } else {
        opline.op1 = object->u.op;
      }
      break;
    }
    opline.op2_type = (unsigned char )(1 << 3);
    opline.result_type = (unsigned char )(1 << 2);
    opline.result.var = opline.op1.var;
    zend_llist_add_element(fetch_list_ptr, (void *)(& opline));
  } else {

  }
  init_op(& opline);
  opline.opcode = (unsigned char)85;
  opline.result_type = (unsigned char )(1 << 2);
  opline.result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline.op1_type = (unsigned char )object->op_type;
    if (object->op_type == 1) {
      tmp___5 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& object->u.constant));
      opline.op1.constant = (unsigned int )tmp___5;
    } else {
      opline.op1 = object->u.op;
    }
    break;
  }
  while (1) {
    opline.op2_type = (unsigned char )property->op_type;
    if (property->op_type == 1) {
      tmp___6 = zend_add_literal(compiler_globals.active_op_array, & property->u.constant);
      opline.op2.constant = (unsigned int )tmp___6;
    } else {
      opline.op2 = (union _znode_op )property->u.op;
    }
    break;
  }
  if ((int )opline.op2_type == 1) {
    if ((int )((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.type == 6) {
      while (1) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
          if ((unsigned int )((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
            ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val - sizeof(Bucket )))->h;
          } else {
            tmp___7 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.len + 1));
            ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant))->hash_value = (unsigned long )tmp___7;
          }
        } else {
          tmp___7 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline.op2.constant)->constant))->hash_value = (unsigned long )tmp___7;
        }
        break;
      }
      while (1) {
        ((compiler_globals.active_op_array)->literals + opline.op2.constant)->cache_slot = (unsigned int )(compiler_globals.active_op_array)->last_cache_slot;
        (compiler_globals.active_op_array)->last_cache_slot += 2;
        if ((compiler_globals.active_op_array)->fn_flags & 16U) {
          if ((compiler_globals.active_op_array)->run_time_cache) {
            tmp___8 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
            (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___8;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 2)) = (void *)0;
          } else {

          }
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  while (1) {
    result->op_type = (int )opline.result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline.result.constant)->constant;
    } else {
      result->u.op = opline.result;
      result->EA = 0U;
    }
    break;
  }
  zend_llist_add_element(fetch_list_ptr, (void *)(& opline));
  return;
}
}
void zend_do_halt_compiler_register(void) 
{ char *name ;
  char *cfilename ;
  char haltoff[25] ;
  int len ;
  int clen ;
  char __attribute__((__visibility__("default")))  *tmp ;
  size_t tmp___0 ;
  size_t __attribute__((__visibility__("default")))  tmp___1 ;

  {
  haltoff[0] = (char )'_';
  haltoff[1] = (char )'_';
  haltoff[2] = (char )'C';
  haltoff[3] = (char )'O';
  haltoff[4] = (char )'M';
  haltoff[5] = (char )'P';
  haltoff[6] = (char )'I';
  haltoff[7] = (char )'L';
  haltoff[8] = (char )'E';
  haltoff[9] = (char )'R';
  haltoff[10] = (char )'_';
  haltoff[11] = (char )'H';
  haltoff[12] = (char )'A';
  haltoff[13] = (char )'L';
  haltoff[14] = (char )'T';
  haltoff[15] = (char )'_';
  haltoff[16] = (char )'O';
  haltoff[17] = (char )'F';
  haltoff[18] = (char )'F';
  haltoff[19] = (char )'S';
  haltoff[20] = (char )'E';
  haltoff[21] = (char )'T';
  haltoff[22] = (char )'_';
  haltoff[23] = (char )'_';
  haltoff[24] = (char )'\000';
  if (compiler_globals.has_bracketed_namespaces) {
    if (compiler_globals.in_namespace) {
      zend_error(1 << 6L, "__HALT_COMPILER() can only be used from the outermost scope");
    } else {

    }
  } else {

  }
  tmp = zend_get_compiled_filename();
  cfilename = (char *)tmp;
  tmp___0 = strlen((char const   *)cfilename);
  clen = (int )tmp___0;
  zend_mangle_property_name(& name, & len, (char const   *)(haltoff), (int )(sizeof(haltoff) - 1U), (char const   *)cfilename, clen, 0);
  tmp___1 = zend_get_scanned_file_offset();
  zend_register_long_constant((char const   *)name, (unsigned int )(len + 1), (long )tmp___1, 1, 0);
  _efree((void *)name);
  if (compiler_globals.in_namespace) {
    zend_do_end_namespace();
  } else {

  }
  return;
}
}
void zend_do_push_object(znode const   *object ) 
{ 

  {
  zend_stack_push(& compiler_globals.object_stack, (void const   *)object, (int )sizeof(znode ));
  return;
}
}
void zend_do_pop_object(znode *object ) 
{ znode *tmp ;

  {
  if (object) {
    zend_stack_top((zend_stack const   *)(& compiler_globals.object_stack), (void **)(& tmp));
    *object = *tmp;
  } else {

  }
  zend_stack_del_top(& compiler_globals.object_stack);
  return;
}
}
void zend_do_begin_new_object(znode *new_token , znode *class_type ) 
{ zend_op *opline ;
  unsigned char *ptr ;
  int tmp ;
  int tmp___0 ;

  {
  ptr = (unsigned char *)((void *)0);
  tmp = get_next_op_number(compiler_globals.active_op_array);
  new_token->u.op.opline_num = (unsigned int )tmp;
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)68;
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )class_type->op_type;
    if (class_type->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& class_type->u.constant));
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = class_type->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  zend_stack_push(& compiler_globals.function_call_stack, (void const   *)((void *)(& ptr)), (int )sizeof(unsigned char *));
  return;
}
}
void zend_do_end_new_object(znode *result , znode const   *new_token , znode const   *argument_list ) 
{ znode ctor_result ;
  int tmp ;

  {
  zend_do_end_function_call((znode *)((void *)0), & ctor_result, argument_list, 1, 0);
  zend_do_free(& ctor_result);
  tmp = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + new_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp;
  while (1) {
    result->op_type = (int )((compiler_globals.active_op_array)->opcodes + new_token->u.op.opline_num)->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + ((compiler_globals.active_op_array)->opcodes + new_token->u.op.opline_num)->result.constant)->constant;
    } else {
      result->u.op = ((compiler_globals.active_op_array)->opcodes + new_token->u.op.opline_num)->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
static zend_constant *zend_get_ct_const(zval const   *const_name , int all_internal_constants_substitution ) 
{ zend_constant *c ;
  char *lookup_name ;
  char __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  char *lookup_name___0 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  c = (zend_constant *)((void *)0);
  if ((int )*(const_name->value.str.val + 0) == 92) {
    tmp___1 = zend_hash_find((HashTable const   *)executor_globals.zend_constants, (char const   *)(const_name->value.str.val + 1), (unsigned int )const_name->value.str.len, (void **)(& c));
    if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
      tmp = zend_str_tolower_dup((char const   *)(const_name->value.str.val + 1), (unsigned int )(const_name->value.str.len - 1));
      lookup_name = (char *)tmp;
      tmp___0 = zend_hash_find((HashTable const   *)executor_globals.zend_constants, (char const   *)lookup_name, (unsigned int )const_name->value.str.len, (void **)(& c));
      if (tmp___0 == (int __attribute__((__visibility__("default")))  )0) {
        if (c->flags & (1 << 2)) {
          if (! (c->flags & 1)) {
            _efree((void *)lookup_name);
            return (c);
          } else {

          }
        } else {

        }
      } else {

      }
      _efree((void *)lookup_name);
      return ((zend_constant *)((void *)0));
    } else {

    }
  } else {
    tmp___4 = zend_hash_find((HashTable const   *)executor_globals.zend_constants, (char const   *)const_name->value.str.val, (unsigned int )(const_name->value.str.len + 1), (void **)(& c));
    if (tmp___4 == (int __attribute__((__visibility__("default")))  )-1) {
      tmp___2 = zend_str_tolower_dup((char const   *)const_name->value.str.val, (unsigned int )const_name->value.str.len);
      lookup_name___0 = (char *)tmp___2;
      tmp___3 = zend_hash_find((HashTable const   *)executor_globals.zend_constants, (char const   *)lookup_name___0, (unsigned int )(const_name->value.str.len + 1), (void **)(& c));
      if (tmp___3 == (int __attribute__((__visibility__("default")))  )0) {
        if (c->flags & (1 << 2)) {
          if (! (c->flags & 1)) {
            _efree((void *)lookup_name___0);
            return (c);
          } else {

          }
        } else {

        }
      } else {

      }
      _efree((void *)lookup_name___0);
      return ((zend_constant *)((void *)0));
    } else {

    }
  }
  if (c->flags & (1 << 2)) {
    return (c);
  } else {

  }
  if (all_internal_constants_substitution) {
    if (c->flags & (1 << 1)) {
      if (! (compiler_globals.compiler_options & (unsigned int )(1 << 5))) {
        if ((int )c->value.type != 8) {
          if ((int )c->value.type != 9) {
            return (c);
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  return ((zend_constant *)((void *)0));
}
}
static int zend_constant_ct_subst(znode *result , zval *const_name , int all_internal_constants_substitution ) 
{ zend_constant *c ;
  zend_constant *tmp ;

  {
  tmp = zend_get_ct_const((zval const   *)const_name, all_internal_constants_substitution);
  c = tmp;
  if (c) {
    _zval_dtor(const_name);
    result->op_type = 1;
    result->u.constant = c->value;
    _zval_copy_ctor(& result->u.constant);
    result->u.constant.refcount__gc = 1U;
    result->u.constant.is_ref__gc = (unsigned char)0;
    return (1);
  } else {

  }
  return (0);
}
}
void zend_do_fetch_constant(znode *result , znode *constant_container , znode *constant_name , int mode , zend_bool check_namespace ) 
{ znode tmp ;
  zend_op *opline ;
  int type ;
  char *compound ;
  ulong fetch_type ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  ulong __attribute__((__visibility__("default")))  tmp___4 ;
  int tmp___5 ;
  void __attribute__((__visibility__("default")))  *tmp___6 ;
  void __attribute__((__visibility__("default")))  *tmp___7 ;
  void *tmp___8 ;
  int tmp___9 ;
  void *tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  void __attribute__((__visibility__("default")))  *tmp___16 ;

  {
  fetch_type = (ulong )0;
  if (constant_container) {
    switch (mode) {
    case 1: 
    type = zend_get_class_fetch_type((char const   *)constant_container->u.constant.value.str.val, (unsigned int )constant_container->u.constant.value.str.len);
    if (7 == type) {
      zend_error(1, "\"static::\" is not allowed in compile-time constants");
    } else {
      if (0 == type) {
        zend_resolve_class_name(constant_container, fetch_type, 1);
      } else {

      }
    }
    zend_do_build_full_name((znode *)((void *)0), constant_container, constant_name, 1);
    *result = *constant_container;
    result->u.constant.type = (unsigned char )(8UL | fetch_type);
    break;
    case 1 << 1: 
    if (constant_container->op_type == 1) {
      tmp___0 = zend_get_class_fetch_type((char const   *)constant_container->u.constant.value.str.val, (unsigned int )constant_container->u.constant.value.str.len);
      if (0 == tmp___0) {
        zend_resolve_class_name(constant_container, fetch_type, 1);
      } else {
        zend_do_fetch_class(& tmp, constant_container);
        constant_container = & tmp;
      }
    } else {
      zend_do_fetch_class(& tmp, constant_container);
      constant_container = & tmp;
    }
    opline = get_next_op(compiler_globals.active_op_array);
    opline->opcode = (unsigned char)99;
    opline->result_type = (unsigned char )(1 << 1);
    opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
    if (constant_container->op_type == 1) {
      opline->op1_type = (unsigned char)1;
      tmp___1 = zend_add_class_name_literal(compiler_globals.active_op_array, (zval const   *)(& constant_container->u.constant));
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      while (1) {
        opline->op1_type = (unsigned char )constant_container->op_type;
        if (constant_container->op_type == 1) {
          tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& constant_container->u.constant));
          opline->op1.constant = (unsigned int )tmp___2;
        } else {
          opline->op1 = constant_container->u.op;
        }
        break;
      }
    }
    while (1) {
      opline->op2_type = (unsigned char )constant_name->op_type;
      if (constant_name->op_type == 1) {
        tmp___3 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& constant_name->u.constant));
        opline->op2.constant = (unsigned int )tmp___3;
      } else {
        opline->op2 = constant_name->u.op;
      }
      break;
    }
    while (1) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val - sizeof(Bucket )))->h;
        } else {
          tmp___4 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___4;
        }
      } else {
        tmp___4 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___4;
      }
      break;
    }
    if ((int )opline->op1_type == 1) {
      while (1) {
        tmp___5 = (compiler_globals.active_op_array)->last_cache_slot;
        ((compiler_globals.active_op_array)->last_cache_slot) ++;
        ((compiler_globals.active_op_array)->literals + opline->op2.constant)->cache_slot = (unsigned int )tmp___5;
        if ((compiler_globals.active_op_array)->fn_flags & 16U) {
          if ((compiler_globals.active_op_array)->run_time_cache) {
            tmp___6 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
            (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___6;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
          } else {

          }
        } else {

        }
        break;
      }
    } else {
      while (1) {
        ((compiler_globals.active_op_array)->literals + opline->op2.constant)->cache_slot = (unsigned int )(compiler_globals.active_op_array)->last_cache_slot;
        (compiler_globals.active_op_array)->last_cache_slot += 2;
        if ((compiler_globals.active_op_array)->fn_flags & 16U) {
          if ((compiler_globals.active_op_array)->run_time_cache) {
            tmp___7 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
            (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___7;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
            *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 2)) = (void *)0;
          } else {

          }
        } else {

        }
        break;
      }
    }
    while (1) {
      result->op_type = (int )opline->result_type;
      if (result->op_type == 1) {
        result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
      } else {
        result->u.op = opline->result;
        result->EA = 0U;
      }
      break;
    }
    break;
    }
    return;
  } else {

  }
  switch (mode) {
  case 1: 
  tmp___8 = memchr((void const   *)constant_name->u.constant.value.str.val, '\\', (unsigned int )constant_name->u.constant.value.str.len);
  compound = (char *)tmp___8;
  tmp___9 = zend_constant_ct_subst(result, & constant_name->u.constant, 0);
  if (tmp___9) {
    break;
  } else {

  }
  zend_resolve_non_class_name(constant_name, check_namespace);
  if (! compound) {
    fetch_type |= 16UL;
  } else {

  }
  *result = *constant_name;
  result->u.constant.type = (unsigned char )(8UL | fetch_type);
  break;
  case 1 << 1: 
  tmp___10 = memchr((void const   *)constant_name->u.constant.value.str.val, '\\', (unsigned int )constant_name->u.constant.value.str.len);
  compound = (char *)tmp___10;
  zend_resolve_non_class_name(constant_name, check_namespace);
  tmp___11 = zend_constant_ct_subst(result, & constant_name->u.constant, 1);
  if (tmp___11) {
    break;
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)99;
  opline->result_type = (unsigned char )(1 << 1);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char)1;
  if (compound) {
    opline->extended_value = 0UL;
    tmp___12 = zend_add_const_name_literal(compiler_globals.active_op_array, (zval const   *)(& constant_name->u.constant), 0);
    opline->op2.constant = (unsigned int )tmp___12;
  } else {
    opline->extended_value = 16UL;
    if (compiler_globals.current_namespace) {
      opline->extended_value |= 256UL;
      tmp___13 = zend_add_const_name_literal(compiler_globals.active_op_array, (zval const   *)(& constant_name->u.constant), 1);
      opline->op2.constant = (unsigned int )tmp___13;
    } else {
      tmp___14 = zend_add_const_name_literal(compiler_globals.active_op_array, (zval const   *)(& constant_name->u.constant), 0);
      opline->op2.constant = (unsigned int )tmp___14;
    }
  }
  while (1) {
    tmp___15 = (compiler_globals.active_op_array)->last_cache_slot;
    ((compiler_globals.active_op_array)->last_cache_slot) ++;
    ((compiler_globals.active_op_array)->literals + opline->op2.constant)->cache_slot = (unsigned int )tmp___15;
    if ((compiler_globals.active_op_array)->fn_flags & 16U) {
      if ((compiler_globals.active_op_array)->run_time_cache) {
        tmp___16 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
        (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___16;
        *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
      } else {

      }
    } else {

    }
    break;
  }
  break;
  }
  return;
}
}
void zend_do_shell_exec(znode *result , znode const   *cmd ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  zval _c ;
  char const   *__s ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  int tmp___3 ;
  ulong __attribute__((__visibility__("default")))  tmp___4 ;
  int tmp___5 ;
  void __attribute__((__visibility__("default")))  *tmp___6 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  switch ((int )cmd->op_type) {
  case 1: 
  case 1 << 1: 
  opline->opcode = (unsigned char)65;
  break;
  default: 
  opline->opcode = (unsigned char)66;
  break;
  }
  while (1) {
    opline->op1_type = (unsigned char )cmd->op_type;
    if (cmd->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & cmd->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )cmd->u.op;
    }
    break;
  }
  opline->op2.opline_num = 0U;
  opline->extended_value = 60UL;
  opline->op2_type = (unsigned char )(1 << 3);
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)60;
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  opline->result_type = (unsigned char )(1 << 2);
  while (1) {
    while (1) {
      tmp___1 = _estrndup("shell_exec", sizeof("shell_exec") - 1U);
      __s = (char const   *)tmp___1;
      __l = (int )(sizeof("shell_exec") - 1U);
      __z = & _c;
      __z->value.str.len = __l;
      __z->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
      __z->type = (unsigned char)6;
      break;
    }
    tmp___3 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c));
    opline->op1.constant = (unsigned int )tmp___3;
    break;
  }
  while (1) {
    if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val - sizeof(Bucket )))->h;
      } else {
        tmp___4 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___4;
      }
    } else {
      tmp___4 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
      ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___4;
    }
    break;
  }
  opline->op1_type = (unsigned char)1;
  while (1) {
    tmp___5 = (compiler_globals.active_op_array)->last_cache_slot;
    ((compiler_globals.active_op_array)->last_cache_slot) ++;
    ((compiler_globals.active_op_array)->literals + opline->op1.constant)->cache_slot = (unsigned int )tmp___5;
    if ((compiler_globals.active_op_array)->fn_flags & 16U) {
      if ((compiler_globals.active_op_array)->run_time_cache) {
        tmp___6 = _erealloc((void *)(compiler_globals.active_op_array)->run_time_cache, (unsigned int )(compiler_globals.active_op_array)->last_cache_slot * sizeof(void *), 0);
        (compiler_globals.active_op_array)->run_time_cache = (void **)tmp___6;
        *((compiler_globals.active_op_array)->run_time_cache + ((compiler_globals.active_op_array)->last_cache_slot - 1)) = (void *)0;
      } else {

      }
    } else {

    }
    break;
  }
  opline->extended_value = 1UL;
  opline->op2_type = (unsigned char )(1 << 3);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_init_array(znode *result , znode const   *expr , znode const   *offset , zend_bool is_ref ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  ulong index___0 ;
  int numeric ;
  register char const   *tmp___2 ;
  char const   *end ;
  zval *__z ;
  ulong __attribute__((__visibility__("default")))  tmp___3 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)71;
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  opline->result_type = (unsigned char )(1 << 1);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  if (expr) {
    while (1) {
      opline->op1_type = (unsigned char )expr->op_type;
      if (expr->op_type == 1) {
        tmp___0 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
        opline->op1.constant = (unsigned int )tmp___0;
      } else {
        opline->op1 = (union _znode_op )expr->u.op;
      }
      break;
    }
    if (offset) {
      while (1) {
        opline->op2_type = (unsigned char )offset->op_type;
        if (offset->op_type == 1) {
          tmp___1 = zend_add_literal(compiler_globals.active_op_array, & offset->u.constant);
          opline->op2.constant = (unsigned int )tmp___1;
        } else {
          opline->op2 = (union _znode_op )offset->u.op;
        }
        break;
      }
      if ((int )opline->op2_type == 1) {
        if ((int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.type == 6) {
          numeric = 0;
          while (1) {
            tmp___2 = (char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val;
            if ((int const   )*tmp___2 == 45) {
              tmp___2 ++;
            } else {

            }
            if ((int const   )*tmp___2 >= 48) {
              if ((int const   )*tmp___2 <= 57) {
                end = (char const   *)(((((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val + ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len) + 1) - 1);
                if ((int const   )*end != 0) {
                  break;
                } else {
                  if ((int const   )*tmp___2 == 48) {
                    if (((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1 > 2) {
                      break;
                    } else {
                      goto _L;
                    }
                  } else {
                    _L: /* CIL Label */ 
                    if (end - tmp___2 > 10) {
                      break;
                    } else {
                      if (end - tmp___2 == 10) {
                        if ((int const   )*tmp___2 > 50) {
                          break;
                        } else {

                        }
                      } else {

                      }
                    }
                  }
                }
                index___0 = (unsigned long )((int const   )*tmp___2 - 48);
                while (1) {
                  tmp___2 ++;
                  if ((unsigned int )tmp___2 != (unsigned int )end) {
                    if ((int const   )*tmp___2 >= 48) {
                      if ((int const   )*tmp___2 <= 57) {

                      } else {
                        break;
                      }
                    } else {
                      break;
                    }
                  } else {
                    break;
                  }
                  index___0 = index___0 * 10UL + (ulong )((int const   )*tmp___2 - 48);
                }
                if ((unsigned int )tmp___2 == (unsigned int )end) {
                  if ((int )*(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val) == 45) {
                    if (index___0 - 1UL > 2147483647UL) {
                      break;
                    } else {

                    }
                    index___0 = (unsigned long )(- ((long )index___0));
                  } else {
                    if (index___0 > 2147483647UL) {
                      break;
                    } else {

                    }
                  }
                  numeric = 1;
                } else {

                }
              } else {

              }
            } else {

            }
            break;
          }
          if (numeric) {
            _zval_dtor(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant);
            __z = & ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant;
            __z->value.lval = (long )index___0;
            __z->type = (unsigned char)1;
          } else {
            while (1) {
              if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
                if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
                  ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val - sizeof(Bucket )))->h;
                } else {
                  tmp___3 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
                  ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___3;
                }
              } else {
                tmp___3 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
                ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___3;
              }
              break;
            }
          }
        } else {

        }
      } else {

      }
    } else {
      opline->op2_type = (unsigned char )(1 << 3);
    }
  } else {
    opline->op1_type = (unsigned char )(1 << 3);
    opline->op2_type = (unsigned char )(1 << 3);
  }
  opline->extended_value = (unsigned long )is_ref;
  return;
}
}
void zend_do_add_array_element(znode *result , znode const   *expr , znode const   *offset , zend_bool is_ref ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  ulong index___0 ;
  int numeric ;
  register char const   *tmp___3 ;
  char const   *end ;
  zval *__z ;
  ulong __attribute__((__visibility__("default")))  tmp___4 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)72;
  while (1) {
    opline->result_type = (unsigned char )result->op_type;
    if (result->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& result->u.constant));
      opline->result.constant = (unsigned int )tmp___0;
    } else {
      opline->result = result->u.op;
    }
    break;
  }
  while (1) {
    opline->op1_type = (unsigned char )expr->op_type;
    if (expr->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )expr->u.op;
    }
    break;
  }
  if (offset) {
    while (1) {
      opline->op2_type = (unsigned char )offset->op_type;
      if (offset->op_type == 1) {
        tmp___2 = zend_add_literal(compiler_globals.active_op_array, & offset->u.constant);
        opline->op2.constant = (unsigned int )tmp___2;
      } else {
        opline->op2 = (union _znode_op )offset->u.op;
      }
      break;
    }
    if ((int )opline->op2_type == 1) {
      if ((int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.type == 6) {
        numeric = 0;
        while (1) {
          tmp___3 = (char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val;
          if ((int const   )*tmp___3 == 45) {
            tmp___3 ++;
          } else {

          }
          if ((int const   )*tmp___3 >= 48) {
            if ((int const   )*tmp___3 <= 57) {
              end = (char const   *)(((((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val + ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len) + 1) - 1);
              if ((int const   )*end != 0) {
                break;
              } else {
                if ((int const   )*tmp___3 == 48) {
                  if (((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1 > 2) {
                    break;
                  } else {
                    goto _L;
                  }
                } else {
                  _L: /* CIL Label */ 
                  if (end - tmp___3 > 10) {
                    break;
                  } else {
                    if (end - tmp___3 == 10) {
                      if ((int const   )*tmp___3 > 50) {
                        break;
                      } else {

                      }
                    } else {

                    }
                  }
                }
              }
              index___0 = (unsigned long )((int const   )*tmp___3 - 48);
              while (1) {
                tmp___3 ++;
                if ((unsigned int )tmp___3 != (unsigned int )end) {
                  if ((int const   )*tmp___3 >= 48) {
                    if ((int const   )*tmp___3 <= 57) {

                    } else {
                      break;
                    }
                  } else {
                    break;
                  }
                } else {
                  break;
                }
                index___0 = index___0 * 10UL + (ulong )((int const   )*tmp___3 - 48);
              }
              if ((unsigned int )tmp___3 == (unsigned int )end) {
                if ((int )*(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val) == 45) {
                  if (index___0 - 1UL > 2147483647UL) {
                    break;
                  } else {

                  }
                  index___0 = (unsigned long )(- ((long )index___0));
                } else {
                  if (index___0 > 2147483647UL) {
                    break;
                  } else {

                  }
                }
                numeric = 1;
              } else {

              }
            } else {

            }
          } else {

          }
          break;
        }
        if (numeric) {
          _zval_dtor(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant);
          __z = & ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant;
          __z->value.lval = (long )index___0;
          __z->type = (unsigned char)1;
        } else {
          while (1) {
            if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
              if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
                ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val - sizeof(Bucket )))->h;
              } else {
                tmp___4 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
                ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___4;
              }
            } else {
              tmp___4 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant.value.str.len + 1));
              ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant))->hash_value = (unsigned long )tmp___4;
            }
            break;
          }
        }
      } else {

      }
    } else {

    }
  } else {
    opline->op2_type = (unsigned char )(1 << 3);
  }
  opline->extended_value = (unsigned long )is_ref;
  return;
}
}
void zend_do_add_static_array_element(znode *result , znode *offset , znode const   *expr ) 
{ zval *element ;
  void __attribute__((__visibility__("default")))  *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  long tmp___1 ;

  {
  while (1) {
    tmp = _emalloc(sizeof(zval_gc_info ));
    element = (zval *)tmp;
    ((zval_gc_info *)element)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  *element = (struct _zval_struct )expr->u.constant;
  if (offset) {
    switch ((int )offset->u.constant.type & 0x00f) {
    case 8: 
    element->type = (unsigned char )((int )element->type | 0x080);
    tmp___0 = _erealloc((void *)offset->u.constant.value.str.val, (unsigned int )(offset->u.constant.value.str.len + 3), 0);
    offset->u.constant.value.str.val = (char *)tmp___0;
    *(offset->u.constant.value.str.val + (offset->u.constant.value.str.len + 1)) = (char )offset->u.constant.type;
    *(offset->u.constant.value.str.val + (offset->u.constant.value.str.len + 2)) = (char)0;
    zend_symtable_update(result->u.constant.value.ht, (char const   *)offset->u.constant.value.str.val, (unsigned int )(offset->u.constant.value.str.len + 3), (void *)(& element), sizeof(zval *), (void **)((void *)0));
    _zval_dtor(& offset->u.constant);
    break;
    case 6: 
    zend_symtable_update(result->u.constant.value.ht, (char const   *)offset->u.constant.value.str.val, (unsigned int )(offset->u.constant.value.str.len + 1), (void *)(& element), sizeof(zval *), (void **)((void *)0));
    _zval_dtor(& offset->u.constant);
    break;
    case 0: 
    zend_symtable_update(result->u.constant.value.ht, "", 1U, (void *)(& element), sizeof(zval *), (void **)((void *)0));
    break;
    case 1: 
    case 3: 
    _zend_hash_index_update_or_next_insert(result->u.constant.value.ht, (unsigned long )offset->u.constant.value.lval, (void *)(& element), sizeof(zval *), (void **)((void *)0), 1);
    break;
    case 2: 
    tmp___1 = zend_dval_to_lval(offset->u.constant.value.dval);
    _zend_hash_index_update_or_next_insert(result->u.constant.value.ht, (unsigned long )tmp___1, (void *)(& element), sizeof(zval *), (void **)((void *)0), 1);
    break;
    case 9: 
    zend_error(1, "Illegal offset type");
    break;
    }
  } else {
    _zend_hash_index_update_or_next_insert(result->u.constant.value.ht, 0UL, (void *)(& element), sizeof(zval *), (void **)((void *)0), 1 << 2);
  }
  return;
}
}
void zend_do_add_list_element(znode const   *element ) 
{ list_llist_element lle ;

  {
  if (element) {
    zend_check_writable_variable(element);
    lle.var = (struct _znode )*element;
    zend_llist_copy(& lle.dimensions, & compiler_globals.dimension_llist);
    zend_llist_prepend_element(& compiler_globals.list_llist, (void *)(& lle));
  } else {

  }
  (*((int *)((compiler_globals.dimension_llist.tail)->data))) ++;
  return;
}
}
void zend_do_new_list_begin(void) 
{ int current_dimension ;

  {
  current_dimension = 0;
  zend_llist_add_element(& compiler_globals.dimension_llist, (void *)(& current_dimension));
  return;
}
}
void zend_do_new_list_end(void) 
{ 

  {
  zend_llist_remove_tail(& compiler_globals.dimension_llist);
  (*((int *)((compiler_globals.dimension_llist.tail)->data))) ++;
  return;
}
}
void zend_do_list_init(void) 
{ 

  {
  zend_stack_push(& compiler_globals.list_stack, (void const   *)(& compiler_globals.list_llist), (int )sizeof(zend_llist ));
  zend_stack_push(& compiler_globals.list_stack, (void const   *)(& compiler_globals.dimension_llist), (int )sizeof(zend_llist ));
  zend_llist_init(& compiler_globals.list_llist, sizeof(list_llist_element ), (void (*)(void * ))((void *)0), (unsigned char)0);
  zend_llist_init(& compiler_globals.dimension_llist, sizeof(int ), (void (*)(void * ))((void *)0), (unsigned char)0);
  zend_do_new_list_begin();
  return;
}
}
void zend_do_list_end(znode *result , znode *expr ) 
{ zend_llist_element *le ;
  zend_llist_element *dimension ;
  zend_op *opline ;
  znode last_container ;
  zend_llist *tmp_dimension_llist ;
  int tmp ;
  zval _c ;
  zval *__z ;
  int tmp___0 ;
  zend_llist *p ;

  {
  le = compiler_globals.list_llist.head;
  while (le) {
    tmp_dimension_llist = & ((list_llist_element *)(le->data))->dimensions;
    dimension = tmp_dimension_llist->head;
    while (dimension) {
      opline = get_next_op(compiler_globals.active_op_array);
      if ((unsigned int )dimension == (unsigned int )tmp_dimension_llist->head) {
        last_container = *expr;
        switch (expr->op_type) {
        case 1 << 2: 
        case 1 << 4: 
        opline->opcode = (unsigned char)81;
        break;
        case 1 << 1: 
        opline->opcode = (unsigned char)98;
        break;
        case 1: 
        _zval_copy_ctor(& expr->u.constant);
        opline->opcode = (unsigned char)98;
        break;
        }
        opline->extended_value |= 134217728UL;
      } else {
        opline->opcode = (unsigned char)81;
      }
      opline->result_type = (unsigned char )(1 << 2);
      opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
      while (1) {
        opline->op1_type = (unsigned char )last_container.op_type;
        if (last_container.op_type == 1) {
          tmp = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& last_container.u.constant));
          opline->op1.constant = (unsigned int )tmp;
        } else {
          opline->op1 = last_container.u.op;
        }
        break;
      }
      opline->op2_type = (unsigned char)1;
      while (1) {
        __z = & _c;
        __z->value.lval = (long )*((int *)(dimension->data));
        __z->type = (unsigned char)1;
        tmp___0 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& _c));
        opline->op2.constant = (unsigned int )tmp___0;
        break;
      }
      while (1) {
        last_container.op_type = (int )opline->result_type;
        if (last_container.op_type == 1) {
          last_container.u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
        } else {
          last_container.u.op = opline->result;
          last_container.EA = 0U;
        }
        break;
      }
      dimension = dimension->next;
    }
    ((list_llist_element *)(le->data))->value = last_container;
    zend_llist_destroy(& ((list_llist_element *)(le->data))->dimensions);
    zend_do_assign(result, & ((list_llist_element *)(le->data))->var, & ((list_llist_element *)(le->data))->value);
    zend_do_free(result);
    le = le->next;
  }
  zend_llist_destroy(& compiler_globals.dimension_llist);
  zend_llist_destroy(& compiler_globals.list_llist);
  *result = *expr;
  zend_stack_top((zend_stack const   *)(& compiler_globals.list_stack), (void **)(& p));
  compiler_globals.dimension_llist = *p;
  zend_stack_del_top(& compiler_globals.list_stack);
  zend_stack_top((zend_stack const   *)(& compiler_globals.list_stack), (void **)(& p));
  compiler_globals.list_llist = *p;
  zend_stack_del_top(& compiler_globals.list_stack);
  return;
}
}
void zend_init_list(void *result , void *item ) 
{ void **list ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  tmp = _emalloc(sizeof(void *) * 2U);
  list = (void **)tmp;
  *(list + 0) = item;
  *(list + 1) = (void *)0;
  *((void **)result) = (void *)list;
  return;
}
}
void zend_add_to_list(void *result , void *item ) 
{ void **list ;
  size_t n ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  list = (void **)*((void **)result);
  n = (size_t )0;
  while (1) {
    if (list) {
      if (*(list + n)) {

      } else {
        break;
      }
    } else {
      break;
    }
    n ++;
  }
  tmp = _erealloc((void *)list, sizeof(void *) * (n + 2U), 0);
  list = (void **)tmp;
  *(list + n) = item;
  *(list + (n + 1U)) = (void *)0;
  *((void **)result) = (void *)list;
  return;
}
}
void zend_do_fetch_static_variable(znode *varname , znode const   *static_assignment , int fetch_type ) 
{ zval *tmp ;
  zend_op *opline ;
  znode lval ;
  znode result ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  int tmp___2 ;
  ulong __attribute__((__visibility__("default")))  tmp___3 ;
  znode dummy ;

  {
  while (1) {
    tmp___0 = _emalloc(sizeof(zval_gc_info ));
    tmp = (zval *)tmp___0;
    ((zval_gc_info *)tmp)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  if (static_assignment) {
    *tmp = (struct _zval_struct )static_assignment->u.constant;
  } else {
    *tmp = (struct _zval_struct )zval_used_for_init;
  }
  if (! (compiler_globals.active_op_array)->static_variables) {
    if ((compiler_globals.active_op_array)->scope) {
      ((compiler_globals.active_op_array)->scope)->ce_flags |= 8388608U;
    } else {

    }
    tmp___1 = _emalloc(sizeof(HashTable ));
    (compiler_globals.active_op_array)->static_variables = (HashTable *)tmp___1;
    _zend_hash_init((compiler_globals.active_op_array)->static_variables, 2U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void * ))(& _zval_ptr_dtor), (unsigned char)0);
  } else {

  }
  _zend_hash_add_or_update((compiler_globals.active_op_array)->static_variables, (char const   *)varname->u.constant.value.str.val, (unsigned int )(varname->u.constant.value.str.len + 1), (void *)(& tmp), sizeof(zval *), (void **)((void *)0), 1);
  if (varname->op_type == 1) {
    if ((int )varname->u.constant.type != 6) {
      if ((int )varname->u.constant.type != 6) {
        _convert_to_string(& varname->u.constant);
      } else {

      }
    } else {

    }
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  if (fetch_type == 0x50000000) {
    opline->opcode = (unsigned char)80;
  } else {
    opline->opcode = (unsigned char)83;
  }
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )varname->op_type;
    if (varname->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& varname->u.constant));
      opline->op1.constant = (unsigned int )tmp___2;
    } else {
      opline->op1 = varname->u.op;
    }
    break;
  }
  if ((int )opline->op1_type == 1) {
    while (1) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val - sizeof(Bucket )))->h;
        } else {
          tmp___3 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___3;
        }
      } else {
        tmp___3 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___3;
      }
      break;
    }
  } else {

  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->extended_value = 536870912UL;
  while (1) {
    result.op_type = (int )opline->result_type;
    if (result.op_type == 1) {
      result.u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result.u.op = opline->result;
      result.EA = 0U;
    }
    break;
  }
  if (varname->op_type == 1) {
    _zval_copy_ctor(& varname->u.constant);
  } else {

  }
  fetch_simple_variable(& lval, varname, 0);
  if (fetch_type == 0x50000000) {
    zend_do_begin_variable_parse();
    zend_do_assign(& dummy, & lval, & result);
    zend_do_free(& dummy);
  } else {
    zend_do_assign_ref((znode *)((void *)0), (znode const   *)(& lval), (znode const   *)(& result));
  }
  ((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->result_type = (unsigned char )((int )((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->result_type | (1 << 5));
  return;
}
}
void zend_do_fetch_lexical_variable(znode *varname , zend_bool is_ref ) 
{ znode value ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if ((unsigned int )varname->u.constant.value.str.len == sizeof("this") - 1U) {
    tmp = memcmp((void const   *)varname->u.constant.value.str.val, (void const   *)"this", sizeof("this") - 1U);
    if (tmp == 0) {
      zend_error(1 << 6L, "Cannot use $this as lexical variable");
      return;
    } else {

    }
  } else {

  }
  value.op_type = 1;
  value.u.constant.type = (unsigned char)0;
  if (is_ref) {
    tmp___0 = 0x040;
  } else {
    tmp___0 = 0x020;
  }
  value.u.constant.type = (unsigned char )((int )value.u.constant.type | tmp___0);
  zval_set_refcount_p(& value.u.constant, 1U);
  zval_unset_isref_p(& value.u.constant);
  if (is_ref) {
    tmp___1 = 0x20000000;
  } else {
    tmp___1 = 0x50000000;
  }
  zend_do_fetch_static_variable(varname, (znode const   *)(& value), tmp___1);
  return;
}
}
void zend_do_fetch_global_variable(znode *varname , znode const   *static_assignment , int fetch_type ) 
{ zend_op *opline ;
  znode lval ;
  znode result ;
  int tmp ;
  ulong __attribute__((__visibility__("default")))  tmp___0 ;

  {
  if (varname->op_type == 1) {
    if ((int )varname->u.constant.type != 6) {
      if ((int )varname->u.constant.type != 6) {
        _convert_to_string(& varname->u.constant);
      } else {

      }
    } else {

    }
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)83;
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )varname->op_type;
    if (varname->op_type == 1) {
      tmp = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& varname->u.constant));
      opline->op1.constant = (unsigned int )tmp;
    } else {
      opline->op1 = varname->u.op;
    }
    break;
  }
  if ((int )opline->op1_type == 1) {
    while (1) {
      if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
        if ((unsigned int )((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = ((Bucket *)(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val - sizeof(Bucket )))->h;
        } else {
          tmp___0 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
          ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___0;
        }
      } else {
        tmp___0 = zend_hash_func((char const   *)((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.val, (unsigned int )(((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant.value.str.len + 1));
        ((zend_literal *)(& ((compiler_globals.active_op_array)->literals + opline->op1.constant)->constant))->hash_value = (unsigned long )tmp___0;
      }
      break;
    }
  } else {

  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->extended_value = (unsigned long )fetch_type;
  while (1) {
    result.op_type = (int )opline->result_type;
    if (result.op_type == 1) {
      result.u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result.u.op = opline->result;
      result.EA = 0U;
    }
    break;
  }
  if (varname->op_type == 1) {
    _zval_copy_ctor(& varname->u.constant);
  } else {

  }
  fetch_simple_variable(& lval, varname, 0);
  zend_do_assign_ref((znode *)((void *)0), (znode const   *)(& lval), (znode const   *)(& result));
  ((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->result_type = (unsigned char )((int )((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->result_type | (1 << 5));
  return;
}
}
void zend_do_cast(znode *result , znode const   *expr , int type ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)21;
  opline->result_type = (unsigned char )(1 << 1);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )expr->op_type;
    if (expr->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )expr->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->extended_value = (unsigned long )type;
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_include_or_eval(int type , znode *result , znode const   *op1 ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  zend_do_extended_fcall_begin();
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)73;
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )op1->op_type;
    if (op1->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & op1->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )op1->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->extended_value = (unsigned long )type;
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  zend_do_extended_fcall_end();
  return;
}
}
void zend_do_indirect_references(znode *result , znode const   *num_references , znode *variable ) 
{ int i ;
  char __attribute__((__visibility__("default")))  *tmp ;
  int tmp___0 ;

  {
  zend_do_end_variable_parse(variable, 0, 0);
  i = 1;
  while ((long const   )i < num_references->u.constant.value.lval) {
    fetch_simple_variable_ex(result, variable, 0, (unsigned char)80);
    *variable = *result;
    i ++;
  }
  zend_do_begin_variable_parse();
  fetch_simple_variable(result, variable, 1);
  if ((compiler_globals.active_op_array)->scope) {
    if ((compiler_globals.active_op_array)->this_var == 4294967295U) {
      tmp = _estrndup("this", sizeof("this") - 1U);
      tmp___0 = lookup_cv(compiler_globals.active_op_array, (char *)tmp, (int )(sizeof("this") - 1U), 275574653UL);
      (compiler_globals.active_op_array)->this_var = (unsigned int )tmp___0;
    } else {

    }
  } else {

  }
  return;
}
}
void zend_do_unset(znode const   *variable ) 
{ zend_op *last_op ;
  zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  zend_check_writable_variable(variable);
  if (variable->op_type == (int const   )(1 << 4)) {
    tmp = get_next_op(compiler_globals.active_op_array);
    opline = tmp;
    opline->opcode = (unsigned char)74;
    while (1) {
      opline->op1_type = (unsigned char )variable->op_type;
      if (variable->op_type == 1) {
        tmp___0 = zend_add_literal(compiler_globals.active_op_array, & variable->u.constant);
        opline->op1.constant = (unsigned int )tmp___0;
      } else {
        opline->op1 = (union _znode_op )variable->u.op;
      }
      break;
    }
    opline->op2_type = (unsigned char )(1 << 3);
    opline->result_type = (unsigned char )(1 << 3);
    opline->extended_value = 276824064UL;
  } else {
    tmp___1 = get_next_op_number(compiler_globals.active_op_array);
    last_op = (compiler_globals.active_op_array)->opcodes + (tmp___1 - 1);
    switch ((int )last_op->opcode) {
    case 95: 
    last_op->opcode = (unsigned char)74;
    last_op->result_type = (unsigned char )(1 << 3);
    break;
    case 96: 
    last_op->opcode = (unsigned char)75;
    last_op->result_type = (unsigned char )(1 << 3);
    break;
    case 97: 
    last_op->opcode = (unsigned char)76;
    last_op->result_type = (unsigned char )(1 << 3);
    break;
    }
  }
  return;
}
}
void zend_do_isset_or_isempty(int type , znode *result , znode *variable ) 
{ zend_op *last_op ;
  int tmp ;
  int tmp___0 ;

  {
  zend_do_end_variable_parse(variable, 3, 0);
  zend_check_writable_variable((znode const   *)variable);
  if (variable->op_type == 1 << 4) {
    last_op = get_next_op(compiler_globals.active_op_array);
    last_op->opcode = (unsigned char)114;
    while (1) {
      last_op->op1_type = (unsigned char )variable->op_type;
      if (variable->op_type == 1) {
        tmp = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& variable->u.constant));
        last_op->op1.constant = (unsigned int )tmp;
      } else {
        last_op->op1 = variable->u.op;
      }
      break;
    }
    last_op->op2_type = (unsigned char )(1 << 3);
    last_op->result.var = get_temporary_variable(compiler_globals.active_op_array);
    last_op->extended_value = 276824064UL;
  } else {
    tmp___0 = get_next_op_number(compiler_globals.active_op_array);
    last_op = (compiler_globals.active_op_array)->opcodes + (tmp___0 - 1);
    switch ((int )last_op->opcode) {
    case 89: 
    last_op->opcode = (unsigned char)114;
    break;
    case 90: 
    last_op->opcode = (unsigned char)115;
    break;
    case 91: 
    last_op->opcode = (unsigned char)148;
    break;
    }
  }
  last_op->result_type = (unsigned char )(1 << 1);
  last_op->extended_value |= (unsigned long )type;
  while (1) {
    result->op_type = (int )last_op->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + last_op->result.constant)->constant;
    } else {
      result->u.op = last_op->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_instanceof(znode *result , znode const   *expr , znode const   *class_znode , int type ) 
{ int last_op_number ;
  int tmp ;
  zend_op *opline ;
  int tmp___0 ;
  int tmp___1 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  last_op_number = tmp;
  if (last_op_number > 0) {
    opline = (compiler_globals.active_op_array)->opcodes + (last_op_number - 1);
    if ((int )opline->opcode == 109) {
      opline->extended_value |= 128UL;
    } else {

    }
  } else {

  }
  if (expr->op_type == 1) {
    zend_error(1 << 6L, "instanceof expects an object instance, constant given");
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)138;
  opline->result_type = (unsigned char )(1 << 1);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )expr->op_type;
    if (expr->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & expr->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )expr->u.op;
    }
    break;
  }
  while (1) {
    opline->op2_type = (unsigned char )class_znode->op_type;
    if (class_znode->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & class_znode->u.constant);
      opline->op2.constant = (unsigned int )tmp___1;
    } else {
      opline->op2 = (union _znode_op )class_znode->u.op;
    }
    break;
  }
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_foreach_begin(znode *foreach_token , znode *open_brackets_token , znode *array , znode *as_token , int variable ) 
{ zend_op *opline ;
  zend_bool is_variable ;
  zend_bool push_container ;
  zend_op dummy_opline ;
  zend_bool tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  push_container = (zend_bool )0;
  if (variable) {
    tmp = zend_is_function_or_method_call((znode const   *)array);
    if (tmp) {
      is_variable = (unsigned char)0;
    } else {
      is_variable = (unsigned char)1;
    }
    tmp___0 = get_next_op_number(compiler_globals.active_op_array);
    open_brackets_token->u.op.opline_num = (unsigned int )tmp___0;
    zend_do_end_variable_parse(array, 1, 0);
    if ((compiler_globals.active_op_array)->last > 0U) {
      if ((int )((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->opcode == 85) {
        if ((int )((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->op1_type == 1 << 2) {
          ((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 1U))->extended_value |= 134217728UL;
          push_container = (unsigned char)1;
        } else {

        }
      } else {

      }
    } else {

    }
  } else {
    is_variable = (unsigned char)0;
    tmp___1 = get_next_op_number(compiler_globals.active_op_array);
    open_brackets_token->u.op.opline_num = (unsigned int )tmp___1;
  }
  tmp___2 = get_next_op_number(compiler_globals.active_op_array);
  foreach_token->u.op.opline_num = (unsigned int )tmp___2;
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)77;
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )array->op_type;
    if (array->op_type == 1) {
      tmp___3 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& array->u.constant));
      opline->op1.constant = (unsigned int )tmp___3;
    } else {
      opline->op1 = array->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  if (is_variable) {
    opline->extended_value = 1UL;
  } else {
    opline->extended_value = 0UL;
  }
  while (1) {
    dummy_opline.result_type = opline->result_type;
    dummy_opline.result = opline->result;
    break;
  }
  if (push_container) {
    while (1) {
      dummy_opline.op1_type = ((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 2U))->op1_type;
      dummy_opline.op1 = ((compiler_globals.active_op_array)->opcodes + ((compiler_globals.active_op_array)->last - 2U))->op1;
      break;
    }
  } else {
    dummy_opline.op1_type = (unsigned char )(1 << 3);
  }
  zend_stack_push(& compiler_globals.foreach_copy_stack, (void const   *)((void *)(& dummy_opline)), (int )sizeof(zend_op ));
  tmp___4 = get_next_op_number(compiler_globals.active_op_array);
  as_token->u.op.opline_num = (unsigned int )tmp___4;
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)78;
  opline->result_type = (unsigned char )(1 << 2);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = dummy_opline.result_type;
    opline->op1 = dummy_opline.result;
    break;
  }
  opline->extended_value = 0UL;
  opline->op2_type = (unsigned char )(1 << 3);
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)137;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  opline->result_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_foreach_cont(znode *foreach_token , znode const   *open_brackets_token , znode const   *as_token , znode *value , znode *key ) 
{ zend_op *opline ;
  znode dummy ;
  znode value_node ;
  zend_bool assign_by_ref ;
  znode *tmp ;
  zend_op *foreach_copy ;
  zend_op *fetch ;
  zend_op *end ;
  zend_uchar tmp___0 ;
  zend_uchar tmp___1 ;
  znode key_node ;

  {
  assign_by_ref = (zend_bool )0;
  opline = (compiler_globals.active_op_array)->opcodes + as_token->u.op.opline_num;
  if (key->op_type != 1 << 3) {
    tmp = key;
    key = value;
    value = tmp;
    opline->extended_value |= 2UL;
  } else {

  }
  if (key->op_type != 1 << 3) {
    if (key->EA & (unsigned int )(1 << 5)) {
      zend_error(1 << 6L, "Key element cannot be a reference");
    } else {

    }
  } else {

  }
  if (value->EA & (unsigned int )(1 << 5)) {
    assign_by_ref = (unsigned char)1;
    if (! (opline - 1)->extended_value) {
      zend_error(1 << 6L, "Cannot create references to elements of a temporary array expression");
    } else {

    }
    opline->extended_value |= 1UL;
    ((compiler_globals.active_op_array)->opcodes + foreach_token->u.op.opline_num)->extended_value |= (unsigned long )(1 << 1);
  } else {
    fetch = (compiler_globals.active_op_array)->opcodes + foreach_token->u.op.opline_num;
    end = (compiler_globals.active_op_array)->opcodes + open_brackets_token->u.op.opline_num;
    fetch->extended_value = 0UL;
    while ((unsigned int )fetch != (unsigned int )end) {
      fetch --;
      if ((int )fetch->opcode == 84) {
        if ((int )fetch->op2_type == 1 << 3) {
          zend_error(1 << 6L, "Cannot use [] for reading");
        } else {

        }
      } else {

      }
      if ((int )fetch->opcode == 156) {
        fetch->opcode = (unsigned char)0;
        memset((void *)(& fetch->result), 0, sizeof(fetch->result));
        memset((void *)(& fetch->op1), 0, sizeof(fetch->op1));
        memset((void *)(& fetch->op2), 0, sizeof(fetch->op2));
        tmp___1 = (unsigned char )(1 << 3);
        fetch->op2_type = tmp___1;
        tmp___0 = tmp___1;
        fetch->op1_type = tmp___0;
        fetch->result_type = tmp___0;
      } else {
        fetch->opcode = (unsigned char )((int )fetch->opcode - 3);
      }
    }
    zend_stack_top((zend_stack const   *)(& compiler_globals.foreach_copy_stack), (void **)(& foreach_copy));
    foreach_copy->op1_type = (unsigned char )(1 << 3);
  }
  while (1) {
    value_node.op_type = (int )opline->result_type;
    if (value_node.op_type == 1) {
      value_node.u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      value_node.u.op = opline->result;
      value_node.EA = 0U;
    }
    break;
  }
  if (assign_by_ref) {
    zend_do_end_variable_parse(value, 1, 0);
    zend_do_assign_ref((znode *)((void *)0), (znode const   *)value, (znode const   *)(& value_node));
  } else {
    zend_do_assign(& dummy, value, & value_node);
    zend_do_free(& dummy);
  }
  if (key->op_type != 1 << 3) {
    opline = (compiler_globals.active_op_array)->opcodes + (as_token->u.op.opline_num + 1U);
    opline->result_type = (unsigned char )(1 << 1);
    opline->result.opline_num = get_temporary_variable(compiler_globals.active_op_array);
    while (1) {
      key_node.op_type = (int )opline->result_type;
      if (key_node.op_type == 1) {
        key_node.u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
      } else {
        key_node.u.op = opline->result;
        key_node.EA = 0U;
      }
      break;
    }
    zend_do_assign(& dummy, key, & key_node);
    zend_do_free(& dummy);
  } else {

  }
  do_begin_loop();
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_foreach_end(znode const   *foreach_token , znode const   *as_token ) 
{ zend_op *container_ptr ;
  zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)42;
  opline->op1.opline_num = (unsigned int )as_token->u.op.opline_num;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + foreach_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp___0;
  tmp___1 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + as_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp___1;
  do_end_loop((int )as_token->u.op.opline_num, 1);
  zend_stack_top((zend_stack const   *)(& compiler_globals.foreach_copy_stack), (void **)(& container_ptr));
  generate_free_foreach_copy((zend_op const   *)container_ptr);
  zend_stack_del_top(& compiler_globals.foreach_copy_stack);
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_do_declare_begin(void) 
{ 

  {
  zend_stack_push(& compiler_globals.declare_stack, (void const   *)(& compiler_globals.declarables), (int )sizeof(zend_declarables ));
  return;
}
}
void zend_do_declare_stmt(znode *var , znode *val ) 
{ int num ;
  zend_encoding const   *new_encoding ;
  zend_encoding const   *old_encoding ;
  size_t (*old_input_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ) ;
  zend_encoding const __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp___1 = zend_binary_strcasecmp((char const   *)var->u.constant.value.str.val, (unsigned int )var->u.constant.value.str.len, "ticks", sizeof("ticks") - 1U);
  if (tmp___1) {
    tmp___0 = zend_binary_strcasecmp((char const   *)var->u.constant.value.str.val, (unsigned int )var->u.constant.value.str.len, "encoding", sizeof("encoding") - 1U);
    if (tmp___0) {
      zend_error(1 << 7L, "Unsupported declare \'%s\'", var->u.constant.value.str.val);
      _zval_dtor(& val->u.constant);
    } else {
      if (((int )val->u.constant.type & 0x00f) == 8) {
        zend_error(1 << 6L, "Cannot use constants as encoding");
      } else {

      }
      num = (int )(compiler_globals.active_op_array)->last;
      while (1) {
        if (num > 0) {
          if ((int )((compiler_globals.active_op_array)->opcodes + (num - 1))->opcode == 101) {

          } else {
            if ((int )((compiler_globals.active_op_array)->opcodes + (num - 1))->opcode == 105) {

            } else {
              break;
            }
          }
        } else {
          break;
        }
        num --;
      }
      if (num > 0) {
        zend_error(1 << 6L, "Encoding declaration pragma must be the very first statement in the script");
      } else {

      }
      if (compiler_globals.multibyte) {
        compiler_globals.encoding_declared = (unsigned char)1;
        if ((int )val->u.constant.type != 6) {
          _convert_to_string(& val->u.constant);
        } else {

        }
        tmp = zend_multibyte_fetch_encoding((char const   *)val->u.constant.value.str.val);
        new_encoding = (zend_encoding const   *)tmp;
        if (! new_encoding) {
          zend_error(1 << 7L, "Unsupported encoding [%s]", val->u.constant.value.str.val);
        } else {
          old_input_filter = language_scanner_globals.input_filter;
          old_encoding = language_scanner_globals.script_encoding;
          zend_multibyte_set_filter(new_encoding);
          if ((unsigned int )old_input_filter != (unsigned int )language_scanner_globals.input_filter) {
            zend_multibyte_yyinput_again(old_input_filter, old_encoding);
          } else {
            if (old_input_filter) {
              if ((unsigned int )new_encoding != (unsigned int )old_encoding) {
                zend_multibyte_yyinput_again(old_input_filter, old_encoding);
              } else {

              }
            } else {

            }
          }
        }
      } else {
        zend_error(1 << 7L, "declare(encoding=...) ignored because Zend multibyte feature is turned off by settings");
      }
      _zval_dtor(& val->u.constant);
    }
  } else {
    convert_to_long(& val->u.constant);
    compiler_globals.declarables.ticks = val->u.constant;
  }
  _zval_dtor(& var->u.constant);
  return;
}
}
void zend_do_declare_end(znode const   *declare_token ) 
{ zend_declarables *declarables ;
  int tmp ;
  int tmp___0 ;

  {
  zend_stack_top((zend_stack const   *)(& compiler_globals.declare_stack), (void **)(& declarables));
  tmp = get_next_op_number(compiler_globals.active_op_array);
  if (compiler_globals.declarables.ticks.value.lval) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  if (((zend_uint const   )tmp - declare_token->u.op.opline_num) - (zend_uint const   )tmp___0) {
    compiler_globals.declarables = *declarables;
  } else {

  }
  return;
}
}
void zend_do_exit(znode *result , znode const   *message ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)79;
  while (1) {
    opline->op1_type = (unsigned char )message->op_type;
    if (message->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & message->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )message->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  result->op_type = 1;
  result->u.constant.type = (unsigned char)3;
  result->u.constant.value.lval = 1L;
  return;
}
}
void zend_do_begin_silence(znode *strudel_token ) 
{ zend_op *opline ;
  zend_op *tmp ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)57;
  opline->result_type = (unsigned char )(1 << 1);
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  while (1) {
    strudel_token->op_type = (int )opline->result_type;
    if (strudel_token->op_type == 1) {
      strudel_token->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      strudel_token->u.op = opline->result;
      strudel_token->EA = 0U;
    }
    break;
  }
  return;
}
}
void zend_do_end_silence(znode const   *strudel_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)58;
  while (1) {
    opline->op1_type = (unsigned char )strudel_token->op_type;
    if (strudel_token->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & strudel_token->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )strudel_token->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_jmp_set(znode const   *value , znode *jmp_token , znode *colon_token ) 
{ int op_number ;
  int tmp ;
  zend_op *opline ;
  zend_op *tmp___0 ;
  int tmp___1 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  op_number = tmp;
  tmp___0 = get_next_op(compiler_globals.active_op_array);
  opline = tmp___0;
  if (value->op_type == (int const   )(1 << 2)) {
    opline->opcode = (unsigned char)158;
    opline->result_type = (unsigned char )(1 << 2);
  } else {
    if (value->op_type == (int const   )(1 << 4)) {
      opline->opcode = (unsigned char)158;
      opline->result_type = (unsigned char )(1 << 2);
    } else {
      opline->opcode = (unsigned char)152;
      opline->result_type = (unsigned char )(1 << 1);
    }
  }
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )value->op_type;
    if (value->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & value->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )value->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  while (1) {
    colon_token->op_type = (int )opline->result_type;
    if (colon_token->op_type == 1) {
      colon_token->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      colon_token->u.op = opline->result;
      colon_token->EA = 0U;
    }
    break;
  }
  jmp_token->u.op.opline_num = (unsigned int )op_number;
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_jmp_set_else(znode *result , znode const   *false_value , znode const   *jmp_token , znode const   *colon_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  while (1) {
    opline->result_type = (unsigned char )colon_token->op_type;
    if (colon_token->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & colon_token->u.constant);
      opline->result.constant = (unsigned int )tmp___0;
    } else {
      opline->result = (union _znode_op )colon_token->u.op;
    }
    break;
  }
  if (colon_token->op_type == (int const   )(1 << 1)) {
    if (false_value->op_type == (int const   )(1 << 2)) {
      ((compiler_globals.active_op_array)->opcodes + jmp_token->u.op.opline_num)->opcode = (unsigned char)158;
      ((compiler_globals.active_op_array)->opcodes + jmp_token->u.op.opline_num)->result_type = (unsigned char )(1 << 2);
      opline->opcode = (unsigned char)157;
      opline->result_type = (unsigned char )(1 << 2);
    } else {
      if (false_value->op_type == (int const   )(1 << 4)) {
        ((compiler_globals.active_op_array)->opcodes + jmp_token->u.op.opline_num)->opcode = (unsigned char)158;
        ((compiler_globals.active_op_array)->opcodes + jmp_token->u.op.opline_num)->result_type = (unsigned char )(1 << 2);
        opline->opcode = (unsigned char)157;
        opline->result_type = (unsigned char )(1 << 2);
      } else {
        opline->opcode = (unsigned char)22;
      }
    }
  } else {
    opline->opcode = (unsigned char)157;
  }
  opline->extended_value = 0UL;
  while (1) {
    opline->op1_type = (unsigned char )false_value->op_type;
    if (false_value->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & false_value->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )false_value->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  tmp___2 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + jmp_token->u.op.opline_num)->op2.opline_num = (unsigned int )tmp___2;
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_do_begin_qm_op(znode const   *cond , znode *qm_token ) 
{ int jmpz_op_number ;
  int tmp ;
  zend_op *opline ;
  int tmp___0 ;

  {
  tmp = get_next_op_number(compiler_globals.active_op_array);
  jmpz_op_number = tmp;
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)43;
  while (1) {
    opline->op1_type = (unsigned char )cond->op_type;
    if (cond->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & cond->u.constant);
      opline->op1.constant = (unsigned int )tmp___0;
    } else {
      opline->op1 = (union _znode_op )cond->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  opline->op2.opline_num = (unsigned int )jmpz_op_number;
  while (1) {
    qm_token->op_type = (int )opline->op2_type;
    if (qm_token->op_type == 1) {
      qm_token->u.constant = ((compiler_globals.active_op_array)->literals + opline->op2.constant)->constant;
    } else {
      qm_token->u.op = opline->op2;
      qm_token->EA = 0U;
    }
    break;
  }
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) ++;
  } else {

  }
  return;
}
}
void zend_do_qm_true(znode const   *true_value , znode *qm_token , znode *colon_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + qm_token->u.op.opline_num)->op2.opline_num = (unsigned int )(tmp___0 + 1);
  if (true_value->op_type == (int const   )(1 << 2)) {
    opline->opcode = (unsigned char)157;
    opline->result_type = (unsigned char )(1 << 2);
  } else {
    if (true_value->op_type == (int const   )(1 << 4)) {
      opline->opcode = (unsigned char)157;
      opline->result_type = (unsigned char )(1 << 2);
    } else {
      opline->opcode = (unsigned char)22;
      opline->result_type = (unsigned char )(1 << 1);
    }
  }
  opline->result.var = get_temporary_variable(compiler_globals.active_op_array);
  while (1) {
    opline->op1_type = (unsigned char )true_value->op_type;
    if (true_value->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & true_value->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )true_value->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  while (1) {
    qm_token->op_type = (int )opline->result_type;
    if (qm_token->op_type == 1) {
      qm_token->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      qm_token->u.op = opline->result;
      qm_token->EA = 0U;
    }
    break;
  }
  tmp___2 = get_next_op_number(compiler_globals.active_op_array);
  colon_token->u.op.opline_num = (unsigned int )tmp___2;
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)42;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_qm_false(znode *result , znode const   *false_value , znode const   *qm_token , znode const   *colon_token ) 
{ zend_op *opline ;
  zend_op *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  while (1) {
    opline->result_type = (unsigned char )qm_token->op_type;
    if (qm_token->op_type == 1) {
      tmp___0 = zend_add_literal(compiler_globals.active_op_array, & qm_token->u.constant);
      opline->result.constant = (unsigned int )tmp___0;
    } else {
      opline->result = (union _znode_op )qm_token->u.op;
    }
    break;
  }
  if (qm_token->op_type == (int const   )(1 << 1)) {
    if (false_value->op_type == (int const   )(1 << 2)) {
      ((compiler_globals.active_op_array)->opcodes + (colon_token->u.op.opline_num - 1U))->opcode = (unsigned char)157;
      ((compiler_globals.active_op_array)->opcodes + (colon_token->u.op.opline_num - 1U))->result_type = (unsigned char )(1 << 2);
      opline->opcode = (unsigned char)157;
      opline->result_type = (unsigned char )(1 << 2);
    } else {
      if (false_value->op_type == (int const   )(1 << 4)) {
        ((compiler_globals.active_op_array)->opcodes + (colon_token->u.op.opline_num - 1U))->opcode = (unsigned char)157;
        ((compiler_globals.active_op_array)->opcodes + (colon_token->u.op.opline_num - 1U))->result_type = (unsigned char )(1 << 2);
        opline->opcode = (unsigned char)157;
        opline->result_type = (unsigned char )(1 << 2);
      } else {
        opline->opcode = (unsigned char)22;
      }
    }
  } else {
    opline->opcode = (unsigned char)157;
  }
  while (1) {
    opline->op1_type = (unsigned char )false_value->op_type;
    if (false_value->op_type == 1) {
      tmp___1 = zend_add_literal(compiler_globals.active_op_array, & false_value->u.constant);
      opline->op1.constant = (unsigned int )tmp___1;
    } else {
      opline->op1 = (union _znode_op )false_value->u.op;
    }
    break;
  }
  opline->op2_type = (unsigned char )(1 << 3);
  tmp___2 = get_next_op_number(compiler_globals.active_op_array);
  ((compiler_globals.active_op_array)->opcodes + colon_token->u.op.opline_num)->op1.opline_num = (unsigned int )tmp___2;
  while (1) {
    result->op_type = (int )opline->result_type;
    if (result->op_type == 1) {
      result->u.constant = ((compiler_globals.active_op_array)->literals + opline->result.constant)->constant;
    } else {
      result->u.op = opline->result;
      result->EA = 0U;
    }
    break;
  }
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    (compiler_globals.context.backpatch_count) --;
  } else {

  }
  return;
}
}
void zend_do_extended_info(void) 
{ zend_op *opline ;

  {
  if (! (compiler_globals.compiler_options & 1U)) {
    return;
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)101;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_extended_fcall_begin(void) 
{ zend_op *opline ;

  {
  if (! (compiler_globals.compiler_options & 1U)) {
    return;
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)102;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_extended_fcall_end(void) 
{ zend_op *opline ;

  {
  if (! (compiler_globals.compiler_options & 1U)) {
    return;
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)103;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  return;
}
}
void zend_do_ticks(void) 
{ zend_op *opline ;
  zend_op *tmp ;

  {
  tmp = get_next_op(compiler_globals.active_op_array);
  opline = tmp;
  opline->opcode = (unsigned char)105;
  opline->op1_type = (unsigned char )(1 << 3);
  opline->op2_type = (unsigned char )(1 << 3);
  opline->extended_value = (unsigned long )compiler_globals.declarables.ticks.value.lval;
  return;
}
}
zend_bool __attribute__((__visibility__("default")))  zend_is_auto_global_quick(char const   *name , uint name_len , ulong hashval ) 
{ zend_auto_global *auto_global ;
  ulong hash ;
  ulong __attribute__((__visibility__("default")))  tmp ;
  ulong tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  if (hashval) {
    tmp___0 = hashval;
  } else {
    tmp = zend_hash_func(name, name_len + 1U);
    tmp___0 = (unsigned long )tmp;
  }
  hash = tmp___0;
  tmp___1 = zend_hash_quick_find((HashTable const   *)compiler_globals.auto_globals, name, name_len + 1U, hash, (void **)(& auto_global));
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {
    if (auto_global->armed) {
      auto_global->armed = (*(auto_global->auto_global_callback))(auto_global->name, auto_global->name_len);
    } else {

    }
    return ((unsigned char __attribute__((__visibility__("default")))  )1);
  } else {

  }
  return ((unsigned char __attribute__((__visibility__("default")))  )0);
}
}
zend_bool __attribute__((__visibility__("default")))  zend_is_auto_global(char const   *name , uint name_len ) 
{ zend_bool __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zend_is_auto_global_quick(name, name_len, 0UL);
  return (tmp);
}
}
int __attribute__((__visibility__("default")))  zend_register_auto_global(char const   *name , uint name_len , zend_bool jit , zend_bool (*auto_global_callback)(char const   *name , uint name_len ) ) 
{ zend_auto_global auto_global ;
  char const __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = (*zend_new_interned_string)((char const   *)((char *)name), (int )(name_len + 1U), 0);
  auto_global.name = (char const   *)tmp;
  auto_global.name_len = name_len;
  auto_global.auto_global_callback = auto_global_callback;
  auto_global.jit = jit;
  tmp___0 = _zend_hash_add_or_update(compiler_globals.auto_globals, name, name_len + 1U, (void *)(& auto_global), sizeof(zend_auto_global ), (void **)((void *)0), 1 << 1);
  return (tmp___0);
}
}
static int zend_auto_global_init(zend_auto_global *auto_global ) 
{ 

  {
  if (auto_global->jit) {
    auto_global->armed = (unsigned char)1;
  } else {
    if (auto_global->auto_global_callback) {
      auto_global->armed = (*(auto_global->auto_global_callback))(auto_global->name, auto_global->name_len);
    } else {
      auto_global->armed = (unsigned char)0;
    }
  }
  return (0);
}
}
void __attribute__((__visibility__("default")))  zend_activate_auto_globals(void) 
{ 

  {
  zend_hash_apply(compiler_globals.auto_globals, (int (*)(void *pDest ))(& zend_auto_global_init));
  return;
}
}
int zendlex(znode *zendlval ) 
{ int retval ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  if (compiler_globals.increment_lineno) {
    (compiler_globals.zend_lineno) ++;
    compiler_globals.increment_lineno = (unsigned char)0;
  } else {

  }
  again: 
  zendlval->op_type = 1;
  tmp = lex_scan(& zendlval->u.constant);
  retval = (int )tmp;
  switch (retval) {
  case 370: 
  case 371: 
  case 372: 
  case 375: 
  goto again;
  case 374: 
  if ((int )*(language_scanner_globals.yy_text + (language_scanner_globals.yy_leng - 1U)) != 62) {
    compiler_globals.increment_lineno = (unsigned char)1;
  } else {

  }
  if (compiler_globals.has_bracketed_namespaces) {
    if (! compiler_globals.in_namespace) {
      goto again;
    } else {

    }
  } else {

  }
  retval = ';';
  break;
  case 373: 
  retval = 316;
  break;
  case 377: 
  _efree((void *)zendlval->u.constant.value.str.val);
  break;
  }
  zendlval->u.constant.refcount__gc = 1U;
  zendlval->u.constant.is_ref__gc = (unsigned char)0;
  zendlval->u.constant.type = (unsigned char)1;
  return (retval);
}
}
void __attribute__((__visibility__("default")))  zend_initialize_class_data(zend_class_entry *ce , zend_bool nullify_handlers ) 
{ zend_bool persistent_hashes ;
  int tmp ;
  void (*zval_ptr_dtor_func)(void *pDest ) ;
  void (*tmp___0)(void * ) ;
  void (*tmp___1)(zend_property_info *property_info ) ;

  {
  if ((int )ce->type == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  persistent_hashes = (zend_bool )tmp;
  if (persistent_hashes) {
    tmp___0 = (void (*)(void * ))(& _zval_internal_ptr_dtor);
  } else {
    tmp___0 = (void (*)(void * ))(& _zval_ptr_dtor);
  }
  zval_ptr_dtor_func = tmp___0;
  ce->refcount = 1;
  ce->ce_flags = 0U;
  ce->default_properties_table = (zval **)((void *)0);
  ce->default_static_members_table = (zval **)((void *)0);
  if (persistent_hashes) {
    tmp___1 = & zend_destroy_property_info_internal;
  } else {
    tmp___1 = & zend_destroy_property_info;
  }
  _zend_hash_init_ex(& ce->properties_info, 0U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void *pDest ))tmp___1, persistent_hashes, (unsigned char)0);
  _zend_hash_init_ex(& ce->constants_table, 0U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), zval_ptr_dtor_func, persistent_hashes, (unsigned char)0);
  _zend_hash_init_ex(& ce->function_table, 0U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void * ))(& zend_function_dtor), persistent_hashes, (unsigned char)0);
  if ((int )ce->type == 1) {
    ce->static_members_table = (zval **)((void *)0);
  } else {
    ce->static_members_table = ce->default_static_members_table;
    ce->info.user.doc_comment = (char const   *)((void *)0);
    ce->info.user.doc_comment_len = 0U;
  }
  ce->default_properties_count = 0;
  ce->default_static_members_count = 0;
  if (nullify_handlers) {
    ce->constructor = (union _zend_function *)((void *)0);
    ce->destructor = (union _zend_function *)((void *)0);
    ce->clone = (union _zend_function *)((void *)0);
    ce->__get = (union _zend_function *)((void *)0);
    ce->__set = (union _zend_function *)((void *)0);
    ce->__unset = (union _zend_function *)((void *)0);
    ce->__isset = (union _zend_function *)((void *)0);
    ce->__call = (union _zend_function *)((void *)0);
    ce->__callstatic = (union _zend_function *)((void *)0);
    ce->__tostring = (union _zend_function *)((void *)0);
    ce->create_object = (zend_object_value (*)(zend_class_entry *class_type ))((void *)0);
    ce->get_iterator = (zend_object_iterator *(*)(zend_class_entry *ce , zval *object , int by_ref ))((void *)0);
    ce->iterator_funcs.funcs = (zend_object_iterator_funcs *)((void *)0);
    ce->interface_gets_implemented = (int (*)(zend_class_entry *iface , zend_class_entry *class_type ))((void *)0);
    ce->get_static_method = (union _zend_function *(*)(zend_class_entry *ce , char *method , int method_len ))((void *)0);
    ce->parent = (struct _zend_class_entry *)((void *)0);
    ce->num_interfaces = 0U;
    ce->interfaces = (zend_class_entry **)((void *)0);
    ce->num_traits = 0U;
    ce->traits = (zend_class_entry **)((void *)0);
    ce->trait_aliases = (zend_trait_alias **)((void *)0);
    ce->trait_precedences = (zend_trait_precedence **)((void *)0);
    ce->serialize = (int (*)(zval *object , unsigned char **buffer , zend_uint *buf_len , zend_serialize_data *data ))((void *)0);
    ce->unserialize = (int (*)(zval **object , zend_class_entry *ce , unsigned char const   *buf , zend_uint buf_len , zend_unserialize_data *data ))((void *)0);
    ce->serialize_func = (union _zend_function *)((void *)0);
    ce->unserialize_func = (union _zend_function *)((void *)0);
    if ((int )ce->type == 1) {
      ce->info.internal.module = (struct _zend_module_entry *)((void *)0);
      ce->info.internal.builtin_functions = (struct _zend_function_entry  const  *)((void *)0);
    } else {

    }
  } else {

  }
  return;
}
}
int zend_get_class_fetch_type(char const   *class_name , uint class_name_len ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if (class_name_len == sizeof("self") - 1U) {
    tmp___1 = memcmp((void const   *)class_name, (void const   *)"self", sizeof("self") - 1U);
    if (tmp___1) {
      goto _L___0;
    } else {
      return (1);
    }
  } else {
    _L___0: /* CIL Label */ 
    if (class_name_len == sizeof("parent") - 1U) {
      tmp___0 = memcmp((void const   *)class_name, (void const   *)"parent", sizeof("parent") - 1U);
      if (tmp___0) {
        goto _L;
      } else {
        return (2);
      }
    } else {
      _L: /* CIL Label */ 
      if (class_name_len == sizeof("static") - 1U) {
        tmp = memcmp((void const   *)class_name, (void const   *)"static", sizeof("static") - 1U);
        if (tmp) {
          return (0);
        } else {
          return (7);
        }
      } else {
        return (0);
      }
    }
  }
}
}
char const __attribute__((__visibility__("default")))  *zend_get_compiled_variable_name(zend_op_array const   *op_array , zend_uint var , int *name_len ) 
{ 

  {
  if (name_len) {
    *name_len = (op_array->vars + var)->name_len;
  } else {

  }
  return ((char const __attribute__((__visibility__("default")))  *)(op_array->vars + var)->name);
}
}
void zend_do_build_namespace_name(znode *result , znode *prefix , znode *name ) 
{ znode tmp ;

  {
  if (prefix) {
    *result = *prefix;
    if ((int )result->u.constant.type == 6) {
      if (result->u.constant.value.str.len == 0) {
        if (compiler_globals.current_namespace) {
          _zval_dtor(& result->u.constant);
          tmp.op_type = 1;
          tmp.u.constant = *(compiler_globals.current_namespace);
          _zval_copy_ctor(& tmp.u.constant);
          zend_do_build_namespace_name(result, (znode *)((void *)0), & tmp);
        } else {

        }
      } else {

      }
    } else {

    }
  } else {
    result->op_type = 1;
    result->u.constant.type = (unsigned char)6;
    result->u.constant.value.str.val = (char *)((void *)0);
    result->u.constant.value.str.len = 0;
  }
  zend_do_build_full_name((znode *)((void *)0), result, name, 0);
  return;
}
}
void zend_do_begin_namespace(znode const   *name , zend_bool with_bracket ) 
{ char *lcname ;
  int num ;
  char __attribute__((__visibility__("default")))  *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  void __attribute__((__visibility__("default")))  *tmp___2 ;

  {
  if (! compiler_globals.has_bracketed_namespaces) {
    if (compiler_globals.current_namespace) {
      if (with_bracket) {
        zend_error(1 << 6L, "Cannot mix bracketed namespace declarations with unbracketed namespace declarations");
      } else {

      }
    } else {

    }
  } else {
    if (! with_bracket) {
      zend_error(1 << 6L, "Cannot mix bracketed namespace declarations with unbracketed namespace declarations");
    } else {
      if (compiler_globals.current_namespace) {
        zend_error(1 << 6L, "Namespace declarations cannot be nested");
      } else {
        if (compiler_globals.in_namespace) {
          zend_error(1 << 6L, "Namespace declarations cannot be nested");
        } else {

        }
      }
    }
  }
  if (! with_bracket) {
    if (! compiler_globals.current_namespace) {
      goto _L;
    } else {
      goto _L___0;
    }
  } else {
    _L___0: /* CIL Label */ 
    if (with_bracket) {
      if (! compiler_globals.has_bracketed_namespaces) {
        _L: /* CIL Label */ 
        if ((compiler_globals.active_op_array)->last > 0U) {
          num = (int )(compiler_globals.active_op_array)->last;
          while (1) {
            if (num > 0) {
              if ((int )((compiler_globals.active_op_array)->opcodes + (num - 1))->opcode == 101) {

              } else {
                if ((int )((compiler_globals.active_op_array)->opcodes + (num - 1))->opcode == 105) {

                } else {
                  break;
                }
              }
            } else {
              break;
            }
            num --;
          }
          if (num > 0) {
            zend_error(1 << 6L, "Namespace declaration statement has to be the very first statement in the script");
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
  }
  compiler_globals.in_namespace = (unsigned char)1;
  if (with_bracket) {
    compiler_globals.has_bracketed_namespaces = (unsigned char)1;
  } else {

  }
  if (name) {
    tmp = zend_str_tolower_dup((char const   *)name->u.constant.value.str.val, (unsigned int )name->u.constant.value.str.len);
    lcname = (char *)tmp;
    if ((unsigned int )name->u.constant.value.str.len == sizeof("self") - 1U) {
      tmp___0 = memcmp((void const   *)lcname, (void const   *)"self", sizeof("self") - 1U);
      if (tmp___0) {
        goto _L___1;
      } else {
        zend_error(1 << 6L, "Cannot use \'%s\' as namespace name", name->u.constant.value.str.val);
      }
    } else {
      _L___1: /* CIL Label */ 
      if ((unsigned int )name->u.constant.value.str.len == sizeof("parent") - 1U) {
        tmp___1 = memcmp((void const   *)lcname, (void const   *)"parent", sizeof("parent") - 1U);
        if (tmp___1) {

        } else {
          zend_error(1 << 6L, "Cannot use \'%s\' as namespace name", name->u.constant.value.str.val);
        }
      } else {

      }
    }
    _efree((void *)lcname);
    if (compiler_globals.current_namespace) {
      _zval_dtor(compiler_globals.current_namespace);
    } else {
      while (1) {
        tmp___2 = _emalloc(sizeof(zval_gc_info ));
        compiler_globals.current_namespace = (zval *)tmp___2;
        ((zval_gc_info *)compiler_globals.current_namespace)->u.buffered = (gc_root_buffer *)((void *)0);
        break;
      }
    }
    *(compiler_globals.current_namespace) = (struct _zval_struct )name->u.constant;
  } else {
    if (compiler_globals.current_namespace) {
      _zval_dtor(compiler_globals.current_namespace);
      while (1) {
        if ((gc_root_buffer *)((unsigned long )((zval_gc_info *)compiler_globals.current_namespace)->u.buffered & 4294967292UL)) {
          gc_remove_zval_from_buffer(compiler_globals.current_namespace);
        } else {

        }
        _efree((void *)compiler_globals.current_namespace);
        break;
      }
      compiler_globals.current_namespace = (zval *)((void *)0);
    } else {

    }
  }
  if (compiler_globals.current_import) {
    zend_hash_destroy(compiler_globals.current_import);
    _efree((void *)compiler_globals.current_import);
    compiler_globals.current_import = (HashTable *)((void *)0);
  } else {

  }
  if (compiler_globals.doc_comment) {
    _efree((void *)compiler_globals.doc_comment);
    compiler_globals.doc_comment = (char *)((void *)0);
    compiler_globals.doc_comment_len = 0U;
  } else {

  }
  return;
}
}
void zend_do_use(znode *ns_name , znode *new_name , int is_global ) 
{ char *lcname ;
  zval *name ;
  zval *ns ;
  zval tmp ;
  zend_bool warn ;
  zend_class_entry **pce ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  char const   *p ;
  void const   *tmp___2 ;
  char const   *__s ;
  zval *__z ;
  size_t tmp___3 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  int tmp___5 ;
  char __attribute__((__visibility__("default")))  *tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  char *c_ns_name ;
  void __attribute__((__visibility__("default")))  *tmp___9 ;
  char *tmp2 ;
  char __attribute__((__visibility__("default")))  *tmp___10 ;
  int tmp___11 ;
  int __attribute__((__visibility__("default")))  tmp___12 ;
  char *c_tmp ;
  char __attribute__((__visibility__("default")))  *tmp___13 ;
  int tmp___14 ;
  int __attribute__((__visibility__("default")))  tmp___15 ;
  int __attribute__((__visibility__("default")))  tmp___16 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___20 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;

  {
  warn = (zend_bool )0;
  if (! compiler_globals.current_import) {
    tmp___0 = _emalloc(sizeof(HashTable ));
    compiler_globals.current_import = (HashTable *)tmp___0;
    _zend_hash_init(compiler_globals.current_import, 0U, (ulong (*)(char const   *arKey , uint nKeyLength ))((void *)0), (void (*)(void * ))(& _zval_ptr_dtor), (unsigned char)0);
  } else {

  }
  while (1) {
    tmp___1 = _emalloc(sizeof(zval_gc_info ));
    ns = (zval *)tmp___1;
    ((zval_gc_info *)ns)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  *ns = ns_name->u.constant;
  if (new_name) {
    name = & new_name->u.constant;
  } else {
    name = & tmp;
    tmp___2 = zend_memrchr((void const   *)ns->value.str.val, '\\', (unsigned int )ns->value.str.len);
    p = (char const   *)tmp___2;
    if (p) {
      while (1) {
        __s = p + 1;
        __z = name;
        tmp___3 = strlen(__s);
        __z->value.str.len = (int )tmp___3;
        tmp___4 = _estrndup(__s, (unsigned int )__z->value.str.len);
        __z->value.str.val = (char *)tmp___4;
        __z->type = (unsigned char)6;
        break;
      }
    } else {
      *name = *ns;
      _zval_copy_ctor(name);
      if (! is_global) {
        if (! compiler_globals.current_namespace) {
          tmp___5 = 1;
        } else {
          tmp___5 = 0;
        }
      } else {
        tmp___5 = 0;
      }
      warn = (unsigned char )tmp___5;
    }
  }
  tmp___6 = zend_str_tolower_dup((char const   *)name->value.str.val, (unsigned int )name->value.str.len);
  lcname = (char *)tmp___6;
  if ((unsigned int )name->value.str.len == sizeof("self") - 1U) {
    tmp___7 = memcmp((void const   *)lcname, (void const   *)"self", sizeof("self") - 1U);
    if (tmp___7) {
      goto _L;
    } else {
      zend_error(1 << 6L, "Cannot use %s as %s because \'%s\' is a special class name", ns->value.str.val, name->value.str.val, name->value.str.val);
    }
  } else {
    _L: /* CIL Label */ 
    if ((unsigned int )name->value.str.len == sizeof("parent") - 1U) {
      tmp___8 = memcmp((void const   *)lcname, (void const   *)"parent", sizeof("parent") - 1U);
      if (tmp___8) {

      } else {
        zend_error(1 << 6L, "Cannot use %s as %s because \'%s\' is a special class name", ns->value.str.val, name->value.str.val, name->value.str.val);
      }
    } else {

    }
  }
  if (compiler_globals.current_namespace) {
    tmp___9 = _emalloc((unsigned int )((((compiler_globals.current_namespace)->value.str.len + 1) + name->value.str.len) + 1));
    c_ns_name = (char *)tmp___9;
    zend_str_tolower_copy(c_ns_name, (char const   *)(compiler_globals.current_namespace)->value.str.val, (unsigned int )(compiler_globals.current_namespace)->value.str.len);
    *(c_ns_name + (compiler_globals.current_namespace)->value.str.len) = (char )'\\';
    memcpy((void */* __restrict  */)((c_ns_name + (compiler_globals.current_namespace)->value.str.len) + 1), (void const   */* __restrict  */)lcname, (unsigned int )(name->value.str.len + 1));
    tmp___12 = zend_hash_exists((HashTable const   *)compiler_globals.class_table, (char const   *)c_ns_name, (unsigned int )((((compiler_globals.current_namespace)->value.str.len + 1) + name->value.str.len) + 1));
    if (tmp___12) {
      tmp___10 = zend_str_tolower_dup((char const   *)ns->value.str.val, (unsigned int )ns->value.str.len);
      tmp2 = (char *)tmp___10;
      if (ns->value.str.len != ((compiler_globals.current_namespace)->value.str.len + 1) + name->value.str.len) {
        zend_error(1 << 6L, "Cannot use %s as %s because the name is already in use", ns->value.str.val, name->value.str.val);
      } else {
        tmp___11 = memcmp((void const   *)tmp2, (void const   *)c_ns_name, (unsigned int )ns->value.str.len);
        if (tmp___11) {
          zend_error(1 << 6L, "Cannot use %s as %s because the name is already in use", ns->value.str.val, name->value.str.val);
        } else {

        }
      }
      _efree((void *)tmp2);
    } else {

    }
    _efree((void *)c_ns_name);
  } else {
    tmp___15 = zend_hash_find((HashTable const   *)compiler_globals.class_table, (char const   *)lcname, (unsigned int )(name->value.str.len + 1), (void **)(& pce));
    if (tmp___15 == (int __attribute__((__visibility__("default")))  )0) {
      if ((int )(*pce)->type == 2) {
        if ((unsigned int )(*pce)->info.user.filename == (unsigned int )compiler_globals.compiled_filename) {
          tmp___13 = zend_str_tolower_dup((char const   *)ns->value.str.val, (unsigned int )ns->value.str.len);
          c_tmp = (char *)tmp___13;
          if (ns->value.str.len != name->value.str.len) {
            zend_error(1 << 6L, "Cannot use %s as %s because the name is already in use", ns->value.str.val, name->value.str.val);
          } else {
            tmp___14 = memcmp((void const   *)c_tmp, (void const   *)lcname, (unsigned int )ns->value.str.len);
            if (tmp___14) {
              zend_error(1 << 6L, "Cannot use %s as %s because the name is already in use", ns->value.str.val, name->value.str.val);
            } else {

            }
          }
          _efree((void *)c_tmp);
        } else {

        }
      } else {

      }
    } else {

    }
  }
  tmp___16 = _zend_hash_add_or_update(compiler_globals.current_import, (char const   *)lcname, (unsigned int )(name->value.str.len + 1), (void *)(& ns), sizeof(zval *), (void **)((void *)0), 1 << 1);
  if (tmp___16 != (int __attribute__((__visibility__("default")))  )0) {
    zend_error(1 << 6L, "Cannot use %s as %s because the name is already in use", ns->value.str.val, name->value.str.val);
  } else {

  }
  if (warn) {
    if (0) {
      __s1_len = strlen((char const   *)name->value.str.val);
      __s2_len = strlen("strict");
      if (! ((unsigned int )((void const   *)(name->value.str.val + 1)) - (unsigned int )((void const   *)name->value.str.val) == 1U)) {
        goto _L___1;
      } else {
        if (__s1_len >= 4U) {
          _L___1: /* CIL Label */ 
          if (! ((unsigned int )((void const   *)("strict" + 1)) - (unsigned int )((void const   *)"strict") == 1U)) {
            tmp___23 = 1;
          } else {
            if (__s2_len >= 4U) {
              tmp___23 = 1;
            } else {
              tmp___23 = 0;
            }
          }
        } else {
          tmp___23 = 0;
        }
      }
      if (tmp___23) {
        tmp___18 = __builtin_strcmp((char const   *)name->value.str.val, "strict");
        tmp___22 = tmp___18;
      } else {
        tmp___21 = __builtin_strcmp((char const   *)name->value.str.val, "strict");
        tmp___22 = tmp___21;
      }
    } else {
      tmp___21 = __builtin_strcmp((char const   *)name->value.str.val, "strict");
      tmp___22 = tmp___21;
    }
    if (tmp___22) {

    } else {
      zend_error(1 << 6L, "You seem to be trying to use a different language...");
    }
    zend_error(1 << 1L, "The use statement with non-compound name \'%s\' has no effect", name->value.str.val);
  } else {

  }
  _efree((void *)lcname);
  _zval_dtor(name);
  return;
}
}
void zend_do_declare_constant(znode *name , znode *value ) 
{ zend_op *opline ;
  zend_constant *tmp ;
  znode tmp___0 ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  if ((int )value->u.constant.type == 9) {
    zend_error(1 << 6L, "Arrays are not allowed as constants");
  } else {

  }
  tmp = zend_get_ct_const((zval const   *)(& name->u.constant), 0);
  if (tmp) {
    zend_error(1 << 6L, "Cannot redeclare constant \'%s\'", name->u.constant.value.str.val);
  } else {

  }
  if (compiler_globals.current_namespace) {
    tmp___0.op_type = 1;
    tmp___0.u.constant = *(compiler_globals.current_namespace);
    tmp___1 = zend_str_tolower_dup((char const   *)tmp___0.u.constant.value.str.val, (unsigned int )tmp___0.u.constant.value.str.len);
    tmp___0.u.constant.value.str.val = (char *)tmp___1;
    zend_do_build_namespace_name(& tmp___0, & tmp___0, name);
    *name = tmp___0;
  } else {

  }
  opline = get_next_op(compiler_globals.active_op_array);
  opline->opcode = (unsigned char)143;
  opline->result_type = (unsigned char )(1 << 3);
  while (1) {
    opline->op1_type = (unsigned char )name->op_type;
    if (name->op_type == 1) {
      tmp___2 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& name->u.constant));
      opline->op1.constant = (unsigned int )tmp___2;
    } else {
      opline->op1 = name->u.op;
    }
    break;
  }
  while (1) {
    opline->op2_type = (unsigned char )value->op_type;
    if (value->op_type == 1) {
      tmp___3 = zend_add_literal(compiler_globals.active_op_array, (zval const   *)(& value->u.constant));
      opline->op2.constant = (unsigned int )tmp___3;
    } else {
      opline->op2 = value->u.op;
    }
    break;
  }
  return;
}
}
void zend_verify_namespace(void) 
{ 

  {
  if (compiler_globals.has_bracketed_namespaces) {
    if (! compiler_globals.in_namespace) {
      zend_error(1 << 6L, "No code may exist outside of namespace {}");
    } else {

    }
  } else {

  }
  return;
}
}
void zend_do_end_namespace(void) 
{ 

  {
  compiler_globals.in_namespace = (unsigned char)0;
  if (compiler_globals.current_namespace) {
    _zval_dtor(compiler_globals.current_namespace);
    while (1) {
      if ((gc_root_buffer *)((unsigned long )((zval_gc_info *)compiler_globals.current_namespace)->u.buffered & 4294967292UL)) {
        gc_remove_zval_from_buffer(compiler_globals.current_namespace);
      } else {

      }
      _efree((void *)compiler_globals.current_namespace);
      break;
    }
    compiler_globals.current_namespace = (zval *)((void *)0);
  } else {

  }
  if (compiler_globals.current_import) {
    zend_hash_destroy(compiler_globals.current_import);
    _efree((void *)compiler_globals.current_import);
    compiler_globals.current_import = (HashTable *)((void *)0);
  } else {

  }
  return;
}
}
void zend_do_end_compilation(void) 
{ 

  {
  compiler_globals.has_bracketed_namespaces = (unsigned char)0;
  zend_do_end_namespace();
  return;
}
}
size_t __attribute__((__visibility__("default")))  zend_dirname(char *path , size_t len ) 
{ register char *end ;
  unsigned int len_adjust ;

  {
  end = (path + len) - 1;
  len_adjust = 0U;
  if (len == 0U) {
    return ((unsigned int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  while (1) {
    if ((unsigned int )end >= (unsigned int )path) {
      if ((int )*end == 47) {

      } else {
        break;
      }
    } else {
      break;
    }
    end --;
  }
  if ((unsigned int )end < (unsigned int )path) {
    *(path + 0) = (char )'/';
    *(path + 1) = (char )'\000';
    return ((unsigned int __attribute__((__visibility__("default")))  )(1U + len_adjust));
  } else {

  }
  while (1) {
    if ((unsigned int )end >= (unsigned int )path) {
      if (! ((int )*end == 47)) {

      } else {
        break;
      }
    } else {
      break;
    }
    end --;
  }
  if ((unsigned int )end < (unsigned int )path) {
    *(path + 0) = (char )'.';
    *(path + 1) = (char )'\000';
    return ((unsigned int __attribute__((__visibility__("default")))  )(1U + len_adjust));
  } else {

  }
  while (1) {
    if ((unsigned int )end >= (unsigned int )path) {
      if ((int )*end == 47) {

      } else {
        break;
      }
    } else {
      break;
    }
    end --;
  }
  if ((unsigned int )end < (unsigned int )path) {
    *(path + 0) = (char )'/';
    *(path + 1) = (char )'\000';
    return ((unsigned int __attribute__((__visibility__("default")))  )(1U + len_adjust));
  } else {

  }
  *(end + 1) = (char )'\000';
  return ((unsigned int __attribute__((__visibility__("default")))  )((unsigned int )((end + 1) - path) + len_adjust));
}
}
