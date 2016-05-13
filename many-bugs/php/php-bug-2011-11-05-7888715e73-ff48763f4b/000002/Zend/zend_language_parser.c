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
struct _zend_constant {
   zval value ;
   int flags ;
   char *name ;
   uint name_len ;
   int module_number ;
};
typedef struct _zend_constant zend_constant;
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
typedef unsigned char yytype_uint8;
typedef signed char yytype_int8;
typedef unsigned short yytype_uint16;
typedef short yytype_int16;
union yyalloc {
   yytype_int16 yyss_alloc ;
   znode yyvs_alloc ;
};
enum __anonenum_80 {
    YYERROR_VERBOSE_ARGS_MAXIMUM = 5
} ;
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
extern void (*zend_on_timeout)(int seconds ) ;
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
extern char *zend_visibility_string(zend_uint fn_flags ) ;
extern  __attribute__((__nothrow__)) int setjmp(struct __jmp_buf_tag *__env ) ;
extern  __attribute__((__nothrow__)) int __sigsetjmp(struct __jmp_buf_tag *__env , int __savemask ) ;
extern  __attribute__((__nothrow__)) int _setjmp(struct __jmp_buf_tag *__env ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void longjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void _longjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void siglongjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern struct _zend_compiler_globals  __attribute__((__visibility__("default"))) compiler_globals ;
int zendparse(void) ;
extern zend_executor_globals __attribute__((__visibility__("default")))  executor_globals ;
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
extern void init_compiler(void) ;
extern void shutdown_compiler(void) ;
extern void zend_init_compiler_data_structures(void) ;
extern void zend_init_compiler_context(void) ;
extern zend_op_array __attribute__((__visibility__("default")))  *(*zend_compile_file)(zend_file_handle *file_handle , int type ) ;
extern zend_op_array __attribute__((__visibility__("default")))  *(*zend_compile_string)(zval *source_string , char *filename ) ;
extern int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
extern void startup_scanner(void) ;
extern void shutdown_scanner(void) ;
extern char __attribute__((__visibility__("default")))  *zend_set_compiled_filename(char const   *new_compiled_filename ) ;
extern void __attribute__((__visibility__("default")))  zend_restore_compiled_filename(char *original_compiled_filename ) ;
extern char __attribute__((__visibility__("default")))  *zend_get_compiled_filename(void) ;
extern int __attribute__((__visibility__("default")))  zend_get_compiled_lineno(void) ;
extern size_t __attribute__((__visibility__("default")))  zend_get_scanned_file_offset(void) ;
extern void zend_resolve_non_class_name(znode *element_name , zend_bool check_namespace ) ;
extern void zend_resolve_class_name(znode *class_name , ulong fetch_type , int check_ns_name ) ;
extern char const __attribute__((__visibility__("default")))  *zend_get_compiled_variable_name(zend_op_array const   *op_array , zend_uint var , int *name_len ) ;
extern void zend_do_binary_op(zend_uchar op , znode *result , znode const   *op1 , znode const   *op2 ) ;
extern void zend_do_unary_op(zend_uchar op , znode *result , znode const   *op1 ) ;
extern void zend_do_binary_assign_op(zend_uchar op , znode *result , znode const   *op1 , znode const   *op2 ) ;
extern void zend_do_assign(znode *result , znode *variable , znode *value ) ;
extern void zend_do_assign_ref(znode *result , znode const   *lvar , znode const   *rvar ) ;
extern void fetch_simple_variable(znode *result , znode *varname , int bp ) ;
extern void fetch_simple_variable_ex(znode *result , znode *varname , int bp , zend_uchar op ) ;
extern void zend_do_indirect_references(znode *result , znode const   *num_references , znode *variable ) ;
extern void zend_do_fetch_static_variable(znode *varname , znode const   *static_assignment , int fetch_type ) ;
extern void zend_do_fetch_global_variable(znode *varname , znode const   *static_assignment , int fetch_type ) ;
extern void fetch_array_begin(znode *result , znode *varname , znode *first_dim ) ;
extern void fetch_array_dim(znode *result , znode const   *parent , znode const   *dim ) ;
extern void fetch_string_offset(znode *result , znode const   *parent , znode const   *offset ) ;
extern void zend_do_fetch_static_member(znode *result , znode *class_znode ) ;
extern void zend_do_print(znode *result , znode const   *arg ) ;
extern void zend_do_echo(znode const   *arg ) ;
extern unary_op_type __attribute__((__visibility__("default")))  get_unary_op(int opcode ) ;
extern binary_op_type __attribute__((__visibility__("default")))  get_binary_op(int opcode ) ;
extern void zend_do_while_cond(znode const   *expr , znode *close_bracket_token ) ;
extern void zend_do_while_end(znode const   *while_token , znode const   *close_bracket_token ) ;
extern void zend_do_do_while_begin(void) ;
extern void zend_do_do_while_end(znode const   *do_token , znode const   *expr_open_bracket , znode const   *expr ) ;
extern void zend_do_if_cond(znode const   *cond , znode *closing_bracket_token ) ;
extern void zend_do_if_after_statement(znode const   *closing_bracket_token , unsigned char initialize ) ;
extern void zend_do_if_end(void) ;
extern void zend_do_for_cond(znode const   *expr , znode *second_semicolon_token ) ;
extern void zend_do_for_before_statement(znode const   *cond_start , znode const   *second_semicolon_token ) ;
extern void zend_do_for_end(znode const   *second_semicolon_token ) ;
extern void zend_do_pre_incdec(znode *result , znode const   *op1 , zend_uchar op ) ;
extern void zend_do_post_incdec(znode *result , znode const   *op1 , zend_uchar op ) ;
extern void zend_do_begin_variable_parse(void) ;
extern void zend_do_end_variable_parse(znode *variable , int type , int arg_offset ) ;
extern void zend_check_writable_variable(znode const   *variable ) ;
extern void zend_do_free(znode *op1 ) ;
extern void zend_do_add_string(znode *result , znode const   *op1 , znode *op2 ) ;
extern void zend_do_add_variable(znode *result , znode const   *op1 , znode const   *op2 ) ;
extern int zend_do_verify_access_types(znode const   *current_access_type , znode const   *new_modifier ) ;
extern void zend_do_begin_function_declaration(znode *function_token , znode *function_name , int is_method , int return_reference , znode *fn_flags_znode ) ;
extern void zend_do_end_function_declaration(znode const   *function_token ) ;
extern void zend_do_receive_arg(zend_uchar op , znode *varname , znode const   *offset , znode const   *initialization , znode *class_type , zend_bool pass_by_reference ) ;
extern int zend_do_begin_function_call(znode *function_name , zend_bool check_namespace ) ;
extern void zend_do_begin_method_call(znode *left_bracket ) ;
extern void zend_do_clone(znode *result , znode const   *expr ) ;
extern void zend_do_begin_dynamic_function_call(znode *function_name , int prefix_len ) ;
extern void zend_do_fetch_class(znode *result , znode *class_name ) ;
extern void zend_do_build_full_name(znode *result , znode *prefix , znode *name , int is_class_member ) ;
extern int zend_do_begin_class_member_function_call(znode *class_name , znode *method_name ) ;
extern void zend_do_end_function_call(znode *function_name , znode *result , znode const   *argument_list , int is_method , int is_dynamic_fcall ) ;
extern void zend_do_return(znode *expr , int do_end_vparse ) ;
extern void zend_do_handle_exception(void) ;
extern void zend_do_begin_lambda_function_declaration(znode *result , znode *function_token , int return_reference , int is_static ) ;
extern void zend_do_fetch_lexical_variable(znode *varname , zend_bool is_ref ) ;
extern void zend_do_try(znode *try_token ) ;
extern void zend_do_begin_catch(znode *try_token , znode *catch_class , znode *catch_var , znode *first_catch ) ;
extern void zend_do_end_catch(znode const   *try_token ) ;
extern void zend_do_throw(znode const   *expr ) ;
extern int __attribute__((__visibility__("default")))  do_bind_function(zend_op_array const   *op_array , zend_op *opline , HashTable *function_table , zend_bool compile_time ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *do_bind_class(zend_op_array const   *op_array , zend_op const   *opline , HashTable *class_table , zend_bool compile_time ) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *do_bind_inherited_class(zend_op_array const   *op_array , zend_op const   *opline , HashTable *class_table , zend_class_entry *parent_ce , zend_bool compile_time ) ;
extern void __attribute__((__visibility__("default")))  zend_do_inherit_interfaces(zend_class_entry *ce , zend_class_entry const   *iface ) ;
extern void __attribute__((__visibility__("default")))  zend_do_implement_interface(zend_class_entry *ce , zend_class_entry *iface ) ;
extern void zend_do_implements_interface(znode *interface_znode ) ;
extern void zend_add_trait_precedence(znode *precedence_znode ) ;
extern void zend_add_trait_alias(znode *alias_znode ) ;
extern void zend_do_implements_trait(znode *interface_znode ) ;
extern void __attribute__((__visibility__("default")))  zend_do_implement_trait(zend_class_entry *ce , zend_class_entry *trait ) ;
extern void __attribute__((__visibility__("default")))  zend_do_bind_traits(zend_class_entry *ce ) ;
extern void zend_prepare_trait_precedence(znode *result , znode *method_reference , znode *trait_list ) ;
extern void zend_prepare_reference(znode *result , znode *class_name , znode *method_name ) ;
extern void zend_prepare_trait_alias(znode *result , znode *method_reference , znode *modifiers , znode *alias ) ;
extern void init_trait_alias_list(znode *result , znode const   *trait_alias ) ;
extern void add_trait_alias(znode *result , znode const   *trait_alias ) ;
extern void init_trait_alias(znode *result , znode const   *method_name , znode const   *alias , znode const   *modifiers ) ;
extern void __attribute__((__visibility__("default")))  zend_do_inheritance(zend_class_entry *ce , zend_class_entry *parent_ce ) ;
extern void zend_do_early_binding(void) ;
extern void __attribute__((__visibility__("default")))  zend_do_delayed_early_binding(zend_op_array const   *op_array ) ;
extern void zend_do_pass_param(znode *param , zend_uchar op , int offset ) ;
extern void zend_do_boolean_or_begin(znode *expr1 , znode *op_token ) ;
extern void zend_do_boolean_or_end(znode *result , znode const   *expr1 , znode const   *expr2 , znode *op_token ) ;
extern void zend_do_boolean_and_begin(znode *expr1 , znode *op_token ) ;
extern void zend_do_boolean_and_end(znode *result , znode const   *expr1 , znode const   *expr2 , znode const   *op_token ) ;
extern void zend_do_brk_cont(zend_uchar op , znode const   *expr ) ;
extern void zend_do_switch_cond(znode const   *cond ) ;
extern void zend_do_switch_end(znode const   *case_list ) ;
extern void zend_do_case_before_statement(znode const   *case_list , znode *case_token , znode const   *case_expr ) ;
extern void zend_do_case_after_statement(znode *result , znode const   *case_token ) ;
extern void zend_do_default_before_statement(znode const   *case_list , znode *default_token ) ;
extern void zend_do_begin_class_declaration(znode const   *class_token , znode *class_name , znode const   *parent_class_name ) ;
extern void zend_do_end_class_declaration(znode const   *class_token , znode const   *parent_token ) ;
extern void zend_do_declare_property(znode const   *var_name , znode const   *value , zend_uint access_type ) ;
extern void zend_do_declare_class_constant(znode *var_name , znode const   *value ) ;
extern void zend_do_fetch_property(znode *result , znode *object , znode const   *property ) ;
extern void zend_do_halt_compiler_register(void) ;
extern void zend_do_push_object(znode const   *object ) ;
extern void zend_do_pop_object(znode *object ) ;
extern void zend_do_begin_new_object(znode *new_token , znode *class_type ) ;
extern void zend_do_end_new_object(znode *result , znode const   *new_token , znode const   *argument_list ) ;
extern void zend_do_fetch_constant(znode *result , znode *constant_container , znode *constant_name , int mode , zend_bool check_namespace ) ;
extern void zend_do_shell_exec(znode *result , znode const   *cmd ) ;
extern void zend_do_init_array(znode *result , znode const   *expr , znode const   *offset , zend_bool is_ref ) ;
extern void zend_do_add_array_element(znode *result , znode const   *expr , znode const   *offset , zend_bool is_ref ) ;
extern void zend_do_add_static_array_element(znode *result , znode *offset , znode const   *expr ) ;
extern void zend_do_list_init(void) ;
extern void zend_do_list_end(znode *result , znode *expr ) ;
extern void zend_do_add_list_element(znode const   *element ) ;
extern void zend_do_new_list_begin(void) ;
extern void zend_do_new_list_end(void) ;
extern void zend_init_list(void *result , void *item ) ;
extern void zend_add_to_list(void *result , void *item ) ;
extern void zend_do_cast(znode *result , znode const   *expr , int type ) ;
extern void zend_do_include_or_eval(int type , znode *result , znode const   *op1 ) ;
extern void zend_do_unset(znode const   *variable ) ;
extern void zend_do_isset_or_isempty(int type , znode *result , znode *variable ) ;
extern void zend_do_instanceof(znode *result , znode const   *expr , znode const   *class_znode , int type ) ;
extern void zend_do_foreach_begin(znode *foreach_token , znode *open_brackets_token , znode *array , znode *as_token , int variable ) ;
extern void zend_do_foreach_cont(znode *foreach_token , znode const   *open_brackets_token , znode const   *as_token , znode *value , znode *key ) ;
extern void zend_do_foreach_end(znode const   *foreach_token , znode const   *as_token ) ;
extern void zend_do_declare_begin(void) ;
extern void zend_do_declare_stmt(znode *var , znode *val ) ;
extern void zend_do_declare_end(znode const   *declare_token ) ;
extern void zend_do_exit(znode *result , znode const   *message ) ;
extern void zend_do_begin_silence(znode *strudel_token ) ;
extern void zend_do_end_silence(znode const   *strudel_token ) ;
extern void zend_do_jmp_set(znode const   *value , znode *jmp_token , znode *colon_token ) ;
extern void zend_do_jmp_set_else(znode *result , znode const   *false_value , znode const   *jmp_token , znode const   *colon_token ) ;
extern void zend_do_begin_qm_op(znode const   *cond , znode *qm_token ) ;
extern void zend_do_qm_true(znode const   *true_value , znode *qm_token , znode *colon_token ) ;
extern void zend_do_qm_false(znode *result , znode const   *false_value , znode const   *qm_token , znode const   *colon_token ) ;
extern void zend_do_extended_info(void) ;
extern void zend_do_extended_fcall_begin(void) ;
extern void zend_do_extended_fcall_end(void) ;
extern void zend_do_ticks(void) ;
extern void zend_do_abstract_method(znode const   *function_name , znode *modifiers , znode const   *body ) ;
extern void zend_do_declare_constant(znode *name , znode *value ) ;
extern void zend_do_build_namespace_name(znode *result , znode *prefix , znode *name ) ;
extern void zend_do_begin_namespace(znode const   *name , zend_bool with_brackets ) ;
extern void zend_do_end_namespace(void) ;
extern void zend_verify_namespace(void) ;
extern void zend_do_use(znode *name , znode *new_name , int is_global ) ;
extern void zend_do_end_compilation(void) ;
extern void zend_do_label(znode *label ) ;
extern void zend_do_goto(znode const   *label ) ;
extern void zend_resolve_goto_label(zend_op_array *op_array , zend_op *opline , int pass2 ) ;
extern void zend_release_labels(void) ;
extern void __attribute__((__visibility__("default")))  function_add_ref(zend_function *function ) ;
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
extern void __attribute__((__visibility__("default")))  zend_mangle_property_name(char **dest , int *dest_length , char const   *src1 , int src1_length , char const   *src2 , int src2_length , int internal ) ;
extern int __attribute__((__visibility__("default")))  zend_unmangle_property_name(char const   *mangled_property , int mangled_property_len , char const   **class_name , char const   **prop_name ) ;
extern zend_op *get_next_op(zend_op_array *op_array ) ;
extern void init_op(zend_op *op ) ;
extern int get_next_op_number(zend_op_array *op_array ) ;
extern int print_class(zend_class_entry *class_entry ) ;
extern void print_op_array(zend_op_array *op_array , int optimizations ) ;
extern int __attribute__((__visibility__("default")))  pass_two(zend_op_array *op_array ) ;
extern zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array ) ;
extern void zend_do_first_catch(znode *open_parentheses ) ;
extern void zend_initialize_try_catch_element(znode const   *try_token ) ;
extern void zend_do_mark_last_catch(znode const   *first_catch , znode const   *last_additional_catch ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_compiling(void) ;
extern char __attribute__((__visibility__("default")))  *zend_make_compiled_string_description(char const   *name ) ;
extern void __attribute__((__visibility__("default")))  zend_initialize_class_data(zend_class_entry *ce , zend_bool nullify_handlers ) ;
extern int zend_get_class_fetch_type(char const   *class_name , uint class_name_len ) ;
extern int __attribute__((__visibility__("default")))  zend_register_auto_global(char const   *name , uint name_len , zend_bool jit , zend_bool (*auto_global_callback)(char const   *name , uint name_len ) ) ;
extern void __attribute__((__visibility__("default")))  zend_activate_auto_globals(void) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_auto_global(char const   *name , uint name_len ) ;
extern zend_bool __attribute__((__visibility__("default")))  zend_is_auto_global_quick(char const   *name , uint name_len , ulong hashval ) ;
extern size_t __attribute__((__visibility__("default")))  zend_dirname(char *path , size_t len ) ;
extern int zendlex(znode *zendlval ) ;
extern int zend_add_literal(zend_op_array *op_array , zval const   *zv ) ;
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
static size_t zend_yytnamerr(char *yyres , char const   *yystr ) ;
static yytype_uint8 const   yytranslate[385]  = 
  {      (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )48,      (yytype_uint8 const   )157,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )154,      (yytype_uint8 const   )47,      (yytype_uint8 const   )31,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )149,      (yytype_uint8 const   )150,      (yytype_uint8 const   )45,      (yytype_uint8 const   )42, 
        (yytype_uint8 const   )8,      (yytype_uint8 const   )43,      (yytype_uint8 const   )44,      (yytype_uint8 const   )46, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )26,      (yytype_uint8 const   )151, 
        (yytype_uint8 const   )36,      (yytype_uint8 const   )13,      (yytype_uint8 const   )37,      (yytype_uint8 const   )25, 
        (yytype_uint8 const   )51,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )61, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )155,      (yytype_uint8 const   )30,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )156,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )152, 
        (yytype_uint8 const   )29,      (yytype_uint8 const   )153,      (yytype_uint8 const   )50,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )3,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )6,      (yytype_uint8 const   )7,      (yytype_uint8 const   )9, 
        (yytype_uint8 const   )10,      (yytype_uint8 const   )11,      (yytype_uint8 const   )12,      (yytype_uint8 const   )14, 
        (yytype_uint8 const   )15,      (yytype_uint8 const   )16,      (yytype_uint8 const   )17,      (yytype_uint8 const   )18, 
        (yytype_uint8 const   )19,      (yytype_uint8 const   )20,      (yytype_uint8 const   )21,      (yytype_uint8 const   )22, 
        (yytype_uint8 const   )23,      (yytype_uint8 const   )24,      (yytype_uint8 const   )27,      (yytype_uint8 const   )28, 
        (yytype_uint8 const   )32,      (yytype_uint8 const   )33,      (yytype_uint8 const   )34,      (yytype_uint8 const   )35, 
        (yytype_uint8 const   )38,      (yytype_uint8 const   )39,      (yytype_uint8 const   )40,      (yytype_uint8 const   )41, 
        (yytype_uint8 const   )49,      (yytype_uint8 const   )52,      (yytype_uint8 const   )53,      (yytype_uint8 const   )54, 
        (yytype_uint8 const   )55,      (yytype_uint8 const   )56,      (yytype_uint8 const   )57,      (yytype_uint8 const   )58, 
        (yytype_uint8 const   )59,      (yytype_uint8 const   )60,      (yytype_uint8 const   )62,      (yytype_uint8 const   )63, 
        (yytype_uint8 const   )64,      (yytype_uint8 const   )65,      (yytype_uint8 const   )66,      (yytype_uint8 const   )67, 
        (yytype_uint8 const   )68,      (yytype_uint8 const   )69,      (yytype_uint8 const   )70,      (yytype_uint8 const   )71, 
        (yytype_uint8 const   )72,      (yytype_uint8 const   )73,      (yytype_uint8 const   )74,      (yytype_uint8 const   )75, 
        (yytype_uint8 const   )76,      (yytype_uint8 const   )77,      (yytype_uint8 const   )78,      (yytype_uint8 const   )79, 
        (yytype_uint8 const   )80,      (yytype_uint8 const   )81,      (yytype_uint8 const   )82,      (yytype_uint8 const   )83, 
        (yytype_uint8 const   )84,      (yytype_uint8 const   )85,      (yytype_uint8 const   )86,      (yytype_uint8 const   )87, 
        (yytype_uint8 const   )88,      (yytype_uint8 const   )89,      (yytype_uint8 const   )90,      (yytype_uint8 const   )91, 
        (yytype_uint8 const   )92,      (yytype_uint8 const   )93,      (yytype_uint8 const   )94,      (yytype_uint8 const   )95, 
        (yytype_uint8 const   )96,      (yytype_uint8 const   )97,      (yytype_uint8 const   )98,      (yytype_uint8 const   )99, 
        (yytype_uint8 const   )100,      (yytype_uint8 const   )101,      (yytype_uint8 const   )102,      (yytype_uint8 const   )103, 
        (yytype_uint8 const   )104,      (yytype_uint8 const   )105,      (yytype_uint8 const   )106,      (yytype_uint8 const   )107, 
        (yytype_uint8 const   )108,      (yytype_uint8 const   )109,      (yytype_uint8 const   )110,      (yytype_uint8 const   )111, 
        (yytype_uint8 const   )112,      (yytype_uint8 const   )113,      (yytype_uint8 const   )114,      (yytype_uint8 const   )115, 
        (yytype_uint8 const   )116,      (yytype_uint8 const   )117,      (yytype_uint8 const   )118,      (yytype_uint8 const   )119, 
        (yytype_uint8 const   )120,      (yytype_uint8 const   )121,      (yytype_uint8 const   )122,      (yytype_uint8 const   )123, 
        (yytype_uint8 const   )124,      (yytype_uint8 const   )125,      (yytype_uint8 const   )126,      (yytype_uint8 const   )127, 
        (yytype_uint8 const   )128,      (yytype_uint8 const   )129,      (yytype_uint8 const   )130,      (yytype_uint8 const   )131, 
        (yytype_uint8 const   )132,      (yytype_uint8 const   )133,      (yytype_uint8 const   )134,      (yytype_uint8 const   )135, 
        (yytype_uint8 const   )136,      (yytype_uint8 const   )137,      (yytype_uint8 const   )138,      (yytype_uint8 const   )139, 
        (yytype_uint8 const   )140,      (yytype_uint8 const   )141,      (yytype_uint8 const   )142,      (yytype_uint8 const   )143, 
        (yytype_uint8 const   )144,      (yytype_uint8 const   )145,      (yytype_uint8 const   )146,      (yytype_uint8 const   )147, 
        (yytype_uint8 const   )148};
static char const   * const  yytname[357]  = 
  {      (char const   */* const  */)"\"end of file\"",      (char const   */* const  */)"error",      (char const   */* const  */)"$undefined",      (char const   */* const  */)"\"require_once (T_REQUIRE_ONCE)\"", 
        (char const   */* const  */)"\"require (T_REQUIRE)\"",      (char const   */* const  */)"\"eval (T_EVAL)\"",      (char const   */* const  */)"\"include_once (T_INCLUDE_ONCE)\"",      (char const   */* const  */)"\"include (T_INCLUDE)\"", 
        (char const   */* const  */)"\',\'",      (char const   */* const  */)"\"or (T_LOGICAL_OR)\"",      (char const   */* const  */)"\"xor (T_LOGICAL_XOR)\"",      (char const   */* const  */)"\"and (T_LOGICAL_AND)\"", 
        (char const   */* const  */)"\"print (T_PRINT)\"",      (char const   */* const  */)"\'=\'",      (char const   */* const  */)"\">>= (T_SR_EQUAL)\"",      (char const   */* const  */)"\"<<= (T_SL_EQUAL)\"", 
        (char const   */* const  */)"\"^= (T_XOR_EQUAL)\"",      (char const   */* const  */)"\"|= (T_OR_EQUAL)\"",      (char const   */* const  */)"\"&= (T_AND_EQUAL)\"",      (char const   */* const  */)"\"%= (T_MOD_EQUAL)\"", 
        (char const   */* const  */)"\".= (T_CONCAT_EQUAL)\"",      (char const   */* const  */)"\"/= (T_DIV_EQUAL)\"",      (char const   */* const  */)"\"*= (T_MUL_EQUAL)\"",      (char const   */* const  */)"\"-= (T_MINUS_EQUAL)\"", 
        (char const   */* const  */)"\"+= (T_PLUS_EQUAL)\"",      (char const   */* const  */)"\'?\'",      (char const   */* const  */)"\':\'",      (char const   */* const  */)"\"|| (T_BOOLEAN_OR)\"", 
        (char const   */* const  */)"\"&& (T_BOOLEAN_AND)\"",      (char const   */* const  */)"\'|\'",      (char const   */* const  */)"\'^\'",      (char const   */* const  */)"\'&\'", 
        (char const   */* const  */)"\"!== (T_IS_NOT_IDENTICAL)\"",      (char const   */* const  */)"\"=== (T_IS_IDENTICAL)\"",      (char const   */* const  */)"\"!= (T_IS_NOT_EQUAL)\"",      (char const   */* const  */)"\"== (T_IS_EQUAL)\"", 
        (char const   */* const  */)"\'<\'",      (char const   */* const  */)"\'>\'",      (char const   */* const  */)"\">= (T_IS_GREATER_OR_EQUAL)\"",      (char const   */* const  */)"\"<= (T_IS_SMALLER_OR_EQUAL)\"", 
        (char const   */* const  */)"\">> (T_SR)\"",      (char const   */* const  */)"\"<< (T_SL)\"",      (char const   */* const  */)"\'+\'",      (char const   */* const  */)"\'-\'", 
        (char const   */* const  */)"\'.\'",      (char const   */* const  */)"\'*\'",      (char const   */* const  */)"\'/\'",      (char const   */* const  */)"\'%\'", 
        (char const   */* const  */)"\'!\'",      (char const   */* const  */)"\"instanceof (T_INSTANCEOF)\"",      (char const   */* const  */)"\'~\'",      (char const   */* const  */)"\'@\'", 
        (char const   */* const  */)"\"(unset) (T_UNSET_CAST)\"",      (char const   */* const  */)"\"(bool) (T_BOOL_CAST)\"",      (char const   */* const  */)"\"(object) (T_OBJECT_CAST)\"",      (char const   */* const  */)"\"(array) (T_ARRAY_CAST)\"", 
        (char const   */* const  */)"\"(string) (T_STRING_CAST)\"",      (char const   */* const  */)"\"(double) (T_DOUBLE_CAST)\"",      (char const   */* const  */)"\"(int) (T_INT_CAST)\"",      (char const   */* const  */)"\"-- (T_DEC)\"", 
        (char const   */* const  */)"\"++ (T_INC)\"",      (char const   */* const  */)"\'[\'",      (char const   */* const  */)"\"clone (T_CLONE)\"",      (char const   */* const  */)"\"new (T_NEW)\"", 
        (char const   */* const  */)"\"exit (T_EXIT)\"",      (char const   */* const  */)"\"if (T_IF)\"",      (char const   */* const  */)"\"elseif (T_ELSEIF)\"",      (char const   */* const  */)"\"else (T_ELSE)\"", 
        (char const   */* const  */)"\"endif (T_ENDIF)\"",      (char const   */* const  */)"\"integer number (T_LNUMBER)\"",      (char const   */* const  */)"\"floating-point number (T_DNUMBER)\"",      (char const   */* const  */)"\"identifier (T_STRING)\"", 
        (char const   */* const  */)"\"variable name (T_STRING_VARNAME)\"",      (char const   */* const  */)"\"variable (T_VARIABLE)\"",      (char const   */* const  */)"\"number (T_NUM_STRING)\"",      (char const   */* const  */)"T_INLINE_HTML", 
        (char const   */* const  */)"T_CHARACTER",      (char const   */* const  */)"T_BAD_CHARACTER",      (char const   */* const  */)"\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",      (char const   */* const  */)"\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", 
        (char const   */* const  */)"\"echo (T_ECHO)\"",      (char const   */* const  */)"\"do (T_DO)\"",      (char const   */* const  */)"\"while (T_WHILE)\"",      (char const   */* const  */)"\"endwhile (T_ENDWHILE)\"", 
        (char const   */* const  */)"\"for (T_FOR)\"",      (char const   */* const  */)"\"endfor (T_ENDFOR)\"",      (char const   */* const  */)"\"foreach (T_FOREACH)\"",      (char const   */* const  */)"\"endforeach (T_ENDFOREACH)\"", 
        (char const   */* const  */)"\"declare (T_DECLARE)\"",      (char const   */* const  */)"\"enddeclare (T_ENDDECLARE)\"",      (char const   */* const  */)"\"as (T_AS)\"",      (char const   */* const  */)"\"switch (T_SWITCH)\"", 
        (char const   */* const  */)"\"endswitch (T_ENDSWITCH)\"",      (char const   */* const  */)"\"case (T_CASE)\"",      (char const   */* const  */)"\"default (T_DEFAULT)\"",      (char const   */* const  */)"\"break (T_BREAK)\"", 
        (char const   */* const  */)"\"continue (T_CONTINUE)\"",      (char const   */* const  */)"\"goto (T_GOTO)\"",      (char const   */* const  */)"\"function (T_FUNCTION)\"",      (char const   */* const  */)"\"const (T_CONST)\"", 
        (char const   */* const  */)"\"return (T_RETURN)\"",      (char const   */* const  */)"\"try (T_TRY)\"",      (char const   */* const  */)"\"catch (T_CATCH)\"",      (char const   */* const  */)"\"throw (T_THROW)\"", 
        (char const   */* const  */)"\"use (T_USE)\"",      (char const   */* const  */)"\"insteadof (T_INSTEADOF)\"",      (char const   */* const  */)"\"global (T_GLOBAL)\"",      (char const   */* const  */)"\"public (T_PUBLIC)\"", 
        (char const   */* const  */)"\"protected (T_PROTECTED)\"",      (char const   */* const  */)"\"private (T_PRIVATE)\"",      (char const   */* const  */)"\"final (T_FINAL)\"",      (char const   */* const  */)"\"abstract (T_ABSTRACT)\"", 
        (char const   */* const  */)"\"static (T_STATIC)\"",      (char const   */* const  */)"\"var (T_VAR)\"",      (char const   */* const  */)"\"unset (T_UNSET)\"",      (char const   */* const  */)"\"isset (T_ISSET)\"", 
        (char const   */* const  */)"\"empty (T_EMPTY)\"",      (char const   */* const  */)"\"__halt_compiler (T_HALT_COMPILER)\"",      (char const   */* const  */)"\"class (T_CLASS)\"",      (char const   */* const  */)"\"trait (T_TRAIT)\"", 
        (char const   */* const  */)"\"interface (T_INTERFACE)\"",      (char const   */* const  */)"\"extends (T_EXTENDS)\"",      (char const   */* const  */)"\"implements (T_IMPLEMENTS)\"",      (char const   */* const  */)"\"-> (T_OBJECT_OPERATOR)\"", 
        (char const   */* const  */)"\"=> (T_DOUBLE_ARROW)\"",      (char const   */* const  */)"\"list (T_LIST)\"",      (char const   */* const  */)"\"array (T_ARRAY)\"",      (char const   */* const  */)"\"callable (T_CALLABLE)\"", 
        (char const   */* const  */)"\"__CLASS__ (T_CLASS_C)\"",      (char const   */* const  */)"\"__TRAIT__ (T_TRAIT_C)\"",      (char const   */* const  */)"\"__METHOD__ (T_METHOD_C)\"",      (char const   */* const  */)"\"__FUNCTION__ (T_FUNC_C)\"", 
        (char const   */* const  */)"\"__LINE__ (T_LINE)\"",      (char const   */* const  */)"\"__FILE__ (T_FILE)\"",      (char const   */* const  */)"\"comment (T_COMMENT)\"",      (char const   */* const  */)"\"doc comment (T_DOC_COMMENT)\"", 
        (char const   */* const  */)"\"open tag (T_OPEN_TAG)\"",      (char const   */* const  */)"\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",      (char const   */* const  */)"\"close tag (T_CLOSE_TAG)\"",      (char const   */* const  */)"\"whitespace (T_WHITESPACE)\"", 
        (char const   */* const  */)"\"heredoc start (T_START_HEREDOC)\"",      (char const   */* const  */)"\"heredoc end (T_END_HEREDOC)\"",      (char const   */* const  */)"\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"",      (char const   */* const  */)"\"{$ (T_CURLY_OPEN)\"", 
        (char const   */* const  */)"\":: (T_PAAMAYIM_NEKUDOTAYIM)\"",      (char const   */* const  */)"\"namespace (T_NAMESPACE)\"",      (char const   */* const  */)"\"__NAMESPACE__ (T_NS_C)\"",      (char const   */* const  */)"\"__DIR__ (T_DIR)\"", 
        (char const   */* const  */)"\"\\\\ (T_NS_SEPARATOR)\"",      (char const   */* const  */)"\'(\'",      (char const   */* const  */)"\')\'",      (char const   */* const  */)"\';\'", 
        (char const   */* const  */)"\'{\'",      (char const   */* const  */)"\'}\'",      (char const   */* const  */)"\'$\'",      (char const   */* const  */)"\']\'", 
        (char const   */* const  */)"\'`\'",      (char const   */* const  */)"\'\"\'",      (char const   */* const  */)"$accept",      (char const   */* const  */)"start", 
        (char const   */* const  */)"top_statement_list",      (char const   */* const  */)"$@1",      (char const   */* const  */)"namespace_name",      (char const   */* const  */)"top_statement", 
        (char const   */* const  */)"$@2",      (char const   */* const  */)"$@3",      (char const   */* const  */)"use_declarations",      (char const   */* const  */)"use_declaration", 
        (char const   */* const  */)"constant_declaration",      (char const   */* const  */)"inner_statement_list",      (char const   */* const  */)"$@4",      (char const   */* const  */)"inner_statement", 
        (char const   */* const  */)"statement",      (char const   */* const  */)"unticked_statement",      (char const   */* const  */)"$@5",      (char const   */* const  */)"$@6", 
        (char const   */* const  */)"$@7",      (char const   */* const  */)"$@8",      (char const   */* const  */)"$@9",      (char const   */* const  */)"$@10", 
        (char const   */* const  */)"$@11",      (char const   */* const  */)"$@12",      (char const   */* const  */)"$@13",      (char const   */* const  */)"$@14", 
        (char const   */* const  */)"$@15",      (char const   */* const  */)"$@16",      (char const   */* const  */)"$@17",      (char const   */* const  */)"$@18", 
        (char const   */* const  */)"$@19",      (char const   */* const  */)"$@20",      (char const   */* const  */)"$@21",      (char const   */* const  */)"$@22", 
        (char const   */* const  */)"$@23",      (char const   */* const  */)"$@24",      (char const   */* const  */)"$@25",      (char const   */* const  */)"$@26", 
        (char const   */* const  */)"additional_catches",      (char const   */* const  */)"non_empty_additional_catches",      (char const   */* const  */)"additional_catch",      (char const   */* const  */)"@27", 
        (char const   */* const  */)"$@28",      (char const   */* const  */)"unset_variables",      (char const   */* const  */)"unset_variable",      (char const   */* const  */)"function_declaration_statement", 
        (char const   */* const  */)"class_declaration_statement",      (char const   */* const  */)"is_reference",      (char const   */* const  */)"unticked_function_declaration_statement",      (char const   */* const  */)"$@29", 
        (char const   */* const  */)"unticked_class_declaration_statement",      (char const   */* const  */)"$@30",      (char const   */* const  */)"$@31",      (char const   */* const  */)"class_entry_type", 
        (char const   */* const  */)"extends_from",      (char const   */* const  */)"interface_entry",      (char const   */* const  */)"interface_extends_list",      (char const   */* const  */)"implements_list", 
        (char const   */* const  */)"interface_list",      (char const   */* const  */)"foreach_optional_arg",      (char const   */* const  */)"foreach_variable",      (char const   */* const  */)"for_statement", 
        (char const   */* const  */)"foreach_statement",      (char const   */* const  */)"declare_statement",      (char const   */* const  */)"declare_list",      (char const   */* const  */)"switch_case_list", 
        (char const   */* const  */)"case_list",      (char const   */* const  */)"$@32",      (char const   */* const  */)"$@33",      (char const   */* const  */)"case_separator", 
        (char const   */* const  */)"while_statement",      (char const   */* const  */)"elseif_list",      (char const   */* const  */)"$@34",      (char const   */* const  */)"new_elseif_list", 
        (char const   */* const  */)"$@35",      (char const   */* const  */)"else_single",      (char const   */* const  */)"new_else_single",      (char const   */* const  */)"parameter_list", 
        (char const   */* const  */)"non_empty_parameter_list",      (char const   */* const  */)"optional_class_type",      (char const   */* const  */)"function_call_parameter_list",      (char const   */* const  */)"non_empty_function_call_parameter_list", 
        (char const   */* const  */)"global_var_list",      (char const   */* const  */)"global_var",      (char const   */* const  */)"static_var_list",      (char const   */* const  */)"class_statement_list", 
        (char const   */* const  */)"class_statement",      (char const   */* const  */)"$@36",      (char const   */* const  */)"$@37",      (char const   */* const  */)"trait_use_statement", 
        (char const   */* const  */)"trait_list",      (char const   */* const  */)"trait_adaptations",      (char const   */* const  */)"trait_adaptation_list",      (char const   */* const  */)"non_empty_trait_adaptation_list", 
        (char const   */* const  */)"trait_adaptation_statement",      (char const   */* const  */)"trait_precedence",      (char const   */* const  */)"trait_reference_list",      (char const   */* const  */)"trait_method_reference", 
        (char const   */* const  */)"trait_method_reference_fully_qualified",      (char const   */* const  */)"trait_alias",      (char const   */* const  */)"trait_modifiers",      (char const   */* const  */)"method_body", 
        (char const   */* const  */)"variable_modifiers",      (char const   */* const  */)"method_modifiers",      (char const   */* const  */)"non_empty_member_modifiers",      (char const   */* const  */)"member_modifier", 
        (char const   */* const  */)"class_variable_declaration",      (char const   */* const  */)"class_constant_declaration",      (char const   */* const  */)"echo_expr_list",      (char const   */* const  */)"for_expr", 
        (char const   */* const  */)"non_empty_for_expr",      (char const   */* const  */)"$@38",      (char const   */* const  */)"expr_without_variable",      (char const   */* const  */)"$@39", 
        (char const   */* const  */)"$@40",      (char const   */* const  */)"$@41",      (char const   */* const  */)"$@42",      (char const   */* const  */)"$@43", 
        (char const   */* const  */)"$@44",      (char const   */* const  */)"$@45",      (char const   */* const  */)"$@46",      (char const   */* const  */)"$@47", 
        (char const   */* const  */)"$@48",      (char const   */* const  */)"$@49",      (char const   */* const  */)"@50",      (char const   */* const  */)"@51", 
        (char const   */* const  */)"function",      (char const   */* const  */)"lexical_vars",      (char const   */* const  */)"lexical_var_list",      (char const   */* const  */)"function_call", 
        (char const   */* const  */)"$@52",      (char const   */* const  */)"$@53",      (char const   */* const  */)"$@54",      (char const   */* const  */)"$@55", 
        (char const   */* const  */)"$@56",      (char const   */* const  */)"$@57",      (char const   */* const  */)"$@58",      (char const   */* const  */)"$@59", 
        (char const   */* const  */)"class_name",      (char const   */* const  */)"fully_qualified_class_name",      (char const   */* const  */)"class_name_reference",      (char const   */* const  */)"dynamic_class_name_reference", 
        (char const   */* const  */)"$@60",      (char const   */* const  */)"$@61",      (char const   */* const  */)"dynamic_class_name_variable_properties",      (char const   */* const  */)"dynamic_class_name_variable_property", 
        (char const   */* const  */)"exit_expr",      (char const   */* const  */)"backticks_expr",      (char const   */* const  */)"ctor_arguments",      (char const   */* const  */)"common_scalar", 
        (char const   */* const  */)"static_scalar",      (char const   */* const  */)"static_class_constant",      (char const   */* const  */)"scalar",      (char const   */* const  */)"static_array_pair_list", 
        (char const   */* const  */)"possible_comma",      (char const   */* const  */)"non_empty_static_array_pair_list",      (char const   */* const  */)"expr",      (char const   */* const  */)"r_variable", 
        (char const   */* const  */)"w_variable",      (char const   */* const  */)"rw_variable",      (char const   */* const  */)"variable",      (char const   */* const  */)"$@62", 
        (char const   */* const  */)"$@63",      (char const   */* const  */)"variable_properties",      (char const   */* const  */)"variable_property",      (char const   */* const  */)"$@64", 
        (char const   */* const  */)"array_method_dereference",      (char const   */* const  */)"method",      (char const   */* const  */)"$@65",      (char const   */* const  */)"method_or_not", 
        (char const   */* const  */)"variable_without_objects",      (char const   */* const  */)"static_member",      (char const   */* const  */)"variable_class_name",      (char const   */* const  */)"array_function_dereference", 
        (char const   */* const  */)"$@66",      (char const   */* const  */)"base_variable_with_function_calls",      (char const   */* const  */)"base_variable",      (char const   */* const  */)"reference_variable", 
        (char const   */* const  */)"compound_variable",      (char const   */* const  */)"dim_offset",      (char const   */* const  */)"object_property",      (char const   */* const  */)"$@67", 
        (char const   */* const  */)"object_dim_list",      (char const   */* const  */)"variable_name",      (char const   */* const  */)"simple_indirect_reference",      (char const   */* const  */)"assignment_list", 
        (char const   */* const  */)"assignment_list_element",      (char const   */* const  */)"$@68",      (char const   */* const  */)"array_pair_list",      (char const   */* const  */)"non_empty_array_pair_list", 
        (char const   */* const  */)"encaps_list",      (char const   */* const  */)"encaps_var",      (char const   */* const  */)"$@69",      (char const   */* const  */)"encaps_var_offset", 
        (char const   */* const  */)"internal_functions_in_yacc",      (char const   */* const  */)"isset_variables",      (char const   */* const  */)"$@70",      (char const   */* const  */)"class_constant", 
        (char const   */* const  */)0};
static yytype_uint16 const   yyr1[502]  = 
  {      (yytype_uint16 const   )0,      (yytype_uint16 const   )158,      (yytype_uint16 const   )159,      (yytype_uint16 const   )161, 
        (yytype_uint16 const   )160,      (yytype_uint16 const   )160,      (yytype_uint16 const   )162,      (yytype_uint16 const   )162, 
        (yytype_uint16 const   )163,      (yytype_uint16 const   )163,      (yytype_uint16 const   )163,      (yytype_uint16 const   )163, 
        (yytype_uint16 const   )163,      (yytype_uint16 const   )164,      (yytype_uint16 const   )163,      (yytype_uint16 const   )165, 
        (yytype_uint16 const   )163,      (yytype_uint16 const   )163,      (yytype_uint16 const   )163,      (yytype_uint16 const   )166, 
        (yytype_uint16 const   )166,      (yytype_uint16 const   )167,      (yytype_uint16 const   )167,      (yytype_uint16 const   )167, 
        (yytype_uint16 const   )167,      (yytype_uint16 const   )168,      (yytype_uint16 const   )168,      (yytype_uint16 const   )170, 
        (yytype_uint16 const   )169,      (yytype_uint16 const   )169,      (yytype_uint16 const   )171,      (yytype_uint16 const   )171, 
        (yytype_uint16 const   )171,      (yytype_uint16 const   )171,      (yytype_uint16 const   )172,      (yytype_uint16 const   )172, 
        (yytype_uint16 const   )173,      (yytype_uint16 const   )174,      (yytype_uint16 const   )175,      (yytype_uint16 const   )173, 
        (yytype_uint16 const   )176,      (yytype_uint16 const   )177,      (yytype_uint16 const   )173,      (yytype_uint16 const   )178, 
        (yytype_uint16 const   )179,      (yytype_uint16 const   )173,      (yytype_uint16 const   )180,      (yytype_uint16 const   )181, 
        (yytype_uint16 const   )173,      (yytype_uint16 const   )182,      (yytype_uint16 const   )183,      (yytype_uint16 const   )184, 
        (yytype_uint16 const   )173,      (yytype_uint16 const   )185,      (yytype_uint16 const   )173,      (yytype_uint16 const   )173, 
        (yytype_uint16 const   )173,      (yytype_uint16 const   )173,      (yytype_uint16 const   )173,      (yytype_uint16 const   )173, 
        (yytype_uint16 const   )173,      (yytype_uint16 const   )173,      (yytype_uint16 const   )173,      (yytype_uint16 const   )173, 
        (yytype_uint16 const   )173,      (yytype_uint16 const   )173,      (yytype_uint16 const   )173,      (yytype_uint16 const   )173, 
        (yytype_uint16 const   )186,      (yytype_uint16 const   )187,      (yytype_uint16 const   )173,      (yytype_uint16 const   )188, 
        (yytype_uint16 const   )189,      (yytype_uint16 const   )173,      (yytype_uint16 const   )190,      (yytype_uint16 const   )173, 
        (yytype_uint16 const   )173,      (yytype_uint16 const   )191,      (yytype_uint16 const   )192,      (yytype_uint16 const   )193, 
        (yytype_uint16 const   )194,      (yytype_uint16 const   )195,      (yytype_uint16 const   )173,      (yytype_uint16 const   )173, 
        (yytype_uint16 const   )173,      (yytype_uint16 const   )196,      (yytype_uint16 const   )196,      (yytype_uint16 const   )197, 
        (yytype_uint16 const   )197,      (yytype_uint16 const   )199,      (yytype_uint16 const   )200,      (yytype_uint16 const   )198, 
        (yytype_uint16 const   )201,      (yytype_uint16 const   )201,      (yytype_uint16 const   )202,      (yytype_uint16 const   )203, 
        (yytype_uint16 const   )204,      (yytype_uint16 const   )205,      (yytype_uint16 const   )205,      (yytype_uint16 const   )207, 
        (yytype_uint16 const   )206,      (yytype_uint16 const   )209,      (yytype_uint16 const   )208,      (yytype_uint16 const   )210, 
        (yytype_uint16 const   )208,      (yytype_uint16 const   )211,      (yytype_uint16 const   )211,      (yytype_uint16 const   )211, 
        (yytype_uint16 const   )211,      (yytype_uint16 const   )212,      (yytype_uint16 const   )212,      (yytype_uint16 const   )213, 
        (yytype_uint16 const   )214,      (yytype_uint16 const   )214,      (yytype_uint16 const   )215,      (yytype_uint16 const   )215, 
        (yytype_uint16 const   )216,      (yytype_uint16 const   )216,      (yytype_uint16 const   )217,      (yytype_uint16 const   )217, 
        (yytype_uint16 const   )218,      (yytype_uint16 const   )218,      (yytype_uint16 const   )219,      (yytype_uint16 const   )219, 
        (yytype_uint16 const   )220,      (yytype_uint16 const   )220,      (yytype_uint16 const   )221,      (yytype_uint16 const   )221, 
        (yytype_uint16 const   )222,      (yytype_uint16 const   )222,      (yytype_uint16 const   )223,      (yytype_uint16 const   )223, 
        (yytype_uint16 const   )223,      (yytype_uint16 const   )223,      (yytype_uint16 const   )224,      (yytype_uint16 const   )225, 
        (yytype_uint16 const   )224,      (yytype_uint16 const   )226,      (yytype_uint16 const   )224,      (yytype_uint16 const   )227, 
        (yytype_uint16 const   )227,      (yytype_uint16 const   )228,      (yytype_uint16 const   )228,      (yytype_uint16 const   )229, 
        (yytype_uint16 const   )230,      (yytype_uint16 const   )229,      (yytype_uint16 const   )231,      (yytype_uint16 const   )232, 
        (yytype_uint16 const   )231,      (yytype_uint16 const   )233,      (yytype_uint16 const   )233,      (yytype_uint16 const   )234, 
        (yytype_uint16 const   )234,      (yytype_uint16 const   )235,      (yytype_uint16 const   )235,      (yytype_uint16 const   )236, 
        (yytype_uint16 const   )236,      (yytype_uint16 const   )236,      (yytype_uint16 const   )236,      (yytype_uint16 const   )236, 
        (yytype_uint16 const   )236,      (yytype_uint16 const   )236,      (yytype_uint16 const   )236,      (yytype_uint16 const   )237, 
        (yytype_uint16 const   )237,      (yytype_uint16 const   )237,      (yytype_uint16 const   )237,      (yytype_uint16 const   )238, 
        (yytype_uint16 const   )238,      (yytype_uint16 const   )239,      (yytype_uint16 const   )239,      (yytype_uint16 const   )239, 
        (yytype_uint16 const   )239,      (yytype_uint16 const   )239,      (yytype_uint16 const   )239,      (yytype_uint16 const   )240, 
        (yytype_uint16 const   )240,      (yytype_uint16 const   )241,      (yytype_uint16 const   )241,      (yytype_uint16 const   )241, 
        (yytype_uint16 const   )242,      (yytype_uint16 const   )242,      (yytype_uint16 const   )242,      (yytype_uint16 const   )242, 
        (yytype_uint16 const   )243,      (yytype_uint16 const   )243,      (yytype_uint16 const   )245,      (yytype_uint16 const   )244, 
        (yytype_uint16 const   )244,      (yytype_uint16 const   )244,      (yytype_uint16 const   )246,      (yytype_uint16 const   )244, 
        (yytype_uint16 const   )247,      (yytype_uint16 const   )248,      (yytype_uint16 const   )248,      (yytype_uint16 const   )249, 
        (yytype_uint16 const   )249,      (yytype_uint16 const   )250,      (yytype_uint16 const   )250,      (yytype_uint16 const   )251, 
        (yytype_uint16 const   )251,      (yytype_uint16 const   )252,      (yytype_uint16 const   )252,      (yytype_uint16 const   )253, 
        (yytype_uint16 const   )254,      (yytype_uint16 const   )254,      (yytype_uint16 const   )255,      (yytype_uint16 const   )255, 
        (yytype_uint16 const   )256,      (yytype_uint16 const   )257,      (yytype_uint16 const   )257,      (yytype_uint16 const   )258, 
        (yytype_uint16 const   )258,      (yytype_uint16 const   )259,      (yytype_uint16 const   )259,      (yytype_uint16 const   )260, 
        (yytype_uint16 const   )260,      (yytype_uint16 const   )261,      (yytype_uint16 const   )261,      (yytype_uint16 const   )262, 
        (yytype_uint16 const   )262,      (yytype_uint16 const   )263,      (yytype_uint16 const   )263,      (yytype_uint16 const   )263, 
        (yytype_uint16 const   )263,      (yytype_uint16 const   )263,      (yytype_uint16 const   )263,      (yytype_uint16 const   )264, 
        (yytype_uint16 const   )264,      (yytype_uint16 const   )264,      (yytype_uint16 const   )264,      (yytype_uint16 const   )265, 
        (yytype_uint16 const   )265,      (yytype_uint16 const   )266,      (yytype_uint16 const   )266,      (yytype_uint16 const   )267, 
        (yytype_uint16 const   )267,      (yytype_uint16 const   )269,      (yytype_uint16 const   )268,      (yytype_uint16 const   )268, 
        (yytype_uint16 const   )271,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )272,      (yytype_uint16 const   )270,      (yytype_uint16 const   )273,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )274,      (yytype_uint16 const   )270,      (yytype_uint16 const   )275,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )276,      (yytype_uint16 const   )270,      (yytype_uint16 const   )277,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )278,      (yytype_uint16 const   )279, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )280,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )281,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )270,      (yytype_uint16 const   )282, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )283,      (yytype_uint16 const   )270,      (yytype_uint16 const   )284, 
        (yytype_uint16 const   )285,      (yytype_uint16 const   )285,      (yytype_uint16 const   )286,      (yytype_uint16 const   )286, 
        (yytype_uint16 const   )286,      (yytype_uint16 const   )286,      (yytype_uint16 const   )288,      (yytype_uint16 const   )287, 
        (yytype_uint16 const   )289,      (yytype_uint16 const   )287,      (yytype_uint16 const   )290,      (yytype_uint16 const   )287, 
        (yytype_uint16 const   )291,      (yytype_uint16 const   )287,      (yytype_uint16 const   )292,      (yytype_uint16 const   )287, 
        (yytype_uint16 const   )293,      (yytype_uint16 const   )287,      (yytype_uint16 const   )294,      (yytype_uint16 const   )287, 
        (yytype_uint16 const   )295,      (yytype_uint16 const   )287,      (yytype_uint16 const   )296,      (yytype_uint16 const   )296, 
        (yytype_uint16 const   )296,      (yytype_uint16 const   )296,      (yytype_uint16 const   )297,      (yytype_uint16 const   )297, 
        (yytype_uint16 const   )297,      (yytype_uint16 const   )298,      (yytype_uint16 const   )298,      (yytype_uint16 const   )300, 
        (yytype_uint16 const   )301,      (yytype_uint16 const   )299,      (yytype_uint16 const   )299,      (yytype_uint16 const   )302, 
        (yytype_uint16 const   )302,      (yytype_uint16 const   )303,      (yytype_uint16 const   )304,      (yytype_uint16 const   )304, 
        (yytype_uint16 const   )304,      (yytype_uint16 const   )305,      (yytype_uint16 const   )305,      (yytype_uint16 const   )305, 
        (yytype_uint16 const   )306,      (yytype_uint16 const   )306,      (yytype_uint16 const   )307,      (yytype_uint16 const   )307, 
        (yytype_uint16 const   )307,      (yytype_uint16 const   )307,      (yytype_uint16 const   )307,      (yytype_uint16 const   )307, 
        (yytype_uint16 const   )307,      (yytype_uint16 const   )307,      (yytype_uint16 const   )307,      (yytype_uint16 const   )307, 
        (yytype_uint16 const   )307,      (yytype_uint16 const   )307,      (yytype_uint16 const   )307,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )308,      (yytype_uint16 const   )308,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )308,      (yytype_uint16 const   )308,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )309,      (yytype_uint16 const   )310,      (yytype_uint16 const   )310,      (yytype_uint16 const   )310, 
        (yytype_uint16 const   )310,      (yytype_uint16 const   )310,      (yytype_uint16 const   )310,      (yytype_uint16 const   )310, 
        (yytype_uint16 const   )310,      (yytype_uint16 const   )311,      (yytype_uint16 const   )311,      (yytype_uint16 const   )312, 
        (yytype_uint16 const   )312,      (yytype_uint16 const   )313,      (yytype_uint16 const   )313,      (yytype_uint16 const   )313, 
        (yytype_uint16 const   )313,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )315, 
        (yytype_uint16 const   )316,      (yytype_uint16 const   )317,      (yytype_uint16 const   )319,      (yytype_uint16 const   )320, 
        (yytype_uint16 const   )318,      (yytype_uint16 const   )318,      (yytype_uint16 const   )321,      (yytype_uint16 const   )321, 
        (yytype_uint16 const   )323,      (yytype_uint16 const   )322,      (yytype_uint16 const   )324,      (yytype_uint16 const   )324, 
        (yytype_uint16 const   )326,      (yytype_uint16 const   )325,      (yytype_uint16 const   )327,      (yytype_uint16 const   )327, 
        (yytype_uint16 const   )327,      (yytype_uint16 const   )328,      (yytype_uint16 const   )328,      (yytype_uint16 const   )329, 
        (yytype_uint16 const   )329,      (yytype_uint16 const   )330,      (yytype_uint16 const   )331,      (yytype_uint16 const   )332, 
        (yytype_uint16 const   )331,      (yytype_uint16 const   )333,      (yytype_uint16 const   )333,      (yytype_uint16 const   )333, 
        (yytype_uint16 const   )334,      (yytype_uint16 const   )334,      (yytype_uint16 const   )334,      (yytype_uint16 const   )335, 
        (yytype_uint16 const   )335,      (yytype_uint16 const   )335,      (yytype_uint16 const   )336,      (yytype_uint16 const   )336, 
        (yytype_uint16 const   )337,      (yytype_uint16 const   )337,      (yytype_uint16 const   )338,      (yytype_uint16 const   )339, 
        (yytype_uint16 const   )338,      (yytype_uint16 const   )340,      (yytype_uint16 const   )340,      (yytype_uint16 const   )340, 
        (yytype_uint16 const   )341,      (yytype_uint16 const   )341,      (yytype_uint16 const   )342,      (yytype_uint16 const   )342, 
        (yytype_uint16 const   )343,      (yytype_uint16 const   )343,      (yytype_uint16 const   )344,      (yytype_uint16 const   )345, 
        (yytype_uint16 const   )344,      (yytype_uint16 const   )344,      (yytype_uint16 const   )346,      (yytype_uint16 const   )346, 
        (yytype_uint16 const   )347,      (yytype_uint16 const   )347,      (yytype_uint16 const   )347,      (yytype_uint16 const   )347, 
        (yytype_uint16 const   )347,      (yytype_uint16 const   )347,      (yytype_uint16 const   )347,      (yytype_uint16 const   )347, 
        (yytype_uint16 const   )348,      (yytype_uint16 const   )348,      (yytype_uint16 const   )348,      (yytype_uint16 const   )348, 
        (yytype_uint16 const   )349,      (yytype_uint16 const   )350,      (yytype_uint16 const   )349,      (yytype_uint16 const   )349, 
        (yytype_uint16 const   )349,      (yytype_uint16 const   )349,      (yytype_uint16 const   )349,      (yytype_uint16 const   )351, 
        (yytype_uint16 const   )351,      (yytype_uint16 const   )351,      (yytype_uint16 const   )352,      (yytype_uint16 const   )352, 
        (yytype_uint16 const   )352,      (yytype_uint16 const   )352,      (yytype_uint16 const   )352,      (yytype_uint16 const   )352, 
        (yytype_uint16 const   )352,      (yytype_uint16 const   )353,      (yytype_uint16 const   )354,      (yytype_uint16 const   )353, 
        (yytype_uint16 const   )355,      (yytype_uint16 const   )355};
static yytype_uint8 const   yyr2[502]  = 
  {      (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )6,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )3,      (yytype_uint8 const   )2,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )4,      (yytype_uint8 const   )5,      (yytype_uint8 const   )4,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )4,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )9, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )12,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )7,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )9,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )12,      (yytype_uint8 const   )0,      (yytype_uint8 const   )6,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )2,      (yytype_uint8 const   )3,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )5, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )10,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )10,      (yytype_uint8 const   )0,      (yytype_uint8 const   )6, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )18,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )10, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )10,      (yytype_uint8 const   )0,      (yytype_uint8 const   )8,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )7,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )4,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )5,      (yytype_uint8 const   )3,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )4,      (yytype_uint8 const   )5,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )6,      (yytype_uint8 const   )0,      (yytype_uint8 const   )5,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )7,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )8,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )5,      (yytype_uint8 const   )4,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )7,      (yytype_uint8 const   )6,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )4,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )5,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )9, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )4,      (yytype_uint8 const   )3,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )5, 
        (yytype_uint8 const   )4,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )4,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )7,      (yytype_uint8 const   )3,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )7,      (yytype_uint8 const   )0,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )4,      (yytype_uint8 const   )0,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )4,      (yytype_uint8 const   )0,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )7,      (yytype_uint8 const   )0,      (yytype_uint8 const   )5,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )2,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )10,      (yytype_uint8 const   )0,      (yytype_uint8 const   )11,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )4,      (yytype_uint8 const   )3,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )0,      (yytype_uint8 const   )5, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )7,      (yytype_uint8 const   )0,      (yytype_uint8 const   )6, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )7,      (yytype_uint8 const   )0,      (yytype_uint8 const   )7, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )7,      (yytype_uint8 const   )0,      (yytype_uint8 const   )7, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )5,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )6,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )4,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )5,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )7,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )4,      (yytype_uint8 const   )4,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )4,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )4,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )4,      (yytype_uint8 const   )4,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )6,      (yytype_uint8 const   )4,      (yytype_uint8 const   )4,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )5,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )6,      (yytype_uint8 const   )3,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )4,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )4,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )0,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )3};
static yytype_uint16 const   yydefact[963]  = 
  {      (yytype_uint16 const   )5,      (yytype_uint16 const   )0,      (yytype_uint16 const   )3,      (yytype_uint16 const   )1, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )312, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )466,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )362,      (yytype_uint16 const   )0,      (yytype_uint16 const   )370,      (yytype_uint16 const   )371, 
        (yytype_uint16 const   )6,      (yytype_uint16 const   )393,      (yytype_uint16 const   )446,      (yytype_uint16 const   )65, 
        (yytype_uint16 const   )372,      (yytype_uint16 const   )0,      (yytype_uint16 const   )46,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )74,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )323, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )77,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )346,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )105,      (yytype_uint16 const   )107,      (yytype_uint16 const   )111, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )376,      (yytype_uint16 const   )377, 
        (yytype_uint16 const   )378,      (yytype_uint16 const   )379,      (yytype_uint16 const   )373,      (yytype_uint16 const   )374, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )380,      (yytype_uint16 const   )375, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )76,      (yytype_uint16 const   )29, 
        (yytype_uint16 const   )458,      (yytype_uint16 const   )365,      (yytype_uint16 const   )0,      (yytype_uint16 const   )395, 
        (yytype_uint16 const   )4,      (yytype_uint16 const   )0,      (yytype_uint16 const   )8,      (yytype_uint16 const   )34, 
        (yytype_uint16 const   )9,      (yytype_uint16 const   )10,      (yytype_uint16 const   )95,      (yytype_uint16 const   )96, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )410,      (yytype_uint16 const   )97, 
        (yytype_uint16 const   )439,      (yytype_uint16 const   )0,      (yytype_uint16 const   )398,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )409,      (yytype_uint16 const   )0,      (yytype_uint16 const   )411, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )442,      (yytype_uint16 const   )0,      (yytype_uint16 const   )438, 
        (yytype_uint16 const   )417,      (yytype_uint16 const   )437,      (yytype_uint16 const   )440,      (yytype_uint16 const   )445, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )303,      (yytype_uint16 const   )394,      (yytype_uint16 const   )6, 
        (yytype_uint16 const   )346,      (yytype_uint16 const   )0,      (yytype_uint16 const   )97,      (yytype_uint16 const   )496, 
        (yytype_uint16 const   )495,      (yytype_uint16 const   )0,      (yytype_uint16 const   )493,      (yytype_uint16 const   )492, 
        (yytype_uint16 const   )318,      (yytype_uint16 const   )284,      (yytype_uint16 const   )285,      (yytype_uint16 const   )286, 
        (yytype_uint16 const   )287,      (yytype_uint16 const   )0,      (yytype_uint16 const   )310,      (yytype_uint16 const   )309, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )307,      (yytype_uint16 const   )306,      (yytype_uint16 const   )305, 
        (yytype_uint16 const   )304,      (yytype_uint16 const   )346,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )347,      (yytype_uint16 const   )0,      (yytype_uint16 const   )263,      (yytype_uint16 const   )413, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )261,      (yytype_uint16 const   )0,      (yytype_uint16 const   )471, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )403,      (yytype_uint16 const   )248,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )347,      (yytype_uint16 const   )353,      (yytype_uint16 const   )246, 
        (yytype_uint16 const   )354,      (yytype_uint16 const   )0,      (yytype_uint16 const   )358,      (yytype_uint16 const   )440, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )311,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )35,      (yytype_uint16 const   )0,      (yytype_uint16 const   )234,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )43,      (yytype_uint16 const   )235,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )55,      (yytype_uint16 const   )0,      (yytype_uint16 const   )57, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )59, 
        (yytype_uint16 const   )410,      (yytype_uint16 const   )0,      (yytype_uint16 const   )411,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )21,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )20,      (yytype_uint16 const   )177,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )176,      (yytype_uint16 const   )108,      (yytype_uint16 const   )106,      (yytype_uint16 const   )182, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )97,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )240,      (yytype_uint16 const   )466, 
        (yytype_uint16 const   )480,      (yytype_uint16 const   )0,      (yytype_uint16 const   )382,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )478,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )15,      (yytype_uint16 const   )0,      (yytype_uint16 const   )397,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )27,      (yytype_uint16 const   )0,      (yytype_uint16 const   )366,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )367,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )330,      (yytype_uint16 const   )0,      (yytype_uint16 const   )18,      (yytype_uint16 const   )109, 
        (yytype_uint16 const   )103,      (yytype_uint16 const   )98,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )268,      (yytype_uint16 const   )0,      (yytype_uint16 const   )270, 
        (yytype_uint16 const   )298,      (yytype_uint16 const   )264,      (yytype_uint16 const   )266,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )66, 
        (yytype_uint16 const   )262,      (yytype_uint16 const   )260,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )344,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )448,      (yytype_uint16 const   )414,      (yytype_uint16 const   )448,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )459,      (yytype_uint16 const   )441,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )313,      (yytype_uint16 const   )0,      (yytype_uint16 const   )349,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )475,      (yytype_uint16 const   )412,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )316,      (yytype_uint16 const   )404,      (yytype_uint16 const   )467,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )349,      (yytype_uint16 const   )0,      (yytype_uint16 const   )368,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )355,      (yytype_uint16 const   )441,      (yytype_uint16 const   )363,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )64,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )236,      (yytype_uint16 const   )239, 
        (yytype_uint16 const   )410,      (yytype_uint16 const   )411,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )56,      (yytype_uint16 const   )58,      (yytype_uint16 const   )84,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )60,      (yytype_uint16 const   )61,      (yytype_uint16 const   )29,      (yytype_uint16 const   )83, 
        (yytype_uint16 const   )23,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )17, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )178,      (yytype_uint16 const   )411,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )62,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )63, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )92,      (yytype_uint16 const   )94, 
        (yytype_uint16 const   )497,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )465,      (yytype_uint16 const   )0,      (yytype_uint16 const   )481,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )381,      (yytype_uint16 const   )479,      (yytype_uint16 const   )393,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )477,      (yytype_uint16 const   )400,      (yytype_uint16 const   )476, 
        (yytype_uint16 const   )396,      (yytype_uint16 const   )5,      (yytype_uint16 const   )12,      (yytype_uint16 const   )13, 
        (yytype_uint16 const   )334,      (yytype_uint16 const   )297,      (yytype_uint16 const   )36,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )317,      (yytype_uint16 const   )399,      (yytype_uint16 const   )7, 
        (yytype_uint16 const   )168,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )101, 
        (yytype_uint16 const   )112,      (yytype_uint16 const   )99,      (yytype_uint16 const   )319,      (yytype_uint16 const   )448, 
        (yytype_uint16 const   )500,      (yytype_uint16 const   )0,      (yytype_uint16 const   )431,      (yytype_uint16 const   )429, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )272, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )301,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )273,      (yytype_uint16 const   )275,      (yytype_uint16 const   )274, 
        (yytype_uint16 const   )289,      (yytype_uint16 const   )288,      (yytype_uint16 const   )291,      (yytype_uint16 const   )290, 
        (yytype_uint16 const   )292,      (yytype_uint16 const   )294,      (yytype_uint16 const   )295,      (yytype_uint16 const   )293, 
        (yytype_uint16 const   )283,      (yytype_uint16 const   )282,      (yytype_uint16 const   )277,      (yytype_uint16 const   )278, 
        (yytype_uint16 const   )276,      (yytype_uint16 const   )279,      (yytype_uint16 const   )280,      (yytype_uint16 const   )281, 
        (yytype_uint16 const   )296,      (yytype_uint16 const   )0,      (yytype_uint16 const   )242,      (yytype_uint16 const   )259, 
        (yytype_uint16 const   )258,      (yytype_uint16 const   )257,      (yytype_uint16 const   )256,      (yytype_uint16 const   )255, 
        (yytype_uint16 const   )254,      (yytype_uint16 const   )253,      (yytype_uint16 const   )252,      (yytype_uint16 const   )251, 
        (yytype_uint16 const   )250,      (yytype_uint16 const   )249,      (yytype_uint16 const   )168,      (yytype_uint16 const   )501, 
        (yytype_uint16 const   )432,      (yytype_uint16 const   )0,      (yytype_uint16 const   )449,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )494, 
        (yytype_uint16 const   )348,      (yytype_uint16 const   )456,      (yytype_uint16 const   )0,      (yytype_uint16 const   )470, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )469,      (yytype_uint16 const   )348,      (yytype_uint16 const   )431, 
        (yytype_uint16 const   )168,      (yytype_uint16 const   )247,      (yytype_uint16 const   )432,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )364,      (yytype_uint16 const   )37,      (yytype_uint16 const   )233,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )49,      (yytype_uint16 const   )237,      (yytype_uint16 const   )71, 
        (yytype_uint16 const   )68,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )53, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )401,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )384, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )383,      (yytype_uint16 const   )26,      (yytype_uint16 const   )391, 
        (yytype_uint16 const   )27,      (yytype_uint16 const   )0,      (yytype_uint16 const   )22,      (yytype_uint16 const   )19, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )175,      (yytype_uint16 const   )183,      (yytype_uint16 const   )180, 
        (yytype_uint16 const   )321,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )498, 
        (yytype_uint16 const   )490,      (yytype_uint16 const   )491,      (yytype_uint16 const   )11,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )462,      (yytype_uint16 const   )0,      (yytype_uint16 const   )461,      (yytype_uint16 const   )315, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )483,      (yytype_uint16 const   )0,      (yytype_uint16 const   )484, 
        (yytype_uint16 const   )486,      (yytype_uint16 const   )332,      (yytype_uint16 const   )3,      (yytype_uint16 const   )5, 
        (yytype_uint16 const   )168,      (yytype_uint16 const   )0,      (yytype_uint16 const   )28,      (yytype_uint16 const   )30, 
        (yytype_uint16 const   )31,      (yytype_uint16 const   )32,      (yytype_uint16 const   )447,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )167,      (yytype_uint16 const   )410,      (yytype_uint16 const   )411, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )350, 
        (yytype_uint16 const   )110,      (yytype_uint16 const   )114,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )163,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )338,      (yytype_uint16 const   )336,      (yytype_uint16 const   )430,      (yytype_uint16 const   )269, 
        (yytype_uint16 const   )271,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )265, 
        (yytype_uint16 const   )267,      (yytype_uint16 const   )0,      (yytype_uint16 const   )243,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )342,      (yytype_uint16 const   )340,      (yytype_uint16 const   )434,      (yytype_uint16 const   )451, 
        (yytype_uint16 const   )415,      (yytype_uint16 const   )450,      (yytype_uint16 const   )455,      (yytype_uint16 const   )443, 
        (yytype_uint16 const   )444,      (yytype_uint16 const   )474,      (yytype_uint16 const   )473,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )356,      (yytype_uint16 const   )40,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )47,      (yytype_uint16 const   )44,      (yytype_uint16 const   )235,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )387,      (yytype_uint16 const   )388, 
        (yytype_uint16 const   )408,      (yytype_uint16 const   )0,      (yytype_uint16 const   )403,      (yytype_uint16 const   )401, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )386,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )24,      (yytype_uint16 const   )179,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )163,      (yytype_uint16 const   )93,      (yytype_uint16 const   )67,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )463,      (yytype_uint16 const   )465,      (yytype_uint16 const   )0,      (yytype_uint16 const   )487, 
        (yytype_uint16 const   )489,      (yytype_uint16 const   )488,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )168,      (yytype_uint16 const   )16,      (yytype_uint16 const   )3,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )171,      (yytype_uint16 const   )331,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )25,      (yytype_uint16 const   )0,      (yytype_uint16 const   )352,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )113,      (yytype_uint16 const   )116,      (yytype_uint16 const   )185, 
        (yytype_uint16 const   )163,      (yytype_uint16 const   )164,      (yytype_uint16 const   )165,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )0,      (yytype_uint16 const   )166,      (yytype_uint16 const   )436, 
        (yytype_uint16 const   )457,      (yytype_uint16 const   )168,      (yytype_uint16 const   )168,      (yytype_uint16 const   )302, 
        (yytype_uint16 const   )299,      (yytype_uint16 const   )244,      (yytype_uint16 const   )345,      (yytype_uint16 const   )168, 
        (yytype_uint16 const   )168,      (yytype_uint16 const   )452,      (yytype_uint16 const   )428,      (yytype_uint16 const   )448, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )468,      (yytype_uint16 const   )369, 
        (yytype_uint16 const   )360,      (yytype_uint16 const   )29,      (yytype_uint16 const   )38,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )238,      (yytype_uint16 const   )118, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )118,      (yytype_uint16 const   )120,      (yytype_uint16 const   )128, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )29,      (yytype_uint16 const   )126,      (yytype_uint16 const   )75, 
        (yytype_uint16 const   )134,      (yytype_uint16 const   )134,      (yytype_uint16 const   )54,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )390,      (yytype_uint16 const   )404,      (yytype_uint16 const   )402,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )385,      (yytype_uint16 const   )392,      (yytype_uint16 const   )0,      (yytype_uint16 const   )181, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )499,      (yytype_uint16 const   )465,      (yytype_uint16 const   )460, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )482,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )14,      (yytype_uint16 const   )335,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )410,      (yytype_uint16 const   )411,      (yytype_uint16 const   )351,      (yytype_uint16 const   )115, 
        (yytype_uint16 const   )185,      (yytype_uint16 const   )0,      (yytype_uint16 const   )217,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )324,      (yytype_uint16 const   )163,      (yytype_uint16 const   )0,      (yytype_uint16 const   )155, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )368, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )424,      (yytype_uint16 const   )427, 
        (yytype_uint16 const   )426,      (yytype_uint16 const   )419,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )472,      (yytype_uint16 const   )357,      (yytype_uint16 const   )27,      (yytype_uint16 const   )143, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )29,      (yytype_uint16 const   )141,      (yytype_uint16 const   )45, 
        (yytype_uint16 const   )50,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )121, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )27,      (yytype_uint16 const   )134, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )134,      (yytype_uint16 const   )0,      (yytype_uint16 const   )407, 
        (yytype_uint16 const   )406,      (yytype_uint16 const   )389,      (yytype_uint16 const   )78,      (yytype_uint16 const   )324, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )241,      (yytype_uint16 const   )485,      (yytype_uint16 const   )333, 
        (yytype_uint16 const   )33,      (yytype_uint16 const   )174,      (yytype_uint16 const   )217,      (yytype_uint16 const   )117, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )221,      (yytype_uint16 const   )222, 
        (yytype_uint16 const   )223,      (yytype_uint16 const   )226,      (yytype_uint16 const   )225,      (yytype_uint16 const   )224, 
        (yytype_uint16 const   )216,      (yytype_uint16 const   )104,      (yytype_uint16 const   )184,      (yytype_uint16 const   )189, 
        (yytype_uint16 const   )186,      (yytype_uint16 const   )0,      (yytype_uint16 const   )215,      (yytype_uint16 const   )219, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )156,      (yytype_uint16 const   )0,      (yytype_uint16 const   )339, 
        (yytype_uint16 const   )337,      (yytype_uint16 const   )300,      (yytype_uint16 const   )245,      (yytype_uint16 const   )343, 
        (yytype_uint16 const   )341,      (yytype_uint16 const   )168,      (yytype_uint16 const   )448,      (yytype_uint16 const   )448, 
        (yytype_uint16 const   )416,      (yytype_uint16 const   )453,      (yytype_uint16 const   )454,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )359,      (yytype_uint16 const   )146,      (yytype_uint16 const   )149,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )27,      (yytype_uint16 const   )235,      (yytype_uint16 const   )119,      (yytype_uint16 const   )72, 
        (yytype_uint16 const   )69,      (yytype_uint16 const   )129,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )130,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )464,      (yytype_uint16 const   )102,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )193,      (yytype_uint16 const   )0,      (yytype_uint16 const   )97,      (yytype_uint16 const   )220, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )188,      (yytype_uint16 const   )29,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )29,      (yytype_uint16 const   )0,      (yytype_uint16 const   )159,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )158,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )418,      (yytype_uint16 const   )361,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )39,      (yytype_uint16 const   )48, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )127,      (yytype_uint16 const   )0,      (yytype_uint16 const   )132,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )139,      (yytype_uint16 const   )140,      (yytype_uint16 const   )137,      (yytype_uint16 const   )131, 
        (yytype_uint16 const   )405,      (yytype_uint16 const   )79,      (yytype_uint16 const   )29,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )195,      (yytype_uint16 const   )197,      (yytype_uint16 const   )192, 
        (yytype_uint16 const   )229,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )27,      (yytype_uint16 const   )0,      (yytype_uint16 const   )328,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )27,      (yytype_uint16 const   )160,      (yytype_uint16 const   )0,      (yytype_uint16 const   )157, 
        (yytype_uint16 const   )425,      (yytype_uint16 const   )422,      (yytype_uint16 const   )423,      (yytype_uint16 const   )420, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )142,      (yytype_uint16 const   )51,      (yytype_uint16 const   )29, 
        (yytype_uint16 const   )124,      (yytype_uint16 const   )73,      (yytype_uint16 const   )70,      (yytype_uint16 const   )133, 
        (yytype_uint16 const   )135,      (yytype_uint16 const   )29,      (yytype_uint16 const   )0,      (yytype_uint16 const   )27, 
        (yytype_uint16 const   )232,      (yytype_uint16 const   )194,      (yytype_uint16 const   )6,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )198,      (yytype_uint16 const   )199,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )207,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )187,      (yytype_uint16 const   )190,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )100,      (yytype_uint16 const   )329,      (yytype_uint16 const   )0,      (yytype_uint16 const   )325, 
        (yytype_uint16 const   )320,      (yytype_uint16 const   )0,      (yytype_uint16 const   )162,      (yytype_uint16 const   )428, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )29,      (yytype_uint16 const   )0,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )27,      (yytype_uint16 const   )29,      (yytype_uint16 const   )27, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )322,      (yytype_uint16 const   )196,      (yytype_uint16 const   )200, 
        (yytype_uint16 const   )201,      (yytype_uint16 const   )211,      (yytype_uint16 const   )0,      (yytype_uint16 const   )202, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )230,      (yytype_uint16 const   )227,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )231,      (yytype_uint16 const   )0,      (yytype_uint16 const   )326,      (yytype_uint16 const   )161, 
        (yytype_uint16 const   )421,      (yytype_uint16 const   )0,      (yytype_uint16 const   )27,      (yytype_uint16 const   )42, 
        (yytype_uint16 const   )144,      (yytype_uint16 const   )29,      (yytype_uint16 const   )122,      (yytype_uint16 const   )52, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )27,      (yytype_uint16 const   )80,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )210,      (yytype_uint16 const   )203,      (yytype_uint16 const   )204,      (yytype_uint16 const   )208, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )163,      (yytype_uint16 const   )327,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )27,      (yytype_uint16 const   )125,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )209,      (yytype_uint16 const   )0,      (yytype_uint16 const   )228,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )147,      (yytype_uint16 const   )145,      (yytype_uint16 const   )0,      (yytype_uint16 const   )29, 
        (yytype_uint16 const   )205,      (yytype_uint16 const   )0,      (yytype_uint16 const   )29,      (yytype_uint16 const   )123, 
        (yytype_uint16 const   )27,      (yytype_uint16 const   )213,      (yytype_uint16 const   )29,      (yytype_uint16 const   )191, 
        (yytype_uint16 const   )27,      (yytype_uint16 const   )81,      (yytype_uint16 const   )27,      (yytype_uint16 const   )86, 
        (yytype_uint16 const   )214,      (yytype_uint16 const   )0,      (yytype_uint16 const   )82,      (yytype_uint16 const   )85, 
        (yytype_uint16 const   )87,      (yytype_uint16 const   )0,      (yytype_uint16 const   )88,      (yytype_uint16 const   )89, 
        (yytype_uint16 const   )0,      (yytype_uint16 const   )0,      (yytype_uint16 const   )90,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )29,      (yytype_uint16 const   )27,      (yytype_uint16 const   )91};
static yytype_int16 const   yydefgoto[198]  = 
  {      (yytype_int16 const   )-1,      (yytype_int16 const   )1,      (yytype_int16 const   )2,      (yytype_int16 const   )4, 
        (yytype_int16 const   )83,      (yytype_int16 const   )84,      (yytype_int16 const   )495,      (yytype_int16 const   )357, 
        (yytype_int16 const   )187,      (yytype_int16 const   )188,      (yytype_int16 const   )85,      (yytype_int16 const   )216, 
        (yytype_int16 const   )363,      (yytype_int16 const   )498,      (yytype_int16 const   )848,      (yytype_int16 const   )87, 
        (yytype_int16 const   )547,      (yytype_int16 const   )691,      (yytype_int16 const   )625,      (yytype_int16 const   )757, 
        (yytype_int16 const   )308,      (yytype_int16 const   )628,      (yytype_int16 const   )167,      (yytype_int16 const   )627, 
        (yytype_int16 const   )550,      (yytype_int16 const   )761,      (yytype_int16 const   )884,      (yytype_int16 const   )557, 
        (yytype_int16 const   )553,      (yytype_int16 const   )807,      (yytype_int16 const   )552,      (yytype_int16 const   )806, 
        (yytype_int16 const   )171,      (yytype_int16 const   )183,      (yytype_int16 const   )774,      (yytype_int16 const   )854, 
        (yytype_int16 const   )927,      (yytype_int16 const   )947,      (yytype_int16 const   )950,      (yytype_int16 const   )951, 
        (yytype_int16 const   )952,      (yytype_int16 const   )956,      (yytype_int16 const   )959,      (yytype_int16 const   )337, 
        (yytype_int16 const   )338,      (yytype_int16 const   )88,      (yytype_int16 const   )89,      (yytype_int16 const   )230, 
        (yytype_int16 const   )90,      (yytype_int16 const   )516,      (yytype_int16 const   )91,      (yytype_int16 const   )513, 
        (yytype_int16 const   )372,      (yytype_int16 const   )92,      (yytype_int16 const   )371,      (yytype_int16 const   )93, 
        (yytype_int16 const   )515,      (yytype_int16 const   )596,      (yytype_int16 const   )597,      (yytype_int16 const   )698, 
        (yytype_int16 const   )633,      (yytype_int16 const   )911,      (yytype_int16 const   )849,      (yytype_int16 const   )639, 
        (yytype_int16 const   )454,      (yytype_int16 const   )642,      (yytype_int16 const   )704,      (yytype_int16 const   )886, 
        (yytype_int16 const   )853,      (yytype_int16 const   )814,      (yytype_int16 const   )695,      (yytype_int16 const   )758, 
        (yytype_int16 const   )924,      (yytype_int16 const   )799,      (yytype_int16 const   )938,      (yytype_int16 const   )802, 
        (yytype_int16 const   )842,      (yytype_int16 const   )603,      (yytype_int16 const   )604,      (yytype_int16 const   )605, 
        (yytype_int16 const   )504,      (yytype_int16 const   )505,      (yytype_int16 const   )191,      (yytype_int16 const   )192, 
        (yytype_int16 const   )196,      (yytype_int16 const   )670,      (yytype_int16 const   )730,      (yytype_int16 const   )781, 
        (yytype_int16 const   )899,      (yytype_int16 const   )731,      (yytype_int16 const   )779,      (yytype_int16 const   )823, 
        (yytype_int16 const   )859,      (yytype_int16 const   )860,      (yytype_int16 const   )861,      (yytype_int16 const   )862, 
        (yytype_int16 const   )917,      (yytype_int16 const   )863,      (yytype_int16 const   )864,      (yytype_int16 const   )865, 
        (yytype_int16 const   )915,      (yytype_int16 const   )943,      (yytype_int16 const   )732,      (yytype_int16 const   )733, 
        (yytype_int16 const   )734,      (yytype_int16 const   )735,      (yytype_int16 const   )825,      (yytype_int16 const   )736, 
        (yytype_int16 const   )165,      (yytype_int16 const   )309,      (yytype_int16 const   )310,      (yytype_int16 const   )551, 
        (yytype_int16 const   )94,      (yytype_int16 const   )344,      (yytype_int16 const   )679,      (yytype_int16 const   )298, 
        (yytype_int16 const   )387,      (yytype_int16 const   )388,      (yytype_int16 const   )382,      (yytype_int16 const   )384, 
        (yytype_int16 const   )386,      (yytype_int16 const   )678,      (yytype_int16 const   )525,      (yytype_int16 const   )129, 
        (yytype_int16 const   )517,      (yytype_int16 const   )572,      (yytype_int16 const   )118,      (yytype_int16 const   )739, 
        (yytype_int16 const   )831,      (yytype_int16 const   )96,      (yytype_int16 const   )368,      (yytype_int16 const   )584, 
        (yytype_int16 const   )496,      (yytype_int16 const   )610,      (yytype_int16 const   )609,      (yytype_int16 const   )616, 
        (yytype_int16 const   )615,      (yytype_int16 const   )422,      (yytype_int16 const   )97,      (yytype_int16 const   )606, 
        (yytype_int16 const   )155,      (yytype_int16 const   )156,      (yytype_int16 const   )443,      (yytype_int16 const   )624, 
        (yytype_int16 const   )689,      (yytype_int16 const   )756,      (yytype_int16 const   )162,      (yytype_int16 const   )219, 
        (yytype_int16 const   )441,      (yytype_int16 const   )98,      (yytype_int16 const   )560,      (yytype_int16 const   )467, 
        (yytype_int16 const   )99,      (yytype_int16 const   )561,      (yytype_int16 const   )294,      (yytype_int16 const   )562, 
        (yytype_int16 const   )181,      (yytype_int16 const   )101,      (yytype_int16 const   )289,      (yytype_int16 const   )102, 
        (yytype_int16 const   )103,      (yytype_int16 const   )428,      (yytype_int16 const   )618,      (yytype_int16 const   )752, 
        (yytype_int16 const   )797,      (yytype_int16 const   )879,      (yytype_int16 const   )683,      (yytype_int16 const   )684, 
        (yytype_int16 const   )749,      (yytype_int16 const   )685,      (yytype_int16 const   )104,      (yytype_int16 const   )105, 
        (yytype_int16 const   )106,      (yytype_int16 const   )107,      (yytype_int16 const   )231,      (yytype_int16 const   )108, 
        (yytype_int16 const   )109,      (yytype_int16 const   )110,      (yytype_int16 const   )111,      (yytype_int16 const   )427, 
        (yytype_int16 const   )536,      (yytype_int16 const   )617,      (yytype_int16 const   )537,      (yytype_int16 const   )538, 
        (yytype_int16 const   )112,      (yytype_int16 const   )485,      (yytype_int16 const   )486,      (yytype_int16 const   )654, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )209,      (yytype_int16 const   )210, 
        (yytype_int16 const   )488,      (yytype_int16 const   )582,      (yytype_int16 const   )113,      (yytype_int16 const   )341, 
        (yytype_int16 const   )575,      (yytype_int16 const   )114};
static yytype_int16 const   yypact[963]  = 
  {      (yytype_int16 const   )-716,      (yytype_int16 const   )65,      (yytype_int16 const   )74,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )1597,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )-101, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )2518,      (yytype_int16 const   )3959,      (yytype_int16 const   )208, 
        (yytype_int16 const   )-62,      (yytype_int16 const   )-51,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )104,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )55, 
        (yytype_int16 const   )92,      (yytype_int16 const   )100,      (yytype_int16 const   )-716,      (yytype_int16 const   )108, 
        (yytype_int16 const   )2649,      (yytype_int16 const   )2780,      (yytype_int16 const   )62,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )110,      (yytype_int16 const   )2911,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-16,      (yytype_int16 const   )45,      (yytype_int16 const   )150, 
        (yytype_int16 const   )-29,      (yytype_int16 const   )122,      (yytype_int16 const   )128,      (yytype_int16 const   )131, 
        (yytype_int16 const   )133,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )137,      (yytype_int16 const   )139,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )310,      (yytype_int16 const   )-34,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )221,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )148,      (yytype_int16 const   )212,      (yytype_int16 const   )263,      (yytype_int16 const   )-55, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )13,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )234,      (yytype_int16 const   )247,      (yytype_int16 const   )-716,      (yytype_int16 const   )292, 
        (yytype_int16 const   )251,      (yytype_int16 const   )182,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )4520,      (yytype_int16 const   )-716,      (yytype_int16 const   )48,      (yytype_int16 const   )742, 
        (yytype_int16 const   )183,      (yytype_int16 const   )-716,      (yytype_int16 const   )191,      (yytype_int16 const   )277, 
        (yytype_int16 const   )217,      (yytype_int16 const   )-716,      (yytype_int16 const   )-27,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-11,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )254,      (yytype_int16 const   )210,      (yytype_int16 const   )292,      (yytype_int16 const   )5201, 
        (yytype_int16 const   )5201,      (yytype_int16 const   )3959,      (yytype_int16 const   )5201,      (yytype_int16 const   )5201, 
        (yytype_int16 const   )5301,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )316, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )219,      (yytype_int16 const   )221, 
        (yytype_int16 const   )61,      (yytype_int16 const   )248,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )253,      (yytype_int16 const   )-716,      (yytype_int16 const   )0,      (yytype_int16 const   )5060, 
        (yytype_int16 const   )255,      (yytype_int16 const   )415,      (yytype_int16 const   )-716,      (yytype_int16 const   )284, 
        (yytype_int16 const   )221,      (yytype_int16 const   )294,      (yytype_int16 const   )303,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )306,      (yytype_int16 const   )336,      (yytype_int16 const   )-18, 
        (yytype_int16 const   )-11,      (yytype_int16 const   )3042,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )14,      (yytype_int16 const   )5201,      (yytype_int16 const   )2387, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )315, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )4561,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )4604,      (yytype_int16 const   )328,      (yytype_int16 const   )458,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )332,      (yytype_int16 const   )5201,      (yytype_int16 const   )358,      (yytype_int16 const   )340, 
        (yytype_int16 const   )4645,      (yytype_int16 const   )221,      (yytype_int16 const   )23,      (yytype_int16 const   )15, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )216,      (yytype_int16 const   )17, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )471, 
        (yytype_int16 const   )18,      (yytype_int16 const   )292,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )338,      (yytype_int16 const   )-716,      (yytype_int16 const   )2518, 
        (yytype_int16 const   )49,      (yytype_int16 const   )54,      (yytype_int16 const   )-716,      (yytype_int16 const   )4090, 
        (yytype_int16 const   )0,      (yytype_int16 const   )320,      (yytype_int16 const   )-716,      (yytype_int16 const   )221, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-72,      (yytype_int16 const   )-52,      (yytype_int16 const   )4686, 
        (yytype_int16 const   )343,      (yytype_int16 const   )3959,      (yytype_int16 const   )151,      (yytype_int16 const   )333, 
        (yytype_int16 const   )330,      (yytype_int16 const   )151,      (yytype_int16 const   )-1,      (yytype_int16 const   )422, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )429,      (yytype_int16 const   )-716,      (yytype_int16 const   )383, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )4,      (yytype_int16 const   )449, 
        (yytype_int16 const   )-5,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )485,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )208,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3173,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )38, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )148,      (yytype_int16 const   )-28,      (yytype_int16 const   )364,      (yytype_int16 const   )4729, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )221,      (yytype_int16 const   )241,      (yytype_int16 const   )154, 
        (yytype_int16 const   )154,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3304, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )3435,      (yytype_int16 const   )-716,      (yytype_int16 const   )221, 
        (yytype_int16 const   )294,      (yytype_int16 const   )-3,      (yytype_int16 const   )365,      (yytype_int16 const   )-3, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-12,      (yytype_int16 const   )-716,      (yytype_int16 const   )4770, 
        (yytype_int16 const   )4812,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )433, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )367,      (yytype_int16 const   )508,      (yytype_int16 const   )5201, 
        (yytype_int16 const   )438,      (yytype_int16 const   )1184,      (yytype_int16 const   )448,      (yytype_int16 const   )4853, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )981, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )25,      (yytype_int16 const   )462,      (yytype_int16 const   )11,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-16, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )981,      (yytype_int16 const   )472,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )395,      (yytype_int16 const   )30,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )32,      (yytype_int16 const   )397,      (yytype_int16 const   )399, 
        (yytype_int16 const   )179,      (yytype_int16 const   )401,      (yytype_int16 const   )-716,      (yytype_int16 const   )475, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )494,      (yytype_int16 const   )4223, 
        (yytype_int16 const   )404,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-45,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )1728, 
        (yytype_int16 const   )4264,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )3566,      (yytype_int16 const   )546,      (yytype_int16 const   )-13,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )440,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )416,      (yytype_int16 const   )3959,      (yytype_int16 const   )419,      (yytype_int16 const   )-12, 
        (yytype_int16 const   )424,      (yytype_int16 const   )-11,      (yytype_int16 const   )3959,      (yytype_int16 const   )5278, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )2568,      (yytype_int16 const   )2699,      (yytype_int16 const   )2828, 
        (yytype_int16 const   )2959,      (yytype_int16 const   )2959,      (yytype_int16 const   )2959,      (yytype_int16 const   )2959, 
        (yytype_int16 const   )777,      (yytype_int16 const   )777,      (yytype_int16 const   )777,      (yytype_int16 const   )777, 
        (yytype_int16 const   )492,      (yytype_int16 const   )492,      (yytype_int16 const   )268,      (yytype_int16 const   )268, 
        (yytype_int16 const   )268,      (yytype_int16 const   )316,      (yytype_int16 const   )316,      (yytype_int16 const   )316, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-17,      (yytype_int16 const   )5301,      (yytype_int16 const   )5301, 
        (yytype_int16 const   )5301,      (yytype_int16 const   )5301,      (yytype_int16 const   )5301,      (yytype_int16 const   )5301, 
        (yytype_int16 const   )5301,      (yytype_int16 const   )5301,      (yytype_int16 const   )5301,      (yytype_int16 const   )5301, 
        (yytype_int16 const   )5301,      (yytype_int16 const   )5301,      (yytype_int16 const   )3566,      (yytype_int16 const   )416, 
        (yytype_int16 const   )425,      (yytype_int16 const   )427,      (yytype_int16 const   )5201,      (yytype_int16 const   )408, 
        (yytype_int16 const   )154,      (yytype_int16 const   )409,      (yytype_int16 const   )4305,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )272,      (yytype_int16 const   )-716,      (yytype_int16 const   )0,      (yytype_int16 const   )5201, 
        (yytype_int16 const   )0,      (yytype_int16 const   )5101,      (yytype_int16 const   )294,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )3566,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )154, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )555,      (yytype_int16 const   )5201,      (yytype_int16 const   )437, 
        (yytype_int16 const   )4894,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )569,      (yytype_int16 const   )33,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )981,      (yytype_int16 const   )981,      (yytype_int16 const   )981,      (yytype_int16 const   )439, 
        (yytype_int16 const   )120,      (yytype_int16 const   )441,      (yytype_int16 const   )221,      (yytype_int16 const   )-43, 
        (yytype_int16 const   )450,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )434,      (yytype_int16 const   )525,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )4350,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )584, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )0,      (yytype_int16 const   )455,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )459, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )34,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )228,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )454,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )3566,      (yytype_int16 const   )461,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )0, 
        (yytype_int16 const   )463,      (yytype_int16 const   )603,      (yytype_int16 const   )37,      (yytype_int16 const   )199, 
        (yytype_int16 const   )981,      (yytype_int16 const   )464,      (yytype_int16 const   )221,      (yytype_int16 const   )294, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )497,      (yytype_int16 const   )-13,      (yytype_int16 const   )480, 
        (yytype_int16 const   )465,      (yytype_int16 const   )298,      (yytype_int16 const   )468,      (yytype_int16 const   )4391, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-12,      (yytype_int16 const   )5241, 
        (yytype_int16 const   )5301,      (yytype_int16 const   )3959,      (yytype_int16 const   )5160,      (yytype_int16 const   )5346, 
        (yytype_int16 const   )5367,      (yytype_int16 const   )208,      (yytype_int16 const   )-716,      (yytype_int16 const   )483, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-6,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3697, 
        (yytype_int16 const   )484,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )2387, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )0,      (yytype_int16 const   )171,      (yytype_int16 const   )981,      (yytype_int16 const   )564, 
        (yytype_int16 const   )1860,      (yytype_int16 const   )-2,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )512,      (yytype_int16 const   )482,      (yytype_int16 const   )630,      (yytype_int16 const   )981, 
        (yytype_int16 const   )498,      (yytype_int16 const   )221,      (yytype_int16 const   )112,      (yytype_int16 const   )570, 
        (yytype_int16 const   )540,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )981, 
        (yytype_int16 const   )298,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )0, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )179,      (yytype_int16 const   )632,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )488,      (yytype_int16 const   )1138, 
        (yytype_int16 const   )3566,      (yytype_int16 const   )-716,      (yytype_int16 const   )495,      (yytype_int16 const   )499, 
        (yytype_int16 const   )503,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3828, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )221,      (yytype_int16 const   )294,      (yytype_int16 const   )-13, 
        (yytype_int16 const   )502,      (yytype_int16 const   )648,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )298,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )509, 
        (yytype_int16 const   )650,      (yytype_int16 const   )172,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )3566,      (yytype_int16 const   )3566,      (yytype_int16 const   )5324, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3566, 
        (yytype_int16 const   )3566,      (yytype_int16 const   )-716,      (yytype_int16 const   )511,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )0,      (yytype_int16 const   )5201,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )1992,      (yytype_int16 const   )513,      (yytype_int16 const   )5201,      (yytype_int16 const   )538, 
        (yytype_int16 const   )0,      (yytype_int16 const   )538,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )652,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )516,      (yytype_int16 const   )520,      (yytype_int16 const   )-716,      (yytype_int16 const   )981, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )981,      (yytype_int16 const   )-716,      (yytype_int16 const   )518, 
        (yytype_int16 const   )121,      (yytype_int16 const   )-716,      (yytype_int16 const   )524,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )536,      (yytype_int16 const   )-716,      (yytype_int16 const   )179,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )510,      (yytype_int16 const   )545, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )548,      (yytype_int16 const   )0, 
        (yytype_int16 const   )39,      (yytype_int16 const   )843,      (yytype_int16 const   )294,      (yytype_int16 const   )648, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-13,      (yytype_int16 const   )517,      (yytype_int16 const   )550, 
        (yytype_int16 const   )597,      (yytype_int16 const   )203,      (yytype_int16 const   )629,      (yytype_int16 const   )691, 
        (yytype_int16 const   )556,      (yytype_int16 const   )557,      (yytype_int16 const   )3959,      (yytype_int16 const   )365, 
        (yytype_int16 const   )559,      (yytype_int16 const   )560,      (yytype_int16 const   )-716,      (yytype_int16 const   )644, 
        (yytype_int16 const   )651,      (yytype_int16 const   )-716,      (yytype_int16 const   )562,      (yytype_int16 const   )4432, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )588,      (yytype_int16 const   )276,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )4936,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )171,      (yytype_int16 const   )571,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )573,      (yytype_int16 const   )981,      (yytype_int16 const   )625,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )307,      (yytype_int16 const   )-716,      (yytype_int16 const   )-33,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )596,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )597, 
        (yytype_int16 const   )43,      (yytype_int16 const   )5301,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )631,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )653,      (yytype_int16 const   )-13,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )254,      (yytype_int16 const   )414,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )19,      (yytype_int16 const   )574,      (yytype_int16 const   )576,      (yytype_int16 const   )575, 
        (yytype_int16 const   )197,      (yytype_int16 const   )715,      (yytype_int16 const   )981,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )5324,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )3566,      (yytype_int16 const   )3959,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )606,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )154, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )360,      (yytype_int16 const   )581, 
        (yytype_int16 const   )662,      (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )582,      (yytype_int16 const   )337, 
        (yytype_int16 const   )595,      (yytype_int16 const   )3959,      (yytype_int16 const   )6,      (yytype_int16 const   )-9, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )981,      (yytype_int16 const   )-13,      (yytype_int16 const   )600, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )734,      (yytype_int16 const   )9, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )676,      (yytype_int16 const   )292,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )682,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )222, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )694,      (yytype_int16 const   )756,      (yytype_int16 const   )981, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )620,      (yytype_int16 const   )616,      (yytype_int16 const   )618, 
        (yytype_int16 const   )154,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )378, 
        (yytype_int16 const   )627,      (yytype_int16 const   )2387,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )623,      (yytype_int16 const   )633,      (yytype_int16 const   )2124,      (yytype_int16 const   )2124, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )626,      (yytype_int16 const   )-716,      (yytype_int16 const   )4479, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )981, 
        (yytype_int16 const   )-13,      (yytype_int16 const   )-716,      (yytype_int16 const   )84,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )767,      (yytype_int16 const   )28,      (yytype_int16 const   )710,      (yytype_int16 const   )773, 
        (yytype_int16 const   )634,      (yytype_int16 const   )716,      (yytype_int16 const   )-716,      (yytype_int16 const   )44, 
        (yytype_int16 const   )635,      (yytype_int16 const   )778,      (yytype_int16 const   )981,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )641,      (yytype_int16 const   )768,      (yytype_int16 const   )725,      (yytype_int16 const   )3959, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )722,      (yytype_int16 const   )645, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )714,      (yytype_int16 const   )654, 
        (yytype_int16 const   )84,      (yytype_int16 const   )-716,      (yytype_int16 const   )655,      (yytype_int16 const   )718, 
        (yytype_int16 const   )700,      (yytype_int16 const   )658,      (yytype_int16 const   )666,      (yytype_int16 const   )981, 
        (yytype_int16 const   )739,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )981, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )224,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )981,      (yytype_int16 const   )-716,      (yytype_int16 const   )511, 
        (yytype_int16 const   )3959,      (yytype_int16 const   )-716,      (yytype_int16 const   )677,      (yytype_int16 const   )4977, 
        (yytype_int16 const   )2256,      (yytype_int16 const   )740,      (yytype_int16 const   )-716,      (yytype_int16 const   )302, 
        (yytype_int16 const   )679,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )493,      (yytype_int16 const   )-13,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )759,      (yytype_int16 const   )-716,      (yytype_int16 const   )822,      (yytype_int16 const   )687, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )766,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )5018,      (yytype_int16 const   )774,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )690,      (yytype_int16 const   )322,      (yytype_int16 const   )-716,      (yytype_int16 const   )779, 
        (yytype_int16 const   )781,      (yytype_int16 const   )837,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )981,      (yytype_int16 const   )298,      (yytype_int16 const   )-716,      (yytype_int16 const   )823, 
        (yytype_int16 const   )2387,      (yytype_int16 const   )770,      (yytype_int16 const   )-716,      (yytype_int16 const   )701, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-13,      (yytype_int16 const   )-716,      (yytype_int16 const   )719, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )717,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )305,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )720,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )370,      (yytype_int16 const   )-716,      (yytype_int16 const   )723,      (yytype_int16 const   )775, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )721,      (yytype_int16 const   )-716,      (yytype_int16 const   )775, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-13,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )799,      (yytype_int16 const   )730,      (yytype_int16 const   )-716,      (yytype_int16 const   )729, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )731,      (yytype_int16 const   )-716};
static yytype_int16 const   yypgoto[198]  = 
  {      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-337,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-23,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )549,      (yytype_int16 const   )-716,      (yytype_int16 const   )-291, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )24,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-69,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )410,      (yytype_int16 const   )522,      (yytype_int16 const   )523,      (yytype_int16 const   )-116, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )295,      (yytype_int16 const   )258, 
        (yytype_int16 const   )195,      (yytype_int16 const   )-716,      (yytype_int16 const   )86,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-394,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )83,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-561,      (yytype_int16 const   )-716,      (yytype_int16 const   )223, 
        (yytype_int16 const   )-410,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )568, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )227,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )47,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-715,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-535,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-31,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )3,      (yytype_int16 const   )189, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )755,      (yytype_int16 const   )-362, 
        (yytype_int16 const   )-245,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )225,      (yytype_int16 const   )12,      (yytype_int16 const   )514,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )346,      (yytype_int16 const   )369,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )671,      (yytype_int16 const   )761,      (yytype_int16 const   )-420,      (yytype_int16 const   )443, 
        (yytype_int16 const   )933,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )50,      (yytype_int16 const   )-197,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )40,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-22,      (yytype_int16 const   )-24,      (yytype_int16 const   )-716,      (yytype_int16 const   )-269, 
        (yytype_int16 const   )-433,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )153, 
        (yytype_int16 const   )-21,      (yytype_int16 const   )304,      (yytype_int16 const   )375,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )743,      (yytype_int16 const   )-716,      (yytype_int16 const   )396,      (yytype_int16 const   )281, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716,      (yytype_int16 const   )-716, 
        (yytype_int16 const   )-716,      (yytype_int16 const   )-716};
static yytype_int16 const   yytable[5417]  = 
  {      (yytype_int16 const   )140,      (yytype_int16 const   )140,      (yytype_int16 const   )282,      (yytype_int16 const   )159, 
        (yytype_int16 const   )153,      (yytype_int16 const   )158,      (yytype_int16 const   )160,      (yytype_int16 const   )95, 
        (yytype_int16 const   )512,      (yytype_int16 const   )429,      (yytype_int16 const   )545,      (yytype_int16 const   )652, 
        (yytype_int16 const   )531,      (yytype_int16 const   )408,      (yytype_int16 const   )541,      (yytype_int16 const   )629, 
        (yytype_int16 const   )542,      (yytype_int16 const   )820,      (yytype_int16 const   )180,      (yytype_int16 const   )783, 
        (yytype_int16 const   )494,      (yytype_int16 const   )225,      (yytype_int16 const   )305,      (yytype_int16 const   )326, 
        (yytype_int16 const   )640,      (yytype_int16 const   )331,      (yytype_int16 const   )334,      (yytype_int16 const   )784, 
        (yytype_int16 const   )86,      (yytype_int16 const   )186,      (yytype_int16 const   )544,      (yytype_int16 const   )468, 
        (yytype_int16 const   )812,      (yytype_int16 const   )278,      (yytype_int16 const   )278,      (yytype_int16 const   )378, 
        (yytype_int16 const   )868,      (yytype_int16 const   )115,      (yytype_int16 const   )477,      (yytype_int16 const   )671, 
        (yytype_int16 const   )479,      (yytype_int16 const   )555,      (yytype_int16 const   )577,      (yytype_int16 const   )278, 
        (yytype_int16 const   )195,      (yytype_int16 const   )-169,      (yytype_int16 const   )529,      (yytype_int16 const   )-172, 
        (yytype_int16 const   )121,      (yytype_int16 const   )278,      (yytype_int16 const   )213,      (yytype_int16 const   )577, 
        (yytype_int16 const   )874,      (yytype_int16 const   )214,      (yytype_int16 const   )115,      (yytype_int16 const   )619, 
        (yytype_int16 const   )34,      (yytype_int16 const   )189,      (yytype_int16 const   )115,      (yytype_int16 const   )197, 
        (yytype_int16 const   )769,      (yytype_int16 const   )770,      (yytype_int16 const   )34,      (yytype_int16 const   )144, 
        (yytype_int16 const   )144,      (yytype_int16 const   )3,      (yytype_int16 const   )376,      (yytype_int16 const   )157, 
        (yytype_int16 const   )34,      (yytype_int16 const   )47,      (yytype_int16 const   )34,      (yytype_int16 const   )115, 
        (yytype_int16 const   )204,      (yytype_int16 const   )34,      (yytype_int16 const   )-2,      (yytype_int16 const   )373, 
        (yytype_int16 const   )223,      (yytype_int16 const   )353,      (yytype_int16 const   )424,      (yytype_int16 const   )358, 
        (yytype_int16 const   )359,      (yytype_int16 const   )336,      (yytype_int16 const   )115,      (yytype_int16 const   )589, 
        (yytype_int16 const   )769,      (yytype_int16 const   )770,      (yytype_int16 const   )587,      (yytype_int16 const   )161, 
        (yytype_int16 const   )281,      (yytype_int16 const   )-347,      (yytype_int16 const   )378,      (yytype_int16 const   )424, 
        (yytype_int16 const   )-349,      (yytype_int16 const   )223,      (yytype_int16 const   )224,      (yytype_int16 const   )137, 
        (yytype_int16 const   )223,      (yytype_int16 const   )360,      (yytype_int16 const   )163,      (yytype_int16 const   )-348, 
        (yytype_int16 const   )439,      (yytype_int16 const   )-347,      (yytype_int16 const   )442,      (yytype_int16 const   )223, 
        (yytype_int16 const   )493,      (yytype_int16 const   )223,      (yytype_int16 const   )518,      (yytype_int16 const   )260, 
        (yytype_int16 const   )261,      (yytype_int16 const   )423,      (yytype_int16 const   )346,      (yytype_int16 const   )34, 
        (yytype_int16 const   )137,      (yytype_int16 const   )325,      (yytype_int16 const   )211,      (yytype_int16 const   )469, 
        (yytype_int16 const   )286,      (yytype_int16 const   )-433,      (yytype_int16 const   )212,      (yytype_int16 const   )197, 
        (yytype_int16 const   )772,      (yytype_int16 const   )-430,      (yytype_int16 const   )-429,      (yytype_int16 const   )140, 
        (yytype_int16 const   )279,      (yytype_int16 const   )279,      (yytype_int16 const   )-433,      (yytype_int16 const   )204, 
        (yytype_int16 const   )138,      (yytype_int16 const   )296,      (yytype_int16 const   )164,      (yytype_int16 const   )139, 
        (yytype_int16 const   )509,      (yytype_int16 const   )177,      (yytype_int16 const   )279,      (yytype_int16 const   )510, 
        (yytype_int16 const   )301,      (yytype_int16 const   )80,      (yytype_int16 const   )190,      (yytype_int16 const   )312, 
        (yytype_int16 const   )279,      (yytype_int16 const   )207,      (yytype_int16 const   )208,      (yytype_int16 const   )280, 
        (yytype_int16 const   )815,      (yytype_int16 const   )138,      (yytype_int16 const   )620,      (yytype_int16 const   )377, 
        (yytype_int16 const   )139,      (yytype_int16 const   )80,      (yytype_int16 const   )641,      (yytype_int16 const   )80, 
        (yytype_int16 const   )598,      (yytype_int16 const   )374,      (yytype_int16 const   )80,      (yytype_int16 const   )858, 
        (yytype_int16 const   )366,      (yytype_int16 const   )813,      (yytype_int16 const   )586,      (yytype_int16 const   )185, 
        (yytype_int16 const   )821,      (yytype_int16 const   )822,      (yytype_int16 const   )324,      (yytype_int16 const   )193, 
        (yytype_int16 const   )226,      (yytype_int16 const   )306,      (yytype_int16 const   )327,      (yytype_int16 const   )140, 
        (yytype_int16 const   )332,      (yytype_int16 const   )335,      (yytype_int16 const   )785,      (yytype_int16 const   )223, 
        (yytype_int16 const   )347,      (yytype_int16 const   )223,      (yytype_int16 const   )659,      (yytype_int16 const   )140, 
        (yytype_int16 const   )140,      (yytype_int16 const   )140,      (yytype_int16 const   )916,      (yytype_int16 const   )869, 
        (yytype_int16 const   )478,      (yytype_int16 const   )178,      (yytype_int16 const   )480,      (yytype_int16 const   )556, 
        (yytype_int16 const   )578,      (yytype_int16 const   )140,      (yytype_int16 const   )144,      (yytype_int16 const   )-169, 
        (yytype_int16 const   )356,      (yytype_int16 const   )-172,      (yytype_int16 const   )377,      (yytype_int16 const   )307, 
        (yytype_int16 const   )80,      (yytype_int16 const   )776,      (yytype_int16 const   )875,      (yytype_int16 const   )348, 
        (yytype_int16 const   )207,      (yytype_int16 const   )208,      (yytype_int16 const   )564,      (yytype_int16 const   )676, 
        (yytype_int16 const   )677,      (yytype_int16 const   )688,      (yytype_int16 const   )632,      (yytype_int16 const   )674, 
        (yytype_int16 const   )168,      (yytype_int16 const   )680,      (yytype_int16 const   )681,      (yytype_int16 const   )-170, 
        (yytype_int16 const   )379,      (yytype_int16 const   )223,      (yytype_int16 const   )224,      (yytype_int16 const   )381, 
        (yytype_int16 const   )262,      (yytype_int16 const   )263,      (yytype_int16 const   )264,      (yytype_int16 const   )265, 
        (yytype_int16 const   )266,      (yytype_int16 const   )267,      (yytype_int16 const   )268,      (yytype_int16 const   )269, 
        (yytype_int16 const   )270,      (yytype_int16 const   )271,      (yytype_int16 const   )272,      (yytype_int16 const   )273, 
        (yytype_int16 const   )204,      (yytype_int16 const   )433,      (yytype_int16 const   )805,      (yytype_int16 const   )34, 
        (yytype_int16 const   )789,      (yytype_int16 const   )509,      (yytype_int16 const   )144,      (yytype_int16 const   )535, 
        (yytype_int16 const   )510,      (yytype_int16 const   )598,      (yytype_int16 const   )159,      (yytype_int16 const   )153, 
        (yytype_int16 const   )158,      (yytype_int16 const   )160,      (yytype_int16 const   )144,      (yytype_int16 const   )144, 
        (yytype_int16 const   )144,      (yytype_int16 const   )169,      (yytype_int16 const   )115,      (yytype_int16 const   )717, 
        (yytype_int16 const   )34,      (yytype_int16 const   )675,      (yytype_int16 const   )535,      (yytype_int16 const   )706, 
        (yytype_int16 const   )144,      (yytype_int16 const   )170,      (yytype_int16 const   )115,      (yytype_int16 const   )379, 
        (yytype_int16 const   )34,      (yytype_int16 const   )829,      (yytype_int16 const   )381,      (yytype_int16 const   )901, 
        (yytype_int16 const   )-349,      (yytype_int16 const   )172,      (yytype_int16 const   )-413,      (yytype_int16 const   )-413, 
        (yytype_int16 const   )223,      (yytype_int16 const   )206,      (yytype_int16 const   )432,      (yytype_int16 const   )379, 
        (yytype_int16 const   )379,      (yytype_int16 const   )-348,      (yytype_int16 const   )381,      (yytype_int16 const   )381, 
        (yytype_int16 const   )194,      (yytype_int16 const   )223,      (yytype_int16 const   )790,      (yytype_int16 const   )198, 
        (yytype_int16 const   )438,      (yytype_int16 const   )379,      (yytype_int16 const   )115,      (yytype_int16 const   )379, 
        (yytype_int16 const   )381,      (yytype_int16 const   )199,      (yytype_int16 const   )381,      (yytype_int16 const   )115, 
        (yytype_int16 const   )200,      (yytype_int16 const   )34,      (yytype_int16 const   )201,      (yytype_int16 const   )137, 
        (yytype_int16 const   )613,      (yytype_int16 const   )204,      (yytype_int16 const   )202,      (yytype_int16 const   )115, 
        (yytype_int16 const   )203,      (yytype_int16 const   )34,      (yytype_int16 const   )218,      (yytype_int16 const   )137, 
        (yytype_int16 const   )115,      (yytype_int16 const   )207,      (yytype_int16 const   )208,      (yytype_int16 const   )830, 
        (yytype_int16 const   )463,      (yytype_int16 const   )902,      (yytype_int16 const   )157,      (yytype_int16 const   )579, 
        (yytype_int16 const   )217,      (yytype_int16 const   )580,      (yytype_int16 const   )581,      (yytype_int16 const   )186, 
        (yytype_int16 const   )483,      (yytype_int16 const   )227,      (yytype_int16 const   )377,      (yytype_int16 const   )719, 
        (yytype_int16 const   )80,      (yytype_int16 const   )767,      (yytype_int16 const   )463,      (yytype_int16 const   )771, 
        (yytype_int16 const   )-435,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )138,      (yytype_int16 const   )258,      (yytype_int16 const   )228,      (yytype_int16 const   )139, 
        (yytype_int16 const   )137,      (yytype_int16 const   )140,      (yytype_int16 const   )798,      (yytype_int16 const   )229, 
        (yytype_int16 const   )138,      (yytype_int16 const   )80,      (yytype_int16 const   )232,      (yytype_int16 const   )139, 
        (yytype_int16 const   )137,      (yytype_int16 const   )601,      (yytype_int16 const   )602,      (yytype_int16 const   )465, 
        (yytype_int16 const   )274,      (yytype_int16 const   )80,      (yytype_int16 const   )690,      (yytype_int16 const   )275, 
        (yytype_int16 const   )204,      (yytype_int16 const   )506,      (yytype_int16 const   )276,      (yytype_int16 const   )793, 
        (yytype_int16 const   )277,      (yytype_int16 const   )221,      (yytype_int16 const   )-41,      (yytype_int16 const   )-41, 
        (yytype_int16 const   )-41,      (yytype_int16 const   )465,      (yytype_int16 const   )702,      (yytype_int16 const   )511, 
        (yytype_int16 const   )509,      (yytype_int16 const   )-170,      (yytype_int16 const   )686,      (yytype_int16 const   )510, 
        (yytype_int16 const   )47,      (yytype_int16 const   )151,      (yytype_int16 const   )207,      (yytype_int16 const   )208, 
        (yytype_int16 const   )152,      (yytype_int16 const   )522,      (yytype_int16 const   )211,      (yytype_int16 const   )780, 
        (yytype_int16 const   )931,      (yytype_int16 const   )138,      (yytype_int16 const   )80,      (yytype_int16 const   )839, 
        (yytype_int16 const   )139,      (yytype_int16 const   )258,      (yytype_int16 const   )95,      (yytype_int16 const   )285, 
        (yytype_int16 const   )328,      (yytype_int16 const   )115,      (yytype_int16 const   )80,      (yytype_int16 const   )262, 
        (yytype_int16 const   )263,      (yytype_int16 const   )264,      (yytype_int16 const   )265,      (yytype_int16 const   )266, 
        (yytype_int16 const   )267,      (yytype_int16 const   )268,      (yytype_int16 const   )269,      (yytype_int16 const   )270, 
        (yytype_int16 const   )271,      (yytype_int16 const   )272,      (yytype_int16 const   )273,      (yytype_int16 const   )204, 
        (yytype_int16 const   )144,      (yytype_int16 const   )380,      (yytype_int16 const   )140,      (yytype_int16 const   )499, 
        (yytype_int16 const   )205,      (yytype_int16 const   )223,      (yytype_int16 const   )360,      (yytype_int16 const   )506, 
        (yytype_int16 const   )287,      (yytype_int16 const   )204,      (yytype_int16 const   )-138,      (yytype_int16 const   )-138, 
        (yytype_int16 const   )-138,      (yytype_int16 const   )288,      (yytype_int16 const   )353,      (yytype_int16 const   )768, 
        (yytype_int16 const   )769,      (yytype_int16 const   )770,      (yytype_int16 const   )760,      (yytype_int16 const   )204, 
        (yytype_int16 const   )379,      (yytype_int16 const   )207,      (yytype_int16 const   )208,      (yytype_int16 const   )381, 
        (yytype_int16 const   )353,      (yytype_int16 const   )506,      (yytype_int16 const   )292,      (yytype_int16 const   )140, 
        (yytype_int16 const   )817,      (yytype_int16 const   )140,      (yytype_int16 const   )-136,      (yytype_int16 const   )-136, 
        (yytype_int16 const   )-136,      (yytype_int16 const   )-413,      (yytype_int16 const   )-413,      (yytype_int16 const   )379, 
        (yytype_int16 const   )223,      (yytype_int16 const   )493,      (yytype_int16 const   )381,      (yytype_int16 const   )293, 
        (yytype_int16 const   )601,      (yytype_int16 const   )602,      (yytype_int16 const   )800,      (yytype_int16 const   )801, 
        (yytype_int16 const   )425,      (yytype_int16 const   )809,      (yytype_int16 const   )769,      (yytype_int16 const   )770, 
        (yytype_int16 const   )295,      (yytype_int16 const   )463,      (yytype_int16 const   )463,      (yytype_int16 const   )463, 
        (yytype_int16 const   )-148,      (yytype_int16 const   )-148,      (yytype_int16 const   )-148,      (yytype_int16 const   )566, 
        (yytype_int16 const   )380,      (yytype_int16 const   )425,      (yytype_int16 const   )223,      (yytype_int16 const   )509, 
        (yytype_int16 const   )840,      (yytype_int16 const   )841,      (yytype_int16 const   )510,      (yytype_int16 const   )297, 
        (yytype_int16 const   )-154,      (yytype_int16 const   )144,      (yytype_int16 const   )299,      (yytype_int16 const   )206, 
        (yytype_int16 const   )207,      (yytype_int16 const   )208,      (yytype_int16 const   )140,      (yytype_int16 const   )-138, 
        (yytype_int16 const   )941,      (yytype_int16 const   )942,      (yytype_int16 const   )857,      (yytype_int16 const   )300, 
        (yytype_int16 const   )866,      (yytype_int16 const   )354,      (yytype_int16 const   )207,      (yytype_int16 const   )208, 
        (yytype_int16 const   )314,      (yytype_int16 const   )506,      (yytype_int16 const   )142,      (yytype_int16 const   )145, 
        (yytype_int16 const   )465,      (yytype_int16 const   )465,      (yytype_int16 const   )465,      (yytype_int16 const   )319, 
        (yytype_int16 const   )207,      (yytype_int16 const   )208,      (yytype_int16 const   )144,      (yytype_int16 const   )-136, 
        (yytype_int16 const   )144,      (yytype_int16 const   )220,      (yytype_int16 const   )222,      (yytype_int16 const   )318, 
        (yytype_int16 const   )140,      (yytype_int16 const   )794,      (yytype_int16 const   )795,      (yytype_int16 const   )320, 
        (yytype_int16 const   )333,      (yytype_int16 const   )463,      (yytype_int16 const   )349,      (yytype_int16 const   )594, 
        (yytype_int16 const   )343,      (yytype_int16 const   )365,      (yytype_int16 const   )355,      (yytype_int16 const   )511, 
        (yytype_int16 const   )322,      (yytype_int16 const   )367,      (yytype_int16 const   )511,      (yytype_int16 const   )828, 
        (yytype_int16 const   )362,      (yytype_int16 const   )832,      (yytype_int16 const   )866,      (yytype_int16 const   )349, 
        (yytype_int16 const   )369,      (yytype_int16 const   )355,      (yytype_int16 const   )349,      (yytype_int16 const   )355, 
        (yytype_int16 const   )370,      (yytype_int16 const   )159,      (yytype_int16 const   )153,      (yytype_int16 const   )158, 
        (yytype_int16 const   )160,      (yytype_int16 const   )321,      (yytype_int16 const   )375,      (yytype_int16 const   )385, 
        (yytype_int16 const   )-218,      (yytype_int16 const   )374,      (yytype_int16 const   )440,      (yytype_int16 const   )447, 
        (yytype_int16 const   )450,      (yytype_int16 const   )144,      (yytype_int16 const   )449,      (yytype_int16 const   )453, 
        (yytype_int16 const   )465,      (yytype_int16 const   )722,      (yytype_int16 const   )723,      (yytype_int16 const   )724, 
        (yytype_int16 const   )725,      (yytype_int16 const   )726,      (yytype_int16 const   )727,      (yytype_int16 const   )855, 
        (yytype_int16 const   )451,      (yytype_int16 const   )140,      (yytype_int16 const   )140,      (yytype_int16 const   )463, 
        (yytype_int16 const   )918,      (yytype_int16 const   )470,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )463,      (yytype_int16 const   )258,      (yytype_int16 const   )648,      (yytype_int16 const   )144, 
        (yytype_int16 const   )476,      (yytype_int16 const   )475,      (yytype_int16 const   )489,      (yytype_int16 const   )481, 
        (yytype_int16 const   )463,      (yytype_int16 const   )511,      (yytype_int16 const   )482,      (yytype_int16 const   )487, 
        (yytype_int16 const   )140,      (yytype_int16 const   )506,      (yytype_int16 const   )140,      (yytype_int16 const   )490, 
        (yytype_int16 const   )885,      (yytype_int16 const   )492,      (yytype_int16 const   )535,      (yytype_int16 const   )508, 
        (yytype_int16 const   )664,      (yytype_int16 const   )514,      (yytype_int16 const   )887,      (yytype_int16 const   )534, 
        (yytype_int16 const   )539,      (yytype_int16 const   )-456,      (yytype_int16 const   )465,      (yytype_int16 const   )936, 
        (yytype_int16 const   )520,      (yytype_int16 const   )157,      (yytype_int16 const   )666,      (yytype_int16 const   )626, 
        (yytype_int16 const   )511,      (yytype_int16 const   )521,      (yytype_int16 const   )532,      (yytype_int16 const   )465, 
        (yytype_int16 const   )533,      (yytype_int16 const   )511,      (yytype_int16 const   )506,      (yytype_int16 const   )506, 
        (yytype_int16 const   )638,      (yytype_int16 const   )546,      (yytype_int16 const   )554,      (yytype_int16 const   )465, 
        (yytype_int16 const   )506,      (yytype_int16 const   )506,      (yytype_int16 const   )548,      (yytype_int16 const   )568, 
        (yytype_int16 const   )563,      (yytype_int16 const   )565,      (yytype_int16 const   )906,      (yytype_int16 const   )955, 
        (yytype_int16 const   )144,      (yytype_int16 const   )144,      (yytype_int16 const   )567,      (yytype_int16 const   )913, 
        (yytype_int16 const   )569,      (yytype_int16 const   )571,      (yytype_int16 const   )140,      (yytype_int16 const   )535, 
        (yytype_int16 const   )722,      (yytype_int16 const   )723,      (yytype_int16 const   )724,      (yytype_int16 const   )725, 
        (yytype_int16 const   )726,      (yytype_int16 const   )727,      (yytype_int16 const   )574,      (yytype_int16 const   )585, 
        (yytype_int16 const   )576,      (yytype_int16 const   )140,      (yytype_int16 const   )588,      (yytype_int16 const   )591, 
        (yytype_int16 const   )593,      (yytype_int16 const   )590,      (yytype_int16 const   )600,      (yytype_int16 const   )144, 
        (yytype_int16 const   )720,      (yytype_int16 const   )144,      (yytype_int16 const   )925,      (yytype_int16 const   )595, 
        (yytype_int16 const   )463,      (yytype_int16 const   )721,      (yytype_int16 const   )463,      (yytype_int16 const   )607, 
        (yytype_int16 const   )722,      (yytype_int16 const   )723,      (yytype_int16 const   )724,      (yytype_int16 const   )725, 
        (yytype_int16 const   )726,      (yytype_int16 const   )727,      (yytype_int16 const   )728,      (yytype_int16 const   )140, 
        (yytype_int16 const   )599,      (yytype_int16 const   )614,      (yytype_int16 const   )623,      (yytype_int16 const   )636, 
        (yytype_int16 const   )643,      (yytype_int16 const   )644,      (yytype_int16 const   )645,      (yytype_int16 const   )348, 
        (yytype_int16 const   )140,      (yytype_int16 const   )649,      (yytype_int16 const   )650,      (yytype_int16 const   )657, 
        (yytype_int16 const   )940,      (yytype_int16 const   )656,      (yytype_int16 const   )511,      (yytype_int16 const   )944, 
        (yytype_int16 const   )660,      (yytype_int16 const   )661,      (yytype_int16 const   )511,      (yytype_int16 const   )946, 
        (yytype_int16 const   )694,      (yytype_int16 const   )662,      (yytype_int16 const   )668,      (yytype_int16 const   )465, 
        (yytype_int16 const   )669,      (yytype_int16 const   )465,      (yytype_int16 const   )673,      (yytype_int16 const   )672, 
        (yytype_int16 const   )682,      (yytype_int16 const   )144,      (yytype_int16 const   )697,      (yytype_int16 const   )714, 
        (yytype_int16 const   )696,      (yytype_int16 const   )701,      (yytype_int16 const   )826,      (yytype_int16 const   )703, 
        (yytype_int16 const   )709,      (yytype_int16 const   )961,      (yytype_int16 const   )729,      (yytype_int16 const   )705, 
        (yytype_int16 const   )144,      (yytype_int16 const   )710,      (yytype_int16 const   )140,      (yytype_int16 const   )100, 
        (yytype_int16 const   )119,      (yytype_int16 const   )120,      (yytype_int16 const   )463,      (yytype_int16 const   )122, 
        (yytype_int16 const   )123,      (yytype_int16 const   )124,      (yytype_int16 const   )125,      (yytype_int16 const   )126, 
        (yytype_int16 const   )127,      (yytype_int16 const   )128,      (yytype_int16 const   )711,      (yytype_int16 const   )130, 
        (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )134, 
        (yytype_int16 const   )135,      (yytype_int16 const   )136,      (yytype_int16 const   )144,      (yytype_int16 const   )715, 
        (yytype_int16 const   )147,      (yytype_int16 const   )150,      (yytype_int16 const   )511,      (yytype_int16 const   )716, 
        (yytype_int16 const   )737,      (yytype_int16 const   )738,      (yytype_int16 const   )741,      (yytype_int16 const   )144, 
        (yytype_int16 const   )742,      (yytype_int16 const   )750,      (yytype_int16 const   )743,      (yytype_int16 const   )744, 
        (yytype_int16 const   )166,      (yytype_int16 const   )747,      (yytype_int16 const   )748,      (yytype_int16 const   )755, 
        (yytype_int16 const   )751,      (yytype_int16 const   )465,      (yytype_int16 const   )766,      (yytype_int16 const   )174, 
        (yytype_int16 const   )176,      (yytype_int16 const   )753,      (yytype_int16 const   )506,      (yytype_int16 const   )463, 
        (yytype_int16 const   )773,      (yytype_int16 const   )763,      (yytype_int16 const   )184,      (yytype_int16 const   )764, 
        (yytype_int16 const   )778,      (yytype_int16 const   )787,      (yytype_int16 const   )786,      (yytype_int16 const   )788, 
        (yytype_int16 const   )791,      (yytype_int16 const   )796,      (yytype_int16 const   )720,      (yytype_int16 const   )379, 
        (yytype_int16 const   )803,      (yytype_int16 const   )808,      (yytype_int16 const   )381,      (yytype_int16 const   )721, 
        (yytype_int16 const   )782,      (yytype_int16 const   )144,      (yytype_int16 const   )722,      (yytype_int16 const   )723, 
        (yytype_int16 const   )724,      (yytype_int16 const   )725,      (yytype_int16 const   )726,      (yytype_int16 const   )727, 
        (yytype_int16 const   )728,      (yytype_int16 const   )804,      (yytype_int16 const   )810,      (yytype_int16 const   )819, 
        (yytype_int16 const   )215,      (yytype_int16 const   )824,      (yytype_int16 const   )463,      (yytype_int16 const   )511, 
        (yytype_int16 const   )818,      (yytype_int16 const   )827,      (yytype_int16 const   )465,      (yytype_int16 const   )262, 
        (yytype_int16 const   )263,      (yytype_int16 const   )264,      (yytype_int16 const   )265,      (yytype_int16 const   )266, 
        (yytype_int16 const   )267,      (yytype_int16 const   )268,      (yytype_int16 const   )269,      (yytype_int16 const   )270, 
        (yytype_int16 const   )271,      (yytype_int16 const   )272,      (yytype_int16 const   )273,      (yytype_int16 const   )833, 
        (yytype_int16 const   )463,      (yytype_int16 const   )834,      (yytype_int16 const   )836,      (yytype_int16 const   )837, 
        (yytype_int16 const   )379,      (yytype_int16 const   )838,      (yytype_int16 const   )845,      (yytype_int16 const   )381, 
        (yytype_int16 const   )843,      (yytype_int16 const   )851,      (yytype_int16 const   )141,      (yytype_int16 const   )141, 
        (yytype_int16 const   )867,      (yytype_int16 const   )870,      (yytype_int16 const   )154,      (yytype_int16 const   )846, 
        (yytype_int16 const   )777,      (yytype_int16 const   )465,      (yytype_int16 const   )871,      (yytype_int16 const   )872, 
        (yytype_int16 const   )876,      (yytype_int16 const   )873,      (yytype_int16 const   )880,      (yytype_int16 const   )877, 
        (yytype_int16 const   )283,      (yytype_int16 const   )882,      (yytype_int16 const   )881,      (yytype_int16 const   )888, 
        (yytype_int16 const   )463,      (yytype_int16 const   )511,      (yytype_int16 const   )889,      (yytype_int16 const   )511, 
        (yytype_int16 const   )284,      (yytype_int16 const   )-413,      (yytype_int16 const   )-413,      (yytype_int16 const   )465, 
        (yytype_int16 const   )-206,      (yytype_int16 const   )894,      (yytype_int16 const   )892,      (yytype_int16 const   )890, 
        (yytype_int16 const   )893,      (yytype_int16 const   )895,      (yytype_int16 const   )896,      (yytype_int16 const   )463, 
        (yytype_int16 const   )898,      (yytype_int16 const   )-457,      (yytype_int16 const   )-457,      (yytype_int16 const   )-457, 
        (yytype_int16 const   )-457,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )844,      (yytype_int16 const   )258,      (yytype_int16 const   )912, 
        (yytype_int16 const   )907,      (yytype_int16 const   )914,      (yytype_int16 const   )919,      (yytype_int16 const   )465, 
        (yytype_int16 const   )303,      (yytype_int16 const   )466,      (yytype_int16 const   )304,      (yytype_int16 const   )920, 
        (yytype_int16 const   )921,      (yytype_int16 const   )511,      (yytype_int16 const   )100,      (yytype_int16 const   )922, 
        (yytype_int16 const   )311,      (yytype_int16 const   )926,      (yytype_int16 const   )-152,      (yytype_int16 const   )315, 
        (yytype_int16 const   )463,      (yytype_int16 const   )929,      (yytype_int16 const   )465,      (yytype_int16 const   )474, 
        (yytype_int16 const   )463,      (yytype_int16 const   )932,      (yytype_int16 const   )928,      (yytype_int16 const   )-173, 
        (yytype_int16 const   )-212,      (yytype_int16 const   )935,      (yytype_int16 const   )463,      (yytype_int16 const   )934, 
        (yytype_int16 const   )262,      (yytype_int16 const   )263,      (yytype_int16 const   )264,      (yytype_int16 const   )265, 
        (yytype_int16 const   )266,      (yytype_int16 const   )267,      (yytype_int16 const   )268,      (yytype_int16 const   )269, 
        (yytype_int16 const   )270,      (yytype_int16 const   )271,      (yytype_int16 const   )272,      (yytype_int16 const   )273, 
        (yytype_int16 const   )939,      (yytype_int16 const   )937,      (yytype_int16 const   )953,      (yytype_int16 const   )511, 
        (yytype_int16 const   )957,      (yytype_int16 const   )945,      (yytype_int16 const   )147,      (yytype_int16 const   )471, 
        (yytype_int16 const   )948,      (yytype_int16 const   )949,      (yytype_int16 const   )351,      (yytype_int16 const   )465, 
        (yytype_int16 const   )958,      (yytype_int16 const   )960,      (yytype_int16 const   )954,      (yytype_int16 const   )465, 
        (yytype_int16 const   )962,      (yytype_int16 const   )500,      (yytype_int16 const   )501,      (yytype_int16 const   )573, 
        (yytype_int16 const   )364,      (yytype_int16 const   )465,      (yytype_int16 const   )667,      (yytype_int16 const   )700, 
        (yytype_int16 const   )762,      (yytype_int16 const   )850,      (yytype_int16 const   )852,      (yytype_int16 const   )718, 
        (yytype_int16 const   )740,      (yytype_int16 const   )463,      (yytype_int16 const   )511,      (yytype_int16 const   )473, 
        (yytype_int16 const   )775,      (yytype_int16 const   )141,      (yytype_int16 const   )-413,      (yytype_int16 const   )-413, 
        (yytype_int16 const   )746,      (yytype_int16 const   )383,      (yytype_int16 const   )511,      (yytype_int16 const   )891, 
        (yytype_int16 const   )910,      (yytype_int16 const   )647,      (yytype_int16 const   )389,      (yytype_int16 const   )390, 
        (yytype_int16 const   )391,      (yytype_int16 const   )392,      (yytype_int16 const   )393,      (yytype_int16 const   )394, 
        (yytype_int16 const   )395,      (yytype_int16 const   )396,      (yytype_int16 const   )397,      (yytype_int16 const   )398, 
        (yytype_int16 const   )399,      (yytype_int16 const   )400,      (yytype_int16 const   )401,      (yytype_int16 const   )402, 
        (yytype_int16 const   )403,      (yytype_int16 const   )404,      (yytype_int16 const   )405,      (yytype_int16 const   )406, 
        (yytype_int16 const   )407,      (yytype_int16 const   )904,      (yytype_int16 const   )511,      (yytype_int16 const   )646, 
        (yytype_int16 const   )465,      (yytype_int16 const   )410,      (yytype_int16 const   )411,      (yytype_int16 const   )412, 
        (yytype_int16 const   )413,      (yytype_int16 const   )414,      (yytype_int16 const   )415,      (yytype_int16 const   )416, 
        (yytype_int16 const   )417,      (yytype_int16 const   )418,      (yytype_int16 const   )419,      (yytype_int16 const   )420, 
        (yytype_int16 const   )421,      (yytype_int16 const   )141,      (yytype_int16 const   )345,      (yytype_int16 const   )426, 
        (yytype_int16 const   )933,      (yytype_int16 const   )426,      (yytype_int16 const   )430,      (yytype_int16 const   )329, 
        (yytype_int16 const   )655,      (yytype_int16 const   )141,      (yytype_int16 const   )141,      (yytype_int16 const   )141, 
        (yytype_int16 const   )143,      (yytype_int16 const   )143,      (yytype_int16 const   )712,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )435,      (yytype_int16 const   )141, 
        (yytype_int16 const   )437,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )558,      (yytype_int16 const   )559, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )446,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )448, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )182,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )-173,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )472, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )154,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )592,      (yytype_int16 const   )456, 
        (yytype_int16 const   )457,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )100,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )458,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )426,      (yytype_int16 const   )0, 
        (yytype_int16 const   )519,      (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )115,      (yytype_int16 const   )523,      (yytype_int16 const   )0,      (yytype_int16 const   )524, 
        (yytype_int16 const   )0,      (yytype_int16 const   )526,      (yytype_int16 const   )527,      (yytype_int16 const   )528, 
        (yytype_int16 const   )36,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )635,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )290, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )651,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )464,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )137,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )141, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )313, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )459, 
        (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )460,      (yytype_int16 const   )0,      (yytype_int16 const   )330, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )461,      (yytype_int16 const   )74, 
        (yytype_int16 const   )75,      (yytype_int16 const   )462,      (yytype_int16 const   )0,      (yytype_int16 const   )339, 
        (yytype_int16 const   )340,      (yytype_int16 const   )342,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )352,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )233, 
        (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )707,      (yytype_int16 const   )0,      (yytype_int16 const   )708, 
        (yytype_int16 const   )0,      (yytype_int16 const   )583,      (yytype_int16 const   )0,      (yytype_int16 const   )236, 
        (yytype_int16 const   )141,      (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239, 
        (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243, 
        (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247, 
        (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251, 
        (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255, 
        (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258, 
        (yytype_int16 const   )0,      (yytype_int16 const   )141,      (yytype_int16 const   )0,      (yytype_int16 const   )141, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )611,      (yytype_int16 const   )262,      (yytype_int16 const   )263,      (yytype_int16 const   )264, 
        (yytype_int16 const   )265,      (yytype_int16 const   )266,      (yytype_int16 const   )267,      (yytype_int16 const   )268, 
        (yytype_int16 const   )269,      (yytype_int16 const   )270,      (yytype_int16 const   )271,      (yytype_int16 const   )272, 
        (yytype_int16 const   )273,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464, 
        (yytype_int16 const   )464,      (yytype_int16 const   )464,      (yytype_int16 const   )622,      (yytype_int16 const   )765, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )100,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )311,      (yytype_int16 const   )630,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )100, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )141,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )-413, 
        (yytype_int16 const   )-413,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )792,      (yytype_int16 const   )0,      (yytype_int16 const   )141,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )452,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )484,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )154,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )816, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )426,      (yytype_int16 const   )687, 
        (yytype_int16 const   )0,      (yytype_int16 const   )658,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )692,      (yytype_int16 const   )100, 
        (yytype_int16 const   )0,      (yytype_int16 const   )507,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )835,      (yytype_int16 const   )0,      (yytype_int16 const   )141, 
        (yytype_int16 const   )141,      (yytype_int16 const   )464,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )713, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )141,      (yytype_int16 const   )0, 
        (yytype_int16 const   )141,      (yytype_int16 const   )856,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )530,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )878,      (yytype_int16 const   )745,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )507, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )290, 
        (yytype_int16 const   )0,      (yytype_int16 const   )290,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )507,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )141,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )897,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )900,      (yytype_int16 const   )0,      (yytype_int16 const   )141, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )903, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0, 
        (yytype_int16 const   )464,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )141,      (yytype_int16 const   )339,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )141,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )426,      (yytype_int16 const   )426,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )507,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )311,      (yytype_int16 const   )0,      (yytype_int16 const   )930,      (yytype_int16 const   )0, 
        (yytype_int16 const   )290,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )811,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )141,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )464,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )100,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )100,      (yytype_int16 const   )100,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )631,      (yytype_int16 const   )634,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )653,      (yytype_int16 const   )0,      (yytype_int16 const   )484,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )883,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )507,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )665,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )464,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )507,      (yytype_int16 const   )507, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0, 
        (yytype_int16 const   )507,      (yytype_int16 const   )507,      (yytype_int16 const   )0,      (yytype_int16 const   )905, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )290,      (yytype_int16 const   )100, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )699,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )484, 
        (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )100, 
        (yytype_int16 const   )290,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8, 
        (yytype_int16 const   )9,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )10,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )634,      (yytype_int16 const   )0, 
        (yytype_int16 const   )464,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11, 
        (yytype_int16 const   )12,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14, 
        (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18, 
        (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22, 
        (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0, 
        (yytype_int16 const   )35,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )464, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )0,      (yytype_int16 const   )40,      (yytype_int16 const   )507,      (yytype_int16 const   )41, 
        (yytype_int16 const   )0,      (yytype_int16 const   )42,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )43,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )48,      (yytype_int16 const   )49,      (yytype_int16 const   )50,      (yytype_int16 const   )0, 
        (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )0,      (yytype_int16 const   )53, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )54, 
        (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )0,      (yytype_int16 const   )57, 
        (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61, 
        (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65, 
        (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9, 
        (yytype_int16 const   )0,      (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )10,      (yytype_int16 const   )0,      (yytype_int16 const   )73,      (yytype_int16 const   )74, 
        (yytype_int16 const   )75,      (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0, 
        (yytype_int16 const   )78,      (yytype_int16 const   )79,      (yytype_int16 const   )0,      (yytype_int16 const   )80, 
        (yytype_int16 const   )0,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )35, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )0, 
        (yytype_int16 const   )40,      (yytype_int16 const   )0,      (yytype_int16 const   )41,      (yytype_int16 const   )0, 
        (yytype_int16 const   )42,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )43, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )0, 
        (yytype_int16 const   )49,      (yytype_int16 const   )50,      (yytype_int16 const   )0,      (yytype_int16 const   )51, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )53,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )0,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )497,      (yytype_int16 const   )61,      (yytype_int16 const   )62, 
        (yytype_int16 const   )63,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )0,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9, 
        (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )10,      (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75, 
        (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )78, 
        (yytype_int16 const   )79,      (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )637,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )35, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )0, 
        (yytype_int16 const   )40,      (yytype_int16 const   )0,      (yytype_int16 const   )41,      (yytype_int16 const   )0, 
        (yytype_int16 const   )42,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )43, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )0, 
        (yytype_int16 const   )49,      (yytype_int16 const   )50,      (yytype_int16 const   )0,      (yytype_int16 const   )51, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )53,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )56,      (yytype_int16 const   )0,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )0,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9, 
        (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )10,      (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75, 
        (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )78, 
        (yytype_int16 const   )79,      (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )693,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )35, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )0, 
        (yytype_int16 const   )40,      (yytype_int16 const   )0,      (yytype_int16 const   )41,      (yytype_int16 const   )0, 
        (yytype_int16 const   )42,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )43, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )0, 
        (yytype_int16 const   )49,      (yytype_int16 const   )50,      (yytype_int16 const   )0,      (yytype_int16 const   )51, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )53,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )56,      (yytype_int16 const   )0,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )0,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9, 
        (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )10,      (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75, 
        (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )78, 
        (yytype_int16 const   )79,      (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )847,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )35, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )0, 
        (yytype_int16 const   )40,      (yytype_int16 const   )0,      (yytype_int16 const   )41,      (yytype_int16 const   )0, 
        (yytype_int16 const   )42,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )43, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )0, 
        (yytype_int16 const   )49,      (yytype_int16 const   )50,      (yytype_int16 const   )0,      (yytype_int16 const   )51, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )53,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )56,      (yytype_int16 const   )0,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )0,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9, 
        (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )10,      (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75, 
        (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )78, 
        (yytype_int16 const   )79,      (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )909,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )35, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )0, 
        (yytype_int16 const   )40,      (yytype_int16 const   )0,      (yytype_int16 const   )41,      (yytype_int16 const   )0, 
        (yytype_int16 const   )42,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )43, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )0, 
        (yytype_int16 const   )49,      (yytype_int16 const   )50,      (yytype_int16 const   )0,      (yytype_int16 const   )51, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )53,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )56,      (yytype_int16 const   )0,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )5,      (yytype_int16 const   )6, 
        (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9,      (yytype_int16 const   )0, 
        (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )10, 
        (yytype_int16 const   )0,      (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75, 
        (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )78, 
        (yytype_int16 const   )79,      (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )13, 
        (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16, 
        (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20, 
        (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24, 
        (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28, 
        (yytype_int16 const   )29,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )35,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )0,      (yytype_int16 const   )40, 
        (yytype_int16 const   )0,      (yytype_int16 const   )41,      (yytype_int16 const   )0,      (yytype_int16 const   )42, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )43,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )0,      (yytype_int16 const   )49, 
        (yytype_int16 const   )50,      (yytype_int16 const   )0,      (yytype_int16 const   )51,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )53,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )56, 
        (yytype_int16 const   )0,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0,      (yytype_int16 const   )66, 
        (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )8,      (yytype_int16 const   )9,      (yytype_int16 const   )0,      (yytype_int16 const   )72, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )10,      (yytype_int16 const   )0, 
        (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75,      (yytype_int16 const   )76, 
        (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )78,      (yytype_int16 const   )79, 
        (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0,      (yytype_int16 const   )81, 
        (yytype_int16 const   )82,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )146,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )11,      (yytype_int16 const   )12,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )13,      (yytype_int16 const   )0, 
        (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17, 
        (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21, 
        (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )25, 
        (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )115,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )36,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )47,      (yytype_int16 const   )258,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )116,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )64, 
        (yytype_int16 const   )65,      (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67, 
        (yytype_int16 const   )68,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8, 
        (yytype_int16 const   )9,      (yytype_int16 const   )0,      (yytype_int16 const   )72,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )10,      (yytype_int16 const   )0,      (yytype_int16 const   )117, 
        (yytype_int16 const   )74,      (yytype_int16 const   )75,      (yytype_int16 const   )76,      (yytype_int16 const   )77, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )80,      (yytype_int16 const   )0,      (yytype_int16 const   )81,      (yytype_int16 const   )82, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11, 
        (yytype_int16 const   )12,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14, 
        (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18, 
        (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22, 
        (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )115,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )36,      (yytype_int16 const   )0,      (yytype_int16 const   )241,      (yytype_int16 const   )242, 
        (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246, 
        (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250, 
        (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254, 
        (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )47, 
        (yytype_int16 const   )258,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )116,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65, 
        (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9, 
        (yytype_int16 const   )0,      (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )10,      (yytype_int16 const   )0,      (yytype_int16 const   )117,      (yytype_int16 const   )74, 
        (yytype_int16 const   )75,      (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0, 
        (yytype_int16 const   )173,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )80, 
        (yytype_int16 const   )0,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )115, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )47,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )116,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )5,      (yytype_int16 const   )6, 
        (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9,      (yytype_int16 const   )0, 
        (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )10, 
        (yytype_int16 const   )0,      (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75, 
        (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )175, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )13, 
        (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16, 
        (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20, 
        (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24, 
        (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )115,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36,      (yytype_int16 const   )-457, 
        (yytype_int16 const   )-457,      (yytype_int16 const   )-457,      (yytype_int16 const   )-457,      (yytype_int16 const   )246, 
        (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250, 
        (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254, 
        (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0, 
        (yytype_int16 const   )258,      (yytype_int16 const   )47,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )116, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0,      (yytype_int16 const   )66, 
        (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )8,      (yytype_int16 const   )9,      (yytype_int16 const   )0,      (yytype_int16 const   )72, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )10,      (yytype_int16 const   )0, 
        (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75,      (yytype_int16 const   )76, 
        (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )179,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0,      (yytype_int16 const   )81, 
        (yytype_int16 const   )82,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )11,      (yytype_int16 const   )12,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )13,      (yytype_int16 const   )0, 
        (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17, 
        (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21, 
        (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )25, 
        (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )115,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )36,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )47,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )116,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )64, 
        (yytype_int16 const   )65,      (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67, 
        (yytype_int16 const   )68,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8, 
        (yytype_int16 const   )9,      (yytype_int16 const   )0,      (yytype_int16 const   )72,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )10,      (yytype_int16 const   )0,      (yytype_int16 const   )117, 
        (yytype_int16 const   )74,      (yytype_int16 const   )75,      (yytype_int16 const   )76,      (yytype_int16 const   )77, 
        (yytype_int16 const   )302,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )80,      (yytype_int16 const   )0,      (yytype_int16 const   )81,      (yytype_int16 const   )82, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )409,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11, 
        (yytype_int16 const   )12,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14, 
        (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18, 
        (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22, 
        (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )115,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )36,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )47, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )116,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65, 
        (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9, 
        (yytype_int16 const   )0,      (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )10,      (yytype_int16 const   )0,      (yytype_int16 const   )117,      (yytype_int16 const   )74, 
        (yytype_int16 const   )75,      (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )80, 
        (yytype_int16 const   )0,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )434, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )115, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )47,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )116,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )5,      (yytype_int16 const   )6, 
        (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9,      (yytype_int16 const   )0, 
        (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )10, 
        (yytype_int16 const   )0,      (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75, 
        (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )436,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )13, 
        (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16, 
        (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20, 
        (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24, 
        (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )115,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )47,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )116, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0,      (yytype_int16 const   )66, 
        (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )8,      (yytype_int16 const   )9,      (yytype_int16 const   )0,      (yytype_int16 const   )72, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )10,      (yytype_int16 const   )0, 
        (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75,      (yytype_int16 const   )76, 
        (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0,      (yytype_int16 const   )81, 
        (yytype_int16 const   )82,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )503,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )11,      (yytype_int16 const   )12,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )13,      (yytype_int16 const   )0, 
        (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17, 
        (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21, 
        (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )25, 
        (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )115,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )36,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )47,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )116,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )64, 
        (yytype_int16 const   )65,      (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67, 
        (yytype_int16 const   )68,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8, 
        (yytype_int16 const   )9,      (yytype_int16 const   )0,      (yytype_int16 const   )72,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )10,      (yytype_int16 const   )0,      (yytype_int16 const   )117, 
        (yytype_int16 const   )74,      (yytype_int16 const   )75,      (yytype_int16 const   )76,      (yytype_int16 const   )77, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )80,      (yytype_int16 const   )0,      (yytype_int16 const   )81,      (yytype_int16 const   )82, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )621,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11, 
        (yytype_int16 const   )12,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14, 
        (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18, 
        (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22, 
        (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )115,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )36,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )47, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )116,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65, 
        (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9, 
        (yytype_int16 const   )0,      (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )10,      (yytype_int16 const   )0,      (yytype_int16 const   )117,      (yytype_int16 const   )74, 
        (yytype_int16 const   )75,      (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )80, 
        (yytype_int16 const   )0,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )663, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )13,      (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )115, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )47,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )116,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )5,      (yytype_int16 const   )6, 
        (yytype_int16 const   )7,      (yytype_int16 const   )8,      (yytype_int16 const   )9,      (yytype_int16 const   )0, 
        (yytype_int16 const   )72,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )10, 
        (yytype_int16 const   )0,      (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75, 
        (yytype_int16 const   )76,      (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )11,      (yytype_int16 const   )12,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )13, 
        (yytype_int16 const   )0,      (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16, 
        (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20, 
        (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24, 
        (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )115,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )36,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )47,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )116, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )0,      (yytype_int16 const   )66, 
        (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )8,      (yytype_int16 const   )9,      (yytype_int16 const   )0,      (yytype_int16 const   )72, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )10,      (yytype_int16 const   )0, 
        (yytype_int16 const   )117,      (yytype_int16 const   )74,      (yytype_int16 const   )75,      (yytype_int16 const   )76, 
        (yytype_int16 const   )77,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )80,      (yytype_int16 const   )0,      (yytype_int16 const   )81, 
        (yytype_int16 const   )82,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )11,      (yytype_int16 const   )12,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )13,      (yytype_int16 const   )0, 
        (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17, 
        (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21, 
        (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )25, 
        (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )115,      (yytype_int16 const   )350,      (yytype_int16 const   )34, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )36,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )47,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )116,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )64, 
        (yytype_int16 const   )65,      (yytype_int16 const   )0,      (yytype_int16 const   )66,      (yytype_int16 const   )67, 
        (yytype_int16 const   )68,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )72,      (yytype_int16 const   )0, 
        (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )117, 
        (yytype_int16 const   )74,      (yytype_int16 const   )75,      (yytype_int16 const   )76,      (yytype_int16 const   )77, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )80,      (yytype_int16 const   )0,      (yytype_int16 const   )81,      (yytype_int16 const   )82, 
        (yytype_int16 const   )236,      (yytype_int16 const   )0,      (yytype_int16 const   )237,      (yytype_int16 const   )238, 
        (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242, 
        (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246, 
        (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250, 
        (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254, 
        (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0, 
        (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )0,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )0, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )233, 
        (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236, 
        (yytype_int16 const   )491,      (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239, 
        (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243, 
        (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247, 
        (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251, 
        (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255, 
        (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258, 
        (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )236,      (yytype_int16 const   )502,      (yytype_int16 const   )237,      (yytype_int16 const   )238, 
        (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242, 
        (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246, 
        (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250, 
        (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254, 
        (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0, 
        (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )540,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )570, 
        (yytype_int16 const   )236,      (yytype_int16 const   )812,      (yytype_int16 const   )237,      (yytype_int16 const   )238, 
        (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242, 
        (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246, 
        (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250, 
        (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254, 
        (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0, 
        (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )608,      (yytype_int16 const   )236,      (yytype_int16 const   )0,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )754,      (yytype_int16 const   )236,      (yytype_int16 const   )0, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )813,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )259, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233, 
        (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236, 
        (yytype_int16 const   )316,      (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239, 
        (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243, 
        (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247, 
        (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251, 
        (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255, 
        (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )233,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )317, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233, 
        (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236, 
        (yytype_int16 const   )323,      (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239, 
        (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243, 
        (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247, 
        (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251, 
        (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255, 
        (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258, 
        (yytype_int16 const   )0,      (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )361,      (yytype_int16 const   )236,      (yytype_int16 const   )0,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )431, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233, 
        (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236, 
        (yytype_int16 const   )444,      (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239, 
        (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243, 
        (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247, 
        (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251, 
        (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255, 
        (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258, 
        (yytype_int16 const   )0,      (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )445,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )455, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233, 
        (yytype_int16 const   )234,      (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236, 
        (yytype_int16 const   )549,      (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239, 
        (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243, 
        (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247, 
        (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251, 
        (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255, 
        (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258, 
        (yytype_int16 const   )0,      (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )759,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )908, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )923,      (yytype_int16 const   )233,      (yytype_int16 const   )234,      (yytype_int16 const   )235, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )291,      (yytype_int16 const   )236,      (yytype_int16 const   )612,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )233,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )543,      (yytype_int16 const   )236,      (yytype_int16 const   )0, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )234, 
        (yytype_int16 const   )235,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236,      (yytype_int16 const   )0, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )235,      (yytype_int16 const   )258,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0, 
        (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )0,      (yytype_int16 const   )236, 
        (yytype_int16 const   )0,      (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239, 
        (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243, 
        (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247, 
        (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251, 
        (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255, 
        (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )236,      (yytype_int16 const   )258, 
        (yytype_int16 const   )237,      (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )237, 
        (yytype_int16 const   )238,      (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241, 
        (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245, 
        (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249, 
        (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253, 
        (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257, 
        (yytype_int16 const   )0,      (yytype_int16 const   )258,      (yytype_int16 const   )238,      (yytype_int16 const   )239, 
        (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243, 
        (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247, 
        (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251, 
        (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255, 
        (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0,      (yytype_int16 const   )258, 
        (yytype_int16 const   )239,      (yytype_int16 const   )240,      (yytype_int16 const   )241,      (yytype_int16 const   )242, 
        (yytype_int16 const   )243,      (yytype_int16 const   )244,      (yytype_int16 const   )245,      (yytype_int16 const   )246, 
        (yytype_int16 const   )247,      (yytype_int16 const   )248,      (yytype_int16 const   )249,      (yytype_int16 const   )250, 
        (yytype_int16 const   )251,      (yytype_int16 const   )252,      (yytype_int16 const   )253,      (yytype_int16 const   )254, 
        (yytype_int16 const   )255,      (yytype_int16 const   )256,      (yytype_int16 const   )257,      (yytype_int16 const   )0, 
        (yytype_int16 const   )258};
static yytype_int16 const   yycheck[5417]  = 
  {      (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )118,      (yytype_int16 const   )27, 
        (yytype_int16 const   )27,      (yytype_int16 const   )27,      (yytype_int16 const   )27,      (yytype_int16 const   )4, 
        (yytype_int16 const   )370,      (yytype_int16 const   )278,      (yytype_int16 const   )443,      (yytype_int16 const   )572, 
        (yytype_int16 const   )422,      (yytype_int16 const   )258,      (yytype_int16 const   )434,      (yytype_int16 const   )550, 
        (yytype_int16 const   )436,      (yytype_int16 const   )8,      (yytype_int16 const   )49,      (yytype_int16 const   )734, 
        (yytype_int16 const   )357,      (yytype_int16 const   )8,      (yytype_int16 const   )8,      (yytype_int16 const   )8, 
        (yytype_int16 const   )26,      (yytype_int16 const   )8,      (yytype_int16 const   )8,      (yytype_int16 const   )8, 
        (yytype_int16 const   )4,      (yytype_int16 const   )52,      (yytype_int16 const   )440,      (yytype_int16 const   )322, 
        (yytype_int16 const   )26,      (yytype_int16 const   )61,      (yytype_int16 const   )61,      (yytype_int16 const   )232, 
        (yytype_int16 const   )8,      (yytype_int16 const   )71,      (yytype_int16 const   )8,      (yytype_int16 const   )600, 
        (yytype_int16 const   )8,      (yytype_int16 const   )8,      (yytype_int16 const   )8,      (yytype_int16 const   )61, 
        (yytype_int16 const   )73,      (yytype_int16 const   )8,      (yytype_int16 const   )63,      (yytype_int16 const   )8, 
        (yytype_int16 const   )149,      (yytype_int16 const   )61,      (yytype_int16 const   )73,      (yytype_int16 const   )8, 
        (yytype_int16 const   )8,      (yytype_int16 const   )76,      (yytype_int16 const   )71,      (yytype_int16 const   )61, 
        (yytype_int16 const   )73,      (yytype_int16 const   )73,      (yytype_int16 const   )71,      (yytype_int16 const   )56, 
        (yytype_int16 const   )93,      (yytype_int16 const   )94,      (yytype_int16 const   )73,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )0,      (yytype_int16 const   )71,      (yytype_int16 const   )27, 
        (yytype_int16 const   )73,      (yytype_int16 const   )98,      (yytype_int16 const   )73,      (yytype_int16 const   )71, 
        (yytype_int16 const   )73,      (yytype_int16 const   )73,      (yytype_int16 const   )0,      (yytype_int16 const   )71, 
        (yytype_int16 const   )148,      (yytype_int16 const   )78,      (yytype_int16 const   )275,      (yytype_int16 const   )151, 
        (yytype_int16 const   )152,      (yytype_int16 const   )197,      (yytype_int16 const   )71,      (yytype_int16 const   )503, 
        (yytype_int16 const   )93,      (yytype_int16 const   )94,      (yytype_int16 const   )496,      (yytype_int16 const   )149, 
        (yytype_int16 const   )112,      (yytype_int16 const   )144,      (yytype_int16 const   )287,      (yytype_int16 const   )288, 
        (yytype_int16 const   )144,      (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )112, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )149,      (yytype_int16 const   )144, 
        (yytype_int16 const   )297,      (yytype_int16 const   )144,      (yytype_int16 const   )299,      (yytype_int16 const   )148, 
        (yytype_int16 const   )149,      (yytype_int16 const   )148,      (yytype_int16 const   )375,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )71,      (yytype_int16 const   )61,      (yytype_int16 const   )73, 
        (yytype_int16 const   )112,      (yytype_int16 const   )90,      (yytype_int16 const   )148,      (yytype_int16 const   )90, 
        (yytype_int16 const   )139,      (yytype_int16 const   )144,      (yytype_int16 const   )152,      (yytype_int16 const   )116, 
        (yytype_int16 const   )153,      (yytype_int16 const   )149,      (yytype_int16 const   )149,      (yytype_int16 const   )146, 
        (yytype_int16 const   )152,      (yytype_int16 const   )152,      (yytype_int16 const   )144,      (yytype_int16 const   )73, 
        (yytype_int16 const   )145,      (yytype_int16 const   )152,      (yytype_int16 const   )26,      (yytype_int16 const   )148, 
        (yytype_int16 const   )145,      (yytype_int16 const   )71,      (yytype_int16 const   )152,      (yytype_int16 const   )148, 
        (yytype_int16 const   )160,      (yytype_int16 const   )154,      (yytype_int16 const   )154,      (yytype_int16 const   )170, 
        (yytype_int16 const   )152,      (yytype_int16 const   )142,      (yytype_int16 const   )143,      (yytype_int16 const   )154, 
        (yytype_int16 const   )153,      (yytype_int16 const   )145,      (yytype_int16 const   )152,      (yytype_int16 const   )152, 
        (yytype_int16 const   )148,      (yytype_int16 const   )154,      (yytype_int16 const   )152,      (yytype_int16 const   )154, 
        (yytype_int16 const   )514,      (yytype_int16 const   )149,      (yytype_int16 const   )154,      (yytype_int16 const   )71, 
        (yytype_int16 const   )157,      (yytype_int16 const   )151,      (yytype_int16 const   )495,      (yytype_int16 const   )148, 
        (yytype_int16 const   )151,      (yytype_int16 const   )152,      (yytype_int16 const   )185,      (yytype_int16 const   )118, 
        (yytype_int16 const   )151,      (yytype_int16 const   )151,      (yytype_int16 const   )151,      (yytype_int16 const   )190, 
        (yytype_int16 const   )151,      (yytype_int16 const   )151,      (yytype_int16 const   )151,      (yytype_int16 const   )148, 
        (yytype_int16 const   )123,      (yytype_int16 const   )148,      (yytype_int16 const   )584,      (yytype_int16 const   )198, 
        (yytype_int16 const   )199,      (yytype_int16 const   )200,      (yytype_int16 const   )893,      (yytype_int16 const   )151, 
        (yytype_int16 const   )150,      (yytype_int16 const   )71,      (yytype_int16 const   )150,      (yytype_int16 const   )150, 
        (yytype_int16 const   )150,      (yytype_int16 const   )208,      (yytype_int16 const   )146,      (yytype_int16 const   )150, 
        (yytype_int16 const   )211,      (yytype_int16 const   )150,      (yytype_int16 const   )152,      (yytype_int16 const   )167, 
        (yytype_int16 const   )154,      (yytype_int16 const   )150,      (yytype_int16 const   )150,      (yytype_int16 const   )141, 
        (yytype_int16 const   )142,      (yytype_int16 const   )143,      (yytype_int16 const   )78,      (yytype_int16 const   )609, 
        (yytype_int16 const   )610,      (yytype_int16 const   )621,      (yytype_int16 const   )31,      (yytype_int16 const   )31, 
        (yytype_int16 const   )149,      (yytype_int16 const   )615,      (yytype_int16 const   )616,      (yytype_int16 const   )8, 
        (yytype_int16 const   )232,      (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )232, 
        (yytype_int16 const   )13,      (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16, 
        (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20, 
        (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24, 
        (yytype_int16 const   )73,      (yytype_int16 const   )71,      (yytype_int16 const   )761,      (yytype_int16 const   )73, 
        (yytype_int16 const   )31,      (yytype_int16 const   )145,      (yytype_int16 const   )190,      (yytype_int16 const   )428, 
        (yytype_int16 const   )148,      (yytype_int16 const   )595,      (yytype_int16 const   )258,      (yytype_int16 const   )258, 
        (yytype_int16 const   )258,      (yytype_int16 const   )258,      (yytype_int16 const   )198,      (yytype_int16 const   )199, 
        (yytype_int16 const   )200,      (yytype_int16 const   )149,      (yytype_int16 const   )71,      (yytype_int16 const   )663, 
        (yytype_int16 const   )73,      (yytype_int16 const   )73,      (yytype_int16 const   )443,      (yytype_int16 const   )641, 
        (yytype_int16 const   )208,      (yytype_int16 const   )149,      (yytype_int16 const   )71,      (yytype_int16 const   )275, 
        (yytype_int16 const   )73,      (yytype_int16 const   )31,      (yytype_int16 const   )275,      (yytype_int16 const   )31, 
        (yytype_int16 const   )144,      (yytype_int16 const   )149,      (yytype_int16 const   )59,      (yytype_int16 const   )60, 
        (yytype_int16 const   )148,      (yytype_int16 const   )141,      (yytype_int16 const   )285,      (yytype_int16 const   )287, 
        (yytype_int16 const   )288,      (yytype_int16 const   )144,      (yytype_int16 const   )287,      (yytype_int16 const   )288, 
        (yytype_int16 const   )118,      (yytype_int16 const   )148,      (yytype_int16 const   )73,      (yytype_int16 const   )149, 
        (yytype_int16 const   )295,      (yytype_int16 const   )297,      (yytype_int16 const   )71,      (yytype_int16 const   )299, 
        (yytype_int16 const   )297,      (yytype_int16 const   )149,      (yytype_int16 const   )299,      (yytype_int16 const   )71, 
        (yytype_int16 const   )149,      (yytype_int16 const   )73,      (yytype_int16 const   )149,      (yytype_int16 const   )112, 
        (yytype_int16 const   )529,      (yytype_int16 const   )73,      (yytype_int16 const   )149,      (yytype_int16 const   )71, 
        (yytype_int16 const   )149,      (yytype_int16 const   )73,      (yytype_int16 const   )78,      (yytype_int16 const   )112, 
        (yytype_int16 const   )71,      (yytype_int16 const   )142,      (yytype_int16 const   )143,      (yytype_int16 const   )73, 
        (yytype_int16 const   )319,      (yytype_int16 const   )73,      (yytype_int16 const   )258,      (yytype_int16 const   )71, 
        (yytype_int16 const   )152,      (yytype_int16 const   )73,      (yytype_int16 const   )74,      (yytype_int16 const   )326, 
        (yytype_int16 const   )125,      (yytype_int16 const   )71,      (yytype_int16 const   )152,      (yytype_int16 const   )669, 
        (yytype_int16 const   )154,      (yytype_int16 const   )703,      (yytype_int16 const   )333,      (yytype_int16 const   )705, 
        (yytype_int16 const   )61,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )145,      (yytype_int16 const   )49,      (yytype_int16 const   )71,      (yytype_int16 const   )148, 
        (yytype_int16 const   )112,      (yytype_int16 const   )344,      (yytype_int16 const   )755,      (yytype_int16 const   )31, 
        (yytype_int16 const   )145,      (yytype_int16 const   )154,      (yytype_int16 const   )144,      (yytype_int16 const   )148, 
        (yytype_int16 const   )112,      (yytype_int16 const   )126,      (yytype_int16 const   )127,      (yytype_int16 const   )319, 
        (yytype_int16 const   )149,      (yytype_int16 const   )154,      (yytype_int16 const   )625,      (yytype_int16 const   )144, 
        (yytype_int16 const   )73,      (yytype_int16 const   )368,      (yytype_int16 const   )61,      (yytype_int16 const   )749, 
        (yytype_int16 const   )123,      (yytype_int16 const   )78,      (yytype_int16 const   )66,      (yytype_int16 const   )67, 
        (yytype_int16 const   )68,      (yytype_int16 const   )333,      (yytype_int16 const   )637,      (yytype_int16 const   )370, 
        (yytype_int16 const   )145,      (yytype_int16 const   )150,      (yytype_int16 const   )619,      (yytype_int16 const   )148, 
        (yytype_int16 const   )98,      (yytype_int16 const   )145,      (yytype_int16 const   )142,      (yytype_int16 const   )143, 
        (yytype_int16 const   )148,      (yytype_int16 const   )381,      (yytype_int16 const   )148,      (yytype_int16 const   )721, 
        (yytype_int16 const   )921,      (yytype_int16 const   )145,      (yytype_int16 const   )154,      (yytype_int16 const   )796, 
        (yytype_int16 const   )148,      (yytype_int16 const   )49,      (yytype_int16 const   )363,      (yytype_int16 const   )148, 
        (yytype_int16 const   )152,      (yytype_int16 const   )71,      (yytype_int16 const   )154,      (yytype_int16 const   )13, 
        (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17, 
        (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21, 
        (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )73, 
        (yytype_int16 const   )344,      (yytype_int16 const   )232,      (yytype_int16 const   )409,      (yytype_int16 const   )363, 
        (yytype_int16 const   )78,      (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )422, 
        (yytype_int16 const   )144,      (yytype_int16 const   )73,      (yytype_int16 const   )92,      (yytype_int16 const   )93, 
        (yytype_int16 const   )94,      (yytype_int16 const   )144,      (yytype_int16 const   )78,      (yytype_int16 const   )92, 
        (yytype_int16 const   )93,      (yytype_int16 const   )94,      (yytype_int16 const   )693,      (yytype_int16 const   )73, 
        (yytype_int16 const   )428,      (yytype_int16 const   )142,      (yytype_int16 const   )143,      (yytype_int16 const   )428, 
        (yytype_int16 const   )78,      (yytype_int16 const   )440,      (yytype_int16 const   )155,      (yytype_int16 const   )434, 
        (yytype_int16 const   )774,      (yytype_int16 const   )436,      (yytype_int16 const   )92,      (yytype_int16 const   )93, 
        (yytype_int16 const   )94,      (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )443, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )443,      (yytype_int16 const   )8, 
        (yytype_int16 const   )126,      (yytype_int16 const   )127,      (yytype_int16 const   )66,      (yytype_int16 const   )67, 
        (yytype_int16 const   )275,      (yytype_int16 const   )92,      (yytype_int16 const   )93,      (yytype_int16 const   )94, 
        (yytype_int16 const   )148,      (yytype_int16 const   )456,      (yytype_int16 const   )457,      (yytype_int16 const   )458, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )68,      (yytype_int16 const   )462, 
        (yytype_int16 const   )287,      (yytype_int16 const   )288,      (yytype_int16 const   )148,      (yytype_int16 const   )145, 
        (yytype_int16 const   )66,      (yytype_int16 const   )67,      (yytype_int16 const   )148,      (yytype_int16 const   )144, 
        (yytype_int16 const   )150,      (yytype_int16 const   )409,      (yytype_int16 const   )144,      (yytype_int16 const   )141, 
        (yytype_int16 const   )142,      (yytype_int16 const   )143,      (yytype_int16 const   )477,      (yytype_int16 const   )153, 
        (yytype_int16 const   )151,      (yytype_int16 const   )152,      (yytype_int16 const   )820,      (yytype_int16 const   )123, 
        (yytype_int16 const   )822,      (yytype_int16 const   )141,      (yytype_int16 const   )142,      (yytype_int16 const   )143, 
        (yytype_int16 const   )149,      (yytype_int16 const   )496,      (yytype_int16 const   )23,      (yytype_int16 const   )24, 
        (yytype_int16 const   )456,      (yytype_int16 const   )457,      (yytype_int16 const   )458,      (yytype_int16 const   )13, 
        (yytype_int16 const   )142,      (yytype_int16 const   )143,      (yytype_int16 const   )434,      (yytype_int16 const   )153, 
        (yytype_int16 const   )436,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )151, 
        (yytype_int16 const   )503,      (yytype_int16 const   )750,      (yytype_int16 const   )751,      (yytype_int16 const   )151, 
        (yytype_int16 const   )13,      (yytype_int16 const   )508,      (yytype_int16 const   )205,      (yytype_int16 const   )510, 
        (yytype_int16 const   )150,      (yytype_int16 const   )156,      (yytype_int16 const   )209,      (yytype_int16 const   )514, 
        (yytype_int16 const   )152,      (yytype_int16 const   )71,      (yytype_int16 const   )517,      (yytype_int16 const   )786, 
        (yytype_int16 const   )153,      (yytype_int16 const   )788,      (yytype_int16 const   )860,      (yytype_int16 const   )218, 
        (yytype_int16 const   )71,      (yytype_int16 const   )220,      (yytype_int16 const   )221,      (yytype_int16 const   )222, 
        (yytype_int16 const   )121,      (yytype_int16 const   )529,      (yytype_int16 const   )529,      (yytype_int16 const   )529, 
        (yytype_int16 const   )529,      (yytype_int16 const   )151,      (yytype_int16 const   )61,      (yytype_int16 const   )26, 
        (yytype_int16 const   )98,      (yytype_int16 const   )149,      (yytype_int16 const   )149,      (yytype_int16 const   )82, 
        (yytype_int16 const   )8,      (yytype_int16 const   )477,      (yytype_int16 const   )151,      (yytype_int16 const   )71, 
        (yytype_int16 const   )508,      (yytype_int16 const   )107,      (yytype_int16 const   )108,      (yytype_int16 const   )109, 
        (yytype_int16 const   )110,      (yytype_int16 const   )111,      (yytype_int16 const   )112,      (yytype_int16 const   )818, 
        (yytype_int16 const   )90,      (yytype_int16 const   )552,      (yytype_int16 const   )553,      (yytype_int16 const   )554, 
        (yytype_int16 const   )894,      (yytype_int16 const   )71,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )563,      (yytype_int16 const   )49,      (yytype_int16 const   )565,      (yytype_int16 const   )503, 
        (yytype_int16 const   )149,      (yytype_int16 const   )73,      (yytype_int16 const   )71,      (yytype_int16 const   )150, 
        (yytype_int16 const   )571,      (yytype_int16 const   )572,      (yytype_int16 const   )151,      (yytype_int16 const   )150, 
        (yytype_int16 const   )575,      (yytype_int16 const   )584,      (yytype_int16 const   )577,      (yytype_int16 const   )61, 
        (yytype_int16 const   )847,      (yytype_int16 const   )153,      (yytype_int16 const   )755,      (yytype_int16 const   )13, 
        (yytype_int16 const   )591,      (yytype_int16 const   )121,      (yytype_int16 const   )853,      (yytype_int16 const   )155, 
        (yytype_int16 const   )155,      (yytype_int16 const   )149,      (yytype_int16 const   )554,      (yytype_int16 const   )929, 
        (yytype_int16 const   )149,      (yytype_int16 const   )529,      (yytype_int16 const   )593,      (yytype_int16 const   )547, 
        (yytype_int16 const   )595,      (yytype_int16 const   )149,      (yytype_int16 const   )149,      (yytype_int16 const   )563, 
        (yytype_int16 const   )149,      (yytype_int16 const   )600,      (yytype_int16 const   )609,      (yytype_int16 const   )610, 
        (yytype_int16 const   )556,      (yytype_int16 const   )26,      (yytype_int16 const   )13,      (yytype_int16 const   )571, 
        (yytype_int16 const   )615,      (yytype_int16 const   )616,      (yytype_int16 const   )149,      (yytype_int16 const   )153, 
        (yytype_int16 const   )149,      (yytype_int16 const   )148,      (yytype_int16 const   )881,      (yytype_int16 const   )953, 
        (yytype_int16 const   )552,      (yytype_int16 const   )553,      (yytype_int16 const   )144,      (yytype_int16 const   )886, 
        (yytype_int16 const   )71,      (yytype_int16 const   )13,      (yytype_int16 const   )621,      (yytype_int16 const   )796, 
        (yytype_int16 const   )107,      (yytype_int16 const   )108,      (yytype_int16 const   )109,      (yytype_int16 const   )110, 
        (yytype_int16 const   )111,      (yytype_int16 const   )112,      (yytype_int16 const   )151,      (yytype_int16 const   )153, 
        (yytype_int16 const   )149,      (yytype_int16 const   )632,      (yytype_int16 const   )149,      (yytype_int16 const   )8, 
        (yytype_int16 const   )148,      (yytype_int16 const   )150,      (yytype_int16 const   )149,      (yytype_int16 const   )575, 
        (yytype_int16 const   )99,      (yytype_int16 const   )577,      (yytype_int16 const   )909,      (yytype_int16 const   )122, 
        (yytype_int16 const   )643,      (yytype_int16 const   )104,      (yytype_int16 const   )645,      (yytype_int16 const   )155, 
        (yytype_int16 const   )107,      (yytype_int16 const   )108,      (yytype_int16 const   )109,      (yytype_int16 const   )110, 
        (yytype_int16 const   )111,      (yytype_int16 const   )112,      (yytype_int16 const   )113,      (yytype_int16 const   )654, 
        (yytype_int16 const   )152,      (yytype_int16 const   )150,      (yytype_int16 const   )150,      (yytype_int16 const   )71, 
        (yytype_int16 const   )124,      (yytype_int16 const   )155,      (yytype_int16 const   )8,      (yytype_int16 const   )141, 
        (yytype_int16 const   )663,      (yytype_int16 const   )71,      (yytype_int16 const   )102,      (yytype_int16 const   )155, 
        (yytype_int16 const   )935,      (yytype_int16 const   )13,      (yytype_int16 const   )669,      (yytype_int16 const   )938, 
        (yytype_int16 const   )153,      (yytype_int16 const   )150,      (yytype_int16 const   )673,      (yytype_int16 const   )942, 
        (yytype_int16 const   )628,      (yytype_int16 const   )150,      (yytype_int16 const   )152,      (yytype_int16 const   )643, 
        (yytype_int16 const   )8,      (yytype_int16 const   )645,      (yytype_int16 const   )8,      (yytype_int16 const   )150, 
        (yytype_int16 const   )149,      (yytype_int16 const   )621,      (yytype_int16 const   )124,      (yytype_int16 const   )153, 
        (yytype_int16 const   )151,      (yytype_int16 const   )13,      (yytype_int16 const   )782,      (yytype_int16 const   )151, 
        (yytype_int16 const   )150,      (yytype_int16 const   )960,      (yytype_int16 const   )153,      (yytype_int16 const   )151, 
        (yytype_int16 const   )632,      (yytype_int16 const   )149,      (yytype_int16 const   )697,      (yytype_int16 const   )4, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )701,      (yytype_int16 const   )8, 
        (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )12, 
        (yytype_int16 const   )13,      (yytype_int16 const   )14,      (yytype_int16 const   )150,      (yytype_int16 const   )16, 
        (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20, 
        (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )654,      (yytype_int16 const   )150, 
        (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )721,      (yytype_int16 const   )151, 
        (yytype_int16 const   )150,      (yytype_int16 const   )104,      (yytype_int16 const   )73,      (yytype_int16 const   )663, 
        (yytype_int16 const   )13,      (yytype_int16 const   )61,      (yytype_int16 const   )150,      (yytype_int16 const   )150, 
        (yytype_int16 const   )37,      (yytype_int16 const   )150,      (yytype_int16 const   )150,      (yytype_int16 const   )123, 
        (yytype_int16 const   )61,      (yytype_int16 const   )701,      (yytype_int16 const   )89,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )155,      (yytype_int16 const   )749,      (yytype_int16 const   )742, 
        (yytype_int16 const   )124,      (yytype_int16 const   )150,      (yytype_int16 const   )51,      (yytype_int16 const   )150, 
        (yytype_int16 const   )71,      (yytype_int16 const   )149,      (yytype_int16 const   )152,      (yytype_int16 const   )152, 
        (yytype_int16 const   )13,      (yytype_int16 const   )123,      (yytype_int16 const   )99,      (yytype_int16 const   )755, 
        (yytype_int16 const   )151,      (yytype_int16 const   )151,      (yytype_int16 const   )755,      (yytype_int16 const   )104, 
        (yytype_int16 const   )733,      (yytype_int16 const   )697,      (yytype_int16 const   )107,      (yytype_int16 const   )108, 
        (yytype_int16 const   )109,      (yytype_int16 const   )110,      (yytype_int16 const   )111,      (yytype_int16 const   )112, 
        (yytype_int16 const   )113,      (yytype_int16 const   )83,      (yytype_int16 const   )151,      (yytype_int16 const   )13, 
        (yytype_int16 const   )77,      (yytype_int16 const   )73,      (yytype_int16 const   )773,      (yytype_int16 const   )774, 
        (yytype_int16 const   )152,      (yytype_int16 const   )71,      (yytype_int16 const   )742,      (yytype_int16 const   )13, 
        (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16,      (yytype_int16 const   )17, 
        (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20,      (yytype_int16 const   )21, 
        (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )73, 
        (yytype_int16 const   )791,      (yytype_int16 const   )13,      (yytype_int16 const   )150,      (yytype_int16 const   )155, 
        (yytype_int16 const   )796,      (yytype_int16 const   )155,      (yytype_int16 const   )151,      (yytype_int16 const   )796, 
        (yytype_int16 const   )149,      (yytype_int16 const   )151,      (yytype_int16 const   )23,      (yytype_int16 const   )24, 
        (yytype_int16 const   )13,      (yytype_int16 const   )71,      (yytype_int16 const   )27,      (yytype_int16 const   )150, 
        (yytype_int16 const   )153,      (yytype_int16 const   )773,      (yytype_int16 const   )13,      (yytype_int16 const   )153, 
        (yytype_int16 const   )153,      (yytype_int16 const   )73,      (yytype_int16 const   )149,      (yytype_int16 const   )13, 
        (yytype_int16 const   )121,      (yytype_int16 const   )68,      (yytype_int16 const   )26,      (yytype_int16 const   )73, 
        (yytype_int16 const   )819,      (yytype_int16 const   )820,      (yytype_int16 const   )153,      (yytype_int16 const   )822, 
        (yytype_int16 const   )129,      (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )791, 
        (yytype_int16 const   )90,      (yytype_int16 const   )105,      (yytype_int16 const   )151,      (yytype_int16 const   )153, 
        (yytype_int16 const   )90,      (yytype_int16 const   )151,      (yytype_int16 const   )144,      (yytype_int16 const   )834, 
        (yytype_int16 const   )73,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )801,      (yytype_int16 const   )49,      (yytype_int16 const   )87, 
        (yytype_int16 const   )151,      (yytype_int16 const   )150,      (yytype_int16 const   )71,      (yytype_int16 const   )819, 
        (yytype_int16 const   )161,      (yytype_int16 const   )319,      (yytype_int16 const   )163,      (yytype_int16 const   )13, 
        (yytype_int16 const   )149,      (yytype_int16 const   )860,      (yytype_int16 const   )167,      (yytype_int16 const   )73, 
        (yytype_int16 const   )169,      (yytype_int16 const   )151,      (yytype_int16 const   )68,      (yytype_int16 const   )172, 
        (yytype_int16 const   )867,      (yytype_int16 const   )8,      (yytype_int16 const   )834,      (yytype_int16 const   )333, 
        (yytype_int16 const   )871,      (yytype_int16 const   )26,      (yytype_int16 const   )71,      (yytype_int16 const   )8, 
        (yytype_int16 const   )71,      (yytype_int16 const   )152,      (yytype_int16 const   )877,      (yytype_int16 const   )85, 
        (yytype_int16 const   )13,      (yytype_int16 const   )14,      (yytype_int16 const   )15,      (yytype_int16 const   )16, 
        (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19,      (yytype_int16 const   )20, 
        (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23,      (yytype_int16 const   )24, 
        (yytype_int16 const   )151,      (yytype_int16 const   )150,      (yytype_int16 const   )149,      (yytype_int16 const   )894, 
        (yytype_int16 const   )73,      (yytype_int16 const   )153,      (yytype_int16 const   )203,      (yytype_int16 const   )326, 
        (yytype_int16 const   )153,      (yytype_int16 const   )102,      (yytype_int16 const   )207,      (yytype_int16 const   )867, 
        (yytype_int16 const   )150,      (yytype_int16 const   )152,      (yytype_int16 const   )951,      (yytype_int16 const   )871, 
        (yytype_int16 const   )153,      (yytype_int16 const   )363,      (yytype_int16 const   )363,      (yytype_int16 const   )477, 
        (yytype_int16 const   )217,      (yytype_int16 const   )877,      (yytype_int16 const   )595,      (yytype_int16 const   )633, 
        (yytype_int16 const   )697,      (yytype_int16 const   )807,      (yytype_int16 const   )811,      (yytype_int16 const   )668, 
        (yytype_int16 const   )673,      (yytype_int16 const   )920,      (yytype_int16 const   )921,      (yytype_int16 const   )331, 
        (yytype_int16 const   )711,      (yytype_int16 const   )146,      (yytype_int16 const   )59,      (yytype_int16 const   )60, 
        (yytype_int16 const   )679,      (yytype_int16 const   )234,      (yytype_int16 const   )929,      (yytype_int16 const   )860, 
        (yytype_int16 const   )884,      (yytype_int16 const   )563,      (yytype_int16 const   )239,      (yytype_int16 const   )240, 
        (yytype_int16 const   )241,      (yytype_int16 const   )242,      (yytype_int16 const   )243,      (yytype_int16 const   )244, 
        (yytype_int16 const   )245,      (yytype_int16 const   )246,      (yytype_int16 const   )247,      (yytype_int16 const   )248, 
        (yytype_int16 const   )249,      (yytype_int16 const   )250,      (yytype_int16 const   )251,      (yytype_int16 const   )252, 
        (yytype_int16 const   )253,      (yytype_int16 const   )254,      (yytype_int16 const   )255,      (yytype_int16 const   )256, 
        (yytype_int16 const   )257,      (yytype_int16 const   )879,      (yytype_int16 const   )953,      (yytype_int16 const   )562, 
        (yytype_int16 const   )920,      (yytype_int16 const   )262,      (yytype_int16 const   )263,      (yytype_int16 const   )264, 
        (yytype_int16 const   )265,      (yytype_int16 const   )266,      (yytype_int16 const   )267,      (yytype_int16 const   )268, 
        (yytype_int16 const   )269,      (yytype_int16 const   )270,      (yytype_int16 const   )271,      (yytype_int16 const   )272, 
        (yytype_int16 const   )273,      (yytype_int16 const   )190,      (yytype_int16 const   )203,      (yytype_int16 const   )276, 
        (yytype_int16 const   )924,      (yytype_int16 const   )278,      (yytype_int16 const   )279,      (yytype_int16 const   )190, 
        (yytype_int16 const   )577,      (yytype_int16 const   )198,      (yytype_int16 const   )199,      (yytype_int16 const   )200, 
        (yytype_int16 const   )23,      (yytype_int16 const   )24,      (yytype_int16 const   )654,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )291,      (yytype_int16 const   )208, 
        (yytype_int16 const   )293,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )456,      (yytype_int16 const   )457, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )305,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )308, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )150,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )328, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )258,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )508,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )363,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )61,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )375,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )377,      (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )382,      (yytype_int16 const   )-1,      (yytype_int16 const   )384, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )386,      (yytype_int16 const   )387,      (yytype_int16 const   )388, 
        (yytype_int16 const   )79,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )554,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )319,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )146, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )571,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )333,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )344, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )170, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )126, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130, 
        (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )190, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146, 
        (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )-1,      (yytype_int16 const   )198, 
        (yytype_int16 const   )199,      (yytype_int16 const   )200,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )208,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )9, 
        (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )643,      (yytype_int16 const   )-1,      (yytype_int16 const   )645, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )490,      (yytype_int16 const   )-1,      (yytype_int16 const   )25, 
        (yytype_int16 const   )409,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )434,      (yytype_int16 const   )-1,      (yytype_int16 const   )436, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )525,      (yytype_int16 const   )13,      (yytype_int16 const   )14,      (yytype_int16 const   )15, 
        (yytype_int16 const   )16,      (yytype_int16 const   )17,      (yytype_int16 const   )18,      (yytype_int16 const   )19, 
        (yytype_int16 const   )20,      (yytype_int16 const   )21,      (yytype_int16 const   )22,      (yytype_int16 const   )23, 
        (yytype_int16 const   )24,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )456, 
        (yytype_int16 const   )457,      (yytype_int16 const   )458,      (yytype_int16 const   )543,      (yytype_int16 const   )701, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )547,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )550,      (yytype_int16 const   )551,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )556, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )477,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )742,      (yytype_int16 const   )-1,      (yytype_int16 const   )503,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )508, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )90,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )344,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )529,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )773, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )619,      (yytype_int16 const   )620, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )155,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )627,      (yytype_int16 const   )628, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )368,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )791,      (yytype_int16 const   )-1,      (yytype_int16 const   )552, 
        (yytype_int16 const   )553,      (yytype_int16 const   )554,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )563,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )571,      (yytype_int16 const   )656, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )575,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )577,      (yytype_int16 const   )819,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )409,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )834,      (yytype_int16 const   )678,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )422, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )434, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )436,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )440,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )621,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )867,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )871,      (yytype_int16 const   )-1,      (yytype_int16 const   )632, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )877, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )643,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )645,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )654,      (yytype_int16 const   )477,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )663,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )750,      (yytype_int16 const   )751,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )496,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )761,      (yytype_int16 const   )-1,      (yytype_int16 const   )920,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )503,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )769,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )697,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )701,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )801,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )806,      (yytype_int16 const   )807,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )552,      (yytype_int16 const   )553,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )742,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )575,      (yytype_int16 const   )-1,      (yytype_int16 const   )577,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )843,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )584,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )591,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )773,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )609,      (yytype_int16 const   )610, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )791,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )615,      (yytype_int16 const   )616,      (yytype_int16 const   )-1,      (yytype_int16 const   )880, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )621,      (yytype_int16 const   )884, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )632,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )819,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )654, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )834,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )924, 
        (yytype_int16 const   )663,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )3,      (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6, 
        (yytype_int16 const   )7,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )12,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )867,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )871,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )697,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )877,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50, 
        (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54, 
        (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62, 
        (yytype_int16 const   )63,      (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )75,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )920, 
        (yytype_int16 const   )79,      (yytype_int16 const   )80,      (yytype_int16 const   )81,      (yytype_int16 const   )82, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )84,      (yytype_int16 const   )749,      (yytype_int16 const   )86, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )88,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )91,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )95,      (yytype_int16 const   )96,      (yytype_int16 const   )97,      (yytype_int16 const   )98, 
        (yytype_int16 const   )99,      (yytype_int16 const   )100,      (yytype_int16 const   )101,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )103,      (yytype_int16 const   )104,      (yytype_int16 const   )-1,      (yytype_int16 const   )106, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )110, 
        (yytype_int16 const   )111,      (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )114, 
        (yytype_int16 const   )115,      (yytype_int16 const   )116,      (yytype_int16 const   )117,      (yytype_int16 const   )118, 
        (yytype_int16 const   )119,      (yytype_int16 const   )120,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130, 
        (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )3, 
        (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )12,      (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146, 
        (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )151,      (yytype_int16 const   )152,      (yytype_int16 const   )-1,      (yytype_int16 const   )154, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51, 
        (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )75, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79, 
        (yytype_int16 const   )80,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )84,      (yytype_int16 const   )-1,      (yytype_int16 const   )86,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )88,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )91, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )95, 
        (yytype_int16 const   )96,      (yytype_int16 const   )97,      (yytype_int16 const   )98,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )100,      (yytype_int16 const   )101,      (yytype_int16 const   )-1,      (yytype_int16 const   )103, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )106,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )110,      (yytype_int16 const   )111, 
        (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )114,      (yytype_int16 const   )115, 
        (yytype_int16 const   )116,      (yytype_int16 const   )117,      (yytype_int16 const   )118,      (yytype_int16 const   )119, 
        (yytype_int16 const   )120,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131, 
        (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )-1,      (yytype_int16 const   )3, 
        (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )12,      (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )151, 
        (yytype_int16 const   )152,      (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )26,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51, 
        (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )75, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79, 
        (yytype_int16 const   )80,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )84,      (yytype_int16 const   )-1,      (yytype_int16 const   )86,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )88,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )91, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )95, 
        (yytype_int16 const   )96,      (yytype_int16 const   )97,      (yytype_int16 const   )98,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )100,      (yytype_int16 const   )101,      (yytype_int16 const   )-1,      (yytype_int16 const   )103, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )106,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )114,      (yytype_int16 const   )115, 
        (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131, 
        (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )-1,      (yytype_int16 const   )3, 
        (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )12,      (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )151, 
        (yytype_int16 const   )152,      (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )26,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51, 
        (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )75, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79, 
        (yytype_int16 const   )80,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )84,      (yytype_int16 const   )-1,      (yytype_int16 const   )86,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )88,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )91, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )95, 
        (yytype_int16 const   )96,      (yytype_int16 const   )97,      (yytype_int16 const   )98,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )100,      (yytype_int16 const   )101,      (yytype_int16 const   )-1,      (yytype_int16 const   )103, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )106,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )114,      (yytype_int16 const   )115, 
        (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131, 
        (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )-1,      (yytype_int16 const   )3, 
        (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )12,      (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )151, 
        (yytype_int16 const   )152,      (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )26,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51, 
        (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )75, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79, 
        (yytype_int16 const   )80,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )84,      (yytype_int16 const   )-1,      (yytype_int16 const   )86,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )88,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )91, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )95, 
        (yytype_int16 const   )96,      (yytype_int16 const   )97,      (yytype_int16 const   )98,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )100,      (yytype_int16 const   )101,      (yytype_int16 const   )-1,      (yytype_int16 const   )103, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )106,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )114,      (yytype_int16 const   )115, 
        (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131, 
        (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )-1,      (yytype_int16 const   )3, 
        (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )12,      (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )151, 
        (yytype_int16 const   )152,      (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )26,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51, 
        (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63, 
        (yytype_int16 const   )64,      (yytype_int16 const   )65,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )75, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79, 
        (yytype_int16 const   )80,      (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )84,      (yytype_int16 const   )-1,      (yytype_int16 const   )86,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )88,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )91, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )95, 
        (yytype_int16 const   )96,      (yytype_int16 const   )97,      (yytype_int16 const   )98,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )100,      (yytype_int16 const   )101,      (yytype_int16 const   )-1,      (yytype_int16 const   )103, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )106,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )114,      (yytype_int16 const   )115, 
        (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131, 
        (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )3,      (yytype_int16 const   )4, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )12, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )151, 
        (yytype_int16 const   )152,      (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )48, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51,      (yytype_int16 const   )52, 
        (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55,      (yytype_int16 const   )56, 
        (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60, 
        (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )64, 
        (yytype_int16 const   )65,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )72, 
        (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )75,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79,      (yytype_int16 const   )80, 
        (yytype_int16 const   )81,      (yytype_int16 const   )82,      (yytype_int16 const   )-1,      (yytype_int16 const   )84, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )86,      (yytype_int16 const   )-1,      (yytype_int16 const   )88, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )91,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )95,      (yytype_int16 const   )96, 
        (yytype_int16 const   )97,      (yytype_int16 const   )98,      (yytype_int16 const   )-1,      (yytype_int16 const   )100, 
        (yytype_int16 const   )101,      (yytype_int16 const   )-1,      (yytype_int16 const   )103,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )106,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )112, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )114,      (yytype_int16 const   )115,      (yytype_int16 const   )116, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1,      (yytype_int16 const   )128, 
        (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131,      (yytype_int16 const   )132, 
        (yytype_int16 const   )133,      (yytype_int16 const   )3,      (yytype_int16 const   )4,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )-1,      (yytype_int16 const   )140, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )12,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147,      (yytype_int16 const   )148, 
        (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )151,      (yytype_int16 const   )152, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1,      (yytype_int16 const   )156, 
        (yytype_int16 const   )157,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )31,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )48,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )50,      (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )53, 
        (yytype_int16 const   )54,      (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )57, 
        (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61, 
        (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )64,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )72,      (yytype_int16 const   )73, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )79,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )98,      (yytype_int16 const   )49,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )112,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )115,      (yytype_int16 const   )116,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )125, 
        (yytype_int16 const   )126,      (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129, 
        (yytype_int16 const   )130,      (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133, 
        (yytype_int16 const   )3,      (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6, 
        (yytype_int16 const   )7,      (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )12,      (yytype_int16 const   )-1,      (yytype_int16 const   )145, 
        (yytype_int16 const   )146,      (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )149, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )154,      (yytype_int16 const   )-1,      (yytype_int16 const   )156,      (yytype_int16 const   )157, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50, 
        (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54, 
        (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62, 
        (yytype_int16 const   )63,      (yytype_int16 const   )64,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )79,      (yytype_int16 const   )-1,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40, 
        (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )98, 
        (yytype_int16 const   )49,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )115,      (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130, 
        (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )3, 
        (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )12,      (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146, 
        (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )151,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )154, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51, 
        (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63, 
        (yytype_int16 const   )64,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )98,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )115, 
        (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131, 
        (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )3,      (yytype_int16 const   )4, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )12, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )151, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )48, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51,      (yytype_int16 const   )52, 
        (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55,      (yytype_int16 const   )56, 
        (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60, 
        (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )64, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )72, 
        (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40, 
        (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )49,      (yytype_int16 const   )98,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )112, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )115,      (yytype_int16 const   )116, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1,      (yytype_int16 const   )128, 
        (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131,      (yytype_int16 const   )132, 
        (yytype_int16 const   )133,      (yytype_int16 const   )3,      (yytype_int16 const   )4,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )-1,      (yytype_int16 const   )140, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )12,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147,      (yytype_int16 const   )148, 
        (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )151,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1,      (yytype_int16 const   )156, 
        (yytype_int16 const   )157,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )48,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )50,      (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )53, 
        (yytype_int16 const   )54,      (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )57, 
        (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61, 
        (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )64,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )72,      (yytype_int16 const   )73, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )79,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )98,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )112,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )115,      (yytype_int16 const   )116,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )125, 
        (yytype_int16 const   )126,      (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129, 
        (yytype_int16 const   )130,      (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133, 
        (yytype_int16 const   )3,      (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6, 
        (yytype_int16 const   )7,      (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )12,      (yytype_int16 const   )-1,      (yytype_int16 const   )145, 
        (yytype_int16 const   )146,      (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )149, 
        (yytype_int16 const   )150,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )154,      (yytype_int16 const   )-1,      (yytype_int16 const   )156,      (yytype_int16 const   )157, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )31,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50, 
        (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54, 
        (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62, 
        (yytype_int16 const   )63,      (yytype_int16 const   )64,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )79,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )98, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )115,      (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130, 
        (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )3, 
        (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )12,      (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146, 
        (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )154, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )31, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51, 
        (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63, 
        (yytype_int16 const   )64,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )98,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )115, 
        (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131, 
        (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )3,      (yytype_int16 const   )4, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )12, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )31,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )48, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51,      (yytype_int16 const   )52, 
        (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55,      (yytype_int16 const   )56, 
        (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60, 
        (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )64, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )72, 
        (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )98,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )112, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )115,      (yytype_int16 const   )116, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1,      (yytype_int16 const   )128, 
        (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131,      (yytype_int16 const   )132, 
        (yytype_int16 const   )133,      (yytype_int16 const   )3,      (yytype_int16 const   )4,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )-1,      (yytype_int16 const   )140, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )12,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147,      (yytype_int16 const   )148, 
        (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1,      (yytype_int16 const   )156, 
        (yytype_int16 const   )157,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )31,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )48,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )50,      (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )53, 
        (yytype_int16 const   )54,      (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )57, 
        (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61, 
        (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )64,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )72,      (yytype_int16 const   )73, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )79,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )98,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )112,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )115,      (yytype_int16 const   )116,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )125, 
        (yytype_int16 const   )126,      (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129, 
        (yytype_int16 const   )130,      (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133, 
        (yytype_int16 const   )3,      (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6, 
        (yytype_int16 const   )7,      (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )12,      (yytype_int16 const   )-1,      (yytype_int16 const   )145, 
        (yytype_int16 const   )146,      (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )149, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )154,      (yytype_int16 const   )-1,      (yytype_int16 const   )156,      (yytype_int16 const   )157, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )31,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50, 
        (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54, 
        (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58, 
        (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62, 
        (yytype_int16 const   )63,      (yytype_int16 const   )64,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70, 
        (yytype_int16 const   )71,      (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )79,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )98, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )115,      (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130, 
        (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )3, 
        (yytype_int16 const   )4,      (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )12,      (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146, 
        (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )154, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )31, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )48,      (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51, 
        (yytype_int16 const   )52,      (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55, 
        (yytype_int16 const   )56,      (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59, 
        (yytype_int16 const   )60,      (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63, 
        (yytype_int16 const   )64,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71, 
        (yytype_int16 const   )72,      (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )98,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )112,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )115, 
        (yytype_int16 const   )116,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )128,      (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131, 
        (yytype_int16 const   )132,      (yytype_int16 const   )133,      (yytype_int16 const   )3,      (yytype_int16 const   )4, 
        (yytype_int16 const   )5,      (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )140,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )12, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147, 
        (yytype_int16 const   )148,      (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )156,      (yytype_int16 const   )157,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )48, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )50,      (yytype_int16 const   )51,      (yytype_int16 const   )52, 
        (yytype_int16 const   )53,      (yytype_int16 const   )54,      (yytype_int16 const   )55,      (yytype_int16 const   )56, 
        (yytype_int16 const   )57,      (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60, 
        (yytype_int16 const   )61,      (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )64, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )69,      (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )72, 
        (yytype_int16 const   )73,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )79,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )98,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )112, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )115,      (yytype_int16 const   )116, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )125,      (yytype_int16 const   )126,      (yytype_int16 const   )-1,      (yytype_int16 const   )128, 
        (yytype_int16 const   )129,      (yytype_int16 const   )130,      (yytype_int16 const   )131,      (yytype_int16 const   )132, 
        (yytype_int16 const   )133,      (yytype_int16 const   )3,      (yytype_int16 const   )4,      (yytype_int16 const   )5, 
        (yytype_int16 const   )6,      (yytype_int16 const   )7,      (yytype_int16 const   )-1,      (yytype_int16 const   )140, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )12,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )145,      (yytype_int16 const   )146,      (yytype_int16 const   )147,      (yytype_int16 const   )148, 
        (yytype_int16 const   )149,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )154,      (yytype_int16 const   )-1,      (yytype_int16 const   )156, 
        (yytype_int16 const   )157,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )48,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )50,      (yytype_int16 const   )51,      (yytype_int16 const   )52,      (yytype_int16 const   )53, 
        (yytype_int16 const   )54,      (yytype_int16 const   )55,      (yytype_int16 const   )56,      (yytype_int16 const   )57, 
        (yytype_int16 const   )58,      (yytype_int16 const   )59,      (yytype_int16 const   )60,      (yytype_int16 const   )61, 
        (yytype_int16 const   )62,      (yytype_int16 const   )63,      (yytype_int16 const   )64,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )69, 
        (yytype_int16 const   )70,      (yytype_int16 const   )71,      (yytype_int16 const   )72,      (yytype_int16 const   )73, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )79,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )98,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )112,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )115,      (yytype_int16 const   )116,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )125, 
        (yytype_int16 const   )126,      (yytype_int16 const   )-1,      (yytype_int16 const   )128,      (yytype_int16 const   )129, 
        (yytype_int16 const   )130,      (yytype_int16 const   )131,      (yytype_int16 const   )132,      (yytype_int16 const   )133, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )140,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )145, 
        (yytype_int16 const   )146,      (yytype_int16 const   )147,      (yytype_int16 const   )148,      (yytype_int16 const   )149, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )154,      (yytype_int16 const   )-1,      (yytype_int16 const   )156,      (yytype_int16 const   )157, 
        (yytype_int16 const   )25,      (yytype_int16 const   )-1,      (yytype_int16 const   )27,      (yytype_int16 const   )28, 
        (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40, 
        (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )-1,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )9, 
        (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25, 
        (yytype_int16 const   )153,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49, 
        (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )25,      (yytype_int16 const   )153,      (yytype_int16 const   )27,      (yytype_int16 const   )28, 
        (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40, 
        (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )153,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )153, 
        (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27,      (yytype_int16 const   )28, 
        (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40, 
        (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )153,      (yytype_int16 const   )25,      (yytype_int16 const   )-1,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )153,      (yytype_int16 const   )25,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )151,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )151, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9, 
        (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25, 
        (yytype_int16 const   )151,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )9,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )151, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9, 
        (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25, 
        (yytype_int16 const   )151,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )150,      (yytype_int16 const   )25,      (yytype_int16 const   )-1,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )150, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9, 
        (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25, 
        (yytype_int16 const   )150,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )150,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )150, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9, 
        (yytype_int16 const   )10,      (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25, 
        (yytype_int16 const   )150,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )150,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )150, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )150,      (yytype_int16 const   )9,      (yytype_int16 const   )10,      (yytype_int16 const   )11, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )124,      (yytype_int16 const   )25,      (yytype_int16 const   )26,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )9,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )124,      (yytype_int16 const   )25,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )10, 
        (yytype_int16 const   )11,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )11,      (yytype_int16 const   )49,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )-1,      (yytype_int16 const   )25, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )25,      (yytype_int16 const   )49, 
        (yytype_int16 const   )27,      (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30, 
        (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34, 
        (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38, 
        (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42, 
        (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46, 
        (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )27, 
        (yytype_int16 const   )28,      (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31, 
        (yytype_int16 const   )32,      (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35, 
        (yytype_int16 const   )36,      (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39, 
        (yytype_int16 const   )40,      (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43, 
        (yytype_int16 const   )44,      (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47, 
        (yytype_int16 const   )-1,      (yytype_int16 const   )49,      (yytype_int16 const   )28,      (yytype_int16 const   )29, 
        (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32,      (yytype_int16 const   )33, 
        (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36,      (yytype_int16 const   )37, 
        (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40,      (yytype_int16 const   )41, 
        (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44,      (yytype_int16 const   )45, 
        (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1,      (yytype_int16 const   )49, 
        (yytype_int16 const   )29,      (yytype_int16 const   )30,      (yytype_int16 const   )31,      (yytype_int16 const   )32, 
        (yytype_int16 const   )33,      (yytype_int16 const   )34,      (yytype_int16 const   )35,      (yytype_int16 const   )36, 
        (yytype_int16 const   )37,      (yytype_int16 const   )38,      (yytype_int16 const   )39,      (yytype_int16 const   )40, 
        (yytype_int16 const   )41,      (yytype_int16 const   )42,      (yytype_int16 const   )43,      (yytype_int16 const   )44, 
        (yytype_int16 const   )45,      (yytype_int16 const   )46,      (yytype_int16 const   )47,      (yytype_int16 const   )-1, 
        (yytype_int16 const   )49};
static yytype_uint16 const   yystos[963]  = 
  {      (yytype_uint16 const   )0,      (yytype_uint16 const   )159,      (yytype_uint16 const   )160,      (yytype_uint16 const   )0, 
        (yytype_uint16 const   )161,      (yytype_uint16 const   )3,      (yytype_uint16 const   )4,      (yytype_uint16 const   )5, 
        (yytype_uint16 const   )6,      (yytype_uint16 const   )7,      (yytype_uint16 const   )12,      (yytype_uint16 const   )42, 
        (yytype_uint16 const   )43,      (yytype_uint16 const   )48,      (yytype_uint16 const   )50,      (yytype_uint16 const   )51, 
        (yytype_uint16 const   )52,      (yytype_uint16 const   )53,      (yytype_uint16 const   )54,      (yytype_uint16 const   )55, 
        (yytype_uint16 const   )56,      (yytype_uint16 const   )57,      (yytype_uint16 const   )58,      (yytype_uint16 const   )59, 
        (yytype_uint16 const   )60,      (yytype_uint16 const   )61,      (yytype_uint16 const   )62,      (yytype_uint16 const   )63, 
        (yytype_uint16 const   )64,      (yytype_uint16 const   )65,      (yytype_uint16 const   )69,      (yytype_uint16 const   )70, 
        (yytype_uint16 const   )71,      (yytype_uint16 const   )72,      (yytype_uint16 const   )73,      (yytype_uint16 const   )75, 
        (yytype_uint16 const   )79,      (yytype_uint16 const   )80,      (yytype_uint16 const   )81,      (yytype_uint16 const   )82, 
        (yytype_uint16 const   )84,      (yytype_uint16 const   )86,      (yytype_uint16 const   )88,      (yytype_uint16 const   )91, 
        (yytype_uint16 const   )95,      (yytype_uint16 const   )96,      (yytype_uint16 const   )97,      (yytype_uint16 const   )98, 
        (yytype_uint16 const   )99,      (yytype_uint16 const   )100,      (yytype_uint16 const   )101,      (yytype_uint16 const   )103, 
        (yytype_uint16 const   )104,      (yytype_uint16 const   )106,      (yytype_uint16 const   )110,      (yytype_uint16 const   )111, 
        (yytype_uint16 const   )112,      (yytype_uint16 const   )114,      (yytype_uint16 const   )115,      (yytype_uint16 const   )116, 
        (yytype_uint16 const   )117,      (yytype_uint16 const   )118,      (yytype_uint16 const   )119,      (yytype_uint16 const   )120, 
        (yytype_uint16 const   )125,      (yytype_uint16 const   )126,      (yytype_uint16 const   )128,      (yytype_uint16 const   )129, 
        (yytype_uint16 const   )130,      (yytype_uint16 const   )131,      (yytype_uint16 const   )132,      (yytype_uint16 const   )133, 
        (yytype_uint16 const   )140,      (yytype_uint16 const   )145,      (yytype_uint16 const   )146,      (yytype_uint16 const   )147, 
        (yytype_uint16 const   )148,      (yytype_uint16 const   )149,      (yytype_uint16 const   )151,      (yytype_uint16 const   )152, 
        (yytype_uint16 const   )154,      (yytype_uint16 const   )156,      (yytype_uint16 const   )157,      (yytype_uint16 const   )162, 
        (yytype_uint16 const   )163,      (yytype_uint16 const   )168,      (yytype_uint16 const   )172,      (yytype_uint16 const   )173, 
        (yytype_uint16 const   )203,      (yytype_uint16 const   )204,      (yytype_uint16 const   )206,      (yytype_uint16 const   )208, 
        (yytype_uint16 const   )211,      (yytype_uint16 const   )213,      (yytype_uint16 const   )270,      (yytype_uint16 const   )284, 
        (yytype_uint16 const   )287,      (yytype_uint16 const   )296,      (yytype_uint16 const   )307,      (yytype_uint16 const   )310, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )315,      (yytype_uint16 const   )317,      (yytype_uint16 const   )318, 
        (yytype_uint16 const   )328,      (yytype_uint16 const   )329,      (yytype_uint16 const   )330,      (yytype_uint16 const   )331, 
        (yytype_uint16 const   )333,      (yytype_uint16 const   )334,      (yytype_uint16 const   )335,      (yytype_uint16 const   )336, 
        (yytype_uint16 const   )342,      (yytype_uint16 const   )352,      (yytype_uint16 const   )355,      (yytype_uint16 const   )71, 
        (yytype_uint16 const   )112,      (yytype_uint16 const   )145,      (yytype_uint16 const   )284,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )149,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )281,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )112,      (yytype_uint16 const   )145,      (yytype_uint16 const   )148, 
        (yytype_uint16 const   )162,      (yytype_uint16 const   )296,      (yytype_uint16 const   )317,      (yytype_uint16 const   )318, 
        (yytype_uint16 const   )330,      (yytype_uint16 const   )317,      (yytype_uint16 const   )31,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )346,      (yytype_uint16 const   )347,      (yytype_uint16 const   )314,      (yytype_uint16 const   )145, 
        (yytype_uint16 const   )148,      (yytype_uint16 const   )162,      (yytype_uint16 const   )296,      (yytype_uint16 const   )298, 
        (yytype_uint16 const   )299,      (yytype_uint16 const   )330,      (yytype_uint16 const   )334,      (yytype_uint16 const   )335, 
        (yytype_uint16 const   )342,      (yytype_uint16 const   )149,      (yytype_uint16 const   )304,      (yytype_uint16 const   )149, 
        (yytype_uint16 const   )26,      (yytype_uint16 const   )266,      (yytype_uint16 const   )314,      (yytype_uint16 const   )180, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )149,      (yytype_uint16 const   )149,      (yytype_uint16 const   )190, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )151,      (yytype_uint16 const   )314,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )71,      (yytype_uint16 const   )71,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )314,      (yytype_uint16 const   )318,      (yytype_uint16 const   )191, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )148,      (yytype_uint16 const   )162,      (yytype_uint16 const   )166, 
        (yytype_uint16 const   )167,      (yytype_uint16 const   )73,      (yytype_uint16 const   )154,      (yytype_uint16 const   )240, 
        (yytype_uint16 const   )241,      (yytype_uint16 const   )118,      (yytype_uint16 const   )118,      (yytype_uint16 const   )73, 
        (yytype_uint16 const   )242,      (yytype_uint16 const   )284,      (yytype_uint16 const   )149,      (yytype_uint16 const   )149, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )149,      (yytype_uint16 const   )149,      (yytype_uint16 const   )149, 
        (yytype_uint16 const   )73,      (yytype_uint16 const   )78,      (yytype_uint16 const   )141,      (yytype_uint16 const   )142, 
        (yytype_uint16 const   )143,      (yytype_uint16 const   )348,      (yytype_uint16 const   )349,      (yytype_uint16 const   )148, 
        (yytype_uint16 const   )152,      (yytype_uint16 const   )162,      (yytype_uint16 const   )162,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )169,      (yytype_uint16 const   )152,      (yytype_uint16 const   )78,      (yytype_uint16 const   )305, 
        (yytype_uint16 const   )348,      (yytype_uint16 const   )78,      (yytype_uint16 const   )348,      (yytype_uint16 const   )148, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )8,      (yytype_uint16 const   )151,      (yytype_uint16 const   )71, 
        (yytype_uint16 const   )71,      (yytype_uint16 const   )31,      (yytype_uint16 const   )205,      (yytype_uint16 const   )332, 
        (yytype_uint16 const   )144,      (yytype_uint16 const   )9,      (yytype_uint16 const   )10,      (yytype_uint16 const   )11, 
        (yytype_uint16 const   )25,      (yytype_uint16 const   )27,      (yytype_uint16 const   )28,      (yytype_uint16 const   )29, 
        (yytype_uint16 const   )30,      (yytype_uint16 const   )31,      (yytype_uint16 const   )32,      (yytype_uint16 const   )33, 
        (yytype_uint16 const   )34,      (yytype_uint16 const   )35,      (yytype_uint16 const   )36,      (yytype_uint16 const   )37, 
        (yytype_uint16 const   )38,      (yytype_uint16 const   )39,      (yytype_uint16 const   )40,      (yytype_uint16 const   )41, 
        (yytype_uint16 const   )42,      (yytype_uint16 const   )43,      (yytype_uint16 const   )44,      (yytype_uint16 const   )45, 
        (yytype_uint16 const   )46,      (yytype_uint16 const   )47,      (yytype_uint16 const   )49,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )59,      (yytype_uint16 const   )60,      (yytype_uint16 const   )13,      (yytype_uint16 const   )14, 
        (yytype_uint16 const   )15,      (yytype_uint16 const   )16,      (yytype_uint16 const   )17,      (yytype_uint16 const   )18, 
        (yytype_uint16 const   )19,      (yytype_uint16 const   )20,      (yytype_uint16 const   )21,      (yytype_uint16 const   )22, 
        (yytype_uint16 const   )23,      (yytype_uint16 const   )24,      (yytype_uint16 const   )149,      (yytype_uint16 const   )144, 
        (yytype_uint16 const   )61,      (yytype_uint16 const   )123,      (yytype_uint16 const   )61,      (yytype_uint16 const   )152, 
        (yytype_uint16 const   )154,      (yytype_uint16 const   )335,      (yytype_uint16 const   )205,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )148,      (yytype_uint16 const   )162,      (yytype_uint16 const   )144, 
        (yytype_uint16 const   )144,      (yytype_uint16 const   )316,      (yytype_uint16 const   )318,      (yytype_uint16 const   )124, 
        (yytype_uint16 const   )155,      (yytype_uint16 const   )8,      (yytype_uint16 const   )312,      (yytype_uint16 const   )148, 
        (yytype_uint16 const   )162,      (yytype_uint16 const   )144,      (yytype_uint16 const   )273,      (yytype_uint16 const   )144, 
        (yytype_uint16 const   )123,      (yytype_uint16 const   )335,      (yytype_uint16 const   )150,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )8,      (yytype_uint16 const   )151,      (yytype_uint16 const   )172, 
        (yytype_uint16 const   )178,      (yytype_uint16 const   )267,      (yytype_uint16 const   )268,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )318,      (yytype_uint16 const   )149,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )151,      (yytype_uint16 const   )151,      (yytype_uint16 const   )151,      (yytype_uint16 const   )13, 
        (yytype_uint16 const   )151,      (yytype_uint16 const   )151,      (yytype_uint16 const   )152,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )162,      (yytype_uint16 const   )90,      (yytype_uint16 const   )8,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )152,      (yytype_uint16 const   )315,      (yytype_uint16 const   )318,      (yytype_uint16 const   )8, 
        (yytype_uint16 const   )151,      (yytype_uint16 const   )13,      (yytype_uint16 const   )8,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )205,      (yytype_uint16 const   )201,      (yytype_uint16 const   )202,      (yytype_uint16 const   )318, 
        (yytype_uint16 const   )318,      (yytype_uint16 const   )353,      (yytype_uint16 const   )318,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )271,      (yytype_uint16 const   )346,      (yytype_uint16 const   )61,      (yytype_uint16 const   )123, 
        (yytype_uint16 const   )141,      (yytype_uint16 const   )349,      (yytype_uint16 const   )72,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )318,      (yytype_uint16 const   )78,      (yytype_uint16 const   )141,      (yytype_uint16 const   )349, 
        (yytype_uint16 const   )162,      (yytype_uint16 const   )165,      (yytype_uint16 const   )151,      (yytype_uint16 const   )152, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )150,      (yytype_uint16 const   )153,      (yytype_uint16 const   )170, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )156,      (yytype_uint16 const   )157,      (yytype_uint16 const   )71, 
        (yytype_uint16 const   )288,      (yytype_uint16 const   )71,      (yytype_uint16 const   )121,      (yytype_uint16 const   )212, 
        (yytype_uint16 const   )210,      (yytype_uint16 const   )71,      (yytype_uint16 const   )149,      (yytype_uint16 const   )61, 
        (yytype_uint16 const   )71,      (yytype_uint16 const   )152,      (yytype_uint16 const   )328,      (yytype_uint16 const   )335, 
        (yytype_uint16 const   )341,      (yytype_uint16 const   )342,      (yytype_uint16 const   )276,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )277,      (yytype_uint16 const   )26,      (yytype_uint16 const   )278,      (yytype_uint16 const   )274, 
        (yytype_uint16 const   )275,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )298,      (yytype_uint16 const   )31,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )314,      (yytype_uint16 const   )295,      (yytype_uint16 const   )71, 
        (yytype_uint16 const   )328,      (yytype_uint16 const   )341,      (yytype_uint16 const   )314,      (yytype_uint16 const   )337, 
        (yytype_uint16 const   )319,      (yytype_uint16 const   )337,      (yytype_uint16 const   )314,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )162,      (yytype_uint16 const   )71,      (yytype_uint16 const   )31,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )31,      (yytype_uint16 const   )314,      (yytype_uint16 const   )162,      (yytype_uint16 const   )328, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )306,      (yytype_uint16 const   )328,      (yytype_uint16 const   )300, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )150,      (yytype_uint16 const   )314,      (yytype_uint16 const   )82, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )151,      (yytype_uint16 const   )8,      (yytype_uint16 const   )90, 
        (yytype_uint16 const   )90,      (yytype_uint16 const   )71,      (yytype_uint16 const   )222,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )42,      (yytype_uint16 const   )43,      (yytype_uint16 const   )61,      (yytype_uint16 const   )126, 
        (yytype_uint16 const   )140,      (yytype_uint16 const   )145,      (yytype_uint16 const   )148,      (yytype_uint16 const   )162, 
        (yytype_uint16 const   )296,      (yytype_uint16 const   )307,      (yytype_uint16 const   )308,      (yytype_uint16 const   )309, 
        (yytype_uint16 const   )169,      (yytype_uint16 const   )90,      (yytype_uint16 const   )71,      (yytype_uint16 const   )167, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )241,      (yytype_uint16 const   )308,      (yytype_uint16 const   )73, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )8,      (yytype_uint16 const   )150,      (yytype_uint16 const   )8, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )150,      (yytype_uint16 const   )151,      (yytype_uint16 const   )125, 
        (yytype_uint16 const   )318,      (yytype_uint16 const   )343,      (yytype_uint16 const   )344,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )350,      (yytype_uint16 const   )71,      (yytype_uint16 const   )61,      (yytype_uint16 const   )153, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )149,      (yytype_uint16 const   )160,      (yytype_uint16 const   )164, 
        (yytype_uint16 const   )290,      (yytype_uint16 const   )117,      (yytype_uint16 const   )171,      (yytype_uint16 const   )172, 
        (yytype_uint16 const   )203,      (yytype_uint16 const   )204,      (yytype_uint16 const   )153,      (yytype_uint16 const   )31, 
        (yytype_uint16 const   )238,      (yytype_uint16 const   )239,      (yytype_uint16 const   )270,      (yytype_uint16 const   )318, 
        (yytype_uint16 const   )13,      (yytype_uint16 const   )145,      (yytype_uint16 const   )148,      (yytype_uint16 const   )162, 
        (yytype_uint16 const   )297,      (yytype_uint16 const   )209,      (yytype_uint16 const   )121,      (yytype_uint16 const   )214, 
        (yytype_uint16 const   )207,      (yytype_uint16 const   )282,      (yytype_uint16 const   )337,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )149,      (yytype_uint16 const   )335,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )280,      (yytype_uint16 const   )314,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )63,      (yytype_uint16 const   )318,      (yytype_uint16 const   )238, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )149,      (yytype_uint16 const   )155,      (yytype_uint16 const   )328, 
        (yytype_uint16 const   )338,      (yytype_uint16 const   )340,      (yytype_uint16 const   )341,      (yytype_uint16 const   )155, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )316,      (yytype_uint16 const   )316,      (yytype_uint16 const   )124, 
        (yytype_uint16 const   )238,      (yytype_uint16 const   )338,      (yytype_uint16 const   )26,      (yytype_uint16 const   )174, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )150,      (yytype_uint16 const   )182,      (yytype_uint16 const   )269, 
        (yytype_uint16 const   )188,      (yytype_uint16 const   )186,      (yytype_uint16 const   )13,      (yytype_uint16 const   )8, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )185,      (yytype_uint16 const   )308,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )311,      (yytype_uint16 const   )313,      (yytype_uint16 const   )149, 
        (yytype_uint16 const   )78,      (yytype_uint16 const   )148,      (yytype_uint16 const   )162,      (yytype_uint16 const   )144, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )71,      (yytype_uint16 const   )153,      (yytype_uint16 const   )13, 
        (yytype_uint16 const   )283,      (yytype_uint16 const   )202,      (yytype_uint16 const   )151,      (yytype_uint16 const   )354, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )8,      (yytype_uint16 const   )150,      (yytype_uint16 const   )71, 
        (yytype_uint16 const   )73,      (yytype_uint16 const   )74,      (yytype_uint16 const   )351,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )289,      (yytype_uint16 const   )153,      (yytype_uint16 const   )160,      (yytype_uint16 const   )238, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )316,      (yytype_uint16 const   )150,      (yytype_uint16 const   )8, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )148,      (yytype_uint16 const   )162,      (yytype_uint16 const   )122, 
        (yytype_uint16 const   )215,      (yytype_uint16 const   )216,      (yytype_uint16 const   )297,      (yytype_uint16 const   )152, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )126,      (yytype_uint16 const   )127,      (yytype_uint16 const   )235, 
        (yytype_uint16 const   )236,      (yytype_uint16 const   )237,      (yytype_uint16 const   )297,      (yytype_uint16 const   )155, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )292,      (yytype_uint16 const   )291,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )26,      (yytype_uint16 const   )298,      (yytype_uint16 const   )150,      (yytype_uint16 const   )294, 
        (yytype_uint16 const   )293,      (yytype_uint16 const   )339,      (yytype_uint16 const   )320,      (yytype_uint16 const   )61, 
        (yytype_uint16 const   )152,      (yytype_uint16 const   )31,      (yytype_uint16 const   )314,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )301,      (yytype_uint16 const   )176,      (yytype_uint16 const   )172,      (yytype_uint16 const   )181, 
        (yytype_uint16 const   )179,      (yytype_uint16 const   )267,      (yytype_uint16 const   )314,      (yytype_uint16 const   )318, 
        (yytype_uint16 const   )31,      (yytype_uint16 const   )218,      (yytype_uint16 const   )318,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )71,      (yytype_uint16 const   )26,      (yytype_uint16 const   )172,      (yytype_uint16 const   )221, 
        (yytype_uint16 const   )26,      (yytype_uint16 const   )152,      (yytype_uint16 const   )223,      (yytype_uint16 const   )124, 
        (yytype_uint16 const   )155,      (yytype_uint16 const   )8,      (yytype_uint16 const   )312,      (yytype_uint16 const   )311, 
        (yytype_uint16 const   )162,      (yytype_uint16 const   )71,      (yytype_uint16 const   )102,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )235,      (yytype_uint16 const   )318,      (yytype_uint16 const   )345,      (yytype_uint16 const   )344, 
        (yytype_uint16 const   )13,      (yytype_uint16 const   )155,      (yytype_uint16 const   )155,      (yytype_uint16 const   )238, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )150,      (yytype_uint16 const   )150,      (yytype_uint16 const   )31, 
        (yytype_uint16 const   )270,      (yytype_uint16 const   )318,      (yytype_uint16 const   )162,      (yytype_uint16 const   )216, 
        (yytype_uint16 const   )152,      (yytype_uint16 const   )8,      (yytype_uint16 const   )243,      (yytype_uint16 const   )235, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )8,      (yytype_uint16 const   )31,      (yytype_uint16 const   )73, 
        (yytype_uint16 const   )238,      (yytype_uint16 const   )238,      (yytype_uint16 const   )279,      (yytype_uint16 const   )272, 
        (yytype_uint16 const   )238,      (yytype_uint16 const   )238,      (yytype_uint16 const   )149,      (yytype_uint16 const   )324, 
        (yytype_uint16 const   )325,      (yytype_uint16 const   )327,      (yytype_uint16 const   )337,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )316,      (yytype_uint16 const   )302,      (yytype_uint16 const   )169,      (yytype_uint16 const   )175, 
        (yytype_uint16 const   )314,      (yytype_uint16 const   )26,      (yytype_uint16 const   )172,      (yytype_uint16 const   )228, 
        (yytype_uint16 const   )151,      (yytype_uint16 const   )124,      (yytype_uint16 const   )217,      (yytype_uint16 const   )318, 
        (yytype_uint16 const   )217,      (yytype_uint16 const   )13,      (yytype_uint16 const   )169,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )224,      (yytype_uint16 const   )151,      (yytype_uint16 const   )224,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )150,      (yytype_uint16 const   )149,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )343,      (yytype_uint16 const   )314,      (yytype_uint16 const   )153,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )151,      (yytype_uint16 const   )316,      (yytype_uint16 const   )243,      (yytype_uint16 const   )297, 
        (yytype_uint16 const   )99,      (yytype_uint16 const   )104,      (yytype_uint16 const   )107,      (yytype_uint16 const   )108, 
        (yytype_uint16 const   )109,      (yytype_uint16 const   )110,      (yytype_uint16 const   )111,      (yytype_uint16 const   )112, 
        (yytype_uint16 const   )113,      (yytype_uint16 const   )153,      (yytype_uint16 const   )244,      (yytype_uint16 const   )247, 
        (yytype_uint16 const   )260,      (yytype_uint16 const   )261,      (yytype_uint16 const   )262,      (yytype_uint16 const   )263, 
        (yytype_uint16 const   )265,      (yytype_uint16 const   )150,      (yytype_uint16 const   )104,      (yytype_uint16 const   )285, 
        (yytype_uint16 const   )237,      (yytype_uint16 const   )73,      (yytype_uint16 const   )13,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )314,      (yytype_uint16 const   )306,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )326,      (yytype_uint16 const   )61,      (yytype_uint16 const   )61, 
        (yytype_uint16 const   )321,      (yytype_uint16 const   )155,      (yytype_uint16 const   )153,      (yytype_uint16 const   )123, 
        (yytype_uint16 const   )303,      (yytype_uint16 const   )177,      (yytype_uint16 const   )229,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )169,      (yytype_uint16 const   )183,      (yytype_uint16 const   )218,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )308,      (yytype_uint16 const   )89,      (yytype_uint16 const   )224, 
        (yytype_uint16 const   )92,      (yytype_uint16 const   )93,      (yytype_uint16 const   )94,      (yytype_uint16 const   )224, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )124,      (yytype_uint16 const   )192,      (yytype_uint16 const   )285, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )153,      (yytype_uint16 const   )71,      (yytype_uint16 const   )248, 
        (yytype_uint16 const   )297,      (yytype_uint16 const   )245,      (yytype_uint16 const   )284,      (yytype_uint16 const   )263, 
        (yytype_uint16 const   )8,      (yytype_uint16 const   )151,      (yytype_uint16 const   )152,      (yytype_uint16 const   )149, 
        (yytype_uint16 const   )152,      (yytype_uint16 const   )31,      (yytype_uint16 const   )73,      (yytype_uint16 const   )13, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )238,      (yytype_uint16 const   )337,      (yytype_uint16 const   )337, 
        (yytype_uint16 const   )123,      (yytype_uint16 const   )322,      (yytype_uint16 const   )338,      (yytype_uint16 const   )231, 
        (yytype_uint16 const   )66,      (yytype_uint16 const   )67,      (yytype_uint16 const   )233,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )83,      (yytype_uint16 const   )267,      (yytype_uint16 const   )189,      (yytype_uint16 const   )187, 
        (yytype_uint16 const   )151,      (yytype_uint16 const   )92,      (yytype_uint16 const   )151,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )26,      (yytype_uint16 const   )151,      (yytype_uint16 const   )227,      (yytype_uint16 const   )153, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )297,      (yytype_uint16 const   )152,      (yytype_uint16 const   )13, 
        (yytype_uint16 const   )8,      (yytype_uint16 const   )151,      (yytype_uint16 const   )152,      (yytype_uint16 const   )249, 
        (yytype_uint16 const   )73,      (yytype_uint16 const   )264,      (yytype_uint16 const   )205,      (yytype_uint16 const   )71, 
        (yytype_uint16 const   )169,      (yytype_uint16 const   )31,      (yytype_uint16 const   )73,      (yytype_uint16 const   )286, 
        (yytype_uint16 const   )169,      (yytype_uint16 const   )73,      (yytype_uint16 const   )13,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )155,      (yytype_uint16 const   )155,      (yytype_uint16 const   )338, 
        (yytype_uint16 const   )66,      (yytype_uint16 const   )67,      (yytype_uint16 const   )234,      (yytype_uint16 const   )149, 
        (yytype_uint16 const   )172,      (yytype_uint16 const   )151,      (yytype_uint16 const   )150,      (yytype_uint16 const   )26, 
        (yytype_uint16 const   )172,      (yytype_uint16 const   )220,      (yytype_uint16 const   )220,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )227,      (yytype_uint16 const   )226,      (yytype_uint16 const   )193,      (yytype_uint16 const   )169, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )297,      (yytype_uint16 const   )71,      (yytype_uint16 const   )250, 
        (yytype_uint16 const   )251,      (yytype_uint16 const   )252,      (yytype_uint16 const   )253,      (yytype_uint16 const   )255, 
        (yytype_uint16 const   )256,      (yytype_uint16 const   )257,      (yytype_uint16 const   )297,      (yytype_uint16 const   )13, 
        (yytype_uint16 const   )8,      (yytype_uint16 const   )151,      (yytype_uint16 const   )71,      (yytype_uint16 const   )13, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )73,      (yytype_uint16 const   )8,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )13,      (yytype_uint16 const   )308,      (yytype_uint16 const   )323, 
        (yytype_uint16 const   )149,      (yytype_uint16 const   )26,      (yytype_uint16 const   )68,      (yytype_uint16 const   )314, 
        (yytype_uint16 const   )184,      (yytype_uint16 const   )169,      (yytype_uint16 const   )225,      (yytype_uint16 const   )169, 
        (yytype_uint16 const   )73,      (yytype_uint16 const   )153,      (yytype_uint16 const   )153,      (yytype_uint16 const   )252, 
        (yytype_uint16 const   )151,      (yytype_uint16 const   )90,      (yytype_uint16 const   )105,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )144,      (yytype_uint16 const   )308,      (yytype_uint16 const   )73,      (yytype_uint16 const   )246, 
        (yytype_uint16 const   )308,      (yytype_uint16 const   )31,      (yytype_uint16 const   )73,      (yytype_uint16 const   )308, 
        (yytype_uint16 const   )327,      (yytype_uint16 const   )314,      (yytype_uint16 const   )169,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )150,      (yytype_uint16 const   )26,      (yytype_uint16 const   )172,      (yytype_uint16 const   )219, 
        (yytype_uint16 const   )87,      (yytype_uint16 const   )169,      (yytype_uint16 const   )150,      (yytype_uint16 const   )258, 
        (yytype_uint16 const   )263,      (yytype_uint16 const   )254,      (yytype_uint16 const   )297,      (yytype_uint16 const   )71, 
        (yytype_uint16 const   )13,      (yytype_uint16 const   )149,      (yytype_uint16 const   )73,      (yytype_uint16 const   )150, 
        (yytype_uint16 const   )230,      (yytype_uint16 const   )169,      (yytype_uint16 const   )151,      (yytype_uint16 const   )194, 
        (yytype_uint16 const   )71,      (yytype_uint16 const   )8,      (yytype_uint16 const   )308,      (yytype_uint16 const   )235, 
        (yytype_uint16 const   )26,      (yytype_uint16 const   )172,      (yytype_uint16 const   )85,      (yytype_uint16 const   )152, 
        (yytype_uint16 const   )297,      (yytype_uint16 const   )150,      (yytype_uint16 const   )232,      (yytype_uint16 const   )151, 
        (yytype_uint16 const   )169,      (yytype_uint16 const   )151,      (yytype_uint16 const   )152,      (yytype_uint16 const   )259, 
        (yytype_uint16 const   )169,      (yytype_uint16 const   )153,      (yytype_uint16 const   )169,      (yytype_uint16 const   )195, 
        (yytype_uint16 const   )153,      (yytype_uint16 const   )102,      (yytype_uint16 const   )196,      (yytype_uint16 const   )197, 
        (yytype_uint16 const   )198,      (yytype_uint16 const   )149,      (yytype_uint16 const   )198,      (yytype_uint16 const   )297, 
        (yytype_uint16 const   )199,      (yytype_uint16 const   )73,      (yytype_uint16 const   )150,      (yytype_uint16 const   )200, 
        (yytype_uint16 const   )152,      (yytype_uint16 const   )169,      (yytype_uint16 const   )153};
static size_t yysyntax_error(char *yyresult , int yystate , int zendchar ) ;
static char const   yyunexpected[28]  = 
  {      (char const   )'s',      (char const   )'y',      (char const   )'n',      (char const   )'t', 
        (char const   )'a',      (char const   )'x',      (char const   )' ',      (char const   )'e', 
        (char const   )'r',      (char const   )'r',      (char const   )'o',      (char const   )'r', 
        (char const   )',',      (char const   )' ',      (char const   )'u',      (char const   )'n', 
        (char const   )'e',      (char const   )'x',      (char const   )'p',      (char const   )'e', 
        (char const   )'c',      (char const   )'t',      (char const   )'e',      (char const   )'d', 
        (char const   )' ',      (char const   )'%',      (char const   )'s',      (char const   )'\000'};
static size_t yysyntax_error(char *yyresult , int yystate , int zendchar ) ;
static char const   yyexpecting[15]  = 
  {      (char const   )',',      (char const   )' ',      (char const   )'e',      (char const   )'x', 
        (char const   )'p',      (char const   )'e',      (char const   )'c',      (char const   )'t', 
        (char const   )'i',      (char const   )'n',      (char const   )'g',      (char const   )' ', 
        (char const   )'%',      (char const   )'s',      (char const   )'\000'};
static size_t yysyntax_error(char *yyresult , int yystate , int zendchar ) ;
static char const   yyor[7]  = {      (char const   )' ',      (char const   )'o',      (char const   )'r',      (char const   )' ', 
        (char const   )'%',      (char const   )'s',      (char const   )'\000'};
static size_t yysyntax_error(char *yyresult , int yystate , int zendchar ) 
{ int yyn ;
  int yytype ;
  int tmp ;
  size_t yysize0 ;
  size_t tmp___0 ;
  size_t yysize ;
  size_t yysize1 ;
  int yysize_overflow ;
  char const   *yyarg[5] ;
  int yyx ;
  char *yyfmt ;
  char const   *yyf ;
  char yyformat[((sizeof(yyunexpected) + sizeof(yyexpecting)) - 1U) + 3U * (sizeof(yyor) - 1U)] ;
  char const   *yyprefix ;
  int yyxbegin ;
  int tmp___1 ;
  int yychecklim ;
  int yyxend ;
  int tmp___2 ;
  int yycount ;
  int tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  char *yyp ;
  int yyi ;
  int tmp___6 ;
  size_t tmp___7 ;
  char tmp___8 ;

  {
  yyn = (int )yypact[yystate];
  if (-716 < yyn) {
    if (yyn <= 5416) {
      if ((unsigned int )zendchar <= 384U) {
        tmp = (int const   )yytranslate[zendchar];
      } else {
        tmp = (int const   )2;
      }
      yytype = (int )tmp;
      tmp___0 = zend_yytnamerr((char *)0, (char const   *)yytname[yytype]);
      yysize0 = tmp___0;
      yysize = yysize0;
      yysize_overflow = 0;
      yyprefix = yyexpecting;
      {

      }
      yyxbegin = tmp___1;
      yychecklim = (5416 - yyn) + 1;
      if (yychecklim < 158) {
        tmp___2 = yychecklim;
      } else {
        tmp___2 = 158;
      }
      yyxend = tmp___2;
      yycount = 1;
      yyarg[0] = (char const   *)yytname[yytype];
      yyfmt = __builtin_stpcpy(yyformat, yyunexpected);
      yyx = yyxbegin;
      while (yyx < yyxend) {
        if ((int const   )yycheck[yyx + yyn] == (int const   )yyx) {
          if (yyx != 1) {
            if (yycount == 5) {
              yycount = 1;
              yysize = yysize0;
              yyformat[sizeof(yyunexpected) - 1U] = (char )'\000';
              break;
            } else {

            }
            tmp___3 = yycount;
            yycount ++;
            yyarg[tmp___3] = (char const   *)yytname[yyx];
            tmp___4 = zend_yytnamerr((char *)0, (char const   *)yytname[yyx]);
            yysize1 = yysize + tmp___4;
            yysize_overflow |= yysize1 < yysize;
            yysize = yysize1;
            yyfmt = __builtin_stpcpy(yyfmt, yyprefix);
            yyprefix = yyor;
          } else {

          }
        } else {

        }
        yyx ++;
      }
      yyf = (char const   *)(yyformat);
      tmp___5 = strlen(yyf);
      yysize1 = yysize + tmp___5;
      yysize_overflow |= yysize1 < yysize;
      yysize = yysize1;
      if (yysize_overflow) {
        return (4294967295U);
      } else {

      }
      if (yyresult) {
        yyp = yyresult;
        yyi = 0;
        while (1) {
          tmp___8 = (char )*yyf;
          *yyp = tmp___8;
          if ((int )tmp___8 != 0) {

          } else {
            break;
          }
          if ((int )*yyp == 37) {
            if ((int const   )*(yyf + 1) == 115) {
              if (yyi < yycount) {
                tmp___6 = yyi;
                yyi ++;
                tmp___7 = zend_yytnamerr(yyp, yyarg[tmp___6]);
                yyp += tmp___7;
                yyf += 2;
              } else {
                yyp ++;
                yyf ++;
              }
            } else {
              yyp ++;
              yyf ++;
            }
          } else {
            yyp ++;
            yyf ++;
          }
        }
      } else {

      }
      return (yysize);
    } else {
      return (0U);
    }
  } else {
    return (0U);
  }
}
}
static void yydestruct(char const   *yymsg , int yytype , znode *yyvaluep ) 
{ 

  {
  if (! yymsg) {
    yymsg = "Deleting";
  } else {

  }
  switch (yytype) {
  default: ;
  break;
  }
  return;
}
}
int zendparse(void) 
{ int zendchar ;
  znode zendlval ;
  int zendnerrs ;
  int yystate ;
  int yyerrstatus ;
  yytype_int16 yyssa[200] ;
  yytype_int16 *yyss ;
  yytype_int16 *yyssp ;
  znode yyvsa[200] ;
  znode *yyvs ;
  znode *yyvsp ;
  size_t yystacksize ;
  int yyn ;
  int yyresult ;
  int yytoken ;
  znode yyval ;
  char yymsgbuf[128] ;
  char *yymsg ;
  size_t yymsg_alloc ;
  int yylen ;
  size_t yysize ;
  yytype_int16 *yyss1 ;
  union yyalloc *yyptr ;
  void *tmp ;
  size_t yynewbytes ;
  size_t yynewbytes___0 ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  zval *__z ;
  zval *__z___0 ;
  int tmp___7 ;
  zval *__z___1 ;
  char __attribute__((__visibility__("default")))  *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  znode *tmp___12 ;
  char const   *__s ;
  int __l ;
  zval *__z___2 ;
  char __attribute__((__visibility__("default")))  *tmp___13 ;
  zval *__z___3 ;
  char __attribute__((__visibility__("default")))  *tmp___14 ;
  char *tmp___15 ;
  char __attribute__((__visibility__("default")))  *tmp___16 ;
  zval *__z___4 ;
  char __attribute__((__visibility__("default")))  *tmp___17 ;
  char *tmp___18 ;
  char __attribute__((__visibility__("default")))  *tmp___19 ;
  zval *__z___5 ;
  char __attribute__((__visibility__("default")))  *tmp___20 ;
  zval *__z___6 ;
  char __attribute__((__visibility__("default")))  *tmp___21 ;
  zval *__z___7 ;
  char __attribute__((__visibility__("default")))  *tmp___22 ;
  char *tmp___23 ;
  char __attribute__((__visibility__("default")))  *tmp___24 ;
  zval *__z___8 ;
  zval *__z___9 ;
  zval *__z___10 ;
  char __attribute__((__visibility__("default")))  *tmp___25 ;
  char *tmp___26 ;
  char __attribute__((__visibility__("default")))  *tmp___27 ;
  zend_uint tmp___28 ;
  znode tmp_znode ;
  znode tmp_znode___0 ;
  znode tmp___29 ;
  size_t yysize___0 ;
  size_t tmp___30 ;
  size_t yyalloc ;
  void *tmp___31 ;

  {
  yymsg = yymsgbuf;
  yymsg_alloc = sizeof(yymsgbuf);
  yylen = 0;
  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = 200U;
  yystate = 0;
  yyerrstatus = 0;
  zendnerrs = 0;
  zendchar = -2;
  yyssp = yyss;
  yyvsp = yyvs;
  goto yysetstate;
  yynewstate: 
  yyssp ++;
  yysetstate: 
  *yyssp = (short )yystate;
  if ((unsigned int )((yyss + yystacksize) - 1) <= (unsigned int )yyssp) {
    yysize = (size_t )((yyssp - yyss) + 1);
    if (10000U <= yystacksize) {
      goto yyexhaustedlab;
    } else {

    }
    yystacksize *= 2U;
    if (10000U < yystacksize) {
      yystacksize = 10000U;
    } else {

    }
    yyss1 = yyss;
    tmp = malloc(yystacksize * (sizeof(yytype_int16 ) + sizeof(znode )) + (sizeof(union yyalloc ) - 1U));
    yyptr = (union yyalloc *)tmp;
    if (! yyptr) {
      goto yyexhaustedlab;
    } else {

    }
    while (1) {
      __builtin_memcpy((void *)(& yyptr->yyss_alloc), (void const   *)yyss, yysize * sizeof(*yyss));
      yyss = & yyptr->yyss_alloc;
      yynewbytes = yystacksize * sizeof(*yyss) + (sizeof(union yyalloc ) - 1U);
      yyptr += yynewbytes / sizeof(*yyptr);
      break;
    }
    while (1) {
      __builtin_memcpy((void *)(& yyptr->yyvs_alloc), (void const   *)yyvs, yysize * sizeof(*yyvs));
      yyvs = & yyptr->yyvs_alloc;
      yynewbytes___0 = yystacksize * sizeof(*yyvs) + (sizeof(union yyalloc ) - 1U);
      yyptr += yynewbytes___0 / sizeof(*yyptr);
      break;
    }
    if ((unsigned int )yyss1 != (unsigned int )(yyssa)) {
      free((void *)yyss1);
    } else {

    }
    yyssp = (yyss + yysize) - 1;
    yyvsp = (yyvs + yysize) - 1;
    if ((unsigned int )((yyss + yystacksize) - 1) <= (unsigned int )yyssp) {
      goto yyabortlab;
    } else {

    }
  } else {

  }
  if (yystate == 3) {
    goto yyacceptlab;
  } else {

  }
  goto yybackup;
  yybackup: 
  yyn = (int )yypact[yystate];
  if (yyn == -716) {
    goto yydefault;
  } else {

  }
  if (zendchar == -2) {
    zendchar = zendlex(& zendlval);
  } else {

  }
  if (zendchar <= 0) {
    yytoken = 0;
    zendchar = yytoken;
  } else {
    if ((unsigned int )zendchar <= 384U) {
      yytoken = (int )yytranslate[zendchar];
    } else {
      yytoken = 2;
    }
  }
  yyn += yytoken;
  if (yyn < 0) {
    goto yydefault;
  } else {
    if (5416 < yyn) {
      goto yydefault;
    } else {
      if ((int const   )yycheck[yyn] != (int const   )yytoken) {
        goto yydefault;
      } else {

      }
    }
  }
  yyn = (int )yytable[yyn];
  if (yyn <= 0) {
    if (yyn == 0) {
      goto yyerrlab;
    } else {
      if (yyn == -457) {
        goto yyerrlab;
      } else {

      }
    }
    yyn = - yyn;
    goto yyreduce;
  } else {

  }
  if (yyerrstatus) {
    yyerrstatus --;
  } else {

  }
  zendchar = -2;
  yystate = yyn;
  yyvsp ++;
  *yyvsp = zendlval;
  goto yynewstate;
  yydefault: 
  yyn = (int )yydefact[yystate];
  if (yyn == 0) {
    goto yyerrlab;
  } else {

  }
  goto yyreduce;
  yyreduce: 
  yylen = (int )yyr2[yyn];
  yyval = *(yyvsp + (1 - yylen));
  switch (yyn) {
  case 2: 
  zend_do_end_compilation();
  break;
  case 3: 
  zend_do_extended_info();
  break;
  case 4: 
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    execute_new_code();
  } else {

  }
  break;
  case 6: 
  yyval = *(yyvsp + 0);
  break;
  case 7: 
  zend_do_build_namespace_name(& yyval, yyvsp + -2, yyvsp + 0);
  break;
  case 8: 
  zend_verify_namespace();
  break;
  case 9: 
  zend_verify_namespace();
  zend_do_early_binding();
  break;
  case 10: 
  zend_verify_namespace();
  zend_do_early_binding();
  break;
  case 11: 
  zend_do_halt_compiler_register();
  goto yyacceptlab;
  break;
  case 12: 
  zend_do_begin_namespace((znode const   *)(yyvsp + -1), (unsigned char)0);
  break;
  case 13: 
  zend_do_begin_namespace((znode const   *)(yyvsp + -1), (unsigned char)1);
  break;
  case 14: 
  zend_do_end_namespace();
  break;
  case 15: 
  zend_do_begin_namespace((znode const   *)((void *)0), (unsigned char)1);
  break;
  case 16: 
  zend_do_end_namespace();
  break;
  case 17: 
  zend_verify_namespace();
  break;
  case 18: 
  zend_verify_namespace();
  break;
  case 21: 
  zend_do_use(yyvsp + 0, (znode *)((void *)0), 0);
  break;
  case 22: 
  zend_do_use(yyvsp + -2, yyvsp + 0, 0);
  break;
  case 23: 
  zend_do_use(yyvsp + 0, (znode *)((void *)0), 1);
  break;
  case 24: 
  zend_do_use(yyvsp + -2, yyvsp + 0, 1);
  break;
  case 25: 
  zend_do_declare_constant(yyvsp + -2, yyvsp + 0);
  break;
  case 26: 
  zend_do_declare_constant(yyvsp + -2, yyvsp + 0);
  break;
  case 27: 
  zend_do_extended_info();
  break;
  case 28: 
  if ((compiler_globals.active_op_array)->fn_flags & 16U) {
    execute_new_code();
  } else {

  }
  break;
  case 33: 
  zend_error(1 << 6L, "__HALT_COMPILER() can only be used from the outermost scope");
  break;
  case 34: 
  if (compiler_globals.declarables.ticks.value.lval) {
    zend_do_ticks();
  } else {

  }
  break;
  case 35: 
  zend_do_label(yyvsp + -1);
  break;
  case 37: 
  zend_do_if_cond((znode const   *)(yyvsp + -1), yyvsp + 0);
  break;
  case 38: 
  zend_do_if_after_statement((znode const   *)(yyvsp + -2), (unsigned char)1);
  break;
  case 39: 
  zend_do_if_end();
  break;
  case 40: 
  zend_do_if_cond((znode const   *)(yyvsp + -2), yyvsp + -1);
  break;
  case 41: 
  zend_do_if_after_statement((znode const   *)(yyvsp + -3), (unsigned char)1);
  break;
  case 42: 
  zend_do_if_end();
  break;
  case 43: 
  tmp___0 = get_next_op_number(compiler_globals.active_op_array);
  (yyvsp + -1)->u.op.opline_num = (unsigned int )tmp___0;
  break;
  case 44: 
  zend_do_while_cond((znode const   *)(yyvsp + -1), yyvsp + 0);
  break;
  case 45: 
  zend_do_while_end((znode const   *)(yyvsp + -6), (znode const   *)(yyvsp + -2));
  break;
  case 46: 
  tmp___1 = get_next_op_number(compiler_globals.active_op_array);
  (yyvsp + 0)->u.op.opline_num = (unsigned int )tmp___1;
  zend_do_do_while_begin();
  break;
  case 47: 
  tmp___2 = get_next_op_number(compiler_globals.active_op_array);
  (yyvsp + 0)->u.op.opline_num = (unsigned int )tmp___2;
  break;
  case 48: 
  zend_do_do_while_end((znode const   *)(yyvsp + -8), (znode const   *)(yyvsp + -4), (znode const   *)(yyvsp + -2));
  break;
  case 49: 
  zend_do_free(yyvsp + -1);
  tmp___3 = get_next_op_number(compiler_globals.active_op_array);
  (yyvsp + 0)->u.op.opline_num = (unsigned int )tmp___3;
  break;
  case 50: 
  zend_do_extended_info();
  zend_do_for_cond((znode const   *)(yyvsp + -1), yyvsp + 0);
  break;
  case 51: 
  zend_do_free(yyvsp + -1);
  zend_do_for_before_statement((znode const   *)(yyvsp + -6), (znode const   *)(yyvsp + -3));
  break;
  case 52: 
  zend_do_for_end((znode const   *)(yyvsp + -5));
  break;
  case 53: 
  zend_do_switch_cond((znode const   *)(yyvsp + -1));
  break;
  case 54: 
  zend_do_switch_end((znode const   *)(yyvsp + 0));
  break;
  case 55: 
  zend_do_brk_cont((unsigned char)50, (znode const   *)((void *)0));
  break;
  case 56: 
  zend_do_brk_cont((unsigned char)50, (znode const   *)(yyvsp + -1));
  break;
  case 57: 
  zend_do_brk_cont((unsigned char)51, (znode const   *)((void *)0));
  break;
  case 58: 
  zend_do_brk_cont((unsigned char)51, (znode const   *)(yyvsp + -1));
  break;
  case 59: 
  zend_do_return((znode *)((void *)0), 0);
  break;
  case 60: 
  zend_do_return(yyvsp + -1, 0);
  break;
  case 61: 
  zend_do_return(yyvsp + -1, 1);
  break;
  case 65: 
  zend_do_echo((znode const   *)(yyvsp + 0));
  break;
  case 66: 
  zend_do_free(yyvsp + -1);
  break;
  case 68: 
  zend_do_foreach_begin(yyvsp + -3, yyvsp + -2, yyvsp + -1, yyvsp + 0, 1);
  break;
  case 69: 
  zend_do_foreach_cont(yyvsp + -7, (znode const   *)(yyvsp + -6), (znode const   *)(yyvsp + -4), yyvsp + -2, yyvsp + -1);
  break;
  case 70: 
  zend_do_foreach_end((znode const   *)(yyvsp + -9), (znode const   *)(yyvsp + -6));
  break;
  case 71: 
  zend_do_foreach_begin(yyvsp + -3, yyvsp + -2, yyvsp + -1, yyvsp + 0, 0);
  break;
  case 72: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_foreach_cont(yyvsp + -7, (znode const   *)(yyvsp + -6), (znode const   *)(yyvsp + -4), yyvsp + -2, yyvsp + -1);
  break;
  case 73: 
  zend_do_foreach_end((znode const   *)(yyvsp + -9), (znode const   *)(yyvsp + -6));
  break;
  case 74: 
  tmp___4 = get_next_op_number(compiler_globals.active_op_array);
  (yyvsp + 0)->u.op.opline_num = (unsigned int )tmp___4;
  zend_do_declare_begin();
  break;
  case 75: 
  zend_do_declare_end((znode const   *)(yyvsp + -5));
  break;
  case 77: 
  zend_do_try(yyvsp + 0);
  break;
  case 78: 
  zend_initialize_try_catch_element((znode const   *)(yyvsp + -6));
  break;
  case 79: 
  zend_do_first_catch(yyvsp + -2);
  break;
  case 80: 
  zend_do_begin_catch(yyvsp + -11, yyvsp + -3, yyvsp + -1, yyvsp + -5);
  break;
  case 81: 
  zend_do_end_catch((znode const   *)(yyvsp + -15));
  break;
  case 82: 
  zend_do_mark_last_catch((znode const   *)(yyvsp + -11), (znode const   *)(yyvsp + 0));
  break;
  case 83: 
  zend_do_throw((znode const   *)(yyvsp + -1));
  break;
  case 84: 
  zend_do_goto((znode const   *)(yyvsp + -1));
  break;
  case 85: 
  yyval = *(yyvsp + 0);
  break;
  case 86: 
  yyval.u.op.opline_num = 4294967295U;
  break;
  case 87: 
  yyval = *(yyvsp + 0);
  break;
  case 88: 
  yyval = *(yyvsp + 0);
  break;
  case 89: 
  tmp___5 = get_next_op_number(compiler_globals.active_op_array);
  yyval.u.op.opline_num = (unsigned int )tmp___5;
  break;
  case 90: 
  zend_do_begin_catch(yyvsp + -5, yyvsp + -3, yyvsp + -1, (znode *)((void *)0));
  break;
  case 91: 
  zend_do_end_catch((znode const   *)(yyvsp + -9));
  break;
  case 94: 
  zend_do_end_variable_parse(yyvsp + 0, 6, 0);
  zend_do_unset((znode const   *)(yyvsp + 0));
  break;
  case 95: 
  if (compiler_globals.declarables.ticks.value.lval) {
    zend_do_ticks();
  } else {

  }
  break;
  case 96: 
  if (compiler_globals.declarables.ticks.value.lval) {
    zend_do_ticks();
  } else {

  }
  break;
  case 97: 
  yyval.op_type = 0;
  break;
  case 98: 
  yyval.op_type = 1;
  break;
  case 99: 
  zend_do_begin_function_declaration(yyvsp + -2, yyvsp + 0, 0, (yyvsp + -1)->op_type, (znode *)((void *)0));
  break;
  case 100: 
  zend_do_end_function_declaration((znode const   *)(yyvsp + -9));
  break;
  case 101: 
  zend_do_begin_class_declaration((znode const   *)(yyvsp + -2), yyvsp + -1, (znode const   *)(yyvsp + 0));
  break;
  case 102: 
  zend_do_end_class_declaration((znode const   *)(yyvsp + -7), (znode const   *)(yyvsp + -6));
  break;
  case 103: 
  zend_do_begin_class_declaration((znode const   *)(yyvsp + -1), yyvsp + 0, (znode const   *)((void *)0));
  break;
  case 104: 
  zend_do_end_class_declaration((znode const   *)(yyvsp + -6), (znode const   *)(yyvsp + -5));
  break;
  case 105: 
  yyval.u.op.opline_num = (unsigned int )compiler_globals.zend_lineno;
  yyval.EA = 0U;
  break;
  case 106: 
  yyval.u.op.opline_num = (unsigned int )compiler_globals.zend_lineno;
  yyval.EA = 32U;
  break;
  case 107: 
  yyval.u.op.opline_num = (unsigned int )compiler_globals.zend_lineno;
  yyval.EA = 288U;
  break;
  case 108: 
  yyval.u.op.opline_num = (unsigned int )compiler_globals.zend_lineno;
  yyval.EA = 64U;
  break;
  case 109: 
  yyval.op_type = 1 << 3;
  break;
  case 110: 
  zend_do_fetch_class(& yyval, yyvsp + 0);
  break;
  case 111: 
  yyval.u.op.opline_num = (unsigned int )compiler_globals.zend_lineno;
  yyval.EA = 128U;
  break;
  case 116: 
  zend_do_implements_interface(yyvsp + 0);
  break;
  case 117: 
  zend_do_implements_interface(yyvsp + 0);
  break;
  case 118: 
  yyval.op_type = 1 << 3;
  break;
  case 119: 
  yyval = *(yyvsp + 0);
  break;
  case 120: 
  zend_check_writable_variable((znode const   *)(yyvsp + 0));
  yyval = *(yyvsp + 0);
  break;
  case 121: 
  zend_check_writable_variable((znode const   *)(yyvsp + 0));
  yyval = *(yyvsp + 0);
  yyval.EA |= (unsigned int )(1 << 5);
  break;
  case 128: 
  zend_do_declare_stmt(yyvsp + -2, yyvsp + 0);
  break;
  case 129: 
  zend_do_declare_stmt(yyvsp + -2, yyvsp + 0);
  break;
  case 130: 
  yyval = *(yyvsp + -1);
  break;
  case 131: 
  yyval = *(yyvsp + -1);
  break;
  case 132: 
  yyval = *(yyvsp + -2);
  break;
  case 133: 
  yyval = *(yyvsp + -2);
  break;
  case 134: 
  yyval.op_type = 1 << 3;
  break;
  case 135: 
  zend_do_extended_info();
  zend_do_case_before_statement((znode const   *)(yyvsp + -3), yyvsp + -2, (znode const   *)(yyvsp + -1));
  break;
  case 136: 
  zend_do_case_after_statement(& yyval, (znode const   *)(yyvsp + -4));
  yyval.op_type = 1;
  break;
  case 137: 
  zend_do_extended_info();
  zend_do_default_before_statement((znode const   *)(yyvsp + -2), yyvsp + -1);
  break;
  case 138: 
  zend_do_case_after_statement(& yyval, (znode const   *)(yyvsp + -3));
  yyval.op_type = 1;
  break;
  case 144: 
  zend_do_if_cond((znode const   *)(yyvsp + -1), yyvsp + 0);
  break;
  case 145: 
  zend_do_if_after_statement((znode const   *)(yyvsp + -2), (unsigned char)0);
  break;
  case 147: 
  zend_do_if_cond((znode const   *)(yyvsp + -2), yyvsp + -1);
  break;
  case 148: 
  zend_do_if_after_statement((znode const   *)(yyvsp + -3), (unsigned char)0);
  break;
  case 155: 
  yyval.op_type = 1 << 3;
  yyval.u.op.num = 1U;
  zend_do_receive_arg((unsigned char)63, yyvsp + 0, (znode const   *)(& yyval), (znode const   *)((void *)0), yyvsp + -1, (unsigned char)0);
  break;
  case 156: 
  yyval.op_type = 1 << 3;
  yyval.u.op.num = 1U;
  zend_do_receive_arg((unsigned char)63, yyvsp + 0, (znode const   *)(& yyval), (znode const   *)((void *)0), yyvsp + -2, (unsigned char)1);
  break;
  case 157: 
  yyval.op_type = 1 << 3;
  yyval.u.op.num = 1U;
  zend_do_receive_arg((unsigned char)64, yyvsp + -2, (znode const   *)(& yyval), (znode const   *)(yyvsp + 0), yyvsp + -4, (unsigned char)1);
  break;
  case 158: 
  yyval.op_type = 1 << 3;
  yyval.u.op.num = 1U;
  zend_do_receive_arg((unsigned char)64, yyvsp + -2, (znode const   *)(& yyval), (znode const   *)(yyvsp + 0), yyvsp + -3, (unsigned char)0);
  break;
  case 159: 
  yyval = *(yyvsp + -3);
  (yyval.u.op.num) ++;
  zend_do_receive_arg((unsigned char)63, yyvsp + 0, (znode const   *)(& yyval), (znode const   *)((void *)0), yyvsp + -1, (unsigned char)0);
  break;
  case 160: 
  yyval = *(yyvsp + -4);
  (yyval.u.op.num) ++;
  zend_do_receive_arg((unsigned char)63, yyvsp + 0, (znode const   *)(& yyval), (znode const   *)((void *)0), yyvsp + -2, (unsigned char)1);
  break;
  case 161: 
  yyval = *(yyvsp + -6);
  (yyval.u.op.num) ++;
  zend_do_receive_arg((unsigned char)64, yyvsp + -2, (znode const   *)(& yyval), (znode const   *)(yyvsp + 0), yyvsp + -4, (unsigned char)1);
  break;
  case 162: 
  yyval = *(yyvsp + -5);
  (yyval.u.op.num) ++;
  zend_do_receive_arg((unsigned char)64, yyvsp + -2, (znode const   *)(& yyval), (znode const   *)(yyvsp + 0), yyvsp + -3, (unsigned char)0);
  break;
  case 163: 
  yyval.op_type = 1 << 3;
  break;
  case 164: 
  yyval.op_type = 1;
  yyval.u.constant.type = (unsigned char)4;
  break;
  case 165: 
  yyval.op_type = 1;
  yyval.u.constant.type = (unsigned char)10;
  break;
  case 166: 
  yyval = *(yyvsp + 0);
  break;
  case 167: 
  yyval = *(yyvsp + 0);
  break;
  case 168: 
  yyval.u.constant.value.lval = 0L;
  break;
  case 169: 
  yyval.u.constant.value.lval = 1L;
  zend_do_pass_param(yyvsp + 0, (unsigned char)65, (int )yyval.u.constant.value.lval);
  break;
  case 170: 
  yyval.u.constant.value.lval = 1L;
  zend_do_pass_param(yyvsp + 0, (unsigned char)66, (int )yyval.u.constant.value.lval);
  break;
  case 171: 
  yyval.u.constant.value.lval = 1L;
  zend_do_pass_param(yyvsp + 0, (unsigned char)67, (int )yyval.u.constant.value.lval);
  break;
  case 172: 
  yyval.u.constant.value.lval = (yyvsp + -2)->u.constant.value.lval + 1L;
  zend_do_pass_param(yyvsp + 0, (unsigned char)65, (int )yyval.u.constant.value.lval);
  break;
  case 173: 
  yyval.u.constant.value.lval = (yyvsp + -2)->u.constant.value.lval + 1L;
  zend_do_pass_param(yyvsp + 0, (unsigned char)66, (int )yyval.u.constant.value.lval);
  break;
  case 174: 
  yyval.u.constant.value.lval = (yyvsp + -3)->u.constant.value.lval + 1L;
  zend_do_pass_param(yyvsp + 0, (unsigned char)67, (int )yyval.u.constant.value.lval);
  break;
  case 175: 
  zend_do_fetch_global_variable(yyvsp + 0, (znode const   *)((void *)0), 0x40000000);
  break;
  case 176: 
  zend_do_fetch_global_variable(yyvsp + 0, (znode const   *)((void *)0), 0x40000000);
  break;
  case 177: 
  yyval = *(yyvsp + 0);
  break;
  case 178: 
  yyval = *(yyvsp + 0);
  break;
  case 179: 
  yyval = *(yyvsp + -1);
  break;
  case 180: 
  zend_do_fetch_static_variable(yyvsp + 0, (znode const   *)((void *)0), 0x20000000);
  break;
  case 181: 
  zend_do_fetch_static_variable(yyvsp + -2, (znode const   *)(yyvsp + 0), 0x20000000);
  break;
  case 182: 
  zend_do_fetch_static_variable(yyvsp + 0, (znode const   *)((void *)0), 0x20000000);
  break;
  case 183: 
  zend_do_fetch_static_variable(yyvsp + -2, (znode const   *)(yyvsp + 0), 0x20000000);
  break;
  case 186: 
  compiler_globals.access_type = (unsigned int )(yyvsp + 0)->u.constant.value.lval;
  break;
  case 190: 
  zend_do_begin_function_declaration(yyvsp + -2, yyvsp + 0, 1, (yyvsp + -1)->op_type, yyvsp + -3);
  break;
  case 191: 
  zend_do_abstract_method((znode const   *)(yyvsp + -5), yyvsp + -8, (znode const   *)(yyvsp + 0));
  zend_do_end_function_declaration((znode const   *)(yyvsp + -7));
  break;
  case 193: 
  zend_do_implements_trait(yyvsp + 0);
  break;
  case 194: 
  zend_do_implements_trait(yyvsp + 0);
  break;
  case 201: 
  zend_add_trait_precedence(yyvsp + -1);
  break;
  case 202: 
  zend_add_trait_alias(yyvsp + -1);
  break;
  case 203: 
  zend_prepare_trait_precedence(& yyval, yyvsp + -2, yyvsp + 0);
  break;
  case 204: 
  zend_resolve_class_name(yyvsp + 0, 4UL, 1);
  zend_init_list((void *)(& yyval.u.op.ptr), (void *)(yyvsp + 0)->u.constant.value.str.val);
  break;
  case 205: 
  zend_resolve_class_name(yyvsp + 0, 4UL, 1);
  zend_add_to_list((void *)(& (yyvsp + -2)->u.op.ptr), (void *)(yyvsp + 0)->u.constant.value.str.val);
  yyval = *(yyvsp + -2);
  break;
  case 206: 
  zend_prepare_reference(& yyval, (znode *)((void *)0), yyvsp + 0);
  break;
  case 207: 
  yyval = *(yyvsp + 0);
  break;
  case 208: 
  zend_prepare_reference(& yyval, yyvsp + -2, yyvsp + 0);
  break;
  case 209: 
  zend_prepare_trait_alias(& yyval, yyvsp + -3, yyvsp + -1, yyvsp + 0);
  break;
  case 210: 
  zend_prepare_trait_alias(& yyval, yyvsp + -2, yyvsp + 0, (znode *)((void *)0));
  break;
  case 211: 
  yyval.u.constant.value.lval = 0L;
  break;
  case 212: 
  yyval = *(yyvsp + 0);
  break;
  case 213: 
  yyval.u.constant.value.lval = 2L;
  break;
  case 214: 
  yyval.u.constant.value.lval = 0L;
  break;
  case 215: 
  yyval = *(yyvsp + 0);
  break;
  case 216: 
  yyval.u.constant.value.lval = 256L;
  break;
  case 217: 
  yyval.u.constant.value.lval = 256L;
  break;
  case 218: 
  yyval = *(yyvsp + 0);
  if (! (yyval.u.constant.value.lval & 1792L)) {
    yyval.u.constant.value.lval |= 256L;
  } else {

  }
  break;
  case 219: 
  yyval = *(yyvsp + 0);
  break;
  case 220: 
  tmp___6 = zend_do_verify_access_types((znode const   *)(yyvsp + -1), (znode const   *)(yyvsp + 0));
  yyval.u.constant.value.lval = (long )tmp___6;
  break;
  case 221: 
  yyval.u.constant.value.lval = 256L;
  break;
  case 222: 
  yyval.u.constant.value.lval = 512L;
  break;
  case 223: 
  yyval.u.constant.value.lval = 1024L;
  break;
  case 224: 
  yyval.u.constant.value.lval = 1L;
  break;
  case 225: 
  yyval.u.constant.value.lval = 2L;
  break;
  case 226: 
  yyval.u.constant.value.lval = 4L;
  break;
  case 227: 
  zend_do_declare_property((znode const   *)(yyvsp + 0), (znode const   *)((void *)0), compiler_globals.access_type);
  break;
  case 228: 
  zend_do_declare_property((znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0), compiler_globals.access_type);
  break;
  case 229: 
  zend_do_declare_property((znode const   *)(yyvsp + 0), (znode const   *)((void *)0), compiler_globals.access_type);
  break;
  case 230: 
  zend_do_declare_property((znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0), compiler_globals.access_type);
  break;
  case 231: 
  zend_do_declare_class_constant(yyvsp + -2, (znode const   *)(yyvsp + 0));
  break;
  case 232: 
  zend_do_declare_class_constant(yyvsp + -2, (znode const   *)(yyvsp + 0));
  break;
  case 233: 
  zend_do_echo((znode const   *)(yyvsp + 0));
  break;
  case 234: 
  zend_do_echo((znode const   *)(yyvsp + 0));
  break;
  case 235: 
  yyval.op_type = 1;
  yyval.u.constant.type = (unsigned char)3;
  yyval.u.constant.value.lval = 1L;
  break;
  case 236: 
  yyval = *(yyvsp + 0);
  break;
  case 237: 
  zend_do_free(yyvsp + -1);
  break;
  case 238: 
  yyval = *(yyvsp + 0);
  break;
  case 239: 
  yyval = *(yyvsp + 0);
  break;
  case 240: 
  zend_do_list_init();
  break;
  case 241: 
  zend_do_list_end(& yyval, yyvsp + 0);
  break;
  case 242: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_assign(& yyval, yyvsp + -2, yyvsp + 0);
  break;
  case 243: 
  zend_check_writable_variable((znode const   *)(yyvsp + -3));
  zend_do_end_variable_parse(yyvsp + 0, 1, 1);
  zend_do_end_variable_parse(yyvsp + -3, 1, 0);
  zend_do_assign_ref(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + 0));
  break;
  case 244: 
  zend_error(1 << 13L, "Assigning the return value of new by reference is deprecated");
  zend_check_writable_variable((znode const   *)(yyvsp + -4));
  zend_do_extended_fcall_begin();
  zend_do_begin_new_object(yyvsp + -1, yyvsp + 0);
  break;
  case 245: 
  zend_do_end_new_object(yyvsp + -4, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + 0));
  zend_do_extended_fcall_end();
  zend_do_end_variable_parse(yyvsp + -6, 1, 0);
  (yyvsp + -4)->EA = (unsigned int )(1 << 6);
  zend_do_assign_ref(& yyval, (znode const   *)(yyvsp + -6), (znode const   *)(yyvsp + -4));
  break;
  case 246: 
  zend_do_extended_fcall_begin();
  zend_do_begin_new_object(yyvsp + -1, yyvsp + 0);
  break;
  case 247: 
  zend_do_end_new_object(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + 0));
  zend_do_extended_fcall_end();
  break;
  case 248: 
  zend_do_clone(& yyval, (znode const   *)(yyvsp + 0));
  break;
  case 249: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)23, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 250: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)24, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 251: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)25, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 252: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)26, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 253: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)30, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 254: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)27, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 255: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)32, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 256: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)31, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 257: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)33, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 258: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)28, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 259: 
  zend_check_writable_variable((znode const   *)(yyvsp + -2));
  zend_do_end_variable_parse(yyvsp + -2, 2, 0);
  zend_do_binary_assign_op((unsigned char)29, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 260: 
  zend_do_post_incdec(& yyval, (znode const   *)(yyvsp + -1), (unsigned char)36);
  break;
  case 261: 
  zend_do_pre_incdec(& yyval, (znode const   *)(yyvsp + 0), (unsigned char)34);
  break;
  case 262: 
  zend_do_post_incdec(& yyval, (znode const   *)(yyvsp + -1), (unsigned char)37);
  break;
  case 263: 
  zend_do_pre_incdec(& yyval, (znode const   *)(yyvsp + 0), (unsigned char)35);
  break;
  case 264: 
  zend_do_boolean_or_begin(yyvsp + -1, yyvsp + 0);
  break;
  case 265: 
  zend_do_boolean_or_end(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + 0), yyvsp + -2);
  break;
  case 266: 
  zend_do_boolean_and_begin(yyvsp + -1, yyvsp + 0);
  break;
  case 267: 
  zend_do_boolean_and_end(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -2));
  break;
  case 268: 
  zend_do_boolean_or_begin(yyvsp + -1, yyvsp + 0);
  break;
  case 269: 
  zend_do_boolean_or_end(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + 0), yyvsp + -2);
  break;
  case 270: 
  zend_do_boolean_and_begin(yyvsp + -1, yyvsp + 0);
  break;
  case 271: 
  zend_do_boolean_and_end(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -2));
  break;
  case 272: 
  zend_do_binary_op((unsigned char)14, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 273: 
  zend_do_binary_op((unsigned char)9, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 274: 
  zend_do_binary_op((unsigned char)10, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 275: 
  zend_do_binary_op((unsigned char)11, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 276: 
  zend_do_binary_op((unsigned char)8, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 277: 
  zend_do_binary_op((unsigned char)1, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 278: 
  zend_do_binary_op((unsigned char)2, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 279: 
  zend_do_binary_op((unsigned char)3, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 280: 
  zend_do_binary_op((unsigned char)4, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 281: 
  zend_do_binary_op((unsigned char)5, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 282: 
  zend_do_binary_op((unsigned char)6, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 283: 
  zend_do_binary_op((unsigned char)7, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 284: 
  __z = & (yyvsp + -1)->u.constant;
  __z->value.lval = 0L;
  __z->type = (unsigned char)1;
  if ((yyvsp + 0)->op_type == 1) {
    add_function(& (yyvsp + 0)->u.constant, & (yyvsp + -1)->u.constant, & (yyvsp + 0)->u.constant);
    yyval = *(yyvsp + 0);
  } else {
    (yyvsp + -1)->op_type = 1;
    (yyvsp + -1)->u.constant.refcount__gc = 1U;
    (yyvsp + -1)->u.constant.is_ref__gc = (unsigned char)0;
    zend_do_binary_op((unsigned char)1, & yyval, (znode const   *)(yyvsp + -1), (znode const   *)(yyvsp + 0));
  }
  break;
  case 285: 
  __z___0 = & (yyvsp + -1)->u.constant;
  __z___0->value.lval = 0L;
  __z___0->type = (unsigned char)1;
  if ((yyvsp + 0)->op_type == 1) {
    sub_function(& (yyvsp + 0)->u.constant, & (yyvsp + -1)->u.constant, & (yyvsp + 0)->u.constant);
    yyval = *(yyvsp + 0);
  } else {
    (yyvsp + -1)->op_type = 1;
    (yyvsp + -1)->u.constant.refcount__gc = 1U;
    (yyvsp + -1)->u.constant.is_ref__gc = (unsigned char)0;
    zend_do_binary_op((unsigned char)2, & yyval, (znode const   *)(yyvsp + -1), (znode const   *)(yyvsp + 0));
  }
  break;
  case 286: 
  zend_do_unary_op((unsigned char)13, & yyval, (znode const   *)(yyvsp + 0));
  break;
  case 287: 
  zend_do_unary_op((unsigned char)12, & yyval, (znode const   *)(yyvsp + 0));
  break;
  case 288: 
  zend_do_binary_op((unsigned char)15, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 289: 
  zend_do_binary_op((unsigned char)16, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 290: 
  zend_do_binary_op((unsigned char)17, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 291: 
  zend_do_binary_op((unsigned char)18, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 292: 
  zend_do_binary_op((unsigned char)19, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 293: 
  zend_do_binary_op((unsigned char)20, & yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0));
  break;
  case 294: 
  zend_do_binary_op((unsigned char)19, & yyval, (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -2));
  break;
  case 295: 
  zend_do_binary_op((unsigned char)20, & yyval, (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -2));
  break;
  case 296: 
  zend_do_instanceof(& yyval, (znode const   *)(yyvsp + -2), (znode const   *)(yyvsp + 0), 0);
  break;
  case 297: 
  yyval = *(yyvsp + -1);
  break;
  case 298: 
  zend_do_begin_qm_op((znode const   *)(yyvsp + -1), yyvsp + 0);
  break;
  case 299: 
  zend_do_qm_true((znode const   *)(yyvsp + -1), yyvsp + -3, yyvsp + 0);
  break;
  case 300: 
  zend_do_qm_false(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -5), (znode const   *)(yyvsp + -2));
  break;
  case 301: 
  zend_do_jmp_set((znode const   *)(yyvsp + -2), yyvsp + -1, yyvsp + 0);
  break;
  case 302: 
  zend_do_jmp_set_else(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + -2));
  break;
  case 303: 
  yyval = *(yyvsp + 0);
  break;
  case 304: 
  zend_do_cast(& yyval, (znode const   *)(yyvsp + 0), 1);
  break;
  case 305: 
  zend_do_cast(& yyval, (znode const   *)(yyvsp + 0), 2);
  break;
  case 306: 
  zend_do_cast(& yyval, (znode const   *)(yyvsp + 0), 6);
  break;
  case 307: 
  zend_do_cast(& yyval, (znode const   *)(yyvsp + 0), 4);
  break;
  case 308: 
  zend_do_cast(& yyval, (znode const   *)(yyvsp + 0), 5);
  break;
  case 309: 
  zend_do_cast(& yyval, (znode const   *)(yyvsp + 0), 3);
  break;
  case 310: 
  zend_do_cast(& yyval, (znode const   *)(yyvsp + 0), 0);
  break;
  case 311: 
  zend_do_exit(& yyval, (znode const   *)(yyvsp + 0));
  break;
  case 312: 
  zend_do_begin_silence(yyvsp + 0);
  break;
  case 313: 
  zend_do_end_silence((znode const   *)(yyvsp + -2));
  yyval = *(yyvsp + 0);
  break;
  case 314: 
  yyval = *(yyvsp + 0);
  break;
  case 315: 
  yyval = *(yyvsp + -1);
  break;
  case 316: 
  yyval = *(yyvsp + -1);
  break;
  case 317: 
  zend_do_shell_exec(& yyval, (znode const   *)(yyvsp + -1));
  break;
  case 318: 
  zend_do_print(& yyval, (znode const   *)(yyvsp + 0));
  break;
  case 319: 
  zend_do_begin_lambda_function_declaration(& yyval, yyvsp + -2, (yyvsp + -1)->op_type, 0);
  break;
  case 320: 
  zend_do_end_function_declaration((znode const   *)(yyvsp + -9));
  yyval = *(yyvsp + -6);
  break;
  case 321: 
  zend_do_begin_lambda_function_declaration(& yyval, yyvsp + -2, (yyvsp + -1)->op_type, 1);
  break;
  case 322: 
  zend_do_end_function_declaration((znode const   *)(yyvsp + -9));
  yyval = *(yyvsp + -6);
  break;
  case 323: 
  yyval.u.op.opline_num = (unsigned int )compiler_globals.zend_lineno;
  break;
  case 326: 
  zend_do_fetch_lexical_variable(yyvsp + 0, (unsigned char)0);
  break;
  case 327: 
  zend_do_fetch_lexical_variable(yyvsp + 0, (unsigned char)1);
  break;
  case 328: 
  zend_do_fetch_lexical_variable(yyvsp + 0, (unsigned char)0);
  break;
  case 329: 
  zend_do_fetch_lexical_variable(yyvsp + 0, (unsigned char)1);
  break;
  case 330: 
  tmp___7 = zend_do_begin_function_call(yyvsp + -1, (unsigned char)1);
  (yyvsp + 0)->u.op.opline_num = (unsigned int )tmp___7;
  break;
  case 331: 
  zend_do_end_function_call(yyvsp + -4, & yyval, (znode const   *)(yyvsp + -1), 0, (int )(yyvsp + -3)->u.op.opline_num);
  zend_do_extended_fcall_end();
  break;
  case 332: 
  (yyvsp + -3)->op_type = 1;
  while (1) {
    __z___1 = & (yyvsp + -3)->u.constant;
    __z___1->value.str.len = 0;
    tmp___8 = _estrndup("", sizeof("") - 1U);
    __z___1->value.str.val = (char *)tmp___8;
    __z___1->type = (unsigned char)6;
    break;
  }
  zend_do_build_namespace_name(yyvsp + -3, yyvsp + -3, yyvsp + -1);
  tmp___9 = zend_do_begin_function_call(yyvsp + -3, (unsigned char)0);
  (yyvsp + 0)->u.op.opline_num = (unsigned int )tmp___9;
  break;
  case 333: 
  zend_do_end_function_call(yyvsp + -6, & yyval, (znode const   *)(yyvsp + -1), 0, (int )(yyvsp + -3)->u.op.opline_num);
  zend_do_extended_fcall_end();
  break;
  case 334: 
  tmp___10 = zend_do_begin_function_call(yyvsp + -1, (unsigned char)0);
  (yyvsp + 0)->u.op.opline_num = (unsigned int )tmp___10;
  break;
  case 335: 
  zend_do_end_function_call(yyvsp + -4, & yyval, (znode const   *)(yyvsp + -1), 0, (int )(yyvsp + -3)->u.op.opline_num);
  zend_do_extended_fcall_end();
  break;
  case 336: 
  tmp___11 = zend_do_begin_class_member_function_call(yyvsp + -3, yyvsp + -1);
  (yyvsp + 0)->u.op.opline_num = (unsigned int )tmp___11;
  break;
  case 337: 
  if ((yyvsp + -3)->u.op.opline_num) {
    tmp___12 = (znode *)((void *)0);
  } else {
    tmp___12 = yyvsp + -4;
  }
  zend_do_end_function_call(tmp___12, & yyval, (znode const   *)(yyvsp + -1), (int )(yyvsp + -3)->u.op.opline_num, (int )(yyvsp + -3)->u.op.opline_num);
  zend_do_extended_fcall_end();
  break;
  case 338: 
  zend_do_end_variable_parse(yyvsp + -1, 0, 0);
  zend_do_begin_class_member_function_call(yyvsp + -3, yyvsp + -1);
  break;
  case 339: 
  zend_do_end_function_call((znode *)((void *)0), & yyval, (znode const   *)(yyvsp + -1), 1, 1);
  zend_do_extended_fcall_end();
  break;
  case 340: 
  zend_do_begin_class_member_function_call(yyvsp + -3, yyvsp + -1);
  break;
  case 341: 
  zend_do_end_function_call((znode *)((void *)0), & yyval, (znode const   *)(yyvsp + -1), 1, 1);
  zend_do_extended_fcall_end();
  break;
  case 342: 
  zend_do_end_variable_parse(yyvsp + -1, 0, 0);
  zend_do_begin_class_member_function_call(yyvsp + -3, yyvsp + -1);
  break;
  case 343: 
  zend_do_end_function_call((znode *)((void *)0), & yyval, (znode const   *)(yyvsp + -1), 1, 1);
  zend_do_extended_fcall_end();
  break;
  case 344: 
  zend_do_end_variable_parse(yyvsp + -1, 0, 0);
  zend_do_begin_dynamic_function_call(yyvsp + -1, 0);
  break;
  case 345: 
  zend_do_end_function_call(yyvsp + -4, & yyval, (znode const   *)(yyvsp + -1), 0, 1);
  zend_do_extended_fcall_end();
  break;
  case 346: 
  yyval.op_type = 1;
  while (1) {
    __s = "static";
    __l = (int )(sizeof("static") - 1U);
    __z___2 = & yyval.u.constant;
    __z___2->value.str.len = __l;
    tmp___13 = _estrndup(__s, (unsigned int )__l);
    __z___2->value.str.val = (char *)tmp___13;
    __z___2->type = (unsigned char)6;
    break;
  }
  break;
  case 347: 
  yyval = *(yyvsp + 0);
  break;
  case 348: 
  yyval.op_type = 1;
  while (1) {
    __z___3 = & yyval.u.constant;
    __z___3->value.str.len = 0;
    tmp___14 = _estrndup("", sizeof("") - 1U);
    __z___3->value.str.val = (char *)tmp___14;
    __z___3->type = (unsigned char)6;
    break;
  }
  zend_do_build_namespace_name(& yyval, & yyval, yyvsp + 0);
  break;
  case 349: 
  tmp___16 = _estrndup((char const   *)(yyvsp + 0)->u.constant.value.str.val, (unsigned int )((yyvsp + 0)->u.constant.value.str.len + 1));
  tmp___15 = (char *)tmp___16;
  memcpy((void */* __restrict  */)(tmp___15 + 1), (void const   */* __restrict  */)(yyvsp + 0)->u.constant.value.str.val, (unsigned int )((yyvsp + 0)->u.constant.value.str.len + 1));
  *(tmp___15 + 0) = (char )'\\';
  _efree((void *)(yyvsp + 0)->u.constant.value.str.val);
  (yyvsp + 0)->u.constant.value.str.val = tmp___15;
  ((yyvsp + 0)->u.constant.value.str.len) ++;
  yyval = *(yyvsp + 0);
  break;
  case 350: 
  yyval = *(yyvsp + 0);
  break;
  case 351: 
  yyval.op_type = 1;
  while (1) {
    __z___4 = & yyval.u.constant;
    __z___4->value.str.len = 0;
    tmp___17 = _estrndup("", sizeof("") - 1U);
    __z___4->value.str.val = (char *)tmp___17;
    __z___4->type = (unsigned char)6;
    break;
  }
  zend_do_build_namespace_name(& yyval, & yyval, yyvsp + 0);
  break;
  case 352: 
  tmp___19 = _estrndup((char const   *)(yyvsp + 0)->u.constant.value.str.val, (unsigned int )((yyvsp + 0)->u.constant.value.str.len + 1));
  tmp___18 = (char *)tmp___19;
  memcpy((void */* __restrict  */)(tmp___18 + 1), (void const   */* __restrict  */)(yyvsp + 0)->u.constant.value.str.val, (unsigned int )((yyvsp + 0)->u.constant.value.str.len + 1));
  *(tmp___18 + 0) = (char )'\\';
  _efree((void *)(yyvsp + 0)->u.constant.value.str.val);
  (yyvsp + 0)->u.constant.value.str.val = tmp___18;
  ((yyvsp + 0)->u.constant.value.str.len) ++;
  yyval = *(yyvsp + 0);
  break;
  case 353: 
  zend_do_fetch_class(& yyval, yyvsp + 0);
  break;
  case 354: 
  zend_do_end_variable_parse(yyvsp + 0, 0, 0);
  zend_do_fetch_class(& yyval, yyvsp + 0);
  break;
  case 355: 
  zend_do_push_object((znode const   *)(yyvsp + -1));
  break;
  case 356: 
  zend_do_push_object((znode const   *)(yyvsp + 0));
  break;
  case 357: 
  zend_do_pop_object(& yyval);
  yyval.EA = 1U;
  break;
  case 358: 
  yyval = *(yyvsp + 0);
  break;
  case 361: 
  zend_do_push_object((znode const   *)(yyvsp + 0));
  break;
  case 362: 
  memset((void *)(& yyval), 0, sizeof(znode ));
  yyval.op_type = 1 << 3;
  break;
  case 363: 
  memset((void *)(& yyval), 0, sizeof(znode ));
  yyval.op_type = 1 << 3;
  break;
  case 364: 
  yyval = *(yyvsp + -1);
  break;
  case 365: 
  while (1) {
    __z___5 = & yyval.u.constant;
    __z___5->value.str.len = 0;
    tmp___20 = _estrndup("", sizeof("") - 1U);
    __z___5->value.str.val = (char *)tmp___20;
    __z___5->type = (unsigned char)6;
    break;
  }
  yyval.u.constant.refcount__gc = 1U;
  yyval.u.constant.is_ref__gc = (unsigned char)0;
  yyval.op_type = 1;
  break;
  case 366: 
  yyval = *(yyvsp + 0);
  break;
  case 367: 
  yyval = *(yyvsp + 0);
  break;
  case 368: 
  yyval.u.constant.value.lval = 0L;
  break;
  case 369: 
  yyval = *(yyvsp + -1);
  break;
  case 370: 
  yyval = *(yyvsp + 0);
  break;
  case 371: 
  yyval = *(yyvsp + 0);
  break;
  case 372: 
  yyval = *(yyvsp + 0);
  break;
  case 373: 
  yyval = *(yyvsp + 0);
  break;
  case 374: 
  yyval = *(yyvsp + 0);
  break;
  case 375: 
  yyval = *(yyvsp + 0);
  break;
  case 376: 
  yyval = *(yyvsp + 0);
  break;
  case 377: 
  yyval = *(yyvsp + 0);
  break;
  case 378: 
  yyval = *(yyvsp + 0);
  break;
  case 379: 
  yyval = *(yyvsp + 0);
  break;
  case 380: 
  yyval = *(yyvsp + 0);
  break;
  case 381: 
  yyval = *(yyvsp + -1);
  compiler_globals.heredoc = (yyvsp + -2)->u.constant.value.str.val;
  compiler_globals.heredoc_len = (yyvsp + -2)->u.constant.value.str.len;
  break;
  case 382: 
  while (1) {
    __z___6 = & yyval.u.constant;
    __z___6->value.str.len = 0;
    tmp___21 = _estrndup("", sizeof("") - 1U);
    __z___6->value.str.val = (char *)tmp___21;
    __z___6->type = (unsigned char)6;
    break;
  }
  yyval.u.constant.refcount__gc = 1U;
  yyval.u.constant.is_ref__gc = (unsigned char)0;
  yyval.op_type = 1;
  compiler_globals.heredoc = (yyvsp + -1)->u.constant.value.str.val;
  compiler_globals.heredoc_len = (yyvsp + -1)->u.constant.value.str.len;
  break;
  case 383: 
  yyval = *(yyvsp + 0);
  break;
  case 384: 
  zend_do_fetch_constant(& yyval, (znode *)((void *)0), yyvsp + 0, 1, (unsigned char)1);
  break;
  case 385: 
  yyval.op_type = 1;
  while (1) {
    __z___7 = & yyval.u.constant;
    __z___7->value.str.len = 0;
    tmp___22 = _estrndup("", sizeof("") - 1U);
    __z___7->value.str.val = (char *)tmp___22;
    __z___7->type = (unsigned char)6;
    break;
  }
  zend_do_build_namespace_name(& yyval, & yyval, yyvsp + 0);
  *(yyvsp + 0) = yyval;
  zend_do_fetch_constant(& yyval, (znode *)((void *)0), yyvsp + 0, 1, (unsigned char)0);
  break;
  case 386: 
  tmp___24 = _estrndup((char const   *)(yyvsp + 0)->u.constant.value.str.val, (unsigned int )((yyvsp + 0)->u.constant.value.str.len + 1));
  tmp___23 = (char *)tmp___24;
  memcpy((void */* __restrict  */)(tmp___23 + 1), (void const   */* __restrict  */)(yyvsp + 0)->u.constant.value.str.val, (unsigned int )((yyvsp + 0)->u.constant.value.str.len + 1));
  *(tmp___23 + 0) = (char )'\\';
  _efree((void *)(yyvsp + 0)->u.constant.value.str.val);
  (yyvsp + 0)->u.constant.value.str.val = tmp___23;
  ((yyvsp + 0)->u.constant.value.str.len) ++;
  zend_do_fetch_constant(& yyval, (znode *)((void *)0), yyvsp + 0, 1, (unsigned char)0);
  break;
  case 387: 
  __z___8 = & (yyvsp + -1)->u.constant;
  __z___8->value.lval = 0L;
  __z___8->type = (unsigned char)1;
  add_function(& (yyvsp + 0)->u.constant, & (yyvsp + -1)->u.constant, & (yyvsp + 0)->u.constant);
  yyval = *(yyvsp + 0);
  break;
  case 388: 
  __z___9 = & (yyvsp + -1)->u.constant;
  __z___9->value.lval = 0L;
  __z___9->type = (unsigned char)1;
  sub_function(& (yyvsp + 0)->u.constant, & (yyvsp + -1)->u.constant, & (yyvsp + 0)->u.constant);
  yyval = *(yyvsp + 0);
  break;
  case 389: 
  yyval = *(yyvsp + -1);
  yyval.u.constant.type = (unsigned char)9;
  break;
  case 390: 
  yyval = *(yyvsp + -1);
  yyval.u.constant.type = (unsigned char)9;
  break;
  case 391: 
  yyval = *(yyvsp + 0);
  break;
  case 392: 
  zend_do_fetch_constant(& yyval, yyvsp + -2, yyvsp + 0, 1, (unsigned char)0);
  break;
  case 393: 
  yyval = *(yyvsp + 0);
  break;
  case 394: 
  yyval = *(yyvsp + 0);
  break;
  case 395: 
  zend_do_fetch_constant(& yyval, (znode *)((void *)0), yyvsp + 0, 1 << 1, (unsigned char)1);
  break;
  case 396: 
  yyval.op_type = 1;
  while (1) {
    __z___10 = & yyval.u.constant;
    __z___10->value.str.len = 0;
    tmp___25 = _estrndup("", sizeof("") - 1U);
    __z___10->value.str.val = (char *)tmp___25;
    __z___10->type = (unsigned char)6;
    break;
  }
  zend_do_build_namespace_name(& yyval, & yyval, yyvsp + 0);
  *(yyvsp + 0) = yyval;
  zend_do_fetch_constant(& yyval, (znode *)((void *)0), yyvsp + 0, 1 << 1, (unsigned char)0);
  break;
  case 397: 
  tmp___27 = _estrndup((char const   *)(yyvsp + 0)->u.constant.value.str.val, (unsigned int )((yyvsp + 0)->u.constant.value.str.len + 1));
  tmp___26 = (char *)tmp___27;
  memcpy((void */* __restrict  */)(tmp___26 + 1), (void const   */* __restrict  */)(yyvsp + 0)->u.constant.value.str.val, (unsigned int )((yyvsp + 0)->u.constant.value.str.len + 1));
  *(tmp___26 + 0) = (char )'\\';
  _efree((void *)(yyvsp + 0)->u.constant.value.str.val);
  (yyvsp + 0)->u.constant.value.str.val = tmp___26;
  ((yyvsp + 0)->u.constant.value.str.len) ++;
  zend_do_fetch_constant(& yyval, (znode *)((void *)0), yyvsp + 0, 1 << 1, (unsigned char)0);
  break;
  case 398: 
  yyval = *(yyvsp + 0);
  break;
  case 399: 
  yyval = *(yyvsp + -1);
  break;
  case 400: 
  yyval = *(yyvsp + -1);
  compiler_globals.heredoc = (yyvsp + -2)->u.constant.value.str.val;
  compiler_globals.heredoc_len = (yyvsp + -2)->u.constant.value.str.len;
  break;
  case 401: 
  yyval.op_type = 1;
  yyval.u.constant.refcount__gc = 1U;
  yyval.u.constant.is_ref__gc = (unsigned char)0;
  _array_init(& yyval.u.constant, 0U);
  break;
  case 402: 
  yyval = *(yyvsp + -1);
  break;
  case 405: 
  zend_do_add_static_array_element(& yyval, yyvsp + -2, (znode const   *)(yyvsp + 0));
  break;
  case 406: 
  zend_do_add_static_array_element(& yyval, (znode *)((void *)0), (znode const   *)(yyvsp + 0));
  break;
  case 407: 
  yyval.op_type = 1;
  yyval.u.constant.refcount__gc = 1U;
  yyval.u.constant.is_ref__gc = (unsigned char)0;
  _array_init(& yyval.u.constant, 0U);
  zend_do_add_static_array_element(& yyval, yyvsp + -2, (znode const   *)(yyvsp + 0));
  break;
  case 408: 
  yyval.op_type = 1;
  yyval.u.constant.refcount__gc = 1U;
  yyval.u.constant.is_ref__gc = (unsigned char)0;
  _array_init(& yyval.u.constant, 0U);
  zend_do_add_static_array_element(& yyval, (znode *)((void *)0), (znode const   *)(yyvsp + 0));
  break;
  case 409: 
  yyval = *(yyvsp + 0);
  break;
  case 410: 
  yyval = *(yyvsp + 0);
  break;
  case 411: 
  zend_do_end_variable_parse(yyvsp + 0, 0, 0);
  yyval = *(yyvsp + 0);
  break;
  case 412: 
  zend_do_end_variable_parse(yyvsp + 0, 1, 0);
  yyval = *(yyvsp + 0);
  zend_check_writable_variable((znode const   *)(yyvsp + 0));
  break;
  case 413: 
  zend_do_end_variable_parse(yyvsp + 0, 2, 0);
  yyval = *(yyvsp + 0);
  zend_check_writable_variable((znode const   *)(yyvsp + 0));
  break;
  case 414: 
  zend_do_push_object((znode const   *)(yyvsp + -1));
  break;
  case 415: 
  zend_do_push_object((znode const   *)(yyvsp + 0));
  break;
  case 416: 
  zend_do_pop_object(& yyval);
  if ((yyvsp + 0)->EA) {
    tmp___28 = (yyvsp + 0)->EA;
  } else {
    tmp___28 = (yyvsp + -1)->EA;
  }
  yyval.EA = (yyvsp + -6)->EA | tmp___28;
  break;
  case 417: 
  yyval = *(yyvsp + 0);
  break;
  case 418: 
  yyval.EA = (yyvsp + 0)->EA;
  break;
  case 419: 
  yyval.EA = 0U;
  break;
  case 420: 
  zend_do_push_object((znode const   *)(yyvsp + 0));
  break;
  case 421: 
  yyval.EA = (yyvsp + 0)->EA;
  break;
  case 422: 
  fetch_array_dim(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + -1));
  break;
  case 423: 
  (yyvsp + -3)->EA = (unsigned int )(1 << 1);
  fetch_array_dim(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + -1));
  break;
  case 424: 
  zend_do_pop_object(yyvsp + 0);
  zend_do_begin_method_call(yyvsp + 0);
  break;
  case 425: 
  zend_do_end_function_call(yyvsp + -3, & yyval, (znode const   *)(yyvsp + -1), 1, 1);
  zend_do_extended_fcall_end();
  break;
  case 426: 
  yyval = *(yyvsp + 0);
  yyval.EA = (unsigned int )(1 << 1);
  zend_do_push_object((znode const   *)(& yyval));
  break;
  case 427: 
  yyval = *(yyvsp + 0);
  zend_do_push_object((znode const   *)(& yyval));
  break;
  case 428: 
  yyval.EA = 1U;
  break;
  case 429: 
  yyval = *(yyvsp + 0);
  break;
  case 430: 
  zend_do_indirect_references(& yyval, (znode const   *)(yyvsp + -1), yyvsp + 0);
  break;
  case 431: 
  yyval = *(yyvsp + 0);
  zend_do_fetch_static_member(& yyval, yyvsp + -2);
  break;
  case 432: 
  yyval = *(yyvsp + 0);
  zend_do_fetch_static_member(& yyval, yyvsp + -2);
  break;
  case 433: 
  zend_do_end_variable_parse(yyvsp + 0, 0, 0);
  yyval = *(yyvsp + 0);
  break;
  case 434: 
  fetch_array_dim(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + -1));
  break;
  case 435: 
  zend_do_begin_variable_parse();
  (yyvsp + 0)->EA = (unsigned int )(1 << 3);
  break;
  case 436: 
  fetch_array_dim(& yyval, (znode const   *)(yyvsp + -4), (znode const   *)(yyvsp + -1));
  break;
  case 437: 
  yyval = *(yyvsp + 0);
  break;
  case 438: 
  yyval = *(yyvsp + 0);
  break;
  case 439: 
  zend_do_begin_variable_parse();
  yyval = *(yyvsp + 0);
  yyval.EA = (unsigned int )(1 << 3);
  break;
  case 440: 
  yyval = *(yyvsp + 0);
  yyval.EA = (unsigned int )(1 << 4);
  break;
  case 441: 
  zend_do_indirect_references(& yyval, (znode const   *)(yyvsp + -1), yyvsp + 0);
  yyval.EA = (unsigned int )(1 << 4);
  break;
  case 442: 
  yyval = *(yyvsp + 0);
  yyval.EA = (unsigned int )(1 << 2);
  break;
  case 443: 
  fetch_array_dim(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + -1));
  break;
  case 444: 
  fetch_string_offset(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + -1));
  break;
  case 445: 
  zend_do_begin_variable_parse();
  fetch_simple_variable(& yyval, yyvsp + 0, 1);
  break;
  case 446: 
  yyval = *(yyvsp + 0);
  break;
  case 447: 
  yyval = *(yyvsp + -1);
  break;
  case 448: 
  yyval.op_type = 1 << 3;
  break;
  case 449: 
  yyval = *(yyvsp + 0);
  break;
  case 450: 
  yyval = *(yyvsp + 0);
  break;
  case 451: 
  zend_do_end_variable_parse(yyvsp + 0, 0, 0);
  break;
  case 452: 
  zend_do_pop_object(& tmp_znode);
  zend_do_fetch_property(& yyval, & tmp_znode, (znode const   *)(yyvsp + -1));
  break;
  case 453: 
  fetch_array_dim(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + -1));
  break;
  case 454: 
  fetch_string_offset(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(yyvsp + -1));
  break;
  case 455: 
  zend_do_pop_object(& tmp_znode___0);
  zend_do_fetch_property(& yyval, & tmp_znode___0, (znode const   *)(yyvsp + 0));
  break;
  case 456: 
  yyval = *(yyvsp + 0);
  break;
  case 457: 
  yyval = *(yyvsp + -1);
  break;
  case 458: 
  yyval.u.constant.value.lval = 1L;
  break;
  case 459: 
  (yyval.u.constant.value.lval) ++;
  break;
  case 462: 
  zend_do_add_list_element((znode const   *)(yyvsp + 0));
  break;
  case 463: 
  zend_do_new_list_begin();
  break;
  case 464: 
  zend_do_new_list_end();
  break;
  case 465: 
  zend_do_add_list_element((znode const   *)((void *)0));
  break;
  case 466: 
  zend_do_init_array(& yyval, (znode const   *)((void *)0), (znode const   *)((void *)0), (unsigned char)0);
  break;
  case 467: 
  yyval = *(yyvsp + -1);
  break;
  case 468: 
  zend_do_add_array_element(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -2), (unsigned char)0);
  break;
  case 469: 
  zend_do_add_array_element(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)((void *)0), (unsigned char)0);
  break;
  case 470: 
  zend_do_init_array(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -2), (unsigned char)0);
  break;
  case 471: 
  zend_do_init_array(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)((void *)0), (unsigned char)0);
  break;
  case 472: 
  zend_do_add_array_element(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -3), (unsigned char)1);
  break;
  case 473: 
  zend_do_add_array_element(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)((void *)0), (unsigned char)1);
  break;
  case 474: 
  zend_do_init_array(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)(yyvsp + -3), (unsigned char)1);
  break;
  case 475: 
  zend_do_init_array(& yyval, (znode const   *)(yyvsp + 0), (znode const   *)((void *)0), (unsigned char)1);
  break;
  case 476: 
  zend_do_end_variable_parse(yyvsp + 0, 0, 0);
  zend_do_add_variable(& yyval, (znode const   *)(yyvsp + -1), (znode const   *)(yyvsp + 0));
  break;
  case 477: 
  zend_do_add_string(& yyval, (znode const   *)(yyvsp + -1), yyvsp + 0);
  break;
  case 478: 
  zend_do_end_variable_parse(yyvsp + 0, 0, 0);
  zend_do_add_variable(& yyval, (znode const   *)((void *)0), (znode const   *)(yyvsp + 0));
  break;
  case 479: 
  zend_do_add_string(& yyval, (znode const   *)((void *)0), yyvsp + -1);
  zend_do_end_variable_parse(yyvsp + 0, 0, 0);
  zend_do_add_variable(& yyval, (znode const   *)(& yyval), (znode const   *)(yyvsp + 0));
  break;
  case 480: 
  zend_do_begin_variable_parse();
  fetch_simple_variable(& yyval, yyvsp + 0, 1);
  break;
  case 481: 
  zend_do_begin_variable_parse();
  break;
  case 482: 
  fetch_array_begin(& yyval, yyvsp + -4, yyvsp + -1);
  break;
  case 483: 
  zend_do_begin_variable_parse();
  fetch_simple_variable(yyvsp + -1, yyvsp + -2, 1);
  zend_do_fetch_property(& yyval, yyvsp + -1, (znode const   *)(yyvsp + 0));
  break;
  case 484: 
  zend_do_begin_variable_parse();
  fetch_simple_variable(& yyval, yyvsp + -1, 1);
  break;
  case 485: 
  zend_do_begin_variable_parse();
  fetch_array_begin(& yyval, yyvsp + -4, yyvsp + -2);
  break;
  case 486: 
  yyval = *(yyvsp + -1);
  break;
  case 487: 
  yyval = *(yyvsp + 0);
  break;
  case 488: 
  yyval = *(yyvsp + 0);
  break;
  case 489: 
  fetch_simple_variable(& yyval, yyvsp + 0, 1);
  break;
  case 490: 
  yyval = *(yyvsp + -1);
  break;
  case 491: 
  zend_do_isset_or_isempty(0x01000000, & yyval, yyvsp + -1);
  break;
  case 492: 
  zend_do_include_or_eval(1 << 1, & yyval, (znode const   *)(yyvsp + 0));
  break;
  case 493: 
  zend_do_include_or_eval(1 << 2, & yyval, (znode const   *)(yyvsp + 0));
  break;
  case 494: 
  zend_do_include_or_eval(1, & yyval, (znode const   *)(yyvsp + -1));
  break;
  case 495: 
  zend_do_include_or_eval(1 << 3, & yyval, (znode const   *)(yyvsp + 0));
  break;
  case 496: 
  zend_do_include_or_eval(1 << 4, & yyval, (znode const   *)(yyvsp + 0));
  break;
  case 497: 
  zend_do_isset_or_isempty(0x02000000, & yyval, yyvsp + 0);
  break;
  case 498: 
  zend_do_boolean_and_begin(yyvsp + -1, yyvsp + 0);
  break;
  case 499: 
  zend_do_isset_or_isempty(0x02000000, & tmp___29, yyvsp + 0);
  zend_do_boolean_and_end(& yyval, (znode const   *)(yyvsp + -3), (znode const   *)(& tmp___29), (znode const   *)(yyvsp + -2));
  break;
  case 500: 
  zend_do_fetch_constant(& yyval, yyvsp + -2, yyvsp + 0, 1 << 1, (unsigned char)0);
  break;
  case 501: 
  zend_do_fetch_constant(& yyval, yyvsp + -2, yyvsp + 0, 1 << 1, (unsigned char)0);
  break;
  default: ;
  break;
  }
  yyvsp -= yylen;
  yyssp -= yylen;
  yylen = 0;
  yyvsp ++;
  *yyvsp = yyval;
  yyn = (int )yyr1[yyn];
  yystate = (int )((int const   )yypgoto[yyn - 158] + (int const   )*yyssp);
  if (0 <= yystate) {
    if (yystate <= 5416) {
      if ((int const   )yycheck[yystate] == (int const   )*yyssp) {
        yystate = (int )yytable[yystate];
      } else {
        yystate = (int )yydefgoto[yyn - 158];
      }
    } else {
      yystate = (int )yydefgoto[yyn - 158];
    }
  } else {
    yystate = (int )yydefgoto[yyn - 158];
  }
  goto yynewstate;
  yyerrlab: 
  if (! yyerrstatus) {
    zendnerrs ++;
    tmp___30 = yysyntax_error((char *)0, yystate, zendchar);
    yysize___0 = tmp___30;
    if (yymsg_alloc < yysize___0) {
      if (yymsg_alloc < 4294967295U) {
        yyalloc = 2U * yysize___0;
        if (yysize___0 <= yyalloc) {
          if (yyalloc <= 4294967295U) {

          } else {
            yyalloc = 4294967295U;
          }
        } else {
          yyalloc = 4294967295U;
        }
        if ((unsigned int )yymsg != (unsigned int )(yymsgbuf)) {
          free((void *)yymsg);
        } else {

        }
        tmp___31 = malloc(yyalloc);
        yymsg = (char *)tmp___31;
        if (yymsg) {
          yymsg_alloc = yyalloc;
        } else {
          yymsg = yymsgbuf;
          yymsg_alloc = sizeof(yymsgbuf);
        }
      } else {

      }
    } else {

    }
    if (0U < yysize___0) {
      if (yysize___0 <= yymsg_alloc) {
        yysyntax_error(yymsg, yystate, zendchar);
        zenderror((char const   *)yymsg);
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      zenderror("syntax error");
      if (yysize___0 != 0U) {
        goto yyexhaustedlab;
      } else {

      }
    }
  } else {

  }
  if (yyerrstatus == 3) {
    if (zendchar <= 0) {
      if (zendchar == 0) {
        goto yyabortlab;
      } else {

      }
    } else {
      yydestruct("Error: discarding", yytoken, & zendlval);
      zendchar = -2;
    }
  } else {

  }
  goto yyerrlab1;
  yyerrorlab: 
  yyvsp -= yylen;
  yyssp -= yylen;
  yylen = 0;
  yystate = (int )*yyssp;
  goto yyerrlab1;
  yyerrlab1: 
  yyerrstatus = 3;
  while (1) {
    yyn = (int )yypact[yystate];
    if (yyn != -716) {
      yyn ++;
      if (0 <= yyn) {
        if (yyn <= 5416) {
          if ((int const   )yycheck[yyn] == 1) {
            yyn = (int )yytable[yyn];
            if (0 < yyn) {
              break;
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
    if ((unsigned int )yyssp == (unsigned int )yyss) {
      goto yyabortlab;
    } else {

    }
    yydestruct("Error: popping", (int )yystos[yystate], yyvsp);
    yyvsp --;
    yyssp --;
    yystate = (int )*yyssp;
  }
  yyvsp ++;
  *yyvsp = zendlval;
  yystate = yyn;
  goto yynewstate;
  yyacceptlab: 
  yyresult = 0;
  goto yyreturn;
  yyabortlab: 
  yyresult = 1;
  goto yyreturn;
  yyexhaustedlab: 
  zenderror("memory exhausted");
  yyresult = 2;
  yyreturn: 
  if (zendchar != -2) {
    yydestruct("Cleanup: discarding lookahead", yytoken, & zendlval);
  } else {

  }
  yyvsp -= yylen;
  yyssp -= yylen;
  while ((unsigned int )yyssp != (unsigned int )yyss) {
    yydestruct("Cleanup: popping", (int )yystos[*yyssp], yyvsp);
    yyvsp --;
    {

    }
  }
  if ((unsigned int )yyss != (unsigned int )(yyssa)) {
    free((void *)yyss);
  } else {

  }
  if ((unsigned int )yymsg != (unsigned int )(yymsgbuf)) {
    free((void *)yymsg);
  } else {

  }
  return (yyresult);
}
}
static size_t zend_yytnamerr(char *yyres , char const   *yystr ) 
{ size_t tmp ;
  char buffer[120] ;
  unsigned char const   *end ;
  unsigned char const   *str ;
  unsigned char const   *tok1 ;
  unsigned char const   *tok2 ;
  unsigned int len ;
  unsigned int toklen ;
  unsigned int yystr_len ;
  int tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void const   *tmp___3 ;
  unsigned int tmp___4 ;
  size_t yyn ;
  char const   *yyp ;
  size_t tmp___5 ;

  {
  if (! yyres) {
    tmp = strlen(yystr);
    return (tmp);
  } else {

  }
  if ((int )compiler_globals.parse_error == 0) {
    tok1 = (unsigned char const   *)((void *)0);
    tok2 = (unsigned char const   *)((void *)0);
    len = 0U;
    toklen = 0U;
    compiler_globals.parse_error = (unsigned char)1;
    if ((int )*(language_scanner_globals.yy_text + 0) == 0) {
      if (language_scanner_globals.yy_leng == 1U) {
        tmp___0 = memcmp((void const   *)yystr, (void const   *)"\"end of file\"", sizeof("\"end of file\"") - 1U);
        if (tmp___0 == 0) {
          __builtin_stpcpy(yyres, "end of file");
          return (sizeof("end of file") - 1U);
        } else {

        }
      } else {

      }
    } else {

    }
    str = (unsigned char const   *)language_scanner_globals.yy_text;
    tmp___1 = memchr((void const   *)str, '\n', language_scanner_globals.yy_leng);
    end = (unsigned char const   *)tmp___1;
    yystr_len = strlen(yystr);
    tmp___2 = memchr((void const   *)yystr, '(', yystr_len);
    tok1 = (unsigned char const   *)tmp___2;
    if ((unsigned int )tok1 != (unsigned int )((void *)0)) {
      tmp___3 = zend_memrchr((void const   *)yystr, ')', yystr_len);
      tok2 = (unsigned char const   *)tmp___3;
      if ((unsigned int )tok2 != (unsigned int )((void *)0)) {
        toklen = (unsigned int )((tok2 - tok1) + 1);
      } else {
        tok2 = (unsigned char const   *)((void *)0);
        tok1 = tok2;
        toklen = 0U;
      }
    } else {
      tok2 = (unsigned char const   *)((void *)0);
      tok1 = tok2;
      toklen = 0U;
    }
    if ((unsigned int )end == (unsigned int )((void *)0)) {
      if (language_scanner_globals.yy_leng > 30U) {
        len = 30U;
      } else {
        len = language_scanner_globals.yy_leng;
      }
    } else {
      if (end - str > 30) {
        len = 30U;
      } else {
        len = (unsigned int )(end - str);
      }
    }
    if (toklen) {
      snprintf((char */* __restrict  */)(buffer), sizeof(buffer), (char const   */* __restrict  */)"\'%.*s\' %.*s", len, str, toklen, tok1);
    } else {
      snprintf((char */* __restrict  */)(buffer), sizeof(buffer), (char const   */* __restrict  */)"\'%.*s\'", len, str);
    }
    __builtin_stpcpy(yyres, (char const   *)(buffer));
    if (toklen) {
      tmp___4 = toklen + 1U;
    } else {
      tmp___4 = 0U;
    }
    return ((len + tmp___4) + 2U);
  } else {

  }
  if ((int const   )*yystr == 34) {
    yyn = (size_t )0;
    yyp = yystr;
    while (1) {
      yyp ++;
      if ((int const   )*yyp != 34) {

      } else {
        break;
      }
      *(yyres + yyn) = (char )*yyp;
      yyn ++;
    }
    *(yyres + yyn) = (char )'\000';
    return (yyn);
  } else {

  }
  __builtin_stpcpy(yyres, yystr);
  tmp___5 = strlen(yystr);
  return (tmp___5);
}
}
