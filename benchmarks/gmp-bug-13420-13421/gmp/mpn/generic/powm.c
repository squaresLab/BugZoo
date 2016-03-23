typedef unsigned int size_t;
typedef unsigned long mp_limb_t;
typedef long mp_limb_signed_t;
typedef unsigned long mp_bitcnt_t;
struct __anonstruct___mpz_struct_1 {
   int _mp_alloc ;
   int _mp_size ;
   mp_limb_t *_mp_d ;
};
typedef struct __anonstruct___mpz_struct_1 __mpz_struct;
typedef __mpz_struct MP_INT;
typedef __mpz_struct mpz_t[1];
typedef mp_limb_t *mp_ptr;
typedef mp_limb_t const   *mp_srcptr;
typedef long mp_size_t;
typedef long mp_exp_t;
struct __anonstruct___mpq_struct_2 {
   __mpz_struct _mp_num ;
   __mpz_struct _mp_den ;
};
typedef struct __anonstruct___mpq_struct_2 __mpq_struct;
typedef __mpq_struct MP_RAT;
typedef __mpq_struct mpq_t[1];
struct __anonstruct___mpf_struct_3 {
   int _mp_prec ;
   int _mp_size ;
   mp_exp_t _mp_exp ;
   mp_limb_t *_mp_d ;
};
typedef struct __anonstruct___mpf_struct_3 __mpf_struct;
typedef __mpf_struct mpf_t[1];
enum __anonenum_gmp_randalg_t_4 {
    GMP_RAND_ALG_DEFAULT = 0,
    GMP_RAND_ALG_LC = 0
} ;
typedef enum __anonenum_gmp_randalg_t_4 gmp_randalg_t;
union __anonunion__mp_algdata_6 {
   void *_mp_lc ;
};
struct __anonstruct___gmp_randstate_struct_5 {
   mpz_t _mp_seed ;
   gmp_randalg_t _mp_alg ;
   union __anonunion__mp_algdata_6 _mp_algdata ;
};
typedef struct __anonstruct___gmp_randstate_struct_5 __gmp_randstate_struct;
typedef __gmp_randstate_struct gmp_randstate_t[1];
typedef __mpz_struct const   *mpz_srcptr;
typedef __mpz_struct *mpz_ptr;
typedef __mpf_struct const   *mpf_srcptr;
typedef __mpf_struct *mpf_ptr;
typedef __mpq_struct const   *mpq_srcptr;
typedef __mpq_struct *mpq_ptr;
enum __anonenum_7 {
    GMP_ERROR_NONE = 0,
    GMP_ERROR_UNSUPPORTED_ARGUMENT = 1,
    GMP_ERROR_DIVISION_BY_ZERO = 2,
    GMP_ERROR_SQRT_OF_NEGATIVE = 4,
    GMP_ERROR_INVALID_ARGUMENT = 8
} ;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
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
typedef int intptr_t;
typedef unsigned int uintptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef long __gwchar_t;
struct __anonstruct_imaxdiv_t_8 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_imaxdiv_t_8 imaxdiv_t;
typedef uint_least32_t gmp_uint_least32_t;
typedef intptr_t gmp_intptr_t;
struct __anonstruct_gmp_pi1_t_9 {
   mp_limb_t inv32 ;
};
typedef struct __anonstruct_gmp_pi1_t_9 gmp_pi1_t;
struct __anonstruct_gmp_pi2_t_10 {
   mp_limb_t inv21 ;
   mp_limb_t inv32 ;
   mp_limb_t inv53 ;
};
typedef struct __anonstruct_gmp_pi2_t_10 gmp_pi2_t;
union tmp_align_t {
   mp_limb_t l ;
   char *p ;
};
struct tmp_reentrant_t {
   struct tmp_reentrant_t *next ;
   size_t size ;
};
typedef __gmp_randstate_struct *gmp_randstate_ptr;
typedef __gmp_randstate_struct const   *gmp_randstate_srcptr;
struct __anonstruct_gmp_randfnptr_t_11 {
   void (*randseed_fn)(__gmp_randstate_struct * , mpz_srcptr  ) ;
   void (*randget_fn)(__gmp_randstate_struct * , mp_ptr  , unsigned long  ) ;
   void (*randclear_fn)(__gmp_randstate_struct * ) ;
   void (*randiset_fn)(gmp_randstate_ptr  , gmp_randstate_srcptr  ) ;
};
typedef struct __anonstruct_gmp_randfnptr_t_11 gmp_randfnptr_t;
enum toom6_flags {
    toom6_all_pos = 0,
    toom6_vm1_neg = 1,
    toom6_vm2_neg = 2
} ;
enum toom7_flags {
    toom7_w1_neg = 1,
    toom7_w3_neg = 2
} ;
struct __anonstruct_gmp_primesieve_t_12 {
   unsigned long d ;
   unsigned long s0 ;
   unsigned long sqrt_s0 ;
   unsigned char s[513] ;
};
typedef struct __anonstruct_gmp_primesieve_t_12 gmp_primesieve_t;
struct fft_table_nk {
   unsigned int n : 27 ;
   unsigned int k : 5 ;
};
struct bases {
   int chars_per_limb ;
   double chars_per_bit_exactly ;
   mp_limb_t big_base ;
   mp_limb_t big_base_inverted ;
};
typedef unsigned char UQItype;
typedef int SItype;
typedef unsigned int USItype;
typedef long long DItype;
typedef unsigned long long UDItype;
typedef mp_limb_t UWtype;
typedef unsigned int UHWtype;
struct __anonstruct_s_13 {
   gmp_uint_least32_t manl : 32 ;
   gmp_uint_least32_t manh : 20 ;
   gmp_uint_least32_t exp : 11 ;
   gmp_uint_least32_t sig : 1 ;
};
union ieee_double_extract {
   struct __anonstruct_s_13 s ;
   double d ;
};
struct hgcd_matrix1 {
   mp_limb_t u[2][2] ;
};
struct hgcd_matrix {
   mp_size_t alloc ;
   mp_size_t n ;
   mp_ptr p[2][2] ;
};
struct powers {
   mp_ptr p ;
   mp_size_t n ;
   mp_size_t shift ;
   size_t digits_in_base ;
   int base ;
};
typedef struct powers powers_t;
struct doprnt_params_t {
   int base ;
   int conv ;
   char const   *expfmt ;
   int exptimes4 ;
   char fill ;
   int justify ;
   int prec ;
   int showbase ;
   int showpoint ;
   int showtrailing ;
   char sign ;
   int width ;
};
typedef int (*gmp_doscan_scan_t)(void * , char const   *  , ...);
typedef void *(*gmp_doscan_step_t)(void * , int  );
typedef int (*gmp_doscan_get_t)(void * );
typedef int (*gmp_doscan_unget_t)(int  , void * );
struct gmp_doscan_funs_t {
   int (*scan)(void * , char const   *  , ...) ;
   void *(*step)(void * , int  ) ;
   int (*get)(void * ) ;
   int (*unget)(int  , void * ) ;
};
extern void __gmp_set_memory_functions(void *(*)(size_t  ) , void *(*)(void * , size_t  , size_t  ) , void (*)(void * , size_t  ) ) ;
extern void __gmp_get_memory_functions(void *(**)(size_t  ) , void *(**)(void * , size_t  , size_t  ) , void (**)(void * , size_t  ) ) ;
extern int const   __gmp_bits_per_limb ;
extern int __gmp_errno ;
extern char const   * const  __gmp_version ;
extern void __gmp_randinit(__gmp_randstate_struct * , gmp_randalg_t   , ...) ;
extern void __gmp_randinit_default(__gmp_randstate_struct * ) ;
extern void __gmp_randinit_lc_2exp(__gmp_randstate_struct * , mpz_srcptr  , unsigned long  , mp_bitcnt_t  ) ;
extern int __gmp_randinit_lc_2exp_size(__gmp_randstate_struct * , mp_bitcnt_t  ) ;
extern void __gmp_randinit_mt(__gmp_randstate_struct * ) ;
extern void __gmp_randinit_set(__gmp_randstate_struct * , __gmp_randstate_struct const   * ) ;
extern void __gmp_randseed(__gmp_randstate_struct * , mpz_srcptr  ) ;
extern void __gmp_randseed_ui(__gmp_randstate_struct * , unsigned long  ) ;
extern void __gmp_randclear(__gmp_randstate_struct * ) ;
extern unsigned long __gmp_urandomb_ui(__gmp_randstate_struct * , unsigned long  ) ;
extern unsigned long __gmp_urandomm_ui(__gmp_randstate_struct * , unsigned long  ) ;
extern int __gmp_asprintf(char ** , char const   *  , ...) ;
extern int __gmp_printf(char const   *  , ...) ;
extern int __gmp_snprintf(char * , size_t  , char const   *  , ...) ;
extern int __gmp_sprintf(char * , char const   *  , ...) ;
extern int __gmp_scanf(char const   *  , ...) ;
extern int __gmp_sscanf(char const   * , char const   *  , ...) ;
extern void *__gmpz_realloc(mpz_ptr  , mp_size_t  ) ;
__inline extern void __attribute__((__gnu_inline__))  __gmpz_abs(mpz_ptr __gmp_w , mpz_srcptr __gmp_u ) ;
extern void __gmpz_add(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_add_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_addmul(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_addmul_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_and(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_array_init(mpz_ptr  , mp_size_t  , mp_size_t  ) ;
extern void __gmpz_bin_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_bin_uiui(mpz_ptr  , unsigned long  , unsigned long  ) ;
extern void __gmpz_cdiv_q(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_cdiv_q_2exp(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern unsigned long __gmpz_cdiv_q_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_cdiv_qr(mpz_ptr  , mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern unsigned long __gmpz_cdiv_qr_ui(mpz_ptr  , mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_cdiv_r(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_cdiv_r_2exp(mpz_ptr  , mpz_srcptr  , mp_bitcnt_t  ) ;
extern unsigned long __gmpz_cdiv_r_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern unsigned long __gmpz_cdiv_ui(mpz_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern void __gmpz_clear(mpz_ptr  ) ;
extern void __gmpz_clears(mpz_ptr   , ...) ;
extern void __gmpz_clrbit(mpz_ptr  , mp_bitcnt_t  ) ;
extern int __gmpz_cmp(mpz_srcptr  , mpz_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpz_cmp_d(mpz_srcptr  , double  )  __attribute__((__pure__)) ;
extern int __gmpz_cmp_si(mpz_srcptr  , long  )  __attribute__((__pure__)) ;
extern int __gmpz_cmp_ui(mpz_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern int __gmpz_cmpabs(mpz_srcptr  , mpz_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpz_cmpabs_d(mpz_srcptr  , double  )  __attribute__((__pure__)) ;
extern int __gmpz_cmpabs_ui(mpz_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern void __gmpz_com(mpz_ptr  , mpz_srcptr  ) ;
extern void __gmpz_combit(mpz_ptr  , mp_bitcnt_t  ) ;
extern int __gmpz_congruent_p(mpz_srcptr  , mpz_srcptr  , mpz_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpz_congruent_2exp_p(mpz_srcptr  , mpz_srcptr  , mp_bitcnt_t  )  __attribute__((__pure__)) ;
extern int __gmpz_congruent_ui_p(mpz_srcptr  , unsigned long  , unsigned long  )  __attribute__((__pure__)) ;
extern void __gmpz_divexact(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_divexact_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern int __gmpz_divisible_p(mpz_srcptr  , mpz_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpz_divisible_ui_p(mpz_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern int __gmpz_divisible_2exp_p(mpz_srcptr  , mp_bitcnt_t  )  __attribute__((__pure__)) ;
extern void __gmpz_dump(mpz_srcptr  ) ;
extern void *__gmpz_export(void * , size_t * , int  , size_t  , int  , size_t  , mpz_srcptr  ) ;
extern void __gmpz_fac_ui(mpz_ptr  , unsigned long  ) ;
extern void __gmpz_fdiv_q(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_fdiv_q_2exp(mpz_ptr  , mpz_srcptr  , mp_bitcnt_t  ) ;
extern unsigned long __gmpz_fdiv_q_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_fdiv_qr(mpz_ptr  , mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern unsigned long __gmpz_fdiv_qr_ui(mpz_ptr  , mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_fdiv_r(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_fdiv_r_2exp(mpz_ptr  , mpz_srcptr  , mp_bitcnt_t  ) ;
extern unsigned long __gmpz_fdiv_r_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern unsigned long __gmpz_fdiv_ui(mpz_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern void __gmpz_fib_ui(mpz_ptr  , unsigned long  ) ;
extern void __gmpz_fib2_ui(mpz_ptr  , mpz_ptr  , unsigned long  ) ;
extern int __gmpz_fits_sint_p(mpz_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpz_fits_slong_p(mpz_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpz_fits_sshort_p(mpz_srcptr  )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_uint_p(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_ulong_p(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_ushort_p(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
extern void __gmpz_gcd(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern unsigned long __gmpz_gcd_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_gcdext(mpz_ptr  , mpz_ptr  , mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern double __gmpz_get_d(mpz_srcptr  )  __attribute__((__pure__)) ;
extern double __gmpz_get_d_2exp(long * , mpz_srcptr  ) ;
extern long __gmpz_get_si(mpz_srcptr  )  __attribute__((__pure__)) ;
extern char *__gmpz_get_str(char * , int  , mpz_srcptr  ) ;
__inline extern unsigned long __attribute__((__gnu_inline__))  __gmpz_get_ui(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpz_getlimbn(mpz_srcptr __gmp_z , mp_size_t __gmp_n )  __attribute__((__pure__)) ;
extern mp_bitcnt_t __gmpz_hamdist(mpz_srcptr  , mpz_srcptr  )  __attribute__((__pure__)) ;
extern void __gmpz_import(mpz_ptr  , size_t  , int  , size_t  , int  , size_t  , void const   * ) ;
extern void __gmpz_init(mpz_ptr  ) ;
extern void __gmpz_init2(mpz_ptr  , mp_bitcnt_t  ) ;
extern void __gmpz_inits(mpz_ptr   , ...) ;
extern void __gmpz_init_set(mpz_ptr  , mpz_srcptr  ) ;
extern void __gmpz_init_set_d(mpz_ptr  , double  ) ;
extern void __gmpz_init_set_si(mpz_ptr  , long  ) ;
extern int __gmpz_init_set_str(mpz_ptr  , char const   * , int  ) ;
extern void __gmpz_init_set_ui(mpz_ptr  , unsigned long  ) ;
extern int __gmpz_invert(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_ior(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern int __gmpz_jacobi(mpz_srcptr  , mpz_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpz_kronecker_si(mpz_srcptr  , long  )  __attribute__((__pure__)) ;
extern int __gmpz_kronecker_ui(mpz_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern int __gmpz_si_kronecker(long  , mpz_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpz_ui_kronecker(unsigned long  , mpz_srcptr  )  __attribute__((__pure__)) ;
extern void __gmpz_lcm(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_lcm_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_lucnum_ui(mpz_ptr  , unsigned long  ) ;
extern void __gmpz_lucnum2_ui(mpz_ptr  , mpz_ptr  , unsigned long  ) ;
extern int __gmpz_millerrabin(mpz_srcptr  , int  )  __attribute__((__pure__)) ;
extern void __gmpz_mod(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_mul(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_mul_2exp(mpz_ptr  , mpz_srcptr  , mp_bitcnt_t  ) ;
extern void __gmpz_mul_si(mpz_ptr  , mpz_srcptr  , long  ) ;
extern void __gmpz_mul_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
__inline extern void __attribute__((__gnu_inline__))  __gmpz_neg(mpz_ptr __gmp_w , mpz_srcptr __gmp_u ) ;
extern void __gmpz_nextprime(mpz_ptr  , mpz_srcptr  ) ;
extern int __gmpz_perfect_power_p(mpz_srcptr  )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpz_perfect_square_p(mpz_srcptr __gmp_a )  __attribute__((__pure__)) ;
__inline extern mp_bitcnt_t __attribute__((__gnu_inline__))  __gmpz_popcount(mpz_srcptr __gmp_u )  __attribute__((__pure__)) ;
extern void __gmpz_pow_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_powm(mpz_ptr  , mpz_srcptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_powm_sec(mpz_ptr  , mpz_srcptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_powm_ui(mpz_ptr  , mpz_srcptr  , unsigned long  , mpz_srcptr  ) ;
extern int __gmpz_probab_prime_p(mpz_srcptr  , int  )  __attribute__((__pure__)) ;
extern void __gmpz_random(mpz_ptr  , mp_size_t  ) ;
extern void __gmpz_random2(mpz_ptr  , mp_size_t  ) ;
extern void __gmpz_realloc2(mpz_ptr  , mp_bitcnt_t  ) ;
extern unsigned long __gmpz_remove(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern int __gmpz_root(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_rootrem(mpz_ptr  , mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_rrandomb(mpz_ptr  , __gmp_randstate_struct * , mp_bitcnt_t  ) ;
extern mp_bitcnt_t __gmpz_scan0(mpz_srcptr  , mp_bitcnt_t  )  __attribute__((__pure__)) ;
extern mp_bitcnt_t __gmpz_scan1(mpz_srcptr  , mp_bitcnt_t  )  __attribute__((__pure__)) ;
extern void __gmpz_set(mpz_ptr  , mpz_srcptr  ) ;
extern void __gmpz_set_d(mpz_ptr  , double  ) ;
extern void __gmpz_set_f(mpz_ptr  , mpf_srcptr  ) ;
__inline extern void __attribute__((__gnu_inline__))  __gmpz_set_q(mpz_ptr __gmp_w , mpq_srcptr __gmp_u ) ;
extern void __gmpz_set_si(mpz_ptr  , long  ) ;
extern int __gmpz_set_str(mpz_ptr  , char const   * , int  ) ;
extern void __gmpz_set_ui(mpz_ptr  , unsigned long  ) ;
extern void __gmpz_setbit(mpz_ptr  , mp_bitcnt_t  ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __gmpz_size(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
extern size_t __gmpz_sizeinbase(mpz_srcptr  , int  )  __attribute__((__pure__)) ;
extern void __gmpz_sqrt(mpz_ptr  , mpz_srcptr  ) ;
extern void __gmpz_sqrtrem(mpz_ptr  , mpz_ptr  , mpz_srcptr  ) ;
extern void __gmpz_sub(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_sub_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_ui_sub(mpz_ptr  , unsigned long  , mpz_srcptr  ) ;
extern void __gmpz_submul(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_submul_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_swap(mpz_ptr  , mpz_ptr  ) ;
extern unsigned long __gmpz_tdiv_ui(mpz_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern void __gmpz_tdiv_q(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_tdiv_q_2exp(mpz_ptr  , mpz_srcptr  , mp_bitcnt_t  ) ;
extern unsigned long __gmpz_tdiv_q_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_tdiv_qr(mpz_ptr  , mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern unsigned long __gmpz_tdiv_qr_ui(mpz_ptr  , mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern void __gmpz_tdiv_r(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern void __gmpz_tdiv_r_2exp(mpz_ptr  , mpz_srcptr  , mp_bitcnt_t  ) ;
extern unsigned long __gmpz_tdiv_r_ui(mpz_ptr  , mpz_srcptr  , unsigned long  ) ;
extern int __gmpz_tstbit(mpz_srcptr  , mp_bitcnt_t  )  __attribute__((__pure__)) ;
extern void __gmpz_ui_pow_ui(mpz_ptr  , unsigned long  , unsigned long  ) ;
extern void __gmpz_urandomb(mpz_ptr  , __gmp_randstate_struct * , mp_bitcnt_t  ) ;
extern void __gmpz_urandomm(mpz_ptr  , __gmp_randstate_struct * , mpz_srcptr  ) ;
extern void __gmpz_xor(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
__inline extern void __attribute__((__gnu_inline__))  __gmpq_abs(mpq_ptr __gmp_w , mpq_srcptr __gmp_u ) ;
extern void __gmpq_add(mpq_ptr  , mpq_srcptr  , mpq_srcptr  ) ;
extern void __gmpq_canonicalize(mpq_ptr  ) ;
extern void __gmpq_clear(mpq_ptr  ) ;
extern void __gmpq_clears(mpq_ptr   , ...) ;
extern int __gmpq_cmp(mpq_srcptr  , mpq_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpq_cmp_si(mpq_srcptr  , long  , unsigned long  )  __attribute__((__pure__)) ;
extern int __gmpq_cmp_ui(mpq_srcptr  , unsigned long  , unsigned long  )  __attribute__((__pure__)) ;
extern void __gmpq_div(mpq_ptr  , mpq_srcptr  , mpq_srcptr  ) ;
extern void __gmpq_div_2exp(mpq_ptr  , mpq_srcptr  , mp_bitcnt_t  ) ;
extern int __gmpq_equal(mpq_srcptr  , mpq_srcptr  )  __attribute__((__pure__)) ;
extern void __gmpq_get_num(mpz_ptr  , mpq_srcptr  ) ;
extern void __gmpq_get_den(mpz_ptr  , mpq_srcptr  ) ;
extern double __gmpq_get_d(mpq_srcptr  )  __attribute__((__pure__)) ;
extern char *__gmpq_get_str(char * , int  , mpq_srcptr  ) ;
extern void __gmpq_init(mpq_ptr  ) ;
extern void __gmpq_inits(mpq_ptr   , ...) ;
extern void __gmpq_inv(mpq_ptr  , mpq_srcptr  ) ;
extern void __gmpq_mul(mpq_ptr  , mpq_srcptr  , mpq_srcptr  ) ;
extern void __gmpq_mul_2exp(mpq_ptr  , mpq_srcptr  , mp_bitcnt_t  ) ;
__inline extern void __attribute__((__gnu_inline__))  __gmpq_neg(mpq_ptr __gmp_w , mpq_srcptr __gmp_u ) ;
extern void __gmpq_set(mpq_ptr  , mpq_srcptr  ) ;
extern void __gmpq_set_d(mpq_ptr  , double  ) ;
extern void __gmpq_set_den(mpq_ptr  , mpz_srcptr  ) ;
extern void __gmpq_set_f(mpq_ptr  , mpf_srcptr  ) ;
extern void __gmpq_set_num(mpq_ptr  , mpz_srcptr  ) ;
extern void __gmpq_set_si(mpq_ptr  , long  , unsigned long  ) ;
extern int __gmpq_set_str(mpq_ptr  , char const   * , int  ) ;
extern void __gmpq_set_ui(mpq_ptr  , unsigned long  , unsigned long  ) ;
extern void __gmpq_set_z(mpq_ptr  , mpz_srcptr  ) ;
extern void __gmpq_sub(mpq_ptr  , mpq_srcptr  , mpq_srcptr  ) ;
extern void __gmpq_swap(mpq_ptr  , mpq_ptr  ) ;
extern void __gmpf_abs(mpf_ptr  , mpf_srcptr  ) ;
extern void __gmpf_add(mpf_ptr  , mpf_srcptr  , mpf_srcptr  ) ;
extern void __gmpf_add_ui(mpf_ptr  , mpf_srcptr  , unsigned long  ) ;
extern void __gmpf_ceil(mpf_ptr  , mpf_srcptr  ) ;
extern void __gmpf_clear(mpf_ptr  ) ;
extern void __gmpf_clears(mpf_ptr   , ...) ;
extern int __gmpf_cmp(mpf_srcptr  , mpf_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpf_cmp_d(mpf_srcptr  , double  )  __attribute__((__pure__)) ;
extern int __gmpf_cmp_si(mpf_srcptr  , long  )  __attribute__((__pure__)) ;
extern int __gmpf_cmp_ui(mpf_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern void __gmpf_div(mpf_ptr  , mpf_srcptr  , mpf_srcptr  ) ;
extern void __gmpf_div_2exp(mpf_ptr  , mpf_srcptr  , mp_bitcnt_t  ) ;
extern void __gmpf_div_ui(mpf_ptr  , mpf_srcptr  , unsigned long  ) ;
extern void __gmpf_dump(mpf_srcptr  ) ;
extern int __gmpf_eq(mpf_srcptr  , mpf_srcptr  , unsigned long  )  __attribute__((__pure__)) ;
extern int __gmpf_fits_sint_p(mpf_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpf_fits_slong_p(mpf_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpf_fits_sshort_p(mpf_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpf_fits_uint_p(mpf_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpf_fits_ulong_p(mpf_srcptr  )  __attribute__((__pure__)) ;
extern int __gmpf_fits_ushort_p(mpf_srcptr  )  __attribute__((__pure__)) ;
extern void __gmpf_floor(mpf_ptr  , mpf_srcptr  ) ;
extern double __gmpf_get_d(mpf_srcptr  )  __attribute__((__pure__)) ;
extern double __gmpf_get_d_2exp(long * , mpf_srcptr  ) ;
extern mp_bitcnt_t __gmpf_get_default_prec(void)  __attribute__((__pure__)) ;
extern mp_bitcnt_t __gmpf_get_prec(mpf_srcptr  )  __attribute__((__pure__)) ;
extern long __gmpf_get_si(mpf_srcptr  )  __attribute__((__pure__)) ;
extern char *__gmpf_get_str(char * , mp_exp_t * , int  , size_t  , mpf_srcptr  ) ;
extern unsigned long __gmpf_get_ui(mpf_srcptr  )  __attribute__((__pure__)) ;
extern void __gmpf_init(mpf_ptr  ) ;
extern void __gmpf_init2(mpf_ptr  , mp_bitcnt_t  ) ;
extern void __gmpf_inits(mpf_ptr   , ...) ;
extern void __gmpf_init_set(mpf_ptr  , mpf_srcptr  ) ;
extern void __gmpf_init_set_d(mpf_ptr  , double  ) ;
extern void __gmpf_init_set_si(mpf_ptr  , long  ) ;
extern int __gmpf_init_set_str(mpf_ptr  , char const   * , int  ) ;
extern void __gmpf_init_set_ui(mpf_ptr  , unsigned long  ) ;
extern int __gmpf_integer_p(mpf_srcptr  )  __attribute__((__pure__)) ;
extern void __gmpf_mul(mpf_ptr  , mpf_srcptr  , mpf_srcptr  ) ;
extern void __gmpf_mul_2exp(mpf_ptr  , mpf_srcptr  , mp_bitcnt_t  ) ;
extern void __gmpf_mul_ui(mpf_ptr  , mpf_srcptr  , unsigned long  ) ;
extern void __gmpf_neg(mpf_ptr  , mpf_srcptr  ) ;
extern void __gmpf_pow_ui(mpf_ptr  , mpf_srcptr  , unsigned long  ) ;
extern void __gmpf_random2(mpf_ptr  , mp_size_t  , mp_exp_t  ) ;
extern void __gmpf_reldiff(mpf_ptr  , mpf_srcptr  , mpf_srcptr  ) ;
extern void __gmpf_set(mpf_ptr  , mpf_srcptr  ) ;
extern void __gmpf_set_d(mpf_ptr  , double  ) ;
extern void __gmpf_set_default_prec(mp_bitcnt_t  ) ;
extern void __gmpf_set_prec(mpf_ptr  , mp_bitcnt_t  ) ;
extern void __gmpf_set_prec_raw(mpf_ptr  , mp_bitcnt_t  ) ;
extern void __gmpf_set_q(mpf_ptr  , mpq_srcptr  ) ;
extern void __gmpf_set_si(mpf_ptr  , long  ) ;
extern int __gmpf_set_str(mpf_ptr  , char const   * , int  ) ;
extern void __gmpf_set_ui(mpf_ptr  , unsigned long  ) ;
extern void __gmpf_set_z(mpf_ptr  , mpz_srcptr  ) ;
extern size_t __gmpf_size(mpf_srcptr  )  __attribute__((__pure__)) ;
extern void __gmpf_sqrt(mpf_ptr  , mpf_srcptr  ) ;
extern void __gmpf_sqrt_ui(mpf_ptr  , unsigned long  ) ;
extern void __gmpf_sub(mpf_ptr  , mpf_srcptr  , mpf_srcptr  ) ;
extern void __gmpf_sub_ui(mpf_ptr  , mpf_srcptr  , unsigned long  ) ;
extern void __gmpf_swap(mpf_ptr  , mpf_ptr  ) ;
extern void __gmpf_trunc(mpf_ptr  , mpf_srcptr  ) ;
extern void __gmpf_ui_div(mpf_ptr  , unsigned long  , mpf_srcptr  ) ;
extern void __gmpf_ui_sub(mpf_ptr  , unsigned long  , mpf_srcptr  ) ;
extern void __gmpf_urandomb(__mpf_struct * , __gmp_randstate_struct * , mp_bitcnt_t  ) ;
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_add(mp_ptr __gmp_wp , mp_srcptr __gmp_xp , mp_size_t __gmp_xsize , mp_srcptr __gmp_yp , mp_size_t __gmp_ysize ) ;
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_add_1(mp_ptr __gmp_dst , mp_srcptr __gmp_src , mp_size_t __gmp_size , mp_limb_t __gmp_n ) ;
extern mp_limb_t __gmpn_add_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_addmul_1(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpn_cmp(mp_srcptr __gmp_xp , mp_srcptr __gmp_yp , mp_size_t __gmp_size )  __attribute__((__pure__)) ;
extern mp_limb_t __gmpn_divexact_by3c(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_divrem(mp_ptr  , mp_size_t  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_divrem_1(mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_divrem_2(mp_ptr  , mp_size_t  , mp_ptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_size_t __gmpn_gcd(mp_ptr  , mp_ptr  , mp_size_t  , mp_ptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_gcd_1(mp_srcptr  , mp_size_t  , mp_limb_t  )  __attribute__((__pure__)) ;
extern mp_limb_t __gmpn_gcdext_1(mp_limb_signed_t * , mp_limb_signed_t * , mp_limb_t  , mp_limb_t  ) ;
extern mp_size_t __gmpn_gcdext(mp_ptr  , mp_ptr  , mp_size_t * , mp_ptr  , mp_size_t  , mp_ptr  , mp_size_t  ) ;
extern size_t __gmpn_get_str(unsigned char * , int  , mp_ptr  , mp_size_t  ) ;
extern mp_bitcnt_t __gmpn_hamdist(mp_srcptr  , mp_srcptr  , mp_size_t  )  __attribute__((__pure__)) ;
extern mp_limb_t __gmpn_lshift(mp_ptr  , mp_srcptr  , mp_size_t  , unsigned int  ) ;
extern mp_limb_t __gmpn_mod_1(mp_srcptr  , mp_size_t  , mp_limb_t  )  __attribute__((__pure__)) ;
extern mp_limb_t __gmpn_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_mul_1(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern void __gmpn_mul_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_sqr(mp_ptr  , mp_srcptr  , mp_size_t  ) ;
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_neg(mp_ptr __gmp_rp , mp_srcptr __gmp_up , mp_size_t __gmp_n ) ;
extern void __gmpn_com(mp_ptr  , mp_srcptr  , mp_size_t  ) ;
extern int __gmpn_perfect_square_p(mp_srcptr  , mp_size_t  )  __attribute__((__pure__)) ;
extern int __gmpn_perfect_power_p(mp_srcptr  , mp_size_t  )  __attribute__((__pure__)) ;
extern mp_bitcnt_t __gmpn_popcount(mp_srcptr  , mp_size_t  )  __attribute__((__pure__)) ;
extern mp_size_t __gmpn_pow_1(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_ptr  ) ;
extern mp_limb_t __gmpn_preinv_mod_1(mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  )  __attribute__((__pure__)) ;
extern void __gmpn_random(mp_ptr  , mp_size_t  ) ;
extern void __gmpn_random2(mp_ptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_rshift(mp_ptr  , mp_srcptr  , mp_size_t  , unsigned int  ) ;
extern mp_bitcnt_t __gmpn_scan0(mp_srcptr  , mp_bitcnt_t  )  __attribute__((__pure__)) ;
extern mp_bitcnt_t __gmpn_scan1(mp_srcptr  , mp_bitcnt_t  )  __attribute__((__pure__)) ;
extern mp_size_t __gmpn_set_str(mp_ptr  , unsigned char const   * , size_t  , int  ) ;
extern mp_size_t __gmpn_sqrtrem(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  ) ;
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_sub(mp_ptr __gmp_wp , mp_srcptr __gmp_xp , mp_size_t __gmp_xsize , mp_srcptr __gmp_yp , mp_size_t __gmp_ysize ) ;
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_sub_1(mp_ptr __gmp_dst , mp_srcptr __gmp_src , mp_size_t __gmp_size , mp_limb_t __gmp_n ) ;
extern mp_limb_t __gmpn_sub_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_submul_1(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern void __gmpn_tdiv_qr(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_and_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_andn_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_nand_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_ior_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_iorn_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_nior_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_xor_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_xnor_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_copyi(mp_ptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_copyd(mp_ptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_zero(mp_ptr  , mp_size_t  ) ;
__inline extern void __attribute__((__gnu_inline__))  __gmpz_abs(mpz_ptr __gmp_w , mpz_srcptr __gmp_u ) 
{ 

  {
  if ((unsigned int )__gmp_w != (unsigned int )__gmp_u) {
    __gmpz_set(__gmp_w, __gmp_u);
  } else {

  }
  if (__gmp_w->_mp_size >= 0) {
    __gmp_w->_mp_size = __gmp_w->_mp_size;
  } else {
    __gmp_w->_mp_size = - __gmp_w->_mp_size;
  }
  return;
}
}
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_uint_p(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_uint_p(mpz_srcptr __gmp_z ) 
{ mp_size_t __gmp_n ;
  mp_ptr __gmp_p ;
  int tmp ;

  {
  __gmp_n = (mp_size_t )__gmp_z->_mp_size;
  __gmp_p = (mp_ptr )__gmp_z->_mp_d;
  if (__gmp_n == 0L) {
    tmp = 1;
  } else {
    if (__gmp_n == 1L) {
      if (*(__gmp_p + 0) <= 4294967295UL) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  }
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_ulong_p(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_ulong_p(mpz_srcptr __gmp_z ) 
{ mp_size_t __gmp_n ;
  mp_ptr __gmp_p ;
  int tmp ;

  {
  __gmp_n = (mp_size_t )__gmp_z->_mp_size;
  __gmp_p = (mp_ptr )__gmp_z->_mp_d;
  if (__gmp_n == 0L) {
    tmp = 1;
  } else {
    if (__gmp_n == 1L) {
      if (*(__gmp_p + 0) <= 4294967295UL) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  }
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_ushort_p(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpz_fits_ushort_p(mpz_srcptr __gmp_z ) 
{ mp_size_t __gmp_n ;
  mp_ptr __gmp_p ;
  int tmp ;

  {
  __gmp_n = (mp_size_t )__gmp_z->_mp_size;
  __gmp_p = (mp_ptr )__gmp_z->_mp_d;
  if (__gmp_n == 0L) {
    tmp = 1;
  } else {
    if (__gmp_n == 1L) {
      if (*(__gmp_p + 0) <= 65535UL) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  }
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern unsigned long __attribute__((__gnu_inline__))  __gmpz_get_ui(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
__inline extern unsigned long __attribute__((__gnu_inline__))  __gmpz_get_ui(mpz_srcptr __gmp_z ) 
{ mp_ptr __gmp_p ;
  mp_size_t __gmp_n ;
  mp_limb_t __gmp_l ;
  mp_limb_t tmp ;

  {
  __gmp_p = (mp_ptr )__gmp_z->_mp_d;
  __gmp_n = (mp_size_t )__gmp_z->_mp_size;
  __gmp_l = *(__gmp_p + 0);
  if (__gmp_n != 0L) {
    tmp = __gmp_l;
  } else {
    tmp = 0UL;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpz_getlimbn(mpz_srcptr __gmp_z , mp_size_t __gmp_n )  __attribute__((__pure__)) ;
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpz_getlimbn(mpz_srcptr __gmp_z , mp_size_t __gmp_n ) 
{ mp_limb_t __gmp_result ;
  int tmp ;
  int tmp___0 ;
  long tmp___1 ;

  {
  __gmp_result = (mp_limb_t )0;
  if (__gmp_n >= 0L) {
    if (__gmp_z->_mp_size >= 0) {
      tmp = __gmp_z->_mp_size;
    } else {
      tmp = - __gmp_z->_mp_size;
    }
    if (__gmp_n < (mp_size_t )tmp) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )(tmp___0 != 0), 1L);
  if (tmp___1) {
    __gmp_result = *(__gmp_z->_mp_d + __gmp_n);
  } else {

  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__gmp_result);
}
}
__inline extern void __attribute__((__gnu_inline__))  __gmpz_neg(mpz_ptr __gmp_w , mpz_srcptr __gmp_u ) 
{ 

  {
  if ((unsigned int )__gmp_w != (unsigned int )__gmp_u) {
    __gmpz_set(__gmp_w, __gmp_u);
  } else {

  }
  __gmp_w->_mp_size = - __gmp_w->_mp_size;
  return;
}
}
__inline extern int __attribute__((__gnu_inline__))  __gmpz_perfect_square_p(mpz_srcptr __gmp_a )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpz_perfect_square_p(mpz_srcptr __gmp_a ) 
{ mp_size_t __gmp_asize ;
  int __gmp_result ;
  long tmp ;

  {
  __gmp_asize = (long )__gmp_a->_mp_size;
  __gmp_result = __gmp_asize >= 0L;
  tmp = __builtin_expect((long )((__gmp_asize > 0L) != 0), 1L);
  if (tmp) {
    __gmp_result = __gmpn_perfect_square_p((mp_limb_t const   *)__gmp_a->_mp_d, __gmp_asize);
  } else {

  }
  return ((int __attribute__((__gnu_inline__))  )__gmp_result);
}
}
__inline extern mp_bitcnt_t __attribute__((__gnu_inline__))  __gmpz_popcount(mpz_srcptr __gmp_u )  __attribute__((__pure__)) ;
__inline extern mp_bitcnt_t __attribute__((__gnu_inline__))  __gmpz_popcount(mpz_srcptr __gmp_u ) 
{ mp_size_t __gmp_usize ;
  mp_bitcnt_t __gmp_result ;
  long tmp ;

  {
  __gmp_usize = (long )__gmp_u->_mp_size;
  if (__gmp_usize < 0L) {
    __gmp_result = ~ 0UL;
  } else {
    __gmp_result = 0UL;
  }
  tmp = __builtin_expect((long )((__gmp_usize > 0L) != 0), 1L);
  if (tmp) {
    __gmp_result = __gmpn_popcount((mp_limb_t const   *)__gmp_u->_mp_d, __gmp_usize);
  } else {

  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__gmp_result);
}
}
__inline extern void __attribute__((__gnu_inline__))  __gmpz_set_q(mpz_ptr __gmp_w , mpq_srcptr __gmp_u ) 
{ 

  {
  __gmpz_tdiv_q(__gmp_w, & __gmp_u->_mp_num, & __gmp_u->_mp_den);
  return;
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __gmpz_size(mpz_srcptr __gmp_z )  __attribute__((__pure__)) ;
__inline extern size_t __attribute__((__gnu_inline__))  __gmpz_size(mpz_srcptr __gmp_z ) 
{ int tmp ;

  {
  if (__gmp_z->_mp_size >= 0) {
    tmp = __gmp_z->_mp_size;
  } else {
    tmp = - __gmp_z->_mp_size;
  }
  return ((unsigned int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern void __attribute__((__gnu_inline__))  __gmpq_abs(mpq_ptr __gmp_w , mpq_srcptr __gmp_u ) 
{ 

  {
  if ((unsigned int )__gmp_w != (unsigned int )__gmp_u) {
    __gmpq_set(__gmp_w, __gmp_u);
  } else {

  }
  if (__gmp_w->_mp_num._mp_size >= 0) {
    __gmp_w->_mp_num._mp_size = __gmp_w->_mp_num._mp_size;
  } else {
    __gmp_w->_mp_num._mp_size = - __gmp_w->_mp_num._mp_size;
  }
  return;
}
}
__inline extern void __attribute__((__gnu_inline__))  __gmpq_neg(mpq_ptr __gmp_w , mpq_srcptr __gmp_u ) 
{ 

  {
  if ((unsigned int )__gmp_w != (unsigned int )__gmp_u) {
    __gmpq_set(__gmp_w, __gmp_u);
  } else {

  }
  __gmp_w->_mp_num._mp_size = - __gmp_w->_mp_num._mp_size;
  return;
}
}
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_add(mp_ptr __gmp_wp , mp_srcptr __gmp_xp , mp_size_t __gmp_xsize , mp_srcptr __gmp_yp , mp_size_t __gmp_ysize ) 
{ mp_limb_t __gmp_c ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_size_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t tmp___1 ;
  mp_size_t __gmp_j ;

  {
  while (1) {
    __gmp_i = __gmp_ysize;
    if (__gmp_i != 0L) {
      tmp___1 = __gmpn_add_n(__gmp_wp, __gmp_xp, __gmp_yp, __gmp_i);
      if (tmp___1) {
        while (1) {
          if (__gmp_i >= __gmp_xsize) {
            __gmp_c = 1UL;
            goto __gmp_done;
          } else {

          }
          __gmp_x = (unsigned long )*(__gmp_xp + __gmp_i);
          tmp = __gmp_i;
          __gmp_i ++;
          tmp___0 = (__gmp_x + 1UL) & 4294967295UL;
          *(__gmp_wp + tmp) = tmp___0;
          if (tmp___0 == 0UL) {

          } else {
            break;
          }
        }
      } else {

      }
    } else {

    }
    if ((unsigned int )__gmp_wp != (unsigned int )__gmp_xp) {
      while (1) {
        __gmp_j = __gmp_i;
        while (__gmp_j < __gmp_xsize) {
          *(__gmp_wp + __gmp_j) = (unsigned long )*(__gmp_xp + __gmp_j);
          __gmp_j ++;
        }
        break;
      }
    } else {

    }
    __gmp_c = 0UL;
    __gmp_done: ;
    break;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__gmp_c);
}
}
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_add_1(mp_ptr __gmp_dst , mp_srcptr __gmp_src , mp_size_t __gmp_size , mp_limb_t __gmp_n ) 
{ mp_limb_t __gmp_c ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_limb_t __gmp_r ;
  mp_size_t __gmp_j ;
  mp_size_t __gmp_j___0 ;

  {
  while (1) {
    __gmp_x = (unsigned long )*(__gmp_src + 0);
    __gmp_r = __gmp_x + __gmp_n;
    *(__gmp_dst + 0) = __gmp_r;
    if (__gmp_r < __gmp_n) {
      __gmp_c = 1UL;
      __gmp_i = 1L;
      while (__gmp_i < __gmp_size) {
        __gmp_x = (unsigned long )*(__gmp_src + __gmp_i);
        __gmp_r = __gmp_x + 1UL;
        *(__gmp_dst + __gmp_i) = __gmp_r;
        __gmp_i ++;
        if (! (__gmp_r < 1UL)) {
          if ((unsigned int )__gmp_src != (unsigned int )__gmp_dst) {
            while (1) {
              __gmp_j = __gmp_i;
              while (__gmp_j < __gmp_size) {
                *(__gmp_dst + __gmp_j) = (unsigned long )*(__gmp_src + __gmp_j);
                __gmp_j ++;
              }
              break;
            }
          } else {

          }
          __gmp_c = 0UL;
          break;
        } else {

        }
      }
    } else {
      if ((unsigned int )__gmp_src != (unsigned int )__gmp_dst) {
        while (1) {
          __gmp_j___0 = 1L;
          while (__gmp_j___0 < __gmp_size) {
            *(__gmp_dst + __gmp_j___0) = (unsigned long )*(__gmp_src + __gmp_j___0);
            __gmp_j___0 ++;
          }
          break;
        }
      } else {

      }
      __gmp_c = 0UL;
    }
    break;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__gmp_c);
}
}
__inline extern int __attribute__((__gnu_inline__))  __gmpn_cmp(mp_srcptr __gmp_xp , mp_srcptr __gmp_yp , mp_size_t __gmp_size )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  __gmpn_cmp(mp_srcptr __gmp_xp , mp_srcptr __gmp_yp , mp_size_t __gmp_size ) 
{ int __gmp_result ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_limb_t __gmp_y ;

  {
  while (1) {
    __gmp_result = 0;
    __gmp_i = __gmp_size;
    while (1) {
      __gmp_i --;
      if (__gmp_i >= 0L) {

      } else {
        break;
      }
      __gmp_x = (unsigned long )*(__gmp_xp + __gmp_i);
      __gmp_y = (unsigned long )*(__gmp_yp + __gmp_i);
      if (__gmp_x != __gmp_y) {
        if (__gmp_x > __gmp_y) {
          __gmp_result = 1;
        } else {
          __gmp_result = -1;
        }
        break;
      } else {

      }
    }
    break;
  }
  return ((int __attribute__((__gnu_inline__))  )__gmp_result);
}
}
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_sub(mp_ptr __gmp_wp , mp_srcptr __gmp_xp , mp_size_t __gmp_xsize , mp_srcptr __gmp_yp , mp_size_t __gmp_ysize ) 
{ mp_limb_t __gmp_c ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_size_t tmp ;
  mp_limb_t tmp___0 ;
  mp_size_t __gmp_j ;

  {
  while (1) {
    __gmp_i = __gmp_ysize;
    if (__gmp_i != 0L) {
      tmp___0 = __gmpn_sub_n(__gmp_wp, __gmp_xp, __gmp_yp, __gmp_i);
      if (tmp___0) {
        while (1) {
          if (__gmp_i >= __gmp_xsize) {
            __gmp_c = 1UL;
            goto __gmp_done;
          } else {

          }
          __gmp_x = (unsigned long )*(__gmp_xp + __gmp_i);
          tmp = __gmp_i;
          __gmp_i ++;
          *(__gmp_wp + tmp) = (__gmp_x - 1UL) & 4294967295UL;
          if (__gmp_x == 0UL) {

          } else {
            break;
          }
        }
      } else {

      }
    } else {

    }
    if ((unsigned int )__gmp_wp != (unsigned int )__gmp_xp) {
      while (1) {
        __gmp_j = __gmp_i;
        while (__gmp_j < __gmp_xsize) {
          *(__gmp_wp + __gmp_j) = (unsigned long )*(__gmp_xp + __gmp_j);
          __gmp_j ++;
        }
        break;
      }
    } else {

    }
    __gmp_c = 0UL;
    __gmp_done: ;
    break;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__gmp_c);
}
}
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_sub_1(mp_ptr __gmp_dst , mp_srcptr __gmp_src , mp_size_t __gmp_size , mp_limb_t __gmp_n ) 
{ mp_limb_t __gmp_c ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_limb_t __gmp_r ;
  mp_size_t __gmp_j ;
  mp_size_t __gmp_j___0 ;

  {
  while (1) {
    __gmp_x = (unsigned long )*(__gmp_src + 0);
    __gmp_r = __gmp_x - __gmp_n;
    *(__gmp_dst + 0) = __gmp_r;
    if (__gmp_x < __gmp_n) {
      __gmp_c = 1UL;
      __gmp_i = 1L;
      while (__gmp_i < __gmp_size) {
        __gmp_x = (unsigned long )*(__gmp_src + __gmp_i);
        __gmp_r = __gmp_x - 1UL;
        *(__gmp_dst + __gmp_i) = __gmp_r;
        __gmp_i ++;
        if (! (__gmp_x < 1UL)) {
          if ((unsigned int )__gmp_src != (unsigned int )__gmp_dst) {
            while (1) {
              __gmp_j = __gmp_i;
              while (__gmp_j < __gmp_size) {
                *(__gmp_dst + __gmp_j) = (unsigned long )*(__gmp_src + __gmp_j);
                __gmp_j ++;
              }
              break;
            }
          } else {

          }
          __gmp_c = 0UL;
          break;
        } else {

        }
      }
    } else {
      if ((unsigned int )__gmp_src != (unsigned int )__gmp_dst) {
        while (1) {
          __gmp_j___0 = 1L;
          while (__gmp_j___0 < __gmp_size) {
            *(__gmp_dst + __gmp_j___0) = (unsigned long )*(__gmp_src + __gmp_j___0);
            __gmp_j___0 ++;
          }
          break;
        }
      } else {

      }
      __gmp_c = 0UL;
    }
    break;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__gmp_c);
}
}
__inline extern mp_limb_t __attribute__((__gnu_inline__))  __gmpn_neg(mp_ptr __gmp_rp , mp_srcptr __gmp_up , mp_size_t __gmp_n ) 
{ mp_limb_t __gmp_ul ;
  mp_limb_t __gmp_cy ;
  mp_srcptr tmp ;
  mp_ptr tmp___0 ;

  {
  __gmp_cy = 0UL;
  while (1) {
    tmp = __gmp_up;
    __gmp_up ++;
    __gmp_ul = (unsigned long )*tmp;
    tmp___0 = __gmp_rp;
    __gmp_rp ++;
    *tmp___0 = - __gmp_ul - __gmp_cy;
    __gmp_cy |= (unsigned long )(__gmp_ul != 0UL);
    __gmp_n --;
    if (__gmp_n != 0L) {

    } else {
      break;
    }
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__gmp_cy);
}
}
extern  __attribute__((__nothrow__)) intmax_t imaxabs(intmax_t __n )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) imaxdiv_t imaxdiv(intmax_t __numer , intmax_t __denom )  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) ;
extern  __attribute__((__nothrow__)) long long __strtoll_internal(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , int __group )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) ;
__inline extern intmax_t __attribute__((__gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) 
{ long long tmp ;

  {
  tmp = __strtoll_internal(nptr, endptr, base, 0);
  return ((long long __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long long __strtoull_internal(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , int __group )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) ;
__inline extern uintmax_t __attribute__((__gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) 
{ unsigned long long tmp ;

  {
  tmp = __strtoull_internal(nptr, endptr, base, 0);
  return ((unsigned long long __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) long long __wcstoll_internal(__gwchar_t const   * __restrict  __nptr , __gwchar_t ** __restrict  __endptr , int __base , int __group )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) ;
__inline extern intmax_t __attribute__((__gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) 
{ long long tmp ;

  {
  tmp = __wcstoll_internal(nptr, endptr, base, 0);
  return ((long long __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long long __wcstoull_internal(__gwchar_t const   * __restrict  __nptr , __gwchar_t ** __restrict  __endptr , int __base , int __group )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) ;
__inline extern uintmax_t __attribute__((__gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) 
{ unsigned long long tmp ;

  {
  tmp = __wcstoull_internal(nptr, endptr, base, 0);
  return ((unsigned long long __attribute__((__gnu_inline__))  )tmp);
}
}
extern void *__gmp_tmp_reentrant_alloc(struct tmp_reentrant_t ** , size_t  )  __attribute__((__malloc__)) ;
extern void __gmp_tmp_reentrant_free(struct tmp_reentrant_t * ) ;
extern void *(*__gmp_allocate_func)(size_t  ) ;
extern void *(*__gmp_reallocate_func)(void * , size_t  , size_t  ) ;
extern void (*__gmp_free_func)(void * , size_t  ) ;
extern void *__gmp_default_allocate(size_t  ) ;
extern void *__gmp_default_reallocate(void * , size_t  , size_t  ) ;
extern void __gmp_default_free(void * , size_t  ) ;
extern void ( __attribute__((__regparm__(1))) __gmpz_aorsmul_1)(mp_size_t  , mpz_ptr  , mpz_srcptr  , mp_limb_t  ) ;
extern void __gmpz_n_pow_ui(mpz_ptr  , mp_srcptr  , mp_size_t  , unsigned long  ) ;
extern mp_limb_t __gmpn_addmul_1c(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_addmul_2(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_addmul_3(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_addmul_4(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_addmul_5(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_addmul_6(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_addmul_7(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_addmul_8(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_addlsh1_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_addlsh2_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_addlsh_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , unsigned int  ) ;
extern mp_limb_t __gmpn_sublsh1_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_signed_t __gmpn_rsblsh1_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_sublsh2_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_signed_t __gmpn_rsblsh2_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_signed_t __gmpn_rsblsh_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , unsigned int  ) ;
extern mp_limb_t __gmpn_rsh1add_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_rsh1add_nc(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_rsh1sub_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_rsh1sub_nc(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_lshiftc(mp_ptr  , mp_srcptr  , mp_size_t  , unsigned int  ) ;
extern mp_limb_t __gmpn_add_n_sub_n(mp_ptr  , mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_add_n_sub_nc(mp_ptr  , mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_addaddmul_1msb0(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_divrem_1c(mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  ) ;
extern void __gmpn_dump(mp_srcptr  , mp_size_t  ) ;
extern mp_size_t __gmpn_fib2_ui(mp_ptr  , mp_ptr  , unsigned long  ) ;
extern int __gmpn_jacobi_base(mp_limb_t  , mp_limb_t  , int  )  __attribute__((__const__)) ;
extern mp_limb_t __gmpn_mod_1c(mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  )  __attribute__((__pure__)) ;
extern mp_limb_t __gmpn_mul_1c(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_mul_2(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_mul_3(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern mp_limb_t __gmpn_mul_4(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern void __gmpn_mul_basecase(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_mullo_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_mullo_basecase(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_sqr_basecase(mp_ptr  , mp_srcptr  , mp_size_t  ) ;
extern mp_limb_t __gmpn_submul_1c(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  ) ;
extern void __gmpn_redc_1(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern void __gmpn_redc_2(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern void __gmpn_redc_n(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  ) ;
extern void __gmpn_mod_1_1p_cps(mp_limb_t * , mp_limb_t  ) ;
extern mp_limb_t __gmpn_mod_1_1p(mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t * )  __attribute__((__pure__)) ;
extern void __gmpn_mod_1s_2p_cps(mp_limb_t * , mp_limb_t  ) ;
extern mp_limb_t __gmpn_mod_1s_2p(mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t * )  __attribute__((__pure__)) ;
extern void __gmpn_mod_1s_3p_cps(mp_limb_t * , mp_limb_t  ) ;
extern mp_limb_t __gmpn_mod_1s_3p(mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t * )  __attribute__((__pure__)) ;
extern void __gmpn_mod_1s_4p_cps(mp_limb_t * , mp_limb_t  ) ;
extern mp_limb_t __gmpn_mod_1s_4p(mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t * )  __attribute__((__pure__)) ;
extern void __gmpn_bc_mulmod_bnm1(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_mulmod_bnm1(mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_mulmod_bnm1_next_size(mp_size_t  )  __attribute__((__const__)) ;
__inline static mp_size_t mpn_mulmod_bnm1_itch(mp_size_t rn , mp_size_t an , mp_size_t bn ) 
{ mp_size_t n ;
  mp_size_t itch ;
  mp_size_t tmp ;
  mp_size_t tmp___0 ;

  {
  n = rn >> 1;
  if (an > n) {
    if (bn > n) {
      tmp = rn;
    } else {
      tmp = n;
    }
    tmp___0 = tmp;
  } else {
    tmp___0 = 0L;
  }
  itch = (rn + 4L) + tmp___0;
  return (itch);
}
}
extern void __gmpn_sqrmod_bnm1(mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_sqrmod_bnm1_next_size(mp_size_t  )  __attribute__((__const__)) ;
__inline static mp_size_t mpn_sqrmod_bnm1_itch(mp_size_t rn , mp_size_t an ) 
{ mp_size_t n ;
  mp_size_t itch ;
  mp_size_t tmp ;

  {
  n = rn >> 1;
  if (an > n) {
    tmp = an;
  } else {
    tmp = 0L;
  }
  itch = (rn + 3L) + tmp;
  return (itch);
}
}
extern void __gmp_randinit_mt_noseed(__gmp_randstate_struct * ) ;
extern char __gmp_rands_initialized ;
extern gmp_randstate_t __gmp_rands ;
extern void __gmpn_sqr_diagonal(mp_ptr  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_toom_interpolate_5pts(mp_ptr  , mp_ptr  , mp_ptr  , mp_size_t  , mp_size_t  , int  , mp_limb_t  ) ;
extern void __gmpn_toom_interpolate_6pts(mp_ptr  , mp_size_t  , enum toom6_flags  , mp_ptr  , mp_ptr  , mp_ptr  , mp_size_t  ) ;
extern void __gmpn_toom_interpolate_7pts(mp_ptr  , mp_size_t  , enum toom7_flags  , mp_ptr  , mp_ptr  , mp_ptr  , mp_ptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom_interpolate_8pts(mp_ptr  , mp_size_t  , mp_ptr  , mp_ptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom_interpolate_12pts(mp_ptr  , mp_ptr  , mp_ptr  , mp_ptr  , mp_size_t  , mp_size_t  , int  , mp_ptr  ) ;
extern void __gmpn_toom_interpolate_16pts(mp_ptr  , mp_ptr  , mp_ptr  , mp_ptr  , mp_ptr  , mp_size_t  , mp_size_t  , int  , mp_ptr  ) ;
extern void __gmpn_toom_couple_handling(mp_ptr  , mp_size_t  , mp_ptr  , int  , mp_size_t  , int  , int  ) ;
extern int __gmpn_toom_eval_dgr3_pm1(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_size_t  , mp_ptr  ) ;
extern int __gmpn_toom_eval_dgr3_pm2(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_size_t  , mp_ptr  ) ;
extern int __gmpn_toom_eval_pm1(mp_ptr  , mp_ptr  , unsigned int  , mp_srcptr  , mp_size_t  , mp_size_t  , mp_ptr  ) ;
extern int __gmpn_toom_eval_pm2(mp_ptr  , mp_ptr  , unsigned int  , mp_srcptr  , mp_size_t  , mp_size_t  , mp_ptr  ) ;
extern int __gmpn_toom_eval_pm2exp(mp_ptr  , mp_ptr  , unsigned int  , mp_srcptr  , mp_size_t  , mp_size_t  , unsigned int  , mp_ptr  ) ;
extern int __gmpn_toom_eval_pm2rexp(mp_ptr  , mp_ptr  , unsigned int  , mp_srcptr  , mp_size_t  , mp_size_t  , unsigned int  , mp_ptr  ) ;
extern void __gmpn_toom22_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom32_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom42_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom52_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom62_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom2_sqr(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom33_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom43_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom53_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom63_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom3_sqr(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom44_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom4_sqr(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom6h_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom6_sqr(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom8h_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_toom8_sqr(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern int __gmpn_fft_best_k(mp_size_t  , int  )  __attribute__((__const__)) ;
extern mp_limb_t __gmpn_mul_fft(mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , int  ) ;
extern void __gmpn_mul_fft_full(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  ) ;
extern void __gmpn_nussbaumer_mul(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  ) ;
extern mp_size_t __gmpn_fft_next_size(mp_size_t  , int  )  __attribute__((__const__)) ;
extern mp_limb_t __gmpn_sbpi1_div_qr(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_sbpi1_div_q(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_sbpi1_divappr_q(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_dcpi1_div_qr(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , gmp_pi1_t * ) ;
extern mp_limb_t __gmpn_dcpi1_div_qr_n(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , gmp_pi1_t * , mp_ptr  ) ;
extern mp_limb_t __gmpn_dcpi1_div_q(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , gmp_pi1_t * ) ;
extern mp_limb_t __gmpn_dcpi1_divappr_q(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , gmp_pi1_t * ) ;
extern mp_limb_t __gmpn_dcpi1_divappr_q_n(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , gmp_pi1_t * , mp_ptr  ) ;
extern mp_limb_t __gmpn_mu_div_qr(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_mu_div_qr_itch(mp_size_t  , mp_size_t  , int  ) ;
extern mp_size_t __gmpn_mu_div_qr_choose_in(mp_size_t  , mp_size_t  , int  ) ;
extern mp_limb_t __gmpn_preinv_mu_div_qr(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_limb_t __gmpn_mu_divappr_q(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_mu_divappr_q_itch(mp_size_t  , mp_size_t  , int  ) ;
extern mp_size_t __gmpn_mu_divappr_q_choose_in(mp_size_t  , mp_size_t  , int  ) ;
extern mp_limb_t __gmpn_preinv_mu_divappr_q(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_limb_t __gmpn_mu_div_q(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_mu_div_q_itch(mp_size_t  , mp_size_t  , int  ) ;
extern void __gmpn_div_q(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_invert(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_limb_t __gmpn_ni_invertappr(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_limb_t __gmpn_invertappr(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_binvert(mp_ptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_binvert_itch(mp_size_t  ) ;
extern mp_limb_t __gmpn_bdiv_q_1(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_pi1_bdiv_q_1(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  , int  ) ;
extern mp_limb_t __gmpn_sbpi1_bdiv_qr(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern void __gmpn_sbpi1_bdiv_q(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_dcpi1_bdiv_qr(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_size_t __gmpn_dcpi1_bdiv_qr_n_itch(mp_size_t  ) ;
extern mp_limb_t __gmpn_dcpi1_bdiv_qr_n(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_ptr  ) ;
extern void __gmpn_dcpi1_bdiv_q(mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_size_t __gmpn_dcpi1_bdiv_q_n_itch(mp_size_t  ) ;
extern void __gmpn_dcpi1_bdiv_q_n(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_ptr  ) ;
extern mp_limb_t __gmpn_mu_bdiv_qr(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_mu_bdiv_qr_itch(mp_size_t  , mp_size_t  ) ;
extern void __gmpn_mu_bdiv_q(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_mu_bdiv_q_itch(mp_size_t  , mp_size_t  ) ;
extern mp_limb_t __gmpn_bdiv_qr(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_bdiv_qr_itch(mp_size_t  , mp_size_t  ) ;
extern void __gmpn_bdiv_q(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_bdiv_q_itch(mp_size_t  , mp_size_t  ) ;
extern void __gmpn_divexact(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  ) ;
extern mp_size_t __gmpn_divexact_itch(mp_size_t  , mp_size_t  ) ;
extern mp_limb_t __gmpn_bdiv_dbm1c(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  ) ;
void __gmpn_powm(mp_ptr rp , mp_srcptr bp , mp_size_t bn , mp_srcptr ep , mp_size_t en , mp_srcptr mp , mp_size_t n , mp_ptr tp ) ;
extern void __gmpn_powlo(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_powm_sec(mp_ptr  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_powm_sec_itch(mp_size_t  , mp_size_t  , mp_size_t  ) ;
extern mp_limb_t __gmpn_subcnd_n(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern void __gmpn_tabselect(mp_limb_t volatile   * , mp_limb_t volatile   * , mp_size_t  , mp_size_t  , mp_size_t  ) ;
extern void __gmpn_redc_1_sec(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern void __gmpz_divexact_gcd(mpz_ptr  , mpz_srcptr  , mpz_srcptr  ) ;
extern int __gmpn_divisible_p(mp_srcptr  , mp_size_t  , mp_srcptr  , mp_size_t  )  __attribute__((__pure__)) ;
extern mp_size_t __gmpn_rootrem(mp_ptr  , mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t const   __gmp_fib_table[] ;
extern void __gmp_init_primesieve(gmp_primesieve_t * ) ;
extern unsigned long __gmp_nextprime(gmp_primesieve_t * ) ;
extern void __gmp_assert_header(char const   * , int  ) ;
extern  __attribute__((__noreturn__)) void __gmp_assert_fail(char const   * , int  , char const   * ) ;
extern mp_limb_t __gmpn_trialdiv(mp_srcptr  , mp_size_t  , mp_size_t  , int * ) ;
extern mp_bitcnt_t __gmpn_remove(mp_ptr  , mp_size_t * , mp_ptr  , mp_size_t  , mp_ptr  , mp_size_t  , mp_bitcnt_t  ) ;
extern struct bases  const  __gmpn_bases[257] ;
extern mp_limb_t __gmpn_invert_limb(mp_limb_t  )  __attribute__((__const__)) ;
extern mp_limb_t __gmpn_preinv_divrem_1(mp_ptr  , mp_size_t  , mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  , int  ) ;
extern mp_limb_t __gmpn_mod_34lsub1(mp_srcptr  , mp_size_t  )  __attribute__((__pure__)) ;
extern void __gmpn_divexact_1(mp_ptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_modexact_1c_odd(mp_srcptr  , mp_size_t  , mp_limb_t  , mp_limb_t  )  __attribute__((__pure__)) ;
extern mp_limb_t __gmpn_modexact_1_odd(mp_srcptr  , mp_size_t  , mp_limb_t  )  __attribute__((__pure__)) ;
extern unsigned char const   __gmp_binvert_limb_table[128] ;
extern int __gmp_extract_double(mp_ptr  , double  ) ;
extern double __gmpn_get_d(mp_srcptr  , mp_size_t  , mp_size_t  , long  )  __attribute__((__pure__)) ;
extern int __gmp_junk ;
extern int const   __gmp_0 ;
extern  __attribute__((__noreturn__)) void __gmp_exception(int  ) ;
extern  __attribute__((__noreturn__)) void __gmp_divide_by_zero(void) ;
extern  __attribute__((__noreturn__)) void __gmp_sqrt_of_negative(void) ;
extern  __attribute__((__noreturn__)) void __gmp_invalid_operation(void) ;
extern void __gmpn_matrix22_mul(mp_ptr  , mp_ptr  , mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_srcptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_matrix22_mul_strassen(mp_ptr  , mp_ptr  , mp_ptr  , mp_ptr  , mp_size_t  , mp_srcptr  , mp_srcptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_matrix22_mul_itch(mp_size_t  , mp_size_t  ) ;
extern int __gmpn_hgcd2(mp_limb_t  , mp_limb_t  , mp_limb_t  , mp_limb_t  , struct hgcd_matrix1 * ) ;
extern mp_size_t __gmpn_hgcd_mul_matrix1_vector(struct hgcd_matrix1  const  * , mp_ptr  , mp_srcptr  , mp_ptr  , mp_size_t  ) ;
extern mp_size_t __gmpn_hgcd_mul_matrix1_inverse_vector(struct hgcd_matrix1  const  * , mp_ptr  , mp_srcptr  , mp_ptr  , mp_size_t  ) ;
extern void __gmpn_hgcd_matrix_init(struct hgcd_matrix * , mp_size_t  , mp_ptr  ) ;
extern void __gmpn_hgcd_matrix_mul(struct hgcd_matrix * , struct hgcd_matrix  const  * , mp_ptr  ) ;
extern mp_size_t __gmpn_hgcd_matrix_adjust(struct hgcd_matrix * , mp_size_t  , mp_ptr  , mp_ptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_hgcd_itch(mp_size_t  ) ;
extern mp_size_t __gmpn_hgcd(mp_ptr  , mp_ptr  , mp_size_t  , struct hgcd_matrix * , mp_ptr  ) ;
extern mp_size_t __gmpn_hgcd_lehmer(mp_ptr  , mp_ptr  , mp_size_t  , struct hgcd_matrix * , mp_ptr  ) ;
extern mp_size_t __gmpn_gcd_subdiv_step(mp_ptr  , mp_size_t * , mp_ptr  , mp_ptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_gcd_lehmer_n(mp_ptr  , mp_ptr  , mp_ptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_gcdext_subdiv_step(mp_ptr  , mp_size_t * , mp_ptr  , mp_size_t * , mp_ptr  , mp_ptr  , mp_size_t  , mp_ptr  , mp_ptr  , mp_size_t * , mp_ptr  , mp_ptr  ) ;
extern mp_size_t __gmpn_gcdext_lehmer_n(mp_ptr  , mp_ptr  , mp_size_t * , mp_ptr  , mp_ptr  , mp_size_t  , mp_ptr  ) ;
extern mp_size_t __gmpn_dc_set_str(mp_ptr  , unsigned char const   * , size_t  , powers_t const   * , mp_ptr  ) ;
extern mp_size_t __gmpn_bc_set_str(mp_ptr  , unsigned char const   * , size_t  , int  ) ;
extern void __gmpn_set_str_compute_powtab(powers_t * , mp_ptr  , mp_size_t  , int  ) ;
extern mp_size_t __gmp_default_fp_limb_precision ;
extern struct gmp_doscan_funs_t  const  __gmp_fscanf_funs ;
extern struct gmp_doscan_funs_t  const  __gmp_sscanf_funs ;
extern void __gmpn_cpuvec_init(void) ;
extern mp_limb_t __gmpn_add_nc(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
extern mp_limb_t __gmpn_sub_nc(mp_ptr  , mp_srcptr  , mp_srcptr  , mp_size_t  , mp_limb_t  ) ;
__inline static int mpn_zero_p(mp_srcptr ap , mp_size_t n ) 
{ mp_size_t i ;

  {
  i = n - 1L;
  while (i >= 0L) {
    if (*(ap + i) != 0UL) {
      return (0);
    } else {

    }
    i --;
  }
  return (1);
}
}
__inline static mp_size_t mpn_toom6h_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t estimatedN ;

  {
  estimatedN = (long )((unsigned long )(an + bn) / 10UL + 1UL);
  return ((estimatedN * 6L - 252L) * 2L + 788L);
}
}
__inline static mp_size_t mpn_toom8h_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t estimatedN ;
  int tmp ;

  {
  estimatedN = (long )((unsigned long )(an + bn) / 14UL + 1UL);
  if ((5715 >> 3) + 192 > 1046) {
    tmp = (5715 >> 3) + 192;
  } else {
    tmp = 1046;
  }
  return ((((estimatedN * 8L) * 15L >> 3) - (mp_size_t )(5715 >> 3)) + (mp_size_t )tmp);
}
}
__inline static mp_size_t mpn_toom32_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t n ;
  unsigned long tmp ;
  mp_size_t itch ;

  {
  if (2L * an >= 3L * bn) {
    tmp = (unsigned long )(an - 1L) / 3UL;
  } else {
    tmp = (unsigned long )((bn - 1L) >> 1);
  }
  n = (mp_size_t )(1UL + tmp);
  itch = 2L * n + 1L;
  return (itch);
}
}
__inline static mp_size_t mpn_toom42_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t n ;
  mp_size_t tmp ;

  {
  if (an >= 2L * bn) {
    tmp = (an + 3L) >> 2;
  } else {
    tmp = (bn + 1L) >> 1;
  }
  n = tmp;
  return (6L * n + 3L);
}
}
__inline static mp_size_t mpn_toom43_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t n ;
  unsigned long tmp ;

  {
  if (3L * an >= 4L * bn) {
    tmp = (unsigned long )((an - 1L) >> 2);
  } else {
    tmp = (unsigned long )(bn - 1L) / 3UL;
  }
  n = (mp_size_t )(1UL + tmp);
  return (6L * n + 4L);
}
}
__inline static mp_size_t mpn_toom52_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t n ;
  unsigned long tmp ;

  {
  if (2L * an >= 5L * bn) {
    tmp = (unsigned long )(an - 1L) / 5UL;
  } else {
    tmp = (unsigned long )((bn - 1L) >> 1);
  }
  n = (mp_size_t )(1UL + tmp);
  return (6L * n + 4L);
}
}
__inline static mp_size_t mpn_toom53_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t n ;
  unsigned long tmp ;

  {
  if (3L * an >= 5L * bn) {
    tmp = (unsigned long )(an - 1L) / 5UL;
  } else {
    tmp = (unsigned long )(bn - 1L) / 3UL;
  }
  n = (mp_size_t )(1UL + tmp);
  return (10L * n + 10L);
}
}
__inline static mp_size_t mpn_toom62_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t n ;
  unsigned long tmp ;

  {
  if (an >= 3L * bn) {
    tmp = (unsigned long )(an - 1L) / 6UL;
  } else {
    tmp = (unsigned long )((bn - 1L) >> 1);
  }
  n = (mp_size_t )(1UL + tmp);
  return (10L * n + 10L);
}
}
__inline static mp_size_t mpn_toom63_mul_itch(mp_size_t an , mp_size_t bn ) 
{ mp_size_t n ;
  unsigned long tmp ;

  {
  if (an >= 2L * bn) {
    tmp = (unsigned long )(an - 1L) / 6UL;
  } else {
    tmp = (unsigned long )(bn - 1L) / 3UL;
  }
  n = (mp_size_t )(1UL + tmp);
  return (9L * n + 3L);
}
}
extern UWtype __gmpn_umul_ppmm(UWtype * , UWtype  , UWtype  ) ;
extern UWtype __gmpn_umul_ppmm_r(UWtype  , UWtype  , UWtype * ) ;
extern UWtype __gmpn_udiv_qrnnd(UWtype * , UWtype  , UWtype  , UWtype  ) ;
extern UWtype __gmpn_udiv_qrnnd_r(UWtype  , UWtype  , UWtype  , UWtype * ) ;
__inline static mp_limb_t getbits(mp_limb_t const   *p , mp_bitcnt_t bi , int nbits ) 
{ int nbits_in_r ;
  mp_limb_t r ;
  mp_size_t i ;

  {
  if (bi < (mp_bitcnt_t )nbits) {
    return ((unsigned long )(*(p + 0) & (unsigned long const   )((1UL << bi) - 1UL)));
  } else {
    bi -= (mp_bitcnt_t )nbits;
    i = (long )(bi / 32UL);
    bi %= 32UL;
    r = (unsigned long )(*(p + i) >> bi);
    nbits_in_r = (int )(32UL - bi);
    if (nbits_in_r < nbits) {
      r += (mp_limb_t )(*(p + (i + 1L)) << nbits_in_r);
    } else {

    }
    return (r & ((1UL << nbits) - 1UL));
  }
}
}
__inline static int win_size(mp_bitcnt_t eb ) ;
static mp_bitcnt_t x[11]  = 
  {      (mp_bitcnt_t )0,      (mp_bitcnt_t )7,      (mp_bitcnt_t )25,      (mp_bitcnt_t )81, 
        (mp_bitcnt_t )241,      (mp_bitcnt_t )673,      (mp_bitcnt_t )1793,      (mp_bitcnt_t )4609, 
        (mp_bitcnt_t )11521,      (mp_bitcnt_t )28161,      ~ 0UL};
__inline static int win_size(mp_bitcnt_t eb ) 
{ int k ;

  {
  k = 1;
  while (eb > x[k]) {
    k ++;
  }
  return (k);
}
}
static void redcify(mp_ptr rp , mp_srcptr up , mp_size_t un , mp_srcptr mp , mp_size_t n ) 
{ mp_ptr tp ;
  mp_ptr qp ;
  struct tmp_reentrant_t *__tmp_marker ;
  long tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  long tmp___8 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___9 ;
  long tmp___10 ;

  {
  __tmp_marker = (struct tmp_reentrant_t *)0;
  tmp___3 = __builtin_expect((long )(((unsigned long )(un + n) * (unsigned long )sizeof(mp_limb_t ) < 65536UL) != 0), 1L);
  if (tmp___3) {
    tmp___0 = __builtin_alloca((unsigned int )((unsigned long )(un + n) * (unsigned long )sizeof(mp_limb_t )));
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned int )((unsigned long )(un + n) * (unsigned long )sizeof(mp_limb_t )));
    tmp___2 = tmp___1;
  }
  tp = (mp_limb_t *)tmp___2;
  tmp___8 = __builtin_expect((long )(((unsigned long )(un + 1L) * (unsigned long )sizeof(mp_limb_t ) < 65536UL) != 0), 1L);
  if (tmp___8) {
    tmp___5 = __builtin_alloca((unsigned int )((unsigned long )(un + 1L) * (unsigned long )sizeof(mp_limb_t )));
    tmp___7 = tmp___5;
  } else {
    tmp___6 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned int )((unsigned long )(un + 1L) * (unsigned long )sizeof(mp_limb_t )));
    tmp___7 = tmp___6;
  }
  qp = (mp_limb_t *)tmp___7;
  while (1) {
    while (1) {
      break;
    }
    if (n != 0L) {
      __dst = tp;
      __n = n;
      while (1) {
        tmp___9 = __dst;
        __dst ++;
        *tmp___9 = 0UL;
        __n --;
        if (__n) {

        } else {
          break;
        }
      }
    } else {

    }
    break;
  }
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      __gmpn_copyi(tp + n, up, un);
      break;
    }
    break;
  }
  __gmpn_tdiv_qr(qp, rp, 0L, (mp_limb_t const   *)tp, un + n, mp, n);
  while (1) {
    tmp___10 = __builtin_expect((long )(((unsigned int )__tmp_marker != (unsigned int )((struct tmp_reentrant_t *)0)) != 0), 0L);
    if (tmp___10) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    } else {

    }
    break;
  }
  return;
}
}
void __gmpn_powm(mp_ptr rp , mp_srcptr bp , mp_size_t bn , mp_srcptr ep , mp_size_t en , mp_srcptr mp , mp_size_t n , mp_ptr tp ) 
{ mp_limb_t ip[2] ;
  mp_limb_t *mip ;
  int cnt ;
  mp_bitcnt_t ebi ;
  int windowsize ;
  int this_windowsize ;
  mp_limb_t expbits ;
  mp_ptr pp ;
  mp_ptr this_pp ;
  mp_ptr b2p ;
  long i ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_limb_t __n ;
  mp_limb_t __inv ;
  int __invbits ;
  long tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  long tmp___8 ;
  mp_ptr __dst ;
  mp_size_t __n___0 ;
  mp_ptr tmp___9 ;
  int __attribute__((__gnu_inline__))  tmp___10 ;
  long tmp___11 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  while (1) {
    while (1) {
      break;
    }
    cnt = __builtin_clzl((unsigned long )*(ep + (en - 1L)));
    break;
  }
  ebi = (unsigned long )en * 32UL - (unsigned long )cnt;
  windowsize = win_size(ebi);
  if (63L != - ((long )(4294967295UL ^ (4294967295UL >> 1)) + 1L)) {
    if (n >= 63L) {
      tmp___3 = __builtin_expect((long )(((unsigned long )n * (unsigned long )sizeof(mp_limb_t ) < 65536UL) != 0), 1L);
      if (tmp___3) {
        tmp___0 = __builtin_alloca((unsigned int )((unsigned long )n * (unsigned long )sizeof(mp_limb_t )));
        tmp___2 = tmp___0;
      } else {
        tmp___1 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned int )((unsigned long )n * (unsigned long )sizeof(mp_limb_t )));
        tmp___2 = tmp___1;
      }
      mip = (mp_limb_t *)tmp___2;
      __gmpn_binvert(mip, mp, n, tp);
    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    mip = ip;
    while (1) {
      __n = (mp_limb_t )*(mp + 0);
      while (1) {
        break;
      }
      __inv = (unsigned long )__gmp_binvert_limb_table[__n / 2UL & 127UL];
      __inv = 2UL * __inv - (__inv * __inv) * __n;
      __inv = 2UL * __inv - (__inv * __inv) * __n;
      while (1) {
        break;
      }
      *(mip + 0) = __inv & 4294967295UL;
      break;
    }
    *(mip + 0) = - *(mip + 0);
  }
  tmp___8 = __builtin_expect((long )(((unsigned long )(n << (windowsize - 1)) * (unsigned long )sizeof(mp_limb_t ) < 65536UL) != 0), 1L);
  if (tmp___8) {
    tmp___5 = __builtin_alloca((unsigned int )((unsigned long )(n << (windowsize - 1)) * (unsigned long )sizeof(mp_limb_t )));
    tmp___7 = tmp___5;
  } else {
    tmp___6 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned int )((unsigned long )(n << (windowsize - 1)) * (unsigned long )sizeof(mp_limb_t )));
    tmp___7 = tmp___6;
  }
  pp = (mp_limb_t *)tmp___7;
  this_pp = pp;
  redcify(this_pp, bp, bn, mp, n);
  b2p = tp + 2L * n;
  __gmpn_sqr(tp, (mp_limb_t const   *)this_pp, n);
  if (63L != - ((long )(4294967295UL ^ (4294967295UL >> 1)) + 1L)) {
    if (n >= 63L) {
      __gmpn_redc_n(b2p, tp, mp, n, (mp_limb_t const   *)mip);
    } else {
      __gmpn_redc_1(b2p, tp, mp, n, *(mip + 0));
    }
  } else {
    __gmpn_redc_1(b2p, tp, mp, n, *(mip + 0));
  }
  i = (long )((1 << (windowsize - 1)) - 1);
  while (i > 0L) {
    __gmpn_mul_n(tp, (mp_limb_t const   *)this_pp, (mp_limb_t const   *)b2p, n);
    this_pp += n;
    if (63L != - ((long )(4294967295UL ^ (4294967295UL >> 1)) + 1L)) {
      if (n >= 63L) {
        __gmpn_redc_n(this_pp, tp, mp, n, (mp_limb_t const   *)mip);
      } else {
        __gmpn_redc_1(this_pp, tp, mp, n, *(mip + 0));
      }
    } else {
      __gmpn_redc_1(this_pp, tp, mp, n, *(mip + 0));
    }
    i --;
  }
  expbits = getbits(ep, ebi, windowsize);
  if (ebi < (mp_bitcnt_t )windowsize) {
    ebi = 0UL;
  } else {
    ebi -= (mp_bitcnt_t )windowsize;
  }
  while (1) {
    while (1) {
      break;
    }
    cnt = __builtin_ctzl(expbits);
    break;
  }
  ebi += (mp_bitcnt_t )cnt;
  expbits >>= cnt;
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      __gmpn_copyi(rp, (mp_limb_t const   *)(pp + (mp_limb_t )n * (expbits >> 1)), n);
      break;
    }
    break;
  }
  if (0) {
    if (63L != - ((long )(4294967295UL ^ (4294967295UL >> 1)) + 1L)) {
      if (n >= 63L) {
        if (20L != - ((long )(4294967295UL ^ (4294967295UL >> 1)) + 1L)) {
          if (n >= 20L) {
            while (ebi != 0UL) {
              while (((*(ep + (ebi - 1UL) / 32UL) >> (ebi - 1UL) % 32UL) & 1UL) == 0UL) {
                __gmpn_sqr(tp, (mp_limb_t const   *)rp, n);
                __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
                ebi --;
                if (ebi == 0UL) {
                  goto done;
                } else {

                }
              }
              expbits = getbits(ep, ebi, windowsize);
              this_windowsize = windowsize;
              if (ebi < (mp_bitcnt_t )windowsize) {
                this_windowsize = (int )((mp_bitcnt_t )this_windowsize - ((mp_bitcnt_t )windowsize - ebi));
                ebi = 0UL;
              } else {
                ebi -= (mp_bitcnt_t )windowsize;
              }
              while (1) {
                while (1) {
                  break;
                }
                cnt = __builtin_ctzl(expbits);
                break;
              }
              this_windowsize -= cnt;
              ebi += (mp_bitcnt_t )cnt;
              expbits >>= cnt;
              while (1) {
                __gmpn_sqr(tp, (mp_limb_t const   *)rp, n);
                __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
                this_windowsize --;
                if (this_windowsize != 0) {

                } else {
                  break;
                }
              }
              __gmpn_mul_n(tp, (mp_limb_t const   *)rp, (mp_limb_t const   *)(pp + (mp_limb_t )n * (expbits >> 1)), n);
              __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
            }
          } else {
            goto _L___0;
          }
        } else {
          _L___0: /* CIL Label */ 
          while (ebi != 0UL) {
            while (((*(ep + (ebi - 1UL) / 32UL) >> (ebi - 1UL) % 32UL) & 1UL) == 0UL) {
              __gmpn_sqr_basecase(tp, (mp_limb_t const   *)rp, n);
              __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
              ebi --;
              if (ebi == 0UL) {
                goto done;
              } else {

              }
            }
            expbits = getbits(ep, ebi, windowsize);
            this_windowsize = windowsize;
            if (ebi < (mp_bitcnt_t )windowsize) {
              this_windowsize = (int )((mp_bitcnt_t )this_windowsize - ((mp_bitcnt_t )windowsize - ebi));
              ebi = 0UL;
            } else {
              ebi -= (mp_bitcnt_t )windowsize;
            }
            while (1) {
              while (1) {
                break;
              }
              cnt = __builtin_ctzl(expbits);
              break;
            }
            this_windowsize -= cnt;
            ebi += (mp_bitcnt_t )cnt;
            expbits >>= cnt;
            while (1) {
              __gmpn_sqr_basecase(tp, (mp_limb_t const   *)rp, n);
              __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
              this_windowsize --;
              if (this_windowsize != 0) {

              } else {
                break;
              }
            }
            __gmpn_mul_basecase(tp, (mp_limb_t const   *)rp, n, (mp_limb_t const   *)(pp + (mp_limb_t )n * (expbits >> 1)), n);
            __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
          }
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1: /* CIL Label */ 
      while (ebi != 0UL) {
        while (((*(ep + (ebi - 1UL) / 32UL) >> (ebi - 1UL) % 32UL) & 1UL) == 0UL) {
          __gmpn_sqr_basecase(tp, (mp_limb_t const   *)rp, n);
          __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
          ebi --;
          if (ebi == 0UL) {
            goto done;
          } else {

          }
        }
        expbits = getbits(ep, ebi, windowsize);
        this_windowsize = windowsize;
        if (ebi < (mp_bitcnt_t )windowsize) {
          this_windowsize = (int )((mp_bitcnt_t )this_windowsize - ((mp_bitcnt_t )windowsize - ebi));
          ebi = 0UL;
        } else {
          ebi -= (mp_bitcnt_t )windowsize;
        }
        while (1) {
          while (1) {
            break;
          }
          cnt = __builtin_ctzl(expbits);
          break;
        }
        this_windowsize -= cnt;
        ebi += (mp_bitcnt_t )cnt;
        expbits >>= cnt;
        while (1) {
          __gmpn_sqr_basecase(tp, (mp_limb_t const   *)rp, n);
          __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
          this_windowsize --;
          if (this_windowsize != 0) {

          } else {
            break;
          }
        }
        __gmpn_mul_basecase(tp, (mp_limb_t const   *)rp, n, (mp_limb_t const   *)(pp + (mp_limb_t )n * (expbits >> 1)), n);
        __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
      }
    }
  } else {
    if (20L != - ((long )(4294967295UL ^ (4294967295UL >> 1)) + 1L)) {
      if (n >= 20L) {
        if (63L != - ((long )(4294967295UL ^ (4294967295UL >> 1)) + 1L)) {
          if (n >= 63L) {
            while (ebi != 0UL) {
              while (((*(ep + (ebi - 1UL) / 32UL) >> (ebi - 1UL) % 32UL) & 1UL) == 0UL) {
                __gmpn_sqr(tp, (mp_limb_t const   *)rp, n);
                __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
                ebi --;
                if (ebi == 0UL) {
                  goto done;
                } else {

                }
              }
              expbits = getbits(ep, ebi, windowsize);
              this_windowsize = windowsize;
              if (ebi < (mp_bitcnt_t )windowsize) {
                this_windowsize = (int )((mp_bitcnt_t )this_windowsize - ((mp_bitcnt_t )windowsize - ebi));
                ebi = 0UL;
              } else {
                ebi -= (mp_bitcnt_t )windowsize;
              }
              while (1) {
                while (1) {
                  break;
                }
                cnt = __builtin_ctzl(expbits);
                break;
              }
              this_windowsize -= cnt;
              ebi += (mp_bitcnt_t )cnt;
              expbits >>= cnt;
              while (1) {
                __gmpn_sqr(tp, (mp_limb_t const   *)rp, n);
                __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
                this_windowsize --;
                if (this_windowsize != 0) {

                } else {
                  break;
                }
              }
              __gmpn_mul_n(tp, (mp_limb_t const   *)rp, (mp_limb_t const   *)(pp + (mp_limb_t )n * (expbits >> 1)), n);
              __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
            }
          } else {
            goto _L___2;
          }
        } else {
          _L___2: /* CIL Label */ 
          while (ebi != 0UL) {
            while (((*(ep + (ebi - 1UL) / 32UL) >> (ebi - 1UL) % 32UL) & 1UL) == 0UL) {
              __gmpn_sqr(tp, (mp_limb_t const   *)rp, n);
              __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
              ebi --;
              if (ebi == 0UL) {
                goto done;
              } else {

              }
            }
            expbits = getbits(ep, ebi, windowsize);
            this_windowsize = windowsize;
            if (ebi < (mp_bitcnt_t )windowsize) {
              this_windowsize = (int )((mp_bitcnt_t )this_windowsize - ((mp_bitcnt_t )windowsize - ebi));
              ebi = 0UL;
            } else {
              ebi -= (mp_bitcnt_t )windowsize;
            }
            while (1) {
              while (1) {
                break;
              }
              cnt = __builtin_ctzl(expbits);
              break;
            }
            this_windowsize -= cnt;
            ebi += (mp_bitcnt_t )cnt;
            {

            }
            while (1) {
              __gmpn_sqr(tp, (mp_limb_t const   *)rp, n);
              __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
              this_windowsize --;
              if (this_windowsize != 0) {

              } else {
                break;
              }
            }
            __gmpn_mul_n(tp, (mp_limb_t const   *)rp, (mp_limb_t const   *)(pp + (mp_limb_t )n * (expbits >> 1)), n);
            __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
          }
        }
      } else {
        goto _L___3;
      }
    } else {
      _L___3: /* CIL Label */ 
      while (ebi != 0UL) {
        while (((*(ep + (ebi - 1UL) / 32UL) >> (ebi - 1UL) % 32UL) & 1UL) == 0UL) {
          __gmpn_sqr_basecase(tp, (mp_limb_t const   *)rp, n);
          __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
          ebi --;
          if (ebi == 0UL) {
            goto done;
          } else {

          }
        }
        expbits = getbits(ep, ebi, windowsize);
        this_windowsize = windowsize;
        if (ebi < (mp_bitcnt_t )windowsize) {
          this_windowsize = (int )((mp_bitcnt_t )this_windowsize - ((mp_bitcnt_t )windowsize - ebi));
          ebi = 0UL;
        } else {
          ebi -= (mp_bitcnt_t )windowsize;
        }
        while (1) {
          while (1) {
            break;
          }
          cnt = __builtin_ctzl(expbits);
          break;
        }
        this_windowsize -= cnt;
        ebi += (mp_bitcnt_t )cnt;
        expbits >>= cnt;
        while (1) {
          __gmpn_sqr_basecase(tp, (mp_limb_t const   *)rp, n);
          __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
          this_windowsize --;
          if (this_windowsize != 0) {

          } else {
            break;
          }
        }
        __gmpn_mul_basecase(tp, (mp_limb_t const   *)rp, n, (mp_limb_t const   *)(pp + (mp_limb_t )n * (expbits >> 1)), n);
        __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
      }
    }
  }
  done: 
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      __gmpn_copyi(tp, (mp_limb_t const   *)rp, n);
      break;
    }
    break;
  }
  while (1) {
    while (1) {
      break;
    }
    if (n != 0L) {
      __dst = tp + n;
      __n___0 = n;
      while (1) {
        tmp___9 = __dst;
        __dst ++;
        *tmp___9 = 0UL;
        __n___0 --;
        if (__n___0) {

        } else {
          break;
        }
      }
    } else {

    }
    break;
  }
  if (63L != - ((long )(4294967295UL ^ (4294967295UL >> 1)) + 1L)) {
    if (n >= 63L) {
      __gmpn_redc_n(rp, tp, mp, n, (mp_limb_t const   *)mip);
    } else {
      __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
    }
  } else {
    __gmpn_redc_1(rp, tp, mp, n, *(mip + 0));
  }
  tmp___10 = __gmpn_cmp((mp_limb_t const   *)rp, mp, n);
  if (tmp___10 >= (int __attribute__((__gnu_inline__))  )0) {
    __gmpn_sub_n(rp, (mp_limb_t const   *)rp, mp, n);
  } else {

  }
  while (1) {
    tmp___11 = __builtin_expect((long )(((unsigned int )__tmp_marker != (unsigned int )((struct tmp_reentrant_t *)0)) != 0), 0L);
    if (tmp___11) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    } else {

    }
    break;
  }
  return;
}
}
