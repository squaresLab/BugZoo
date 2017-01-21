enum YYCONDTYPE {
    yycST_IN_SCRIPTING = 0,
    yycST_LOOKING_FOR_PROPERTY = 1,
    yycST_BACKQUOTE = 2,
    yycST_DOUBLE_QUOTES = 3,
    yycST_HEREDOC = 4,
    yycST_LOOKING_FOR_VARNAME = 5,
    yycST_VAR_OFFSET = 6,
    yycINITIAL = 7,
    yycST_END_HEREDOC = 8,
    yycST_NOWDOC = 9
} ;
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
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
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
typedef __suseconds_t suseconds_t;
typedef long __fd_mask;
struct __anonstruct_fd_set_9 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_9 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
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
struct __anonstruct_str_34 {
   char *val ;
   int len ;
};
union _zvalue_value {
   long lval ;
   double dval ;
   struct __anonstruct_str_34 str ;
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
struct __anonstruct_user_36 {
   char const   *filename ;
   zend_uint line_start ;
   zend_uint line_end ;
   char const   *doc_comment ;
   zend_uint doc_comment_len ;
};
struct _zend_function_entry;
struct _zend_module_entry;
struct __anonstruct_internal_37 {
   struct _zend_function_entry  const  *builtin_functions ;
   struct _zend_module_entry *module ;
};
union __anonunion_info_35 {
   struct __anonstruct_user_36 user ;
   struct __anonstruct_internal_37 internal ;
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
   union __anonunion_info_35 info ;
};
typedef size_t (*zend_stream_fsizer_t)(void *handle );
typedef size_t (*zend_stream_reader_t)(void *handle , char *buf , size_t len );
typedef void (*zend_stream_closer_t)(void *handle );
enum __anonenum_zend_stream_type_38 {
    ZEND_HANDLE_FILENAME = 0,
    ZEND_HANDLE_FD = 1,
    ZEND_HANDLE_FP = 2,
    ZEND_HANDLE_STREAM = 3,
    ZEND_HANDLE_MAPPED = 4
} ;
typedef enum __anonenum_zend_stream_type_38 zend_stream_type;
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
union __anonunion_handle_39 {
   int fd ;
   FILE *fp ;
   zend_stream stream ;
};
struct _zend_file_handle {
   zend_stream_type type ;
   char const   *filename ;
   char *opened_path ;
   union __anonunion_handle_39 handle ;
   zend_bool free_filename ;
};
typedef struct _zend_file_handle zend_file_handle;
struct _zend_utility_functions {
   void ( /* format attribute */  (*error_function))(int type , char const   *error_filename , uint error_lineno , char const   *format , va_list args ) ;
   int ( /* format attribute */  (*printf_function))(char const   *format  , ...) ;
   int (*write_function)(char const   *str , uint str_length ) ;
   FILE *(*fopen_function)(char const   *filename , char **opened_path ) ;
   void (*message_handler)(long message , void const   *data ) ;
   void (*block_interruptions)(void) ;
   void (*unblock_interruptions)(void) ;
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
union __anonunion_u_40 {
   zval *pz ;
   zend_object_handlers const   *handlers ;
};
struct _gc_root_buffer {
   struct _gc_root_buffer *prev ;
   struct _gc_root_buffer *next ;
   zend_object_handle handle ;
   union __anonunion_u_40 u ;
};
typedef struct _gc_root_buffer gc_root_buffer;
union __anonunion_u_41 {
   gc_root_buffer *buffered ;
   struct _zval_gc_info *next ;
};
struct _zval_gc_info {
   zval z ;
   union __anonunion_u_41 u ;
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
enum __anonenum_zend_error_handling_t_42 {
    EH_NORMAL = 0,
    EH_SUPPRESS = 1,
    EH_THROW = 2
} ;
typedef enum __anonenum_zend_error_handling_t_42 zend_error_handling_t;
struct __anonstruct_zend_error_handling_43 {
   zend_error_handling_t handling ;
   zend_class_entry *exception ;
   zval *user_handler ;
};
typedef struct __anonstruct_zend_error_handling_43 zend_error_handling;
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
union __anonunion_u_44 {
   znode_op op ;
   zval constant ;
   zend_op_array *op_array ;
};
struct _znode {
   int op_type ;
   union __anonunion_u_44 u ;
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
struct __anonstruct_common_45 {
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
   struct __anonstruct_common_45 common ;
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
struct __anonstruct_free_list_46 {
   int next ;
};
union _store_bucket {
   struct _store_object obj ;
   struct __anonstruct_free_list_46 free_list ;
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
struct _zend_syntax_highlighter_ini {
   char *highlight_html ;
   char *highlight_comment ;
   char *highlight_default ;
   char *highlight_string ;
   char *highlight_keyword ;
};
typedef struct _zend_syntax_highlighter_ini zend_syntax_highlighter_ini;
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
struct __anonstruct_var_47 {
   zval **ptr_ptr ;
   zval *ptr ;
   zend_bool fcall_returned_reference ;
};
struct __anonstruct_str_offset_48 {
   zval **ptr_ptr ;
   zval *str ;
   zend_uint offset ;
};
struct __anonstruct_fe_49 {
   zval **ptr_ptr ;
   zval *ptr ;
   HashPointer fe_pos ;
};
union _temp_variable {
   zval tmp_var ;
   struct __anonstruct_var_47 var ;
   struct __anonstruct_str_offset_48 str_offset ;
   struct __anonstruct_fe_49 fe ;
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
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_50 {
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
enum __anonenum_51 {
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
enum __anonenum_52 {
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
enum __anonenum_53 {
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
enum __anonenum_54 {
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
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
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
extern  __attribute__((__nothrow__)) int on_exit(void (*__func)(int __status , void *__arg ) , void *__arg )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *__secure_getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int putenv(char *__string )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int setenv(char const   *__name , char const   *__value , int __replace )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int unsetenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int clearenv(void) ;
extern  __attribute__((__nothrow__)) char *mktemp(char *__template )  __attribute__((__nonnull__(1))) ;
extern int mkstemp(char *__template )  __attribute__((__nonnull__(1))) ;
extern int mkstemps(char *__template , int __suffixlen )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *mkdtemp(char *__template )  __attribute__((__nonnull__(1))) ;
extern int system(char const   *__command ) ;
extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name , char * __restrict  __resolved ) ;
extern void *bsearch(void const   *__key , void const   *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,2,5))) ;
extern void qsort(void *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,4))) ;
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
extern  __attribute__((__nothrow__)) int getloadavg(double *__loadavg , int __nelem )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memmove(void *__dest , void const   *__src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memccpy(void * __restrict  __dest , void const   * __restrict  __src , int __c , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 , void const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c , size_t __n )  __attribute__((__pure__, __nonnull__(1))) ;
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
extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s , char const   *__reject )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s , char const   *__accept )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strpbrk(char const   *__s , char const   *__accept )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack , char const   *__needle )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strtok(char * __restrict  __s , char const   * __restrict  __delim )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *__strtok_r(char * __restrict  __s , char const   * __restrict  __delim , char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) char *strtok_r(char * __restrict  __s , char const   * __restrict  __delim , char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) size_t strnlen(char const   *__string , size_t __maxlen )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) int strerror_r(int __errnum , char *__buf , size_t __buflen )  __asm__("__xpg_strerror_r") __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *strerror_l(int __errnum , __locale_t __l ) ;
extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void bcopy(void const   *__src , void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 , void const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp , char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strsignal(int __sig ) ;
extern  __attribute__((__nothrow__)) char *__stpcpy(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *stpcpy(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *__stpncpy(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *stpncpy(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2))) ;
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
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir , char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern FILE *freopen(char const   * __restrict  __filename , char const   * __restrict  __modes , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd , char const   *__modes ) ;
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
extern int ( /* format attribute */  vdprintf)(int __fd , char const   * __restrict  __fmt , __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  dprintf)(int __fd , char const   * __restrict  __fmt  , ...) ;
extern int fscanf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...)  __asm__("__isoc99_fscanf")  ;
extern int scanf(char const   * __restrict  __format  , ...)  __asm__("__isoc99_scanf")  ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s , char const   * __restrict  __format  , ...)  __asm__("__isoc99_sscanf")  ;
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s , char const   * __restrict  __format , __gnuc_va_list __arg )  __asm__("__isoc99_vfscanf")  ;
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format , __gnuc_va_list __arg )  __asm__("__isoc99_vscanf")  ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsscanf)(char const   * __restrict  __s , char const   * __restrict  __format , __gnuc_va_list __arg )  __asm__("__isoc99_vsscanf")  ;
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
extern __ssize_t __getdelim(char ** __restrict  __lineptr , size_t * __restrict  __n , int __delimiter , FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr , size_t * __restrict  __n , int __delimiter , FILE * __restrict  __stream ) ;
extern __ssize_t getline(char ** __restrict  __lineptr , size_t * __restrict  __n , FILE * __restrict  __stream ) ;
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern int puts(char const   *__s ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __s ) ;
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern int fseek(FILE *__stream , long __off , int __whence ) ;
extern long ftell(FILE *__stream ) ;
extern void rewind(FILE *__stream ) ;
extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;
extern __off_t ftello(FILE *__stream ) ;
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos ) ;
extern int fsetpos(FILE *__stream , fpos_t const   *__pos ) ;
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
extern  __attribute__((__nothrow__)) void *dlopen(char const   *__file , int __mode ) ;
extern  __attribute__((__nothrow__)) int dlclose(void *__handle )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *dlsym(void * __restrict  __handle , char const   * __restrict  __name )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *dlerror(void) ;
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
extern void __attribute__((__visibility__("default")))  (*zend_block_interruptions)(void) ;
extern void __attribute__((__visibility__("default")))  (*zend_unblock_interruptions)(void) ;
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
zend_php_scanner_globals __attribute__((__visibility__("default")))  language_scanner_globals  ;
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
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
void startup_scanner(void) ;
void shutdown_scanner(void) ;
extern char __attribute__((__visibility__("default")))  *zend_set_compiled_filename(char const   *new_compiled_filename ) ;
extern void __attribute__((__visibility__("default")))  zend_restore_compiled_filename(char *original_compiled_filename ) ;
extern char __attribute__((__visibility__("default")))  *zend_get_compiled_filename(void) ;
extern int __attribute__((__visibility__("default")))  zend_get_compiled_lineno(void) ;
size_t __attribute__((__visibility__("default")))  zend_get_scanned_file_offset(void) ;
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
zend_op_array __attribute__((__visibility__("default")))  *compile_file(zend_file_handle *file_handle , int type ) ;
zend_op_array __attribute__((__visibility__("default")))  *compile_string(zval *source_string , char *filename ) ;
zend_op_array __attribute__((__visibility__("default")))  *compile_filename(int type , zval *filename ) ;
extern int __attribute__((__visibility__("default")))  zend_execute_scripts(int type , zval **retval , int file_count  , ...) ;
int __attribute__((__visibility__("default")))  open_file_for_scanning(zend_file_handle *file_handle ) ;
extern void __attribute__((__visibility__("default")))  init_op_array(zend_op_array *op_array , zend_uchar type , int initial_ops_size ) ;
extern void __attribute__((__visibility__("default")))  destroy_op_array(zend_op_array *op_array ) ;
void __attribute__((__visibility__("default")))  zend_destroy_file_handle(zend_file_handle *file_handle ) ;
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
void __attribute__((__visibility__("default")))  zend_save_lexical_state(zend_lex_state *lex_state ) ;
void __attribute__((__visibility__("default")))  zend_restore_lexical_state(zend_lex_state *lex_state ) ;
int __attribute__((__visibility__("default")))  zend_prepare_string_for_scanning(zval *str , char *filename ) ;
void __attribute__((__visibility__("default")))  zend_multibyte_yyinput_again(size_t (*old_input_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ) , zend_encoding const   *old_encoding ) ;
int __attribute__((__visibility__("default")))  zend_multibyte_set_filter(zend_encoding const   *onetime_encoding ) ;
extern void __attribute__((__visibility__("default")))  zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini ) ;
extern void __attribute__((__visibility__("default")))  zend_strip(void) ;
int __attribute__((__visibility__("default")))  highlight_file(char *filename , zend_syntax_highlighter_ini *syntax_highlighter_ini___0 ) ;
int __attribute__((__visibility__("default")))  highlight_string(zval *str , zend_syntax_highlighter_ini *syntax_highlighter_ini___0 , char *str_name ) ;
extern void __attribute__((__visibility__("default")))  zend_html_putc(char c ) ;
extern void __attribute__((__visibility__("default")))  zend_html_puts(char const   *s , uint len ) ;
extern zend_syntax_highlighter_ini syntax_highlighter_ini ;
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
extern  __attribute__((__nothrow__)) int faccessat(int __fd , char const   *__file , int __type , int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) __off_t lseek(int __fd , __off_t __offset , int __whence ) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes , __off_t __offset ) ;
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __n , __off_t __offset ) ;
extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
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
extern  __attribute__((__nothrow__)) char *getwd(char *__buf )  __attribute__((__nonnull__(1), __deprecated__)) ;
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
extern char **__environ ;
extern  __attribute__((__nothrow__)) int execve(char const   *__path , char * const  *__argv , char * const  *__envp )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int fexecve(int __fd , char * const  *__argv , char * const  *__envp )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int execv(char const   *__path , char * const  *__argv )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execle(char const   *__path , char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execl(char const   *__path , char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execvp(char const   *__file , char * const  *__argv )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execlp(char const   *__file , char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
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
extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid , __uid_t __euid ) ;
extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid , __gid_t __egid ) ;
extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
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
extern  __attribute__((__nothrow__)) int ftruncate(int __fd , __off_t __length ) ;
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
extern int lockf(int __fd , int __cmd , __off_t __len ) ;
extern int fdatasync(int __fildes ) ;
__inline extern  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
__inline extern  __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__statbuf )  __attribute__((__nonnull__(2))) ;
__inline extern  __attribute__((__nothrow__)) int fstatat(int __fd , char const   * __restrict  __filename , struct stat * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3))) ;
__inline extern  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int chmod(char const   *__file , __mode_t __mode )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int lchmod(char const   *__file , __mode_t __mode )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int fchmodat(int __fd , char const   *__file , __mode_t __mode , int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;
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
extern int readdir_r(DIR * __restrict  __dirp , struct dirent * __restrict  __entry , struct dirent ** __restrict  __result )  __attribute__((__nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) void rewinddir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void seekdir(DIR *__dirp , long __pos )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long telldir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int dirfd(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern int scandir(char const   * __restrict  __dir , struct dirent *** __restrict  __namelist , int (*__selector)(struct dirent  const  * ) , int (*__cmp)(struct dirent  const  ** , struct dirent  const  ** ) )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int alphasort(struct dirent  const  **__e1 , struct dirent  const  **__e2 )  __attribute__((__pure__, __nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) __ssize_t getdirentries(int __fd , char * __restrict  __buf , size_t __nbytes , __off_t * __restrict  __basep )  __attribute__((__nonnull__(2,4))) ;
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
static size_t encoding_filter_script_to_internal(unsigned char **to , size_t *to_length , unsigned char const   *from , size_t from_length ) 
{ zend_encoding const   *internal_encoding ;
  zend_encoding const __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  size_t __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = zend_multibyte_get_internal_encoding();
  internal_encoding = (zend_encoding const   *)tmp;
  if (internal_encoding) {
    tmp___0 = zend_multibyte_check_lexer_compatibility(internal_encoding);
    if (tmp___0) {

    } else {
      __assert_fail("internal_encoding && zend_multibyte_check_lexer_compatibility(internal_encoding)", "Zend/zend_language_scanner.l", 126U, "encoding_filter_script_to_internal");
    }
  } else {
    __assert_fail("internal_encoding && zend_multibyte_check_lexer_compatibility(internal_encoding)", "Zend/zend_language_scanner.l", 126U, "encoding_filter_script_to_internal");
  }
  tmp___1 = zend_multibyte_encoding_converter(to, to_length, from, from_length, internal_encoding, language_scanner_globals.script_encoding);
  return ((unsigned int )tmp___1);
}
}
static size_t encoding_filter_script_to_intermediate(unsigned char **to , size_t *to_length , unsigned char const   *from , size_t from_length ) 
{ size_t __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zend_multibyte_encoding_converter(to, to_length, from, from_length, (zend_encoding const   *)zend_multibyte_encoding_utf8, language_scanner_globals.script_encoding);
  return ((unsigned int )tmp);
}
}
static size_t encoding_filter_intermediate_to_script(unsigned char **to , size_t *to_length , unsigned char const   *from , size_t from_length ) 
{ size_t __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = zend_multibyte_encoding_converter(to, to_length, from, from_length, language_scanner_globals.script_encoding, (zend_encoding const   *)zend_multibyte_encoding_utf8);
  return ((unsigned int )tmp);
}
}
static size_t encoding_filter_intermediate_to_internal(unsigned char **to , size_t *to_length , unsigned char const   *from , size_t from_length ) 
{ zend_encoding const   *internal_encoding ;
  zend_encoding const __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  size_t __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = zend_multibyte_get_internal_encoding();
  internal_encoding = (zend_encoding const   *)tmp;
  if (internal_encoding) {
    tmp___0 = zend_multibyte_check_lexer_compatibility(internal_encoding);
    if (tmp___0) {

    } else {
      __assert_fail("internal_encoding && zend_multibyte_check_lexer_compatibility(internal_encoding)", "Zend/zend_language_scanner.l", 144U, "encoding_filter_intermediate_to_internal");
    }
  } else {
    __assert_fail("internal_encoding && zend_multibyte_check_lexer_compatibility(internal_encoding)", "Zend/zend_language_scanner.l", 144U, "encoding_filter_intermediate_to_internal");
  }
  tmp___1 = zend_multibyte_encoding_converter(to, to_length, from, from_length, internal_encoding, (zend_encoding const   *)zend_multibyte_encoding_utf8);
  return ((unsigned int )tmp___1);
}
}
static void _yy_push_state(int new_state ) 
{ 

  {
  zend_stack_push(& language_scanner_globals.state_stack, (void const   *)((void *)(& language_scanner_globals.yy_state)), (int )sizeof(int ));
  language_scanner_globals.yy_state = new_state;
  return;
}
}
static void yy_pop_state(void) 
{ int *stack_state ;

  {
  zend_stack_top((zend_stack const   *)(& language_scanner_globals.state_stack), (void **)(& stack_state));
  language_scanner_globals.yy_state = *stack_state;
  zend_stack_del_top(& language_scanner_globals.state_stack);
  return;
}
}
static void yy_scan_buffer(char *str , unsigned int len ) 
{ 

  {
  language_scanner_globals.yy_cursor = (unsigned char *)str;
  language_scanner_globals.yy_limit = language_scanner_globals.yy_cursor + len;
  if (! language_scanner_globals.yy_start) {
    language_scanner_globals.yy_start = language_scanner_globals.yy_cursor;
  } else {

  }
  return;
}
}
void startup_scanner(void) 
{ 

  {
  compiler_globals.parse_error = (unsigned char)0;
  compiler_globals.heredoc = (char *)((void *)0);
  compiler_globals.heredoc_len = 0;
  compiler_globals.doc_comment = (char *)((void *)0);
  compiler_globals.doc_comment_len = 0U;
  zend_stack_init(& language_scanner_globals.state_stack);
  return;
}
}
void shutdown_scanner(void) 
{ 

  {
  if (compiler_globals.heredoc) {
    _efree((void *)compiler_globals.heredoc);
    compiler_globals.heredoc_len = 0;
  } else {

  }
  compiler_globals.parse_error = (unsigned char)0;
  zend_stack_destroy(& language_scanner_globals.state_stack);
  if (compiler_globals.doc_comment) {
    _efree((void *)compiler_globals.doc_comment);
    compiler_globals.doc_comment = (char *)((void *)0);
  } else {

  }
  compiler_globals.doc_comment_len = 0U;
  return;
}
}
void __attribute__((__visibility__("default")))  zend_save_lexical_state(zend_lex_state *lex_state ) 
{ char __attribute__((__visibility__("default")))  *tmp ;

  {
  lex_state->yy_leng = language_scanner_globals.yy_leng;
  lex_state->yy_start = language_scanner_globals.yy_start;
  lex_state->yy_text = language_scanner_globals.yy_text;
  lex_state->yy_cursor = language_scanner_globals.yy_cursor;
  lex_state->yy_marker = language_scanner_globals.yy_marker;
  lex_state->yy_limit = language_scanner_globals.yy_limit;
  lex_state->state_stack = language_scanner_globals.state_stack;
  zend_stack_init(& language_scanner_globals.state_stack);
  lex_state->in = language_scanner_globals.yy_in;
  lex_state->yy_state = language_scanner_globals.yy_state;
  tmp = zend_get_compiled_filename();
  lex_state->filename = (char *)tmp;
  lex_state->lineno = (unsigned int )compiler_globals.zend_lineno;
  lex_state->script_org = language_scanner_globals.script_org;
  lex_state->script_org_size = language_scanner_globals.script_org_size;
  lex_state->script_filtered = language_scanner_globals.script_filtered;
  lex_state->script_filtered_size = language_scanner_globals.script_filtered_size;
  lex_state->input_filter = language_scanner_globals.input_filter;
  lex_state->output_filter = language_scanner_globals.output_filter;
  lex_state->script_encoding = language_scanner_globals.script_encoding;
  return;
}
}
void __attribute__((__visibility__("default")))  zend_restore_lexical_state(zend_lex_state *lex_state ) 
{ 

  {
  language_scanner_globals.yy_leng = lex_state->yy_leng;
  language_scanner_globals.yy_start = lex_state->yy_start;
  language_scanner_globals.yy_text = lex_state->yy_text;
  language_scanner_globals.yy_cursor = lex_state->yy_cursor;
  language_scanner_globals.yy_marker = lex_state->yy_marker;
  language_scanner_globals.yy_limit = lex_state->yy_limit;
  zend_stack_destroy(& language_scanner_globals.state_stack);
  language_scanner_globals.state_stack = lex_state->state_stack;
  language_scanner_globals.yy_in = lex_state->in;
  language_scanner_globals.yy_state = lex_state->yy_state;
  compiler_globals.zend_lineno = (int )lex_state->lineno;
  zend_restore_compiled_filename(lex_state->filename);
  if (language_scanner_globals.script_filtered) {
    _efree((void *)language_scanner_globals.script_filtered);
    language_scanner_globals.script_filtered = (unsigned char *)((void *)0);
  } else {

  }
  language_scanner_globals.script_org = lex_state->script_org;
  language_scanner_globals.script_org_size = lex_state->script_org_size;
  language_scanner_globals.script_filtered = lex_state->script_filtered;
  language_scanner_globals.script_filtered_size = lex_state->script_filtered_size;
  language_scanner_globals.input_filter = lex_state->input_filter;
  language_scanner_globals.output_filter = lex_state->output_filter;
  language_scanner_globals.script_encoding = lex_state->script_encoding;
  if (compiler_globals.heredoc) {
    _efree((void *)compiler_globals.heredoc);
    compiler_globals.heredoc = (char *)((void *)0);
    compiler_globals.heredoc_len = 0;
  } else {

  }
  return;
}
}
void __attribute__((__visibility__("default")))  zend_destroy_file_handle(zend_file_handle *file_handle ) 
{ 

  {
  zend_llist_del_element(& compiler_globals.open_files, (void *)file_handle, (int (*)(void * , void * ))(& zend_compare_file_handles));
  file_handle->opened_path = (char *)((void *)0);
  if (file_handle->free_filename) {
    file_handle->filename = (char const   *)((void *)0);
  } else {

  }
  return;
}
}
static zend_encoding const   *zend_multibyte_detect_utf_encoding(unsigned char const   *script , size_t script_size ) 
{ unsigned char const   *p ;
  int wchar_size ;
  int le ;
  void *tmp ;
  zend_encoding const __attribute__((__visibility__("default")))  *tmp___0 ;
  zend_encoding const __attribute__((__visibility__("default")))  *tmp___1 ;

  {
  wchar_size = 2;
  le = 0;
  p = script;
  while ((size_t )(p - script) < script_size) {
    tmp = memchr((void const   *)p, 0, (script_size - (size_t )(p - script)) - 2U);
    p = (unsigned char const   *)tmp;
    if (! p) {
      break;
    } else {

    }
    if ((int const   )*(p + 1) == 0) {
      if ((int const   )*(p + 2) == 0) {
        wchar_size = 4;
        break;
      } else {

      }
    } else {

    }
    p += 4;
  }
  p = script;
  while ((size_t )(p - script) < script_size) {
    if ((int const   )*p == 0) {
      if ((int const   )*((p + wchar_size) - 1) != 0) {
        le = 0;
        break;
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      if ((int const   )*p != 0) {
        if ((int const   )*((p + wchar_size) - 1) == 0) {
          le = 1;
          break;
        } else {

        }
      } else {

      }
    }
    p += wchar_size;
  }
  if (wchar_size == 2) {
    if (le) {
      tmp___0 = zend_multibyte_encoding_utf16le;
    } else {
      tmp___0 = zend_multibyte_encoding_utf16be;
    }
    return ((zend_encoding const   *)tmp___0);
  } else {
    if (le) {
      tmp___1 = zend_multibyte_encoding_utf32le;
    } else {
      tmp___1 = zend_multibyte_encoding_utf32be;
    }
    return ((zend_encoding const   *)tmp___1);
  }
  return ((zend_encoding const   *)((void *)0));
}
}
static zend_encoding const   *zend_multibyte_detect_unicode(void) 
{ zend_encoding const   *script_encoding ;
  int bom_size ;
  unsigned char *pos1 ;
  unsigned char *pos2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  void *tmp___4 ;
  int tmp___5 ;
  zend_encoding const   *tmp___6 ;
  void *tmp___7 ;

  {
  script_encoding = (zend_encoding const   *)((void *)0);
  if (language_scanner_globals.script_org_size < sizeof("\377\376\000\000") - 1U) {
    return ((zend_encoding const   *)((void *)0));
  } else {

  }
  tmp___3 = memcmp((void const   *)language_scanner_globals.script_org, (void const   *)"\000\000\376\377", sizeof("\000\000\376\377") - 1U);
  if (tmp___3) {
    tmp___2 = memcmp((void const   *)language_scanner_globals.script_org, (void const   *)"\377\376\000\000", sizeof("\377\376\000\000") - 1U);
    if (tmp___2) {
      tmp___1 = memcmp((void const   *)language_scanner_globals.script_org, (void const   *)"\376\377", sizeof("\376\377") - 1U);
      if (tmp___1) {
        tmp___0 = memcmp((void const   *)language_scanner_globals.script_org, (void const   *)"\377\376", sizeof("\377\376") - 1U);
        if (tmp___0) {
          tmp = memcmp((void const   *)language_scanner_globals.script_org, (void const   *)"\357\273\277", sizeof("\357\273\277") - 1U);
          if (tmp) {

          } else {
            script_encoding = (zend_encoding const   *)zend_multibyte_encoding_utf8;
            bom_size = (int )(sizeof("\357\273\277") - 1U);
          }
        } else {
          script_encoding = (zend_encoding const   *)zend_multibyte_encoding_utf16le;
          bom_size = (int )(sizeof("\377\376") - 1U);
        }
      } else {
        script_encoding = (zend_encoding const   *)zend_multibyte_encoding_utf16be;
        bom_size = (int )(sizeof("\376\377") - 1U);
      }
    } else {
      script_encoding = (zend_encoding const   *)zend_multibyte_encoding_utf32le;
      bom_size = (int )(sizeof("\377\376\000\000") - 1U);
    }
  } else {
    script_encoding = (zend_encoding const   *)zend_multibyte_encoding_utf32be;
    bom_size = (int )(sizeof("\000\000\376\377") - 1U);
  }
  if (script_encoding) {
    language_scanner_globals.script_org += bom_size;
    language_scanner_globals.script_org_size -= (size_t )bom_size;
    return (script_encoding);
  } else {

  }
  tmp___7 = memchr((void const   *)language_scanner_globals.script_org, 0, language_scanner_globals.script_org_size);
  pos1 = (unsigned char *)tmp___7;
  if (pos1) {
    pos2 = language_scanner_globals.script_org;
    while ((unsigned int )(pos1 - pos2) >= sizeof("__HALT_COMPILER();") - 1U) {
      tmp___4 = memchr((void const   *)pos2, '_', (unsigned int )(pos1 - pos2));
      pos2 = (unsigned char *)tmp___4;
      if (! pos2) {
        break;
      } else {

      }
      pos2 ++;
      tmp___5 = strncasecmp((char const   *)((char *)pos2), "_HALT_COMPILER", sizeof("_HALT_COMPILER") - 1U);
      if (tmp___5 == 0) {
        pos2 += sizeof("_HALT_COMPILER") - 1U;
        while (1) {
          if ((int )*pos2 == 32) {

          } else {
            if ((int )*pos2 == 9) {

            } else {
              if ((int )*pos2 == 13) {

              } else {
                if ((int )*pos2 == 10) {

                } else {
                  break;
                }
              }
            }
          }
          pos2 ++;
        }
        if ((int )*pos2 == 40) {
          pos2 ++;
          while (1) {
            if ((int )*pos2 == 32) {

            } else {
              if ((int )*pos2 == 9) {

              } else {
                if ((int )*pos2 == 13) {

                } else {
                  if ((int )*pos2 == 10) {

                  } else {
                    break;
                  }
                }
              }
            }
            pos2 ++;
          }
          if ((int )*pos2 == 41) {
            pos2 ++;
            while (1) {
              if ((int )*pos2 == 32) {

              } else {
                if ((int )*pos2 == 9) {

                } else {
                  if ((int )*pos2 == 13) {

                  } else {
                    if ((int )*pos2 == 10) {

                    } else {
                      break;
                    }
                  }
                }
              }
              pos2 ++;
            }
            if ((int )*pos2 == 59) {
              return ((zend_encoding const   *)((void *)0));
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
    }
    tmp___6 = zend_multibyte_detect_utf_encoding((unsigned char const   *)language_scanner_globals.script_org, language_scanner_globals.script_org_size);
    return (tmp___6);
  } else {

  }
  return ((zend_encoding const   *)((void *)0));
}
}
static zend_encoding const   *zend_multibyte_find_script_encoding(void) 
{ zend_encoding const   *script_encoding ;
  zend_encoding const __attribute__((__visibility__("default")))  *tmp ;

  {
  if (compiler_globals.detect_unicode) {
    script_encoding = zend_multibyte_detect_unicode();
    if ((unsigned int )script_encoding != (unsigned int )((void *)0)) {
      return (script_encoding);
    } else {

    }
  } else {

  }
  if (! compiler_globals.script_encoding_list) {
    return ((zend_encoding const   *)((void *)0));
  } else {
    if (! compiler_globals.script_encoding_list_size) {
      return ((zend_encoding const   *)((void *)0));
    } else {

    }
  }
  if (compiler_globals.script_encoding_list_size > 1U) {
    tmp = zend_multibyte_encoding_detector((unsigned char const   *)language_scanner_globals.script_org, language_scanner_globals.script_org_size, compiler_globals.script_encoding_list, compiler_globals.script_encoding_list_size);
    return ((zend_encoding const   *)tmp);
  } else {

  }
  return (*(compiler_globals.script_encoding_list + 0));
}
}
int __attribute__((__visibility__("default")))  zend_multibyte_set_filter(zend_encoding const   *onetime_encoding ) 
{ zend_encoding const   *internal_encoding ;
  zend_encoding const __attribute__((__visibility__("default")))  *tmp ;
  zend_encoding const   *script_encoding ;
  zend_encoding const   *tmp___0 ;
  zend_encoding const   *tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;

  {
  tmp = zend_multibyte_get_internal_encoding();
  internal_encoding = (zend_encoding const   *)tmp;
  if (onetime_encoding) {
    tmp___1 = onetime_encoding;
  } else {
    tmp___0 = zend_multibyte_find_script_encoding();
    tmp___1 = tmp___0;
  }
  script_encoding = tmp___1;
  if (! script_encoding) {
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {

  }
  language_scanner_globals.script_encoding = script_encoding;
  language_scanner_globals.input_filter = (size_t (*)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ))((void *)0);
  language_scanner_globals.output_filter = (size_t (*)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ))((void *)0);
  if (! internal_encoding) {
    goto _L;
  } else {
    if ((unsigned int )language_scanner_globals.script_encoding == (unsigned int )internal_encoding) {
      _L: /* CIL Label */ 
      tmp___2 = zend_multibyte_check_lexer_compatibility(language_scanner_globals.script_encoding);
      if (tmp___2) {
        language_scanner_globals.input_filter = (size_t (*)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ))((void *)0);
        language_scanner_globals.output_filter = (size_t (*)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ))((void *)0);
      } else {
        language_scanner_globals.input_filter = & encoding_filter_script_to_intermediate;
        language_scanner_globals.output_filter = & encoding_filter_intermediate_to_script;
      }
      return ((int __attribute__((__visibility__("default")))  )0);
    } else {

    }
  }
  tmp___4 = zend_multibyte_check_lexer_compatibility(internal_encoding);
  if (tmp___4) {
    language_scanner_globals.input_filter = & encoding_filter_script_to_internal;
    language_scanner_globals.output_filter = (size_t (*)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ))((void *)0);
  } else {
    tmp___3 = zend_multibyte_check_lexer_compatibility(language_scanner_globals.script_encoding);
    if (tmp___3) {
      language_scanner_globals.input_filter = (size_t (*)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ))((void *)0);
      language_scanner_globals.output_filter = & encoding_filter_script_to_internal;
    } else {
      language_scanner_globals.input_filter = & encoding_filter_script_to_intermediate;
      language_scanner_globals.output_filter = & encoding_filter_intermediate_to_internal;
    }
  }
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
int __attribute__((__visibility__("default")))  open_file_for_scanning(zend_file_handle *file_handle ) 
{ char const   *file_path ;
  char *buf ;
  size_t size ;
  size_t offset ;
  long tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  zend_file_handle *fh ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  size_t diff ;
  char const __attribute__((__visibility__("default")))  *tmp___2 ;
  size_t tmp___3 ;

  {
  file_path = (char const   *)((void *)0);
  offset = (size_t )0;
  if (compiler_globals.start_lineno == 2U) {
    if ((unsigned int )file_handle->type == 2U) {
      if (file_handle->handle.fp) {
        tmp = ftell(file_handle->handle.fp);
        offset = (unsigned int )tmp;
        if (offset == 4294967295U) {
          offset = 0U;
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  tmp___0 = zend_stream_fixup(file_handle, & buf, & size);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {

  }
  zend_llist_add_element(& compiler_globals.open_files, (void *)file_handle);
  if ((unsigned int )file_handle->handle.stream.handle >= (unsigned int )((void *)file_handle)) {
    if ((unsigned int )file_handle->handle.stream.handle <= (unsigned int )((void *)(file_handle + 1))) {
      tmp___1 = zend_llist_get_last_ex(& compiler_globals.open_files, (zend_llist_position *)((void *)0));
      fh = (zend_file_handle *)tmp___1;
      diff = (size_t )((char *)file_handle->handle.stream.handle - (char *)file_handle);
      fh->handle.stream.handle = (void *)((char *)fh + diff);
      file_handle->handle.stream.handle = fh->handle.stream.handle;
    } else {

    }
  } else {

  }
  language_scanner_globals.yy_in = file_handle;
  language_scanner_globals.yy_start = (unsigned char *)((void *)0);
  if (size != 4294967295U) {
    if (compiler_globals.multibyte) {
      language_scanner_globals.script_org = (unsigned char *)buf;
      language_scanner_globals.script_org_size = size;
      language_scanner_globals.script_filtered = (unsigned char *)((void *)0);
      zend_multibyte_set_filter((zend_encoding const   *)((void *)0));
      if (language_scanner_globals.input_filter) {
        tmp___3 = (*(language_scanner_globals.input_filter))(& language_scanner_globals.script_filtered, & language_scanner_globals.script_filtered_size, (unsigned char const   *)language_scanner_globals.script_org, language_scanner_globals.script_org_size);
        if (4294967295U == tmp___3) {
          tmp___2 = zend_multibyte_get_encoding_name(language_scanner_globals.script_encoding);
          zend_error_noreturn(1 << 6L, "Could not convert the script from the detected encoding \"%s\" to a compatible encoding", tmp___2);
        } else {

        }
        buf = (char *)language_scanner_globals.script_filtered;
        size = language_scanner_globals.script_filtered_size;
      } else {

      }
    } else {

    }
    language_scanner_globals.yy_start = (unsigned char *)buf - offset;
    yy_scan_buffer(buf, size);
  } else {
    zend_error_noreturn(1 << 6L, "zend_stream_mmap() failed");
  }
  language_scanner_globals.yy_state = 7;
  if (file_handle->opened_path) {
    file_path = (char const   *)file_handle->opened_path;
  } else {
    file_path = file_handle->filename;
  }
  zend_set_compiled_filename(file_path);
  if (compiler_globals.start_lineno) {
    compiler_globals.zend_lineno = (int )compiler_globals.start_lineno;
    compiler_globals.start_lineno = 0U;
  } else {
    compiler_globals.zend_lineno = 1;
  }
  compiler_globals.increment_lineno = (unsigned char)0;
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
zend_op_array __attribute__((__visibility__("default")))  *compile_file(zend_file_handle *file_handle , int type ) 
{ zend_lex_state original_lex_state ;
  zend_op_array *op_array ;
  void __attribute__((__visibility__("default")))  *tmp ;
  zend_op_array *original_active_op_array ;
  zend_op_array *retval ;
  int compiler_result ;
  zend_bool compilation_successful ;
  znode retval_znode ;
  zend_bool original_in_compilation ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = _emalloc(sizeof(zend_op_array ));
  op_array = (zend_op_array *)tmp;
  original_active_op_array = compiler_globals.active_op_array;
  retval = (zend_op_array *)((void *)0);
  compilation_successful = (zend_bool )0;
  original_in_compilation = compiler_globals.in_compilation;
  retval_znode.op_type = 1;
  retval_znode.u.constant.type = (unsigned char)1;
  retval_znode.u.constant.value.lval = 1L;
  zval_unset_isref_p(& retval_znode.u.constant);
  zval_set_refcount_p(& retval_znode.u.constant, 1U);
  zend_save_lexical_state(& original_lex_state);
  retval = op_array;
  tmp___0 = open_file_for_scanning(file_handle);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    if (type == 1 << 3) {
      zend_message_dispatcher(2L, (void const   *)file_handle->filename);
      _zend_bailout((char *)"Zend/zend_language_scanner.l", 569U);
    } else {
      zend_message_dispatcher(1L, (void const   *)file_handle->filename);
    }
    compilation_successful = (unsigned char)0;
  } else {
    init_op_array(op_array, (unsigned char)2, 64);
    compiler_globals.in_compilation = (unsigned char)1;
    compiler_globals.active_op_array = op_array;
    zend_init_compiler_context();
    compiler_result = zendparse();
    zend_do_return(& retval_znode, 0);
    compiler_globals.in_compilation = original_in_compilation;
    if (compiler_result == 1) {
      _zend_bailout((char *)"Zend/zend_language_scanner.l", 583U);
    } else {

    }
    compilation_successful = (unsigned char)1;
  }
  if (retval) {
    compiler_globals.active_op_array = original_active_op_array;
    if (compilation_successful) {
      pass_two(op_array);
      zend_release_labels();
    } else {
      _efree((void *)op_array);
      retval = (zend_op_array *)((void *)0);
    }
  } else {

  }
  zend_restore_lexical_state(& original_lex_state);
  return ((zend_op_array __attribute__((__visibility__("default")))  *)retval);
}
}
zend_op_array __attribute__((__visibility__("default")))  *compile_filename(int type , zval *filename ) 
{ zend_file_handle file_handle ;
  zval tmp ;
  zend_op_array *retval ;
  char *opened_path ;
  zend_op_array __attribute__((__visibility__("default")))  *tmp___0 ;
  int dummy ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  size_t tmp___2 ;

  {
  opened_path = (char *)((void *)0);
  if ((int )filename->type != 6) {
    tmp = *filename;
    _zval_copy_ctor(& tmp);
    if ((int )tmp.type != 6) {
      _convert_to_string(& tmp);
    } else {

    }
    filename = & tmp;
  } else {

  }
  file_handle.filename = (char const   *)filename->value.str.val;
  file_handle.free_filename = (unsigned char)0;
  file_handle.type = (enum __anonenum_zend_stream_type_38 )0;
  file_handle.opened_path = (char *)((void *)0);
  file_handle.handle.fp = (FILE *)((void *)0);
  tmp___0 = (*zend_compile_file)(& file_handle, type);
  retval = (zend_op_array *)tmp___0;
  if (retval) {
    if (file_handle.handle.stream.handle) {
      dummy = 1;
      if (! file_handle.opened_path) {
        tmp___1 = _estrndup((char const   *)filename->value.str.val, (unsigned int )filename->value.str.len);
        opened_path = (char *)tmp___1;
        file_handle.opened_path = opened_path;
      } else {

      }
      tmp___2 = strlen((char const   *)file_handle.opened_path);
      _zend_hash_add_or_update(& executor_globals.included_files, (char const   *)file_handle.opened_path, tmp___2 + 1U, (void *)(& dummy), sizeof(int ), (void **)((void *)0), 1 << 1);
      if (opened_path) {
        _efree((void *)opened_path);
      } else {

      }
    } else {

    }
  } else {

  }
  zend_destroy_file_handle(& file_handle);
  if ((unsigned int )filename == (unsigned int )(& tmp)) {
    _zval_dtor(& tmp);
  } else {

  }
  return ((zend_op_array __attribute__((__visibility__("default")))  *)retval);
}
}
int __attribute__((__visibility__("default")))  zend_prepare_string_for_scanning(zval *str , char *filename ) 
{ char *buf ;
  size_t size ;
  char *tmp ;
  void __attribute__((__visibility__("default")))  *tmp___0 ;
  void __attribute__((__visibility__("default")))  *tmp___1 ;
  zend_encoding const __attribute__((__visibility__("default")))  *tmp___2 ;
  char const __attribute__((__visibility__("default")))  *tmp___3 ;
  size_t tmp___4 ;

  {
  if ((unsigned int )str->value.str.val >= (unsigned int )compiler_globals.interned_strings_start) {
    if ((unsigned int )str->value.str.val < (unsigned int )compiler_globals.interned_strings_end) {
      tmp___0 = _safe_emalloc(1U, (unsigned int )str->value.str.len, 32U);
      tmp = (char *)tmp___0;
      memcpy((void */* __restrict  */)tmp, (void const   */* __restrict  */)str->value.str.val, (unsigned int )(str->value.str.len + 32));
      str->value.str.val = tmp;
    } else {
      tmp___1 = _safe_erealloc((void *)str->value.str.val, 1U, (unsigned int )str->value.str.len, 32U);
      str->value.str.val = (char *)tmp___1;
    }
  } else {
    tmp___1 = _safe_erealloc((void *)str->value.str.val, 1U, (unsigned int )str->value.str.len, 32U);
    str->value.str.val = (char *)tmp___1;
  }
  memset((void *)(str->value.str.val + str->value.str.len), 0, 32U);
  language_scanner_globals.yy_in = (zend_file_handle *)((void *)0);
  language_scanner_globals.yy_start = (unsigned char *)((void *)0);
  buf = str->value.str.val;
  size = (unsigned int )str->value.str.len;
  if (compiler_globals.multibyte) {
    language_scanner_globals.script_org = (unsigned char *)buf;
    language_scanner_globals.script_org_size = size;
    language_scanner_globals.script_filtered = (unsigned char *)((void *)0);
    tmp___2 = zend_multibyte_get_internal_encoding();
    zend_multibyte_set_filter((zend_encoding const   *)tmp___2);
    if (language_scanner_globals.input_filter) {
      tmp___4 = (*(language_scanner_globals.input_filter))(& language_scanner_globals.script_filtered, & language_scanner_globals.script_filtered_size, (unsigned char const   *)language_scanner_globals.script_org, language_scanner_globals.script_org_size);
      if (4294967295U == tmp___4) {
        tmp___3 = zend_multibyte_get_encoding_name(language_scanner_globals.script_encoding);
        zend_error_noreturn(1 << 6L, "Could not convert the script from the detected encoding \"%s\" to a compatible encoding", tmp___3);
      } else {

      }
      buf = (char *)language_scanner_globals.script_filtered;
      size = language_scanner_globals.script_filtered_size;
    } else {

    }
  } else {

  }
  yy_scan_buffer(buf, size);
  zend_set_compiled_filename((char const   *)filename);
  compiler_globals.zend_lineno = 1;
  compiler_globals.increment_lineno = (unsigned char)0;
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
size_t __attribute__((__visibility__("default")))  zend_get_scanned_file_offset(void) 
{ size_t offset ;
  size_t original_offset ;
  size_t length ;
  unsigned char *p ;
  size_t tmp ;

  {
  offset = (size_t )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_start);
  if (language_scanner_globals.input_filter) {
    original_offset = offset;
    length = (size_t )0;
    while (1) {
      p = (unsigned char *)((void *)0);
      tmp = (*(language_scanner_globals.input_filter))(& p, & length, (unsigned char const   *)language_scanner_globals.script_org, offset);
      if (4294967295U == tmp) {
        return ((unsigned int __attribute__((__visibility__("default")))  )4294967295U);
      } else {

      }
      _efree((void *)p);
      if (length > original_offset) {
        offset --;
      } else {
        if (length < original_offset) {
          offset ++;
        } else {

        }
      }
      if (original_offset != length) {

      } else {
        break;
      }
    }
  } else {

  }
  return ((unsigned int __attribute__((__visibility__("default")))  )offset);
}
}
zend_op_array __attribute__((__visibility__("default")))  *compile_string(zval *source_string , char *filename ) 
{ zend_lex_state original_lex_state ;
  zend_op_array *op_array ;
  void __attribute__((__visibility__("default")))  *tmp ;
  zend_op_array *original_active_op_array ;
  zend_op_array *retval ;
  zval tmp___0 ;
  int compiler_result ;
  zend_bool original_in_compilation ;
  zend_bool orig_interactive ;
  int __attribute__((__visibility__("default")))  tmp___1 ;

  {
  tmp = _emalloc(sizeof(zend_op_array ));
  op_array = (zend_op_array *)tmp;
  original_active_op_array = compiler_globals.active_op_array;
  original_in_compilation = compiler_globals.in_compilation;
  if (source_string->value.str.len == 0) {
    _efree((void *)op_array);
    return ((zend_op_array __attribute__((__visibility__("default")))  *)((void *)0));
  } else {

  }
  compiler_globals.in_compilation = (unsigned char)1;
  tmp___0 = *source_string;
  _zval_copy_ctor(& tmp___0);
  if ((int )tmp___0.type != 6) {
    _convert_to_string(& tmp___0);
  } else {

  }
  source_string = & tmp___0;
  zend_save_lexical_state(& original_lex_state);
  tmp___1 = zend_prepare_string_for_scanning(source_string, filename);
  if (tmp___1 == (int __attribute__((__visibility__("default")))  )-1) {
    _efree((void *)op_array);
    retval = (zend_op_array *)((void *)0);
  } else {
    orig_interactive = (zend_bool )compiler_globals.interactive;
    compiler_globals.interactive = 0;
    init_op_array(op_array, (unsigned char)4, 64);
    compiler_globals.interactive = (int )orig_interactive;
    compiler_globals.active_op_array = op_array;
    zend_init_compiler_context();
    language_scanner_globals.yy_state = 0;
    compiler_result = zendparse();
    if (language_scanner_globals.script_filtered) {
      _efree((void *)language_scanner_globals.script_filtered);
      language_scanner_globals.script_filtered = (unsigned char *)((void *)0);
    } else {

    }
    if (compiler_result == 1) {
      compiler_globals.active_op_array = original_active_op_array;
      compiler_globals.unclean_shutdown = (unsigned char)1;
      destroy_op_array(op_array);
      _efree((void *)op_array);
      retval = (zend_op_array *)((void *)0);
    } else {
      zend_do_return((znode *)((void *)0), 0);
      compiler_globals.active_op_array = original_active_op_array;
      pass_two(op_array);
      zend_release_labels();
      retval = op_array;
    }
  }
  zend_restore_lexical_state(& original_lex_state);
  _zval_dtor(& tmp___0);
  compiler_globals.in_compilation = original_in_compilation;
  return ((zend_op_array __attribute__((__visibility__("default")))  *)retval);
}
}
int __attribute__((__visibility__("default")))  highlight_file(char *filename , zend_syntax_highlighter_ini *syntax_highlighter_ini___0 ) 
{ zend_lex_state original_lex_state ;
  zend_file_handle file_handle ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  file_handle.type = (enum __anonenum_zend_stream_type_38 )0;
  file_handle.filename = (char const   *)filename;
  file_handle.free_filename = (unsigned char)0;
  file_handle.opened_path = (char *)((void *)0);
  zend_save_lexical_state(& original_lex_state);
  tmp = open_file_for_scanning(& file_handle);
  if (tmp == (int __attribute__((__visibility__("default")))  )-1) {
    zend_message_dispatcher(3L, (void const   *)filename);
    zend_restore_lexical_state(& original_lex_state);
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {

  }
  zend_highlight(syntax_highlighter_ini___0);
  if (language_scanner_globals.script_filtered) {
    _efree((void *)language_scanner_globals.script_filtered);
    language_scanner_globals.script_filtered = (unsigned char *)((void *)0);
  } else {

  }
  zend_destroy_file_handle(& file_handle);
  zend_restore_lexical_state(& original_lex_state);
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
int __attribute__((__visibility__("default")))  highlight_string(zval *str , zend_syntax_highlighter_ini *syntax_highlighter_ini___0 , char *str_name ) 
{ zend_lex_state original_lex_state ;
  zval tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;

  {
  tmp = *str;
  str = & tmp;
  _zval_copy_ctor(str);
  zend_save_lexical_state(& original_lex_state);
  tmp___0 = zend_prepare_string_for_scanning(str, str_name);
  if (tmp___0 == (int __attribute__((__visibility__("default")))  )-1) {
    zend_restore_lexical_state(& original_lex_state);
    return ((int __attribute__((__visibility__("default")))  )-1);
  } else {

  }
  language_scanner_globals.yy_state = 7;
  zend_highlight(syntax_highlighter_ini___0);
  if (language_scanner_globals.script_filtered) {
    _efree((void *)language_scanner_globals.script_filtered);
    language_scanner_globals.script_filtered = (unsigned char *)((void *)0);
  } else {

  }
  zend_restore_lexical_state(& original_lex_state);
  _zval_dtor(str);
  return ((int __attribute__((__visibility__("default")))  )0);
}
}
void __attribute__((__visibility__("default")))  zend_multibyte_yyinput_again(size_t (*old_input_filter)(unsigned char **str , size_t *str_length , unsigned char const   *buf , size_t length ) , zend_encoding const   *old_encoding ) 
{ size_t length ;
  unsigned char *new_yy_start ;
  char const __attribute__((__visibility__("default")))  *tmp ;
  size_t tmp___0 ;

  {
  if (! language_scanner_globals.input_filter) {
    if (language_scanner_globals.script_filtered) {
      _efree((void *)language_scanner_globals.script_filtered);
      language_scanner_globals.script_filtered = (unsigned char *)((void *)0);
    } else {

    }
    language_scanner_globals.script_filtered_size = 0U;
    length = language_scanner_globals.script_org_size;
    new_yy_start = language_scanner_globals.script_org;
  } else {
    tmp___0 = (*(language_scanner_globals.input_filter))(& new_yy_start, & length, (unsigned char const   *)language_scanner_globals.script_org, language_scanner_globals.script_org_size);
    if (4294967295U == tmp___0) {
      tmp = zend_multibyte_get_encoding_name(language_scanner_globals.script_encoding);
      zend_error_noreturn(1 << 6L, "Could not convert the script from the detected encoding \"%s\" to a compatible encoding", tmp);
    } else {

    }
    language_scanner_globals.script_filtered = new_yy_start;
    language_scanner_globals.script_filtered_size = length;
  }
  language_scanner_globals.yy_cursor = new_yy_start + (language_scanner_globals.yy_cursor - language_scanner_globals.yy_start);
  language_scanner_globals.yy_marker = new_yy_start + (language_scanner_globals.yy_marker - language_scanner_globals.yy_start);
  language_scanner_globals.yy_text = new_yy_start + (language_scanner_globals.yy_text - language_scanner_globals.yy_start);
  language_scanner_globals.yy_limit = new_yy_start + (language_scanner_globals.yy_limit - language_scanner_globals.yy_start);
  language_scanner_globals.yy_start = new_yy_start;
  return;
}
}
static void zend_scan_escape_string(zval *zendlval , char *str , int len , char quote_type ) 
{ register char *s ;
  register char *t ;
  char *end ;
  char const   *__s ;
  int __l ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char hex_buf[3] ;
  char *tmp___10 ;
  long tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  char octal_buf[4] ;
  char *tmp___14 ;
  long tmp___15 ;
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  size_t sz ;

  {
  while (1) {
    __s = (char const   *)str;
    __l = len;
    __z = zendlval;
    __z->value.str.len = __l;
    tmp = _estrndup(__s, (unsigned int )__l);
    __z->value.str.val = (char *)tmp;
    __z->type = (unsigned char)6;
    break;
  }
  t = zendlval->value.str.val;
  s = t;
  end = s + zendlval->value.str.len;
  while ((unsigned int )s < (unsigned int )end) {
    if ((int )*s == 92) {
      s ++;
      if ((unsigned int )s >= (unsigned int )end) {
        tmp___0 = t;
        t ++;
        *tmp___0 = (char )'\\';
        break;
      } else {

      }
      switch ((int )*s) {
      case 110: 
      tmp___1 = t;
      t ++;
      *tmp___1 = (char )'\n';
      (zendlval->value.str.len) --;
      break;
      case 114: 
      tmp___2 = t;
      t ++;
      *tmp___2 = (char )'\r';
      (zendlval->value.str.len) --;
      break;
      case 116: 
      tmp___3 = t;
      t ++;
      *tmp___3 = (char )'\t';
      (zendlval->value.str.len) --;
      break;
      case 102: 
      tmp___4 = t;
      t ++;
      *tmp___4 = (char )'\f';
      (zendlval->value.str.len) --;
      break;
      case 118: 
      tmp___5 = t;
      t ++;
      *tmp___5 = (char )'\v';
      (zendlval->value.str.len) --;
      break;
      case 101: 
      tmp___6 = t;
      t ++;
      *tmp___6 = (char )'\033';
      (zendlval->value.str.len) --;
      break;
      case 34: 
      case 96: 
      if ((int )*s != (int )quote_type) {
        tmp___7 = t;
        t ++;
        *tmp___7 = (char )'\\';
        tmp___8 = t;
        t ++;
        *tmp___8 = *s;
        break;
      } else {

      }
      case 92: 
      case 36: 
      tmp___9 = t;
      t ++;
      *tmp___9 = *s;
      (zendlval->value.str.len) --;
      break;
      case 120: 
      case 88: 
      if ((int )*(s + 1) >= 48) {
        if ((int )*(s + 1) <= 57) {
          goto _L___1;
        } else {
          goto _L___4;
        }
      } else {
        _L___4: /* CIL Label */ 
        if ((int )*(s + 1) >= 97) {
          if ((int )*(s + 1) <= 102) {
            goto _L___1;
          } else {
            goto _L___3;
          }
        } else {
          _L___3: /* CIL Label */ 
          if ((int )*(s + 1) >= 65) {
            if ((int )*(s + 1) <= 70) {
              _L___1: /* CIL Label */ 
              hex_buf[0] = (char)0;
              hex_buf[1] = (char)0;
              hex_buf[2] = (char)0;
              (zendlval->value.str.len) --;
              s ++;
              hex_buf[0] = *s;
              (zendlval->value.str.len) --;
              if ((int )*(s + 1) >= 48) {
                if ((int )*(s + 1) <= 57) {
                  s ++;
                  hex_buf[1] = *s;
                  (zendlval->value.str.len) --;
                } else {
                  goto _L___0;
                }
              } else {
                _L___0: /* CIL Label */ 
                if ((int )*(s + 1) >= 97) {
                  if ((int )*(s + 1) <= 102) {
                    s ++;
                    hex_buf[1] = *s;
                    (zendlval->value.str.len) --;
                  } else {
                    goto _L;
                  }
                } else {
                  _L: /* CIL Label */ 
                  if ((int )*(s + 1) >= 65) {
                    if ((int )*(s + 1) <= 70) {
                      s ++;
                      hex_buf[1] = *s;
                      (zendlval->value.str.len) --;
                    } else {

                    }
                  } else {

                  }
                }
              }
              tmp___10 = t;
              t ++;
              tmp___11 = strtol((char const   */* __restrict  */)(hex_buf), (char **/* __restrict  */)((void *)0), 16);
              *tmp___10 = (char )tmp___11;
            } else {
              goto _L___2;
            }
          } else {
            _L___2: /* CIL Label */ 
            tmp___12 = t;
            t ++;
            *tmp___12 = (char )'\\';
            tmp___13 = t;
            t ++;
            *tmp___13 = *s;
          }
        }
      }
      break;
      default: ;
      if ((int )*s >= 48) {
        if ((int )*s <= 55) {
          octal_buf[0] = (char)0;
          octal_buf[1] = (char)0;
          octal_buf[2] = (char)0;
          octal_buf[3] = (char)0;
          octal_buf[0] = *s;
          (zendlval->value.str.len) --;
          if ((int )*(s + 1) >= 48) {
            if ((int )*(s + 1) <= 55) {
              s ++;
              octal_buf[1] = *s;
              (zendlval->value.str.len) --;
              if ((int )*(s + 1) >= 48) {
                if ((int )*(s + 1) <= 55) {
                  s ++;
                  octal_buf[2] = *s;
                  (zendlval->value.str.len) --;
                } else {

                }
              } else {

              }
            } else {

            }
          } else {

          }
          tmp___14 = t;
          t ++;
          tmp___15 = strtol((char const   */* __restrict  */)(octal_buf), (char **/* __restrict  */)((void *)0), 8);
          *tmp___14 = (char )tmp___15;
        } else {
          goto _L___5;
        }
      } else {
        _L___5: /* CIL Label */ 
        tmp___16 = t;
        t ++;
        *tmp___16 = (char )'\\';
        tmp___17 = t;
        t ++;
        *tmp___17 = *s;
      }
      break;
      }
    } else {
      tmp___18 = t;
      t ++;
      *tmp___18 = *s;
    }
    if ((int )*s == 10) {
      (compiler_globals.zend_lineno) ++;
    } else {
      if ((int )*s == 13) {
        if ((int )*(s + 1) != 10) {
          (compiler_globals.zend_lineno) ++;
        } else {

        }
      } else {

      }
    }
    s ++;
  }
  *t = (char)0;
  if (language_scanner_globals.output_filter) {
    sz = (size_t )0;
    s = zendlval->value.str.val;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz, (unsigned char const   *)((unsigned char *)s), (unsigned int )zendlval->value.str.len);
    zendlval->value.str.len = (int )sz;
    _efree((void *)s);
  } else {

  }
  return;
}
}
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
static unsigned char const   yybm[256]  = 
  {      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )128,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0};
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
static unsigned char const   yybm___0[256]  = 
  {      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )128, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128};
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
static unsigned char const   yybm___1[256]  = 
  {      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )128, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128};
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
static unsigned char const   yybm___2[256]  = 
  {      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )128, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128};
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
static unsigned char const   yybm___3[256]  = 
  {      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )192,      (unsigned char const   )64,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )64,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )192,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )60,      (unsigned char const   )60,      (unsigned char const   )44,      (unsigned char const   )44, 
        (unsigned char const   )44,      (unsigned char const   )44,      (unsigned char const   )44,      (unsigned char const   )44, 
        (unsigned char const   )44,      (unsigned char const   )44,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )36,      (unsigned char const   )36,      (unsigned char const   )36, 
        (unsigned char const   )36,      (unsigned char const   )36,      (unsigned char const   )36,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )4, 
        (unsigned char const   )0,      (unsigned char const   )36,      (unsigned char const   )36,      (unsigned char const   )36, 
        (unsigned char const   )36,      (unsigned char const   )36,      (unsigned char const   )36,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4, 
        (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4,      (unsigned char const   )4};
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
static unsigned char const   yybm___4[256]  = 
  {      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )128,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )64, 
        (unsigned char const   )0,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64, 
        (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64,      (unsigned char const   )64};
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
static unsigned char const   yybm___5[256]  = 
  {      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )128, 
        (unsigned char const   )0,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128, 
        (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128,      (unsigned char const   )128};
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) ;
static unsigned char const   yybm___6[256]  = 
  {      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )240,      (unsigned char const   )240,      (unsigned char const   )112,      (unsigned char const   )112, 
        (unsigned char const   )112,      (unsigned char const   )112,      (unsigned char const   )112,      (unsigned char const   )112, 
        (unsigned char const   )112,      (unsigned char const   )112,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )80,      (unsigned char const   )80,      (unsigned char const   )80, 
        (unsigned char const   )80,      (unsigned char const   )80,      (unsigned char const   )80,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )16, 
        (unsigned char const   )0,      (unsigned char const   )80,      (unsigned char const   )80,      (unsigned char const   )80, 
        (unsigned char const   )80,      (unsigned char const   )80,      (unsigned char const   )80,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )0, 
        (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )0,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16, 
        (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16,      (unsigned char const   )16};
int __attribute__((__visibility__("default")))  lex_scan(zval *zendlval ) 
{ unsigned char yych ;
  unsigned int yyaccept ;
  unsigned char *ptr ;
  void *tmp ;
  int tmp___0 ;
  int readsize ;
  size_t sz ;
  size_t tmp___1 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;
  char *p ;
  char *boundary ;
  unsigned char *bracket ;
  void const   *tmp___3 ;
  char *p___0 ;
  char *boundary___0 ;
  unsigned char *tmp___4 ;
  size_t sz___0 ;
  char __attribute__((__visibility__("default")))  *tmp___5 ;
  size_t sz___1 ;
  char __attribute__((__visibility__("default")))  *tmp___6 ;
  size_t sz___2 ;
  char __attribute__((__visibility__("default")))  *tmp___7 ;
  unsigned char *tmp___8 ;
  size_t sz___3 ;
  char __attribute__((__visibility__("default")))  *tmp___9 ;
  size_t sz___4 ;
  char __attribute__((__visibility__("default")))  *tmp___10 ;
  size_t sz___5 ;
  char __attribute__((__visibility__("default")))  *tmp___11 ;
  int newline ;
  unsigned char *tmp___12 ;
  unsigned char *end ;
  int tmp___13 ;
  size_t sz___6 ;
  char __attribute__((__visibility__("default")))  *tmp___14 ;
  size_t sz___7 ;
  char __attribute__((__visibility__("default")))  *tmp___15 ;
  size_t sz___8 ;
  char __attribute__((__visibility__("default")))  *tmp___16 ;
  size_t sz___9 ;
  char __attribute__((__visibility__("default")))  *tmp___17 ;
  char *p___1 ;
  char *boundary___1 ;
  int __attribute__((__visibility__("default")))  tmp___18 ;
  int *tmp___19 ;
  double __attribute__((__visibility__("default")))  tmp___20 ;
  double __attribute__((__visibility__("default")))  tmp___21 ;
  int *tmp___22 ;
  unsigned char *tmp___23 ;
  register char *s ;
  register char *t ;
  char *end___0 ;
  int bprefix ;
  int tmp___24 ;
  unsigned char *tmp___25 ;
  char __attribute__((__visibility__("default")))  *tmp___26 ;
  char *tmp___27 ;
  char *tmp___28 ;
  char *tmp___29 ;
  char *tmp___30 ;
  size_t sz___10 ;
  int bprefix___0 ;
  int tmp___31 ;
  unsigned char *tmp___32 ;
  double __attribute__((__visibility__("default")))  tmp___33 ;
  char *bin ;
  int len ;
  double __attribute__((__visibility__("default")))  tmp___34 ;
  char *hex ;
  int len___0 ;
  double __attribute__((__visibility__("default")))  tmp___35 ;
  size_t sz___11 ;
  char __attribute__((__visibility__("default")))  *tmp___36 ;
  int doc_com ;
  unsigned char *tmp___37 ;
  char *p___2 ;
  char *boundary___2 ;
  char __attribute__((__visibility__("default")))  *tmp___38 ;
  char *s___0 ;
  int bprefix___1 ;
  int tmp___39 ;
  int tmp___40 ;
  char __attribute__((__visibility__("default")))  *tmp___41 ;
  unsigned char *end___1 ;
  int tmp___42 ;
  zval *__z ;
  char __attribute__((__visibility__("default")))  *tmp___43 ;
  char *filename ;
  char __attribute__((__visibility__("default")))  *tmp___44 ;
  size_t filename_len ;
  size_t tmp___45 ;
  char *dirname ;
  char __attribute__((__visibility__("default")))  *tmp___46 ;
  void __attribute__((__visibility__("default")))  *tmp___47 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___51 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___52 ;
  int tmp___53 ;
  int tmp___54 ;
  size_t tmp___55 ;
  char const   *class_name ;
  char const   *tmp___56 ;
  char const   *func_name ;
  char const   *tmp___57 ;
  size_t len___1 ;
  size_t tmp___58 ;
  size_t tmp___59 ;
  char const   *tmp___60 ;
  char const   *tmp___61 ;
  char const   *tmp___62 ;
  char const   *func_name___0 ;
  size_t tmp___63 ;
  char __attribute__((__visibility__("default")))  *tmp___64 ;
  char *filename___0 ;
  char __attribute__((__visibility__("default")))  *tmp___65 ;
  size_t tmp___66 ;
  char __attribute__((__visibility__("default")))  *tmp___67 ;
  char const   *trait_name ;
  size_t tmp___68 ;
  char __attribute__((__visibility__("default")))  *tmp___69 ;
  char const   *class_name___0 ;
  char __attribute__((__visibility__("default")))  *tmp___70 ;
  size_t tmp___71 ;
  char __attribute__((__visibility__("default")))  *tmp___72 ;
  char *p___3 ;
  char *boundary___3 ;
  size_t sz___12 ;
  char __attribute__((__visibility__("default")))  *tmp___73 ;
  size_t sz___13 ;
  char __attribute__((__visibility__("default")))  *tmp___74 ;
  int newline___0 ;
  unsigned char *tmp___75 ;
  unsigned char *end___2 ;
  int tmp___76 ;
  size_t sz___14 ;
  char __attribute__((__visibility__("default")))  *tmp___77 ;
  char *p___4 ;
  char *boundary___4 ;
  char __attribute__((__visibility__("default")))  *tmp___78 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___79 ;
  int tmp___80 ;
  int tmp___81 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___82 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___83 ;
  int tmp___84 ;
  int tmp___85 ;
  size_t sz___15 ;
  char __attribute__((__visibility__("default")))  *tmp___86 ;
  size_t sz___16 ;
  char __attribute__((__visibility__("default")))  *tmp___87 ;
  char __attribute__((__visibility__("default")))  *tmp___88 ;

  {
  restart: 
  language_scanner_globals.yy_text = language_scanner_globals.yy_cursor;
  yymore_restart: 
  yyaccept = 0U;
  if (language_scanner_globals.yy_state < 5) {
    if (language_scanner_globals.yy_state < 2) {
      if (language_scanner_globals.yy_state < 1) {
        goto yyc_ST_IN_SCRIPTING;
      } else {
        goto yyc_ST_LOOKING_FOR_PROPERTY;
      }
    } else {
      if (language_scanner_globals.yy_state < 3) {
        goto yyc_ST_BACKQUOTE;
      } else {
        if (language_scanner_globals.yy_state < 4) {
          goto yyc_ST_DOUBLE_QUOTES;
        } else {
          goto yyc_ST_HEREDOC;
        }
      }
    }
  } else {
    if (language_scanner_globals.yy_state < 7) {
      if (language_scanner_globals.yy_state < 6) {
        goto yyc_ST_LOOKING_FOR_VARNAME;
      } else {
        goto yyc_ST_VAR_OFFSET;
      }
    } else {
      if (language_scanner_globals.yy_state < 8) {
        goto yyc_INITIAL;
      } else {
        if (language_scanner_globals.yy_state < 9) {
          goto yyc_ST_END_HEREDOC;
        } else {
          goto yyc_ST_NOWDOC;
        }
      }
    }
  }
  yyc_INITIAL: 
  if ((unsigned int )(language_scanner_globals.yy_cursor + 8) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 60) {
    goto yy4;
  } else {

  }
  yyaccept = 0U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 63) {
    if ((int )yych == 37) {
      goto yy7;
    } else {

    }
    if ((int )yych >= 63) {
      goto yy5;
    } else {

    }
  } else {
    if ((int )yych <= 83) {
      if ((int )yych >= 83) {
        goto yy9;
      } else {

      }
    } else {
      if ((int )yych == 115) {
        goto yy9;
      } else {

      }
    }
  }
  yy3: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if ((unsigned int )language_scanner_globals.yy_cursor > (unsigned int )language_scanner_globals.yy_limit) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  inline_char_handler: 
  while (1) {
    tmp = memchr((void const   *)language_scanner_globals.yy_cursor, '<', (unsigned int )(language_scanner_globals.yy_limit - language_scanner_globals.yy_cursor));
    ptr = (unsigned char *)tmp;
    if (ptr) {
      language_scanner_globals.yy_cursor = ptr + 1;
    } else {
      language_scanner_globals.yy_cursor = language_scanner_globals.yy_limit;
    }
    if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
      switch ((int )*(language_scanner_globals.yy_cursor)) {
      case 63: 
      if (compiler_globals.short_tags) {
        break;
      } else {
        tmp___0 = strncasecmp((char const   *)((char *)language_scanner_globals.yy_cursor + 1), "php", 3U);
        if (tmp___0) {
          if ((int )*(language_scanner_globals.yy_cursor + 1) == 61) {
            break;
          } else {

          }
        } else {
          break;
        }
      }
      continue;
      case 37: 
      if (compiler_globals.asp_tags) {
        break;
      } else {

      }
      continue;
      case 115: 
      case 83: 
      (language_scanner_globals.yy_cursor) --;
      goto yymore_restart;
      default: ;
      continue;
      }
      (language_scanner_globals.yy_cursor) --;
    } else {

    }
    break;
  }
  inline_html: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz = (size_t )0;
    tmp___1 = (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text)), language_scanner_globals.yy_leng);
    readsize = (int )tmp___1;
    zendlval->value.str.len = (int )sz;
    if ((unsigned int )readsize < language_scanner_globals.yy_leng) {
      while (1) {
        language_scanner_globals.yy_cursor = (unsigned char *)((char *)language_scanner_globals.yy_text) + readsize;
        language_scanner_globals.yy_leng = (unsigned int )readsize;
        break;
      }
    } else {

    }
  } else {
    tmp___2 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
    zendlval->value.str.val = (char *)tmp___2;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  }
  zendlval->type = (unsigned char)6;
  while (1) {
    p = (char *)language_scanner_globals.yy_text;
    boundary = p + language_scanner_globals.yy_leng;
    while ((unsigned int )p < (unsigned int )boundary) {
      if ((int )*p == 10) {
        (compiler_globals.zend_lineno) ++;
      } else {
        if ((int )*p == 13) {
          if ((int )*(p + 1) != 10) {
            (compiler_globals.zend_lineno) ++;
          } else {

          }
        } else {

        }
      }
      p ++;
    }
    break;
  }
  return ((int __attribute__((__visibility__("default")))  )311);
  yy4: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy3;
  yy5: 
  yyaccept = 1U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 79) {
    if ((int )yych == 61) {
      goto yy45;
    } else {

    }
  } else {
    if ((int )yych <= 80) {
      goto yy47;
    } else {

    }
    if ((int )yych == 112) {
      goto yy47;
    } else {

    }
  }
  yy6: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (compiler_globals.short_tags) {
    zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
    zendlval->type = (unsigned char)6;
    language_scanner_globals.yy_state = 0;
    return ((int __attribute__((__visibility__("default")))  )372);
  } else {
    goto inline_char_handler;
  }
  yy7: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 61) {
    goto yy43;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (compiler_globals.asp_tags) {
    zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
    zendlval->type = (unsigned char)6;
    language_scanner_globals.yy_state = 0;
    return ((int __attribute__((__visibility__("default")))  )372);
  } else {
    goto inline_char_handler;
  }
  yy9: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy11;
  } else {

  }
  if ((int )yych == 99) {
    goto yy11;
  } else {

  }
  yy10: 
  language_scanner_globals.yy_cursor = language_scanner_globals.yy_marker;
  if (yyaccept <= 0U) {
    goto yy3;
  } else {
    goto yy6;
  }
  yy11: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy12;
  } else {

  }
  if ((int )yych != 114) {
    goto yy10;
  } else {

  }
  yy12: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy13;
  } else {

  }
  if ((int )yych != 105) {
    goto yy10;
  } else {

  }
  yy13: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy14;
  } else {

  }
  if ((int )yych != 112) {
    goto yy10;
  } else {

  }
  yy14: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy15;
  } else {

  }
  if ((int )yych != 116) {
    goto yy10;
  } else {

  }
  yy15: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy10;
  } else {

  }
  if ((int )yych == 108) {
    goto yy10;
  } else {

  }
  goto yy17;
  yy16: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 8) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy17: ;
  if ((int const   )yybm[(int )yych] & 128) {
    goto yy16;
  } else {

  }
  if ((int )yych == 76) {
    goto yy18;
  } else {

  }
  if ((int )yych != 108) {
    goto yy10;
  } else {

  }
  yy18: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy19;
  } else {

  }
  if ((int )yych != 97) {
    goto yy10;
  } else {

  }
  yy19: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy20;
  } else {

  }
  if ((int )yych != 110) {
    goto yy10;
  } else {

  }
  yy20: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 71) {
    goto yy21;
  } else {

  }
  if ((int )yych != 103) {
    goto yy10;
  } else {

  }
  yy21: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 85) {
    goto yy22;
  } else {

  }
  if ((int )yych != 117) {
    goto yy10;
  } else {

  }
  yy22: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy23;
  } else {

  }
  if ((int )yych != 97) {
    goto yy10;
  } else {

  }
  yy23: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 71) {
    goto yy24;
  } else {

  }
  if ((int )yych != 103) {
    goto yy10;
  } else {

  }
  yy24: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy25;
  } else {

  }
  if ((int )yych != 101) {
    goto yy10;
  } else {

  }
  yy25: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 13) {
    if ((int )yych <= 0x08) {
      goto yy10;
    } else {

    }
    if ((int )yych <= 10) {
      goto yy25;
    } else {

    }
    if ((int )yych <= 12) {
      goto yy10;
    } else {

    }
    goto yy25;
  } else {
    if ((int )yych <= 32) {
      if ((int )yych <= 0x1F) {
        goto yy10;
      } else {

      }
      goto yy25;
    } else {
      if ((int )yych != 61) {
        goto yy10;
      } else {

      }
    }
  }
  yy27: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 5) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 33) {
    if ((int )yych <= 12) {
      if ((int )yych <= 0x08) {
        goto yy10;
      } else {

      }
      if ((int )yych <= 10) {
        goto yy27;
      } else {

      }
      goto yy10;
    } else {
      if ((int )yych <= 13) {
        goto yy27;
      } else {

      }
      if ((int )yych == 32) {
        goto yy27;
      } else {

      }
      goto yy10;
    }
  } else {
    if ((int )yych <= 79) {
      if ((int )yych <= 34) {
        goto yy30;
      } else {

      }
      if ((int )yych == 39) {
        goto yy31;
      } else {

      }
      goto yy10;
    } else {
      if ((int )yych <= 80) {
        goto yy29;
      } else {

      }
      if ((int )yych != 112) {
        goto yy10;
      } else {

      }
    }
  }
  yy29: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy42;
  } else {

  }
  if ((int )yych == 104) {
    goto yy42;
  } else {

  }
  goto yy10;
  yy30: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy39;
  } else {

  }
  if ((int )yych == 112) {
    goto yy39;
  } else {

  }
  goto yy10;
  yy31: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy32;
  } else {

  }
  if ((int )yych != 112) {
    goto yy10;
  } else {

  }
  yy32: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy33;
  } else {

  }
  if ((int )yych != 104) {
    goto yy10;
  } else {

  }
  yy33: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy34;
  } else {

  }
  if ((int )yych != 112) {
    goto yy10;
  } else {

  }
  yy34: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 39) {
    goto yy10;
  } else {

  }
  yy35: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 13) {
    if ((int )yych <= 0x08) {
      goto yy10;
    } else {

    }
    if ((int )yych <= 10) {
      goto yy35;
    } else {

    }
    if ((int )yych <= 12) {
      goto yy10;
    } else {

    }
    goto yy35;
  } else {
    if ((int )yych <= 32) {
      if ((int )yych <= 0x1F) {
        goto yy10;
      } else {

      }
      goto yy35;
    } else {
      if ((int )yych != 62) {
        goto yy10;
      } else {

      }
    }
  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  tmp___3 = zend_memrchr((void const   *)((char *)language_scanner_globals.yy_text), '<', language_scanner_globals.yy_leng - (sizeof("script language=php>") - 1U));
  bracket = (unsigned char *)tmp___3;
  if ((unsigned int )bracket != (unsigned int )language_scanner_globals.yy_text) {
    language_scanner_globals.yy_cursor = bracket;
    goto inline_html;
  } else {

  }
  while (1) {
    p___0 = (char *)language_scanner_globals.yy_text;
    boundary___0 = p___0 + language_scanner_globals.yy_leng;
    while ((unsigned int )p___0 < (unsigned int )boundary___0) {
      if ((int )*p___0 == 10) {
        (compiler_globals.zend_lineno) ++;
      } else {
        if ((int )*p___0 == 13) {
          if ((int )*(p___0 + 1) != 10) {
            (compiler_globals.zend_lineno) ++;
          } else {

          }
        } else {

        }
      }
      p___0 ++;
    }
    break;
  }
  zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
  zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  zendlval->type = (unsigned char)6;
  language_scanner_globals.yy_state = 0;
  return ((int __attribute__((__visibility__("default")))  )372);
  yy39: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy40;
  } else {

  }
  if ((int )yych != 104) {
    goto yy10;
  } else {

  }
  yy40: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy41;
  } else {

  }
  if ((int )yych != 112) {
    goto yy10;
  } else {

  }
  yy41: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 34) {
    goto yy35;
  } else {

  }
  goto yy10;
  yy42: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy35;
  } else {

  }
  if ((int )yych == 112) {
    goto yy35;
  } else {

  }
  goto yy10;
  yy43: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (compiler_globals.asp_tags) {
    zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
    zendlval->type = (unsigned char)6;
    language_scanner_globals.yy_state = 0;
    return ((int __attribute__((__visibility__("default")))  )373);
  } else {
    goto inline_char_handler;
  }
  yy45: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
  zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  zendlval->type = (unsigned char)6;
  language_scanner_globals.yy_state = 0;
  return ((int __attribute__((__visibility__("default")))  )373);
  yy47: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy48;
  } else {

  }
  if ((int )yych != 104) {
    goto yy10;
  } else {

  }
  yy48: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy49;
  } else {

  }
  if ((int )yych != 112) {
    goto yy10;
  } else {

  }
  yy49: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 12) {
    if ((int )yych <= 0x08) {
      goto yy10;
    } else {

    }
    if ((int )yych >= 11) {
      goto yy10;
    } else {

    }
  } else {
    if ((int )yych <= 13) {
      goto yy52;
    } else {

    }
    if ((int )yych != 32) {
      goto yy10;
    } else {

    }
  }
  yy50: 
  (language_scanner_globals.yy_cursor) ++;
  yy51: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
  zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  zendlval->type = (unsigned char)6;
  if ((int )*((char *)language_scanner_globals.yy_text + (language_scanner_globals.yy_leng - 1U)) == 10) {
    (compiler_globals.zend_lineno) ++;
  } else {
    if ((int )*((char *)language_scanner_globals.yy_text + (language_scanner_globals.yy_leng - 1U)) == 13) {
      (compiler_globals.zend_lineno) ++;
    } else {

    }
  }
  language_scanner_globals.yy_state = 0;
  return ((int __attribute__((__visibility__("default")))  )372);
  yy52: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 10) {
    goto yy50;
  } else {

  }
  goto yy51;
  yyc_ST_BACKQUOTE: 
  if ((unsigned int )(language_scanner_globals.yy_cursor + 2) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych != 36) {
      goto yy60;
    } else {

    }
  } else {
    if ((int )yych <= 96) {
      goto yy58;
    } else {

    }
    if ((int )yych == 123) {
      goto yy57;
    } else {

    }
    goto yy60;
  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy56;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy63;
    } else {

    }
    if ((int )yych >= 95) {
      goto yy63;
    } else {

    }
  } else {
    if ((int )yych <= 122) {
      if ((int )yych >= 97) {
        goto yy63;
      } else {

      }
    } else {
      if ((int )yych <= 123) {
        goto yy66;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy63;
      } else {

      }
    }
  }
  yy56: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if ((unsigned int )language_scanner_globals.yy_cursor > (unsigned int )language_scanner_globals.yy_limit) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  if ((int )*((char *)language_scanner_globals.yy_text + 0) == 92) {
    if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
      (language_scanner_globals.yy_cursor) ++;
    } else {

    }
  } else {

  }
  while ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
    tmp___4 = language_scanner_globals.yy_cursor;
    (language_scanner_globals.yy_cursor) ++;
    switch ((int )*tmp___4) {
    case 96: 
    break;
    case 36: 
    if ((int )*(language_scanner_globals.yy_cursor) >= 97) {
      if ((int )*(language_scanner_globals.yy_cursor) <= 122) {
        break;
      } else {
        goto _L___0;
      }
    } else {
      _L___0: /* CIL Label */ 
      if ((int )*(language_scanner_globals.yy_cursor) >= 65) {
        if ((int )*(language_scanner_globals.yy_cursor) <= 90) {
          break;
        } else {
          goto _L;
        }
      } else {
        _L: /* CIL Label */ 
        if ((int )*(language_scanner_globals.yy_cursor) == 95) {
          break;
        } else {
          if ((int )*(language_scanner_globals.yy_cursor) >= 0x7F) {
            break;
          } else {
            if ((int )*(language_scanner_globals.yy_cursor) == 123) {
              break;
            } else {

            }
          }
        }
      }
    }
    continue;
    case 123: 
    if ((int )*(language_scanner_globals.yy_cursor) == 36) {
      break;
    } else {

    }
    continue;
    case 92: 
    if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
      (language_scanner_globals.yy_cursor) ++;
    } else {

    }
    default: ;
    continue;
    }
    (language_scanner_globals.yy_cursor) --;
    break;
  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zend_scan_escape_string(zendlval, (char *)language_scanner_globals.yy_text, (int )language_scanner_globals.yy_leng, (char )'`');
  return ((int __attribute__((__visibility__("default")))  )314);
  yy57: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 36) {
    goto yy61;
  } else {

  }
  goto yy56;
  yy58: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  language_scanner_globals.yy_state = 0;
  return ((int __attribute__((__visibility__("default")))  )'`');
  yy60: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy56;
  yy61: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.lval = (long )'{';
  _yy_push_state(0);
  while (1) {
    language_scanner_globals.yy_cursor = (unsigned char *)((char *)language_scanner_globals.yy_text) + 1;
    language_scanner_globals.yy_leng = 1U;
    break;
  }
  return ((int __attribute__((__visibility__("default")))  )379);
  yy63: 
  yyaccept = 0U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___0[(int )yych] & 128) {
    goto yy63;
  } else {

  }
  if ((int )yych == 45) {
    goto yy68;
  } else {

  }
  if ((int )yych == 91) {
    goto yy70;
  } else {

  }
  yy65: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___0 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___0, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___0;
  } else {
    tmp___5 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___5;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yy66: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  _yy_push_state(5);
  return ((int __attribute__((__visibility__("default")))  )378);
  yy68: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 62) {
    goto yy72;
  } else {

  }
  yy69: 
  language_scanner_globals.yy_cursor = language_scanner_globals.yy_marker;
  goto yy65;
  yy70: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = ((unsigned char *)((char *)language_scanner_globals.yy_text) + language_scanner_globals.yy_leng) - 1;
    (language_scanner_globals.yy_leng) --;
    break;
  }
  _yy_push_state(6);
  if (language_scanner_globals.output_filter) {
    sz___1 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___1, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___1;
  } else {
    tmp___6 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___6;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yy72: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy69;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy73;
    } else {

    }
    if ((int )yych <= 94) {
      goto yy69;
    } else {

    }
  } else {
    if ((int )yych <= 96) {
      goto yy69;
    } else {

    }
    if ((int )yych <= 122) {
      goto yy73;
    } else {

    }
    if ((int )yych <= 126) {
      goto yy69;
    } else {

    }
  }
  yy73: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = ((unsigned char *)((char *)language_scanner_globals.yy_text) + language_scanner_globals.yy_leng) - 3;
    language_scanner_globals.yy_leng -= 3U;
    break;
  }
  _yy_push_state(1);
  if (language_scanner_globals.output_filter) {
    sz___2 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___2, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___2;
  } else {
    tmp___7 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___7;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yyc_ST_DOUBLE_QUOTES: 
  if ((unsigned int )(language_scanner_globals.yy_cursor + 2) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 35) {
    if ((int )yych == 34) {
      goto yy80;
    } else {

    }
    goto yy82;
  } else {
    if ((int )yych <= 36) {
      goto yy77;
    } else {

    }
    if ((int )yych == 123) {
      goto yy79;
    } else {

    }
    goto yy82;
  }
  yy77: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy78;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy85;
    } else {

    }
    if ((int )yych >= 95) {
      goto yy85;
    } else {

    }
  } else {
    if ((int )yych <= 122) {
      if ((int )yych >= 97) {
        goto yy85;
      } else {

      }
    } else {
      if ((int )yych <= 123) {
        goto yy88;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy85;
      } else {

      }
    }
  }
  yy78: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (compiler_globals.doc_comment_len) {
    language_scanner_globals.yy_cursor += compiler_globals.doc_comment_len - 1U;
    compiler_globals.doc_comment_len = 0U;
    goto double_quotes_scan_done;
  } else {

  }
  if ((unsigned int )language_scanner_globals.yy_cursor > (unsigned int )language_scanner_globals.yy_limit) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  if ((int )*((char *)language_scanner_globals.yy_text + 0) == 92) {
    if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
      (language_scanner_globals.yy_cursor) ++;
    } else {

    }
  } else {

  }
  while ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
    tmp___8 = language_scanner_globals.yy_cursor;
    (language_scanner_globals.yy_cursor) ++;
    switch ((int )*tmp___8) {
    case 34: 
    break;
    case 36: 
    if ((int )*(language_scanner_globals.yy_cursor) >= 97) {
      if ((int )*(language_scanner_globals.yy_cursor) <= 122) {
        break;
      } else {
        goto _L___2;
      }
    } else {
      _L___2: /* CIL Label */ 
      if ((int )*(language_scanner_globals.yy_cursor) >= 65) {
        if ((int )*(language_scanner_globals.yy_cursor) <= 90) {
          break;
        } else {
          goto _L___1;
        }
      } else {
        _L___1: /* CIL Label */ 
        if ((int )*(language_scanner_globals.yy_cursor) == 95) {
          break;
        } else {
          if ((int )*(language_scanner_globals.yy_cursor) >= 0x7F) {
            break;
          } else {
            if ((int )*(language_scanner_globals.yy_cursor) == 123) {
              break;
            } else {

            }
          }
        }
      }
    }
    continue;
    case 123: 
    if ((int )*(language_scanner_globals.yy_cursor) == 36) {
      break;
    } else {

    }
    continue;
    case 92: 
    if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
      (language_scanner_globals.yy_cursor) ++;
    } else {

    }
    default: ;
    continue;
    }
    (language_scanner_globals.yy_cursor) --;
    break;
  }
  double_quotes_scan_done: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zend_scan_escape_string(zendlval, (char *)language_scanner_globals.yy_text, (int )language_scanner_globals.yy_leng, (char )'\"');
  return ((int __attribute__((__visibility__("default")))  )314);
  yy79: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 36) {
    goto yy83;
  } else {

  }
  goto yy78;
  yy80: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  language_scanner_globals.yy_state = 0;
  return ((int __attribute__((__visibility__("default")))  )'\"');
  yy82: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy78;
  yy83: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.lval = (long )'{';
  _yy_push_state(0);
  while (1) {
    language_scanner_globals.yy_cursor = (unsigned char *)((char *)language_scanner_globals.yy_text) + 1;
    language_scanner_globals.yy_leng = 1U;
    break;
  }
  return ((int __attribute__((__visibility__("default")))  )379);
  yy85: 
  yyaccept = 0U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___1[(int )yych] & 128) {
    goto yy85;
  } else {

  }
  if ((int )yych == 45) {
    goto yy90;
  } else {

  }
  if ((int )yych == 91) {
    goto yy92;
  } else {

  }
  yy87: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___3 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___3, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___3;
  } else {
    tmp___9 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___9;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yy88: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  _yy_push_state(5);
  return ((int __attribute__((__visibility__("default")))  )378);
  yy90: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 62) {
    goto yy94;
  } else {

  }
  yy91: 
  language_scanner_globals.yy_cursor = language_scanner_globals.yy_marker;
  goto yy87;
  yy92: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = ((unsigned char *)((char *)language_scanner_globals.yy_text) + language_scanner_globals.yy_leng) - 1;
    (language_scanner_globals.yy_leng) --;
    break;
  }
  _yy_push_state(6);
  if (language_scanner_globals.output_filter) {
    sz___4 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___4, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___4;
  } else {
    tmp___10 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___10;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yy94: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy91;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy95;
    } else {

    }
    if ((int )yych <= 94) {
      goto yy91;
    } else {

    }
  } else {
    if ((int )yych <= 96) {
      goto yy91;
    } else {

    }
    if ((int )yych <= 122) {
      goto yy95;
    } else {

    }
    if ((int )yych <= 126) {
      goto yy91;
    } else {

    }
  }
  yy95: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = ((unsigned char *)((char *)language_scanner_globals.yy_text) + language_scanner_globals.yy_leng) - 3;
    language_scanner_globals.yy_leng -= 3U;
    break;
  }
  _yy_push_state(1);
  if (language_scanner_globals.output_filter) {
    sz___5 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___5, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___5;
  } else {
    tmp___11 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___11;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yyc_ST_END_HEREDOC: ;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  language_scanner_globals.yy_cursor += compiler_globals.heredoc_len - 1;
  language_scanner_globals.yy_leng = (unsigned int )compiler_globals.heredoc_len;
  zendlval->value.str.val = compiler_globals.heredoc;
  zendlval->value.str.len = compiler_globals.heredoc_len;
  compiler_globals.heredoc = (char *)((void *)0);
  compiler_globals.heredoc_len = 0;
  language_scanner_globals.yy_state = 0;
  return ((int __attribute__((__visibility__("default")))  )377);
  yyc_ST_HEREDOC: 
  if ((unsigned int )(language_scanner_globals.yy_cursor + 2) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 36) {
    goto yy103;
  } else {

  }
  if ((int )yych == 123) {
    goto yy105;
  } else {

  }
  goto yy106;
  yy103: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy104;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy109;
    } else {

    }
    if ((int )yych >= 95) {
      goto yy109;
    } else {

    }
  } else {
    if ((int )yych <= 122) {
      if ((int )yych >= 97) {
        goto yy109;
      } else {

      }
    } else {
      if ((int )yych <= 123) {
        goto yy112;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy109;
      } else {

      }
    }
  }
  yy104: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  newline = 0;
  if ((unsigned int )language_scanner_globals.yy_cursor > (unsigned int )language_scanner_globals.yy_limit) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  (language_scanner_globals.yy_cursor) --;
  while ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
    tmp___12 = language_scanner_globals.yy_cursor;
    (language_scanner_globals.yy_cursor) ++;
    switch ((int )*tmp___12) {
    case 13: 
    if ((int )*(language_scanner_globals.yy_cursor) == 10) {
      (language_scanner_globals.yy_cursor) ++;
    } else {

    }
    case 10: 
    if ((int )*(language_scanner_globals.yy_cursor) >= 97) {
      if ((int )*(language_scanner_globals.yy_cursor) <= 122) {
        goto _L___4;
      } else {
        goto _L___6;
      }
    } else {
      _L___6: /* CIL Label */ 
      if ((int )*(language_scanner_globals.yy_cursor) >= 65) {
        if ((int )*(language_scanner_globals.yy_cursor) <= 90) {
          goto _L___4;
        } else {
          goto _L___5;
        }
      } else {
        _L___5: /* CIL Label */ 
        if ((int )*(language_scanner_globals.yy_cursor) == 95) {
          goto _L___4;
        } else {
          if ((int )*(language_scanner_globals.yy_cursor) >= 0x7F) {
            _L___4: /* CIL Label */ 
            if (compiler_globals.heredoc_len < language_scanner_globals.yy_limit - language_scanner_globals.yy_cursor) {
              tmp___13 = memcmp((void const   *)language_scanner_globals.yy_cursor, (void const   *)compiler_globals.heredoc, (unsigned int )compiler_globals.heredoc_len);
              if (tmp___13) {

              } else {
                end = language_scanner_globals.yy_cursor + compiler_globals.heredoc_len;
                if ((int )*end == 59) {
                  end ++;
                } else {

                }
                if ((int )*end == 10) {
                  goto _L___3;
                } else {
                  if ((int )*end == 13) {
                    _L___3: /* CIL Label */ 
                    if ((int )*(language_scanner_globals.yy_cursor + -2) == 13) {
                      if ((int )*(language_scanner_globals.yy_cursor + -1) == 10) {
                        newline = 2;
                      } else {
                        newline = 1;
                      }
                    } else {
                      newline = 1;
                    }
                    compiler_globals.increment_lineno = (unsigned char)1;
                    language_scanner_globals.yy_state = 8;
                    goto heredoc_scan_done;
                  } else {

                  }
                }
              }
            } else {

            }
          } else {

          }
        }
      }
    }
    continue;
    case 36: 
    if ((int )*(language_scanner_globals.yy_cursor) >= 97) {
      if ((int )*(language_scanner_globals.yy_cursor) <= 122) {
        break;
      } else {
        goto _L___8;
      }
    } else {
      _L___8: /* CIL Label */ 
      if ((int )*(language_scanner_globals.yy_cursor) >= 65) {
        if ((int )*(language_scanner_globals.yy_cursor) <= 90) {
          break;
        } else {
          goto _L___7;
        }
      } else {
        _L___7: /* CIL Label */ 
        if ((int )*(language_scanner_globals.yy_cursor) == 95) {
          break;
        } else {
          if ((int )*(language_scanner_globals.yy_cursor) >= 0x7F) {
            break;
          } else {
            if ((int )*(language_scanner_globals.yy_cursor) == 123) {
              break;
            } else {

            }
          }
        }
      }
    }
    continue;
    case 123: 
    if ((int )*(language_scanner_globals.yy_cursor) == 36) {
      break;
    } else {

    }
    continue;
    case 92: 
    if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
      if ((int )*(language_scanner_globals.yy_cursor) != 10) {
        if ((int )*(language_scanner_globals.yy_cursor) != 13) {
          (language_scanner_globals.yy_cursor) ++;
        } else {

        }
      } else {

      }
    } else {

    }
    default: ;
    continue;
    }
    (language_scanner_globals.yy_cursor) --;
    break;
  }
  heredoc_scan_done: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zend_scan_escape_string(zendlval, (char *)language_scanner_globals.yy_text, (int )(language_scanner_globals.yy_leng - (unsigned int )newline), (char)0);
  return ((int __attribute__((__visibility__("default")))  )314);
  yy105: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 36) {
    goto yy107;
  } else {

  }
  goto yy104;
  yy106: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy104;
  yy107: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.lval = (long )'{';
  _yy_push_state(0);
  while (1) {
    language_scanner_globals.yy_cursor = (unsigned char *)((char *)language_scanner_globals.yy_text) + 1;
    language_scanner_globals.yy_leng = 1U;
    break;
  }
  return ((int __attribute__((__visibility__("default")))  )379);
  yy109: 
  yyaccept = 0U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___2[(int )yych] & 128) {
    goto yy109;
  } else {

  }
  if ((int )yych == 45) {
    goto yy114;
  } else {

  }
  if ((int )yych == 91) {
    goto yy116;
  } else {

  }
  yy111: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___6 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___6, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___6;
  } else {
    tmp___14 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___14;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yy112: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  _yy_push_state(5);
  return ((int __attribute__((__visibility__("default")))  )378);
  yy114: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 62) {
    goto yy118;
  } else {

  }
  yy115: 
  language_scanner_globals.yy_cursor = language_scanner_globals.yy_marker;
  goto yy111;
  yy116: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = ((unsigned char *)((char *)language_scanner_globals.yy_text) + language_scanner_globals.yy_leng) - 1;
    (language_scanner_globals.yy_leng) --;
    break;
  }
  _yy_push_state(6);
  if (language_scanner_globals.output_filter) {
    sz___7 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___7, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___7;
  } else {
    tmp___15 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___15;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yy118: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy115;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy119;
    } else {

    }
    if ((int )yych <= 94) {
      goto yy115;
    } else {

    }
  } else {
    if ((int )yych <= 96) {
      goto yy115;
    } else {

    }
    if ((int )yych <= 122) {
      goto yy119;
    } else {

    }
    if ((int )yych <= 126) {
      goto yy115;
    } else {

    }
  }
  yy119: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = ((unsigned char *)((char *)language_scanner_globals.yy_text) + language_scanner_globals.yy_leng) - 3;
    language_scanner_globals.yy_leng -= 3U;
    break;
  }
  _yy_push_state(1);
  if (language_scanner_globals.output_filter) {
    sz___8 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___8, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___8;
  } else {
    tmp___16 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___16;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yyc_ST_IN_SCRIPTING: 
  if ((unsigned int )(language_scanner_globals.yy_cursor + 16) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  switch ((int )yych) {
  case 0x00: 
  case 0x01: 
  case 0x02: 
  case 0x03: 
  case 0x04: 
  case 0x05: 
  case 0x06: 
  case 0x07: 
  case 0x08: 
  case 11: 
  case 12: 
  case 0x0E: 
  case 0x0F: 
  case 0x10: 
  case 0x11: 
  case 0x12: 
  case 0x13: 
  case 0x14: 
  case 0x15: 
  case 0x16: 
  case 0x17: 
  case 0x18: 
  case 0x19: 
  case 0x1A: 
  case 0x1B: 
  case 0x1C: 
  case 0x1D: 
  case 0x1E: 
  case 0x1F: 
  goto yy183;
  case 9: 
  case 10: 
  case 13: 
  case 32: 
  goto yy139;
  case 33: 
  goto yy152;
  case 34: 
  goto yy179;
  case 35: 
  goto yy175;
  case 36: 
  goto yy164;
  case 37: 
  goto yy158;
  case 38: 
  goto yy159;
  case 39: 
  goto yy177;
  case 40: 
  goto yy146;
  case 41: 
  case 44: 
  case 59: 
  case 64: 
  case 91: 
  case 93: 
  case 126: 
  goto yy165;
  case 42: 
  goto yy155;
  case 43: 
  goto yy151;
  case 45: 
  goto yy137;
  case 46: 
  goto yy157;
  case 47: 
  goto yy156;
  case 48: 
  goto yy171;
  case 49: 
  case 50: 
  case 51: 
  case 52: 
  case 53: 
  case 54: 
  case 55: 
  case 56: 
  case 57: 
  goto yy173;
  case 58: 
  goto yy141;
  case 60: 
  goto yy153;
  case 61: 
  goto yy149;
  case 62: 
  goto yy154;
  case 63: 
  goto yy166;
  case 65: 
  case 97: 
  goto yy132;
  case 66: 
  case 98: 
  goto yy134;
  case 67: 
  case 99: 
  goto yy127;
  case 68: 
  case 100: 
  goto yy125;
  case 69: 
  case 101: 
  goto yy123;
  case 70: 
  case 102: 
  goto yy126;
  case 71: 
  case 103: 
  goto yy135;
  case 73: 
  case 105: 
  goto yy130;
  case 76: 
  case 108: 
  goto yy150;
  case 78: 
  case 110: 
  goto yy144;
  case 79: 
  case 111: 
  goto yy162;
  case 80: 
  case 112: 
  goto yy136;
  case 82: 
  case 114: 
  goto yy128;
  case 83: 
  case 115: 
  goto yy133;
  case 84: 
  case 116: 
  goto yy129;
  case 85: 
  case 117: 
  goto yy147;
  case 86: 
  case 118: 
  goto yy145;
  case 87: 
  case 119: 
  goto yy131;
  case 88: 
  case 120: 
  goto yy163;
  case 92: 
  goto yy142;
  case 94: 
  goto yy161;
  case 95: 
  goto yy148;
  case 96: 
  goto yy181;
  case 123: 
  goto yy167;
  case 124: 
  goto yy160;
  case 125: 
  goto yy169;
  default: ;
  goto yy174;
  }
  yy123: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  switch ((int )yych) {
  case 67: 
  case 99: 
  goto yy726;
  case 76: 
  case 108: 
  goto yy727;
  case 77: 
  case 109: 
  goto yy728;
  case 78: 
  case 110: 
  goto yy729;
  case 86: 
  case 118: 
  goto yy730;
  case 88: 
  case 120: 
  goto yy731;
  default: ;
  goto yy186;
  }
  yy124: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___9 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___9, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text)), language_scanner_globals.yy_leng);
    zendlval->value.str.len = (int )sz___9;
  } else {
    tmp___17 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
    zendlval->value.str.val = (char *)tmp___17;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )307);
  yy125: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 79) {
    if ((int )yych <= 72) {
      if ((int )yych == 69) {
        goto yy708;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 73) {
        goto yy709;
      } else {

      }
      if ((int )yych <= 78) {
        goto yy186;
      } else {

      }
      goto yy710;
    }
  } else {
    if ((int )yych <= 104) {
      if ((int )yych == 101) {
        goto yy708;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 105) {
        goto yy709;
      } else {

      }
      if ((int )yych == 111) {
        goto yy710;
      } else {

      }
      goto yy186;
    }
  }
  yy126: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 85) {
    if ((int )yych <= 78) {
      if ((int )yych == 73) {
        goto yy687;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 79) {
        goto yy688;
      } else {

      }
      if ((int )yych <= 84) {
        goto yy186;
      } else {

      }
      goto yy689;
    }
  } else {
    if ((int )yych <= 110) {
      if ((int )yych == 105) {
        goto yy687;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 111) {
        goto yy688;
      } else {

      }
      if ((int )yych == 117) {
        goto yy689;
      } else {

      }
      goto yy186;
    }
  }
  yy127: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 79) {
    if ((int )yych <= 75) {
      if ((int )yych == 65) {
        goto yy652;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 76) {
        goto yy653;
      } else {

      }
      if ((int )yych <= 78) {
        goto yy186;
      } else {

      }
      goto yy654;
    }
  } else {
    if ((int )yych <= 107) {
      if ((int )yych == 97) {
        goto yy652;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 108) {
        goto yy653;
      } else {

      }
      if ((int )yych == 111) {
        goto yy654;
      } else {

      }
      goto yy186;
    }
  }
  yy128: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy634;
  } else {

  }
  if ((int )yych == 101) {
    goto yy634;
  } else {

  }
  goto yy186;
  yy129: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 82) {
    if ((int )yych == 72) {
      goto yy622;
    } else {

    }
    if ((int )yych <= 81) {
      goto yy186;
    } else {

    }
    goto yy623;
  } else {
    if ((int )yych <= 104) {
      if ((int )yych <= 103) {
        goto yy186;
      } else {

      }
      goto yy622;
    } else {
      if ((int )yych == 114) {
        goto yy623;
      } else {

      }
      goto yy186;
    }
  }
  yy130: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 83) {
    if ((int )yych <= 76) {
      if ((int )yych == 70) {
        goto yy569;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 77) {
        goto yy571;
      } else {

      }
      if ((int )yych <= 78) {
        goto yy572;
      } else {

      }
      if ((int )yych <= 82) {
        goto yy186;
      } else {

      }
      goto yy573;
    }
  } else {
    if ((int )yych <= 109) {
      if ((int )yych == 102) {
        goto yy569;
      } else {

      }
      if ((int )yych <= 108) {
        goto yy186;
      } else {

      }
      goto yy571;
    } else {
      if ((int )yych <= 110) {
        goto yy572;
      } else {

      }
      if ((int )yych == 115) {
        goto yy573;
      } else {

      }
      goto yy186;
    }
  }
  yy131: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy564;
  } else {

  }
  if ((int )yych == 104) {
    goto yy564;
  } else {

  }
  goto yy186;
  yy132: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 83) {
    if ((int )yych <= 77) {
      if ((int )yych == 66) {
        goto yy546;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 78) {
        goto yy547;
      } else {

      }
      if ((int )yych <= 81) {
        goto yy186;
      } else {

      }
      if ((int )yych <= 82) {
        goto yy548;
      } else {

      }
      goto yy549;
    }
  } else {
    if ((int )yych <= 110) {
      if ((int )yych == 98) {
        goto yy546;
      } else {

      }
      if ((int )yych <= 109) {
        goto yy186;
      } else {

      }
      goto yy547;
    } else {
      if ((int )yych <= 113) {
        goto yy186;
      } else {

      }
      if ((int )yych <= 114) {
        goto yy548;
      } else {

      }
      if ((int )yych <= 115) {
        goto yy549;
      } else {

      }
      goto yy186;
    }
  }
  yy133: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 87) {
    if ((int )yych == 84) {
      goto yy534;
    } else {

    }
    if ((int )yych <= 86) {
      goto yy186;
    } else {

    }
    goto yy535;
  } else {
    if ((int )yych <= 116) {
      if ((int )yych <= 115) {
        goto yy186;
      } else {

      }
      goto yy534;
    } else {
      if ((int )yych == 119) {
        goto yy535;
      } else {

      }
      goto yy186;
    }
  }
  yy134: 
  yyaccept = 0U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 59) {
    if ((int )yych <= 34) {
      if ((int )yych <= 33) {
        goto yy186;
      } else {

      }
      goto yy526;
    } else {
      if ((int )yych == 39) {
        goto yy527;
      } else {

      }
      goto yy186;
    }
  } else {
    if ((int )yych <= 82) {
      if ((int )yych <= 60) {
        goto yy525;
      } else {

      }
      if ((int )yych <= 81) {
        goto yy186;
      } else {

      }
      goto yy528;
    } else {
      if ((int )yych == 114) {
        goto yy528;
      } else {

      }
      goto yy186;
    }
  }
  yy135: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 79) {
    if ((int )yych == 76) {
      goto yy515;
    } else {

    }
    if ((int )yych <= 78) {
      goto yy186;
    } else {

    }
    goto yy516;
  } else {
    if ((int )yych <= 108) {
      if ((int )yych <= 107) {
        goto yy186;
      } else {

      }
      goto yy515;
    } else {
      if ((int )yych == 111) {
        goto yy516;
      } else {

      }
      goto yy186;
    }
  }
  yy136: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 85) {
    if ((int )yych == 82) {
      goto yy491;
    } else {

    }
    if ((int )yych <= 84) {
      goto yy186;
    } else {

    }
    goto yy492;
  } else {
    if ((int )yych <= 114) {
      if ((int )yych <= 113) {
        goto yy186;
      } else {

      }
      goto yy491;
    } else {
      if ((int )yych == 117) {
        goto yy492;
      } else {

      }
      goto yy186;
    }
  }
  yy137: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 60) {
    if ((int )yych == 45) {
      goto yy487;
    } else {

    }
  } else {
    if ((int )yych <= 61) {
      goto yy485;
    } else {

    }
    if ((int )yych <= 62) {
      goto yy489;
    } else {

    }
  }
  yy138: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )*((char *)language_scanner_globals.yy_text + 0));
  yy139: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy484;
  yy140: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
  zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  zendlval->type = (unsigned char)6;
  while (1) {
    p___1 = (char *)language_scanner_globals.yy_text;
    boundary___1 = p___1 + language_scanner_globals.yy_leng;
    while ((unsigned int )p___1 < (unsigned int )boundary___1) {
      if ((int )*p___1 == 10) {
        (compiler_globals.zend_lineno) ++;
      } else {
        if ((int )*p___1 == 13) {
          if ((int )*(p___1 + 1) != 10) {
            (compiler_globals.zend_lineno) ++;
          } else {

          }
        } else {

        }
      }
      p___1 ++;
    }
    break;
  }
  return ((int __attribute__((__visibility__("default")))  )375);
  yy141: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 58) {
    goto yy481;
  } else {

  }
  goto yy138;
  yy142: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )384);
  yy144: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 69) {
    if ((int )yych == 65) {
      goto yy469;
    } else {

    }
    if ((int )yych <= 68) {
      goto yy186;
    } else {

    }
    goto yy470;
  } else {
    if ((int )yych <= 97) {
      if ((int )yych <= 96) {
        goto yy186;
      } else {

      }
      goto yy469;
    } else {
      if ((int )yych == 101) {
        goto yy470;
      } else {

      }
      goto yy186;
    }
  }
  yy145: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy466;
  } else {

  }
  if ((int )yych == 97) {
    goto yy466;
  } else {

  }
  goto yy186;
  yy146: 
  yyaccept = 1U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 83) {
    if ((int )yych <= 68) {
      if ((int )yych <= 32) {
        if ((int )yych == 9) {
          goto yy391;
        } else {

        }
        if ((int )yych <= 0x1F) {
          goto yy138;
        } else {

        }
        goto yy391;
      } else {
        if ((int )yych <= 64) {
          goto yy138;
        } else {

        }
        if ((int )yych == 67) {
          goto yy138;
        } else {

        }
        goto yy391;
      }
    } else {
      if ((int )yych <= 73) {
        if ((int )yych == 70) {
          goto yy391;
        } else {

        }
        if ((int )yych <= 72) {
          goto yy138;
        } else {

        }
        goto yy391;
      } else {
        if ((int )yych == 79) {
          goto yy391;
        } else {

        }
        if ((int )yych <= 81) {
          goto yy138;
        } else {

        }
        goto yy391;
      }
    }
  } else {
    if ((int )yych <= 102) {
      if ((int )yych <= 98) {
        if ((int )yych == 85) {
          goto yy391;
        } else {

        }
        if ((int )yych <= 96) {
          goto yy138;
        } else {

        }
        goto yy391;
      } else {
        if ((int )yych == 100) {
          goto yy391;
        } else {

        }
        if ((int )yych <= 101) {
          goto yy138;
        } else {

        }
        goto yy391;
      }
    } else {
      if ((int )yych <= 111) {
        if ((int )yych == 105) {
          goto yy391;
        } else {

        }
        if ((int )yych <= 110) {
          goto yy138;
        } else {

        }
        goto yy391;
      } else {
        if ((int )yych <= 115) {
          if ((int )yych <= 113) {
            goto yy138;
          } else {

          }
          goto yy391;
        } else {
          if ((int )yych == 117) {
            goto yy391;
          } else {

          }
          goto yy138;
        }
      }
    }
  }
  yy147: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 83) {
    if ((int )yych == 78) {
      goto yy382;
    } else {

    }
    if ((int )yych <= 82) {
      goto yy186;
    } else {

    }
    goto yy383;
  } else {
    if ((int )yych <= 110) {
      if ((int )yych <= 109) {
        goto yy186;
      } else {

      }
      goto yy382;
    } else {
      if ((int )yych == 115) {
        goto yy383;
      } else {

      }
      goto yy186;
    }
  }
  yy148: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 95) {
    goto yy300;
  } else {

  }
  goto yy186;
  yy149: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 60) {
    goto yy138;
  } else {

  }
  if ((int )yych <= 61) {
    goto yy294;
  } else {

  }
  if ((int )yych <= 62) {
    goto yy296;
  } else {

  }
  goto yy138;
  yy150: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy290;
  } else {

  }
  if ((int )yych == 105) {
    goto yy290;
  } else {

  }
  goto yy186;
  yy151: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 43) {
    goto yy288;
  } else {

  }
  if ((int )yych == 61) {
    goto yy286;
  } else {

  }
  goto yy138;
  yy152: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 61) {
    goto yy283;
  } else {

  }
  goto yy138;
  yy153: 
  yyaccept = 1U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 59) {
    if ((int )yych == 47) {
      goto yy255;
    } else {

    }
    goto yy138;
  } else {
    if ((int )yych <= 60) {
      goto yy253;
    } else {

    }
    if ((int )yych <= 61) {
      goto yy256;
    } else {

    }
    if ((int )yych <= 62) {
      goto yy258;
    } else {

    }
    goto yy138;
  }
  yy154: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 60) {
    goto yy138;
  } else {

  }
  if ((int )yych <= 61) {
    goto yy249;
  } else {

  }
  if ((int )yych <= 62) {
    goto yy247;
  } else {

  }
  goto yy138;
  yy155: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 61) {
    goto yy245;
  } else {

  }
  goto yy138;
  yy156: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 46) {
    if ((int )yych == 42) {
      goto yy237;
    } else {

    }
    goto yy138;
  } else {
    if ((int )yych <= 47) {
      goto yy239;
    } else {

    }
    if ((int )yych == 61) {
      goto yy240;
    } else {

    }
    goto yy138;
  }
  yy157: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 47) {
    goto yy138;
  } else {

  }
  if ((int )yych <= 57) {
    goto yy233;
  } else {

  }
  if ((int )yych == 61) {
    goto yy235;
  } else {

  }
  goto yy138;
  yy158: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 60) {
    goto yy138;
  } else {

  }
  if ((int )yych <= 61) {
    goto yy229;
  } else {

  }
  if ((int )yych <= 62) {
    goto yy227;
  } else {

  }
  goto yy138;
  yy159: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 38) {
    goto yy223;
  } else {

  }
  if ((int )yych == 61) {
    goto yy225;
  } else {

  }
  goto yy138;
  yy160: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 61) {
    goto yy221;
  } else {

  }
  if ((int )yych == 124) {
    goto yy219;
  } else {

  }
  goto yy138;
  yy161: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 61) {
    goto yy217;
  } else {

  }
  goto yy138;
  yy162: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy215;
  } else {

  }
  if ((int )yych == 114) {
    goto yy215;
  } else {

  }
  goto yy186;
  yy163: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy212;
  } else {

  }
  if ((int )yych == 111) {
    goto yy212;
  } else {

  }
  goto yy186;
  yy164: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy138;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy209;
    } else {

    }
    if ((int )yych <= 94) {
      goto yy138;
    } else {

    }
    goto yy209;
  } else {
    if ((int )yych <= 96) {
      goto yy138;
    } else {

    }
    if ((int )yych <= 122) {
      goto yy209;
    } else {

    }
    if ((int )yych <= 126) {
      goto yy138;
    } else {

    }
    goto yy209;
  }
  yy165: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy138;
  yy166: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 62) {
    goto yy205;
  } else {

  }
  goto yy138;
  yy167: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  _yy_push_state(0);
  return ((int __attribute__((__visibility__("default")))  )'{');
  yy169: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (compiler_globals.doc_comment) {
    _efree((void *)compiler_globals.doc_comment);
    compiler_globals.doc_comment = (char *)((void *)0);
  } else {

  }
  compiler_globals.doc_comment_len = 0U;
  tmp___18 = zend_stack_is_empty((zend_stack const   *)(& language_scanner_globals.state_stack));
  if (tmp___18) {

  } else {
    yy_pop_state();
  }
  return ((int __attribute__((__visibility__("default")))  )'}');
  yy171: 
  yyaccept = 2U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 69) {
    if ((int )yych <= 57) {
      if ((int )yych == 46) {
        goto yy187;
      } else {

      }
      if ((int )yych >= 48) {
        goto yy190;
      } else {

      }
    } else {
      if ((int )yych == 66) {
        goto yy198;
      } else {

      }
      if ((int )yych >= 69) {
        goto yy192;
      } else {

      }
    }
  } else {
    if ((int )yych <= 98) {
      if ((int )yych == 88) {
        goto yy197;
      } else {

      }
      if ((int )yych >= 98) {
        goto yy198;
      } else {

      }
    } else {
      if ((int )yych <= 101) {
        if ((int )yych >= 101) {
          goto yy192;
        } else {

        }
      } else {
        if ((int )yych == 120) {
          goto yy197;
        } else {

        }
      }
    }
  }
  yy172: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.yy_leng < 10U) {
    zendlval->value.lval = strtol((char const   */* __restrict  */)((char *)language_scanner_globals.yy_text), (char **/* __restrict  */)((void *)0), 0);
  } else {
    tmp___19 = __errno_location();
    *tmp___19 = 0;
    zendlval->value.lval = strtol((char const   */* __restrict  */)((char *)language_scanner_globals.yy_text), (char **/* __restrict  */)((void *)0), 0);
    tmp___22 = __errno_location();
    if (*tmp___22 == 34) {
      if ((int )*((char *)language_scanner_globals.yy_text + 0) == 48) {
        tmp___20 = zend_oct_strtod((char const   *)((char *)language_scanner_globals.yy_text), (char const   **)((void *)0));
        zendlval->value.dval = (double )tmp___20;
      } else {
        tmp___21 = zend_strtod((char const   *)((char *)language_scanner_globals.yy_text), (char const   **)((void *)0));
        zendlval->value.dval = (double )tmp___21;
      }
      zendlval->type = (unsigned char)2;
      return ((int __attribute__((__visibility__("default")))  )306);
    } else {

    }
  }
  zendlval->type = (unsigned char)1;
  return ((int __attribute__((__visibility__("default")))  )305);
  yy173: 
  yyaccept = 2U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 57) {
    if ((int )yych == 46) {
      goto yy187;
    } else {

    }
    if ((int )yych <= 47) {
      goto yy172;
    } else {

    }
    goto yy190;
  } else {
    if ((int )yych <= 69) {
      if ((int )yych <= 68) {
        goto yy172;
      } else {

      }
      goto yy192;
    } else {
      if ((int )yych == 101) {
        goto yy192;
      } else {

      }
      goto yy172;
    }
  }
  yy174: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy186;
  yy175: 
  (language_scanner_globals.yy_cursor) ++;
  yy176: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
    tmp___23 = language_scanner_globals.yy_cursor;
    (language_scanner_globals.yy_cursor) ++;
    switch ((int )*tmp___23) {
    case 13: 
    if ((int )*(language_scanner_globals.yy_cursor) == 10) {
      (language_scanner_globals.yy_cursor) ++;
    } else {

    }
    case 10: 
    (compiler_globals.zend_lineno) ++;
    break;
    case 37: 
    if (! compiler_globals.asp_tags) {
      continue;
    } else {

    }
    case 63: 
    if ((int )*(language_scanner_globals.yy_cursor) == 62) {
      (language_scanner_globals.yy_cursor) --;
      break;
    } else {

    }
    default: ;
    continue;
    }
    break;
  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )370);
  yy177: 
  (language_scanner_globals.yy_cursor) ++;
  yy178: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if ((int )*((char *)language_scanner_globals.yy_text + 0) != 39) {
    tmp___24 = 1;
  } else {
    tmp___24 = 0;
  }
  bprefix = tmp___24;
  while (1) {
    if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
      if ((int )*(language_scanner_globals.yy_cursor) == 39) {
        (language_scanner_globals.yy_cursor) ++;
        language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
        break;
      } else {
        tmp___25 = language_scanner_globals.yy_cursor;
        (language_scanner_globals.yy_cursor) ++;
        if ((int )*tmp___25 == 92) {
          if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
            (language_scanner_globals.yy_cursor) ++;
          } else {

          }
        } else {

        }
      }
    } else {
      language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_limit - language_scanner_globals.yy_text);
      return ((int __attribute__((__visibility__("default")))  )314);
    }
  }
  tmp___26 = _estrndup((char const   *)(((char *)language_scanner_globals.yy_text + bprefix) + 1), (language_scanner_globals.yy_leng - (unsigned int )bprefix) - 2U);
  zendlval->value.str.val = (char *)tmp___26;
  zendlval->value.str.len = (int )((language_scanner_globals.yy_leng - (unsigned int )bprefix) - 2U);
  zendlval->type = (unsigned char)6;
  t = zendlval->value.str.val;
  s = t;
  if ((int )yych == 78) {
    goto yy659;
  } else {

  }
  while ((unsigned int )s < (unsigned int )end___0) {
    if ((int )*s == 92) {
      s ++;
      switch ((int )*s) {
      case 92: 
      case 39: 
      tmp___27 = t;
      t ++;
      *tmp___27 = *s;
      (zendlval->value.str.len) --;
      break;
      default: 
      tmp___28 = t;
      t ++;
      *tmp___28 = (char )'\\';
      tmp___29 = t;
      t ++;
      *tmp___29 = *s;
      break;
      }
    } else {
      tmp___30 = t;
      t ++;
      *tmp___30 = *s;
    }
    if ((int )*s == 10) {
      (compiler_globals.zend_lineno) ++;
    } else {
      if ((int )*s == 13) {
        if ((int )*(s + 1) != 10) {
          (compiler_globals.zend_lineno) ++;
        } else {

        }
      } else {

      }
    }
    s ++;
  }
  *t = (char)0;
  if (language_scanner_globals.output_filter) {
    sz___10 = (size_t )0;
    s = zendlval->value.str.val;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___10, (unsigned char const   *)((unsigned char *)s), (unsigned int )zendlval->value.str.len);
    zendlval->value.str.len = (int )sz___10;
    _efree((void *)s);
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )315);
  yy179: 
  (language_scanner_globals.yy_cursor) ++;
  yy180: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if ((int )*((char *)language_scanner_globals.yy_text + 0) != 34) {
    tmp___31 = 1;
  } else {
    tmp___31 = 0;
  }
  bprefix___0 = tmp___31;
  while ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
    tmp___32 = language_scanner_globals.yy_cursor;
    (language_scanner_globals.yy_cursor) ++;
    switch ((int )*tmp___32) {
    case 34: 
    language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
    zend_scan_escape_string(zendlval, ((char *)language_scanner_globals.yy_text + bprefix___0) + 1, (int )((language_scanner_globals.yy_leng - (unsigned int )bprefix___0) - 2U), (char )'\"');
    return ((int __attribute__((__visibility__("default")))  )315);
    case 36: 
    if ((int )*(language_scanner_globals.yy_cursor) >= 97) {
      if ((int )*(language_scanner_globals.yy_cursor) <= 122) {
        break;
      } else {
        goto _L___10;
      }
    } else {
      _L___10: /* CIL Label */ 
      if ((int )*(language_scanner_globals.yy_cursor) >= 65) {
        if ((int )*(language_scanner_globals.yy_cursor) <= 90) {
          break;
        } else {
          goto _L___9;
        }
      } else {
        _L___9: /* CIL Label */ 
        if ((int )*(language_scanner_globals.yy_cursor) == 95) {
          break;
        } else {
          if ((int )*(language_scanner_globals.yy_cursor) >= 0x7F) {
            break;
          } else {
            if ((int )*(language_scanner_globals.yy_cursor) == 123) {
              break;
            } else {

            }
          }
        }
      }
    }
    continue;
    case 123: 
    if ((int )*(language_scanner_globals.yy_cursor) == 36) {
      break;
    } else {

    }
    continue;
    case 92: 
    if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
      (language_scanner_globals.yy_cursor) ++;
    } else {

    }
    default: ;
    continue;
    }
    (language_scanner_globals.yy_cursor) --;
    break;
  }
  compiler_globals.doc_comment_len = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text) - language_scanner_globals.yy_leng;
  language_scanner_globals.yy_cursor = language_scanner_globals.yy_text + language_scanner_globals.yy_leng;
  language_scanner_globals.yy_state = 3;
  return ((int __attribute__((__visibility__("default")))  )'\"');
  yy181: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  language_scanner_globals.yy_state = 2;
  return ((int __attribute__((__visibility__("default")))  )'`');
  yy183: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if ((unsigned int )language_scanner_globals.yy_cursor > (unsigned int )language_scanner_globals.yy_limit) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  zend_error(1 << 7L, "Unexpected character in input:  \'%c\' (ASCII=%d) state=%d", *((char *)language_scanner_globals.yy_text + 0), *((char *)language_scanner_globals.yy_text + 0), language_scanner_globals.yy_state);
  goto restart;
  yy185: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy186: ;
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  goto yy124;
  yy187: 
  yyaccept = 3U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 8) {
    goto yy187;
  } else {

  }
  if ((int )yych == 69) {
    goto yy192;
  } else {

  }
  if ((int )yych == 101) {
    goto yy192;
  } else {

  }
  yy189: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  tmp___33 = zend_strtod((char const   *)((char *)language_scanner_globals.yy_text), (char const   **)((void *)0));
  zendlval->value.dval = (double )tmp___33;
  zendlval->type = (unsigned char)2;
  return ((int __attribute__((__visibility__("default")))  )306);
  yy190: 
  yyaccept = 2U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 57) {
    if ((int )yych == 46) {
      goto yy187;
    } else {

    }
    if ((int )yych <= 47) {
      goto yy172;
    } else {

    }
    goto yy190;
  } else {
    if ((int )yych <= 69) {
      if ((int )yych <= 68) {
        goto yy172;
      } else {

      }
    } else {
      if ((int )yych != 101) {
        goto yy172;
      } else {

      }
    }
  }
  yy192: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 44) {
    if ((int )yych == 43) {
      goto yy194;
    } else {

    }
  } else {
    if ((int )yych <= 45) {
      goto yy194;
    } else {

    }
    if ((int )yych <= 47) {
      goto yy193;
    } else {

    }
    if ((int )yych <= 57) {
      goto yy195;
    } else {

    }
  }
  yy193: 
  language_scanner_globals.yy_cursor = language_scanner_globals.yy_marker;
  if (yyaccept <= 2U) {
    if (yyaccept <= 1U) {
      if (yyaccept <= 0U) {
        goto yy124;
      } else {
        goto yy138;
      }
    } else {
      goto yy172;
    }
  } else {
    if (yyaccept <= 4U) {
      if (yyaccept <= 3U) {
        goto yy189;
      } else {
        goto yy238;
      }
    } else {
      goto yy254;
    }
  }
  yy194: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 47) {
    goto yy193;
  } else {

  }
  if ((int )yych >= 58) {
    goto yy193;
  } else {

  }
  yy195: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 47) {
    goto yy189;
  } else {

  }
  if ((int )yych <= 57) {
    goto yy195;
  } else {

  }
  goto yy189;
  yy197: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 32) {
    goto yy202;
  } else {

  }
  goto yy193;
  yy198: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 16) {
    goto yy199;
  } else {

  }
  goto yy193;
  yy199: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 16) {
    goto yy199;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  bin = (char *)language_scanner_globals.yy_text + 2;
  len = (int )(language_scanner_globals.yy_leng - 2U);
  while ((int )*bin == 48) {
    bin ++;
    len --;
  }
  if (len < 32) {
    zendlval->value.lval = strtol((char const   */* __restrict  */)bin, (char **/* __restrict  */)((void *)0), 2);
    zendlval->type = (unsigned char)1;
    return ((int __attribute__((__visibility__("default")))  )305);
  } else {
    tmp___34 = zend_bin_strtod((char const   *)bin, (char const   **)((void *)0));
    zendlval->value.dval = (double )tmp___34;
    zendlval->type = (unsigned char)2;
    return ((int __attribute__((__visibility__("default")))  )306);
  }
  yy202: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 32) {
    goto yy202;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  hex = (char *)language_scanner_globals.yy_text + 2;
  len___0 = (int )(language_scanner_globals.yy_leng - 2U);
  while ((int )*hex == 48) {
    hex ++;
    len___0 --;
  }
  if (len___0 < 8) {
    goto _L___11;
  } else {
    if (len___0 == 8) {
      if ((int )*hex <= 55) {
        _L___11: /* CIL Label */ 
        if (len___0 == 0) {
          zendlval->value.lval = 0L;
        } else {
          zendlval->value.lval = strtol((char const   */* __restrict  */)hex, (char **/* __restrict  */)((void *)0), 16);
        }
        zendlval->type = (unsigned char)1;
        return ((int __attribute__((__visibility__("default")))  )305);
      } else {
        tmp___35 = zend_hex_strtod((char const   *)hex, (char const   **)((void *)0));
        zendlval->value.dval = (double )tmp___35;
        zendlval->type = (unsigned char)2;
        return ((int __attribute__((__visibility__("default")))  )306);
      }
    } else {
      tmp___35 = zend_hex_strtod((char const   *)hex, (char const   **)((void *)0));
      zendlval->value.dval = (double )tmp___35;
      zendlval->type = (unsigned char)2;
      return ((int __attribute__((__visibility__("default")))  )306);
    }
  }
  yy205: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 10) {
    goto yy207;
  } else {

  }
  if ((int )yych == 13) {
    goto yy208;
  } else {

  }
  yy206: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
  zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  zendlval->type = (unsigned char)6;
  language_scanner_globals.yy_state = 7;
  return ((int __attribute__((__visibility__("default")))  )374);
  yy207: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy206;
  yy208: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 10) {
    goto yy207;
  } else {

  }
  goto yy206;
  yy209: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 94) {
    if ((int )yych <= 57) {
      if ((int )yych >= 48) {
        goto yy209;
      } else {

      }
    } else {
      if ((int )yych <= 64) {
        goto yy211;
      } else {

      }
      if ((int )yych <= 90) {
        goto yy209;
      } else {

      }
    }
  } else {
    if ((int )yych <= 96) {
      if ((int )yych <= 95) {
        goto yy209;
      } else {

      }
    } else {
      if ((int )yych <= 122) {
        goto yy209;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy209;
      } else {

      }
    }
  }
  yy211: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___11 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___11, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___11;
  } else {
    tmp___36 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___36;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yy212: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy213;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy213: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )264);
  yy215: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )263);
  yy217: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )269);
  yy219: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )278);
  yy221: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )270);
  yy223: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )279);
  yy225: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )271);
  yy227: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 10) {
    goto yy231;
  } else {

  }
  if ((int )yych == 13) {
    goto yy232;
  } else {

  }
  yy228: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (compiler_globals.asp_tags) {
    language_scanner_globals.yy_state = 7;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
    zendlval->type = (unsigned char)6;
    zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
    return ((int __attribute__((__visibility__("default")))  )374);
  } else {
    while (1) {
      language_scanner_globals.yy_cursor = (unsigned char *)((char *)language_scanner_globals.yy_text) + 1;
      language_scanner_globals.yy_leng = 1U;
      break;
    }
    return ((int __attribute__((__visibility__("default")))  )*((char *)language_scanner_globals.yy_text + 0));
  }
  yy229: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )272);
  yy231: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy228;
  yy232: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 10) {
    goto yy231;
  } else {

  }
  goto yy228;
  yy233: 
  yyaccept = 3U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 68) {
    if ((int )yych <= 47) {
      goto yy189;
    } else {

    }
    if ((int )yych <= 57) {
      goto yy233;
    } else {

    }
    goto yy189;
  } else {
    if ((int )yych <= 69) {
      goto yy192;
    } else {

    }
    if ((int )yych == 101) {
      goto yy192;
    } else {

    }
    goto yy189;
  }
  yy235: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )273);
  yy237: 
  yyaccept = 4U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych == 42) {
    goto yy242;
  } else {

  }
  yy238: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.yy_leng > 2U) {
    doc_com = 1;
    if (compiler_globals.doc_comment) {
      _efree((void *)compiler_globals.doc_comment);
      compiler_globals.doc_comment = (char *)((void *)0);
    } else {

    }
    compiler_globals.doc_comment_len = 0U;
  } else {
    doc_com = 0;
  }
  while ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
    tmp___37 = language_scanner_globals.yy_cursor;
    (language_scanner_globals.yy_cursor) ++;
    if ((int )*tmp___37 == 42) {
      if ((int )*(language_scanner_globals.yy_cursor) == 47) {
        break;
      } else {

      }
    } else {

    }
  }
  if ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
    (language_scanner_globals.yy_cursor) ++;
  } else {
    zend_error(1 << 7L, "Unterminated comment starting line %d", compiler_globals.zend_lineno);
  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    p___2 = (char *)language_scanner_globals.yy_text;
    boundary___2 = p___2 + language_scanner_globals.yy_leng;
    while ((unsigned int )p___2 < (unsigned int )boundary___2) {
      if ((int )*p___2 == 10) {
        (compiler_globals.zend_lineno) ++;
      } else {
        if ((int )*p___2 == 13) {
          if ((int )*(p___2 + 1) != 10) {
            (compiler_globals.zend_lineno) ++;
          } else {

          }
        } else {

        }
      }
      p___2 ++;
    }
    break;
  }
  if (doc_com) {
    tmp___38 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
    compiler_globals.doc_comment = (char *)tmp___38;
    compiler_globals.doc_comment_len = language_scanner_globals.yy_leng;
    return ((int __attribute__((__visibility__("default")))  )371);
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )370);
  yy239: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy176;
  yy240: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )274);
  yy242: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 64) {
    goto yy243;
  } else {

  }
  goto yy193;
  yy243: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 64) {
    goto yy243;
  } else {

  }
  goto yy238;
  yy245: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )275);
  yy247: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 61) {
    goto yy251;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )286);
  yy249: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )284);
  yy251: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )267);
  yy253: 
  yyaccept = 5U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 59) {
    goto yy254;
  } else {

  }
  if ((int )yych <= 60) {
    goto yy269;
  } else {

  }
  if ((int )yych <= 61) {
    goto yy267;
  } else {

  }
  yy254: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )287);
  yy255: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy260;
  } else {

  }
  if ((int )yych == 115) {
    goto yy260;
  } else {

  }
  goto yy193;
  yy256: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )285);
  yy258: 
  (language_scanner_globals.yy_cursor) ++;
  yy259: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )282);
  yy260: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy261;
  } else {

  }
  if ((int )yych != 99) {
    goto yy193;
  } else {

  }
  yy261: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy262;
  } else {

  }
  if ((int )yych != 114) {
    goto yy193;
  } else {

  }
  yy262: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy263;
  } else {

  }
  if ((int )yych != 105) {
    goto yy193;
  } else {

  }
  yy263: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy264;
  } else {

  }
  if ((int )yych != 112) {
    goto yy193;
  } else {

  }
  yy264: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy265;
  } else {

  }
  if ((int )yych != 116) {
    goto yy193;
  } else {

  }
  yy265: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 13) {
    if ((int )yych <= 0x08) {
      goto yy193;
    } else {

    }
    if ((int )yych <= 10) {
      goto yy265;
    } else {

    }
    if ((int )yych <= 12) {
      goto yy193;
    } else {

    }
    goto yy265;
  } else {
    if ((int )yych <= 32) {
      if ((int )yych <= 0x1F) {
        goto yy193;
      } else {

      }
      goto yy265;
    } else {
      if ((int )yych == 62) {
        goto yy205;
      } else {

      }
      goto yy193;
    }
  }
  yy267: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )268);
  yy269: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 2) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 128) {
    goto yy269;
  } else {

  }
  if ((int )yych <= 90) {
    if ((int )yych <= 38) {
      if ((int )yych == 34) {
        goto yy274;
      } else {

      }
      goto yy193;
    } else {
      if ((int )yych <= 39) {
        goto yy273;
      } else {

      }
      if ((int )yych <= 64) {
        goto yy193;
      } else {

      }
    }
  } else {
    if ((int )yych <= 96) {
      if ((int )yych != 95) {
        goto yy193;
      } else {

      }
    } else {
      if ((int )yych <= 122) {
        goto yy271;
      } else {

      }
      if ((int )yych <= 126) {
        goto yy193;
      } else {

      }
    }
  }
  yy271: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 2) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 64) {
    if ((int )yych <= 12) {
      if ((int )yych == 10) {
        goto yy278;
      } else {

      }
      goto yy193;
    } else {
      if ((int )yych <= 13) {
        goto yy280;
      } else {

      }
      if ((int )yych <= 47) {
        goto yy193;
      } else {

      }
      if ((int )yych <= 57) {
        goto yy271;
      } else {

      }
      goto yy193;
    }
  } else {
    if ((int )yych <= 95) {
      if ((int )yych <= 90) {
        goto yy271;
      } else {

      }
      if ((int )yych <= 94) {
        goto yy193;
      } else {

      }
      goto yy271;
    } else {
      if ((int )yych <= 96) {
        goto yy193;
      } else {

      }
      if ((int )yych <= 122) {
        goto yy271;
      } else {

      }
      if ((int )yych <= 126) {
        goto yy193;
      } else {

      }
      goto yy271;
    }
  }
  yy273: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 39) {
    goto yy193;
  } else {

  }
  if ((int )yych <= 47) {
    goto yy282;
  } else {

  }
  if ((int )yych <= 57) {
    goto yy193;
  } else {

  }
  goto yy282;
  yy274: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 34) {
    goto yy193;
  } else {

  }
  if ((int )yych <= 47) {
    goto yy276;
  } else {

  }
  if ((int )yych <= 57) {
    goto yy193;
  } else {

  }
  goto yy276;
  yy275: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy276: ;
  if ((int )yych <= 90) {
    if ((int )yych <= 47) {
      if ((int )yych != 34) {
        goto yy193;
      } else {

      }
    } else {
      if ((int )yych <= 57) {
        goto yy275;
      } else {

      }
      if ((int )yych <= 64) {
        goto yy193;
      } else {

      }
      goto yy275;
    }
  } else {
    if ((int )yych <= 96) {
      if ((int )yych == 95) {
        goto yy275;
      } else {

      }
      goto yy193;
    } else {
      if ((int )yych <= 122) {
        goto yy275;
      } else {

      }
      if ((int )yych <= 126) {
        goto yy193;
      } else {

      }
      goto yy275;
    }
  }
  yy277: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 10) {
    goto yy278;
  } else {

  }
  if ((int )yych == 13) {
    goto yy280;
  } else {

  }
  goto yy193;
  yy278: 
  (language_scanner_globals.yy_cursor) ++;
  yy279: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if ((int )*((char *)language_scanner_globals.yy_text + 0) != 60) {
    tmp___39 = 1;
  } else {
    tmp___39 = 0;
  }
  bprefix___1 = tmp___39;
  zendlval->value.str.val = compiler_globals.heredoc;
  zendlval->value.str.len = compiler_globals.heredoc_len;
  (compiler_globals.zend_lineno) ++;
  if ((int )*((char *)language_scanner_globals.yy_text + (language_scanner_globals.yy_leng - 2U)) == 13) {
    tmp___40 = 1;
  } else {
    tmp___40 = 0;
  }
  compiler_globals.heredoc_len = (int )((((language_scanner_globals.yy_leng - (unsigned int )bprefix___1) - 3U) - 1U) - (unsigned int )tmp___40);
  s___0 = ((char *)language_scanner_globals.yy_text + bprefix___1) + 3;
  while (1) {
    if ((int )*s___0 == 32) {

    } else {
      if ((int )*s___0 == 9) {

      } else {
        break;
      }
    }
    s___0 ++;
    (compiler_globals.heredoc_len) --;
  }
  if ((int )*s___0 == 39) {
    s___0 ++;
    compiler_globals.heredoc_len -= 2;
    language_scanner_globals.yy_state = 9;
  } else {
    if ((int )*s___0 == 34) {
      s___0 ++;
      compiler_globals.heredoc_len -= 2;
    } else {

    }
    language_scanner_globals.yy_state = 4;
  }
  tmp___41 = _estrndup((char const   *)s___0, (unsigned int )compiler_globals.heredoc_len);
  compiler_globals.heredoc = (char *)tmp___41;
  if (compiler_globals.heredoc_len < language_scanner_globals.yy_limit - language_scanner_globals.yy_cursor) {
    tmp___42 = memcmp((void const   *)language_scanner_globals.yy_cursor, (void const   *)s___0, (unsigned int )compiler_globals.heredoc_len);
    if (tmp___42) {

    } else {
      end___1 = language_scanner_globals.yy_cursor + compiler_globals.heredoc_len;
      if ((int )*end___1 == 59) {
        end___1 ++;
      } else {

      }
      if ((int )*end___1 == 10) {
        language_scanner_globals.yy_state = 8;
      } else {
        if ((int )*end___1 == 13) {
          language_scanner_globals.yy_state = 8;
        } else {

        }
      }
    }
  } else {

  }
  return ((int __attribute__((__visibility__("default")))  )376);
  yy280: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 10) {
    goto yy278;
  } else {

  }
  goto yy279;
  yy281: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy282: ;
  if ((int )yych <= 90) {
    if ((int )yych <= 47) {
      if ((int )yych == 39) {
        goto yy277;
      } else {

      }
      goto yy193;
    } else {
      if ((int )yych <= 57) {
        goto yy281;
      } else {

      }
      if ((int )yych <= 64) {
        goto yy193;
      } else {

      }
      goto yy281;
    }
  } else {
    if ((int )yych <= 96) {
      if ((int )yych == 95) {
        goto yy281;
      } else {

      }
      goto yy193;
    } else {
      if ((int )yych <= 122) {
        goto yy281;
      } else {

      }
      if ((int )yych <= 126) {
        goto yy193;
      } else {

      }
      goto yy281;
    }
  }
  yy283: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 61) {
    goto yy259;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )280);
  yy286: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )277);
  yy288: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )297);
  yy290: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy291;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy291: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy292;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy292: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )361);
  yy294: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 61) {
    goto yy298;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )283);
  yy296: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )360);
  yy298: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )281);
  yy300: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  switch ((int )yych) {
  case 67: 
  case 99: 
  goto yy302;
  case 68: 
  case 100: 
  goto yy307;
  case 70: 
  case 102: 
  goto yy304;
  case 72: 
  case 104: 
  goto yy301;
  case 76: 
  case 108: 
  goto yy306;
  case 77: 
  case 109: 
  goto yy305;
  case 78: 
  case 110: 
  goto yy308;
  case 84: 
  case 116: 
  goto yy303;
  default: ;
  goto yy186;
  }
  yy301: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy369;
  } else {

  }
  if ((int )yych == 97) {
    goto yy369;
  } else {

  }
  goto yy186;
  yy302: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy362;
  } else {

  }
  if ((int )yych == 108) {
    goto yy362;
  } else {

  }
  goto yy186;
  yy303: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy355;
  } else {

  }
  if ((int )yych == 114) {
    goto yy355;
  } else {

  }
  goto yy186;
  yy304: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 85) {
    if ((int )yych == 73) {
      goto yy339;
    } else {

    }
    if ((int )yych <= 84) {
      goto yy186;
    } else {

    }
    goto yy340;
  } else {
    if ((int )yych <= 105) {
      if ((int )yych <= 104) {
        goto yy186;
      } else {

      }
      goto yy339;
    } else {
      if ((int )yych == 117) {
        goto yy340;
      } else {

      }
      goto yy186;
    }
  }
  yy305: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy331;
  } else {

  }
  if ((int )yych == 101) {
    goto yy331;
  } else {

  }
  goto yy186;
  yy306: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy325;
  } else {

  }
  if ((int )yych == 105) {
    goto yy325;
  } else {

  }
  goto yy186;
  yy307: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy320;
  } else {

  }
  if ((int )yych == 105) {
    goto yy320;
  } else {

  }
  goto yy186;
  yy308: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy309;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy309: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 77) {
    goto yy310;
  } else {

  }
  if ((int )yych != 109) {
    goto yy186;
  } else {

  }
  yy310: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy311;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy311: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy312;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy312: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy313;
  } else {

  }
  if ((int )yych != 112) {
    goto yy186;
  } else {

  }
  yy313: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy314;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy314: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy315;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy315: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy316;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy316: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (compiler_globals.current_namespace) {
    *zendlval = *(compiler_globals.current_namespace);
    _zval_copy_ctor(zendlval);
  } else {
    while (1) {
      __z = zendlval;
      __z->value.str.len = 0;
      tmp___43 = _estrndup("", sizeof("") - 1U);
      __z->value.str.val = (char *)tmp___43;
      __z->type = (unsigned char)6;
      break;
    }
  }
  return ((int __attribute__((__visibility__("default")))  )382);
  yy320: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy321;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy321: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  tmp___44 = zend_get_compiled_filename();
  filename = (char *)tmp___44;
  tmp___45 = strlen((char const   *)filename);
  filename_len = tmp___45;
  if (! filename) {
    filename = (char *)"";
  } else {

  }
  tmp___46 = _estrndup((char const   *)filename, filename_len);
  dirname = (char *)tmp___46;
  zend_dirname(dirname, filename_len);
  if (0) {
    __s1_len = strlen((char const   *)dirname);
    __s2_len = strlen(".");
    if (! ((unsigned int )((void const   *)(dirname + 1)) - (unsigned int )((void const   *)dirname) == 1U)) {
      goto _L___13;
    } else {
      if (__s1_len >= 4U) {
        _L___13: /* CIL Label */ 
        if (! ((unsigned int )((void const   *)("." + 1)) - (unsigned int )((void const   *)".") == 1U)) {
          tmp___54 = 1;
        } else {
          if (__s2_len >= 4U) {
            tmp___54 = 1;
          } else {
            tmp___54 = 0;
          }
        }
      } else {
        tmp___54 = 0;
      }
    }
    if (tmp___54) {
      tmp___49 = __builtin_strcmp((char const   *)dirname, ".");
      tmp___53 = tmp___49;
    } else {
      tmp___52 = __builtin_strcmp((char const   *)dirname, ".");
      tmp___53 = tmp___52;
    }
  } else {
    tmp___52 = __builtin_strcmp((char const   *)dirname, ".");
    tmp___53 = tmp___52;
  }
  if (tmp___53 == 0) {
    tmp___47 = _erealloc((void *)dirname, 4096U, 0);
    dirname = (char *)tmp___47;
    getcwd(dirname, 4096U);
  } else {

  }
  tmp___55 = strlen((char const   *)dirname);
  zendlval->value.str.len = (int )tmp___55;
  zendlval->value.str.val = dirname;
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )383);
  yy325: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy326;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy326: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy327;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy327: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.lval = (long )compiler_globals.zend_lineno;
  zendlval->type = (unsigned char)1;
  return ((int __attribute__((__visibility__("default")))  )368);
  yy331: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy332;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy332: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy333;
  } else {

  }
  if ((int )yych != 104) {
    goto yy186;
  } else {

  }
  yy333: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy334;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy334: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 68) {
    goto yy335;
  } else {

  }
  if ((int )yych != 100) {
    goto yy186;
  } else {

  }
  yy335: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (compiler_globals.active_class_entry) {
    tmp___56 = (compiler_globals.active_class_entry)->name;
  } else {
    tmp___56 = (char const   *)((void *)0);
  }
  class_name = tmp___56;
  if (compiler_globals.active_op_array) {
    tmp___57 = (compiler_globals.active_op_array)->function_name;
  } else {
    tmp___57 = (char const   *)((void *)0);
  }
  func_name = tmp___57;
  len___1 = (size_t )0;
  if (class_name) {
    tmp___58 = strlen(class_name);
    len___1 += tmp___58 + 2U;
  } else {

  }
  if (func_name) {
    tmp___59 = strlen(func_name);
    len___1 += tmp___59;
  } else {

  }
  if (func_name) {
    tmp___60 = func_name;
  } else {
    tmp___60 = "";
  }
  if (class_name) {
    if (func_name) {
      tmp___61 = "::";
    } else {
      tmp___61 = "";
    }
  } else {
    tmp___61 = "";
  }
  if (class_name) {
    tmp___62 = class_name;
  } else {
    tmp___62 = "";
  }
  zendlval->value.str.len = zend_spprintf(& zendlval->value.str.val, 0, (char *)"%s%s%s", tmp___62, tmp___61, tmp___60);
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )366);
  yy339: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy350;
  } else {

  }
  if ((int )yych == 108) {
    goto yy350;
  } else {

  }
  goto yy186;
  yy340: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy341;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy341: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy342;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy342: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy343;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy343: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy344;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy344: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy345;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy345: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy346;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy346: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  func_name___0 = (char const   *)((void *)0);
  if (compiler_globals.active_op_array) {
    func_name___0 = (compiler_globals.active_op_array)->function_name;
  } else {

  }
  if (! func_name___0) {
    func_name___0 = "";
  } else {

  }
  tmp___63 = strlen(func_name___0);
  zendlval->value.str.len = (int )tmp___63;
  tmp___64 = _estrndup(func_name___0, (unsigned int )zendlval->value.str.len);
  zendlval->value.str.val = (char *)tmp___64;
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )367);
  yy350: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy351;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy351: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  tmp___65 = zend_get_compiled_filename();
  filename___0 = (char *)tmp___65;
  if (! filename___0) {
    filename___0 = (char *)"";
  } else {

  }
  tmp___66 = strlen((char const   *)filename___0);
  zendlval->value.str.len = (int )tmp___66;
  tmp___67 = _estrndup((char const   *)filename___0, (unsigned int )zendlval->value.str.len);
  zendlval->value.str.val = (char *)tmp___67;
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )369);
  yy355: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy356;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy356: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy357;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy357: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy358;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy358: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  trait_name = (char const   *)((void *)0);
  if (compiler_globals.active_class_entry) {
    if (288U == ((compiler_globals.active_class_entry)->ce_flags & 288U)) {
      trait_name = (compiler_globals.active_class_entry)->name;
    } else {

    }
  } else {

  }
  if (! trait_name) {
    trait_name = "";
  } else {

  }
  tmp___68 = strlen(trait_name);
  zendlval->value.str.len = (int )tmp___68;
  tmp___69 = _estrndup(trait_name, (unsigned int )zendlval->value.str.len);
  zendlval->value.str.val = (char *)tmp___69;
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )365);
  yy362: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy363;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy363: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy364;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy364: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy365;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy365: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  class_name___0 = (char const   *)((void *)0);
  if (compiler_globals.active_class_entry) {
    if (288U == ((compiler_globals.active_class_entry)->ce_flags & 288U)) {
      zendlval->value.str.len = (int )(sizeof("__CLASS__") - 1U);
      tmp___70 = _estrndup("__CLASS__", (unsigned int )zendlval->value.str.len);
      zendlval->value.str.val = (char *)tmp___70;
      zendlval->type = (unsigned char)8;
    } else {
      goto _L___14;
    }
  } else {
    _L___14: /* CIL Label */ 
    if (compiler_globals.active_class_entry) {
      class_name___0 = (compiler_globals.active_class_entry)->name;
    } else {

    }
    if (! class_name___0) {
      class_name___0 = "";
    } else {

    }
    tmp___71 = strlen(class_name___0);
    zendlval->value.str.len = (int )tmp___71;
    tmp___72 = _estrndup(class_name___0, (unsigned int )zendlval->value.str.len);
    zendlval->value.str.val = (char *)tmp___72;
    zendlval->type = (unsigned char)6;
  }
  return ((int __attribute__((__visibility__("default")))  )364);
  yy369: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy370;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy370: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy371;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy371: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych != 95) {
    goto yy186;
  } else {

  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy373;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy373: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy374;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy374: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 77) {
    goto yy375;
  } else {

  }
  if ((int )yych != 109) {
    goto yy186;
  } else {

  }
  yy375: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy376;
  } else {

  }
  if ((int )yych != 112) {
    goto yy186;
  } else {

  }
  yy376: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy377;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy377: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy378;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy378: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy379;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy379: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy380;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy380: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )353);
  yy382: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy386;
  } else {

  }
  if ((int )yych == 115) {
    goto yy386;
  } else {

  }
  goto yy186;
  yy383: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy384;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy384: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )340);
  yy386: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy387;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy387: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy388;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy388: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )350);
  yy390: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 7) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy391: ;
  if ((int )yych <= 83) {
    if ((int )yych <= 68) {
      if ((int )yych <= 32) {
        if ((int )yych == 9) {
          goto yy390;
        } else {

        }
        if ((int )yych <= 0x1F) {
          goto yy193;
        } else {

        }
        goto yy390;
      } else {
        if ((int )yych <= 65) {
          if ((int )yych <= 64) {
            goto yy193;
          } else {

          }
          goto yy395;
        } else {
          if ((int )yych <= 66) {
            goto yy393;
          } else {

          }
          if ((int )yych <= 67) {
            goto yy193;
          } else {

          }
          goto yy398;
        }
      }
    } else {
      if ((int )yych <= 73) {
        if ((int )yych == 70) {
          goto yy399;
        } else {

        }
        if ((int )yych <= 72) {
          goto yy193;
        } else {

        }
        goto yy400;
      } else {
        if ((int )yych <= 79) {
          if ((int )yych <= 78) {
            goto yy193;
          } else {

          }
          goto yy394;
        } else {
          if ((int )yych <= 81) {
            goto yy193;
          } else {

          }
          if ((int )yych <= 82) {
            goto yy397;
          } else {

          }
          goto yy396;
        }
      }
    }
  } else {
    if ((int )yych <= 102) {
      if ((int )yych <= 97) {
        if ((int )yych == 85) {
          goto yy392;
        } else {

        }
        if ((int )yych <= 96) {
          goto yy193;
        } else {

        }
        goto yy395;
      } else {
        if ((int )yych <= 99) {
          if ((int )yych <= 98) {
            goto yy393;
          } else {

          }
          goto yy193;
        } else {
          if ((int )yych <= 100) {
            goto yy398;
          } else {

          }
          if ((int )yych <= 101) {
            goto yy193;
          } else {

          }
          goto yy399;
        }
      }
    } else {
      if ((int )yych <= 113) {
        if ((int )yych <= 105) {
          if ((int )yych <= 104) {
            goto yy193;
          } else {

          }
          goto yy400;
        } else {
          if ((int )yych == 111) {
            goto yy394;
          } else {

          }
          goto yy193;
        }
      } else {
        if ((int )yych <= 115) {
          if ((int )yych <= 114) {
            goto yy397;
          } else {

          }
          goto yy396;
        } else {
          if ((int )yych != 117) {
            goto yy193;
          } else {

          }
        }
      }
    }
  }
  yy392: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy459;
  } else {

  }
  if ((int )yych == 110) {
    goto yy459;
  } else {

  }
  goto yy193;
  yy393: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 79) {
    if ((int )yych == 73) {
      goto yy446;
    } else {

    }
    if ((int )yych <= 78) {
      goto yy193;
    } else {

    }
    goto yy447;
  } else {
    if ((int )yych <= 105) {
      if ((int )yych <= 104) {
        goto yy193;
      } else {

      }
      goto yy446;
    } else {
      if ((int )yych == 111) {
        goto yy447;
      } else {

      }
      goto yy193;
    }
  }
  yy394: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 66) {
    goto yy438;
  } else {

  }
  if ((int )yych == 98) {
    goto yy438;
  } else {

  }
  goto yy193;
  yy395: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy431;
  } else {

  }
  if ((int )yych == 114) {
    goto yy431;
  } else {

  }
  goto yy193;
  yy396: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy423;
  } else {

  }
  if ((int )yych == 116) {
    goto yy423;
  } else {

  }
  goto yy193;
  yy397: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy421;
  } else {

  }
  if ((int )yych == 101) {
    goto yy421;
  } else {

  }
  goto yy193;
  yy398: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy417;
  } else {

  }
  if ((int )yych == 111) {
    goto yy417;
  } else {

  }
  goto yy193;
  yy399: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy410;
  } else {

  }
  if ((int )yych == 108) {
    goto yy410;
  } else {

  }
  goto yy193;
  yy400: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy401;
  } else {

  }
  if ((int )yych != 110) {
    goto yy193;
  } else {

  }
  yy401: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy402;
  } else {

  }
  if ((int )yych != 116) {
    goto yy193;
  } else {

  }
  yy402: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy403;
  } else {

  }
  if ((int )yych != 101) {
    goto yy405;
  } else {

  }
  yy403: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 71) {
    goto yy408;
  } else {

  }
  if ((int )yych == 103) {
    goto yy408;
  } else {

  }
  goto yy193;
  yy404: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy405: ;
  if ((int )yych <= 0x1F) {
    if ((int )yych == 9) {
      goto yy404;
    } else {

    }
    goto yy193;
  } else {
    if ((int )yych <= 32) {
      goto yy404;
    } else {

    }
    if ((int )yych != 41) {
      goto yy193;
    } else {

    }
  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )295);
  yy408: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy409;
  } else {

  }
  if ((int )yych != 101) {
    goto yy193;
  } else {

  }
  yy409: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy404;
  } else {

  }
  if ((int )yych == 114) {
    goto yy404;
  } else {

  }
  goto yy193;
  yy410: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy411;
  } else {

  }
  if ((int )yych != 111) {
    goto yy193;
  } else {

  }
  yy411: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy412;
  } else {

  }
  if ((int )yych != 97) {
    goto yy193;
  } else {

  }
  yy412: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy413;
  } else {

  }
  if ((int )yych != 116) {
    goto yy193;
  } else {

  }
  yy413: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 0x1F) {
    if ((int )yych == 9) {
      goto yy413;
    } else {

    }
    goto yy193;
  } else {
    if ((int )yych <= 32) {
      goto yy413;
    } else {

    }
    if ((int )yych != 41) {
      goto yy193;
    } else {

    }
  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )294);
  yy417: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 85) {
    goto yy418;
  } else {

  }
  if ((int )yych != 117) {
    goto yy193;
  } else {

  }
  yy418: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 66) {
    goto yy419;
  } else {

  }
  if ((int )yych != 98) {
    goto yy193;
  } else {

  }
  yy419: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy420;
  } else {

  }
  if ((int )yych != 108) {
    goto yy193;
  } else {

  }
  yy420: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy413;
  } else {

  }
  if ((int )yych == 101) {
    goto yy413;
  } else {

  }
  goto yy193;
  yy421: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy422;
  } else {

  }
  if ((int )yych != 97) {
    goto yy193;
  } else {

  }
  yy422: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy413;
  } else {

  }
  if ((int )yych == 108) {
    goto yy413;
  } else {

  }
  goto yy193;
  yy423: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy424;
  } else {

  }
  if ((int )yych != 114) {
    goto yy193;
  } else {

  }
  yy424: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy425;
  } else {

  }
  if ((int )yych != 105) {
    goto yy193;
  } else {

  }
  yy425: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy426;
  } else {

  }
  if ((int )yych != 110) {
    goto yy193;
  } else {

  }
  yy426: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 71) {
    goto yy427;
  } else {

  }
  if ((int )yych != 103) {
    goto yy193;
  } else {

  }
  yy427: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 0x1F) {
    if ((int )yych == 9) {
      goto yy427;
    } else {

    }
    goto yy193;
  } else {
    if ((int )yych <= 32) {
      goto yy427;
    } else {

    }
    if ((int )yych != 41) {
      goto yy193;
    } else {

    }
  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )293);
  yy431: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy432;
  } else {

  }
  if ((int )yych != 114) {
    goto yy193;
  } else {

  }
  yy432: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy433;
  } else {

  }
  if ((int )yych != 97) {
    goto yy193;
  } else {

  }
  yy433: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 89) {
    goto yy434;
  } else {

  }
  if ((int )yych != 121) {
    goto yy193;
  } else {

  }
  yy434: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 0x1F) {
    if ((int )yych == 9) {
      goto yy434;
    } else {

    }
    goto yy193;
  } else {
    if ((int )yych <= 32) {
      goto yy434;
    } else {

    }
    if ((int )yych != 41) {
      goto yy193;
    } else {

    }
  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )292);
  yy438: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 74) {
    goto yy439;
  } else {

  }
  if ((int )yych != 106) {
    goto yy193;
  } else {

  }
  yy439: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy440;
  } else {

  }
  if ((int )yych != 101) {
    goto yy193;
  } else {

  }
  yy440: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy441;
  } else {

  }
  if ((int )yych != 99) {
    goto yy193;
  } else {

  }
  yy441: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy442;
  } else {

  }
  if ((int )yych != 116) {
    goto yy193;
  } else {

  }
  yy442: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 0x1F) {
    if ((int )yych == 9) {
      goto yy442;
    } else {

    }
    goto yy193;
  } else {
    if ((int )yych <= 32) {
      goto yy442;
    } else {

    }
    if ((int )yych != 41) {
      goto yy193;
    } else {

    }
  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )291);
  yy446: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy456;
  } else {

  }
  if ((int )yych == 110) {
    goto yy456;
  } else {

  }
  goto yy193;
  yy447: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy448;
  } else {

  }
  if ((int )yych != 111) {
    goto yy193;
  } else {

  }
  yy448: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy449;
  } else {

  }
  if ((int )yych != 108) {
    goto yy193;
  } else {

  }
  yy449: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy454;
  } else {

  }
  if ((int )yych == 101) {
    goto yy454;
  } else {

  }
  goto yy451;
  yy450: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy451: ;
  if ((int )yych <= 0x1F) {
    if ((int )yych == 9) {
      goto yy450;
    } else {

    }
    goto yy193;
  } else {
    if ((int )yych <= 32) {
      goto yy450;
    } else {

    }
    if ((int )yych != 41) {
      goto yy193;
    } else {

    }
  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )290);
  yy454: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy455;
  } else {

  }
  if ((int )yych != 97) {
    goto yy193;
  } else {

  }
  yy455: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy450;
  } else {

  }
  if ((int )yych == 110) {
    goto yy450;
  } else {

  }
  goto yy193;
  yy456: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy457;
  } else {

  }
  if ((int )yych != 97) {
    goto yy193;
  } else {

  }
  yy457: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy458;
  } else {

  }
  if ((int )yych != 114) {
    goto yy193;
  } else {

  }
  yy458: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 89) {
    goto yy427;
  } else {

  }
  if ((int )yych == 121) {
    goto yy427;
  } else {

  }
  goto yy193;
  yy459: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy460;
  } else {

  }
  if ((int )yych != 115) {
    goto yy193;
  } else {

  }
  yy460: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy461;
  } else {

  }
  if ((int )yych != 101) {
    goto yy193;
  } else {

  }
  yy461: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy462;
  } else {

  }
  if ((int )yych != 116) {
    goto yy193;
  } else {

  }
  yy462: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 0x1F) {
    if ((int )yych == 9) {
      goto yy462;
    } else {

    }
    goto yy193;
  } else {
    if ((int )yych <= 32) {
      goto yy462;
    } else {

    }
    if ((int )yych != 41) {
      goto yy193;
    } else {

    }
  }
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )289);
  yy466: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy467;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy467: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )349);
  yy469: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 77) {
    goto yy473;
  } else {

  }
  if ((int )yych == 109) {
    goto yy473;
  } else {

  }
  goto yy186;
  yy470: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 87) {
    goto yy471;
  } else {

  }
  if ((int )yych != 119) {
    goto yy186;
  } else {

  }
  yy471: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )299);
  yy473: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy474;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy474: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy475;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy475: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy476;
  } else {

  }
  if ((int )yych != 112) {
    goto yy186;
  } else {

  }
  yy476: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy477;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy477: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy478;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy478: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy479;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy479: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )381);
  yy481: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )380);
  yy483: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy484: ;
  if ((int )yych <= 12) {
    if ((int )yych <= 0x08) {
      goto yy140;
    } else {

    }
    if ((int )yych <= 10) {
      goto yy483;
    } else {

    }
    goto yy140;
  } else {
    if ((int )yych <= 13) {
      goto yy483;
    } else {

    }
    if ((int )yych == 32) {
      goto yy483;
    } else {

    }
    goto yy140;
  }
  yy485: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )276);
  yy487: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )296);
  yy489: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  _yy_push_state(1);
  return ((int __attribute__((__visibility__("default")))  )359);
  yy491: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 79) {
    if ((int )yych == 73) {
      goto yy498;
    } else {

    }
    if ((int )yych <= 78) {
      goto yy186;
    } else {

    }
    goto yy499;
  } else {
    if ((int )yych <= 105) {
      if ((int )yych <= 104) {
        goto yy186;
      } else {

      }
      goto yy498;
    } else {
      if ((int )yych == 111) {
        goto yy499;
      } else {

      }
      goto yy186;
    }
  }
  yy492: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 66) {
    goto yy493;
  } else {

  }
  if ((int )yych != 98) {
    goto yy186;
  } else {

  }
  yy493: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy494;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy494: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy495;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy495: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy496;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy496: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )343);
  yy498: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 86) {
    if ((int )yych == 78) {
      goto yy507;
    } else {

    }
    if ((int )yych <= 85) {
      goto yy186;
    } else {

    }
    goto yy508;
  } else {
    if ((int )yych <= 110) {
      if ((int )yych <= 109) {
        goto yy186;
      } else {

      }
      goto yy507;
    } else {
      if ((int )yych == 118) {
        goto yy508;
      } else {

      }
      goto yy186;
    }
  }
  yy499: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy500;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy500: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy501;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy501: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy502;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy502: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy503;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy503: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy504;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy504: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 68) {
    goto yy505;
  } else {

  }
  if ((int )yych != 100) {
    goto yy186;
  } else {

  }
  yy505: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )344);
  yy507: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy513;
  } else {

  }
  if ((int )yych == 116) {
    goto yy513;
  } else {

  }
  goto yy186;
  yy508: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy509;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy509: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy510;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy510: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy511;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy511: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )345);
  yy513: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )266);
  yy515: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy520;
  } else {

  }
  if ((int )yych == 111) {
    goto yy520;
  } else {

  }
  goto yy186;
  yy516: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy517;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy517: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy518;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy518: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )333);
  yy520: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 66) {
    goto yy521;
  } else {

  }
  if ((int )yych != 98) {
    goto yy186;
  } else {

  }
  yy521: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy522;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy522: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy523;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy523: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )342);
  yy525: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 60) {
    goto yy533;
  } else {

  }
  goto yy193;
  yy526: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy180;
  yy527: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy178;
  yy528: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy529;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy529: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy530;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy530: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 75) {
    goto yy531;
  } else {

  }
  if ((int )yych != 107) {
    goto yy186;
  } else {

  }
  yy531: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )331);
  yy533: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 60) {
    goto yy269;
  } else {

  }
  goto yy193;
  yy534: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy541;
  } else {

  }
  if ((int )yych == 97) {
    goto yy541;
  } else {

  }
  goto yy186;
  yy535: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy536;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy536: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy537;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy537: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy538;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy538: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy539;
  } else {

  }
  if ((int )yych != 104) {
    goto yy186;
  } else {

  }
  yy539: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )327);
  yy541: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy542;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy542: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy543;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy543: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy544;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy544: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )348);
  yy546: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy557;
  } else {

  }
  if ((int )yych == 115) {
    goto yy557;
  } else {

  }
  goto yy186;
  yy547: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 68) {
    goto yy555;
  } else {

  }
  if ((int )yych == 100) {
    goto yy555;
  } else {

  }
  goto yy186;
  yy548: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy551;
  } else {

  }
  if ((int )yych == 114) {
    goto yy551;
  } else {

  }
  goto yy186;
  yy549: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )326);
  yy551: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy552;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy552: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 89) {
    goto yy553;
  } else {

  }
  if ((int )yych != 121) {
    goto yy186;
  } else {

  }
  yy553: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )362);
  yy555: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )265);
  yy557: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy558;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy558: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy559;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy559: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy560;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy560: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy561;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy561: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy562;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy562: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )347);
  yy564: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy565;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy565: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy566;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy566: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy567;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy567: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )318);
  yy569: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )301);
  yy571: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy613;
  } else {

  }
  if ((int )yych == 112) {
    goto yy613;
  } else {

  }
  goto yy186;
  yy572: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 84) {
    if ((int )yych <= 67) {
      if ((int )yych <= 66) {
        goto yy186;
      } else {

      }
      goto yy580;
    } else {
      if ((int )yych <= 82) {
        goto yy186;
      } else {

      }
      if ((int )yych <= 83) {
        goto yy578;
      } else {

      }
      goto yy579;
    }
  } else {
    if ((int )yych <= 114) {
      if ((int )yych == 99) {
        goto yy580;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 115) {
        goto yy578;
      } else {

      }
      if ((int )yych <= 116) {
        goto yy579;
      } else {

      }
      goto yy186;
    }
  }
  yy573: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy574;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy574: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy575;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy575: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy576;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy576: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )351);
  yy578: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy599;
  } else {

  }
  if ((int )yych == 116) {
    goto yy599;
  } else {

  }
  goto yy186;
  yy579: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy592;
  } else {

  }
  if ((int )yych == 101) {
    goto yy592;
  } else {

  }
  goto yy186;
  yy580: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy581;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy581: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 85) {
    goto yy582;
  } else {

  }
  if ((int )yych != 117) {
    goto yy186;
  } else {

  }
  yy582: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 68) {
    goto yy583;
  } else {

  }
  if ((int )yych != 100) {
    goto yy186;
  } else {

  }
  yy583: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy584;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy584: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 94) {
    if ((int )yych <= 57) {
      if ((int )yych >= 48) {
        goto yy185;
      } else {

      }
    } else {
      if ((int )yych <= 64) {
        goto yy585;
      } else {

      }
      if ((int )yych <= 90) {
        goto yy185;
      } else {

      }
    }
  } else {
    if ((int )yych <= 96) {
      if ((int )yych <= 95) {
        goto yy586;
      } else {

      }
    } else {
      if ((int )yych <= 122) {
        goto yy185;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy185;
      } else {

      }
    }
  }
  yy585: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )262);
  yy586: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy587;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy587: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy588;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy588: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy589;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy589: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy590;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy590: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )261);
  yy592: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy593;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy593: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 70) {
    goto yy594;
  } else {

  }
  if ((int )yych != 102) {
    goto yy186;
  } else {

  }
  yy594: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy595;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy595: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy596;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy596: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy597;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy597: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )356);
  yy599: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 69) {
    if ((int )yych == 65) {
      goto yy600;
    } else {

    }
    if ((int )yych <= 68) {
      goto yy186;
    } else {

    }
    goto yy601;
  } else {
    if ((int )yych <= 97) {
      if ((int )yych <= 96) {
        goto yy186;
      } else {

      }
    } else {
      if ((int )yych == 101) {
        goto yy601;
      } else {

      }
      goto yy186;
    }
  }
  yy600: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy607;
  } else {

  }
  if ((int )yych == 110) {
    goto yy607;
  } else {

  }
  goto yy186;
  yy601: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy602;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy602: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 68) {
    goto yy603;
  } else {

  }
  if ((int )yych != 100) {
    goto yy186;
  } else {

  }
  yy603: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy604;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy604: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 70) {
    goto yy605;
  } else {

  }
  if ((int )yych != 102) {
    goto yy186;
  } else {

  }
  yy605: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )341);
  yy607: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy608;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy608: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy609;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy609: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy610;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy610: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 70) {
    goto yy611;
  } else {

  }
  if ((int )yych != 102) {
    goto yy186;
  } else {

  }
  yy611: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )288);
  yy613: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy614;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy614: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy615;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy615: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 77) {
    goto yy616;
  } else {

  }
  if ((int )yych != 109) {
    goto yy186;
  } else {

  }
  yy616: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy617;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy617: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy618;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy618: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy619;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy619: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy620;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy620: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )358);
  yy622: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy630;
  } else {

  }
  if ((int )yych == 114) {
    goto yy630;
  } else {

  }
  goto yy186;
  yy623: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 89) {
    if ((int )yych == 65) {
      goto yy626;
    } else {

    }
    if ((int )yych <= 88) {
      goto yy186;
    } else {

    }
  } else {
    if ((int )yych <= 97) {
      if ((int )yych <= 96) {
        goto yy186;
      } else {

      }
      goto yy626;
    } else {
      if ((int )yych != 121) {
        goto yy186;
      } else {

      }
    }
  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )337);
  yy626: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy627;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy627: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy628;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy628: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )355);
  yy630: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy631;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy631: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 87) {
    goto yy632;
  } else {

  }
  if ((int )yych != 119) {
    goto yy186;
  } else {

  }
  yy632: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )339);
  yy634: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 84) {
    if ((int )yych == 81) {
      goto yy636;
    } else {

    }
    if ((int )yych <= 83) {
      goto yy186;
    } else {

    }
  } else {
    if ((int )yych <= 113) {
      if ((int )yych <= 112) {
        goto yy186;
      } else {

      }
      goto yy636;
    } else {
      if ((int )yych != 116) {
        goto yy186;
      } else {

      }
    }
  }
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 85) {
    goto yy648;
  } else {

  }
  if ((int )yych == 117) {
    goto yy648;
  } else {

  }
  goto yy186;
  yy636: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 85) {
    goto yy637;
  } else {

  }
  if ((int )yych != 117) {
    goto yy186;
  } else {

  }
  yy637: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy638;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy638: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy639;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy639: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy640;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy640: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 94) {
    if ((int )yych <= 57) {
      if ((int )yych >= 48) {
        goto yy185;
      } else {

      }
    } else {
      if ((int )yych <= 64) {
        goto yy641;
      } else {

      }
      if ((int )yych <= 90) {
        goto yy185;
      } else {

      }
    }
  } else {
    if ((int )yych <= 96) {
      if ((int )yych <= 95) {
        goto yy642;
      } else {

      }
    } else {
      if ((int )yych <= 122) {
        goto yy185;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy185;
      } else {

      }
    }
  }
  yy641: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )259);
  yy642: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy643;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy643: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy644;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy644: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy645;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy645: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy646;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy646: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )258);
  yy648: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy649;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy649: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy650;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy650: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )336);
  yy652: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 84) {
    if ((int )yych <= 76) {
      if ((int )yych <= 75) {
        goto yy186;
      } else {

      }
      goto yy675;
    } else {
      if ((int )yych <= 82) {
        goto yy186;
      } else {

      }
      if ((int )yych <= 83) {
        goto yy674;
      } else {

      }
      goto yy673;
    }
  } else {
    if ((int )yych <= 114) {
      if ((int )yych == 108) {
        goto yy675;
      } else {

      }
      goto yy186;
    } else {
      if ((int )yych <= 115) {
        goto yy674;
      } else {

      }
      if ((int )yych <= 116) {
        goto yy673;
      } else {

      }
      goto yy186;
    }
  }
  yy653: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 79) {
    if ((int )yych == 65) {
      goto yy665;
    } else {

    }
    if ((int )yych <= 78) {
      goto yy186;
    } else {

    }
    goto yy666;
  } else {
    if ((int )yych <= 97) {
      if ((int )yych <= 96) {
        goto yy186;
      } else {

      }
      goto yy665;
    } else {
      if ((int )yych == 111) {
        goto yy666;
      } else {

      }
      goto yy186;
    }
  }
  yy654: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy655;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy655: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 84) {
    if ((int )yych <= 82) {
      goto yy186;
    } else {

    }
    if ((int )yych >= 84) {
      goto yy657;
    } else {

    }
  } else {
    if ((int )yych <= 114) {
      goto yy186;
    } else {

    }
    if ((int )yych <= 115) {
      goto yy656;
    } else {

    }
    if ((int )yych <= 116) {
      goto yy657;
    } else {

    }
    goto yy186;
  }
  yy656: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy663;
  } else {

  }
  if ((int )yych == 116) {
    goto yy663;
  } else {

  }
  goto yy186;
  yy657: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy658;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy658: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  end___0 = s + zendlval->value.str.len;
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy659: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 85) {
    goto yy660;
  } else {

  }
  if ((int )yych != 117) {
    goto yy186;
  } else {

  }
  yy660: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy661;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy661: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )332);
  yy663: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )335);
  yy665: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy670;
  } else {

  }
  if ((int )yych == 115) {
    goto yy670;
  } else {

  }
  goto yy186;
  yy666: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy667;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy667: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy668;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy668: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )298);
  yy670: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy671;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy671: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )354);
  yy673: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy684;
  } else {

  }
  if ((int )yych == 99) {
    goto yy684;
  } else {

  }
  goto yy186;
  yy674: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy682;
  } else {

  }
  if ((int )yych == 101) {
    goto yy682;
  } else {

  }
  goto yy186;
  yy675: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy676;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy676: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy677;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy677: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 66) {
    goto yy678;
  } else {

  }
  if ((int )yych != 98) {
    goto yy186;
  } else {

  }
  yy678: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy679;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy679: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy680;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy680: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )363);
  yy682: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )329);
  yy684: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy685;
  } else {

  }
  if ((int )yych != 104) {
    goto yy186;
  } else {

  }
  yy685: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )338);
  yy687: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy704;
  } else {

  }
  if ((int )yych == 110) {
    goto yy704;
  } else {

  }
  goto yy186;
  yy688: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy697;
  } else {

  }
  if ((int )yych == 114) {
    goto yy697;
  } else {

  }
  goto yy186;
  yy689: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy690;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy690: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy691;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy691: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy692;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy692: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy693;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy693: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy694;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy694: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy695;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy695: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )334);
  yy697: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 94) {
    if ((int )yych <= 64) {
      if ((int )yych <= 47) {
        goto yy698;
      } else {

      }
      if ((int )yych <= 57) {
        goto yy185;
      } else {

      }
    } else {
      if ((int )yych == 69) {
        goto yy699;
      } else {

      }
      if ((int )yych <= 90) {
        goto yy185;
      } else {

      }
    }
  } else {
    if ((int )yych <= 100) {
      if ((int )yych != 96) {
        goto yy185;
      } else {

      }
    } else {
      if ((int )yych <= 101) {
        goto yy699;
      } else {

      }
      if ((int )yych <= 122) {
        goto yy185;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy185;
      } else {

      }
    }
  }
  yy698: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )320);
  yy699: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy700;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy700: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy701;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy701: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy702;
  } else {

  }
  if ((int )yych != 104) {
    goto yy186;
  } else {

  }
  yy702: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )322);
  yy704: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy705;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy705: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy706;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy706: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )346);
  yy708: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 70) {
    if ((int )yych == 67) {
      goto yy714;
    } else {

    }
    if ((int )yych <= 69) {
      goto yy186;
    } else {

    }
    goto yy715;
  } else {
    if ((int )yych <= 99) {
      if ((int )yych <= 98) {
        goto yy186;
      } else {

      }
      goto yy714;
    } else {
      if ((int )yych == 102) {
        goto yy715;
      } else {

      }
      goto yy186;
    }
  }
  yy709: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy712;
  } else {

  }
  if ((int )yych == 101) {
    goto yy712;
  } else {

  }
  goto yy186;
  yy710: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )317);
  yy712: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )300);
  yy714: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy721;
  } else {

  }
  if ((int )yych == 108) {
    goto yy721;
  } else {

  }
  goto yy186;
  yy715: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy716;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy716: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 85) {
    goto yy717;
  } else {

  }
  if ((int )yych != 117) {
    goto yy186;
  } else {

  }
  yy717: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy718;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy718: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy719;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy719: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )330);
  yy721: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy722;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy722: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy723;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy723: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy724;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy724: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )324);
  yy726: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy788;
  } else {

  }
  if ((int )yych == 104) {
    goto yy788;
  } else {

  }
  goto yy186;
  yy727: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy782;
  } else {

  }
  if ((int )yych == 115) {
    goto yy782;
  } else {

  }
  goto yy186;
  yy728: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 80) {
    goto yy778;
  } else {

  }
  if ((int )yych == 112) {
    goto yy778;
  } else {

  }
  goto yy186;
  yy729: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 68) {
    goto yy744;
  } else {

  }
  if ((int )yych == 100) {
    goto yy744;
  } else {

  }
  goto yy186;
  yy730: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy741;
  } else {

  }
  if ((int )yych == 97) {
    goto yy741;
  } else {

  }
  goto yy186;
  yy731: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 84) {
    if ((int )yych == 73) {
      goto yy732;
    } else {

    }
    if ((int )yych <= 83) {
      goto yy186;
    } else {

    }
    goto yy733;
  } else {
    if ((int )yych <= 105) {
      if ((int )yych <= 104) {
        goto yy186;
      } else {

      }
    } else {
      if ((int )yych == 116) {
        goto yy733;
      } else {

      }
      goto yy186;
    }
  }
  yy732: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy739;
  } else {

  }
  if ((int )yych == 116) {
    goto yy739;
  } else {

  }
  goto yy186;
  yy733: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy734;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy734: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 78) {
    goto yy735;
  } else {

  }
  if ((int )yych != 110) {
    goto yy186;
  } else {

  }
  yy735: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 68) {
    goto yy736;
  } else {

  }
  if ((int )yych != 100) {
    goto yy186;
  } else {

  }
  yy736: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 83) {
    goto yy737;
  } else {

  }
  if ((int )yych != 115) {
    goto yy186;
  } else {

  }
  yy737: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )357);
  yy739: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )300);
  yy741: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy742;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy742: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )260);
  yy744: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  switch ((int )yych) {
  case 68: 
  case 100: 
  goto yy745;
  case 70: 
  case 102: 
  goto yy746;
  case 73: 
  case 105: 
  goto yy747;
  case 83: 
  case 115: 
  goto yy748;
  case 87: 
  case 119: 
  goto yy749;
  default: ;
  goto yy186;
  }
  yy745: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy771;
  } else {

  }
  if ((int )yych == 101) {
    goto yy771;
  } else {

  }
  goto yy186;
  yy746: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy763;
  } else {

  }
  if ((int )yych == 111) {
    goto yy763;
  } else {

  }
  goto yy186;
  yy747: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 70) {
    goto yy761;
  } else {

  }
  if ((int )yych == 102) {
    goto yy761;
  } else {

  }
  goto yy186;
  yy748: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 87) {
    goto yy755;
  } else {

  }
  if ((int )yych == 119) {
    goto yy755;
  } else {

  }
  goto yy186;
  yy749: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy750;
  } else {

  }
  if ((int )yych != 104) {
    goto yy186;
  } else {

  }
  yy750: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy751;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy751: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy752;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy752: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy753;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy753: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )319);
  yy755: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 73) {
    goto yy756;
  } else {

  }
  if ((int )yych != 105) {
    goto yy186;
  } else {

  }
  yy756: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy757;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy757: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy758;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy758: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy759;
  } else {

  }
  if ((int )yych != 104) {
    goto yy186;
  } else {

  }
  yy759: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )328);
  yy761: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )304);
  yy763: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy764;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy764: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 94) {
    if ((int )yych <= 64) {
      if ((int )yych <= 47) {
        goto yy765;
      } else {

      }
      if ((int )yych <= 57) {
        goto yy185;
      } else {

      }
    } else {
      if ((int )yych == 69) {
        goto yy766;
      } else {

      }
      if ((int )yych <= 90) {
        goto yy185;
      } else {

      }
    }
  } else {
    if ((int )yych <= 100) {
      if ((int )yych != 96) {
        goto yy185;
      } else {

      }
    } else {
      if ((int )yych <= 101) {
        goto yy766;
      } else {

      }
      if ((int )yych <= 122) {
        goto yy185;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy185;
      } else {

      }
    }
  }
  yy765: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )321);
  yy766: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy767;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy767: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy768;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy768: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 72) {
    goto yy769;
  } else {

  }
  if ((int )yych != 104) {
    goto yy186;
  } else {

  }
  yy769: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )323);
  yy771: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 67) {
    goto yy772;
  } else {

  }
  if ((int )yych != 99) {
    goto yy186;
  } else {

  }
  yy772: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 76) {
    goto yy773;
  } else {

  }
  if ((int )yych != 108) {
    goto yy186;
  } else {

  }
  yy773: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 65) {
    goto yy774;
  } else {

  }
  if ((int )yych != 97) {
    goto yy186;
  } else {

  }
  yy774: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 82) {
    goto yy775;
  } else {

  }
  if ((int )yych != 114) {
    goto yy186;
  } else {

  }
  yy775: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy776;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy776: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )325);
  yy778: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 84) {
    goto yy779;
  } else {

  }
  if ((int )yych != 116) {
    goto yy186;
  } else {

  }
  yy779: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 89) {
    goto yy780;
  } else {

  }
  if ((int )yych != 121) {
    goto yy186;
  } else {

  }
  yy780: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )352);
  yy782: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 69) {
    goto yy783;
  } else {

  }
  if ((int )yych != 101) {
    goto yy186;
  } else {

  }
  yy783: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 94) {
    if ((int )yych <= 64) {
      if ((int )yych <= 47) {
        goto yy784;
      } else {

      }
      if ((int )yych <= 57) {
        goto yy185;
      } else {

      }
    } else {
      if ((int )yych == 73) {
        goto yy785;
      } else {

      }
      if ((int )yych <= 90) {
        goto yy185;
      } else {

      }
    }
  } else {
    if ((int )yych <= 104) {
      if ((int )yych != 96) {
        goto yy185;
      } else {

      }
    } else {
      if ((int )yych <= 105) {
        goto yy785;
      } else {

      }
      if ((int )yych <= 122) {
        goto yy185;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy185;
      } else {

      }
    }
  }
  yy784: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )303);
  yy785: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 70) {
    goto yy786;
  } else {

  }
  if ((int )yych != 102) {
    goto yy186;
  } else {

  }
  yy786: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )302);
  yy788: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 79) {
    goto yy789;
  } else {

  }
  if ((int )yych != 111) {
    goto yy186;
  } else {

  }
  yy789: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___3[(int )yych] & 4) {
    goto yy185;
  } else {

  }
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )316);
  yyc_ST_LOOKING_FOR_PROPERTY: 
  if ((unsigned int )(language_scanner_globals.yy_cursor + 2) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 45) {
    if ((int )yych <= 13) {
      if ((int )yych <= 0x08) {
        goto yy799;
      } else {

      }
      if ((int )yych <= 10) {
        goto yy793;
      } else {

      }
      if ((int )yych <= 12) {
        goto yy799;
      } else {

      }
    } else {
      if ((int )yych == 32) {
        goto yy793;
      } else {

      }
      if ((int )yych <= 44) {
        goto yy799;
      } else {

      }
      goto yy795;
    }
  } else {
    if ((int )yych <= 95) {
      if ((int )yych <= 64) {
        goto yy799;
      } else {

      }
      if ((int )yych <= 90) {
        goto yy797;
      } else {

      }
      if ((int )yych <= 94) {
        goto yy799;
      } else {

      }
      goto yy797;
    } else {
      if ((int )yych <= 96) {
        goto yy799;
      } else {

      }
      if ((int )yych <= 122) {
        goto yy797;
      } else {

      }
      if ((int )yych <= 126) {
        goto yy799;
      } else {

      }
      goto yy797;
    }
  }
  yy793: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy805;
  yy794: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  zendlval->value.str.val = (char *)language_scanner_globals.yy_text;
  zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  zendlval->type = (unsigned char)6;
  while (1) {
    p___3 = (char *)language_scanner_globals.yy_text;
    boundary___3 = p___3 + language_scanner_globals.yy_leng;
    while ((unsigned int )p___3 < (unsigned int )boundary___3) {
      if ((int )*p___3 == 10) {
        (compiler_globals.zend_lineno) ++;
      } else {
        if ((int )*p___3 == 13) {
          if ((int )*(p___3 + 1) != 10) {
            (compiler_globals.zend_lineno) ++;
          } else {

          }
        } else {

        }
      }
      p___3 ++;
    }
    break;
  }
  return ((int __attribute__((__visibility__("default")))  )375);
  yy795: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych == 62) {
    goto yy802;
  } else {

  }
  yy796: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = (unsigned char *)((char *)language_scanner_globals.yy_text) + 0;
    language_scanner_globals.yy_leng = 0U;
    break;
  }
  yy_pop_state();
  goto restart;
  yy797: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy801;
  yy798: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  yy_pop_state();
  if (language_scanner_globals.output_filter) {
    sz___12 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___12, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text)), language_scanner_globals.yy_leng);
    zendlval->value.str.len = (int )sz___12;
  } else {
    tmp___73 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
    zendlval->value.str.val = (char *)tmp___73;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )307);
  yy799: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy796;
  yy800: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy801: ;
  if ((int const   )yybm___4[(int )yych] & 64) {
    goto yy800;
  } else {

  }
  goto yy798;
  yy802: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )359);
  yy804: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy805: ;
  if ((int const   )yybm___4[(int )yych] & 128) {
    goto yy804;
  } else {

  }
  goto yy794;
  yyc_ST_LOOKING_FOR_VARNAME: 
  if ((unsigned int )(language_scanner_globals.yy_cursor + 2) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy810;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy808;
    } else {

    }
    if ((int )yych <= 94) {
      goto yy810;
    } else {

    }
  } else {
    if ((int )yych <= 96) {
      goto yy810;
    } else {

    }
    if ((int )yych <= 122) {
      goto yy808;
    } else {

    }
    if ((int )yych <= 126) {
      goto yy810;
    } else {

    }
  }
  yy808: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy813;
  yy809: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___13 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___13, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text)), language_scanner_globals.yy_leng);
    zendlval->value.str.len = (int )sz___13;
  } else {
    tmp___74 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
    zendlval->value.str.val = (char *)tmp___74;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  }
  zendlval->type = (unsigned char)6;
  yy_pop_state();
  _yy_push_state(0);
  return ((int __attribute__((__visibility__("default")))  )308);
  yy810: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = (unsigned char *)((char *)language_scanner_globals.yy_text) + 0;
    language_scanner_globals.yy_leng = 0U;
    break;
  }
  yy_pop_state();
  _yy_push_state(0);
  goto restart;
  yy812: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy813: ;
  if ((int const   )yybm___5[(int )yych] & 128) {
    goto yy812;
  } else {

  }
  goto yy809;
  yyc_ST_NOWDOC: ;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  newline___0 = 0;
  if ((unsigned int )language_scanner_globals.yy_cursor > (unsigned int )language_scanner_globals.yy_limit) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  (language_scanner_globals.yy_cursor) --;
  while ((unsigned int )language_scanner_globals.yy_cursor < (unsigned int )language_scanner_globals.yy_limit) {
    tmp___75 = language_scanner_globals.yy_cursor;
    (language_scanner_globals.yy_cursor) ++;
    switch ((int )*tmp___75) {
    case 13: 
    if ((int )*(language_scanner_globals.yy_cursor) == 10) {
      (language_scanner_globals.yy_cursor) ++;
    } else {

    }
    case 10: 
    if ((int )*(language_scanner_globals.yy_cursor) >= 97) {
      if ((int )*(language_scanner_globals.yy_cursor) <= 122) {
        goto _L___16;
      } else {
        goto _L___18;
      }
    } else {
      _L___18: /* CIL Label */ 
      if ((int )*(language_scanner_globals.yy_cursor) >= 65) {
        if ((int )*(language_scanner_globals.yy_cursor) <= 90) {
          goto _L___16;
        } else {
          goto _L___17;
        }
      } else {
        _L___17: /* CIL Label */ 
        if ((int )*(language_scanner_globals.yy_cursor) == 95) {
          goto _L___16;
        } else {
          if ((int )*(language_scanner_globals.yy_cursor) >= 0x7F) {
            _L___16: /* CIL Label */ 
            if (compiler_globals.heredoc_len < language_scanner_globals.yy_limit - language_scanner_globals.yy_cursor) {
              tmp___76 = memcmp((void const   *)language_scanner_globals.yy_cursor, (void const   *)compiler_globals.heredoc, (unsigned int )compiler_globals.heredoc_len);
              if (tmp___76) {

              } else {
                end___2 = language_scanner_globals.yy_cursor + compiler_globals.heredoc_len;
                if ((int )*end___2 == 59) {
                  end___2 ++;
                } else {

                }
                if ((int )*end___2 == 10) {
                  goto _L___15;
                } else {
                  if ((int )*end___2 == 13) {
                    _L___15: /* CIL Label */ 
                    if ((int )*(language_scanner_globals.yy_cursor + -2) == 13) {
                      if ((int )*(language_scanner_globals.yy_cursor + -1) == 10) {
                        newline___0 = 2;
                      } else {
                        newline___0 = 1;
                      }
                    } else {
                      newline___0 = 1;
                    }
                    compiler_globals.increment_lineno = (unsigned char)1;
                    language_scanner_globals.yy_state = 8;
                    goto nowdoc_scan_done;
                  } else {

                  }
                }
              }
            } else {

            }
          } else {

          }
        }
      }
    }
    default: ;
    continue;
    }
  }
  nowdoc_scan_done: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___14 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___14, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text)), language_scanner_globals.yy_leng - (unsigned int )newline___0);
    zendlval->value.str.len = (int )sz___14;
  } else {
    tmp___77 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng - (unsigned int )newline___0);
    zendlval->value.str.val = (char *)tmp___77;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - (unsigned int )newline___0);
  }
  zendlval->type = (unsigned char)6;
  while (1) {
    p___4 = (char *)language_scanner_globals.yy_text;
    boundary___4 = p___4 + (language_scanner_globals.yy_leng - (unsigned int )newline___0);
    while ((unsigned int )p___4 < (unsigned int )boundary___4) {
      if ((int )*p___4 == 10) {
        (compiler_globals.zend_lineno) ++;
      } else {
        if ((int )*p___4 == 13) {
          if ((int )*(p___4 + 1) != 10) {
            (compiler_globals.zend_lineno) ++;
          } else {

          }
        } else {

        }
      }
      p___4 ++;
    }
    break;
  }
  return ((int __attribute__((__visibility__("default")))  )314);
  yyc_ST_VAR_OFFSET: 
  if ((unsigned int )(language_scanner_globals.yy_cursor + 3) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 47) {
    if ((int )yych <= 32) {
      if ((int )yych <= 12) {
        if ((int )yych <= 0x08) {
          goto yy832;
        } else {

        }
        if ((int )yych <= 10) {
          goto yy828;
        } else {

        }
        goto yy832;
      } else {
        if ((int )yych <= 13) {
          goto yy828;
        } else {

        }
        if ((int )yych <= 0x1F) {
          goto yy832;
        } else {

        }
        goto yy828;
      }
    } else {
      if ((int )yych <= 36) {
        if ((int )yych <= 34) {
          goto yy827;
        } else {

        }
        if ((int )yych <= 35) {
          goto yy828;
        } else {

        }
        goto yy823;
      } else {
        if ((int )yych == 39) {
          goto yy828;
        } else {

        }
        goto yy827;
      }
    }
  } else {
    if ((int )yych <= 92) {
      if ((int )yych <= 64) {
        if ((int )yych <= 48) {
          goto yy820;
        } else {

        }
        if ((int )yych <= 57) {
          goto yy822;
        } else {

        }
        goto yy827;
      } else {
        if ((int )yych <= 90) {
          goto yy830;
        } else {

        }
        if ((int )yych <= 91) {
          goto yy827;
        } else {

        }
        goto yy828;
      }
    } else {
      if ((int )yych <= 95) {
        if ((int )yych <= 93) {
          goto yy825;
        } else {

        }
        if ((int )yych <= 94) {
          goto yy827;
        } else {

        }
        goto yy830;
      } else {
        if ((int )yych <= 96) {
          goto yy827;
        } else {

        }
        if ((int )yych <= 122) {
          goto yy830;
        } else {

        }
        if ((int )yych <= 126) {
          goto yy827;
        } else {

        }
        goto yy830;
      }
    }
  }
  yy820: 
  yyaccept = 0U;
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_marker = language_scanner_globals.yy_cursor;
  yych = *(language_scanner_globals.yy_marker);
  if ((int )yych <= 87) {
    if ((int )yych <= 57) {
      if ((int )yych >= 48) {
        goto yy844;
      } else {

      }
    } else {
      if ((int )yych == 66) {
        goto yy841;
      } else {

      }
    }
  } else {
    if ((int )yych <= 98) {
      if ((int )yych <= 88) {
        goto yy843;
      } else {

      }
      if ((int )yych >= 98) {
        goto yy841;
      } else {

      }
    } else {
      if ((int )yych == 120) {
        goto yy843;
      } else {

      }
    }
  }
  yy821: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.yy_leng < 10U) {
    zendlval->value.lval = strtol((char const   */* __restrict  */)((char *)language_scanner_globals.yy_text), (char **/* __restrict  */)((void *)0), 10);
    zendlval->type = (unsigned char)1;
  } else {
    if (language_scanner_globals.yy_leng == 10U) {
      if (0) {
        __s1_len___0 = strlen((char const   *)((char *)language_scanner_globals.yy_text));
        __s2_len___0 = strlen(long_min_digits);
        if (! ((unsigned int )((void const   *)((char *)language_scanner_globals.yy_text + 1)) - (unsigned int )((void const   *)((char *)language_scanner_globals.yy_text)) == 1U)) {
          goto _L___20;
        } else {
          if (__s1_len___0 >= 4U) {
            _L___20: /* CIL Label */ 
            if (! ((unsigned int )((void const   *)(long_min_digits + 1)) - (unsigned int )((void const   *)(long_min_digits)) == 1U)) {
              tmp___85 = 1;
            } else {
              if (__s2_len___0 >= 4U) {
                tmp___85 = 1;
              } else {
                tmp___85 = 0;
              }
            }
          } else {
            tmp___85 = 0;
          }
        }
        if (tmp___85) {
          tmp___80 = __builtin_strcmp((char const   *)((char *)language_scanner_globals.yy_text), long_min_digits);
          tmp___84 = tmp___80;
        } else {
          tmp___83 = __builtin_strcmp((char const   *)((char *)language_scanner_globals.yy_text), long_min_digits);
          tmp___84 = tmp___83;
        }
      } else {
        tmp___83 = __builtin_strcmp((char const   *)((char *)language_scanner_globals.yy_text), long_min_digits);
        tmp___84 = tmp___83;
      }
      if (tmp___84 < 0) {
        zendlval->value.lval = strtol((char const   */* __restrict  */)((char *)language_scanner_globals.yy_text), (char **/* __restrict  */)((void *)0), 10);
        zendlval->type = (unsigned char)1;
      } else {
        tmp___78 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
        zendlval->value.str.val = (char *)tmp___78;
        zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
        zendlval->type = (unsigned char)6;
      }
    } else {
      tmp___78 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
      zendlval->value.str.val = (char *)tmp___78;
      zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
      zendlval->type = (unsigned char)6;
    }
  }
  return ((int __attribute__((__visibility__("default")))  )310);
  yy822: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy840;
  yy823: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 95) {
    if ((int )yych <= 64) {
      goto yy824;
    } else {

    }
    if ((int )yych <= 90) {
      goto yy836;
    } else {

    }
    if ((int )yych >= 95) {
      goto yy836;
    } else {

    }
  } else {
    if ((int )yych <= 96) {
      goto yy824;
    } else {

    }
    if ((int )yych <= 122) {
      goto yy836;
    } else {

    }
    if ((int )yych >= 0x7F) {
      goto yy836;
    } else {

    }
  }
  yy824: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  return ((int __attribute__((__visibility__("default")))  )*((char *)language_scanner_globals.yy_text + 0));
  yy825: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  yy_pop_state();
  return ((int __attribute__((__visibility__("default")))  )']');
  yy827: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy824;
  yy828: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  while (1) {
    language_scanner_globals.yy_cursor = (unsigned char *)((char *)language_scanner_globals.yy_text) + 0;
    language_scanner_globals.yy_leng = 0U;
    break;
  }
  yy_pop_state();
  return ((int __attribute__((__visibility__("default")))  )314);
  yy830: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  goto yy835;
  yy831: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___15 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___15, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text)), language_scanner_globals.yy_leng);
    zendlval->value.str.len = (int )sz___15;
  } else {
    tmp___86 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
    zendlval->value.str.val = (char *)tmp___86;
    zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )307);
  yy832: 
  (language_scanner_globals.yy_cursor) ++;
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if ((unsigned int )language_scanner_globals.yy_cursor > (unsigned int )language_scanner_globals.yy_limit) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  zend_error(1 << 7L, "Unexpected character in input:  \'%c\' (ASCII=%d) state=%d", *((char *)language_scanner_globals.yy_text + 0), *((char *)language_scanner_globals.yy_text + 0), language_scanner_globals.yy_state);
  goto restart;
  yy834: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy835: ;
  if ((int const   )yybm___6[(int )yych] & 16) {
    goto yy834;
  } else {

  }
  goto yy831;
  yy836: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 94) {
    if ((int )yych <= 57) {
      if ((int )yych >= 48) {
        goto yy836;
      } else {

      }
    } else {
      if ((int )yych <= 64) {
        goto yy838;
      } else {

      }
      if ((int )yych <= 90) {
        goto yy836;
      } else {

      }
    }
  } else {
    if ((int )yych <= 96) {
      if ((int )yych <= 95) {
        goto yy836;
      } else {

      }
    } else {
      if ((int )yych <= 122) {
        goto yy836;
      } else {

      }
      if ((int )yych >= 0x7F) {
        goto yy836;
      } else {

      }
    }
  }
  yy838: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  if (language_scanner_globals.output_filter) {
    sz___16 = (size_t )0;
    (*(language_scanner_globals.output_filter))((unsigned char **)(& zendlval->value.str.val), & sz___16, (unsigned char const   *)((unsigned char *)((char *)language_scanner_globals.yy_text + 1)), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.len = (int )sz___16;
  } else {
    tmp___87 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text + 1), language_scanner_globals.yy_leng - 1U);
    zendlval->value.str.val = (char *)tmp___87;
    zendlval->value.str.len = (int )(language_scanner_globals.yy_leng - 1U);
  }
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )309);
  yy839: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  yy840: ;
  if ((int const   )yybm___6[(int )yych] & 32) {
    goto yy839;
  } else {

  }
  goto yy821;
  yy841: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___6[(int )yych] & 128) {
    goto yy849;
  } else {

  }
  yy842: 
  language_scanner_globals.yy_cursor = language_scanner_globals.yy_marker;
  goto yy821;
  yy843: 
  (language_scanner_globals.yy_cursor) ++;
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___6[(int )yych] & 64) {
    goto yy847;
  } else {

  }
  goto yy842;
  yy844: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int )yych <= 47) {
    goto yy846;
  } else {

  }
  if ((int )yych <= 57) {
    goto yy844;
  } else {

  }
  yy846: 
  language_scanner_globals.yy_leng = (unsigned int )(language_scanner_globals.yy_cursor - language_scanner_globals.yy_text);
  tmp___88 = _estrndup((char const   *)((char *)language_scanner_globals.yy_text), language_scanner_globals.yy_leng);
  zendlval->value.str.val = (char *)tmp___88;
  zendlval->value.str.len = (int )language_scanner_globals.yy_leng;
  zendlval->type = (unsigned char)6;
  return ((int __attribute__((__visibility__("default")))  )310);
  yy847: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___6[(int )yych] & 64) {
    goto yy847;
  } else {

  }
  goto yy846;
  yy849: 
  (language_scanner_globals.yy_cursor) ++;
  if ((unsigned int )(language_scanner_globals.yy_cursor + 1) >= (unsigned int )(language_scanner_globals.yy_limit + 32)) {
    return ((int __attribute__((__visibility__("default")))  )0);
  } else {

  }
  yych = *(language_scanner_globals.yy_cursor);
  if ((int const   )yybm___6[(int )yych] & 128) {
    goto yy849;
  } else {

  }
  goto yy846;
}
}
