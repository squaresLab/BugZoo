# 1 "drd_clientreq.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/valgrind-bug-11613-11614/valgrind/drd//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "drd_clientreq.c"
# 26 "drd_clientreq.c"
# 1 "drd_barrier.h" 1
# 33 "drd_barrier.h"
# 1 "drd_basics.h" 1
# 33 "drd_basics.h"
# 1 "../include/pub_tool_basics.h" 1
# 47 "../include/pub_tool_basics.h"
# 1 "../VEX/pub/libvex_basictypes.h" 1
# 44 "../VEX/pub/libvex_basictypes.h"
typedef unsigned char UChar;
typedef signed char Char;
typedef char HChar;




typedef unsigned short UShort;
typedef signed short Short;


typedef unsigned int UInt;
typedef signed int Int;


typedef unsigned long long int ULong;
typedef signed long long int Long;


typedef UInt U128[4];


typedef
   union {
      UChar w8[16];
      UShort w16[8];
      UInt w32[4];
      ULong w64[2];
   }
   V128;


typedef float Float;
typedef double Double;


typedef unsigned char Bool;






static inline Bool toBool ( Int x ) {
   Int r = (x == 0) ? ((Bool)0) : ((Bool)1);
   return (Bool)r;
}
static inline UChar toUChar ( Int x ) {
   x &= 0xFF;
   return (UChar)x;
}
static inline HChar toHChar ( Int x ) {
   x &= 0xFF;
   return (HChar)x;
}
static inline UShort toUShort ( Int x ) {
   x &= 0xFFFF;
   return (UShort)x;
}
static inline Short toShort ( Int x ) {
   x &= 0xFFFF;
   return (Short)x;
}
static inline UInt toUInt ( Long x ) {
   x &= 0xFFFFFFFFLL;
   return (UInt)x;
}


typedef UInt Addr32;
typedef ULong Addr64;





typedef unsigned long HWord;
# 170 "../VEX/pub/libvex_basictypes.h"
   static inline ULong Ptr_to_ULong ( void* p ) {
      UInt w = (UInt)p;
      return (ULong)w;
   }
   static inline void* ULong_to_Ptr ( ULong n ) {
      UInt w = (UInt)n;
      return (void*)w;
   }
# 48 "../include/pub_tool_basics.h" 2


# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 51 "../include/pub_tool_basics.h" 2
# 86 "../include/pub_tool_basics.h"
typedef unsigned long UWord;
typedef signed long Word;





typedef UWord Addr;
typedef UWord AddrH;




typedef UWord SizeT;
typedef Word SSizeT;





typedef Word PtrdiffT;
# 115 "../include/pub_tool_basics.h"
typedef Word OffT;





typedef Long Off64T;






typedef struct { UWord uw1; UWord uw2; } UWordPair;
# 139 "../include/pub_tool_basics.h"
typedef UInt ThreadId;
# 177 "../include/pub_tool_basics.h"
typedef
   struct {
      UWord _val;
      Bool _isError;
   }
   SysRes;
# 216 "../include/pub_tool_basics.h"
static inline Bool sr_isError ( SysRes sr ) {
   return sr._isError;
}
static inline UWord sr_Res ( SysRes sr ) {
   return sr._isError ? 0 : sr._val;
}
static inline UWord sr_ResHI ( SysRes sr ) {
   return 0;
}
static inline UWord sr_Err ( SysRes sr ) {
   return sr._isError ? sr._val : 0;
}
static inline Bool sr_EQ ( SysRes sr1, SysRes sr2 ) {
   return sr1._val == sr2._val
          && ((sr1._isError && sr2._isError)
              || (!sr1._isError && !sr2._isError));
}
# 34 "drd_basics.h" 2





typedef UInt DrdThreadId;
# 34 "drd_barrier.h" 2
# 1 "drd_clientreq.h" 1
# 36 "drd_clientreq.h"
# 1 "drd.h" 1
# 65 "drd.h"
# 1 "../include/valgrind.h" 1
# 214 "../include/valgrind.h"
typedef
   struct {
      unsigned int nraddr;
   }
   OrigFn;
# 4827 "../include/valgrind.h"
typedef
   enum { VG_USERREQ__RUNNING_ON_VALGRIND = 0x1001,
          VG_USERREQ__DISCARD_TRANSLATIONS = 0x1002,






          VG_USERREQ__CLIENT_CALL0 = 0x1101,
          VG_USERREQ__CLIENT_CALL1 = 0x1102,
          VG_USERREQ__CLIENT_CALL2 = 0x1103,
          VG_USERREQ__CLIENT_CALL3 = 0x1104,




          VG_USERREQ__COUNT_ERRORS = 0x1201,



          VG_USERREQ__MALLOCLIKE_BLOCK = 0x1301,
          VG_USERREQ__FREELIKE_BLOCK = 0x1302,

          VG_USERREQ__CREATE_MEMPOOL = 0x1303,
          VG_USERREQ__DESTROY_MEMPOOL = 0x1304,
          VG_USERREQ__MEMPOOL_ALLOC = 0x1305,
          VG_USERREQ__MEMPOOL_FREE = 0x1306,
          VG_USERREQ__MEMPOOL_TRIM = 0x1307,
          VG_USERREQ__MOVE_MEMPOOL = 0x1308,
          VG_USERREQ__MEMPOOL_CHANGE = 0x1309,
          VG_USERREQ__MEMPOOL_EXISTS = 0x130a,
# 4867 "../include/valgrind.h"
          VG_USERREQ__PRINTF = 0x1401,
          VG_USERREQ__PRINTF_BACKTRACE = 0x1402,

          VG_USERREQ__PRINTF_VALIST_BY_REF = 0x1403,
          VG_USERREQ__PRINTF_BACKTRACE_VALIST_BY_REF = 0x1404,


          VG_USERREQ__STACK_REGISTER = 0x1501,
          VG_USERREQ__STACK_DEREGISTER = 0x1502,
          VG_USERREQ__STACK_CHANGE = 0x1503,


          VG_USERREQ__LOAD_PDB_DEBUGINFO = 0x1601,


          VG_USERREQ__MAP_IP_TO_SRCLOC = 0x1701
   } Vg_ClientRequest;
# 4972 "../include/valgrind.h"
static int VALGRIND_PRINTF(const char *format, ...)
   __attribute__((format(__printf__, 1, 2), __unused__));

static int



VALGRIND_PRINTF(const char *format, ...)
{



   unsigned long _qzz_res;
   va_list vargs;
   __builtin_va_start(vargs,format);







   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRINTF_VALIST_BY_REF); _zzq_args[1] = (unsigned int)((unsigned long)format); _zzq_args[2] = (unsigned int)((unsigned long)&vargs); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); _qzz_res = _zzq_result; }



                                      ;

   __builtin_va_end(vargs);
   return (int)_qzz_res;

}


static int VALGRIND_PRINTF_BACKTRACE(const char *format, ...)
   __attribute__((format(__printf__, 1, 2), __unused__));

static int



VALGRIND_PRINTF_BACKTRACE(const char *format, ...)
{



   unsigned long _qzz_res;
   va_list vargs;
   __builtin_va_start(vargs,format);







   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRINTF_BACKTRACE_VALIST_BY_REF); _zzq_args[1] = (unsigned int)((unsigned long)format); _zzq_args[2] = (unsigned int)((unsigned long)&vargs); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); _qzz_res = _zzq_result; }



                                      ;

   __builtin_va_end(vargs);
   return (int)_qzz_res;

}
# 66 "drd.h" 2
# 359 "drd.h"
enum {



   VG_USERREQ__DRD_CLEAN_MEMORY = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)),



   VG_USERREQ__DRD_GET_VALGRIND_THREAD_ID = ((unsigned int)((('D')&0xff) << 24 | (('R')&0xff) << 16)),


   VG_USERREQ__DRD_GET_DRD_THREAD_ID,




   VG_USERREQ__DRD_START_SUPPRESSION,



   VG_USERREQ__DRD_FINISH_SUPPRESSION,



   VG_USERREQ__DRD_START_TRACE_ADDR,


   VG_USERREQ__DRD_STOP_TRACE_ADDR,



   VG_USERREQ__DRD_RECORD_LOADS,


   VG_USERREQ__DRD_RECORD_STORES,



   VG_USERREQ__DRD_SET_THREAD_NAME,



   VG_USERREQ__DRD_ANNOTATION_UNIMP,




   VG_USERREQ__DRD_ANNOTATE_RWLOCK_CREATE
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 14,



   VG_USERREQ__DRD_ANNOTATE_RWLOCK_DESTROY
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 15,



   VG_USERREQ__DRD_ANNOTATE_RWLOCK_ACQUIRED
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 17,



   VG_USERREQ__DRD_ANNOTATE_RWLOCK_RELEASED
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 18,



   VG_USERREQ__HELGRIND_ANNOTATION_UNIMP
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 32,



   VG_USERREQ__DRD_ANNOTATE_HAPPENS_BEFORE
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 33,


   VG_USERREQ__DRD_ANNOTATE_HAPPENS_AFTER
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 34,


};
# 37 "drd_clientreq.h" 2
# 47 "drd_clientreq.h"
enum {



   VG_USERREQ__SET_PTHREAD_COND_INITIALIZER = ((unsigned int)((('D')&0xff) << 24 | (('r')&0xff) << 16)),



   VG_USERREQ__DRD_START_NEW_SEGMENT,



   VG_USERREQ__SET_PTHREADID,




   VG_USERREQ__SET_JOINABLE,



   VG_USERREQ__ENTERING_PTHREAD_CREATE,


   VG_USERREQ__LEFT_PTHREAD_CREATE,




   VG_USERREQ__POST_THREAD_JOIN,



   VG_USERREQ__PRE_THREAD_CANCEL,


   VG_USERREQ__POST_THREAD_CANCEL,



   VG_USERREQ__PRE_MUTEX_INIT,


   VG_USERREQ__POST_MUTEX_INIT,


   VG_USERREQ__PRE_MUTEX_DESTROY,


   VG_USERREQ__POST_MUTEX_DESTROY,


   VG_USERREQ__PRE_MUTEX_LOCK,


   VG_USERREQ__POST_MUTEX_LOCK,


   VG_USERREQ__PRE_MUTEX_UNLOCK,


   VG_USERREQ__POST_MUTEX_UNLOCK,


   VG_USERREQ__PRE_SPIN_INIT_OR_UNLOCK,


   VG_USERREQ__POST_SPIN_INIT_OR_UNLOCK,




   VG_USERREQ__PRE_COND_INIT,


   VG_USERREQ__POST_COND_INIT,


   VG_USERREQ__PRE_COND_DESTROY,


   VG_USERREQ__POST_COND_DESTROY,

   VG_USERREQ__PRE_COND_WAIT,

   VG_USERREQ__POST_COND_WAIT,

   VG_USERREQ__PRE_COND_SIGNAL,

   VG_USERREQ__POST_COND_SIGNAL,

   VG_USERREQ__PRE_COND_BROADCAST,

   VG_USERREQ__POST_COND_BROADCAST,



   VG_USERREQ__PRE_SEM_INIT,


   VG_USERREQ__POST_SEM_INIT,


   VG_USERREQ__PRE_SEM_DESTROY,


   VG_USERREQ__POST_SEM_DESTROY,


   VG_USERREQ__PRE_SEM_OPEN,


   VG_USERREQ__POST_SEM_OPEN,


   VG_USERREQ__PRE_SEM_CLOSE,


   VG_USERREQ__POST_SEM_CLOSE,


   VG_USERREQ__PRE_SEM_WAIT,


   VG_USERREQ__POST_SEM_WAIT,


   VG_USERREQ__PRE_SEM_POST,


   VG_USERREQ__POST_SEM_POST,



   VG_USERREQ__PRE_BARRIER_INIT,


   VG_USERREQ__POST_BARRIER_INIT,


   VG_USERREQ__PRE_BARRIER_DESTROY,


   VG_USERREQ__POST_BARRIER_DESTROY,


   VG_USERREQ__PRE_BARRIER_WAIT,


   VG_USERREQ__POST_BARRIER_WAIT,



   VG_USERREQ__PRE_RWLOCK_INIT,


   VG_USERREQ__POST_RWLOCK_DESTROY,


   VG_USERREQ__PRE_RWLOCK_RDLOCK,


   VG_USERREQ__POST_RWLOCK_RDLOCK,


   VG_USERREQ__PRE_RWLOCK_WRLOCK,


   VG_USERREQ__POST_RWLOCK_WRLOCK,


   VG_USERREQ__PRE_RWLOCK_UNLOCK,


   VG_USERREQ__POST_RWLOCK_UNLOCK


};






typedef enum {
   mutex_type_unknown = -1,
   mutex_type_invalid_mutex = 0,
   mutex_type_recursive_mutex = 1,
   mutex_type_errorcheck_mutex = 2,
   mutex_type_default_mutex = 3,
   mutex_type_spinlock = 4,
} MutexT;






typedef enum {
   pthread_rwlock = 1,
   user_rwlock = 2,
} RwLockT;






typedef enum {
   pthread_barrier = 1,
   gomp_barrier = 2,
} BarrierT;


void vgDrd_clientreq_init(void);
# 35 "drd_barrier.h" 2



struct barrier_info;


void vgDrd_barrier_set_trace(const Bool trace_barrier);
void vgDrd_barrier_init(const Addr barrier,
                        const BarrierT barrier_type, const Word count,
                        const Bool reinitialization);
void vgDrd_barrier_destroy(const Addr barrier, const BarrierT barrier_type);
void vgDrd_barrier_pre_wait(const DrdThreadId tid, const Addr barrier,
                            const BarrierT barrier_type);
void vgDrd_barrier_post_wait(const DrdThreadId tid, const Addr barrier,
                             const BarrierT barrier_type, const Bool waited,
                             const Bool serializing);
void vgDrd_barrier_stop_using_mem(const Addr a1, const Addr a2);
ULong vgDrd_get_barrier_segment_creation_count(void);
# 27 "drd_clientreq.c" 2

# 1 "drd_cond.h" 1
# 30 "drd_cond.h"
# 1 "drd_thread.h" 1
# 33 "drd_thread.h"
# 1 "drd_segment.h" 1
# 37 "drd_segment.h"
# 1 "drd_vc.h" 1
# 52 "drd_vc.h"
# 1 "../include/pub_tool_libcassert.h" 1
# 50 "../include/pub_tool_libcassert.h"
__attribute__ ((__noreturn__))
extern void vgPlain_exit( Int status );


__attribute__ ((__noreturn__))
extern void vgPlain_tool_panic ( Char* str );

__attribute__ ((__noreturn__))
extern void vgPlain_assert_fail ( Bool isCore, const Char* expr, const Char* file,
                               Int line, const Char* fn,
                               const HChar* format, ... );
# 53 "drd_vc.h" 2






typedef struct
{
   DrdThreadId threadid;
   UInt count;
} VCElem;

typedef struct
{
   unsigned capacity;
   unsigned size;
   VCElem* vc;
   VCElem preallocated[8];
} VectorClock;


void vgDrd_vc_init(VectorClock* const vc,
                   const VCElem* const vcelem,
                   const unsigned size);
void vgDrd_vc_cleanup(VectorClock* const vc);
void vgDrd_vc_copy(VectorClock* const new, const VectorClock* const rhs);
void vgDrd_vc_assign(VectorClock* const lhs, const VectorClock* const rhs);
void vgDrd_vc_increment(VectorClock* const vc, DrdThreadId const tid);
static __inline__
Bool vgDrd_vc_lte(const VectorClock* const vc1,
                  const VectorClock* const vc2);
Bool vgDrd_vc_ordered(const VectorClock* const vc1,
                      const VectorClock* const vc2);
void vgDrd_vc_min(VectorClock* const result,
                  const VectorClock* const rhs);
void vgDrd_vc_combine(VectorClock* const result,
                      const VectorClock* const rhs);
void vgDrd_vc_print(const VectorClock* const vc);
char* vgDrd_vc_aprint(const VectorClock* const vc);
void vgDrd_vc_check(const VectorClock* const vc);
void vgDrd_vc_test(void);
# 102 "drd_vc.h"
static __inline__
Bool vgDrd_vc_lte(const VectorClock* const vc1, const VectorClock* const vc2)
{
   unsigned i;
   unsigned j = 0;

   for (i = 0; i < vc1->size; i++)
   {
      while (j < vc2->size && vc2->vc[j].threadid < vc1->vc[i].threadid)
         j++;
      if (j >= vc2->size || vc2->vc[j].threadid > vc1->vc[i].threadid)
         return ((Bool)0);







      if (vc1->vc[i].count > vc2->vc[j].count)
         return ((Bool)0);
   }
   return ((Bool)1);
}
# 38 "drd_segment.h" 2
# 1 "pub_drd_bitmap.h" 1
# 39 "pub_drd_bitmap.h"
# 1 "../include/pub_tool_oset.h" 1
# 73 "../include/pub_tool_oset.h"
typedef struct _OSet OSet;





typedef Word (*OSetCmp_t) ( const void* key, const void* elem );
typedef void* (*OSetAlloc_t) ( HChar* cc, SizeT szB );
typedef void (*OSetFree_t) ( void* p );
# 102 "../include/pub_tool_oset.h"
extern OSet* vgPlain_OSetWord_Create ( OSetAlloc_t alloc, HChar* cc,
                                          OSetFree_t _free );
extern void vgPlain_OSetWord_Destroy ( OSet* os );
# 146 "../include/pub_tool_oset.h"
extern Word vgPlain_OSetWord_Size ( OSet* os );
extern void vgPlain_OSetWord_Insert ( OSet* os, UWord val );
extern Bool vgPlain_OSetWord_Contains ( OSet* os, UWord val );
extern Bool vgPlain_OSetWord_Remove ( OSet* os, UWord val );
extern void vgPlain_OSetWord_ResetIter ( OSet* os );
extern Bool vgPlain_OSetWord_Next ( OSet* os, UWord* val );
# 188 "../include/pub_tool_oset.h"
extern OSet* vgPlain_OSetGen_Create ( PtrdiffT keyOff, OSetCmp_t cmp,
                                      OSetAlloc_t alloc, HChar* cc,
                                      OSetFree_t _free );
extern void vgPlain_OSetGen_Destroy ( OSet* os );
extern void* vgPlain_OSetGen_AllocNode ( OSet* os, SizeT elemSize );
extern void vgPlain_OSetGen_FreeNode ( OSet* os, void* elem );
# 246 "../include/pub_tool_oset.h"
extern Word vgPlain_OSetGen_Size ( const OSet* os );
extern void vgPlain_OSetGen_Insert ( OSet* os, void* elem );
extern Bool vgPlain_OSetGen_Contains ( const OSet* os, const void* key );
extern void* vgPlain_OSetGen_Lookup ( const OSet* os, const void* key );
extern void* vgPlain_OSetGen_LookupWithCmp( OSet* os,
                                         const void* key, OSetCmp_t cmp );
extern void* vgPlain_OSetGen_Remove ( OSet* os, const void* key );
extern void vgPlain_OSetGen_ResetIter ( OSet* os );
extern void vgPlain_OSetGen_ResetIterAt ( OSet* os, const void* key );
extern void* vgPlain_OSetGen_Next ( OSet* os );
# 40 "pub_drd_bitmap.h" 2
# 54 "pub_drd_bitmap.h"
struct bitmap;




typedef enum { eLoad, eStore, eStart, eEnd } BmAccessTypeT;

struct bm_cache_elem
{
   Addr a1;
   struct bitmap2* bm2;
};




struct bitmap
{
   struct bm_cache_elem cache[4];
   OSet* oset;
};




struct bitmap* vgDrd_bm_new(void);
void vgDrd_bm_delete(struct bitmap* const bm);
void vgDrd_bm_init(struct bitmap* const bm);
void vgDrd_bm_cleanup(struct bitmap* const bm);
void vgDrd_bm_access_range(struct bitmap* const bm,
                           const Addr a1, const Addr a2,
                           const BmAccessTypeT access_type);
void vgDrd_bm_access_range_load(struct bitmap* const bm,
                                const Addr a1, const Addr a2);
void vgDrd_bm_access_load_1(struct bitmap* const bm, const Addr a1);
void vgDrd_bm_access_load_2(struct bitmap* const bm, const Addr a1);
void vgDrd_bm_access_load_4(struct bitmap* const bm, const Addr a1);
void vgDrd_bm_access_load_8(struct bitmap* const bm, const Addr a1);
void vgDrd_bm_access_range_store(struct bitmap* const bm,
                                 const Addr a1, const Addr a2);
void vgDrd_bm_access_store_1(struct bitmap* const bm, const Addr a1);
void vgDrd_bm_access_store_2(struct bitmap* const bm, const Addr a1);
void vgDrd_bm_access_store_4(struct bitmap* const bm, const Addr a1);
void vgDrd_bm_access_store_8(struct bitmap* const bm, const Addr a1);
Bool vgDrd_bm_has(struct bitmap* const bm,
                  const Addr a1, const Addr a2,
                  const BmAccessTypeT access_type);
Bool vgDrd_bm_has_any_load(struct bitmap* const bm,
                           const Addr a1, const Addr a2);
Bool vgDrd_bm_has_any_store(struct bitmap* const bm,
                            const Addr a1, const Addr a2);
Bool vgDrd_bm_has_any_access(struct bitmap* const bm,
                             const Addr a1, const Addr a2);
Bool vgDrd_bm_has_1(struct bitmap* const bm,
                    const Addr address, const BmAccessTypeT access_type);
void vgDrd_bm_clear(struct bitmap* const bm,
                    const Addr a1, const Addr a2);
void vgDrd_bm_clear_load(struct bitmap* const bm,
                         const Addr a1, const Addr a2);
void vgDrd_bm_clear_store(struct bitmap* const bm,
                          const Addr a1, const Addr a2);
Bool vgDrd_bm_test_and_clear(struct bitmap* const bm,
                             const Addr a1, const Addr a2);
Bool vgDrd_bm_has_conflict_with(struct bitmap* const bm,
                                const Addr a1, const Addr a2,
                                const BmAccessTypeT access_type);
Bool vgDrd_bm_load_1_has_conflict_with(struct bitmap* const bm, const Addr a1);
Bool vgDrd_bm_load_2_has_conflict_with(struct bitmap* const bm, const Addr a1);
Bool vgDrd_bm_load_4_has_conflict_with(struct bitmap* const bm, const Addr a1);
Bool vgDrd_bm_load_8_has_conflict_with(struct bitmap* const bm, const Addr a1);
Bool vgDrd_bm_load_has_conflict_with(struct bitmap* const bm,
                                     const Addr a1, const Addr a2);
Bool vgDrd_bm_store_1_has_conflict_with(struct bitmap* const bm,const Addr a1);
Bool vgDrd_bm_store_2_has_conflict_with(struct bitmap* const bm,const Addr a1);
Bool vgDrd_bm_store_4_has_conflict_with(struct bitmap* const bm,const Addr a1);
Bool vgDrd_bm_store_8_has_conflict_with(struct bitmap* const bm,const Addr a1);
Bool vgDrd_bm_store_has_conflict_with(struct bitmap* const bm,
                                      const Addr a1, const Addr a2);
Bool vgDrd_bm_equal(struct bitmap* const lhs, struct bitmap* const rhs);
void vgDrd_bm_swap(struct bitmap* const bm1, struct bitmap* const bm2);
void vgDrd_bm_merge2(struct bitmap* const lhs, struct bitmap* const rhs);
void vgDrd_bm_unmark(struct bitmap* bm);
Bool vgDrd_bm_is_marked(struct bitmap* bm, const Addr a);
void vgDrd_bm_mark(struct bitmap* bm1, struct bitmap* bm2);
void vgDrd_bm_clear_marked(struct bitmap* bm);
void vgDrd_bm_merge2_marked(struct bitmap* const lhs, struct bitmap* const rhs);
void vgDrd_bm_remove_cleared_marked(struct bitmap* bm);
int vgDrd_bm_has_races(struct bitmap* const bm1,
                       struct bitmap* const bm2);
void vgDrd_bm_report_races(ThreadId const tid1, ThreadId const tid2,
                           struct bitmap* const bm1,
                           struct bitmap* const bm2);
void vgDrd_bm_print(struct bitmap* bm);
ULong vgDrd_bm_get_bitmap_creation_count(void);
ULong vgDrd_bm_get_bitmap2_creation_count(void);
ULong vgDrd_bm_get_bitmap2_merge_count(void);

void* vgDrd_bm2_alloc_node(HChar* const ec, const SizeT szB);
void vgDrd_bm2_free_node(void* const bm2);
# 39 "drd_segment.h" 2
# 1 "../include/pub_tool_execontext.h" 1
# 34 "../include/pub_tool_execontext.h"
typedef
   struct _ExeContext
   ExeContext;



typedef
   enum { Vg_LowRes, Vg_MedRes, Vg_HighRes }
   VgRes;
# 60 "../include/pub_tool_execontext.h"
extern
ExeContext* vgPlain_record_ExeContext ( ThreadId tid, Word first_ip_delta );







extern
ExeContext* vgPlain_record_depth_1_ExeContext( ThreadId tid );




extern void vgPlain_apply_ExeContext( void(*action)(UInt n, Addr ip),
                                   ExeContext* ec, UInt n_ips );





extern Bool vgPlain_eq_ExeContext ( VgRes res, ExeContext* e1, ExeContext* e2 );


extern void vgPlain_pp_ExeContext ( ExeContext* ec );





extern UInt vgPlain_get_ECU_from_ExeContext( ExeContext* e );


extern Int vgPlain_get_ExeContext_n_ips( ExeContext* e );



extern ExeContext* vgPlain_get_ExeContext_from_ECU( UInt uniq );


ExeContext* vgPlain_make_depth_1_ExeContext_from_Addr( Addr a );




static inline Bool vgPlain_is_plausible_ECU( UInt ecu ) {
   return (ecu > 0) && ((ecu & 3) == 0);
}


ExeContext* vgPlain_make_ExeContext_from_StackTrace( Addr* ips, UInt n_ips );
# 40 "drd_segment.h" 2
# 1 "../include/pub_tool_stacktrace.h" 1
# 35 "../include/pub_tool_stacktrace.h"
typedef Addr* StackTrace;
# 59 "../include/pub_tool_stacktrace.h"
extern UInt vgPlain_get_StackTrace ( ThreadId tid,
                                         StackTrace ips, UInt n_ips,
                                         StackTrace sps,
                                         StackTrace fps,
                                  Word first_ip_delta );






extern void vgPlain_apply_StackTrace(
               void(*action)(UInt n, Addr ip, void* opaque),
               void* opaque,
               StackTrace ips, UInt n_ips
            );


extern void vgPlain_pp_StackTrace ( StackTrace ips, UInt n_ips );



extern void vgPlain_get_and_pp_StackTrace ( ThreadId tid, UInt n_ips );
# 41 "drd_segment.h" 2


typedef struct segment
{

   struct segment* next;
   struct segment* prev;
   DrdThreadId tid;

   int refcnt;

   ExeContext* stacktrace;

   VectorClock vc;




   struct bitmap bm;
} Segment;


Segment* vgDrd_sg_new(const DrdThreadId creator, const DrdThreadId created);
static int vgDrd_sg_get_refcnt(const Segment* const sg);
Segment* vgDrd_sg_get(Segment* const sg);
void vgDrd_sg_put(Segment* const sg);
static struct bitmap* vgDrd_sg_bm(Segment* const sg);
void vgDrd_sg_merge(Segment* const sg1, Segment* const sg2);
void vgDrd_sg_print(Segment* const sg);
Bool vgDrd_sg_get_trace(void);
void vgDrd_sg_set_trace(const Bool trace_segment);
ULong vgDrd_sg_get_segments_created_count(void);
ULong vgDrd_sg_get_segments_alive_count(void);
ULong vgDrd_sg_get_max_segments_alive_count(void);
ULong vgDrd_sg_get_segment_merge_count(void);



static __inline__ int vgDrd_sg_get_refcnt(const Segment* const sg)
{




   return sg->refcnt;
}


static __inline__ struct bitmap* vgDrd_sg_bm(Segment* const sg)
{




   return &sg->bm;
}
# 34 "drd_thread.h" 2



# 1 "../include/pub_tool_threadstate.h" 1
# 47 "../include/pub_tool_threadstate.h"
extern ThreadId vgPlain_get_running_tid ( void );
# 38 "drd_thread.h" 2
# 65 "drd_thread.h"
typedef UWord PThreadId;


typedef struct
{
   Segment* first;
   Segment* last;
   ThreadId vg_threadid;
   PThreadId pt_threadid;
   Addr stack_min_min;
   Addr stack_min;
   Addr stack_startup;
   Addr stack_max;
   SizeT stack_size;
   char name[64];
   Bool on_alt_stack;

   Bool vg_thread_exists;

   Bool posix_thread_exists;




   Bool detached_posix_thread;

   Bool is_recording_loads;

   Bool is_recording_stores;

   Int pthread_create_nesting_level;

   Int synchr_nesting;
} ThreadInfo;
# 111 "drd_thread.h"
extern DrdThreadId vgDrd_g_drd_running_tid;

extern ThreadInfo vgDrd_g_threadinfo[500];

extern struct bitmap* vgDrd_g_conflict_set;




void vgDrd_thread_trace_context_switches(const Bool t);
void vgDrd_thread_trace_conflict_set(const Bool t);
void vgDrd_thread_trace_conflict_set_bm(const Bool t);
Bool vgDrd_thread_get_trace_fork_join(void);
void vgDrd_thread_set_trace_fork_join(const Bool t);
void vgDrd_thread_set_segment_merging(const Bool m);
int vgDrd_thread_get_segment_merge_interval(void);
void vgDrd_thread_set_segment_merge_interval(const int i);

DrdThreadId vgDrd_VgThreadIdToDrdThreadId(const ThreadId tid);
DrdThreadId vgDrd_NewVgThreadIdToDrdThreadId(const ThreadId tid);
DrdThreadId vgDrd_PtThreadIdToDrdThreadId(const PThreadId tid);
ThreadId vgDrd_DrdThreadIdToVgThreadId(const DrdThreadId tid);
DrdThreadId vgDrd_thread_pre_create(const DrdThreadId creator,
                                    const ThreadId vg_created);
DrdThreadId vgDrd_thread_post_create(const ThreadId vg_created);
void vgDrd_thread_post_join(DrdThreadId drd_joiner, DrdThreadId drd_joinee);
void vgDrd_thread_delete(const DrdThreadId tid, Bool detached);
void vgDrd_thread_finished(const DrdThreadId tid);
void vgDrd_drd_thread_atfork_child(const DrdThreadId tid);
void vgDrd_thread_pre_cancel(const DrdThreadId tid);
void vgDrd_thread_set_stack_startup(const DrdThreadId tid,
                                    const Addr stack_startup);
Addr vgDrd_thread_get_stack_min(const DrdThreadId tid);
Addr vgDrd_thread_get_stack_min_min(const DrdThreadId tid);
Addr vgDrd_thread_get_stack_max(const DrdThreadId tid);
SizeT vgDrd_thread_get_stack_size(const DrdThreadId tid);
Bool vgDrd_thread_get_on_alt_stack(const DrdThreadId tid);
void vgDrd_thread_set_on_alt_stack(const DrdThreadId tid,
                                   const Bool on_alt_stack);
Int vgDrd_thread_get_threads_on_alt_stack(void);
void vgDrd_thread_set_pthreadid(const DrdThreadId tid, const PThreadId ptid);
Bool vgDrd_thread_get_joinable(const DrdThreadId tid);
void vgDrd_thread_set_joinable(const DrdThreadId tid, const Bool joinable);
void vgDrd_thread_entering_pthread_create(const DrdThreadId tid);
void vgDrd_thread_left_pthread_create(const DrdThreadId tid);
const char* vgDrd_thread_get_name(const DrdThreadId tid);
void vgDrd_thread_set_name(const DrdThreadId tid, const char* const name);
void vgDrd_thread_set_vg_running_tid(const ThreadId vg_tid);
void vgDrd_thread_set_running_tid(const ThreadId vg_tid,
                                  const DrdThreadId drd_tid);
int vgDrd_thread_enter_synchr(const DrdThreadId tid);
int vgDrd_thread_leave_synchr(const DrdThreadId tid);
int vgDrd_thread_get_synchr_nesting_count(const DrdThreadId tid);
void vgDrd_thread_new_segment(const DrdThreadId tid);
VectorClock* vgDrd_thread_get_vc(const DrdThreadId tid);
void vgDrd_thread_get_latest_segment(Segment** sg, const DrdThreadId tid);
void vgDrd_thread_combine_vc_join(const DrdThreadId joiner,
                                  const DrdThreadId joinee);
void vgDrd_thread_new_segment_and_combine_vc(DrdThreadId tid,
                                             const Segment* sg);
void vgDrd_thread_update_conflict_set(const DrdThreadId tid,
                                      const VectorClock* const old_vc);

void vgDrd_thread_stop_using_mem(const Addr a1, const Addr a2,
                                 const Bool dont_clear_access);
void vgDrd_thread_set_record_loads(const DrdThreadId tid, const Bool enabled);
void vgDrd_thread_set_record_stores(const DrdThreadId tid, const Bool enabled);
void vgDrd_thread_print_all(void);
void vgDrd_thread_report_races(const DrdThreadId tid);
void vgDrd_thread_report_races_segment(const DrdThreadId tid,
                                       const Segment* const p);
void vgDrd_thread_report_all_races(void);
void vgDrd_thread_report_conflicting_segments(const DrdThreadId tid,
                                              const Addr addr,
                                              const SizeT size,
                                              const BmAccessTypeT access_type);
ULong vgDrd_thread_get_context_switch_count(void);
ULong vgDrd_thread_get_report_races_count(void);
ULong vgDrd_thread_get_discard_ordered_segments_count(void);
ULong vgDrd_thread_get_compute_conflict_set_count(void);
ULong vgDrd_thread_get_update_conflict_set_count(void);
ULong vgDrd_thread_get_update_conflict_set_new_sg_count(void);
ULong vgDrd_thread_get_update_conflict_set_sync_count(void);
ULong vgDrd_thread_get_update_conflict_set_join_count(void);
ULong vgDrd_thread_get_conflict_set_bitmap_creation_count(void);
ULong vgDrd_thread_get_conflict_set_bitmap2_creation_count(void);
# 210 "drd_thread.h"
static __inline__
Bool vgDrd_IsValidDrdThreadId(const DrdThreadId tid)
{
   return (0 <= (int)tid && tid < 500 && tid != 0
           && ! (vgDrd_g_threadinfo[tid].vg_thread_exists == ((Bool)0)
                 && vgDrd_g_threadinfo[tid].posix_thread_exists == ((Bool)0)
                 && vgDrd_g_threadinfo[tid].detached_posix_thread == ((Bool)0)));
}


static __inline__
DrdThreadId vgDrd_thread_get_running_tid(void)
{



   return vgDrd_g_drd_running_tid;
}


static __inline__
struct bitmap* vgDrd_thread_get_conflict_set(void)
{
   return vgDrd_g_conflict_set;
}





static __inline__
Bool vgDrd_running_thread_inside_pthread_create(void)
{
   return (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid]
           .pthread_create_nesting_level > 0);
}





static __inline__
Bool vgDrd_running_thread_is_recording_loads(void)
{





   return (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].synchr_nesting == 0
           && vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].is_recording_loads);
}





static __inline__
Bool vgDrd_running_thread_is_recording_stores(void)
{





   return (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].synchr_nesting == 0
           && vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].is_recording_stores);
}





static __inline__
void vgDrd_thread_set_stack_min(const DrdThreadId tid, const Addr stack_min)
{





   vgDrd_g_threadinfo[tid].stack_min = stack_min;







   if (__builtin_expect((stack_min < vgDrd_g_threadinfo[tid].stack_min_min), 0))
   {
      vgDrd_g_threadinfo[tid].stack_min_min = stack_min;
   }
}





static __inline__
Bool vgDrd_thread_address_on_stack(const Addr a)
{
   return (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].stack_min <= a
           && a < vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].stack_max);
}





static __inline__
Bool vgDrd_thread_address_on_any_stack(const Addr a)
{
   int i;

   for (i = 1; i < 500; i++)
   {
      if (vgDrd_g_threadinfo[i].vg_thread_exists
          && vgDrd_g_threadinfo[i].stack_min <= a
          && a < vgDrd_g_threadinfo[i].stack_max)
      {
         return ((Bool)1);
      }
   }
   return ((Bool)0);
}


static __inline__
Segment* vgDrd_thread_get_segment(const DrdThreadId tid)
{





   return vgDrd_g_threadinfo[tid].last;
}


static __inline__
Segment* vgDrd_running_thread_get_segment(void)
{
   return vgDrd_thread_get_segment(vgDrd_g_drd_running_tid);
}
# 31 "drd_cond.h" 2





struct cond_info;




extern Addr vgDrd_pthread_cond_initializer;
extern int vgDrd_pthread_cond_initializer_size;




void vgDrd_cond_set_report_signal_unlocked(const Bool r);
void vgDrd_cond_set_trace(const Bool trace_cond);
struct cond_info* vgDrd_cond_get(const Addr cond);
void vgDrd_cond_pre_init(const Addr cond);
void vgDrd_cond_post_destroy(const Addr cond);
void vgDrd_cond_pre_wait(const Addr cond, const Addr mutex);
void vgDrd_cond_post_wait(const Addr cond);
void vgDrd_cond_pre_signal(const Addr cond);
void vgDrd_cond_pre_broadcast(const Addr cond);
# 29 "drd_clientreq.c" 2
# 1 "drd_error.h" 1
# 33 "drd_error.h"
# 1 "../include/pub_tool_debuginfo.h" 1
# 44 "../include/pub_tool_debuginfo.h"
extern Bool vgPlain_get_filename ( Addr a, Char* filename, Int n_filename );
extern Bool vgPlain_get_fnname ( Addr a, Char* fnname, Int n_fnname );
extern Bool vgPlain_get_linenum ( Addr a, UInt* linenum );
extern Bool vgPlain_get_fnname_w_offset
                              ( Addr a, Char* fnname, Int n_fnname );
# 61 "../include/pub_tool_debuginfo.h"
extern Bool vgPlain_get_filename_linenum
                              ( Addr a,
                                       Char* filename, Int n_filename,
                                       Char* dirname, Int n_dirname,
                                       Bool* dirname_available,
                                       UInt* linenum );
# 75 "../include/pub_tool_debuginfo.h"
extern Bool vgPlain_get_fnname_if_entry ( Addr a, Char* fnname, Int n_fnname );

typedef
   enum {
      Vg_FnNameNormal,
      Vg_FnNameMain,
      Vg_FnNameBelowMain
   } Vg_FnNameKind;


extern Vg_FnNameKind vgPlain_get_fnname_kind ( Char* name );


extern Vg_FnNameKind vgPlain_get_fnname_kind_from_IP ( Addr ip );





extern Bool vgPlain_get_datasym_and_offset( Addr data_addr,
                                                Char* dname, Int n_dname,
                                                PtrdiffT* offset );
# 111 "../include/pub_tool_debuginfo.h"
Bool vgPlain_get_data_description(
                void* dname1v,
                void* dname2v,
        Addr data_addr
     );



extern Bool vgPlain_get_objname ( Addr a, Char* objname, Int n_objname );
# 128 "../include/pub_tool_debuginfo.h"
extern Char* vgPlain_describe_IP(Addr eip, Char* buf, Int n_buf);







typedef
   struct {
      PtrdiffT base;
      SizeT szB;
      Bool spRel;
      Bool isVec;
      HChar name[16];
   }
   StackBlock;

extern void*
             vgPlain_di_get_stack_blocks_at_ip( Addr ip, Bool arrays_only );
# 157 "../include/pub_tool_debuginfo.h"
typedef
   struct {
      Addr addr;
      SizeT szB;
      Bool isVec;
      HChar name[16];
      HChar soname[16];
   }
   GlobalBlock;

extern void*
vgPlain_di_get_global_blocks_from_dihandle ( ULong di_handle,
                                          Bool arrays_only );
# 178 "../include/pub_tool_debuginfo.h"
typedef struct _DebugInfo DebugInfo;



DebugInfo* vgPlain_find_DebugInfo ( Addr a );


Addr vgPlain_DebugInfo_get_text_avma ( const DebugInfo *di );
SizeT vgPlain_DebugInfo_get_text_size ( const DebugInfo *di );
Addr vgPlain_DebugInfo_get_plt_avma ( const DebugInfo *di );
SizeT vgPlain_DebugInfo_get_plt_size ( const DebugInfo *di );
Addr vgPlain_DebugInfo_get_gotplt_avma ( const DebugInfo *di );
SizeT vgPlain_DebugInfo_get_gotplt_size ( const DebugInfo *di );
const UChar* vgPlain_DebugInfo_get_soname ( const DebugInfo *di );
const UChar* vgPlain_DebugInfo_get_filename ( const DebugInfo *di );
PtrdiffT vgPlain_DebugInfo_get_text_bias ( const DebugInfo *di );
# 202 "../include/pub_tool_debuginfo.h"
const DebugInfo* vgPlain_next_DebugInfo ( const DebugInfo *di );





Int vgPlain_DebugInfo_syms_howmany ( const DebugInfo *di );
void vgPlain_DebugInfo_syms_getidx ( const DebugInfo *di,
                                   Int idx,
                                          Addr* avma,
                                          Addr* tocptr,
                                          UInt* size,
                                          HChar** name,
                                          Bool* isText,
                                          Bool* isIFunc );



typedef
   enum {
      Vg_SectUnknown,
      Vg_SectText,
      Vg_SectData,
      Vg_SectBSS,
      Vg_SectGOT,
      Vg_SectPLT,
      Vg_SectGOTPLT,
      Vg_SectOPD
   }
   VgSectKind;



const HChar* vgPlain_pp_SectKind( VgSectKind kind );





VgSectKind vgPlain_DebugInfo_sect_kind( UChar* name, SizeT n_name,
                                     Addr a);
# 34 "drd_error.h" 2
# 1 "../include/pub_tool_errormgr.h" 1
# 34 "../include/pub_tool_errormgr.h"
# 1 "../include/pub_tool_execontext.h" 1
# 35 "../include/pub_tool_errormgr.h" 2
# 43 "../include/pub_tool_errormgr.h"
typedef
   Int
   ErrorKind;







typedef
   struct _Error
   Error;



ExeContext* vgPlain_get_error_where ( Error* err );
ErrorKind vgPlain_get_error_kind ( Error* err );
Addr vgPlain_get_error_address ( Error* err );
Char* vgPlain_get_error_string ( Error* err );
void* vgPlain_get_error_extra ( Error* err );
# 75 "../include/pub_tool_errormgr.h"
extern void vgPlain_maybe_record_error ( ThreadId tid, ErrorKind ekind,
                                      Addr a, Char* s, void* extra );
# 85 "../include/pub_tool_errormgr.h"
extern Bool vgPlain_unique_error ( ThreadId tid, ErrorKind ekind,
                                Addr a, Char* s, void* extra,
                                ExeContext* where, Bool print_error,
                                Bool allow_GDB_attach, Bool count_error );
# 97 "../include/pub_tool_errormgr.h"
extern Bool vgPlain_get_line ( Int fd, Char** bufpp, SizeT* nBufp, Int* lineno );
# 107 "../include/pub_tool_errormgr.h"
typedef
   Int
   SuppKind;






typedef
   struct _Supp
   Supp;


SuppKind vgPlain_get_supp_kind ( Supp* su );
Char* vgPlain_get_supp_string ( Supp* su );
void* vgPlain_get_supp_extra ( Supp* su );


void vgPlain_set_supp_kind ( Supp* su, SuppKind suppkind );

void vgPlain_set_supp_string ( Supp* su, Char* string );
void vgPlain_set_supp_extra ( Supp* su, void* extra );
# 35 "drd_error.h" 2




typedef enum {

   DataRaceErr = 1,

   MutexErr = 2,

   CondErr = 3,

   CondDestrErr = 4,

   CondRaceErr = 5,

   CondWaitErr = 6,

   SemaphoreErr = 7,

   BarrierErr = 8,

   RwlockErr = 9,

   HoldtimeErr = 10,

   GenericErr = 11,

   InvalidThreadId = 12,

   UnimpHgClReq = 13,

   UnimpDrdClReq = 14,
} DrdErrorKind;


typedef
enum {

   eStack,
   eUnknown,

   eMallocd,
   eSegment,



}
   AddrKind;


typedef
struct {
   AddrKind akind;
   SizeT size;
   PtrdiffT rwoffset;
   ExeContext* lastchange;
   DrdThreadId stack_tid;
   DebugInfo* debuginfo;
   Char name[256];
   Char descr[256];
} AddrInfo;





typedef struct {
   DrdThreadId tid;
   Addr addr;
   SizeT size;
   BmAccessTypeT access_type;
} DataRaceErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr mutex;
   Int recursion_count;
   DrdThreadId owner;
} MutexErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr cond;
} CondErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr cond;
   Addr mutex;
   DrdThreadId owner;
} CondDestrErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr cond;
   Addr mutex;
} CondRaceErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr cond;
   Addr mutex1;
   Addr mutex2;
} CondWaitErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr semaphore;
} SemaphoreErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr barrier;
   DrdThreadId other_tid;
   ExeContext* other_context;
} BarrierErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr rwlock;
} RwlockErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr synchronization_object;
   ExeContext* acquired_at;
   UInt hold_time_ms;
   UInt threshold_ms;
} HoldtimeErrInfo;

typedef struct {
   DrdThreadId tid;
   Addr addr;
} GenericErrInfo;

typedef struct {
   DrdThreadId tid;
   ULong ptid;
} InvalidThreadIdInfo;

typedef struct {
   DrdThreadId tid;
   Char* descr;
} UnimpClReqInfo;

void vgDrd_set_show_conflicting_segments(const Bool scs);
void vgDrd_register_error_handlers(void);
# 30 "drd_clientreq.c" 2
# 1 "drd_hb.h" 1
# 36 "drd_hb.h"
struct hb_info;




void vgDrd_hb_set_trace(const Bool trace_hb);
struct hb_info* vgDrd_hb_get(const Addr hb);
struct hb_info* vgDrd_hb_get_or_allocate(const Addr hb);
void vgDrd_hb_init(const Addr hb);
void vgDrd_hb_destroy(const Addr hb);
void vgDrd_hb_happens_after(const DrdThreadId tid, const Addr hb);
void vgDrd_hb_happens_before(const DrdThreadId tid, const Addr hb);
void vgDrd_hb_happens_done(const DrdThreadId tid, const Addr hb);
# 31 "drd_clientreq.c" 2
# 1 "drd_load_store.h" 1
# 35 "drd_load_store.h"
# 1 "../VEX/pub/libvex.h" 1
# 40 "../VEX/pub/libvex.h"
# 1 "../VEX/pub/libvex_basictypes.h" 1
# 41 "../VEX/pub/libvex.h" 2
# 1 "../VEX/pub/libvex_ir.h" 1
# 219 "../VEX/pub/libvex_ir.h"
typedef
   enum {
      Ity_INVALID=0x11000,
      Ity_I1,
      Ity_I8,
      Ity_I16,
      Ity_I32,
      Ity_I64,
      Ity_I128,
      Ity_F32,
      Ity_F64,
      Ity_F128,
      Ity_V128
   }
   IRType;


extern void ppIRType ( IRType );


extern Int sizeofIRType ( IRType );





typedef
   enum {
      Iend_LE=0x12000,
      Iend_BE
   }
   IREndness;







typedef
   enum {
      Ico_U1=0x13000,
      Ico_U8,
      Ico_U16,
      Ico_U32,
      Ico_U64,
      Ico_F32,
      Ico_F32i,

      Ico_F64,
      Ico_F64i,

      Ico_V128

   }
   IRConstTag;





typedef
   struct _IRConst {
      IRConstTag tag;
      union {
         Bool U1;
         UChar U8;
         UShort U16;
         UInt U32;
         ULong U64;
         Float F32;
         UInt F32i;
         Double F64;
         ULong F64i;
         UShort V128;
      } Ico;
   }
   IRConst;


extern IRConst* IRConst_U1 ( Bool );
extern IRConst* IRConst_U8 ( UChar );
extern IRConst* IRConst_U16 ( UShort );
extern IRConst* IRConst_U32 ( UInt );
extern IRConst* IRConst_U64 ( ULong );
extern IRConst* IRConst_F32 ( Float );
extern IRConst* IRConst_F32i ( UInt );
extern IRConst* IRConst_F64 ( Double );
extern IRConst* IRConst_F64i ( ULong );
extern IRConst* IRConst_V128 ( UShort );


extern IRConst* deepCopyIRConst ( IRConst* );


extern void ppIRConst ( IRConst* );


extern Bool eqIRConst ( IRConst*, IRConst* );
# 336 "../VEX/pub/libvex_ir.h"
typedef
   struct {
      Int regparms;
      HChar* name;
      void* addr;
      UInt mcx_mask;
   }
   IRCallee;


extern IRCallee* mkIRCallee ( Int regparms, HChar* name, void* addr );


extern IRCallee* deepCopyIRCallee ( IRCallee* );


extern void ppIRCallee ( IRCallee* );







typedef
   struct {
      Int base;
      IRType elemTy;
      Int nElems;
   }
   IRRegArray;

extern IRRegArray* mkIRRegArray ( Int, IRType, Int );

extern IRRegArray* deepCopyIRRegArray ( IRRegArray* );

extern void ppIRRegArray ( IRRegArray* );
extern Bool eqIRRegArray ( IRRegArray*, IRRegArray* );







typedef UInt IRTemp;


extern void ppIRTemp ( IRTemp );
# 401 "../VEX/pub/libvex_ir.h"
typedef
   enum {



      Iop_INVALID=0x14000,
      Iop_Add8, Iop_Add16, Iop_Add32, Iop_Add64,
      Iop_Sub8, Iop_Sub16, Iop_Sub32, Iop_Sub64,

      Iop_Mul8, Iop_Mul16, Iop_Mul32, Iop_Mul64,
      Iop_Or8, Iop_Or16, Iop_Or32, Iop_Or64,
      Iop_And8, Iop_And16, Iop_And32, Iop_And64,
      Iop_Xor8, Iop_Xor16, Iop_Xor32, Iop_Xor64,
      Iop_Shl8, Iop_Shl16, Iop_Shl32, Iop_Shl64,
      Iop_Shr8, Iop_Shr16, Iop_Shr32, Iop_Shr64,
      Iop_Sar8, Iop_Sar16, Iop_Sar32, Iop_Sar64,

      Iop_CmpEQ8, Iop_CmpEQ16, Iop_CmpEQ32, Iop_CmpEQ64,
      Iop_CmpNE8, Iop_CmpNE16, Iop_CmpNE32, Iop_CmpNE64,

      Iop_Not8, Iop_Not16, Iop_Not32, Iop_Not64,






      Iop_CasCmpEQ8, Iop_CasCmpEQ16, Iop_CasCmpEQ32, Iop_CasCmpEQ64,
      Iop_CasCmpNE8, Iop_CasCmpNE16, Iop_CasCmpNE32, Iop_CasCmpNE64,




      Iop_MullS8, Iop_MullS16, Iop_MullS32, Iop_MullS64,
      Iop_MullU8, Iop_MullU16, Iop_MullU32, Iop_MullU64,


      Iop_Clz64, Iop_Clz32,
      Iop_Ctz64, Iop_Ctz32,





      Iop_CmpLT32S, Iop_CmpLT64S,
      Iop_CmpLE32S, Iop_CmpLE64S,
      Iop_CmpLT32U, Iop_CmpLT64U,
      Iop_CmpLE32U, Iop_CmpLE64U,


      Iop_CmpNEZ8, Iop_CmpNEZ16, Iop_CmpNEZ32, Iop_CmpNEZ64,
      Iop_CmpwNEZ32, Iop_CmpwNEZ64,
      Iop_Left8, Iop_Left16, Iop_Left32, Iop_Left64,
      Iop_Max32U,







      Iop_CmpORD32U, Iop_CmpORD64U,
      Iop_CmpORD32S, Iop_CmpORD64S,



      Iop_DivU32,
      Iop_DivS32,
      Iop_DivU64,
      Iop_DivS64,

      Iop_DivModU64to32,

      Iop_DivModS64to32,

      Iop_DivModU128to64,

      Iop_DivModS128to64,

      Iop_DivModS64to64,
# 489 "../VEX/pub/libvex_ir.h"
      Iop_8Uto16, Iop_8Uto32, Iop_8Uto64,
                  Iop_16Uto32, Iop_16Uto64,
                               Iop_32Uto64,
      Iop_8Sto16, Iop_8Sto32, Iop_8Sto64,
                  Iop_16Sto32, Iop_16Sto64,
                               Iop_32Sto64,


      Iop_64to8, Iop_32to8, Iop_64to16,

      Iop_16to8,
      Iop_16HIto8,
      Iop_8HLto16,

      Iop_32to16,
      Iop_32HIto16,
      Iop_16HLto32,

      Iop_64to32,
      Iop_64HIto32,
      Iop_32HLto64,

      Iop_128to64,
      Iop_128HIto64,
      Iop_64HLto128,

      Iop_Not1,
      Iop_32to1,
      Iop_64to1,
      Iop_1Uto8,
      Iop_1Uto32,
      Iop_1Uto64,
      Iop_1Sto8,
      Iop_1Sto16,
      Iop_1Sto32,
      Iop_1Sto64,







      Iop_AddF64, Iop_SubF64, Iop_MulF64, Iop_DivF64,


      Iop_AddF32, Iop_SubF32, Iop_MulF32, Iop_DivF32,




      Iop_AddF64r32, Iop_SubF64r32, Iop_MulF64r32, Iop_DivF64r32,



      Iop_NegF64, Iop_AbsF64,


      Iop_NegF32, Iop_AbsF32,



      Iop_SqrtF64, Iop_SqrtF64r32,


      Iop_SqrtF32,
# 565 "../VEX/pub/libvex_ir.h"
      Iop_CmpF64,
      Iop_CmpF32,
      Iop_CmpF128,
# 610 "../VEX/pub/libvex_ir.h"
      Iop_F64toI16S,
      Iop_F64toI32S,
      Iop_F64toI64S,

      Iop_F64toI32U,

      Iop_I16StoF64,
      Iop_I32StoF64,
      Iop_I64StoF64,

      Iop_I32UtoF64,

      Iop_F32toI16S,
      Iop_F32toI32S,
      Iop_F32toI64S,

      Iop_I16StoF32,
      Iop_I32StoF32,
      Iop_I64StoF32,


      Iop_F32toF64,
      Iop_F64toF32,



      Iop_ReinterpF64asI64, Iop_ReinterpI64asF64,
      Iop_ReinterpF32asI32, Iop_ReinterpI32asF32,


      Iop_F64HLtoF128,
      Iop_F128HItoF64,
      Iop_F128LOtoF64,


      Iop_AddF128, Iop_SubF128, Iop_MulF128, Iop_DivF128,


      Iop_NegF128, Iop_AbsF128,


      Iop_SqrtF128,

      Iop_I32StoF128,
      Iop_I64StoF128,
      Iop_F32toF128,
      Iop_F64toF128,

      Iop_F128toI32S,
      Iop_F128toI64S,
      Iop_F128toF64,
      Iop_F128toF32,





      Iop_AtanF64,
      Iop_Yl2xF64,
      Iop_Yl2xp1F64,
      Iop_PRemF64,
      Iop_PRemC3210F64,
      Iop_PRem1F64,
      Iop_PRem1C3210F64,
      Iop_ScaleF64,






      Iop_SinF64,
      Iop_CosF64,
      Iop_TanF64,
      Iop_2xm1F64,
      Iop_RoundF64toInt,

      Iop_RoundF32toInt,







      Iop_MAddF32, Iop_MSubF32,
# 705 "../VEX/pub/libvex_ir.h"
      Iop_MAddF64, Iop_MSubF64,




      Iop_MAddF64r32, Iop_MSubF64r32,


      Iop_Est5FRSqrt,
      Iop_RoundF64toF64_NEAREST,
      Iop_RoundF64toF64_NegINF,
      Iop_RoundF64toF64_PosINF,
      Iop_RoundF64toF64_ZERO,


      Iop_TruncF64asF32,


      Iop_RoundF64toF32,




      Iop_CalcFPRF,





      Iop_Add16x2, Iop_Sub16x2,
      Iop_QAdd16Sx2, Iop_QAdd16Ux2,
      Iop_QSub16Sx2, Iop_QSub16Ux2,




      Iop_HAdd16Ux2, Iop_HAdd16Sx2,
      Iop_HSub16Ux2, Iop_HSub16Sx2,


      Iop_Add8x4, Iop_Sub8x4,
      Iop_QAdd8Sx4, Iop_QAdd8Ux4,
      Iop_QSub8Sx4, Iop_QSub8Ux4,




      Iop_HAdd8Ux4, Iop_HAdd8Sx4,
      Iop_HSub8Ux4, Iop_HSub8Sx4,


      Iop_Sad8Ux4,


      Iop_CmpNEZ16x2, Iop_CmpNEZ8x4,




      Iop_I32UtoFx2, Iop_I32StoFx2,
      Iop_FtoI32Ux2_RZ, Iop_FtoI32Sx2_RZ,



      Iop_F32ToFixed32Ux2_RZ, Iop_F32ToFixed32Sx2_RZ,
      Iop_Fixed32UToF32x2_RN, Iop_Fixed32SToF32x2_RN,


      Iop_Max32Fx2, Iop_Min32Fx2,


      Iop_PwMax32Fx2, Iop_PwMin32Fx2,


      Iop_CmpEQ32Fx2, Iop_CmpGT32Fx2, Iop_CmpGE32Fx2,




      Iop_Recip32Fx2,




      Iop_Recps32Fx2,



      Iop_Rsqrte32Fx2,




      Iop_Rsqrts32Fx2,


      Iop_Neg32Fx2, Iop_Abs32Fx2,




      Iop_CmpNEZ8x8, Iop_CmpNEZ16x4, Iop_CmpNEZ32x2,


      Iop_Add8x8, Iop_Add16x4, Iop_Add32x2,
      Iop_QAdd8Ux8, Iop_QAdd16Ux4, Iop_QAdd32Ux2, Iop_QAdd64Ux1,
      Iop_QAdd8Sx8, Iop_QAdd16Sx4, Iop_QAdd32Sx2, Iop_QAdd64Sx1,




      Iop_PwAdd8x8, Iop_PwAdd16x4, Iop_PwAdd32x2,
      Iop_PwMax8Sx8, Iop_PwMax16Sx4, Iop_PwMax32Sx2,
      Iop_PwMax8Ux8, Iop_PwMax16Ux4, Iop_PwMax32Ux2,
      Iop_PwMin8Sx8, Iop_PwMin16Sx4, Iop_PwMin32Sx2,
      Iop_PwMin8Ux8, Iop_PwMin16Ux4, Iop_PwMin32Ux2,





      Iop_PwAddL8Ux8, Iop_PwAddL16Ux4, Iop_PwAddL32Ux2,
      Iop_PwAddL8Sx8, Iop_PwAddL16Sx4, Iop_PwAddL32Sx2,


      Iop_Sub8x8, Iop_Sub16x4, Iop_Sub32x2,
      Iop_QSub8Ux8, Iop_QSub16Ux4, Iop_QSub32Ux2, Iop_QSub64Ux1,
      Iop_QSub8Sx8, Iop_QSub16Sx4, Iop_QSub32Sx2, Iop_QSub64Sx1,


      Iop_Abs8x8, Iop_Abs16x4, Iop_Abs32x2,


      Iop_Mul8x8, Iop_Mul16x4, Iop_Mul32x2,
      Iop_Mul32Fx2,
      Iop_MulHi16Ux4,
      Iop_MulHi16Sx4,


      Iop_PolynomialMul8x8,







      Iop_QDMulHi16Sx4, Iop_QDMulHi32Sx2,
      Iop_QRDMulHi16Sx4, Iop_QRDMulHi32Sx2,


      Iop_Avg8Ux8,
      Iop_Avg16Ux4,


      Iop_Max8Sx8, Iop_Max16Sx4, Iop_Max32Sx2,
      Iop_Max8Ux8, Iop_Max16Ux4, Iop_Max32Ux2,
      Iop_Min8Sx8, Iop_Min16Sx4, Iop_Min32Sx2,
      Iop_Min8Ux8, Iop_Min16Ux4, Iop_Min32Ux2,


      Iop_CmpEQ8x8, Iop_CmpEQ16x4, Iop_CmpEQ32x2,
      Iop_CmpGT8Ux8, Iop_CmpGT16Ux4, Iop_CmpGT32Ux2,
      Iop_CmpGT8Sx8, Iop_CmpGT16Sx4, Iop_CmpGT32Sx2,



      Iop_Cnt8x8,
      Iop_Clz8Sx8, Iop_Clz16Sx4, Iop_Clz32Sx2,
      Iop_Cls8Sx8, Iop_Cls16Sx4, Iop_Cls32Sx2,


      Iop_Shl8x8, Iop_Shl16x4, Iop_Shl32x2,
      Iop_Shr8x8, Iop_Shr16x4, Iop_Shr32x2,
      Iop_Sar8x8, Iop_Sar16x4, Iop_Sar32x2,
      Iop_Sal8x8, Iop_Sal16x4, Iop_Sal32x2, Iop_Sal64x1,


      Iop_ShlN8x8, Iop_ShlN16x4, Iop_ShlN32x2,
      Iop_ShrN8x8, Iop_ShrN16x4, Iop_ShrN32x2,
      Iop_SarN8x8, Iop_SarN16x4, Iop_SarN32x2,


      Iop_QShl8x8, Iop_QShl16x4, Iop_QShl32x2, Iop_QShl64x1,
      Iop_QSal8x8, Iop_QSal16x4, Iop_QSal32x2, Iop_QSal64x1,

      Iop_QShlN8Sx8, Iop_QShlN16Sx4, Iop_QShlN32Sx2, Iop_QShlN64Sx1,
      Iop_QShlN8x8, Iop_QShlN16x4, Iop_QShlN32x2, Iop_QShlN64x1,
      Iop_QSalN8x8, Iop_QSalN16x4, Iop_QSalN32x2, Iop_QSalN64x1,


      Iop_QNarrow16Ux4,
      Iop_QNarrow16Sx4,
      Iop_QNarrow32Sx2,





      Iop_InterleaveHI8x8, Iop_InterleaveHI16x4, Iop_InterleaveHI32x2,
      Iop_InterleaveLO8x8, Iop_InterleaveLO16x4, Iop_InterleaveLO32x2,



      Iop_InterleaveOddLanes8x8, Iop_InterleaveEvenLanes8x8,
      Iop_InterleaveOddLanes16x4, Iop_InterleaveEvenLanes16x4,






      Iop_CatOddLanes8x8, Iop_CatOddLanes16x4,
      Iop_CatEvenLanes8x8, Iop_CatEvenLanes16x4,





      Iop_GetElem8x8, Iop_GetElem16x4, Iop_GetElem32x2,
      Iop_SetElem8x8, Iop_SetElem16x4, Iop_SetElem32x2,


      Iop_Dup8x8, Iop_Dup16x4, Iop_Dup32x2,






      Iop_Extract64,







      Iop_Reverse16_8x8,
      Iop_Reverse32_8x8, Iop_Reverse32_16x4,
      Iop_Reverse64_8x8, Iop_Reverse64_16x4, Iop_Reverse64_32x2,






      Iop_Perm8x8,



      Iop_Recip32x2, Iop_Rsqrte32x2,






      Iop_Add32Fx4, Iop_Sub32Fx4, Iop_Mul32Fx4, Iop_Div32Fx4,
      Iop_Max32Fx4, Iop_Min32Fx4,
      Iop_Add32Fx2, Iop_Sub32Fx2,


      Iop_CmpEQ32Fx4, Iop_CmpLT32Fx4, Iop_CmpLE32Fx4, Iop_CmpUN32Fx4,
      Iop_CmpGT32Fx4, Iop_CmpGE32Fx4,


      Iop_Abs32Fx4,


      Iop_PwMax32Fx4, Iop_PwMin32Fx4,


      Iop_Sqrt32Fx4, Iop_RSqrt32Fx4,
      Iop_Neg32Fx4,




      Iop_Recip32Fx4,




      Iop_Recps32Fx4,



      Iop_Rsqrte32Fx4,




      Iop_Rsqrts32Fx4,






      Iop_I32UtoFx4, Iop_I32StoFx4,
      Iop_FtoI32Ux4_RZ, Iop_FtoI32Sx4_RZ,
      Iop_QFtoI32Ux4_RZ, Iop_QFtoI32Sx4_RZ,
      Iop_RoundF32x4_RM, Iop_RoundF32x4_RP,
      Iop_RoundF32x4_RN, Iop_RoundF32x4_RZ,



      Iop_F32ToFixed32Ux4_RZ, Iop_F32ToFixed32Sx4_RZ,
      Iop_Fixed32UToF32x4_RN, Iop_Fixed32SToF32x4_RN,


      Iop_F32toF16x4, Iop_F16toF32x4,







      Iop_Add32F0x4, Iop_Sub32F0x4, Iop_Mul32F0x4, Iop_Div32F0x4,
      Iop_Max32F0x4, Iop_Min32F0x4,
      Iop_CmpEQ32F0x4, Iop_CmpLT32F0x4, Iop_CmpLE32F0x4, Iop_CmpUN32F0x4,


      Iop_Recip32F0x4, Iop_Sqrt32F0x4, Iop_RSqrt32F0x4,




      Iop_Add64Fx2, Iop_Sub64Fx2, Iop_Mul64Fx2, Iop_Div64Fx2,
      Iop_Max64Fx2, Iop_Min64Fx2,
      Iop_CmpEQ64Fx2, Iop_CmpLT64Fx2, Iop_CmpLE64Fx2, Iop_CmpUN64Fx2,


      Iop_Recip64Fx2, Iop_Sqrt64Fx2, Iop_RSqrt64Fx2,







      Iop_Add64F0x2, Iop_Sub64F0x2, Iop_Mul64F0x2, Iop_Div64F0x2,
      Iop_Max64F0x2, Iop_Min64F0x2,
      Iop_CmpEQ64F0x2, Iop_CmpLT64F0x2, Iop_CmpLE64F0x2, Iop_CmpUN64F0x2,


      Iop_Recip64F0x2, Iop_Sqrt64F0x2, Iop_RSqrt64F0x2,




      Iop_V128to64,
      Iop_V128HIto64,
      Iop_64HLtoV128,

      Iop_64UtoV128,
      Iop_SetV128lo64,


      Iop_32UtoV128,
      Iop_V128to32,
      Iop_SetV128lo32,




      Iop_NotV128,
      Iop_AndV128, Iop_OrV128, Iop_XorV128,


      Iop_ShlV128, Iop_ShrV128,


      Iop_CmpNEZ8x16, Iop_CmpNEZ16x8, Iop_CmpNEZ32x4, Iop_CmpNEZ64x2,


      Iop_Add8x16, Iop_Add16x8, Iop_Add32x4, Iop_Add64x2,
      Iop_QAdd8Ux16, Iop_QAdd16Ux8, Iop_QAdd32Ux4, Iop_QAdd64Ux2,
      Iop_QAdd8Sx16, Iop_QAdd16Sx8, Iop_QAdd32Sx4, Iop_QAdd64Sx2,


      Iop_Sub8x16, Iop_Sub16x8, Iop_Sub32x4, Iop_Sub64x2,
      Iop_QSub8Ux16, Iop_QSub16Ux8, Iop_QSub32Ux4, Iop_QSub64Ux2,
      Iop_QSub8Sx16, Iop_QSub16Sx8, Iop_QSub32Sx4, Iop_QSub64Sx2,


      Iop_Mul8x16, Iop_Mul16x8, Iop_Mul32x4,
                    Iop_MulHi16Ux8, Iop_MulHi32Ux4,
                    Iop_MulHi16Sx8, Iop_MulHi32Sx4,

      Iop_MullEven8Ux16, Iop_MullEven16Ux8,
      Iop_MullEven8Sx16, Iop_MullEven16Sx8,

      Iop_Mull8Ux8, Iop_Mull8Sx8,
      Iop_Mull16Ux4, Iop_Mull16Sx4,
      Iop_Mull32Ux2, Iop_Mull32Sx2,






      Iop_QDMulHi16Sx8, Iop_QDMulHi32Sx4,
      Iop_QRDMulHi16Sx8, Iop_QRDMulHi32Sx4,

      Iop_QDMulLong16Sx4, Iop_QDMulLong32Sx2,


      Iop_PolynomialMul8x16,
      Iop_PolynomialMull8x8,




      Iop_PwAdd8x16, Iop_PwAdd16x8, Iop_PwAdd32x4,
      Iop_PwAdd32Fx2,





      Iop_PwAddL8Ux16, Iop_PwAddL16Ux8, Iop_PwAddL32Ux4,
      Iop_PwAddL8Sx16, Iop_PwAddL16Sx8, Iop_PwAddL32Sx4,


      Iop_Abs8x16, Iop_Abs16x8, Iop_Abs32x4,


      Iop_Avg8Ux16, Iop_Avg16Ux8, Iop_Avg32Ux4,
      Iop_Avg8Sx16, Iop_Avg16Sx8, Iop_Avg32Sx4,


      Iop_Max8Sx16, Iop_Max16Sx8, Iop_Max32Sx4,
      Iop_Max8Ux16, Iop_Max16Ux8, Iop_Max32Ux4,
      Iop_Min8Sx16, Iop_Min16Sx8, Iop_Min32Sx4,
      Iop_Min8Ux16, Iop_Min16Ux8, Iop_Min32Ux4,


      Iop_CmpEQ8x16, Iop_CmpEQ16x8, Iop_CmpEQ32x4,
      Iop_CmpGT8Sx16, Iop_CmpGT16Sx8, Iop_CmpGT32Sx4, Iop_CmpGT64Sx2,
      Iop_CmpGT8Ux16, Iop_CmpGT16Ux8, Iop_CmpGT32Ux4,



      Iop_Cnt8x16,
      Iop_Clz8Sx16, Iop_Clz16Sx8, Iop_Clz32Sx4,
      Iop_Cls8Sx16, Iop_Cls16Sx8, Iop_Cls32Sx4,


      Iop_ShlN8x16, Iop_ShlN16x8, Iop_ShlN32x4, Iop_ShlN64x2,
      Iop_ShrN8x16, Iop_ShrN16x8, Iop_ShrN32x4, Iop_ShrN64x2,
      Iop_SarN8x16, Iop_SarN16x8, Iop_SarN32x4, Iop_SarN64x2,


      Iop_Shl8x16, Iop_Shl16x8, Iop_Shl32x4, Iop_Shl64x2,
      Iop_Shr8x16, Iop_Shr16x8, Iop_Shr32x4, Iop_Shr64x2,
      Iop_Sar8x16, Iop_Sar16x8, Iop_Sar32x4, Iop_Sar64x2,
      Iop_Sal8x16, Iop_Sal16x8, Iop_Sal32x4, Iop_Sal64x2,
      Iop_Rol8x16, Iop_Rol16x8, Iop_Rol32x4,


      Iop_QShl8x16, Iop_QShl16x8, Iop_QShl32x4, Iop_QShl64x2,
      Iop_QSal8x16, Iop_QSal16x8, Iop_QSal32x4, Iop_QSal64x2,

      Iop_QShlN8Sx16, Iop_QShlN16Sx8, Iop_QShlN32Sx4, Iop_QShlN64Sx2,
      Iop_QShlN8x16, Iop_QShlN16x8, Iop_QShlN32x4, Iop_QShlN64x2,
      Iop_QSalN8x16, Iop_QSalN16x8, Iop_QSalN32x4, Iop_QSalN64x2,



      Iop_QNarrow16Ux8, Iop_QNarrow32Ux4,
      Iop_QNarrow16Sx8, Iop_QNarrow32Sx4,
      Iop_Narrow16x8, Iop_Narrow32x4,

      Iop_Shorten16x8, Iop_Shorten32x4, Iop_Shorten64x2,

      Iop_QShortenS16Sx8, Iop_QShortenS32Sx4, Iop_QShortenS64Sx2,
      Iop_QShortenU16Sx8, Iop_QShortenU32Sx4, Iop_QShortenU64Sx2,

      Iop_QShortenU16Ux8, Iop_QShortenU32Ux4, Iop_QShortenU64Ux2,
# 1197 "../VEX/pub/libvex_ir.h"
      Iop_Longen8Ux8, Iop_Longen16Ux4, Iop_Longen32Ux2,
      Iop_Longen8Sx8, Iop_Longen16Sx4, Iop_Longen32Sx2,





      Iop_InterleaveHI8x16, Iop_InterleaveHI16x8,
      Iop_InterleaveHI32x4, Iop_InterleaveHI64x2,
      Iop_InterleaveLO8x16, Iop_InterleaveLO16x8,
      Iop_InterleaveLO32x4, Iop_InterleaveLO64x2,


      Iop_InterleaveOddLanes8x16, Iop_InterleaveEvenLanes8x16,
      Iop_InterleaveOddLanes16x8, Iop_InterleaveEvenLanes16x8,
      Iop_InterleaveOddLanes32x4, Iop_InterleaveEvenLanes32x4,



      Iop_CatOddLanes8x16, Iop_CatOddLanes16x8, Iop_CatOddLanes32x4,
      Iop_CatEvenLanes8x16, Iop_CatEvenLanes16x8, Iop_CatEvenLanes32x4,




      Iop_GetElem8x16, Iop_GetElem16x8, Iop_GetElem32x4, Iop_GetElem64x2,


      Iop_Dup8x16, Iop_Dup16x8, Iop_Dup32x4,






      Iop_ExtractV128,






      Iop_Reverse16_8x16,
      Iop_Reverse32_8x16, Iop_Reverse32_16x8,
      Iop_Reverse64_8x16, Iop_Reverse64_16x8, Iop_Reverse64_32x4,






      Iop_Perm8x16,



      Iop_Recip32x4, Iop_Rsqrte32x4
   }
   IROp;


extern void ppIROp ( IROp );






typedef
   enum {
      Irrm_NEAREST = 0,
      Irrm_NegINF = 1,
      Irrm_PosINF = 2,
      Irrm_ZERO = 3
   }
   IRRoundingMode;



typedef
   enum {
      Ircr_UN = 0x45,
      Ircr_LT = 0x01,
      Ircr_GT = 0x00,
      Ircr_EQ = 0x40
   }
   IRCmpF64Result;

typedef IRCmpF64Result IRCmpF32Result;
typedef IRCmpF64Result IRCmpF128Result;





typedef
   enum {
      Iex_Binder=0x15000,
      Iex_Get,
      Iex_GetI,
      Iex_RdTmp,
      Iex_Qop,
      Iex_Triop,
      Iex_Binop,
      Iex_Unop,
      Iex_Load,
      Iex_Const,
      Iex_Mux0X,
      Iex_CCall
   }
   IRExprTag;
# 1317 "../VEX/pub/libvex_ir.h"
typedef
   struct _IRExpr
   IRExpr;

struct _IRExpr {
   IRExprTag tag;
   union {


      struct {
         Int binder;
      } Binder;




      struct {
         Int offset;
         IRType ty;
      } Get;
# 1374 "../VEX/pub/libvex_ir.h"
      struct {
         IRRegArray* descr;
         IRExpr* ix;
         Int bias;
      } GetI;




      struct {
         IRTemp tmp;
      } RdTmp;





      struct {
         IROp op;
         IRExpr* arg1;
         IRExpr* arg2;
         IRExpr* arg3;
         IRExpr* arg4;
      } Qop;





      struct {
         IROp op;
         IRExpr* arg1;
         IRExpr* arg2;
         IRExpr* arg3;
      } Triop;




      struct {
         IROp op;
         IRExpr* arg1;
         IRExpr* arg2;
      } Binop;




      struct {
         IROp op;
         IRExpr* arg;
      } Unop;







      struct {
         IREndness end;
         IRType ty;
         IRExpr* addr;
      } Load;




      struct {
         IRConst* con;
      } Const;
# 1485 "../VEX/pub/libvex_ir.h"
      struct {
         IRCallee* cee;
         IRType retty;
         IRExpr** args;
      } CCall;
# 1498 "../VEX/pub/libvex_ir.h"
      struct {
         IRExpr* cond;
         IRExpr* expr0;
         IRExpr* exprX;
      } Mux0X;
   } Iex;
};


extern IRExpr* IRExpr_Binder ( Int binder );
extern IRExpr* IRExpr_Get ( Int off, IRType ty );
extern IRExpr* IRExpr_GetI ( IRRegArray* descr, IRExpr* ix, Int bias );
extern IRExpr* IRExpr_RdTmp ( IRTemp tmp );
extern IRExpr* IRExpr_Qop ( IROp op, IRExpr* arg1, IRExpr* arg2,
                                        IRExpr* arg3, IRExpr* arg4 );
extern IRExpr* IRExpr_Triop ( IROp op, IRExpr* arg1,
                                        IRExpr* arg2, IRExpr* arg3 );
extern IRExpr* IRExpr_Binop ( IROp op, IRExpr* arg1, IRExpr* arg2 );
extern IRExpr* IRExpr_Unop ( IROp op, IRExpr* arg );
extern IRExpr* IRExpr_Load ( IREndness end, IRType ty, IRExpr* addr );
extern IRExpr* IRExpr_Const ( IRConst* con );
extern IRExpr* IRExpr_CCall ( IRCallee* cee, IRType retty, IRExpr** args );
extern IRExpr* IRExpr_Mux0X ( IRExpr* cond, IRExpr* expr0, IRExpr* exprX );


extern IRExpr* deepCopyIRExpr ( IRExpr* );


extern void ppIRExpr ( IRExpr* );



extern IRExpr** mkIRExprVec_0 ( void );
extern IRExpr** mkIRExprVec_1 ( IRExpr* );
extern IRExpr** mkIRExprVec_2 ( IRExpr*, IRExpr* );
extern IRExpr** mkIRExprVec_3 ( IRExpr*, IRExpr*, IRExpr* );
extern IRExpr** mkIRExprVec_4 ( IRExpr*, IRExpr*, IRExpr*, IRExpr* );
extern IRExpr** mkIRExprVec_5 ( IRExpr*, IRExpr*, IRExpr*, IRExpr*,
                                IRExpr* );
extern IRExpr** mkIRExprVec_6 ( IRExpr*, IRExpr*, IRExpr*, IRExpr*,
                                IRExpr*, IRExpr* );
extern IRExpr** mkIRExprVec_7 ( IRExpr*, IRExpr*, IRExpr*, IRExpr*,
                                IRExpr*, IRExpr*, IRExpr* );
extern IRExpr** mkIRExprVec_8 ( IRExpr*, IRExpr*, IRExpr*, IRExpr*,
                                IRExpr*, IRExpr*, IRExpr*, IRExpr*);





extern IRExpr** shallowCopyIRExprVec ( IRExpr** );
extern IRExpr** deepCopyIRExprVec ( IRExpr** );



extern IRExpr* mkIRExpr_HWord ( HWord );


extern
IRExpr* mkIRExprCCall ( IRType retty,
                        Int regparms, HChar* name, void* addr,
                        IRExpr** args );




static inline Bool isIRAtom ( IRExpr* e ) {
   return toBool(e->tag == Iex_RdTmp || e->tag == Iex_Const);
}



extern Bool eqIRAtom ( IRExpr*, IRExpr* );
# 1600 "../VEX/pub/libvex_ir.h"
typedef
   enum {
      Ijk_Boring=0x16000,
      Ijk_Call,
      Ijk_Ret,
      Ijk_ClientReq,
      Ijk_Yield,
      Ijk_EmWarn,
      Ijk_EmFail,
      Ijk_NoDecode,
      Ijk_MapFail,
      Ijk_TInval,
      Ijk_NoRedir,
      Ijk_SigTRAP,
      Ijk_SigSEGV,
      Ijk_SigBUS,


      Ijk_Sys_syscall,
      Ijk_Sys_int32,
      Ijk_Sys_int128,
      Ijk_Sys_int129,
      Ijk_Sys_int130,
      Ijk_Sys_sysenter

   }
   IRJumpKind;

extern void ppIRJumpKind ( IRJumpKind );
# 1676 "../VEX/pub/libvex_ir.h"
typedef
   enum {
      Ifx_None = 0x17000,
      Ifx_Read,
      Ifx_Write,
      Ifx_Modify,
   }
   IREffect;


extern void ppIREffect ( IREffect );


typedef
   struct {

      IRCallee* cee;
      IRExpr* guard;
      IRExpr** args;
      IRTemp tmp;


      IREffect mFx;
      IRExpr* mAddr;
      Int mSize;


      Bool needsBBP;
      Int nFxState;
      struct {
         IREffect fx;
         Int offset;
         Int size;
      } fxState[7];
   }
   IRDirty;


extern void ppIRDirty ( IRDirty* );


extern IRDirty* emptyIRDirty ( void );


extern IRDirty* deepCopyIRDirty ( IRDirty* );







extern
IRDirty* unsafeIRDirty_0_N ( Int regparms, HChar* name, void* addr,
                             IRExpr** args );



extern
IRDirty* unsafeIRDirty_1_N ( IRTemp dst,
                             Int regparms, HChar* name, void* addr,
                             IRExpr** args );




typedef
   enum {
      Imbe_Fence=0x18000,
   }
   IRMBusEvent;

extern void ppIRMBusEvent ( IRMBusEvent );
# 1816 "../VEX/pub/libvex_ir.h"
typedef
   struct {
      IRTemp oldHi;
      IRTemp oldLo;
      IREndness end;
      IRExpr* addr;
      IRExpr* expdHi;
      IRExpr* expdLo;
      IRExpr* dataHi;
      IRExpr* dataLo;
   }
   IRCAS;

extern void ppIRCAS ( IRCAS* cas );

extern IRCAS* mkIRCAS ( IRTemp oldHi, IRTemp oldLo,
                        IREndness end, IRExpr* addr,
                        IRExpr* expdHi, IRExpr* expdLo,
                        IRExpr* dataHi, IRExpr* dataLo );

extern IRCAS* deepCopyIRCAS ( IRCAS* );
# 1850 "../VEX/pub/libvex_ir.h"
typedef
   enum {
      Ist_NoOp=0x19000,
      Ist_IMark,
      Ist_AbiHint,
      Ist_Put,
      Ist_PutI,
      Ist_WrTmp,
      Ist_Store,
      Ist_CAS,
      Ist_LLSC,
      Ist_Dirty,
      Ist_MBE,
      Ist_Exit
   }
   IRStmtTag;
# 1876 "../VEX/pub/libvex_ir.h"
typedef
   struct _IRStmt {
      IRStmtTag tag;
      union {





         struct {
  } NoOp;
# 1897 "../VEX/pub/libvex_ir.h"
         struct {
            Addr64 addr;
            Int len;
         } IMark;
# 1916 "../VEX/pub/libvex_ir.h"
         struct {
            IRExpr* base;
            Int len;
            IRExpr* nia;
         } AbiHint;




         struct {
            Int offset;
            IRExpr* data;
         } Put;
# 1937 "../VEX/pub/libvex_ir.h"
         struct {
            IRRegArray* descr;
            IRExpr* ix;
            Int bias;
            IRExpr* data;
         } PutI;
# 1951 "../VEX/pub/libvex_ir.h"
         struct {
            IRTemp tmp;
            IRExpr* data;
         } WrTmp;






         struct {
            IREndness end;
            IRExpr* addr;
            IRExpr* data;
         } Store;
# 1981 "../VEX/pub/libvex_ir.h"
         struct {
            IRCAS* details;
         } CAS;
# 2029 "../VEX/pub/libvex_ir.h"
         struct {
            IREndness end;
            IRTemp result;
            IRExpr* addr;
            IRExpr* storedata;
         } LLSC;
# 2047 "../VEX/pub/libvex_ir.h"
         struct {
            IRDirty* details;
         } Dirty;







         struct {
            IRMBusEvent event;
         } MBE;





         struct {
            IRExpr* guard;
            IRJumpKind jk;
            IRConst* dst;
         } Exit;
      } Ist;
   }
   IRStmt;


extern IRStmt* IRStmt_NoOp ( void );
extern IRStmt* IRStmt_IMark ( Addr64 addr, Int len );
extern IRStmt* IRStmt_AbiHint ( IRExpr* base, Int len, IRExpr* nia );
extern IRStmt* IRStmt_Put ( Int off, IRExpr* data );
extern IRStmt* IRStmt_PutI ( IRRegArray* descr, IRExpr* ix, Int bias,
                                IRExpr* data );
extern IRStmt* IRStmt_WrTmp ( IRTemp tmp, IRExpr* data );
extern IRStmt* IRStmt_Store ( IREndness end, IRExpr* addr, IRExpr* data );
extern IRStmt* IRStmt_CAS ( IRCAS* details );
extern IRStmt* IRStmt_LLSC ( IREndness end, IRTemp result,
                                IRExpr* addr, IRExpr* storedata );
extern IRStmt* IRStmt_Dirty ( IRDirty* details );
extern IRStmt* IRStmt_MBE ( IRMBusEvent event );
extern IRStmt* IRStmt_Exit ( IRExpr* guard, IRJumpKind jk, IRConst* dst );


extern IRStmt* deepCopyIRStmt ( IRStmt* );


extern void ppIRStmt ( IRStmt* );
# 2105 "../VEX/pub/libvex_ir.h"
typedef
   struct {
      IRType* types;
      Int types_size;
      Int types_used;
   }
   IRTypeEnv;


extern IRTemp newIRTemp ( IRTypeEnv*, IRType );


extern IRTypeEnv* deepCopyIRTypeEnv ( IRTypeEnv* );


extern void ppIRTypeEnv ( IRTypeEnv* );
# 2136 "../VEX/pub/libvex_ir.h"
typedef
   struct {
      IRTypeEnv* tyenv;
      IRStmt** stmts;
      Int stmts_size;
      Int stmts_used;
      IRExpr* next;
      IRJumpKind jumpkind;
   }
   IRSB;


extern IRSB* emptyIRSB ( void );


extern IRSB* deepCopyIRSB ( IRSB* );



extern IRSB* deepCopyIRSBExceptStmts ( IRSB* );


extern void ppIRSB ( IRSB* );


extern void addStmtToIRSB ( IRSB*, IRStmt* );







extern IRTypeEnv* emptyIRTypeEnv ( void );


extern IRType typeOfIRConst ( IRConst* );
extern IRType typeOfIRTemp ( IRTypeEnv*, IRTemp );
extern IRType typeOfIRExpr ( IRTypeEnv*, IRExpr* );


extern void sanityCheckIRSB ( IRSB* bb,
                              HChar* caller,
                              Bool require_flatness,
                              IRType guest_word_size );
extern Bool isFlatIRStmt ( IRStmt* );


extern Bool isPlausibleIRType ( IRType ty );
# 42 "../VEX/pub/libvex.h" 2
# 52 "../VEX/pub/libvex.h"
typedef
   enum {
      VexArch_INVALID,
      VexArchX86,
      VexArchAMD64,
      VexArchARM,
      VexArchPPC32,
      VexArchPPC64,
      VexArchS390X
   }
   VexArch;
# 122 "../VEX/pub/libvex.h"
extern const HChar* LibVEX_ppVexArch ( VexArch );
extern const HChar* LibVEX_ppVexHwCaps ( VexArch, UInt );






typedef
   struct {

      UInt hwcaps;

      Int ppc_cache_line_szB;


      UInt ppc_dcbz_szB;
      UInt ppc_dcbzl_szB;
   }
   VexArchInfo;


extern
void LibVEX_default_VexArchInfo ( VexArchInfo* vai );
# 204 "../VEX/pub/libvex.h"
typedef
   struct {


      Int guest_stack_redzone_size;




      Bool guest_amd64_assume_fs_is_zero;




      Bool guest_amd64_assume_gs_is_0x60;



      Bool guest_ppc_zap_RZ_at_blr;





      Bool (*guest_ppc_zap_RZ_at_bl)(Addr64);




      Bool guest_ppc_sc_continues_at_LR;




      Bool host_ppc_calls_use_fndescrs;




      Bool host_ppc32_regalign_int64_args;
   }
   VexAbiInfo;


extern
void LibVEX_default_VexAbiInfo ( VexAbiInfo* vbi );
# 258 "../VEX/pub/libvex.h"
typedef
   struct {

      Int iropt_verbosity;


      Int iropt_level;



      Bool iropt_precise_memory_exns;



      Int iropt_unroll_thresh;



      Int guest_max_insns;





      Int guest_chase_thresh;


      Bool guest_chase_cond;
   }
   VexControl;




extern
void LibVEX_default_VexControl ( VexControl* vcon );
# 306 "../VEX/pub/libvex.h"
extern HChar* private_LibVEX_alloc_first;
extern HChar* private_LibVEX_alloc_curr;
extern HChar* private_LibVEX_alloc_last;
extern void private_LibVEX_alloc_OOM(void) __attribute__((noreturn));

static inline void* LibVEX_Alloc ( Int nbytes )
{




   HChar* curr;
   HChar* next;
   Int ALIGN;
   ALIGN = sizeof(void*)-1;
   nbytes = (nbytes + ALIGN) & ~ALIGN;
   curr = private_LibVEX_alloc_curr;
   next = curr + nbytes;
   if (next >= private_LibVEX_alloc_last)
      private_LibVEX_alloc_OOM();
   private_LibVEX_alloc_curr = next;
   return curr;

}


extern void LibVEX_ShowAllocStats ( void );
# 346 "../VEX/pub/libvex.h"
typedef
   struct {


      Int total_sizeB;

      Int offset_SP;
      Int sizeof_SP;

      Int offset_FP;
      Int sizeof_FP;

      Int offset_IP;
      Int sizeof_IP;


      Int n_alwaysDefd;
      struct {
         Int offset;
         Int size;
      } alwaysDefd[24];
   }
   VexGuestLayout;
# 396 "../VEX/pub/libvex.h"
extern void LibVEX_Init (

   __attribute__ ((noreturn))
   void (*failure_exit) ( void ),

   void (*log_bytes) ( HChar*, Int nbytes ),

   Int debuglevel,

   Bool valgrind_support,

               VexControl* vcon
);







typedef
   enum {
      VexTransOK,
      VexTransAccessFail,
      VexTransOutputFull
   }
   VexTranslateResult;
# 433 "../VEX/pub/libvex.h"
typedef
   struct {
      Addr64 base[3];
      UShort len[3];
      UShort n_used;
   }
   VexGuestExtents;




typedef
   struct {


      VexArch arch_guest;
      VexArchInfo archinfo_guest;
      VexArch arch_host;
      VexArchInfo archinfo_host;
      VexAbiInfo abiinfo_both;




      void* callback_opaque;



      UChar* guest_bytes;




      Addr64 guest_bytes_addr;



      Bool (*chase_into_ok) ( void*, Addr64 );


      VexGuestExtents* guest_extents;


      UChar* host_bytes;
      Int host_bytes_size;

      Int* host_bytes_used;



      IRSB* (*instrument1) ( void*,
                               IRSB*,
                               VexGuestLayout*,
                               VexGuestExtents*,
                               IRType gWordTy, IRType hWordTy );
      IRSB* (*instrument2) ( void*,
                               IRSB*,
                               VexGuestLayout*,
                               VexGuestExtents*,
                               IRType gWordTy, IRType hWordTy );

      IRSB* (*finaltidy) ( IRSB* );


      Bool do_self_check;
# 508 "../VEX/pub/libvex.h"
      Bool (*preamble_function)( void*, IRSB*);


      Int traceflags;
# 540 "../VEX/pub/libvex.h"
      void* dispatch;
   }
   VexTranslateArgs;


extern
VexTranslateResult LibVEX_Translate ( VexTranslateArgs* );
# 565 "../VEX/pub/libvex.h"
extern void LibVEX_ShowStats ( void );
# 36 "drd_load_store.h" 2
# 1 "../include/pub_tool_tooliface.h" 1
# 34 "../include/pub_tool_tooliface.h"
# 1 "../include/pub_tool_errormgr.h" 1
# 35 "../include/pub_tool_tooliface.h" 2
# 48 "../include/pub_tool_tooliface.h"
extern void (*vgPlain_tl_pre_clo_init) ( void );
# 65 "../include/pub_tool_tooliface.h"
typedef
   struct {
      Addr64 nraddr;
      Addr64 readdr;
      ThreadId tid;
   }
   VgCallbackClosure;

extern void vgPlain_basic_tool_funcs(


   void (*post_clo_init)(void),
# 219 "../include/pub_tool_tooliface.h"
   IRSB*(*instrument)(VgCallbackClosure* closure,
                      IRSB* sb_in,
                      VexGuestLayout* layout,
                      VexGuestExtents* vge,
                      IRType gWordTy,
                      IRType hWordTy),



   void (*fini)(Int)
);
# 245 "../include/pub_tool_tooliface.h"
extern void vgPlain_details_name ( Char* name );
extern void vgPlain_details_version ( Char* version );
extern void vgPlain_details_description ( Char* description );
extern void vgPlain_details_copyright_author ( Char* copyright_author );




extern void vgPlain_details_avg_translation_sizeB ( UInt size );



extern void vgPlain_details_bug_reports_to ( Char* bug_reports_to );





extern void vgPlain_needs_libc_freeres ( void );







extern void vgPlain_needs_core_errors ( void );






extern void vgPlain_needs_tool_errors (







   Bool (*eq_Error)(VgRes res, Error* e1, Error* e2),
# 296 "../include/pub_tool_tooliface.h"
   void (*before_pp_Error)(Error* err),


   void (*pp_Error)(Error* err),


   Bool show_ThreadIDs_for_errors,
# 311 "../include/pub_tool_tooliface.h"
   UInt (*update_extra)(Error* err),



   Bool (*recognised_suppression)(Char* name, Supp* su),






   Bool (*read_extra_suppression_info)(Int fd, Char** bufpp, SizeT* nBufp,
                                       Supp* su),




   Bool (*error_matches_suppression)(Error* err, Supp* su),




   Char* (*get_error_name)(Error* err),
# 344 "../include/pub_tool_tooliface.h"
   Bool (*print_extra_suppression_info)(Error* err,
                                               Char* buf, Int nBuf)
);
# 355 "../include/pub_tool_tooliface.h"
extern void vgPlain_needs_superblock_discards (
# 372 "../include/pub_tool_tooliface.h"
   void (*discard_superblock_info)(Addr64 orig_addr, VexGuestExtents extents)
);


extern void vgPlain_needs_command_line_options (
# 388 "../include/pub_tool_tooliface.h"
   Bool (*process_cmd_line_option)(Char* argv),


   void (*print_usage)(void),


   void (*print_debug_usage)(void)
);


extern void vgPlain_needs_client_requests (
# 410 "../include/pub_tool_tooliface.h"
   Bool (*handle_client_request)(ThreadId tid, UWord* arg_block, UWord* ret)
);
# 424 "../include/pub_tool_tooliface.h"
extern void vgPlain_needs_syscall_wrapper (
               void (* pre_syscall)(ThreadId tid, UInt syscallno,
                                    UWord* args, UInt nArgs),
               void (*post_syscall)(ThreadId tid, UInt syscallno,
                                    UWord* args, UInt nArgs, SysRes res)
);





extern void vgPlain_needs_sanity_checks (
   Bool(*cheap_sanity_check)(void),
   Bool(*expensive_sanity_check)(void)
);


extern void vgPlain_needs_var_info ( void );





extern void vgPlain_needs_malloc_replacement(
   void* (*pmalloc) ( ThreadId tid, SizeT n ),
   void* (*p__builtin_new) ( ThreadId tid, SizeT n ),
   void* (*p__builtin_vec_new) ( ThreadId tid, SizeT n ),
   void* (*pmemalign) ( ThreadId tid, SizeT align, SizeT n ),
   void* (*pcalloc) ( ThreadId tid, SizeT nmemb, SizeT size1 ),
   void (*pfree) ( ThreadId tid, void* p ),
   void (*p__builtin_delete) ( ThreadId tid, void* p ),
   void (*p__builtin_vec_delete) ( ThreadId tid, void* p ),
   void* (*prealloc) ( ThreadId tid, void* p, SizeT new_size ),
   SizeT (*pmalloc_usable_size) ( ThreadId tid, void* p),
   SizeT client_malloc_redzone_szB
);




extern void vgPlain_needs_xml_output ( void );




extern void vgPlain_needs_final_IR_tidy_pass ( IRSB*(*final_tidy)(IRSB*) );







typedef
   enum { Vg_CoreStartup=1, Vg_CoreSignal, Vg_CoreSysCall,





          Vg_CoreSysCallArgInMem,
          Vg_CoreTranslate, Vg_CoreClientReq
   } CorePart;
# 512 "../include/pub_tool_tooliface.h"
void vgPlain_track_new_mem_startup (void(*f)(Addr a, SizeT len,
                                              Bool rr, Bool ww, Bool xx,
                                              ULong di_handle));
void vgPlain_track_new_mem_stack_signal(void(*f)(Addr a, SizeT len, ThreadId tid));
void vgPlain_track_new_mem_brk (void(*f)(Addr a, SizeT len, ThreadId tid));
void vgPlain_track_new_mem_mmap (void(*f)(Addr a, SizeT len,
                                              Bool rr, Bool ww, Bool xx,
                                              ULong di_handle));

void vgPlain_track_copy_mem_remap (void(*f)(Addr from, Addr to, SizeT len));
void vgPlain_track_change_mem_mprotect (void(*f)(Addr a, SizeT len,
                                              Bool rr, Bool ww, Bool xx));
void vgPlain_track_die_mem_stack_signal(void(*f)(Addr a, SizeT len));
void vgPlain_track_die_mem_brk (void(*f)(Addr a, SizeT len));
void vgPlain_track_die_mem_munmap (void(*f)(Addr a, SizeT len));
# 548 "../include/pub_tool_tooliface.h"
void vgPlain_track_new_mem_stack_4_w_ECU (__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_8_w_ECU (__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_12_w_ECU (__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_16_w_ECU (__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_32_w_ECU (__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_112_w_ECU(__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_128_w_ECU(__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_144_w_ECU(__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_160_w_ECU(__attribute__((regparm(2))) void(*f)(Addr new_ESP, UInt ecu));
void vgPlain_track_new_mem_stack_w_ECU (void(*f)(Addr a, SizeT len,
                                                                       UInt ecu));

void vgPlain_track_new_mem_stack_4 (__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack_8 (__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack_12 (__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack_16 (__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack_32 (__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack_112(__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack_128(__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack_144(__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack_160(__attribute__((regparm(1))) void(*f)(Addr new_ESP));
void vgPlain_track_new_mem_stack (void(*f)(Addr a, SizeT len));

void vgPlain_track_die_mem_stack_4 (__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack_8 (__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack_12 (__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack_16 (__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack_32 (__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack_112(__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack_128(__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack_144(__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack_160(__attribute__((regparm(1))) void(*f)(Addr die_ESP));
void vgPlain_track_die_mem_stack (void(*f)(Addr a, SizeT len));


void vgPlain_track_ban_mem_stack (void(*f)(Addr a, SizeT len));


void vgPlain_track_pre_mem_read (void(*f)(CorePart part, ThreadId tid,
                                             Char* s, Addr a, SizeT size));
void vgPlain_track_pre_mem_read_asciiz(void(*f)(CorePart part, ThreadId tid,
                                             Char* s, Addr a));
void vgPlain_track_pre_mem_write (void(*f)(CorePart part, ThreadId tid,
                                             Char* s, Addr a, SizeT size));
void vgPlain_track_post_mem_write (void(*f)(CorePart part, ThreadId tid,
                                             Addr a, SizeT size));



void vgPlain_track_pre_reg_read (void(*f)(CorePart part, ThreadId tid,
                                        Char* s, PtrdiffT guest_state_offset,
                                        SizeT size));
void vgPlain_track_post_reg_write(void(*f)(CorePart part, ThreadId tid,
                                        PtrdiffT guest_state_offset,
                                        SizeT size));


void vgPlain_track_post_reg_write_clientcall_return(
      void(*f)(ThreadId tid, PtrdiffT guest_state_offset, SizeT size, Addr f));
# 621 "../include/pub_tool_tooliface.h"
void vgPlain_track_start_client_code(
        void(*f)(ThreadId tid, ULong blocks_dispatched)
     );
void vgPlain_track_stop_client_code(
        void(*f)(ThreadId tid, ULong blocks_dispatched)
     );
# 665 "../include/pub_tool_tooliface.h"
void vgPlain_track_pre_thread_ll_create (void(*f)(ThreadId tid, ThreadId child));
void vgPlain_track_pre_thread_first_insn(void(*f)(ThreadId tid));
void vgPlain_track_pre_thread_ll_exit (void(*f)(ThreadId tid));
# 676 "../include/pub_tool_tooliface.h"
void vgPlain_track_pre_deliver_signal (void(*f)(ThreadId tid, Int sigNo,
                                             Bool alt_stack));


void vgPlain_track_post_deliver_signal(void(*f)(ThreadId tid, Int sigNo));
# 37 "drd_load_store.h" 2


Bool vgDrd_get_check_stack_accesses(void);
void vgDrd_set_check_stack_accesses(const Bool c);
Bool vgDrd_get_first_race_only(void);
void vgDrd_set_first_race_only(const Bool fro);
IRSB* vgDrd_instrument(VgCallbackClosure* const closure,
                       IRSB* const bb_in,
                       VexGuestLayout* const layout,
                       VexGuestExtents* const vge,
                       IRType const gWordTy,
                       IRType const hWordTy);
void vgDrd_trace_mem_access(const Addr addr, const SizeT size,
                            const BmAccessTypeT access_type);
__attribute__((regparm(2))) void vgDrd_trace_load(Addr addr, SizeT size);
__attribute__((regparm(2))) void vgDrd_trace_store(Addr addr, SizeT size);
void vgDrd_clean_memory(const Addr a1, const SizeT len);
# 32 "drd_clientreq.c" 2
# 1 "drd_malloc_wrappers.h" 1
# 34 "drd_malloc_wrappers.h"
typedef void (*StartUsingMem)(const Addr a1, const SizeT len, UInt ec_uniq);
typedef void (*StopUsingMem)(const Addr a1, const SizeT len);


void vgDrd_register_malloc_wrappers(const StartUsingMem start_callback,
                                    const StopUsingMem stop_callback);
void vgDrd_malloclike_block(const ThreadId tid, const Addr p, const SizeT size);
Bool vgDrd_freelike_block(const ThreadId tid, const Addr p);
Bool vgDrd_heap_addrinfo(Addr const a,
                         Addr* const data,
                         SizeT* const size,
                         ExeContext** const where);
void vgDrd_print_malloc_stats(void);
# 33 "drd_clientreq.c" 2
# 1 "drd_mutex.h" 1
# 35 "drd_mutex.h"
struct mutex_info;


void vgDrd_mutex_set_trace(const Bool trace_mutex);
void vgDrd_mutex_set_lock_threshold(const UInt lock_threshold_ms);
struct mutex_info* vgDrd_mutex_init(const Addr mutex, const MutexT mutex_type);
void vgDrd_mutex_post_destroy(const Addr mutex);
void vgDrd_not_a_mutex(const Addr mutex);
struct mutex_info* vgDrd_mutex_get(const Addr mutex);
void vgDrd_mutex_pre_lock(const Addr mutex, const MutexT mutex_type,
                          const Bool trylock);
void vgDrd_mutex_post_lock(const Addr mutex, const Bool took_lock,
                           const Bool post_cond_wait);
void vgDrd_mutex_unlock(const Addr mutex, const MutexT mutex_type);
void vgDrd_spinlock_init_or_unlock(const Addr spinlock);
const char* vgDrd_mutex_get_typename(struct mutex_info* const p);
const char* vgDrd_mutex_type_name(const MutexT mt);
Bool vgDrd_mutex_is_locked_by(const Addr mutex, const DrdThreadId tid);
int vgDrd_mutex_get_recursion_count(const Addr mutex);
ULong vgDrd_get_mutex_lock_count(void);
ULong vgDrd_get_mutex_segment_creation_count(void);
# 34 "drd_clientreq.c" 2
# 1 "drd_rwlock.h" 1
# 33 "drd_rwlock.h"
# 1 "drd_clientobj.h" 1
# 35 "drd_clientobj.h"
# 1 "../include/pub_tool_xarray.h" 1
# 47 "../include/pub_tool_xarray.h"
typedef struct _XArray XArray;




extern XArray* vgPlain_newXA ( void*(*alloc_fn)(HChar*,SizeT),
                            HChar* cc,
                            void(*free_fn)(void*),
                            Word elemSzB );


extern void vgPlain_deleteXA ( XArray* );




extern void vgPlain_setCmpFnXA ( XArray*, Int (*compar)(void*,void*) );




extern Word vgPlain_addToXA ( XArray*, void* elem );




extern Word vgPlain_addBytesToXA ( XArray* xao, void* bytesV, Word nbytes );



extern void vgPlain_sortXA ( XArray* );






extern Bool vgPlain_lookupXA ( XArray*, void* key,
                                   Word* first, Word* last );
# 95 "../include/pub_tool_xarray.h"
extern Bool vgPlain_lookupXA_UNSAFE ( XArray* xao, void* key,
                                          Word* first, Word* last,
                                   Int(*cmpFn)(void*,void*) );


extern Word vgPlain_sizeXA ( XArray* );
# 109 "../include/pub_tool_xarray.h"
extern void* vgPlain_indexXA ( XArray*, Word );



extern void vgPlain_dropTailXA ( XArray*, Word );




extern void vgPlain_dropHeadXA ( XArray*, Word );







extern XArray* vgPlain_cloneXA( HChar* cc, XArray* xa );







extern void vgPlain_getContentsXA_UNSAFE( XArray* sr,
                                              void** ctsP,
                                              Word* usedP );







extern void vgPlain_xaprintf( XArray* dst, const HChar* format, ... )
                         __attribute__((format(__printf__, 2, 3)));

extern void vgPlain_xaprintf_no_f_c
                         ( XArray* dst, const HChar* format, ... );
# 36 "drd_clientobj.h" 2




union drd_clientobj;




typedef enum {
   ClientMutex = 1,
   ClientCondvar = 2,
   ClientHbvar = 3,
   ClientSemaphore = 4,
   ClientBarrier = 5,
   ClientRwlock = 6,
} ObjType;

struct any
{
   Addr a1;
   ObjType type;
   void (*cleanup)(union drd_clientobj*);
   void (*delete_thread)(union drd_clientobj*, DrdThreadId);
   ExeContext* first_observed_at;
};

struct mutex_info
{
   Addr a1;
   ObjType type;
   void (*cleanup)(union drd_clientobj*);
   void (*delete_thread)(union drd_clientobj*, DrdThreadId);
   ExeContext* first_observed_at;
   MutexT mutex_type;
   int recursion_count;
   DrdThreadId owner;
   struct segment* last_locked_segment;
   ULong acquiry_time_ms;
   ExeContext* acquired_at;
};

struct cond_info
{
   Addr a1;
   ObjType type;
   void (*cleanup)(union drd_clientobj*);
   void (*delete_thread)(union drd_clientobj*, DrdThreadId);
   ExeContext* first_observed_at;
   int waiter_count;
   Addr mutex;

};

struct hb_info
{
   Addr a1;
   ObjType type;
   void (*cleanup)(union drd_clientobj*);
   void (*delete_thread)(union drd_clientobj*, DrdThreadId);
   ExeContext* first_observed_at;
   OSet* oset;
};

struct semaphore_info
{
   Addr a1;
   ObjType type;
   void (*cleanup)(union drd_clientobj*);
   void (*delete_thread)(union drd_clientobj*, DrdThreadId);
   ExeContext* first_observed_at;
   UInt waits_to_skip;

   UInt value;
   UWord waiters;
   DrdThreadId last_sem_post_tid;
   XArray* last_sem_post_seg;
};

struct barrier_info
{
   Addr a1;
   ObjType type;
   void (*cleanup)(union drd_clientobj*);
   void (*delete_thread)(union drd_clientobj*, DrdThreadId);
   ExeContext* first_observed_at;
   BarrierT barrier_type;
   Word count;
   Word pre_iteration;
   Word post_iteration;
   Word pre_waiters_left;
   Word post_waiters_left;
   OSet* oset;
};

struct rwlock_info
{
   Addr a1;
   ObjType type;
   void (*cleanup)(union drd_clientobj*);
   void (*delete_thread)(union drd_clientobj*, DrdThreadId);
   ExeContext* first_observed_at;
   RwLockT rwlock_type;
   OSet* thread_info;
   ULong acquiry_time_ms;
   ExeContext* acquired_at;
};

typedef union drd_clientobj
{
   struct any any;
   struct mutex_info mutex;
   struct cond_info cond;
   struct hb_info hb;
   struct semaphore_info semaphore;
   struct barrier_info barrier;
   struct rwlock_info rwlock;
} DrdClientobj;




void vgDrd_clientobj_set_trace(const Bool trace);
void vgDrd_clientobj_init(void);
void vgDrd_clientobj_cleanup(void);
DrdClientobj* vgDrd_clientobj_get_any(const Addr addr);
DrdClientobj* vgDrd_clientobj_get(const Addr addr, const ObjType t);
Bool vgDrd_clientobj_present(const Addr a1, const Addr a2);
DrdClientobj* vgDrd_clientobj_add(const Addr a1, const ObjType t);
Bool vgDrd_clientobj_remove(const Addr addr, const ObjType t);
void vgDrd_clientobj_stop_using_mem(const Addr a1, const Addr a2);
void vgDrd_clientobj_delete_thread(const DrdThreadId tid);
const char* vgDrd_clientobj_type_name(const ObjType t);
# 34 "drd_rwlock.h" 2




struct rwlock_info;


void vgDrd_rwlock_set_trace(const Bool trace_rwlock);
void vgDrd_rwlock_set_exclusive_threshold(const UInt exclusive_threshold_ms);
void vgDrd_rwlock_set_shared_threshold(const UInt shared_threshold_ms);
struct rwlock_info* vgDrd_rwlock_pre_init(const Addr rwlock,
                                          const RwLockT rwlock_type);
void vgDrd_rwlock_post_destroy(const Addr rwlock, const RwLockT rwlock_type);
void vgDrd_rwlock_pre_rdlock(const Addr rwlock, const RwLockT rwlock_type);
void vgDrd_rwlock_post_rdlock(const Addr rwlock, const RwLockT rwlock_type,
                              const Bool took_lock);
void vgDrd_rwlock_pre_wrlock(const Addr rwlock, const RwLockT rwlock_type);
void vgDrd_rwlock_post_wrlock(const Addr rwlock, const RwLockT rwlock_type,
                              const Bool took_lock);
void vgDrd_rwlock_pre_unlock(const Addr rwlock, const RwLockT rwlock_type);
ULong vgDrd_get_rwlock_segment_creation_count(void);
# 35 "drd_clientreq.c" 2
# 1 "drd_semaphore.h" 1
# 37 "drd_semaphore.h"
struct semaphore_info;


void vgDrd_semaphore_set_trace(const Bool trace_semaphore);
struct semaphore_info* vgDrd_semaphore_init(const Addr semaphore,
                                            const Word pshared,
                                            const UInt value);
void vgDrd_semaphore_destroy(const Addr semaphore);
struct semaphore_info* vgDrd_semaphore_open(const Addr semaphore,
                                            const Char* name, const Word oflag,
                                            const Word mode, const UInt value);
void vgDrd_semaphore_close(const Addr semaphore);
void vgDrd_semaphore_pre_wait(const Addr semaphore);
void vgDrd_semaphore_post_wait(const DrdThreadId tid, const Addr semaphore,
                               const Bool waited);
void vgDrd_semaphore_pre_post(const DrdThreadId tid, const Addr semaphore);
void vgDrd_semaphore_post_post(const DrdThreadId tid, const Addr semaphore,
                               const Bool waited);
ULong vgDrd_get_semaphore_segment_creation_count(void);
# 36 "drd_clientreq.c" 2
# 1 "drd_suppression.h" 1
# 10 "drd_suppression.h"
extern Bool vgDrd_g_any_address_traced;


void vgDrd_suppression_set_trace(const Bool trace_suppression);
void vgDrd_suppression_init(void);
void vgDrd_start_suppression(const Addr a1, const Addr a2,
                             const char* const reason);
void vgDrd_finish_suppression(const Addr a1, const Addr a2);
Bool vgDrd_is_suppressed(const Addr a1, const Addr a2);
Bool vgDrd_is_any_suppressed(const Addr a1, const Addr a2);
void vgDrd_mark_hbvar(const Addr a1);
Bool vgDrd_range_contains_suppression_or_hbvar(const Addr a1, const Addr a2);
void vgDrd_start_tracing_address_range(const Addr a1, const Addr a2);
void vgDrd_stop_tracing_address_range(const Addr a1, const Addr a2);
Bool vgDrd_is_any_traced(const Addr a1, const Addr a2);
void vgDrd_suppression_stop_using_mem(const Addr a1, const Addr a2);


static __inline__ Bool vgDrd_any_address_is_traced(void)
{
   return vgDrd_g_any_address_traced;
}
# 37 "drd_clientreq.c" 2





# 1 "../include/pub_tool_libcprint.h" 1
# 38 "../include/pub_tool_libcprint.h"
extern UInt vgPlain_sprintf ( Char* buf, const HChar* format, ... )
                          __attribute__((format(__printf__, 2, 3)));

extern UInt vgPlain_vsprintf ( Char* buf, const HChar* format, va_list vargs )
                          __attribute__((format(__printf__, 2, 0)));

extern UInt vgPlain_snprintf ( Char* buf, Int size,
                                       const HChar *format, ... )
                          __attribute__((format(__printf__, 3, 4)));

extern UInt vgPlain_vsnprintf( Char* buf, Int size,
                                       const HChar *format, va_list vargs )
                          __attribute__((format(__printf__, 3, 0)));



extern void vgPlain_percentify(ULong n, ULong m, UInt d, Int n_buf, char buf[]);
# 73 "../include/pub_tool_libcprint.h"
typedef
   enum {
      Vg_FailMsg,
      Vg_UserMsg,
      Vg_DebugMsg,
      Vg_ClientMsg
   }
   VgMsgKind;



extern UInt vgPlain_printf ( const HChar *format, ... )
                          __attribute__((format(__printf__, 1, 2)));
extern UInt vgPlain_vprintf ( const HChar *format, va_list vargs )
                          __attribute__((format(__printf__, 1, 0)));
# 96 "../include/pub_tool_libcprint.h"
extern UInt vgPlain_printf_xml ( const HChar *format, ... )
                             __attribute__((format(__printf__, 1, 2)));

extern UInt vgPlain_vprintf_xml ( const HChar *format, va_list vargs )
                             __attribute__((format(__printf__, 1, 0)));

extern UInt vgPlain_printf_xml_no_f_c ( const HChar *format, ... );



extern void vgPlain_vcbprintf( void(*char_sink)(HChar, void* opaque),
                            void* opaque,
                            const HChar* format, va_list vargs );

extern UInt vgPlain_message_no_f_c( VgMsgKind kind, const HChar* format, ... );
extern UInt vgPlain_message( VgMsgKind kind, const HChar* format, ... )
   __attribute__((format(__printf__, 2, 3)));

extern UInt vgPlain_vmessage( VgMsgKind kind, const HChar* format, va_list vargs )
   __attribute__((format(__printf__, 2, 0)));





extern UInt vgPlain_fmsg( const HChar* format, ... ) __attribute__((format(__printf__, 1, 2)));






__attribute__((noreturn))
extern void vgPlain_fmsg_bad_option ( HChar* opt, const HChar* format, ... )
   __attribute__((format(__printf__, 2, 3)));




extern UInt vgPlain_umsg( const HChar* format, ... ) __attribute__((format(__printf__, 1, 2)));


extern UInt vgPlain_dmsg( const HChar* format, ... ) __attribute__((format(__printf__, 1, 2)));


extern void vgPlain_message_flush ( void );
# 43 "drd_clientreq.c" 2
# 1 "../include/pub_tool_machine.h" 1
# 110 "../include/pub_tool_machine.h"
Addr vgPlain_get_IP ( ThreadId tid );
Addr vgPlain_get_SP ( ThreadId tid );
# 120 "../include/pub_tool_machine.h"
void
vgPlain_get_shadow_regs_area ( ThreadId tid,
                                   UChar* dst,
                                   Int shadowNo, PtrdiffT offset, SizeT size );
void
vgPlain_set_shadow_regs_area ( ThreadId tid,
                                   Int shadowNo, PtrdiffT offset, SizeT size,
                                   const UChar* src );



void vgPlain_set_syscall_return_shadows ( ThreadId tid,

                                       UWord s1res, UWord s2res,

                                       UWord s1err, UWord s2err );





extern void vgPlain_apply_to_GP_regs(void (*f)(UWord val));




extern void vgPlain_thread_stack_reset_iter ( ThreadId* tid );
extern Bool vgPlain_thread_stack_next ( ThreadId* tid,
                                                  Addr* stack_min,
                                                  Addr* stack_max );


extern Addr vgPlain_thread_get_stack_max ( ThreadId tid );


extern SizeT vgPlain_thread_get_stack_size ( ThreadId tid );



extern Addr vgPlain_thread_get_altstack_min ( ThreadId tid );



extern SizeT vgPlain_thread_get_altstack_size ( ThreadId tid );





extern void* vgPlain_fnptr_to_fnentry( void* );
# 44 "drd_clientreq.c" 2






static Bool handle_client_request(ThreadId vg_tid, UWord* arg, UWord* ret);
# 59 "drd_clientreq.c"
void vgDrd_clientreq_init(void)
{
   vgPlain_needs_client_requests(handle_client_request);
}





static Bool handle_client_request(ThreadId vg_tid, UWord* arg, UWord* ret)
{
   UWord result = 0;
   const DrdThreadId drd_tid = vgDrd_thread_get_running_tid();

   ((void) ((vg_tid == vgPlain_get_running_tid()) ? 0 : (vgPlain_assert_fail ( ((Bool)0), (const Char*)"vg_tid == VG_(get_running_tid())", (const Char*)"drd_clientreq.c", 73, (const Char*)__PRETTY_FUNCTION__, (const HChar*)""), 0)));
   ((void) ((vgDrd_VgThreadIdToDrdThreadId(vg_tid) == drd_tid) ? 0 : (vgPlain_assert_fail ( ((Bool)0), (const Char*)"DRD_(VgThreadIdToDrdThreadId)(vg_tid) == drd_tid", (const Char*)"drd_clientreq.c", 74, (const Char*)__PRETTY_FUNCTION__, (const HChar*)""), 0)));

   switch (arg[0])
   {
   case VG_USERREQ__MALLOCLIKE_BLOCK:
      if (arg[1])
         vgDrd_malloclike_block(vg_tid, arg[1] , arg[2] );
      break;

   case VG_USERREQ__FREELIKE_BLOCK:
      if (arg[1] && ! vgDrd_freelike_block(vg_tid, arg[1] ))
      {
         GenericErrInfo GEI = {
     .tid = vgDrd_thread_get_running_tid(),
     .addr = 0,
  };
         vgPlain_maybe_record_error(vg_tid,
                                 GenericErr,
                                 vgPlain_get_IP(vg_tid),
                                 "Invalid VG_USERREQ__FREELIKE_BLOCK request",
                                 &GEI);
      }
      break;

   case VG_USERREQ__DRD_GET_VALGRIND_THREAD_ID:
      result = vg_tid;
      break;

   case VG_USERREQ__DRD_GET_DRD_THREAD_ID:
      result = drd_tid;
      break;

   case VG_USERREQ__DRD_SET_THREAD_NAME:
      vgDrd_thread_set_name(drd_tid, (const char*)arg[1]);
      break;

   case VG_USERREQ__DRD_START_SUPPRESSION:

   case ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 39:
      vgDrd_start_suppression(arg[1], arg[1] + arg[2], "client");
      break;

   case VG_USERREQ__DRD_FINISH_SUPPRESSION:

   case ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 40:
      vgDrd_finish_suppression(arg[1], arg[1] + arg[2]);
      break;

   case VG_USERREQ__DRD_ANNOTATE_HAPPENS_BEFORE:
      vgDrd_hb_happens_before(drd_tid, arg[1]);
      break;

   case VG_USERREQ__DRD_ANNOTATE_HAPPENS_AFTER:
      vgDrd_hb_happens_after(drd_tid, arg[1]);
      break;

   case VG_USERREQ__DRD_ANNOTATE_RWLOCK_CREATE:
      if (arg[1])
      {
         struct mutex_info* const mutex_p = vgDrd_mutex_get(arg[1]);
         if (mutex_p && mutex_p->mutex_type == mutex_type_spinlock)
            break;
      }
      vgDrd_rwlock_pre_init(arg[1], user_rwlock);
      break;

   case VG_USERREQ__DRD_ANNOTATE_RWLOCK_DESTROY:
      if (arg[1])
      {
         struct mutex_info* const mutex_p = vgDrd_mutex_get(arg[1]);
         if (mutex_p && mutex_p->mutex_type == mutex_type_spinlock)
            break;
      }
      vgDrd_rwlock_post_destroy(arg[1], user_rwlock);
      break;

   case VG_USERREQ__DRD_ANNOTATE_RWLOCK_ACQUIRED:
      if (arg[1])
      {
         struct mutex_info* const mutex_p = vgDrd_mutex_get(arg[1]);
         if (mutex_p && mutex_p->mutex_type == mutex_type_spinlock)
            break;
      }
      ((void) ((arg[2] == !! arg[2]) ? 0 : (vgPlain_assert_fail ( ((Bool)0), (const Char*)"arg[2] == !! arg[2]", (const Char*)"drd_clientreq.c", 157, (const Char*)__PRETTY_FUNCTION__, (const HChar*)""), 0)));
      if (arg[2])
      {
         vgDrd_rwlock_pre_wrlock(arg[1], user_rwlock);
         vgDrd_rwlock_post_wrlock(arg[1], user_rwlock, ((Bool)1));
      }
      else
      {
         vgDrd_rwlock_pre_rdlock(arg[1], user_rwlock);
         vgDrd_rwlock_post_rdlock(arg[1], user_rwlock, ((Bool)1));
      }
      break;

   case VG_USERREQ__DRD_ANNOTATE_RWLOCK_RELEASED:
      if (arg[1])
      {
         struct mutex_info* const mutex_p = vgDrd_mutex_get(arg[1]);
         if (mutex_p && mutex_p->mutex_type == mutex_type_spinlock)
            break;
      }
      ((void) ((arg[2] == !! arg[2]) ? 0 : (vgPlain_assert_fail ( ((Bool)0), (const Char*)"arg[2] == !! arg[2]", (const Char*)"drd_clientreq.c", 177, (const Char*)__PRETTY_FUNCTION__, (const HChar*)""), 0)));
      vgDrd_rwlock_pre_unlock(arg[1], user_rwlock);
      break;

   case VG_USERREQ__SET_PTHREAD_COND_INITIALIZER:
      vgDrd_pthread_cond_initializer = (Addr)arg[1];
      vgDrd_pthread_cond_initializer_size = arg[2];
      break;

   case VG_USERREQ__DRD_START_NEW_SEGMENT:
      vgDrd_thread_new_segment(vgDrd_PtThreadIdToDrdThreadId(arg[1]));
      break;

   case VG_USERREQ__DRD_START_TRACE_ADDR:
      vgDrd_start_tracing_address_range(arg[1], arg[1] + arg[2]);
      break;

   case VG_USERREQ__DRD_STOP_TRACE_ADDR:
      vgDrd_stop_tracing_address_range(arg[1], arg[1] + arg[2]);
      break;

   case VG_USERREQ__DRD_RECORD_LOADS:
      vgDrd_thread_set_record_loads(drd_tid, arg[1]);
      break;

   case VG_USERREQ__DRD_RECORD_STORES:
      vgDrd_thread_set_record_stores(drd_tid, arg[1]);
      break;

   case VG_USERREQ__SET_PTHREADID:

      if (arg[1] != ((PThreadId)0))
         vgDrd_thread_set_pthreadid(drd_tid, arg[1]);
      break;

   case VG_USERREQ__SET_JOINABLE:
   {
      const DrdThreadId drd_joinable = vgDrd_PtThreadIdToDrdThreadId(arg[1]);
      if (drd_joinable != 0)
         vgDrd_thread_set_joinable(drd_joinable, (Bool)arg[2]);
      else {
         InvalidThreadIdInfo ITI = { vgDrd_thread_get_running_tid(), arg[1] };
         vgPlain_maybe_record_error(vg_tid,
                                 InvalidThreadId,
                                 vgPlain_get_IP(vg_tid),
                                 "pthread_detach(): invalid thread ID",
                                 &ITI);
      }
      break;
   }

   case VG_USERREQ__ENTERING_PTHREAD_CREATE:
      vgDrd_thread_entering_pthread_create(drd_tid);
      break;

   case VG_USERREQ__LEFT_PTHREAD_CREATE:
      vgDrd_thread_left_pthread_create(drd_tid);
      break;

   case VG_USERREQ__POST_THREAD_JOIN:
   {
      const DrdThreadId thread_to_join = vgDrd_PtThreadIdToDrdThreadId(arg[1]);
      if (thread_to_join == 0)
      {
         InvalidThreadIdInfo ITI = { vgDrd_thread_get_running_tid(), arg[1] };
         vgPlain_maybe_record_error(vg_tid,
                                 InvalidThreadId,
                                 vgPlain_get_IP(vg_tid),
                                 "pthread_join(): invalid thread ID",
                                 &ITI);
      }
      else
      {
         vgDrd_thread_post_join(drd_tid, thread_to_join);
      }
      break;
   }

   case VG_USERREQ__PRE_THREAD_CANCEL:
   {
      const DrdThreadId thread_to_cancel =vgDrd_PtThreadIdToDrdThreadId(arg[1]);
      if (thread_to_cancel == 0)
      {
         InvalidThreadIdInfo ITI = { vgDrd_thread_get_running_tid(), arg[1] };
         vgPlain_maybe_record_error(vg_tid,
                                 InvalidThreadId,
                                 vgPlain_get_IP(vg_tid),
                                 "pthread_cancel(): invalid thread ID",
                                 &ITI);
      }
      else
      {
         vgDrd_thread_pre_cancel(thread_to_cancel);
      }
      break;
   }

   case VG_USERREQ__POST_THREAD_CANCEL:
      break;

   case VG_USERREQ__PRE_MUTEX_INIT:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_mutex_init(arg[1], arg[2]);
      break;

   case VG_USERREQ__POST_MUTEX_INIT:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_MUTEX_DESTROY:
      vgDrd_thread_enter_synchr(drd_tid);
      break;

   case VG_USERREQ__POST_MUTEX_DESTROY:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_mutex_post_destroy(arg[1]);
      break;

   case VG_USERREQ__PRE_MUTEX_LOCK:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_mutex_pre_lock(arg[1], arg[2], arg[3]);
      break;

   case VG_USERREQ__POST_MUTEX_LOCK:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_mutex_post_lock(arg[1], arg[2], ((Bool)0) );
      break;

   case VG_USERREQ__PRE_MUTEX_UNLOCK:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_mutex_unlock(arg[1], arg[2]);
      break;

   case VG_USERREQ__POST_MUTEX_UNLOCK:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_SPIN_INIT_OR_UNLOCK:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_spinlock_init_or_unlock(arg[1]);
      break;

   case VG_USERREQ__POST_SPIN_INIT_OR_UNLOCK:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_COND_INIT:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_cond_pre_init(arg[1]);
      break;

   case VG_USERREQ__POST_COND_INIT:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_COND_DESTROY:
      vgDrd_thread_enter_synchr(drd_tid);
      break;

   case VG_USERREQ__POST_COND_DESTROY:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_cond_post_destroy(arg[1]);
      break;

   case VG_USERREQ__PRE_COND_WAIT:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
      {
         const Addr cond = arg[1];
         const Addr mutex = arg[2];
         const MutexT mutex_type = arg[3];
         vgDrd_mutex_unlock(mutex, mutex_type);
         vgDrd_cond_pre_wait(cond, mutex);
      }
      break;

   case VG_USERREQ__POST_COND_WAIT:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
      {
         const Addr cond = arg[1];
         const Addr mutex = arg[2];
         const Bool took_lock = arg[3];
         vgDrd_cond_post_wait(cond);
         vgDrd_mutex_post_lock(mutex, took_lock, ((Bool)1));
      }
      break;

   case VG_USERREQ__PRE_COND_SIGNAL:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_cond_pre_signal(arg[1]);
      break;

   case VG_USERREQ__POST_COND_SIGNAL:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_COND_BROADCAST:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_cond_pre_broadcast(arg[1]);
      break;

   case VG_USERREQ__POST_COND_BROADCAST:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_SEM_INIT:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_semaphore_init(arg[1], arg[2], arg[3]);
      break;

   case VG_USERREQ__POST_SEM_INIT:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_SEM_DESTROY:
      vgDrd_thread_enter_synchr(drd_tid);
      break;

   case VG_USERREQ__POST_SEM_DESTROY:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_semaphore_destroy(arg[1]);
      break;

   case VG_USERREQ__PRE_SEM_OPEN:
      vgDrd_thread_enter_synchr(drd_tid);
      break;

   case VG_USERREQ__POST_SEM_OPEN:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_semaphore_open(arg[1], (Char*)arg[2], arg[3], arg[4], arg[5]);
      break;

   case VG_USERREQ__PRE_SEM_CLOSE:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_semaphore_close(arg[1]);
      break;

   case VG_USERREQ__POST_SEM_CLOSE:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_SEM_WAIT:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_semaphore_pre_wait(arg[1]);
      break;

   case VG_USERREQ__POST_SEM_WAIT:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_semaphore_post_wait(drd_tid, arg[1], arg[2]);
      break;

   case VG_USERREQ__PRE_SEM_POST:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_semaphore_pre_post(drd_tid, arg[1]);
      break;

   case VG_USERREQ__POST_SEM_POST:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_semaphore_post_post(drd_tid, arg[1], arg[2]);
      break;

   case VG_USERREQ__PRE_BARRIER_INIT:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_barrier_init(arg[1], arg[2], arg[3], arg[4]);
      break;

   case VG_USERREQ__POST_BARRIER_INIT:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__PRE_BARRIER_DESTROY:
      vgDrd_thread_enter_synchr(drd_tid);
      break;

   case VG_USERREQ__POST_BARRIER_DESTROY:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_barrier_destroy(arg[1], arg[2]);
      break;

   case VG_USERREQ__PRE_BARRIER_WAIT:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_barrier_pre_wait(drd_tid, arg[1], arg[2]);
      break;

   case VG_USERREQ__POST_BARRIER_WAIT:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_barrier_post_wait(drd_tid, arg[1], arg[2], arg[3], arg[4]);
      break;

   case VG_USERREQ__PRE_RWLOCK_INIT:
      vgDrd_rwlock_pre_init(arg[1], pthread_rwlock);
      break;

   case VG_USERREQ__POST_RWLOCK_DESTROY:
      vgDrd_rwlock_post_destroy(arg[1], pthread_rwlock);
      break;

   case VG_USERREQ__PRE_RWLOCK_RDLOCK:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_rwlock_pre_rdlock(arg[1], pthread_rwlock);
      break;

   case VG_USERREQ__POST_RWLOCK_RDLOCK:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_rwlock_post_rdlock(arg[1], pthread_rwlock, arg[2]);
      break;

   case VG_USERREQ__PRE_RWLOCK_WRLOCK:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_rwlock_pre_wrlock(arg[1], pthread_rwlock);
      break;

   case VG_USERREQ__POST_RWLOCK_WRLOCK:
      if (vgDrd_thread_leave_synchr(drd_tid) == 0)
         vgDrd_rwlock_post_wrlock(arg[1], pthread_rwlock, arg[2]);
      break;

   case VG_USERREQ__PRE_RWLOCK_UNLOCK:
      if (vgDrd_thread_enter_synchr(drd_tid) == 0)
         vgDrd_rwlock_pre_unlock(arg[1], pthread_rwlock);
      break;

   case VG_USERREQ__POST_RWLOCK_UNLOCK:
      vgDrd_thread_leave_synchr(drd_tid);
      break;

   case VG_USERREQ__DRD_CLEAN_MEMORY:
      if (arg[2] > 0)
         vgDrd_clean_memory(arg[1], arg[2]);
      break;

   case VG_USERREQ__HELGRIND_ANNOTATION_UNIMP:
      {



         UnimpClReqInfo UICR =
            { vgDrd_thread_get_running_tid(), (Char*)arg[1] };
         vgPlain_maybe_record_error(vg_tid,
                                 UnimpHgClReq,
                                 vgPlain_get_IP(vg_tid),
                                 "",
                                 &UICR);
      }
      break;

   case VG_USERREQ__DRD_ANNOTATION_UNIMP:
      {



         UnimpClReqInfo UICR =
            { vgDrd_thread_get_running_tid(), (Char*)arg[1] };
         vgPlain_maybe_record_error(vg_tid,
                                 UnimpDrdClReq,
                                 vgPlain_get_IP(vg_tid),
                                 "",
                                 &UICR);
      }
      break;

   default:





      return ((Bool)0);
   }

   *ret = result;
   return ((Bool)1);
}
