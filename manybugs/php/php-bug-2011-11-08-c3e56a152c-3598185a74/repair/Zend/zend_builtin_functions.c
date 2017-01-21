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
struct _zend_ini_entry;
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
struct _zend_ini_entry {
   int module_number ;
   int modifiable ;
   char *name ;
   uint name_length ;
   int (*on_modify)(zend_ini_entry *entry , char *new_value , uint new_value_length , void *mh_arg1 , void *mh_arg2 , void *mh_arg3 , int stage ) ;
   void *mh_arg1 ;
   void *mh_arg2 ;
   void *mh_arg3 ;
   char *value ;
   uint value_length ;
   char *orig_value ;
   uint orig_value_length ;
   int orig_modifiable ;
   int modified ;
   void (*displayer)(zend_ini_entry *ini_entry , int type ) ;
};
typedef void (*zend_ini_parser_cb_t)(zval *arg1 , zval *arg2 , zval *arg3 , int callback_type , void *arg );
struct _zend_ini_parser_param {
   void (*ini_parser_cb)(zval *arg1 , zval *arg2 , zval *arg3 , int callback_type , void *arg ) ;
   void *arg ;
};
typedef struct _zend_ini_parser_param zend_ini_parser_param;
struct _zend_extension_version_info {
   int zend_extension_api_no ;
   char *build_id ;
};
typedef struct _zend_extension_version_info zend_extension_version_info;
struct _zend_extension;
typedef struct _zend_extension zend_extension;
typedef int (*startup_func_t)(zend_extension *extension );
typedef void (*shutdown_func_t)(zend_extension *extension );
typedef void (*activate_func_t)(void);
typedef void (*deactivate_func_t)(void);
typedef void (*message_handler_func_t)(int message , void *arg );
typedef void (*op_array_handler_func_t)(zend_op_array *op_array );
typedef void (*statement_handler_func_t)(zend_op_array *op_array );
typedef void (*fcall_begin_handler_func_t)(zend_op_array *op_array );
typedef void (*fcall_end_handler_func_t)(zend_op_array *op_array );
typedef void (*op_array_ctor_func_t)(zend_op_array *op_array );
typedef void (*op_array_dtor_func_t)(zend_op_array *op_array );
struct _zend_extension {
   char *name ;
   char *version ;
   char *author ;
   char *URL ;
   char *copyright ;
   int (*startup)(zend_extension *extension ) ;
   void (*shutdown)(zend_extension *extension ) ;
   void (*activate)(void) ;
   void (*deactivate)(void) ;
   void (*message_handler)(int message , void *arg ) ;
   void (*op_array_handler)(zend_op_array *op_array ) ;
   void (*statement_handler)(zend_op_array *op_array ) ;
   void (*fcall_begin_handler)(zend_op_array *op_array ) ;
   void (*fcall_end_handler)(zend_op_array *op_array ) ;
   void (*op_array_ctor)(zend_op_array *op_array ) ;
   void (*op_array_dtor)(zend_op_array *op_array ) ;
   int (*api_no_check)(int api_no ) ;
   int (*build_id_check)(char const   *build_id ) ;
   void *reserved3 ;
   void *reserved4 ;
   void *reserved5 ;
   void *reserved6 ;
   void *reserved7 ;
   void *reserved8 ;
   void *handle ;
   int resource_number ;
};
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
extern int zendparse(void) ;
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
extern HashTable __attribute__((__visibility__("default")))  module_registry ;
extern void module_destructor(zend_module_entry *module ) ;
extern int module_registry_cleanup(zend_module_entry *module ) ;
extern int module_registry_request_startup(zend_module_entry *module ) ;
extern int module_registry_unload_temp(zend_module_entry const   *module ) ;
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
int zend_startup_builtin_functions(void) ;
void __attribute__((__visibility__("default")))  zend_fetch_debug_backtrace(zval *return_value , int skip_last , int options , int limit ) ;
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
extern int __attribute__((__visibility__("default")))  zend_ini_startup(void) ;
extern int __attribute__((__visibility__("default")))  zend_ini_shutdown(void) ;
extern int __attribute__((__visibility__("default")))  zend_ini_global_shutdown(void) ;
extern int __attribute__((__visibility__("default")))  zend_ini_deactivate(void) ;
extern int __attribute__((__visibility__("default")))  zend_copy_ini_directives(void) ;
extern void __attribute__((__visibility__("default")))  zend_ini_sort_entries(void) ;
extern int __attribute__((__visibility__("default")))  zend_register_ini_entries(zend_ini_entry const   *ini_entry , int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_unregister_ini_entries(int module_number ) ;
extern void __attribute__((__visibility__("default")))  zend_ini_refresh_caches(int stage ) ;
extern int __attribute__((__visibility__("default")))  zend_alter_ini_entry(char *name , uint name_length , char *new_value , uint new_value_length , int modify_type , int stage ) ;
extern int __attribute__((__visibility__("default")))  zend_alter_ini_entry_ex(char *name , uint name_length , char *new_value , uint new_value_length , int modify_type , int stage , int force_change ) ;
extern int __attribute__((__visibility__("default")))  zend_restore_ini_entry(char *name , uint name_length , int stage ) ;
extern void __attribute__((__visibility__("default")))  display_ini_entries(zend_module_entry *module ) ;
extern long __attribute__((__visibility__("default")))  zend_ini_long(char *name , uint name_length , int orig ) ;
extern double __attribute__((__visibility__("default")))  zend_ini_double(char *name , uint name_length , int orig ) ;
extern char __attribute__((__visibility__("default")))  *zend_ini_string(char *name , uint name_length , int orig ) ;
extern char __attribute__((__visibility__("default")))  *zend_ini_string_ex(char *name , uint name_length , int orig , zend_bool *exists ) ;
extern int __attribute__((__visibility__("default")))  zend_ini_register_displayer(char *name , uint name_length , void (*displayer)(zend_ini_entry *ini_entry , int type ) ) ;
extern void __attribute__((__visibility__("default")))  zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry , int type ) ;
extern void __attribute__((__visibility__("default")))  zend_ini_color_displayer_cb(zend_ini_entry *ini_entry , int type ) ;
extern void __attribute__((__visibility__("default")))  display_link_numbers(zend_ini_entry *ini_entry , int type ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateBool(zend_ini_entry *entry , char *new_value , uint new_value_length , void *mh_arg1 , void *mh_arg2 , void *mh_arg3 , int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateLong(zend_ini_entry *entry , char *new_value , uint new_value_length , void *mh_arg1 , void *mh_arg2 , void *mh_arg3 , int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateLongGEZero(zend_ini_entry *entry , char *new_value , uint new_value_length , void *mh_arg1 , void *mh_arg2 , void *mh_arg3 , int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateReal(zend_ini_entry *entry , char *new_value , uint new_value_length , void *mh_arg1 , void *mh_arg2 , void *mh_arg3 , int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateString(zend_ini_entry *entry , char *new_value , uint new_value_length , void *mh_arg1 , void *mh_arg2 , void *mh_arg3 , int stage ) ;
extern int __attribute__((__visibility__("default")))  OnUpdateStringUnempty(zend_ini_entry *entry , char *new_value , uint new_value_length , void *mh_arg1 , void *mh_arg2 , void *mh_arg3 , int stage ) ;
extern int __attribute__((__visibility__("default")))  zend_parse_ini_file(zend_file_handle *fh , zend_bool unbuffered_errors , int scanner_mode , void (*ini_parser_cb)(zval *arg1 , zval *arg2 , zval *arg3 , int callback_type , void *arg ) , void *arg ) ;
extern int __attribute__((__visibility__("default")))  zend_parse_ini_string(char *str , zend_bool unbuffered_errors , int scanner_mode , void (*ini_parser_cb)(zval *arg1 , zval *arg2 , zval *arg3 , int callback_type , void *arg ) , void *arg ) ;
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
extern int __attribute__((__visibility__("default")))  zend_get_resource_handle(zend_extension *extension ) ;
extern void __attribute__((__visibility__("default")))  zend_extension_dispatch_message(int message , void *arg ) ;
extern zend_llist __attribute__((__visibility__("default")))  zend_extensions ;
extern void zend_extension_dtor(zend_extension *extension ) ;
extern void zend_append_version_info(zend_extension const   *extension ) ;
extern int zend_startup_extensions_mechanism(void) ;
extern int zend_startup_extensions(void) ;
extern void zend_shutdown_extensions(void) ;
extern int __attribute__((__visibility__("default")))  zend_load_extension(char const   *path ) ;
extern int __attribute__((__visibility__("default")))  zend_register_extension(zend_extension *new_extension , void *handle ) ;
extern zend_extension __attribute__((__visibility__("default")))  *zend_get_extension(char const   *extension_name ) ;
extern void zend_register_closure_ce(void) ;
extern zend_class_entry __attribute__((__visibility__("default")))  *zend_ce_closure ;
extern void __attribute__((__visibility__("default")))  zend_create_closure(zval *res , zend_function *op_array , zend_class_entry *scope , zval *this_ptr ) ;
extern zend_function __attribute__((__visibility__("default")))  *zend_get_closure_invoke_method(zval *obj ) ;
extern zend_function const __attribute__((__visibility__("default")))  *zend_get_closure_method_def(zval *obj ) ;
extern zval __attribute__((__visibility__("default")))  *zend_get_closure_this_ptr(zval *obj ) ;
static void zif_zend_version(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_func_num_args(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_func_get_arg(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_func_get_args(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_strlen(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_strcmp(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_strncmp(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_strcasecmp(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_strncasecmp(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_each(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_error_reporting(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_define(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_defined(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_class(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_called_class(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_parent_class(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_method_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_property_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_class_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_interface_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_trait_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_function_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_class_alias(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_included_files(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_is_subclass_of(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_is_a(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_class_vars(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_object_vars(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_class_methods(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_trigger_error(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_set_error_handler(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_restore_error_handler(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_set_exception_handler(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_restore_exception_handler(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_declared_classes(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_declared_traits(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_declared_interfaces(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_defined_functions(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_defined_vars(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_create_function(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_resource_type(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_loaded_extensions(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_extension_loaded(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_extension_funcs(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_get_defined_constants(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_debug_backtrace(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_debug_print_backtrace(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_gc_collect_cycles(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_gc_enabled(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_gc_enable(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static void zif_gc_disable(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) ;
static zend_arg_info const   arginfo_zend__void[1]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )-1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_func_get_arg[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"arg_num", sizeof("arg_num") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_strlen[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"str", sizeof("str") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_strcmp[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )2, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"str1", sizeof("str1") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"str2", sizeof("str2") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_strncmp[4]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )3, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"str1", sizeof("str1") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"str2", sizeof("str2") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"len", sizeof("len") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_each[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"arr", sizeof("arr") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )1}};
static zend_arg_info const   arginfo_error_reporting[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"new_error_level", sizeof("new_error_level") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_define[4]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )3, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"constant_name", sizeof("constant_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"value", sizeof("value") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"case_insensitive", sizeof("case_insensitive") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_defined[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"constant_name", sizeof("constant_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_get_class[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"object", sizeof("object") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_is_subclass_of[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )2, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"object", sizeof("object") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"class_name", sizeof("class_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_get_class_vars[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"class_name", sizeof("class_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_get_object_vars[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"obj", sizeof("obj") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_get_class_methods[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"class", sizeof("class") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_method_exists[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )2, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"object", sizeof("object") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"method", sizeof("method") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_property_exists[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )2, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"object_or_class", sizeof("object_or_class") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"property_name", sizeof("property_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_class_exists[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"classname", sizeof("classname") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"autoload", sizeof("autoload") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_trait_exists[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"traitname", sizeof("traitname") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"autoload", sizeof("autoload") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_function_exists[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"function_name", sizeof("function_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_class_alias[4]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )2, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"user_class_name", sizeof("user_class_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"alias_name", sizeof("alias_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"autoload", sizeof("autoload") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_trigger_error[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"message", sizeof("message") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"error_type", sizeof("error_type") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_set_error_handler[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"error_handler", sizeof("error_handler") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"error_types", sizeof("error_types") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_set_exception_handler[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"exception_handler", sizeof("exception_handler") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_create_function[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )2, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"args", sizeof("args") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"code", sizeof("code") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_get_resource_type[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"res", sizeof("res") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_get_loaded_extensions[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"zend_extensions", sizeof("zend_extensions") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_get_defined_constants[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"categorize", sizeof("categorize") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_debug_backtrace[3]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"options", sizeof("options") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"limit", sizeof("limit") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_debug_print_backtrace[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"options", sizeof("options") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_arg_info const   arginfo_extension_loaded[2]  = {      {(char const   *)((void *)0), (zend_uint )0, (char const   *)((void *)0), (zend_uint )1, (zend_uchar )0, (zend_bool )0, (zend_bool )0}, 
        {"extension_name", sizeof("extension_name") - 1U, (char const   *)((void *)0), (zend_uint )0, (zend_uchar )0, (zend_bool )0, (zend_bool )0}};
static zend_function_entry const   builtin_functions[54]  = 
  {      {"zend_version", & zif_zend_version, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"func_num_args", & zif_func_num_args, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"func_get_arg", & zif_func_get_arg, arginfo_func_get_arg, sizeof(arginfo_func_get_arg) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"func_get_args", & zif_func_get_args, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"strlen", & zif_strlen, arginfo_strlen, sizeof(arginfo_strlen) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"strcmp", & zif_strcmp, arginfo_strcmp, sizeof(arginfo_strcmp) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"strncmp", & zif_strncmp, arginfo_strncmp, sizeof(arginfo_strncmp) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"strcasecmp", & zif_strcasecmp, arginfo_strcmp, sizeof(arginfo_strcmp) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"strncasecmp", & zif_strncasecmp, arginfo_strncmp, sizeof(arginfo_strncmp) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"each", & zif_each, arginfo_each, sizeof(arginfo_each) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"error_reporting", & zif_error_reporting, arginfo_error_reporting, sizeof(arginfo_error_reporting) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"define", & zif_define, arginfo_define, sizeof(arginfo_define) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"defined", & zif_defined, arginfo_defined, sizeof(arginfo_defined) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_class", & zif_get_class, arginfo_get_class, sizeof(arginfo_get_class) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_called_class", & zif_get_called_class, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_parent_class", & zif_get_parent_class, arginfo_get_class, sizeof(arginfo_get_class) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"method_exists", & zif_method_exists, arginfo_method_exists, sizeof(arginfo_method_exists) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"property_exists", & zif_property_exists, arginfo_property_exists, sizeof(arginfo_property_exists) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"class_exists", & zif_class_exists, arginfo_class_exists, sizeof(arginfo_class_exists) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"interface_exists", & zif_interface_exists, arginfo_class_exists, sizeof(arginfo_class_exists) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"trait_exists", & zif_trait_exists, arginfo_trait_exists, sizeof(arginfo_trait_exists) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"function_exists", & zif_function_exists, arginfo_function_exists, sizeof(arginfo_function_exists) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"class_alias", & zif_class_alias, arginfo_class_alias, sizeof(arginfo_class_alias) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_included_files", & zif_get_included_files, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_required_files", & zif_get_included_files, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"is_subclass_of", & zif_is_subclass_of, arginfo_is_subclass_of, sizeof(arginfo_is_subclass_of) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"is_a", & zif_is_a, arginfo_is_subclass_of, sizeof(arginfo_is_subclass_of) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_class_vars", & zif_get_class_vars, arginfo_get_class_vars, sizeof(arginfo_get_class_vars) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_object_vars", & zif_get_object_vars, arginfo_get_object_vars, sizeof(arginfo_get_object_vars) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_class_methods", & zif_get_class_methods, arginfo_get_class_methods, sizeof(arginfo_get_class_methods) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"trigger_error", & zif_trigger_error, arginfo_trigger_error, sizeof(arginfo_trigger_error) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"user_error", & zif_trigger_error, arginfo_trigger_error, sizeof(arginfo_trigger_error) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"set_error_handler", & zif_set_error_handler, arginfo_set_error_handler, sizeof(arginfo_set_error_handler) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"restore_error_handler", & zif_restore_error_handler, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"set_exception_handler", & zif_set_exception_handler, arginfo_set_exception_handler, sizeof(arginfo_set_exception_handler) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"restore_exception_handler", & zif_restore_exception_handler, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_declared_classes", & zif_get_declared_classes, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_declared_traits", & zif_get_declared_traits, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_declared_interfaces", & zif_get_declared_interfaces, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_defined_functions", & zif_get_defined_functions, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_defined_vars", & zif_get_defined_vars, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"create_function", & zif_create_function, arginfo_create_function, sizeof(arginfo_create_function) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_resource_type", & zif_get_resource_type, arginfo_get_resource_type, sizeof(arginfo_get_resource_type) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_loaded_extensions", & zif_get_loaded_extensions, arginfo_get_loaded_extensions, sizeof(arginfo_get_loaded_extensions) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"extension_loaded", & zif_extension_loaded, arginfo_extension_loaded, sizeof(arginfo_extension_loaded) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_extension_funcs", & zif_get_extension_funcs, arginfo_extension_loaded, sizeof(arginfo_extension_loaded) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"get_defined_constants", & zif_get_defined_constants, arginfo_get_defined_constants, sizeof(arginfo_get_defined_constants) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"debug_backtrace", & zif_debug_backtrace, arginfo_debug_backtrace, sizeof(arginfo_debug_backtrace) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"debug_print_backtrace", & zif_debug_print_backtrace, arginfo_debug_print_backtrace, sizeof(arginfo_debug_print_backtrace) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"gc_collect_cycles", & zif_gc_collect_cycles, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"gc_enabled", & zif_gc_enabled, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"gc_enable", & zif_gc_enable, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {"gc_disable", & zif_gc_disable, arginfo_zend__void, sizeof(arginfo_zend__void) / sizeof(struct _zend_arg_info ) - 1U, (zend_uint )0}, 
        {(char const   *)((void *)0), (void (*)(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ))((void *)0), (struct _zend_arg_info  const  *)((void *)0), (zend_uint )0, (zend_uint )0}};
int zm_startup_core(int type , int module_number ) 
{ zend_class_entry class_entry ;
  char const   *cl_name ;
  int _len ;
  char const __attribute__((__visibility__("default")))  *tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;

  {
  cl_name = "stdClass";
  _len = (int )(sizeof("stdClass") - 1U);
  tmp = (*zend_new_interned_string)(cl_name, _len + 1, 0);
  class_entry.name = (char const   *)tmp;
  if ((unsigned int )class_entry.name == (unsigned int )cl_name) {
    tmp___0 = zend_strndup(cl_name, (unsigned int )_len);
    class_entry.name = (char const   *)tmp___0;
  } else {

  }
  class_entry.name_length = (unsigned int )_len;
  class_entry.constructor = (union _zend_function *)((void *)0);
  class_entry.destructor = (union _zend_function *)((void *)0);
  class_entry.clone = (union _zend_function *)((void *)0);
  class_entry.serialize = (int (*)(zval *object , unsigned char **buffer , zend_uint *buf_len , zend_serialize_data *data ))((void *)0);
  class_entry.unserialize = (int (*)(zval **object , zend_class_entry *ce , unsigned char const   *buf , zend_uint buf_len , zend_unserialize_data *data ))((void *)0);
  class_entry.create_object = (zend_object_value (*)(zend_class_entry *class_type ))((void *)0);
  class_entry.interface_gets_implemented = (int (*)(zend_class_entry *iface , zend_class_entry *class_type ))((void *)0);
  class_entry.get_static_method = (union _zend_function *(*)(zend_class_entry *ce , char *method , int method_len ))((void *)0);
  class_entry.__call = (union _zend_function *)((void *)0);
  class_entry.__callstatic = (union _zend_function *)((void *)0);
  class_entry.__tostring = (union _zend_function *)((void *)0);
  class_entry.__get = (union _zend_function *)((void *)0);
  class_entry.__set = (union _zend_function *)((void *)0);
  class_entry.__unset = (union _zend_function *)((void *)0);
  class_entry.__isset = (union _zend_function *)((void *)0);
  class_entry.serialize_func = (union _zend_function *)((void *)0);
  class_entry.unserialize_func = (union _zend_function *)((void *)0);
  class_entry.serialize = (int (*)(zval *object , unsigned char **buffer , zend_uint *buf_len , zend_serialize_data *data ))((void *)0);
  class_entry.unserialize = (int (*)(zval **object , zend_class_entry *ce , unsigned char const   *buf , zend_uint buf_len , zend_unserialize_data *data ))((void *)0);
  class_entry.parent = (struct _zend_class_entry *)((void *)0);
  class_entry.num_interfaces = 0U;
  class_entry.traits = (zend_class_entry **)((void *)0);
  class_entry.num_traits = 0U;
  class_entry.trait_aliases = (zend_trait_alias **)((void *)0);
  class_entry.trait_precedences = (zend_trait_precedence **)((void *)0);
  class_entry.interfaces = (zend_class_entry **)((void *)0);
  class_entry.get_iterator = (zend_object_iterator *(*)(zend_class_entry *ce , zval *object , int by_ref ))((void *)0);
  class_entry.iterator_funcs.funcs = (zend_object_iterator_funcs *)((void *)0);
  class_entry.info.internal.module = (struct _zend_module_entry *)((void *)0);
  class_entry.info.internal.builtin_functions = (struct _zend_function_entry  const  *)((void *)0);
  zend_standard_class_def = zend_register_internal_class(& class_entry);
  zend_register_default_classes();
  return (0);
}
}
zend_module_entry zend_builtin_module  = 
     {(unsigned short )sizeof(zend_module_entry ), 20100525U, (unsigned char)0, (unsigned char)0, (struct _zend_ini_entry  const  *)((void *)0), (struct _zend_module_dep  const  *)((void *)0), "Core", builtin_functions, & zm_startup_core, (int (*)(int type , int module_number ))((void *)0), (int (*)(int type , int module_number ))((void *)0), (int (*)(int type , int module_number ))((void *)0), (void (*)(zend_module_entry *zend_module ))((void *)0), "2.4.0", (size_t )0, (void *)0, (void (*)(void *global ))((void *)0), (void (*)(void *global ))((void *)0), (int (*)(void))((void *)0), 0, (unsigned char)0, (void *)0, 0, "API20100525,NTS"};
int zend_startup_builtin_functions(void) 
{ zend_module_entry __attribute__((__visibility__("default")))  *tmp ;
  int tmp___0 ;
  zend_module_entry __attribute__((__visibility__("default")))  *tmp___1 ;

  {
  zend_builtin_module.module_number = 0;
  zend_builtin_module.type = (unsigned char)1;
  tmp___1 = zend_register_module_ex(& zend_builtin_module);
  executor_globals.current_module = (struct _zend_module_entry *)tmp___1;
  if ((unsigned int )executor_globals.current_module == (unsigned int )((void *)0)) {
    tmp___0 = -1;
  } else {
    tmp___0 = 0;
  }
  return (tmp___0);
}
}
static void zif_zend_version(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp ;

  {
  while (1) {
    __s = "2.4.0";
    __l = (int )(sizeof("2.4.0") - 1U);
    __z = return_value;
    __z->value.str.len = __l;
    tmp = _estrndup(__s, (unsigned int )__l);
    __z->value.str.val = (char *)tmp;
    __z->type = (unsigned char)6;
    break;
  }
  return;
}
}
static void zif_gc_collect_cycles(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  __z = return_value;
  tmp = gc_collect_cycles();
  __z->value.lval = (long )tmp;
  __z->type = (unsigned char)1;
  return;
}
}
static void zif_gc_enabled(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *__z ;

  {
  while (1) {
    __z = return_value;
    __z->value.lval = (long )((int )gc_globals.gc_enabled != 0);
    __z->type = (unsigned char)3;
    break;
  }
  return;
}
}
static void zif_gc_enable(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ 

  {
  zend_alter_ini_entry((char *)"zend.enable_gc", sizeof("zend.enable_gc"), (char *)"1", sizeof("1") - 1U, 1, 1 << 4);
  return;
}
}
static void zif_gc_disable(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ 

  {
  zend_alter_ini_entry((char *)"zend.enable_gc", sizeof("zend.enable_gc"), (char *)"0", sizeof("0") - 1U, 1, 1 << 4);
  return;
}
}
static void zif_func_num_args(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zend_execute_data *ex ;
  zval *__z ;
  zval *__z___0 ;

  {
  ex = (executor_globals.current_execute_data)->prev_execute_data;
  if (ex) {
    if (ex->function_state.arguments) {
      __z = return_value;
      __z->value.lval = (long )((unsigned long )*(ex->function_state.arguments));
      __z->type = (unsigned char)1;
      return;
    } else {
      zend_error(1 << 1L, "func_num_args():  Called from the global scope - no function context");
      __z___0 = return_value;
      __z___0->value.lval = -1L;
      __z___0->type = (unsigned char)1;
      return;
    }
  } else {
    zend_error(1 << 1L, "func_num_args():  Called from the global scope - no function context");
    __z___0 = return_value;
    __z___0->value.lval = -1L;
    __z___0->type = (unsigned char)1;
    return;
  }
}
}
static void zif_func_get_arg(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ void **p ;
  int arg_count ;
  zval *arg ;
  long requested_offset ;
  zend_execute_data *ex ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  zval *__z___1 ;

  {
  ex = (executor_globals.current_execute_data)->prev_execute_data;
  tmp = zend_parse_parameters(ht, "l", & requested_offset);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (requested_offset < 0L) {
    zend_error(1 << 1L, "func_get_arg():  The argument number should be >= 0");
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  if (! ex) {
    goto _L;
  } else {
    if (! ex->function_state.arguments) {
      _L: /* CIL Label */ 
      zend_error(1 << 1L, "func_get_arg():  Called from the global scope - no function context");
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (unsigned char)3;
        break;
      }
      return;
    } else {

    }
  }
  p = ex->function_state.arguments;
  arg_count = (int )((unsigned long )*p);
  if (requested_offset >= (long )arg_count) {
    zend_error(1 << 1L, "func_get_arg():  Argument %ld not passed to function", requested_offset);
    while (1) {
      __z___1 = return_value;
      __z___1->value.lval = 0L;
      __z___1->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  arg = (zval *)*(p - ((long )arg_count - requested_offset));
  *return_value = *arg;
  _zval_copy_ctor(return_value);
  return_value->refcount__gc = 1U;
  return_value->is_ref__gc = (unsigned char)0;
  return;
}
}
static void zif_func_get_args(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ void **p ;
  int arg_count ;
  int i ;
  zend_execute_data *ex ;
  zval *__z ;
  zval *element ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  ex = (executor_globals.current_execute_data)->prev_execute_data;
  if (! ex) {
    goto _L;
  } else {
    if (! ex->function_state.arguments) {
      _L: /* CIL Label */ 
      zend_error(1 << 1L, "func_get_args():  Called from the global scope - no function context");
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (unsigned char)3;
        break;
      }
      return;
    } else {

    }
  }
  p = ex->function_state.arguments;
  arg_count = (int )((unsigned long )*p);
  _array_init(return_value, (unsigned int )arg_count);
  i = 0;
  while (i < arg_count) {
    while (1) {
      tmp = _emalloc(sizeof(zval_gc_info ));
      element = (zval *)tmp;
      ((zval_gc_info *)element)->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    *element = *(*((zval **)(p - (arg_count - i))));
    _zval_copy_ctor(element);
    element->refcount__gc = 1U;
    element->is_ref__gc = (unsigned char)0;
    _zend_hash_index_update_or_next_insert(return_value->value.ht, 0UL, (void *)(& element), sizeof(zval *), (void **)((void *)0), 1 << 2);
    i ++;
  }
  return;
}
}
static void zif_strlen(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *s1 ;
  int s1_len ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;

  {
  tmp = zend_parse_parameters(ht, "s", & s1, & s1_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  __z = return_value;
  __z->value.lval = (long )s1_len;
  __z->type = (unsigned char)1;
  return;
}
}
static void zif_strcmp(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *s1 ;
  char *s2 ;
  int s1_len ;
  int s2_len ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, "ss", & s1, & s1_len, & s2, & s2_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  __z = return_value;
  tmp___0 = zend_binary_strcmp((char const   *)s1, (unsigned int )s1_len, (char const   *)s2, (unsigned int )s2_len);
  __z->value.lval = (long )tmp___0;
  __z->type = (unsigned char)1;
  return;
}
}
static void zif_strncmp(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *s1 ;
  char *s2 ;
  int s1_len ;
  int s2_len ;
  long len ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, "ssl", & s1, & s1_len, & s2, & s2_len, & len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (len < 0L) {
    zend_error(1 << 1L, "Length must be greater than or equal to 0");
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  __z___0 = return_value;
  tmp___0 = zend_binary_strncmp((char const   *)s1, (unsigned int )s1_len, (char const   *)s2, (unsigned int )s2_len, (unsigned int )len);
  __z___0->value.lval = (long )tmp___0;
  __z___0->type = (unsigned char)1;
  return;
}
}
static void zif_strcasecmp(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *s1 ;
  char *s2 ;
  int s1_len ;
  int s2_len ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, "ss", & s1, & s1_len, & s2, & s2_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  __z = return_value;
  tmp___0 = zend_binary_strcasecmp((char const   *)s1, (unsigned int )s1_len, (char const   *)s2, (unsigned int )s2_len);
  __z->value.lval = (long )tmp___0;
  __z->type = (unsigned char)1;
  return;
}
}
static void zif_strncasecmp(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *s1 ;
  char *s2 ;
  int s1_len ;
  int s2_len ;
  long len ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, "ssl", & s1, & s1_len, & s2, & s2_len, & len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (len < 0L) {
    zend_error(1 << 1L, "Length must be greater than or equal to 0");
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  __z___0 = return_value;
  tmp___0 = zend_binary_strncasecmp((char const   *)s1, (unsigned int )s1_len, (char const   *)s2, (unsigned int )s2_len, (unsigned int )len);
  __z___0->value.lval = (long )tmp___0;
  __z___0->type = (unsigned char)1;
  return;
}
}
static void zif_each(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *array ;
  zval *entry ;
  zval **entry_ptr ;
  zval *tmp ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  zval **inserted_pointer ;
  HashTable *target_hash ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  HashTable *tmp___1 ;
  HashTable *tmp___2 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  void __attribute__((__visibility__("default")))  *tmp___4 ;
  zend_bool tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;

  {
  tmp___0 = zend_parse_parameters(ht, "z", & array);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if ((int )array->type == 4) {
    target_hash = array->value.ht;
  } else {
    if ((int )array->type == 5) {
      tmp___1 = (*((array->value.obj.handlers)->get_properties))(array);
      tmp___2 = tmp___1;
    } else {
      tmp___2 = (HashTable *)((void *)0);
    }
    target_hash = tmp___2;
  }
  if (! target_hash) {
    zend_error(1 << 1L, "Variable passed to each() is not an array or object");
    return;
  } else {

  }
  tmp___3 = zend_hash_get_current_data_ex(target_hash, (void **)(& entry_ptr), (HashPosition *)((void *)0));
  if (tmp___3 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  _array_init(return_value, 0U);
  entry = *entry_ptr;
  tmp___5 = zval_isref_p(entry);
  if (tmp___5) {
    while (1) {
      tmp___4 = _emalloc(sizeof(zval_gc_info ));
      tmp = (zval *)tmp___4;
      ((zval_gc_info *)tmp)->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    *tmp = *entry;
    _zval_copy_ctor(tmp);
    zval_unset_isref_p(tmp);
    zval_set_refcount_p(tmp, 0U);
    entry = tmp;
  } else {

  }
  _zend_hash_index_update_or_next_insert(return_value->value.ht, 1UL, (void *)(& entry), sizeof(zval *), (void **)((void *)0), 1);
  zval_addref_p(entry);
  _zend_hash_add_or_update(return_value->value.ht, "value", sizeof("value"), (void *)(& entry), sizeof(zval *), (void **)((void *)0), 1);
  zval_addref_p(entry);
  tmp___6 = zend_hash_get_current_key_ex((HashTable const   *)target_hash, & string_key, & string_key_len, & num_key, (unsigned char)1, (HashPosition *)((void *)0));
  switch ((int )tmp___6) {
  case 1: 
  add_get_index_stringl(return_value, 0UL, (char const   *)string_key, string_key_len - 1U, (void **)(& inserted_pointer), 0);
  break;
  case 2: 
  add_get_index_long(return_value, 0UL, (long )num_key, (void **)(& inserted_pointer));
  break;
  }
  _zend_hash_add_or_update(return_value->value.ht, "key", sizeof("key"), (void *)inserted_pointer, sizeof(zval *), (void **)((void *)0), 1);
  zval_addref_p(*inserted_pointer);
  zend_hash_move_forward_ex(target_hash, (HashPosition *)((void *)0));
  return;
}
}
static void zif_error_reporting(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *err ;
  int err_len ;
  int old_error_reporting ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;

  {
  tmp = zend_parse_parameters(ht, "|s", & err, & err_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  old_error_reporting = executor_globals.error_reporting;
  if (ht != 0) {
    zend_alter_ini_entry((char *)"error_reporting", sizeof("error_reporting"), err, (unsigned int )err_len, 1, 1 << 4);
  } else {

  }
  __z = return_value;
  __z->value.lval = (long )old_error_reporting;
  __z->type = (unsigned char)1;
  return;
}
}
static void zif_define(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *name ;
  int name_len ;
  zval *val ;
  zval *val_free ;
  zend_bool non_cs ;
  int case_sensitive ;
  zend_constant c ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  char *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  int tmp___2 ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___3 ;
  zval *__z___1 ;
  zval *__z___2 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  val_free = (zval *)((void *)0);
  non_cs = (zend_bool )0;
  case_sensitive = 1;
  tmp = zend_parse_parameters(ht, "sz|b", & name, & name_len, & val, & non_cs);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (non_cs) {
    case_sensitive = 0;
  } else {

  }
  tmp___0 = zend_memnstr(name, (char *)"::", (int )(sizeof("::") - 1U), name + name_len);
  if (tmp___0) {
    zend_error(1 << 1L, "Class constants cannot be defined or redefined");
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  repeat: 
  switch ((int )val->type) {
  case 1: 
  case 2: 
  case 6: 
  case 3: 
  case 7: 
  case 0: 
  break;
  case 5: 
  if (! val_free) {
    if ((val->value.obj.handlers)->get) {
      val = (*((val->value.obj.handlers)->get))(val);
      val_free = val;
      goto repeat;
    } else {
      if ((val->value.obj.handlers)->cast_object) {
        while (1) {
          tmp___1 = _emalloc(sizeof(zval_gc_info ));
          val_free = (zval *)tmp___1;
          ((zval_gc_info *)val_free)->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        *val_free = (struct _zval_struct )zval_used_for_init;
        tmp___2 = (*((val->value.obj.handlers)->cast_object))(val, val_free, 6);
        if (tmp___2 == 0) {
          val = val_free;
          break;
        } else {

        }
      } else {

      }
    }
  } else {

  }
  default: 
  zend_error(1 << 1L, "Constants may only evaluate to scalar values");
  if (val_free) {
    _zval_ptr_dtor(& val_free);
  } else {

  }
  while (1) {
    __z___0 = return_value;
    __z___0->value.lval = 0L;
    __z___0->type = (unsigned char)3;
    break;
  }
  return;
  }
  c.value = *val;
  _zval_copy_ctor(& c.value);
  if (val_free) {
    _zval_ptr_dtor(& val_free);
  } else {

  }
  c.flags = case_sensitive;
  if ((unsigned int )name >= (unsigned int )compiler_globals.interned_strings_start) {
    if ((unsigned int )name < (unsigned int )compiler_globals.interned_strings_end) {
      c.name = name;
    } else {
      tmp___3 = zend_strndup((char const   *)name, (unsigned int )name_len);
      c.name = (char *)tmp___3;
    }
  } else {
    tmp___3 = zend_strndup((char const   *)name, (unsigned int )name_len);
    c.name = (char *)tmp___3;
  }
  c.name_len = (unsigned int )(name_len + 1);
  c.module_number = 2147483647;
  tmp___4 = zend_register_constant(& c);
  if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
    while (1) {
      __z___1 = return_value;
      __z___1->value.lval = 1L;
      __z___1->type = (unsigned char)3;
      break;
    }
    return;
  } else {
    while (1) {
      __z___2 = return_value;
      __z___2->value.lval = 0L;
      __z___2->type = (unsigned char)3;
      break;
    }
    return;
  }
}
}
static void zif_defined(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *name ;
  int name_len ;
  zval c ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, "s", & name, & name_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_get_constant_ex((char const   *)name, (unsigned int )name_len, & c, (zend_class_entry *)((void *)0), 256UL);
  if (tmp___0) {
    _zval_dtor(& c);
    while (1) {
      __z = return_value;
      __z->value.lval = 1L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (unsigned char)3;
      break;
    }
    return;
  }
}
}
static void zif_get_class(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *obj ;
  char const   *name ;
  zend_uint name_len ;
  int dup ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp ;
  char const   *__s ;
  int __l ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  zval *__z___1 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  char const   *__s___0 ;
  int __l___0 ;
  zval *__z___2 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;

  {
  obj = (zval *)((void *)0);
  name = "";
  name_len = (zend_uint )0;
  tmp = zend_parse_parameters(ht, "|o!", & obj);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  if (! obj) {
    if (executor_globals.scope) {
      while (1) {
        __s = (executor_globals.scope)->name;
        __l = (int )(executor_globals.scope)->name_length;
        __z___0 = return_value;
        __z___0->value.str.len = __l;
        tmp___0 = _estrndup(__s, (unsigned int )__l);
        __z___0->value.str.val = (char *)tmp___0;
        __z___0->type = (unsigned char)6;
        break;
      }
      return;
    } else {
      zend_error(1 << 1L, "get_class() called without object from outside a class");
      while (1) {
        __z___1 = return_value;
        __z___1->value.lval = 0L;
        __z___1->type = (unsigned char)3;
        break;
      }
      return;
    }
  } else {

  }
  tmp___1 = zend_get_object_classname((zval const   *)obj, & name, & name_len);
  dup = (int )tmp___1;
  while (1) {
    __s___0 = name;
    __l___0 = (int )name_len;
    __z___2 = return_value;
    __z___2->value.str.len = __l___0;
    if (dup) {
      tmp___2 = _estrndup(__s___0, (unsigned int )__l___0);
      __z___2->value.str.val = (char *)tmp___2;
    } else {
      __z___2->value.str.val = (char *)__s___0;
    }
    __z___2->type = (unsigned char)6;
    break;
  }
  return;
}
}
static void zif_get_called_class(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ int __attribute__((__visibility__("default")))  tmp ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  zval *__z___0 ;

  {
  tmp = zend_parse_parameters(ht, "");
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (executor_globals.called_scope) {
    while (1) {
      __s = (executor_globals.called_scope)->name;
      __l = (int )(executor_globals.called_scope)->name_length;
      __z = return_value;
      __z->value.str.len = __l;
      tmp___0 = _estrndup(__s, (unsigned int )__l);
      __z->value.str.val = (char *)tmp___0;
      __z->type = (unsigned char)6;
      break;
    }
    return;
  } else {
    if (! executor_globals.scope) {
      zend_error(1 << 1L, "get_called_class() called from outside a class");
    } else {

    }
  }
  while (1) {
    __z___0 = return_value;
    __z___0->value.lval = 0L;
    __z___0->type = (unsigned char)3;
    break;
  }
  return;
}
}
static void zif_get_parent_class(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *arg ;
  zend_class_entry *ce ;
  char const   *name ;
  zend_uint name_length ;
  int __attribute__((__visibility__("default")))  tmp ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  zval *__z___0 ;
  char const   *__s___0 ;
  int __l___0 ;
  zval *__z___1 ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___2 ;
  int tmp___3 ;
  zend_class_entry **pce ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  char const   *__s___1 ;
  int __l___1 ;
  zval *__z___2 ;
  char __attribute__((__visibility__("default")))  *tmp___5 ;
  zval *__z___3 ;

  {
  ce = (zend_class_entry *)((void *)0);
  tmp = zend_parse_parameters(ht, "|z", & arg);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (! ht) {
    ce = executor_globals.scope;
    if (ce) {
      if (ce->parent) {
        while (1) {
          __s = (ce->parent)->name;
          __l = (int )(ce->parent)->name_length;
          __z = return_value;
          __z->value.str.len = __l;
          tmp___0 = _estrndup(__s, (unsigned int )__l);
          __z->value.str.val = (char *)tmp___0;
          __z->type = (unsigned char)6;
          break;
        }
        return;
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (unsigned char)3;
        break;
      }
      return;
    }
  } else {

  }
  if ((int )arg->type == 5) {
    if ((arg->value.obj.handlers)->get_class_name) {
      tmp___3 = (*((arg->value.obj.handlers)->get_class_name))((zval const   *)arg, & name, & name_length, 1);
      if (tmp___3 == 0) {
        while (1) {
          __s___0 = name;
          __l___0 = (int )name_length;
          __z___1 = return_value;
          __z___1->value.str.len = __l___0;
          __z___1->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s___0));
          __z___1->type = (unsigned char)6;
          break;
        }
        return;
      } else {
        tmp___2 = zend_get_class_entry((zval const   *)arg);
        ce = (zend_class_entry *)tmp___2;
      }
    } else {
      tmp___2 = zend_get_class_entry((zval const   *)arg);
      ce = (zend_class_entry *)tmp___2;
    }
  } else {
    if ((int )arg->type == 6) {
      tmp___4 = zend_lookup_class((char const   *)arg->value.str.val, arg->value.str.len, & pce);
      if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {
        ce = *pce;
      } else {

      }
    } else {

    }
  }
  if (ce) {
    if (ce->parent) {
      while (1) {
        __s___1 = (ce->parent)->name;
        __l___1 = (int )(ce->parent)->name_length;
        __z___2 = return_value;
        __z___2->value.str.len = __l___1;
        tmp___5 = _estrndup(__s___1, (unsigned int )__l___1);
        __z___2->value.str.val = (char *)tmp___5;
        __z___2->type = (unsigned char)6;
        break;
      }
      return;
    } else {
      goto _L___0;
    }
  } else {
    _L___0: /* CIL Label */ 
    while (1) {
      __z___3 = return_value;
      __z___3->value.lval = 0L;
      __z___3->type = (unsigned char)3;
      break;
    }
    return;
  }
}
}
static void is_a_impl(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used , zend_bool only_subclass ) 
{ zval *obj ;
  char *class_name ;
  int class_name_len ;
  zend_class_entry *instance_ce ;
  zend_class_entry **ce ;
  zend_bool retval ;
  int __attribute__((__visibility__("default")))  tmp ;
  zend_class_entry **the_ce ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___1 ;
  zval *__z___0 ;
  zend_bool __attribute__((__visibility__("default")))  tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  zval *__z___1 ;

  {
  tmp = zend_parse_parameters(ht, "zs", & obj, & class_name, & class_name_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if ((int )obj->type == 6) {
    tmp___0 = zend_lookup_class((char const   *)obj->value.str.val, obj->value.str.len, & the_ce);
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (unsigned char)3;
        break;
      }
      return;
    } else {

    }
    instance_ce = *the_ce;
  } else {
    if ((int )obj->type == 5) {
      if ((unsigned int )(obj->value.obj.handlers)->get_class_entry != (unsigned int )((void *)0)) {
        tmp___1 = zend_get_class_entry((zval const   *)obj);
        instance_ce = (zend_class_entry *)tmp___1;
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (unsigned char)3;
        break;
      }
      return;
    }
  }
  tmp___3 = zend_lookup_class_ex((char const   *)class_name, class_name_len, (zend_literal const   *)((void *)0), 0, & ce);
  if (tmp___3 == (int __attribute__((__visibility__("default")))  )-1) {
    retval = (unsigned char)0;
  } else {
    if (only_subclass) {
      if ((unsigned int )instance_ce == (unsigned int )*ce) {
        retval = (unsigned char)0;
      } else {
        tmp___2 = instanceof_function((zend_class_entry const   *)instance_ce, (zend_class_entry const   *)*ce);
        retval = (unsigned char )tmp___2;
      }
    } else {
      tmp___2 = instanceof_function((zend_class_entry const   *)instance_ce, (zend_class_entry const   *)*ce);
      retval = (unsigned char )tmp___2;
    }
  }
  while (1) {
    __z___1 = return_value;
    __z___1->value.lval = (long )((int )retval != 0);
    __z___1->type = (unsigned char)3;
    break;
  }
  return;
}
}
static void zif_is_subclass_of(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ 

  {
  is_a_impl(ht, return_value, return_value_ptr, this_ptr, return_value_used, (unsigned char)1);
  return;
}
}
static void zif_is_a(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ 

  {
  is_a_impl(ht, return_value, return_value_ptr, this_ptr, return_value_used, (unsigned char)0);
  return;
}
}
static void add_class_vars(zend_class_entry *ce , int statics , zval *return_value ) 
{ HashPosition pos ;
  zend_property_info *prop_info ;
  zval *prop ;
  zval *prop_copy ;
  char *key ;
  uint key_len ;
  ulong num_index ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  size_t tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;

  {
  zend_hash_internal_pointer_reset_ex(& ce->properties_info, & pos);
  while (1) {
    tmp___2 = zend_hash_get_current_data_ex(& ce->properties_info, (void **)(& prop_info), & pos);
    if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    zend_hash_get_current_key_ex((HashTable const   *)(& ce->properties_info), & key, & key_len, & num_index, (unsigned char)0, & pos);
    zend_hash_move_forward_ex(& ce->properties_info, & pos);
    if (prop_info->flags & 131072U) {
      if ((unsigned int )prop_info->ce != (unsigned int )executor_globals.scope) {
        continue;
      } else {
        goto _L___0;
      }
    } else {
      _L___0: /* CIL Label */ 
      if (prop_info->flags & 512U) {
        tmp = zend_check_protected(prop_info->ce, executor_globals.scope);
        if (tmp) {
          goto _L;
        } else {
          continue;
        }
      } else {
        _L: /* CIL Label */ 
        if (prop_info->flags & 1024U) {
          if ((unsigned int )ce != (unsigned int )executor_globals.scope) {
            if ((unsigned int )prop_info->ce != (unsigned int )executor_globals.scope) {
              continue;
            } else {

            }
          } else {

          }
        } else {

        }
      }
    }
    prop = (zval *)((void *)0);
    if (prop_info->offset >= 0) {
      if (statics) {
        if ((prop_info->flags & 1U) != 0U) {
          prop = *(ce->default_static_members_table + prop_info->offset);
        } else {
          goto _L___1;
        }
      } else {
        _L___1: /* CIL Label */ 
        if (! statics) {
          if ((prop_info->flags & 1U) == 0U) {
            prop = *(ce->default_properties_table + prop_info->offset);
          } else {

          }
        } else {

        }
      }
    } else {

    }
    if (! prop) {
      continue;
    } else {

    }
    while (1) {
      tmp___0 = _emalloc(sizeof(zval_gc_info ));
      prop_copy = (zval *)tmp___0;
      ((zval_gc_info *)prop_copy)->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    *prop_copy = *prop;
    _zval_copy_ctor(prop_copy);
    prop_copy->refcount__gc = 1U;
    prop_copy->is_ref__gc = (unsigned char)0;
    if ((int )prop_copy->type == 9) {
      zval_update_constant(& prop_copy, (void *)0);
    } else {
      if (((int )prop_copy->type & 0x00f) == 8) {
        zval_update_constant(& prop_copy, (void *)0);
      } else {

      }
    }
    tmp___1 = strlen((char const   *)key);
    add_assoc_zval_ex(return_value, (char const   *)key, tmp___1 + 1U, prop_copy);
  }
  return;
}
}
static void zif_get_class_vars(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *class_name ;
  int class_name_len ;
  zend_class_entry **pce ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, "s", & class_name, & class_name_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_lookup_class((char const   *)class_name, class_name_len, & pce);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {
    _array_init(return_value, 0U);
    zend_update_class_constants(*pce);
    add_class_vars(*pce, 0, return_value);
    add_class_vars(*pce, 1, return_value);
  }
  return;
}
}
static void zif_get_object_vars(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *obj ;
  zval **value ;
  HashTable *properties ;
  HashPosition pos ;
  char *key ;
  char const   *prop_name ;
  char const   *class_name ;
  uint key_len ;
  ulong num_index ;
  zend_object *zobj ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  zend_object __attribute__((__visibility__("default")))  *tmp___0 ;
  size_t tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  tmp = zend_parse_parameters(ht, "o", & obj);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if ((unsigned int )(obj->value.obj.handlers)->get_properties == (unsigned int )((void *)0)) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  properties = (*((obj->value.obj.handlers)->get_properties))(obj);
  if ((unsigned int )properties == (unsigned int )((void *)0)) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  tmp___0 = zend_objects_get_address((zval const   *)obj);
  zobj = (zend_object *)tmp___0;
  _array_init(return_value, 0U);
  zend_hash_internal_pointer_reset_ex(properties, & pos);
  while (1) {
    tmp___4 = zend_hash_get_current_data_ex(properties, (void **)(& value), & pos);
    if (tmp___4 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    tmp___3 = zend_hash_get_current_key_ex((HashTable const   *)properties, & key, & key_len, & num_index, (unsigned char)0, & pos);
    if (tmp___3 == (int __attribute__((__visibility__("default")))  )1) {
      tmp___2 = zend_check_property_access(zobj, (char const   *)key, (int )(key_len - 1U));
      if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {
        zend_unmangle_property_name((char const   *)key, (int )(key_len - 1U), & class_name, & prop_name);
        zval_addref_p(*value);
        tmp___1 = strlen(prop_name);
        add_assoc_zval_ex(return_value, prop_name, tmp___1 + 1U, *value);
      } else {

      }
    } else {

    }
    zend_hash_move_forward_ex(properties, & pos);
  }
  return;
}
}
static void zif_get_class_methods(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *klass ;
  zval *method_name ;
  zend_class_entry *ce ;
  zend_class_entry **pce ;
  HashPosition pos ;
  zend_function *mptr ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  char *key ;
  uint key_len ;
  ulong num_index ;
  uint len ;
  size_t tmp___2 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  char const   *__s ;
  int __l ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;
  int __attribute__((__visibility__("default")))  tmp___8 ;

  {
  ce = (zend_class_entry *)((void *)0);
  tmp = zend_parse_parameters(ht, "z", & klass);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if ((int )klass->type == 5) {
    if (! ((unsigned int )(klass->value.obj.handlers)->get_class_entry != (unsigned int )((void *)0))) {
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (unsigned char)3;
        break;
      }
      return;
    } else {

    }
    tmp___0 = zend_get_class_entry((zval const   *)klass);
    ce = (zend_class_entry *)tmp___0;
  } else {
    if ((int )klass->type == 6) {
      tmp___1 = zend_lookup_class((char const   *)klass->value.str.val, klass->value.str.len, & pce);
      if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {
        ce = *pce;
      } else {

      }
    } else {

    }
  }
  if (! ce) {
    return_value->type = (unsigned char)0;
    return;
  } else {

  }
  _array_init(return_value, 0U);
  zend_hash_internal_pointer_reset_ex(& ce->function_table, & pos);
  while (1) {
    tmp___8 = zend_hash_get_current_data_ex(& ce->function_table, (void **)(& mptr), & pos);
    if (tmp___8 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    if (mptr->common.fn_flags & 256U) {
      goto _L___1;
    } else {
      if (executor_globals.scope) {
        if (mptr->common.fn_flags & 512U) {
          tmp___7 = zend_check_protected(mptr->common.scope, executor_globals.scope);
          if (tmp___7) {
            goto _L___1;
          } else {
            goto _L___2;
          }
        } else {
          _L___2: /* CIL Label */ 
          if (mptr->common.fn_flags & 1024U) {
            if ((unsigned int )executor_globals.scope == (unsigned int )mptr->common.scope) {
              _L___1: /* CIL Label */ 
              _L___0: /* CIL Label */ 
              tmp___2 = strlen(mptr->common.function_name);
              len = tmp___2;
              if ((mptr->common.fn_flags & 8192U) == 0U) {
                goto _L;
              } else {
                if ((unsigned int )mptr->common.scope == (unsigned int )ce) {
                  goto _L;
                } else {
                  tmp___5 = zend_hash_get_current_key_ex((HashTable const   *)(& ce->function_table), & key, & key_len, & num_index, (unsigned char)0, & pos);
                  if (tmp___5 != (int __attribute__((__visibility__("default")))  )1) {
                    goto _L;
                  } else {
                    tmp___6 = zend_binary_strcasecmp((char const   *)key, key_len - 1U, mptr->common.function_name, len);
                    if (tmp___6 == (int __attribute__((__visibility__("default")))  )0) {
                      _L: /* CIL Label */ 
                      while (1) {
                        tmp___3 = _emalloc(sizeof(zval_gc_info ));
                        method_name = (zval *)tmp___3;
                        ((zval_gc_info *)method_name)->u.buffered = (gc_root_buffer *)((void *)0);
                        break;
                      }
                      method_name->refcount__gc = 1U;
                      method_name->is_ref__gc = (unsigned char)0;
                      while (1) {
                        __s = mptr->common.function_name;
                        __l = (int )len;
                        __z___0 = method_name;
                        __z___0->value.str.len = __l;
                        tmp___4 = _estrndup(__s, (unsigned int )__l);
                        __z___0->value.str.val = (char *)tmp___4;
                        __z___0->type = (unsigned char)6;
                        break;
                      }
                      _zend_hash_index_update_or_next_insert(return_value->value.ht, 0UL, (void *)(& method_name), sizeof(zval *), (void **)((void *)0), 1 << 2);
                    } else {

                    }
                  }
                }
              }
            } else {

            }
          } else {

          }
        }
      } else {

      }
    }
    zend_hash_move_forward_ex(& ce->function_table, & pos);
  }
  return;
}
}
static void zif_method_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *klass ;
  char *method_name ;
  int method_len ;
  char *lcname ;
  zend_class_entry *ce ;
  zend_class_entry **pce ;
  int __attribute__((__visibility__("default")))  tmp ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___0 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  zval *__z___1 ;
  union _zend_function *func ;
  zval *__z___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  zval *__z___3 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  zval *__z___4 ;

  {
  tmp = zend_parse_parameters(ht, "zs", & klass, & method_name, & method_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if ((int )klass->type == 5) {
    tmp___0 = zend_get_class_entry((zval const   *)klass);
    ce = (zend_class_entry *)tmp___0;
  } else {
    if ((int )klass->type == 6) {
      tmp___1 = zend_lookup_class((char const   *)klass->value.str.val, klass->value.str.len, & pce);
      if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
        while (1) {
          __z = return_value;
          __z->value.lval = 0L;
          __z->type = (unsigned char)3;
          break;
        }
        return;
      } else {

      }
      ce = *pce;
    } else {
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (unsigned char)3;
        break;
      }
      return;
    }
  }
  tmp___2 = zend_str_tolower_dup((char const   *)method_name, (unsigned int )method_len);
  lcname = (char *)tmp___2;
  tmp___6 = zend_hash_exists((HashTable const   *)(& ce->function_table), (char const   *)lcname, (unsigned int )(method_len + 1));
  if (tmp___6) {
    _efree((void *)lcname);
    while (1) {
      __z___1 = return_value;
      __z___1->value.lval = 1L;
      __z___1->type = (unsigned char)3;
      break;
    }
    return;
  } else {
    func = (union _zend_function *)((void *)0);
    if ((int )klass->type == 5) {
      if ((unsigned int )(klass->value.obj.handlers)->get_method != (unsigned int )((void *)0)) {
        func = (*((klass->value.obj.handlers)->get_method))(& klass, method_name, method_len, (struct _zend_literal  const  *)((void *)0));
        if ((unsigned int )func != (unsigned int )((void *)0)) {
          if ((int )func->type == 1) {
            if ((func->common.fn_flags & 2097152U) != 0U) {
              while (1) {
                __z___2 = return_value;
                if ((unsigned int )func->common.scope == (unsigned int )zend_ce_closure) {
                  if ((unsigned int )method_len == sizeof("__invoke") - 1U) {
                    tmp___5 = memcmp((void const   *)lcname, (void const   *)"__invoke", sizeof("__invoke") - 1U);
                    if (tmp___5 == 0) {
                      tmp___4 = 1;
                    } else {
                      tmp___4 = 0;
                    }
                  } else {
                    tmp___4 = 0;
                  }
                } else {
                  tmp___4 = 0;
                }
                __z___2->value.lval = (long )(tmp___4 != 0);
                __z___2->type = (unsigned char)3;
                break;
              }
              _efree((void *)lcname);
              _efree((void *)((char *)((zend_internal_function *)func)->function_name));
              _efree((void *)func);
              return;
            } else {

            }
          } else {

          }
          _efree((void *)lcname);
          while (1) {
            __z___3 = return_value;
            __z___3->value.lval = 1L;
            __z___3->type = (unsigned char)3;
            break;
          }
          return;
        } else {

        }
      } else {

      }
    } else {

    }
  }
  _efree((void *)lcname);
  while (1) {
    __z___4 = return_value;
    __z___4->value.lval = 0L;
    __z___4->type = (unsigned char)3;
    break;
  }
  return;
}
}
static void zif_property_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *object ;
  char *property ;
  int property_len ;
  zend_class_entry *ce ;
  zend_class_entry **pce ;
  zend_property_info *property_info ;
  zval property_z ;
  ulong h ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_class_entry __attribute__((__visibility__("default")))  *tmp___1 ;
  ulong __attribute__((__visibility__("default")))  tmp___2 ;
  zval *__z___1 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  char const   *__s ;
  int __l ;
  zval *__z___2 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  zval *__z___3 ;
  int tmp___5 ;
  zval *__z___4 ;

  {
  tmp = zend_parse_parameters(ht, "zs", & object, & property, & property_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (property_len == 0) {
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  if ((int )object->type == 6) {
    tmp___0 = zend_lookup_class((char const   *)object->value.str.val, object->value.str.len, & pce);
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (unsigned char)3;
        break;
      }
      return;
    } else {

    }
    ce = *pce;
  } else {
    if ((int )object->type == 5) {
      tmp___1 = zend_get_class_entry((zval const   *)object);
      ce = (zend_class_entry *)tmp___1;
    } else {
      zend_error(1 << 1L, "First parameter must either be an object or the name of an existing class");
      return_value->type = (unsigned char)0;
      return;
    }
  }
  tmp___2 = zend_get_hash_value((char const   *)property, (unsigned int )(property_len + 1));
  h = (unsigned long )tmp___2;
  tmp___3 = zend_hash_quick_find((HashTable const   *)(& ce->properties_info), (char const   *)property, (unsigned int )(property_len + 1), h, (void **)(& property_info));
  if (tmp___3 == (int __attribute__((__visibility__("default")))  )0) {
    if ((property_info->flags & 131072U) == 0U) {
      while (1) {
        __z___1 = return_value;
        __z___1->value.lval = 1L;
        __z___1->type = (unsigned char)3;
        break;
      }
      return;
    } else {

    }
  } else {

  }
  while (1) {
    __s = (char const   *)property;
    __l = property_len;
    __z___2 = & property_z;
    __z___2->value.str.len = __l;
    __z___2->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
    __z___2->type = (unsigned char)6;
    break;
  }
  if ((int )object->type == 5) {
    if ((object->value.obj.handlers)->has_property) {
      tmp___5 = (*((object->value.obj.handlers)->has_property))(object, & property_z, 2, (struct _zend_literal  const  *)0);
      if (tmp___5) {
        while (1) {
          __z___3 = return_value;
          __z___3->value.lval = 1L;
          __z___3->type = (unsigned char)3;
          break;
        }
        return;
      } else {

      }
    } else {

    }
  } else {

  }
  while (1) {
    __z___4 = return_value;
    __z___4->value.lval = 0L;
    __z___4->type = (unsigned char)3;
    break;
  }
  return;
}
}
static void zif_class_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *class_name ;
  char *lc_name ;
  zend_class_entry **ce ;
  int class_name_len ;
  int found ;
  zend_bool autoload ;
  zend_bool use_heap ;
  int __attribute__((__visibility__("default")))  tmp ;
  char *name ;
  int len ;
  long tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  long tmp___5 ;
  zval *__z ;
  int tmp___6 ;
  zval *__z___0 ;
  zval *__z___1 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;

  {
  autoload = (zend_bool )1;
  tmp = zend_parse_parameters(ht, "s|b", & class_name, & class_name_len, & autoload);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (! autoload) {
    tmp___3 = __builtin_expect((long )(class_name_len + 1 > 32768), 0L);
    use_heap = (unsigned char )tmp___3;
    if (use_heap) {
      tmp___1 = _emalloc((unsigned int )(class_name_len + 1));
      lc_name = (char *)tmp___1;
    } else {
      tmp___2 = __builtin_alloca((unsigned int )(class_name_len + 1));
      lc_name = (char *)tmp___2;
    }
    zend_str_tolower_copy(lc_name, (char const   *)class_name, (unsigned int )class_name_len);
    name = lc_name;
    len = class_name_len;
    if ((int )*(lc_name + 0) == 92) {
      name = lc_name + 1;
      len --;
    } else {

    }
    tmp___4 = zend_hash_find((HashTable const   *)executor_globals.class_table, (char const   *)name, (unsigned int )(len + 1), (void **)(& ce));
    found = (int )tmp___4;
    while (1) {
      tmp___5 = __builtin_expect((long )use_heap, 0L);
      if (tmp___5) {
        _efree((void *)lc_name);
      } else {

      }
      break;
    }
    while (1) {
      __z = return_value;
      if (found == 0) {
        if (! (((*ce)->ce_flags & 416U) > 32U)) {
          tmp___6 = 1;
        } else {
          tmp___6 = 0;
        }
      } else {
        tmp___6 = 0;
      }
      __z->value.lval = (long )(tmp___6 != 0);
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  tmp___7 = zend_lookup_class((char const   *)class_name, class_name_len, & ce);
  if (tmp___7 == (int __attribute__((__visibility__("default")))  )0) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = (long )((((*ce)->ce_flags & 384U) == 0U) != 0);
      __z___0->type = (unsigned char)3;
      break;
    }
    return;
  } else {
    while (1) {
      __z___1 = return_value;
      __z___1->value.lval = 0L;
      __z___1->type = (unsigned char)3;
      break;
    }
    return;
  }
}
}
static void zif_interface_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *iface_name ;
  char *lc_name ;
  zend_class_entry **ce ;
  int iface_name_len ;
  int found ;
  zend_bool autoload ;
  zend_bool use_heap ;
  int __attribute__((__visibility__("default")))  tmp ;
  char *name ;
  int len ;
  long tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  long tmp___5 ;
  zval *__z ;
  int tmp___6 ;
  zval *__z___0 ;
  zval *__z___1 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;

  {
  autoload = (zend_bool )1;
  tmp = zend_parse_parameters(ht, "s|b", & iface_name, & iface_name_len, & autoload);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (! autoload) {
    tmp___3 = __builtin_expect((long )(iface_name_len + 1 > 32768), 0L);
    use_heap = (unsigned char )tmp___3;
    if (use_heap) {
      tmp___1 = _emalloc((unsigned int )(iface_name_len + 1));
      lc_name = (char *)tmp___1;
    } else {
      tmp___2 = __builtin_alloca((unsigned int )(iface_name_len + 1));
      lc_name = (char *)tmp___2;
    }
    zend_str_tolower_copy(lc_name, (char const   *)iface_name, (unsigned int )iface_name_len);
    name = lc_name;
    len = iface_name_len;
    if ((int )*(lc_name + 0) == 92) {
      name = lc_name + 1;
      len --;
    } else {

    }
    tmp___4 = zend_hash_find((HashTable const   *)executor_globals.class_table, (char const   *)name, (unsigned int )(len + 1), (void **)(& ce));
    found = (int )tmp___4;
    while (1) {
      tmp___5 = __builtin_expect((long )use_heap, 0L);
      if (tmp___5) {
        _efree((void *)lc_name);
      } else {

      }
      break;
    }
    while (1) {
      __z = return_value;
      if (found == 0) {
        if ((*ce)->ce_flags & 128U) {
          tmp___6 = 1;
        } else {
          tmp___6 = 0;
        }
      } else {
        tmp___6 = 0;
      }
      __z->value.lval = (long )(tmp___6 != 0);
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  tmp___7 = zend_lookup_class((char const   *)iface_name, iface_name_len, & ce);
  if (tmp___7 == (int __attribute__((__visibility__("default")))  )0) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = (long )((((*ce)->ce_flags & 128U) > 0U) != 0);
      __z___0->type = (unsigned char)3;
      break;
    }
    return;
  } else {
    while (1) {
      __z___1 = return_value;
      __z___1->value.lval = 0L;
      __z___1->type = (unsigned char)3;
      break;
    }
    return;
  }
}
}
static void zif_trait_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *trait_name ;
  char *lc_name ;
  zend_class_entry **ce ;
  int trait_name_len ;
  int found ;
  zend_bool autoload ;
  zend_bool use_heap ;
  int __attribute__((__visibility__("default")))  tmp ;
  char *name ;
  int len ;
  long tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  long tmp___5 ;
  zval *__z ;
  int tmp___6 ;
  zval *__z___0 ;
  zval *__z___1 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;

  {
  autoload = (zend_bool )1;
  tmp = zend_parse_parameters(ht, "s|b", & trait_name, & trait_name_len, & autoload);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (! autoload) {
    tmp___3 = __builtin_expect((long )(trait_name_len + 1 > 32768), 0L);
    use_heap = (unsigned char )tmp___3;
    if (use_heap) {
      tmp___1 = _emalloc((unsigned int )(trait_name_len + 1));
      lc_name = (char *)tmp___1;
    } else {
      tmp___2 = __builtin_alloca((unsigned int )(trait_name_len + 1));
      lc_name = (char *)tmp___2;
    }
    zend_str_tolower_copy(lc_name, (char const   *)trait_name, (unsigned int )trait_name_len);
    name = lc_name;
    len = trait_name_len;
    if ((int )*(lc_name + 0) == 92) {
      name = lc_name + 1;
      len --;
    } else {

    }
    tmp___4 = zend_hash_find((HashTable const   *)executor_globals.class_table, (char const   *)name, (unsigned int )(len + 1), (void **)(& ce));
    found = (int )tmp___4;
    while (1) {
      tmp___5 = __builtin_expect((long )use_heap, 0L);
      if (tmp___5) {
        _efree((void *)lc_name);
      } else {

      }
      break;
    }
    while (1) {
      __z = return_value;
      if (found == 0) {
        if (((*ce)->ce_flags & 288U) > 32U) {
          tmp___6 = 1;
        } else {
          tmp___6 = 0;
        }
      } else {
        tmp___6 = 0;
      }
      __z->value.lval = (long )(tmp___6 != 0);
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  tmp___7 = zend_lookup_class((char const   *)trait_name, trait_name_len, & ce);
  if (tmp___7 == (int __attribute__((__visibility__("default")))  )0) {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = (long )((((*ce)->ce_flags & 288U) > 32U) != 0);
      __z___0->type = (unsigned char)3;
      break;
    }
    return;
  } else {
    while (1) {
      __z___1 = return_value;
      __z___1->value.lval = 0L;
      __z___1->type = (unsigned char)3;
      break;
    }
    return;
  }
}
}
static void zif_function_exists(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *name ;
  int name_len ;
  zend_function *func ;
  char *lcname ;
  zend_bool retval ;
  int __attribute__((__visibility__("default")))  tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zval *__z ;

  {
  {
  tmp = zend_parse_parameters(ht, "s", & name, & name_len);
  return;
  }
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_str_tolower_dup((char const   *)name, (unsigned int )name_len);
  lcname = (char *)tmp___0;
  name = lcname;
  if ((int )*(lcname + 0) == 92) {
    name = lcname + 1;
    name_len --;
  } else {

  }
  tmp___1 = zend_hash_find((HashTable const   *)executor_globals.function_table, (char const   *)name, (unsigned int )(name_len + 1), (void **)(& func));
  retval = (unsigned char )(tmp___1 == (int __attribute__((__visibility__("default")))  )0);
  _efree((void *)lcname);
  if (retval) {
    if ((int )func->type == 1) {
      if ((unsigned int )func->internal_function.handler == (unsigned int )(& zif_display_disabled_function)) {
        retval = (unsigned char)0;
      } else {

      }
    } else {

    }
  } else {

  }
  while (1) {
    __z = return_value;
    __z->value.lval = (long )((int )retval != 0);
    __z->type = (unsigned char)3;
    break;
  }
  return;
}
}
static void zif_class_alias(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *class_name ;
  char *lc_name ;
  char *alias_name ;
  zend_class_entry **ce ;
  int class_name_len ;
  int alias_name_len ;
  int found ;
  zend_bool autoload ;
  zend_bool use_heap ;
  int __attribute__((__visibility__("default")))  tmp ;
  long tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  long tmp___5 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  zval *__z ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;
  zval *__z___1 ;
  zval *__z___2 ;

  {
  autoload = (zend_bool )1;
  tmp = zend_parse_parameters(ht, "ss|b", & class_name, & class_name_len, & alias_name, & alias_name_len, & autoload);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if (! autoload) {
    tmp___3 = __builtin_expect((long )(class_name_len + 1 > 32768), 0L);
    use_heap = (unsigned char )tmp___3;
    if (use_heap) {
      tmp___1 = _emalloc((unsigned int )(class_name_len + 1));
      lc_name = (char *)tmp___1;
    } else {
      tmp___2 = __builtin_alloca((unsigned int )(class_name_len + 1));
      lc_name = (char *)tmp___2;
    }
    zend_str_tolower_copy(lc_name, (char const   *)class_name, (unsigned int )class_name_len);
    tmp___4 = zend_hash_find((HashTable const   *)executor_globals.class_table, (char const   *)lc_name, (unsigned int )(class_name_len + 1), (void **)(& ce));
    found = (int )tmp___4;
    while (1) {
      tmp___5 = __builtin_expect((long )use_heap, 0L);
      if (tmp___5) {
        _efree((void *)lc_name);
      } else {

      }
      break;
    }
  } else {
    tmp___6 = zend_lookup_class((char const   *)class_name, class_name_len, & ce);
    found = (int )tmp___6;
  }
  if (found == 0) {
    if ((int )(*ce)->type == 2) {
      tmp___7 = zend_register_class_alias_ex((char const   *)alias_name, alias_name_len, *ce);
      if (tmp___7 == (int __attribute__((__visibility__("default")))  )0) {
        while (1) {
          __z = return_value;
          __z->value.lval = 1L;
          __z->type = (unsigned char)3;
          break;
        }
        return;
      } else {
        zend_error(1 << 1L, "Cannot redeclare class %s", alias_name);
        while (1) {
          __z___0 = return_value;
          __z___0->value.lval = 0L;
          __z___0->type = (unsigned char)3;
          break;
        }
        return;
      }
    } else {
      zend_error(1 << 1L, "First argument of class_alias() must be a name of user defined class");
      while (1) {
        __z___1 = return_value;
        __z___1->value.lval = 0L;
        __z___1->type = (unsigned char)3;
        break;
      }
      return;
    }
  } else {
    zend_error(1 << 1L, "Class \'%s\' not found", class_name);
    while (1) {
      __z___2 = return_value;
      __z___2->value.lval = 0L;
      __z___2->type = (unsigned char)3;
      break;
    }
    return;
  }
}
}
static void zif_get_included_files(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *entry ;
  int __attribute__((__visibility__("default")))  tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, "");
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  _array_init(return_value, 0U);
  zend_hash_internal_pointer_reset_ex(& executor_globals.included_files, (HashPosition *)((void *)0));
  while (1) {
    tmp___0 = zend_hash_get_current_key_ex((HashTable const   *)(& executor_globals.included_files), & entry, (uint *)((void *)0), (ulong *)((void *)0), (unsigned char)1, (HashPosition *)((void *)0));
    if (tmp___0 == (int __attribute__((__visibility__("default")))  )1) {

    } else {
      break;
    }
    add_next_index_string(return_value, (char const   *)entry, 0);
    zend_hash_move_forward_ex(& executor_globals.included_files, (HashPosition *)((void *)0));
  }
  return;
}
}
static void zif_trigger_error(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ long error_type ;
  char *message ;
  int message_len ;
  int __attribute__((__visibility__("default")))  tmp ;
  zval *__z ;
  zval *__z___0 ;

  {
  error_type = (long )(1 << 10L);
  tmp = zend_parse_parameters(ht, "s|l", & message, & message_len, & error_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  switch ((int )error_type) {
  case 1 << 8L: 
  case 1 << 9L: 
  case 1 << 10L: 
  case 1 << 14L: 
  break;
  default: 
  zend_error(1 << 1L, "Invalid error type specified");
  while (1) {
    __z = return_value;
    __z->value.lval = 0L;
    __z->type = (unsigned char)3;
    break;
  }
  return;
  break;
  }
  zend_error((int )error_type, "%s", message);
  while (1) {
    __z___0 = return_value;
    __z___0->value.lval = 1L;
    __z___0->type = (unsigned char)3;
    break;
  }
  return;
}
}
static void zif_set_error_handler(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *error_handler ;
  zend_bool had_orig_error_handler ;
  char *error_handler_name ;
  long error_type ;
  int __attribute__((__visibility__("default")))  tmp ;
  char const   *tmp___0 ;
  char const __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_bool __attribute__((__visibility__("default")))  tmp___2 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  had_orig_error_handler = (zend_bool )0;
  error_handler_name = (char *)((void *)0);
  error_type = (long )((((((((((((((1 | (1 << 1L)) | (1 << 2L)) | (1 << 3L)) | (1 << 4L)) | (1 << 5L)) | (1 << 6L)) | (1 << 7L)) | (1 << 8L)) | (1 << 9L)) | (1 << 10L)) | (1 << 12L)) | (1 << 13L)) | (1 << 14L)) | (1 << 11L));
  tmp = zend_parse_parameters(ht, "z|l", & error_handler, & error_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___2 = zend_is_callable(error_handler, 0U, & error_handler_name);
  if (tmp___2) {

  } else {
    if (error_handler_name) {
      tmp___0 = (char const   *)error_handler_name;
    } else {
      tmp___0 = "unknown";
    }
    tmp___1 = get_active_function_name();
    zend_error(1 << 1L, "%s() expects the argument (%s) to be a valid callback", tmp___1, tmp___0);
    _efree((void *)error_handler_name);
    return;
  }
  _efree((void *)error_handler_name);
  if (executor_globals.user_error_handler) {
    had_orig_error_handler = (unsigned char)1;
    *return_value = *(executor_globals.user_error_handler);
    _zval_copy_ctor(return_value);
    return_value->refcount__gc = 1U;
    return_value->is_ref__gc = (unsigned char)0;
    zend_stack_push(& executor_globals.user_error_handlers_error_reporting, (void const   *)(& executor_globals.user_error_handler_error_reporting), (int )sizeof(executor_globals.user_error_handler_error_reporting));
    zend_ptr_stack_push(& executor_globals.user_error_handlers, (void *)executor_globals.user_error_handler);
  } else {

  }
  while (1) {
    tmp___3 = _emalloc(sizeof(zval_gc_info ));
    executor_globals.user_error_handler = (zval *)tmp___3;
    ((zval_gc_info *)executor_globals.user_error_handler)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  tmp___4 = zend_is_true(error_handler);
  if (tmp___4) {

  } else {
    while (1) {
      if ((gc_root_buffer *)((unsigned long )((zval_gc_info *)executor_globals.user_error_handler)->u.buffered & 4294967292UL)) {
        gc_remove_zval_from_buffer(executor_globals.user_error_handler);
      } else {

      }
      _efree((void *)executor_globals.user_error_handler);
      break;
    }
    executor_globals.user_error_handler = (zval *)((void *)0);
    while (1) {
      __z = return_value;
      __z->value.lval = 1L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  }
  executor_globals.user_error_handler_error_reporting = (int )error_type;
  *(executor_globals.user_error_handler) = *error_handler;
  _zval_copy_ctor(executor_globals.user_error_handler);
  (executor_globals.user_error_handler)->refcount__gc = 1U;
  (executor_globals.user_error_handler)->is_ref__gc = (unsigned char)0;
  if (! had_orig_error_handler) {
    return_value->type = (unsigned char)0;
    return;
  } else {

  }
  return;
}
}
static void zif_restore_error_handler(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *zeh ;
  int __attribute__((__visibility__("default")))  tmp ;
  void *tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zval *__z ;

  {
  if (executor_globals.user_error_handler) {
    zeh = executor_globals.user_error_handler;
    executor_globals.user_error_handler = (zval *)((void *)0);
    _zval_ptr_dtor(& zeh);
  } else {

  }
  tmp___1 = zend_ptr_stack_num_elements(& executor_globals.user_error_handlers);
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )0) {
    executor_globals.user_error_handler = (zval *)((void *)0);
  } else {
    tmp = zend_stack_int_top((zend_stack const   *)(& executor_globals.user_error_handlers_error_reporting));
    executor_globals.user_error_handler_error_reporting = (int )tmp;
    zend_stack_del_top(& executor_globals.user_error_handlers_error_reporting);
    tmp___0 = zend_ptr_stack_pop(& executor_globals.user_error_handlers);
    executor_globals.user_error_handler = (zval *)tmp___0;
  }
  while (1) {
    __z = return_value;
    __z->value.lval = 1L;
    __z->type = (unsigned char)3;
    break;
  }
  return;
}
}
static void zif_set_exception_handler(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *exception_handler ;
  char *exception_handler_name ;
  zend_bool had_orig_exception_handler ;
  int __attribute__((__visibility__("default")))  tmp ;
  char const   *tmp___0 ;
  char const __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_bool __attribute__((__visibility__("default")))  tmp___2 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  zval *__z ;

  {
  exception_handler_name = (char *)((void *)0);
  had_orig_exception_handler = (zend_bool )0;
  tmp = zend_parse_parameters(ht, "z", & exception_handler);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  if ((int )exception_handler->type != 0) {
    tmp___2 = zend_is_callable(exception_handler, 0U, & exception_handler_name);
    if (tmp___2) {

    } else {
      if (exception_handler_name) {
        tmp___0 = (char const   *)exception_handler_name;
      } else {
        tmp___0 = "unknown";
      }
      tmp___1 = get_active_function_name();
      zend_error(1 << 1L, "%s() expects the argument (%s) to be a valid callback", tmp___1, tmp___0);
      _efree((void *)exception_handler_name);
      return;
    }
    _efree((void *)exception_handler_name);
  } else {

  }
  if (executor_globals.user_exception_handler) {
    had_orig_exception_handler = (unsigned char)1;
    *return_value = *(executor_globals.user_exception_handler);
    _zval_copy_ctor(return_value);
    zend_ptr_stack_push(& executor_globals.user_exception_handlers, (void *)executor_globals.user_exception_handler);
  } else {

  }
  while (1) {
    tmp___3 = _emalloc(sizeof(zval_gc_info ));
    executor_globals.user_exception_handler = (zval *)tmp___3;
    ((zval_gc_info *)executor_globals.user_exception_handler)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  if ((int )exception_handler->type == 0) {
    while (1) {
      if ((gc_root_buffer *)((unsigned long )((zval_gc_info *)executor_globals.user_exception_handler)->u.buffered & 4294967292UL)) {
        gc_remove_zval_from_buffer(executor_globals.user_exception_handler);
      } else {

      }
      _efree((void *)executor_globals.user_exception_handler);
      break;
    }
    executor_globals.user_exception_handler = (zval *)((void *)0);
    while (1) {
      __z = return_value;
      __z->value.lval = 1L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  *(executor_globals.user_exception_handler) = *exception_handler;
  _zval_copy_ctor(executor_globals.user_exception_handler);
  if (! had_orig_exception_handler) {
    return_value->type = (unsigned char)0;
    return;
  } else {

  }
  return;
}
}
static void zif_restore_exception_handler(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ void *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zval *__z ;

  {
  if (executor_globals.user_exception_handler) {
    _zval_ptr_dtor(& executor_globals.user_exception_handler);
  } else {

  }
  tmp___0 = zend_ptr_stack_num_elements(& executor_globals.user_exception_handlers);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )0) {
    executor_globals.user_exception_handler = (zval *)((void *)0);
  } else {
    tmp = zend_ptr_stack_pop(& executor_globals.user_exception_handlers);
    executor_globals.user_exception_handler = (zval *)tmp;
  }
  while (1) {
    __z = return_value;
    __z->value.lval = 1L;
    __z->type = (unsigned char)3;
    break;
  }
  return;
}
}
static int copy_class_or_interface_name(zend_class_entry **pce , int num_args , va_list args , zend_hash_key *hash_key ) 
{ zval *array ;
  zval *tmp ;
  zend_uint mask ;
  zend_uint tmp___0 ;
  zend_uint comply ;
  zend_uint tmp___1 ;
  zend_uint comply_mask ;
  zend_uint tmp___2 ;
  zend_class_entry *ce ;

  {
  tmp = __builtin_va_arg(args, zval *);
  array = tmp;
  tmp___0 = __builtin_va_arg(args, zend_uint );
  mask = tmp___0;
  tmp___1 = __builtin_va_arg(args, zend_uint );
  comply = tmp___1;
  if (comply) {
    tmp___2 = mask;
  } else {
    tmp___2 = 0U;
  }
  comply_mask = tmp___2;
  ce = *pce;
  if (hash_key->nKeyLength == 0U) {
    goto _L;
  } else {
    if ((int const   )*(hash_key->arKey + 0) != 0) {
      _L: /* CIL Label */ 
      if (comply_mask == (ce->ce_flags & mask)) {
        add_next_index_stringl(array, ce->name, ce->name_length, 1);
      } else {

      }
    } else {

    }
  }
  return (0);
}
}
static void zif_get_declared_traits(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zend_uint mask ;
  zend_uint comply ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  mask = (zend_uint )0x120;
  comply = (zend_uint )1;
  tmp = zend_parse_parameters(ht, "");
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  _array_init(return_value, 0U);
  zend_hash_apply_with_arguments(executor_globals.class_table, (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& copy_class_or_interface_name), 3, return_value, mask, comply);
  return;
}
}
static void zif_get_declared_classes(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zend_uint mask ;
  zend_uint comply ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  mask = (zend_uint )384;
  comply = (zend_uint )0;
  tmp = zend_parse_parameters(ht, "");
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  _array_init(return_value, 0U);
  zend_hash_apply_with_arguments(executor_globals.class_table, (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& copy_class_or_interface_name), 3, return_value, mask, comply);
  return;
}
}
static void zif_get_declared_interfaces(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zend_uint mask ;
  zend_uint comply ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  mask = (zend_uint )0x80;
  comply = (zend_uint )1;
  tmp = zend_parse_parameters(ht, "");
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  _array_init(return_value, 0U);
  zend_hash_apply_with_arguments(executor_globals.class_table, (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& copy_class_or_interface_name), 3, return_value, mask, comply);
  return;
}
}
static int copy_function_name(zend_function *func , int num_args , va_list args , zend_hash_key *hash_key ) 
{ zval *internal_ar ;
  zval *tmp ;
  zval *user_ar ;
  zval *tmp___0 ;

  {
  tmp = __builtin_va_arg(args, zval *);
  internal_ar = tmp;
  tmp___0 = __builtin_va_arg(args, zval *);
  user_ar = tmp___0;
  if (hash_key->nKeyLength == 0U) {
    return (0);
  } else {
    if ((int const   )*(hash_key->arKey + 0) == 0) {
      return (0);
    } else {

    }
  }
  if ((int )func->type == 1) {
    add_next_index_stringl(internal_ar, hash_key->arKey, hash_key->nKeyLength - 1U, 1);
  } else {
    if ((int )func->type == 2) {
      add_next_index_stringl(user_ar, hash_key->arKey, hash_key->nKeyLength - 1U, 1);
    } else {

    }
  }
  return (0);
}
}
static void zif_get_defined_functions(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zval *internal ;
  zval *user ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  tmp = zend_parse_parameters(ht, "");
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  while (1) {
    tmp___0 = _emalloc(sizeof(zval_gc_info ));
    internal = (zval *)tmp___0;
    ((zval_gc_info *)internal)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  internal->refcount__gc = 1U;
  internal->is_ref__gc = (unsigned char)0;
  while (1) {
    tmp___1 = _emalloc(sizeof(zval_gc_info ));
    user = (zval *)tmp___1;
    ((zval_gc_info *)user)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  user->refcount__gc = 1U;
  user->is_ref__gc = (unsigned char)0;
  _array_init(internal, 0U);
  _array_init(user, 0U);
  _array_init(return_value, 0U);
  zend_hash_apply_with_arguments(executor_globals.function_table, (int (*)(void *pDest , int num_args , va_list args , zend_hash_key *hash_key ))(& copy_function_name), 2, internal, user);
  tmp___2 = _zend_hash_add_or_update(return_value->value.ht, "internal", sizeof("internal"), (void *)((void **)(& internal)), sizeof(zval *), (void **)((void *)0), 1 << 1);
  if (tmp___2 == (int __attribute__((__visibility__("default")))  )-1) {
    _zval_ptr_dtor(& internal);
    _zval_ptr_dtor(& user);
    _zval_dtor(return_value);
    zend_error(1 << 1L, "Cannot add internal functions to return value from get_defined_functions()");
    while (1) {
      __z = return_value;
      __z->value.lval = 0L;
      __z->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  tmp___3 = _zend_hash_add_or_update(return_value->value.ht, "user", sizeof("user"), (void *)((void **)(& user)), sizeof(zval *), (void **)((void *)0), 1 << 1);
  if (tmp___3 == (int __attribute__((__visibility__("default")))  )-1) {
    _zval_ptr_dtor(& user);
    _zval_dtor(return_value);
    zend_error(1 << 1L, "Cannot add user functions to return value from get_defined_functions()");
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (unsigned char)3;
      break;
    }
    return;
  } else {

  }
  return;
}
}
static void zif_get_defined_vars(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ int __attribute__((__visibility__("default")))  tmp ;

  {
  if (! executor_globals.active_symbol_table) {
    zend_rebuild_symbol_table();
  } else {

  }
  tmp = zend_hash_num_elements((HashTable const   *)executor_globals.active_symbol_table);
  _array_init(return_value, (unsigned int )tmp);
  zend_hash_copy(return_value->value.ht, executor_globals.active_symbol_table, (void (*)(void *pElement ))(& zval_add_ref), (void *)0, sizeof(zval *));
  return;
}
}
static void zif_create_function(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *eval_code ;
  char *function_name ;
  char *function_args ;
  char *function_code ;
  int eval_code_length ;
  int function_name_length ;
  int function_args_len ;
  int function_code_len ;
  int retval ;
  char *eval_name ;
  int __attribute__((__visibility__("default")))  tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  zend_function new_function ;
  zend_function *func ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  void __attribute__((__visibility__("default")))  *tmp___7 ;
  int tmp___8 ;
  int __attribute__((__visibility__("default")))  tmp___9 ;
  char const   *__s ;
  int __l ;
  zval *__z___0 ;
  char __attribute__((__visibility__("default")))  *tmp___10 ;
  zval *__z___1 ;

  {
  tmp = zend_parse_parameters(ht, "ss", & function_args, & function_args_len, & function_code, & function_code_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = _emalloc((((sizeof("function __lambda_func") + (unsigned int )function_args_len) + 2U) + 2U) + (unsigned int )function_code_len);
  eval_code = (char *)tmp___0;
  eval_code_length = (int )(sizeof("function __lambda_func(") - 1U);
  memcpy((void */* __restrict  */)eval_code, (void const   */* __restrict  */)"function __lambda_func(", (unsigned int )eval_code_length);
  memcpy((void */* __restrict  */)(eval_code + eval_code_length), (void const   */* __restrict  */)function_args, (unsigned int )function_args_len);
  eval_code_length += function_args_len;
  tmp___1 = eval_code_length;
  eval_code_length ++;
  *(eval_code + tmp___1) = (char )')';
  tmp___2 = eval_code_length;
  eval_code_length ++;
  *(eval_code + tmp___2) = (char )'{';
  memcpy((void */* __restrict  */)(eval_code + eval_code_length), (void const   */* __restrict  */)function_code, (unsigned int )function_code_len);
  eval_code_length += function_code_len;
  tmp___3 = eval_code_length;
  eval_code_length ++;
  *(eval_code + tmp___3) = (char )'}';
  *(eval_code + eval_code_length) = (char )'\000';
  tmp___4 = zend_make_compiled_string_description("runtime-created function");
  eval_name = (char *)tmp___4;
  tmp___5 = zend_eval_stringl(eval_code, eval_code_length, (zval *)((void *)0), eval_name);
  retval = (int )tmp___5;
  _efree((void *)eval_code);
  _efree((void *)eval_name);
  if (retval == 0) {
    tmp___6 = zend_hash_find((HashTable const   *)executor_globals.function_table, "__lambda_func", sizeof("__lambda_func"), (void **)(& func));
    if (tmp___6 == (int __attribute__((__visibility__("default")))  )-1) {
      zend_error(1, "Unexpected inconsistency in create_function()");
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (unsigned char)3;
        break;
      }
      return;
    } else {

    }
    new_function = *func;
    function_add_ref(& new_function);
    tmp___7 = _emalloc(sizeof("0lambda_") + 11U);
    function_name = (char *)tmp___7;
    *(function_name + 0) = (char )'\000';
    while (1) {
      (executor_globals.lambda_count) ++;
      tmp___8 = snprintf((char */* __restrict  */)(function_name + 1), sizeof("lambda_") + 11U, (char const   */* __restrict  */)"lambda_%d", executor_globals.lambda_count);
      function_name_length = 1 + tmp___8;
      tmp___9 = _zend_hash_add_or_update(executor_globals.function_table, (char const   *)function_name, (unsigned int )(function_name_length + 1), (void *)(& new_function), sizeof(zend_function ), (void **)((void *)0), 1 << 1);
      if (tmp___9 == (int __attribute__((__visibility__("default")))  )-1) {

      } else {
        break;
      }
    }
    zend_hash_del_key_or_index(executor_globals.function_table, "__lambda_func", sizeof("__lambda_func"), 0UL, 0);
    while (1) {
      __s = (char const   *)function_name;
      __l = function_name_length;
      __z___0 = return_value;
      __z___0->value.str.len = __l;
      __z___0->value.str.val = (char *)((char __attribute__((__visibility__("default")))  *)((char *)__s));
      __z___0->type = (unsigned char)6;
      break;
    }
    return;
  } else {
    zend_hash_del_key_or_index(executor_globals.function_table, "__lambda_func", sizeof("__lambda_func"), 0UL, 0);
    while (1) {
      __z___1 = return_value;
      __z___1->value.lval = 0L;
      __z___1->type = (unsigned char)3;
      break;
    }
    return;
  }
}
}
static void zif_get_resource_type(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char const   *resource_type ;
  zval *z_resource_type ;
  int __attribute__((__visibility__("default")))  tmp ;
  char const __attribute__((__visibility__("default")))  *tmp___0 ;
  char const   *__s ;
  zval *__z ;
  size_t tmp___1 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  char const   *__s___0 ;
  zval *__z___0 ;
  size_t tmp___3 ;
  char __attribute__((__visibility__("default")))  *tmp___4 ;

  {
  tmp = zend_parse_parameters(ht, "r", & z_resource_type);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_rsrc_list_get_rsrc_type((int )z_resource_type->value.lval);
  resource_type = (char const   *)tmp___0;
  if (resource_type) {
    while (1) {
      __s = resource_type;
      __z = return_value;
      tmp___1 = strlen(__s);
      __z->value.str.len = (int )tmp___1;
      tmp___2 = _estrndup(__s, (unsigned int )__z->value.str.len);
      __z->value.str.val = (char *)tmp___2;
      __z->type = (unsigned char)6;
      break;
    }
    return;
  } else {
    while (1) {
      __s___0 = "Unknown";
      __z___0 = return_value;
      tmp___3 = strlen(__s___0);
      __z___0->value.str.len = (int )tmp___3;
      tmp___4 = _estrndup(__s___0, (unsigned int )__z___0->value.str.len);
      __z___0->value.str.val = (char *)tmp___4;
      __z___0->type = (unsigned char)6;
      break;
    }
    return;
  }
}
}
static int add_extension_info(zend_module_entry *module , void *arg ) 
{ zval *name_array ;

  {
  name_array = (zval *)arg;
  add_next_index_string(name_array, module->name, 1);
  return (0);
}
}
static int add_zendext_info(zend_extension *ext , void *arg ) 
{ zval *name_array ;

  {
  name_array = (zval *)arg;
  add_next_index_string(name_array, (char const   *)ext->name, 1);
  return (0);
}
}
static int add_constant_info(zend_constant *constant , void *arg ) 
{ zval *name_array ;
  zval *const_val ;
  void __attribute__((__visibility__("default")))  *tmp ;

  {
  name_array = (zval *)arg;
  while (1) {
    tmp = _emalloc(sizeof(zval_gc_info ));
    const_val = (zval *)tmp;
    ((zval_gc_info *)const_val)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  const_val->refcount__gc = 1U;
  const_val->is_ref__gc = (unsigned char)0;
  *const_val = constant->value;
  _zval_copy_ctor(const_val);
  const_val->refcount__gc = 1U;
  const_val->is_ref__gc = (unsigned char)0;
  add_assoc_zval_ex(name_array, (char const   *)constant->name, constant->name_len, const_val);
  return (0);
}
}
static void zif_get_loaded_extensions(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zend_bool zendext ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  zendext = (zend_bool )0;
  tmp = zend_parse_parameters(ht, "|b", & zendext);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  _array_init(return_value, 0U);
  if (zendext) {
    zend_llist_apply_with_argument((zend_llist *)(& zend_extensions), (void (*)(void *data , void *arg ))(& add_zendext_info), (void *)return_value);
  } else {
    zend_hash_apply_with_argument((HashTable *)(& module_registry), (int (*)(void *pDest , void *argument ))(& add_extension_info), (void *)return_value);
  }
  return;
}
}
static void zif_get_defined_constants(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zend_bool categorize ;
  int __attribute__((__visibility__("default")))  tmp ;
  HashPosition pos ;
  zend_constant *val ;
  int module_number ;
  zval **modules ;
  char **module_names ;
  zend_module_entry *module ;
  int i ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  zval *const_val ;
  void __attribute__((__visibility__("default")))  *tmp___5 ;
  size_t tmp___6 ;
  void __attribute__((__visibility__("default")))  *tmp___7 ;
  int __attribute__((__visibility__("default")))  tmp___8 ;

  {
  categorize = (zend_bool )0;
  tmp = zend_parse_parameters(ht, "|b", & categorize);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  _array_init(return_value, 0U);
  if (categorize) {
    i = 1;
    tmp___0 = zend_hash_num_elements((HashTable const   *)(& module_registry));
    tmp___1 = _ecalloc((unsigned int )(tmp___0 + (int __attribute__((__visibility__("default")))  )2), sizeof(zval *));
    modules = (zval **)tmp___1;
    tmp___2 = zend_hash_num_elements((HashTable const   *)(& module_registry));
    tmp___3 = _emalloc((unsigned int )(tmp___2 + (int __attribute__((__visibility__("default")))  )2) * sizeof(char *));
    module_names = (char **)tmp___3;
    *(module_names + 0) = (char *)"internal";
    zend_hash_internal_pointer_reset_ex((HashTable *)(& module_registry), & pos);
    while (1) {
      tmp___4 = zend_hash_get_current_data_ex((HashTable *)(& module_registry), (void **)((void *)(& module)), & pos);
      if (tmp___4 != (int __attribute__((__visibility__("default")))  )-1) {

      } else {
        break;
      }
      *(module_names + module->module_number) = (char *)module->name;
      i ++;
      zend_hash_move_forward_ex((HashTable *)(& module_registry), & pos);
    }
    *(module_names + i) = (char *)"user";
    zend_hash_internal_pointer_reset_ex(executor_globals.zend_constants, & pos);
    while (1) {
      tmp___8 = zend_hash_get_current_data_ex(executor_globals.zend_constants, (void **)(& val), & pos);
      if (tmp___8 != (int __attribute__((__visibility__("default")))  )-1) {

      } else {
        break;
      }
      if (val->module_number == 2147483647) {
        module_number = i;
      } else {
        if (val->module_number > i) {
          goto bad_module_id;
        } else {
          if (val->module_number < 0) {
            goto bad_module_id;
          } else {
            module_number = val->module_number;
          }
        }
      }
      if (! *(modules + module_number)) {
        while (1) {
          tmp___5 = _emalloc(sizeof(zval_gc_info ));
          *(modules + module_number) = (zval *)tmp___5;
          ((zval_gc_info *)*(modules + module_number))->u.buffered = (gc_root_buffer *)((void *)0);
          break;
        }
        (*(modules + module_number))->refcount__gc = 1U;
        (*(modules + module_number))->is_ref__gc = (unsigned char)0;
        _array_init(*(modules + module_number), 0U);
        tmp___6 = strlen((char const   *)*(module_names + module_number));
        add_assoc_zval_ex(return_value, (char const   *)*(module_names + module_number), tmp___6 + 1U, *(modules + module_number));
      } else {

      }
      while (1) {
        tmp___7 = _emalloc(sizeof(zval_gc_info ));
        const_val = (zval *)tmp___7;
        ((zval_gc_info *)const_val)->u.buffered = (gc_root_buffer *)((void *)0);
        break;
      }
      const_val->refcount__gc = 1U;
      const_val->is_ref__gc = (unsigned char)0;
      *const_val = val->value;
      _zval_copy_ctor(const_val);
      const_val->refcount__gc = 1U;
      const_val->is_ref__gc = (unsigned char)0;
      add_assoc_zval_ex(*(modules + module_number), (char const   *)val->name, val->name_len, const_val);
      bad_module_id: 
      zend_hash_move_forward_ex(executor_globals.zend_constants, & pos);
    }
    _efree((void *)module_names);
    _efree((void *)modules);
  } else {
    zend_hash_apply_with_argument(executor_globals.zend_constants, (int (*)(void *pDest , void *argument ))(& add_constant_info), (void *)return_value);
  }
  return;
}
}
static zval *debug_backtrace_get_args(void **curpos ) 
{ void **p ;
  zval *arg_array ;
  zval **arg ;
  int arg_count ;
  void __attribute__((__visibility__("default")))  *tmp ;
  void **tmp___0 ;
  zval *new_zv ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_uint tmp___2 ;
  zend_bool tmp___3 ;

  {
  p = curpos;
  arg_count = (int )((unsigned long )*p);
  while (1) {
    tmp = _emalloc(sizeof(zval_gc_info ));
    arg_array = (zval *)tmp;
    ((zval_gc_info *)arg_array)->u.buffered = (gc_root_buffer *)((void *)0);
    break;
  }
  arg_array->refcount__gc = 1U;
  arg_array->is_ref__gc = (unsigned char)0;
  _array_init(arg_array, (unsigned int )arg_count);
  p -= arg_count;
  while (1) {
    arg_count --;
    if (arg_count >= 0) {

    } else {
      break;
    }
    tmp___0 = p;
    p ++;
    arg = (zval **)tmp___0;
    if (*arg) {
      if ((int )(*arg)->type != 5) {
        tmp___3 = zval_isref_p(*arg);
        if (tmp___3) {

        } else {
          while (1) {
            tmp___2 = zval_refcount_p(*arg);
            if (tmp___2 > 1U) {
              zval_delref_p(*arg);
              while (1) {
                tmp___1 = _emalloc(sizeof(zval_gc_info ));
                new_zv = (zval *)tmp___1;
                ((zval_gc_info *)new_zv)->u.buffered = (gc_root_buffer *)((void *)0);
                break;
              }
              while (1) {
                while (1) {
                  new_zv->value = (*arg)->value;
                  new_zv->type = (*arg)->type;
                  break;
                }
                zval_set_refcount_p(new_zv, 1U);
                zval_unset_isref_p(new_zv);
                break;
              }
              *arg = new_zv;
              _zval_copy_ctor(new_zv);
            } else {

            }
            break;
          }
          zval_set_isref_p(*arg);
        }
      } else {

      }
      zval_addref_p(*arg);
      add_next_index_zval(arg_array, *arg);
    } else {
      add_next_index_null(arg_array);
    }
  }
  return (arg_array);
}
}
void debug_print_backtrace_args(zval *arg_array ) 
{ zval **tmp ;
  HashPosition iterator ;
  int i ;
  size_t tmp___0 ;
  int tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;

  {
  i = 0;
  zend_hash_internal_pointer_reset_ex(arg_array->value.ht, & iterator);
  while (1) {
    tmp___2 = zend_hash_get_current_data_ex(arg_array->value.ht, (void **)(& tmp), & iterator);
    if (tmp___2 == (int __attribute__((__visibility__("default")))  )0) {

    } else {
      break;
    }
    tmp___1 = i;
    i ++;
    if (tmp___1) {
      tmp___0 = strlen(", ");
      (*zend_write)(", ", tmp___0);
    } else {

    }
    zend_print_flat_zval_r(*tmp);
    zend_hash_move_forward_ex(arg_array->value.ht, & iterator);
  }
  return;
}
}
static void zif_debug_print_backtrace(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ zend_execute_data *ptr ;
  zend_execute_data *skip ;
  int lineno ;
  int frameno ;
  char const   *function_name ;
  char const   *filename ;
  char const   *class_name ;
  char *call_type ;
  char const   *include_filename ;
  zval *arg_array ;
  int indent ;
  long options ;
  long limit ;
  int __attribute__((__visibility__("default")))  tmp ;
  char const   *free_class_name ;
  zend_uint class_name_len ;
  int dup ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_bool build_filename_arg ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  zend_execute_data *prev ;
  size_t tmp___4 ;

  {
  frameno = 0;
  class_name = (char const   *)((void *)0);
  include_filename = (char const   *)((void *)0);
  arg_array = (zval *)((void *)0);
  indent = 0;
  options = 0L;
  limit = 0L;
  tmp = zend_parse_parameters(ht, "|ll", & options, & limit);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  ptr = executor_globals.current_execute_data;
  ptr = ptr->prev_execute_data;
  while (1) {
    if (ptr) {
      if (limit == 0L) {

      } else {
        if ((long )frameno < limit) {

        } else {
          break;
        }
      }
    } else {
      break;
    }
    free_class_name = (char const   *)((void *)0);
    frameno ++;
    call_type = (char *)((void *)0);
    class_name = (char const   *)call_type;
    arg_array = (zval *)((void *)0);
    skip = ptr;
    if (! skip->op_array) {
      if (skip->prev_execute_data) {
        if ((skip->prev_execute_data)->opline) {
          if ((int )((skip->prev_execute_data)->opline)->opcode != 60) {
            if ((int )((skip->prev_execute_data)->opline)->opcode != 61) {
              if ((int )((skip->prev_execute_data)->opline)->opcode != 73) {
                skip = skip->prev_execute_data;
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
    if (skip->op_array) {
      filename = (skip->op_array)->filename;
      lineno = (int )(skip->opline)->lineno;
    } else {
      filename = (char const   *)((void *)0);
      lineno = 0;
    }
    function_name = (ptr->function_state.function)->common.function_name;
    if (function_name) {
      if (ptr->object) {
        if ((ptr->function_state.function)->common.scope) {
          class_name = ((ptr->function_state.function)->common.scope)->name;
        } else {
          tmp___0 = zend_get_object_classname((zval const   *)ptr->object, & class_name, & class_name_len);
          dup = (int )tmp___0;
          if (! dup) {
            free_class_name = class_name;
          } else {

          }
        }
        call_type = (char *)"->";
      } else {
        if ((ptr->function_state.function)->common.scope) {
          class_name = ((ptr->function_state.function)->common.scope)->name;
          call_type = (char *)"::";
        } else {
          class_name = (char const   *)((void *)0);
          call_type = (char *)((void *)0);
        }
      }
      if (! ptr->opline) {
        goto _L___0;
      } else {
        if ((int )(ptr->opline)->opcode == 61) {
          goto _L___0;
        } else {
          if ((int )(ptr->opline)->opcode == 60) {
            _L___0: /* CIL Label */ 
            _L: /* CIL Label */ 
            if (ptr->function_state.arguments) {
              if ((options & (long )(1 << 1)) == 0L) {
                arg_array = debug_backtrace_get_args(ptr->function_state.arguments);
              } else {

              }
            } else {

            }
          } else {

          }
        }
      }
    } else {
      build_filename_arg = (zend_bool )1;
      if (! ptr->opline) {
        function_name = "unknown";
        build_filename_arg = (unsigned char)0;
      } else {
        if ((int )(ptr->opline)->opcode != 73) {
          function_name = "unknown";
          build_filename_arg = (unsigned char)0;
        } else {
          switch ((int )(ptr->opline)->extended_value) {
          case 1: 
          function_name = "eval";
          build_filename_arg = (unsigned char)0;
          break;
          case 1 << 1: 
          function_name = "include";
          break;
          case 1 << 3: 
          function_name = "require";
          break;
          case 1 << 2: 
          function_name = "include_once";
          break;
          case 1 << 4: 
          function_name = "require_once";
          break;
          default: 
          function_name = "unknown";
          build_filename_arg = (unsigned char)0;
          break;
          }
        }
      }
      if (build_filename_arg) {
        if (include_filename) {
          while (1) {
            tmp___1 = _emalloc(sizeof(zval_gc_info ));
            arg_array = (zval *)tmp___1;
            ((zval_gc_info *)arg_array)->u.buffered = (gc_root_buffer *)((void *)0);
            break;
          }
          arg_array->refcount__gc = 1U;
          arg_array->is_ref__gc = (unsigned char)0;
          _array_init(arg_array, 0U);
          add_next_index_string(arg_array, (char const   *)((char *)include_filename), 1);
        } else {

        }
      } else {

      }
      call_type = (char *)((void *)0);
    }
    (*zend_printf)("#%-2d ", indent);
    if (class_name) {
      tmp___2 = strlen(class_name);
      (*zend_write)(class_name, tmp___2);
      tmp___3 = strlen((char const   *)call_type);
      (*zend_write)((char const   *)call_type, tmp___3);
    } else {

    }
    (*zend_printf)("%s(", function_name);
    if (arg_array) {
      debug_print_backtrace_args(arg_array);
      _zval_ptr_dtor(& arg_array);
    } else {

    }
    if (filename) {
      (*zend_printf)(") called at [%s:%d]\n", filename, lineno);
    } else {
      prev = skip->prev_execute_data;
      while (prev) {
        if (prev->function_state.function) {
          if ((int )(prev->function_state.function)->common.type != 2) {
            prev = (zend_execute_data *)((void *)0);
            break;
          } else {

          }
        } else {

        }
        if (prev->op_array) {
          (*zend_printf)(") called at [%s:%d]\n", (prev->op_array)->filename, (prev->opline)->lineno);
          break;
        } else {

        }
        prev = prev->prev_execute_data;
      }
      if (! prev) {
        tmp___4 = strlen(")\n");
        (*zend_write)(")\n", tmp___4);
      } else {

      }
    }
    include_filename = filename;
    ptr = skip->prev_execute_data;
    indent ++;
    if (free_class_name) {
      _efree((void *)((char *)free_class_name));
    } else {

    }
  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_fetch_debug_backtrace(zval *return_value , int skip_last , int options , int limit ) 
{ zend_execute_data *ptr ;
  zend_execute_data *skip ;
  int lineno ;
  int frameno ;
  char const   *function_name ;
  char const   *filename ;
  char const   *class_name ;
  char const   *include_filename ;
  zval *stack_frame ;
  int tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  zend_execute_data *prev ;
  zend_uint class_name_len ;
  int dup ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zval *tmp___2 ;
  zend_bool build_filename_arg ;
  zval *arg_array ;
  void __attribute__((__visibility__("default")))  *tmp___3 ;

  {
  frameno = 0;
  include_filename = (char const   *)((void *)0);
  ptr = executor_globals.current_execute_data;
  if (ptr) {
    if (skip_last == 0) {
      if (ptr->opline) {
        if ((int )(ptr->opline)->opcode == 68) {
          ptr = ptr->prev_execute_data;
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  tmp = skip_last;
  skip_last --;
  if (tmp) {
    if (ptr) {
      ptr = ptr->prev_execute_data;
    } else {

    }
  } else {

  }
  _array_init(return_value, 0U);
  while (1) {
    if (ptr) {
      if (limit == 0) {

      } else {
        if (frameno < limit) {

        } else {
          break;
        }
      }
    } else {
      break;
    }
    frameno ++;
    while (1) {
      tmp___0 = _emalloc(sizeof(zval_gc_info ));
      stack_frame = (zval *)tmp___0;
      ((zval_gc_info *)stack_frame)->u.buffered = (gc_root_buffer *)((void *)0);
      break;
    }
    stack_frame->refcount__gc = 1U;
    stack_frame->is_ref__gc = (unsigned char)0;
    _array_init(stack_frame, 0U);
    skip = ptr;
    if (! skip->op_array) {
      if (skip->prev_execute_data) {
        if ((skip->prev_execute_data)->opline) {
          if ((int )((skip->prev_execute_data)->opline)->opcode != 60) {
            if ((int )((skip->prev_execute_data)->opline)->opcode != 61) {
              if ((int )((skip->prev_execute_data)->opline)->opcode != 73) {
                skip = skip->prev_execute_data;
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
    if (skip->op_array) {
      filename = (skip->op_array)->filename;
      lineno = (int )(skip->opline)->lineno;
      add_assoc_string_ex(stack_frame, "file", sizeof("file"), (char *)filename, 1);
      add_assoc_long_ex(stack_frame, "line", sizeof("line"), (long )lineno);
    } else {
      prev = skip->prev_execute_data;
      while (prev) {
        if (prev->function_state.function) {
          if ((int )(prev->function_state.function)->common.type != 2) {
            if ((int )(prev->function_state.function)->common.type == 1) {
              if ((prev->function_state.function)->common.fn_flags & 2097152U) {

              } else {
                break;
              }
            } else {
              break;
            }
          } else {

          }
        } else {

        }
        if (prev->op_array) {
          add_assoc_string_ex(stack_frame, "file", sizeof("file"), (char *)(prev->op_array)->filename, 1);
          add_assoc_long_ex(stack_frame, "line", sizeof("line"), (long )(prev->opline)->lineno);
          break;
        } else {

        }
        prev = prev->prev_execute_data;
      }
      filename = (char const   *)((void *)0);
    }
    function_name = (ptr->function_state.function)->common.function_name;
    if (function_name) {
      add_assoc_string_ex(stack_frame, "function", sizeof("function"), (char *)function_name, 1);
      if (ptr->object) {
        if ((int )(ptr->object)->type == 5) {
          if ((ptr->function_state.function)->common.scope) {
            add_assoc_string_ex(stack_frame, "class", sizeof("class"), (char *)((ptr->function_state.function)->common.scope)->name, 1);
          } else {
            tmp___1 = zend_get_object_classname((zval const   *)ptr->object, & class_name, & class_name_len);
            dup = (int )tmp___1;
            add_assoc_string_ex(stack_frame, "class", sizeof("class"), (char *)class_name, dup);
          }
          if ((options & 1) != 0) {
            add_assoc_zval_ex(stack_frame, "object", sizeof("object"), ptr->object);
            zval_addref_p(ptr->object);
          } else {

          }
          add_assoc_string_ex(stack_frame, "type", sizeof("type"), (char *)"->", 1);
        } else {
          goto _L;
        }
      } else {
        _L: /* CIL Label */ 
        if ((ptr->function_state.function)->common.scope) {
          add_assoc_string_ex(stack_frame, "class", sizeof("class"), (char *)((ptr->function_state.function)->common.scope)->name, 1);
          add_assoc_string_ex(stack_frame, "type", sizeof("type"), (char *)"::", 1);
        } else {

        }
      }
      if ((options & (1 << 1)) == 0) {
        if (! ptr->opline) {
          goto _L___1;
        } else {
          if ((int )(ptr->opline)->opcode == 61) {
            goto _L___1;
          } else {
            if ((int )(ptr->opline)->opcode == 60) {
              _L___1: /* CIL Label */ 
              _L___0: /* CIL Label */ 
              if (ptr->function_state.arguments) {
                tmp___2 = debug_backtrace_get_args(ptr->function_state.arguments);
                add_assoc_zval_ex(stack_frame, "args", sizeof("args"), tmp___2);
              } else {

              }
            } else {

            }
          }
        }
      } else {

      }
    } else {
      build_filename_arg = (zend_bool )1;
      if (! ptr->opline) {
        function_name = "unknown";
        build_filename_arg = (unsigned char)0;
      } else {
        if ((int )(ptr->opline)->opcode != 73) {
          function_name = "unknown";
          build_filename_arg = (unsigned char)0;
        } else {
          switch ((int )(ptr->opline)->extended_value) {
          case 1: 
          function_name = "eval";
          build_filename_arg = (unsigned char)0;
          break;
          case 1 << 1: 
          function_name = "include";
          break;
          case 1 << 3: 
          function_name = "require";
          break;
          case 1 << 2: 
          function_name = "include_once";
          break;
          case 1 << 4: 
          function_name = "require_once";
          break;
          default: 
          function_name = "unknown";
          build_filename_arg = (unsigned char)0;
          break;
          }
        }
      }
      if (build_filename_arg) {
        if (include_filename) {
          while (1) {
            tmp___3 = _emalloc(sizeof(zval_gc_info ));
            arg_array = (zval *)tmp___3;
            ((zval_gc_info *)arg_array)->u.buffered = (gc_root_buffer *)((void *)0);
            break;
          }
          arg_array->refcount__gc = 1U;
          arg_array->is_ref__gc = (unsigned char)0;
          _array_init(arg_array, 0U);
          add_next_index_string(arg_array, (char const   *)((char *)include_filename), 1);
          add_assoc_zval_ex(stack_frame, "args", sizeof("args"), arg_array);
        } else {

        }
      } else {

      }
      add_assoc_string_ex(stack_frame, "function", sizeof("function"), (char *)function_name, 1);
    }
    add_next_index_zval(return_value, stack_frame);
    include_filename = filename;
    ptr = skip->prev_execute_data;
  }
  return;
}
}
static void zif_debug_backtrace(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ long options ;
  long limit ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  options = 1L;
  limit = 0L;
  tmp = zend_parse_parameters(ht, "|ll", & options, & limit);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  zend_fetch_debug_backtrace(return_value, 1, (int )options, (int )limit);
  return;
}
}
static void zif_extension_loaded(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *extension_name ;
  int extension_name_len ;
  char *lcname ;
  int __attribute__((__visibility__("default")))  tmp ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  zval *__z ;
  zval *__z___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = zend_parse_parameters(ht, "s", & extension_name, & extension_name_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___0 = zend_str_tolower_dup((char const   *)extension_name, (unsigned int )extension_name_len);
  lcname = (char *)tmp___0;
  tmp___1 = zend_hash_exists((HashTable const   *)(& module_registry), (char const   *)lcname, (unsigned int )(extension_name_len + 1));
  if (tmp___1) {
    while (1) {
      __z = return_value;
      __z->value.lval = 1L;
      __z->type = (unsigned char)3;
      break;
    }
  } else {
    while (1) {
      __z___0 = return_value;
      __z___0->value.lval = 0L;
      __z___0->type = (unsigned char)3;
      break;
    }
  }
  _efree((void *)lcname);
  return;
}
}
static void zif_get_extension_funcs(int ht , zval *return_value , zval **return_value_ptr , zval *this_ptr , int return_value_used ) 
{ char *extension_name ;
  int extension_name_len ;
  zend_module_entry *module ;
  zend_function_entry const   *func ;
  int __attribute__((__visibility__("default")))  tmp ;
  char *lcname ;
  char __attribute__((__visibility__("default")))  *tmp___0 ;
  zval *__z ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  zval *__z___0 ;
  int tmp___2 ;

  {
  tmp = zend_parse_parameters(ht, "s", & extension_name, & extension_name_len);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    return;
  } else {

  }
  tmp___2 = strncasecmp((char const   *)extension_name, "zend", sizeof("zend"));
  if (tmp___2) {
    tmp___0 = zend_str_tolower_dup((char const   *)extension_name, (unsigned int )extension_name_len);
    lcname = (char *)tmp___0;
    tmp___1 = zend_hash_find((HashTable const   *)(& module_registry), (char const   *)lcname, (unsigned int )(extension_name_len + 1), (void **)(& module));
    if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
      _efree((void *)lcname);
      while (1) {
        __z = return_value;
        __z->value.lval = 0L;
        __z->type = (unsigned char)3;
        break;
      }
      return;
    } else {

    }
    _efree((void *)lcname);
    func = module->functions;
    if (func) {

    } else {
      while (1) {
        __z___0 = return_value;
        __z___0->value.lval = 0L;
        __z___0->type = (unsigned char)3;
        break;
      }
      return;
    }
  } else {
    func = builtin_functions;
  }
  _array_init(return_value, 0U);
  while (func->fname) {
    add_next_index_string(return_value, (char const   *)func->fname, 1);
    func ++;
  }
  return;
}
}
