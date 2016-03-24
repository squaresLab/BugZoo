# 1 "powm.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "powm.c"
# 73 "powm.c"
# 1 "../gmp.h" 1
# 52 "../gmp.h"
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 53 "../gmp.h" 2
# 193 "../gmp.h"
typedef unsigned long int mp_limb_t;
typedef long int mp_limb_signed_t;


typedef unsigned long int mp_bitcnt_t;




typedef struct
{
  int _mp_alloc;

  int _mp_size;


  mp_limb_t *_mp_d;
} __mpz_struct;




typedef __mpz_struct MP_INT;
typedef __mpz_struct mpz_t[1];

typedef mp_limb_t * mp_ptr;
typedef const mp_limb_t * mp_srcptr;







typedef long int mp_size_t;
typedef long int mp_exp_t;


typedef struct
{
  __mpz_struct _mp_num;
  __mpz_struct _mp_den;
} __mpq_struct;

typedef __mpq_struct MP_RAT;
typedef __mpq_struct mpq_t[1];

typedef struct
{
  int _mp_prec;



  int _mp_size;


  mp_exp_t _mp_exp;
  mp_limb_t *_mp_d;
} __mpf_struct;


typedef __mpf_struct mpf_t[1];


typedef enum
{
  GMP_RAND_ALG_DEFAULT = 0,
  GMP_RAND_ALG_LC = GMP_RAND_ALG_DEFAULT
} gmp_randalg_t;


typedef struct
{
  mpz_t _mp_seed;
  gmp_randalg_t _mp_alg;
  union {
    void *_mp_lc;
  } _mp_algdata;
} __gmp_randstate_struct;
typedef __gmp_randstate_struct gmp_randstate_t[1];



typedef const __mpz_struct *mpz_srcptr;
typedef __mpz_struct *mpz_ptr;
typedef const __mpf_struct *mpf_srcptr;
typedef __mpf_struct *mpf_ptr;
typedef const __mpq_struct *mpq_srcptr;
typedef __mpq_struct *mpq_ptr;
# 542 "../gmp.h"
 void __gmp_set_memory_functions (void *(*) (size_t), void *(*) (void *, size_t, size_t), void (*) (void *, size_t))

                                                   ;


 void __gmp_get_memory_functions (void *(**) (size_t), void *(**) (void *, size_t, size_t), void (**) (void *, size_t))

                                                                                ;


 extern const int __gmp_bits_per_limb;


 extern int __gmp_errno;


 extern const char * const __gmp_version;






 void __gmp_randinit (gmp_randstate_t, gmp_randalg_t, ...);


 void __gmp_randinit_default (gmp_randstate_t);


 void __gmp_randinit_lc_2exp (gmp_randstate_t, mpz_srcptr, unsigned long int, mp_bitcnt_t)

                          ;


 int __gmp_randinit_lc_2exp_size (gmp_randstate_t, mp_bitcnt_t);


 void __gmp_randinit_mt (gmp_randstate_t);


 void __gmp_randinit_set (gmp_randstate_t, const __gmp_randstate_struct *);


 void __gmp_randseed (gmp_randstate_t, mpz_srcptr);


 void __gmp_randseed_ui (gmp_randstate_t, unsigned long int);


 void __gmp_randclear (gmp_randstate_t);


 unsigned long __gmp_urandomb_ui (gmp_randstate_t, unsigned long);


 unsigned long __gmp_urandomm_ui (gmp_randstate_t, unsigned long);





 int __gmp_asprintf (char **, const char *, ...);
# 621 "../gmp.h"
 int __gmp_printf (const char *, ...);


 int __gmp_snprintf (char *, size_t, const char *, ...);


 int __gmp_sprintf (char *, const char *, ...);
# 663 "../gmp.h"
 int __gmp_scanf (const char *, ...);


 int __gmp_sscanf (const char *, const char *, ...);
# 688 "../gmp.h"
 void *__gmpz_realloc (mpz_ptr, mp_size_t);



 void __gmpz_abs (mpz_ptr, mpz_srcptr);



 void __gmpz_add (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_add_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_addmul (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_addmul_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_and (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_array_init (mpz_ptr, mp_size_t, mp_size_t);


 void __gmpz_bin_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_bin_uiui (mpz_ptr, unsigned long int, unsigned long int);


 void __gmpz_cdiv_q (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_cdiv_q_2exp (mpz_ptr, mpz_srcptr, unsigned long);


 unsigned long int __gmpz_cdiv_q_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_cdiv_qr (mpz_ptr, mpz_ptr, mpz_srcptr, mpz_srcptr);


 unsigned long int __gmpz_cdiv_qr_ui (mpz_ptr, mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_cdiv_r (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_cdiv_r_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_cdiv_r_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 unsigned long int __gmpz_cdiv_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpz_clear (mpz_ptr);


 void __gmpz_clears (mpz_ptr, ...);


 void __gmpz_clrbit (mpz_ptr, mp_bitcnt_t);


 int __gmpz_cmp (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_cmp_d (mpz_srcptr, double) __attribute__ ((__pure__));


 int __gmpz_cmp_si (mpz_srcptr, signed long int) __attribute__ ((__pure__));


 int __gmpz_cmp_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 int __gmpz_cmpabs (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_cmpabs_d (mpz_srcptr, double) __attribute__ ((__pure__));


 int __gmpz_cmpabs_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpz_com (mpz_ptr, mpz_srcptr);


 void __gmpz_combit (mpz_ptr, mp_bitcnt_t);


 int __gmpz_congruent_p (mpz_srcptr, mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_congruent_2exp_p (mpz_srcptr, mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 int __gmpz_congruent_ui_p (mpz_srcptr, unsigned long, unsigned long) __attribute__ ((__pure__));


 void __gmpz_divexact (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_divexact_ui (mpz_ptr, mpz_srcptr, unsigned long);


 int __gmpz_divisible_p (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_divisible_ui_p (mpz_srcptr, unsigned long) __attribute__ ((__pure__));


 int __gmpz_divisible_2exp_p (mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 void __gmpz_dump (mpz_srcptr);


 void *__gmpz_export (void *, size_t *, int, size_t, int, size_t, mpz_srcptr);


 void __gmpz_fac_ui (mpz_ptr, unsigned long int);


 void __gmpz_fdiv_q (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_fdiv_q_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_fdiv_q_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_fdiv_qr (mpz_ptr, mpz_ptr, mpz_srcptr, mpz_srcptr);


 unsigned long int __gmpz_fdiv_qr_ui (mpz_ptr, mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_fdiv_r (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_fdiv_r_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_fdiv_r_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 unsigned long int __gmpz_fdiv_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpz_fib_ui (mpz_ptr, unsigned long int);


 void __gmpz_fib2_ui (mpz_ptr, mpz_ptr, unsigned long int);


 int __gmpz_fits_sint_p (mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_fits_slong_p (mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_fits_sshort_p (mpz_srcptr) __attribute__ ((__pure__));



 int __gmpz_fits_uint_p (mpz_srcptr) __attribute__ ((__pure__));




 int __gmpz_fits_ulong_p (mpz_srcptr) __attribute__ ((__pure__));




 int __gmpz_fits_ushort_p (mpz_srcptr) __attribute__ ((__pure__));



 void __gmpz_gcd (mpz_ptr, mpz_srcptr, mpz_srcptr);


 unsigned long int __gmpz_gcd_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_gcdext (mpz_ptr, mpz_ptr, mpz_ptr, mpz_srcptr, mpz_srcptr);


 double __gmpz_get_d (mpz_srcptr) __attribute__ ((__pure__));


 double __gmpz_get_d_2exp (signed long int *, mpz_srcptr);


 long int __gmpz_get_si (mpz_srcptr) __attribute__ ((__pure__));


 char *__gmpz_get_str (char *, int, mpz_srcptr);



 unsigned long int __gmpz_get_ui (mpz_srcptr) __attribute__ ((__pure__));




 mp_limb_t __gmpz_getlimbn (mpz_srcptr, mp_size_t) __attribute__ ((__pure__));



 mp_bitcnt_t __gmpz_hamdist (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));


 void __gmpz_import (mpz_ptr, size_t, int, size_t, int, size_t, const void *);


 void __gmpz_init (mpz_ptr);


 void __gmpz_init2 (mpz_ptr, mp_bitcnt_t);


 void __gmpz_inits (mpz_ptr, ...);


 void __gmpz_init_set (mpz_ptr, mpz_srcptr);


 void __gmpz_init_set_d (mpz_ptr, double);


 void __gmpz_init_set_si (mpz_ptr, signed long int);


 int __gmpz_init_set_str (mpz_ptr, const char *, int);


 void __gmpz_init_set_ui (mpz_ptr, unsigned long int);
# 944 "../gmp.h"
 int __gmpz_invert (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_ior (mpz_ptr, mpz_srcptr, mpz_srcptr);


 int __gmpz_jacobi (mpz_srcptr, mpz_srcptr) __attribute__ ((__pure__));




 int __gmpz_kronecker_si (mpz_srcptr, long) __attribute__ ((__pure__));


 int __gmpz_kronecker_ui (mpz_srcptr, unsigned long) __attribute__ ((__pure__));


 int __gmpz_si_kronecker (long, mpz_srcptr) __attribute__ ((__pure__));


 int __gmpz_ui_kronecker (unsigned long, mpz_srcptr) __attribute__ ((__pure__));


 void __gmpz_lcm (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_lcm_ui (mpz_ptr, mpz_srcptr, unsigned long);




 void __gmpz_lucnum_ui (mpz_ptr, unsigned long int);


 void __gmpz_lucnum2_ui (mpz_ptr, mpz_ptr, unsigned long int);


 int __gmpz_millerrabin (mpz_srcptr, int) __attribute__ ((__pure__));


 void __gmpz_mod (mpz_ptr, mpz_srcptr, mpz_srcptr);




 void __gmpz_mul (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_mul_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 void __gmpz_mul_si (mpz_ptr, mpz_srcptr, long int);


 void __gmpz_mul_ui (mpz_ptr, mpz_srcptr, unsigned long int);



 void __gmpz_neg (mpz_ptr, mpz_srcptr);



 void __gmpz_nextprime (mpz_ptr, mpz_srcptr);
# 1019 "../gmp.h"
 int __gmpz_perfect_power_p (mpz_srcptr) __attribute__ ((__pure__));



 int __gmpz_perfect_square_p (mpz_srcptr) __attribute__ ((__pure__));




 mp_bitcnt_t __gmpz_popcount (mpz_srcptr) __attribute__ ((__pure__));



 void __gmpz_pow_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_powm (mpz_ptr, mpz_srcptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_powm_sec (mpz_ptr, mpz_srcptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_powm_ui (mpz_ptr, mpz_srcptr, unsigned long int, mpz_srcptr);


 int __gmpz_probab_prime_p (mpz_srcptr, int) __attribute__ ((__pure__));


 void __gmpz_random (mpz_ptr, mp_size_t);


 void __gmpz_random2 (mpz_ptr, mp_size_t);


 void __gmpz_realloc2 (mpz_ptr, mp_bitcnt_t);


 unsigned long int __gmpz_remove (mpz_ptr, mpz_srcptr, mpz_srcptr);


 int __gmpz_root (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_rootrem (mpz_ptr,mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_rrandomb (mpz_ptr, gmp_randstate_t, mp_bitcnt_t);


 mp_bitcnt_t __gmpz_scan0 (mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 mp_bitcnt_t __gmpz_scan1 (mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 void __gmpz_set (mpz_ptr, mpz_srcptr);


 void __gmpz_set_d (mpz_ptr, double);


 void __gmpz_set_f (mpz_ptr, mpf_srcptr);



 void __gmpz_set_q (mpz_ptr, mpq_srcptr);



 void __gmpz_set_si (mpz_ptr, signed long int);


 int __gmpz_set_str (mpz_ptr, const char *, int);


 void __gmpz_set_ui (mpz_ptr, unsigned long int);


 void __gmpz_setbit (mpz_ptr, mp_bitcnt_t);



 size_t __gmpz_size (mpz_srcptr) __attribute__ ((__pure__));



 size_t __gmpz_sizeinbase (mpz_srcptr, int) __attribute__ ((__pure__));


 void __gmpz_sqrt (mpz_ptr, mpz_srcptr);


 void __gmpz_sqrtrem (mpz_ptr, mpz_ptr, mpz_srcptr);


 void __gmpz_sub (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_sub_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_ui_sub (mpz_ptr, unsigned long int, mpz_srcptr);


 void __gmpz_submul (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_submul_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_swap (mpz_ptr, mpz_ptr) ;


 unsigned long int __gmpz_tdiv_ui (mpz_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpz_tdiv_q (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_tdiv_q_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_tdiv_q_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_tdiv_qr (mpz_ptr, mpz_ptr, mpz_srcptr, mpz_srcptr);


 unsigned long int __gmpz_tdiv_qr_ui (mpz_ptr, mpz_ptr, mpz_srcptr, unsigned long int);


 void __gmpz_tdiv_r (mpz_ptr, mpz_srcptr, mpz_srcptr);


 void __gmpz_tdiv_r_2exp (mpz_ptr, mpz_srcptr, mp_bitcnt_t);


 unsigned long int __gmpz_tdiv_r_ui (mpz_ptr, mpz_srcptr, unsigned long int);


 int __gmpz_tstbit (mpz_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 void __gmpz_ui_pow_ui (mpz_ptr, unsigned long int, unsigned long int);


 void __gmpz_urandomb (mpz_ptr, gmp_randstate_t, mp_bitcnt_t);


 void __gmpz_urandomm (mpz_ptr, gmp_randstate_t, mpz_srcptr);



 void __gmpz_xor (mpz_ptr, mpz_srcptr, mpz_srcptr);






 void __gmpq_abs (mpq_ptr, mpq_srcptr);



 void __gmpq_add (mpq_ptr, mpq_srcptr, mpq_srcptr);


 void __gmpq_canonicalize (mpq_ptr);


 void __gmpq_clear (mpq_ptr);


 void __gmpq_clears (mpq_ptr, ...);


 int __gmpq_cmp (mpq_srcptr, mpq_srcptr) __attribute__ ((__pure__));


 int __gmpq_cmp_si (mpq_srcptr, long, unsigned long) __attribute__ ((__pure__));


 int __gmpq_cmp_ui (mpq_srcptr, unsigned long int, unsigned long int) __attribute__ ((__pure__));


 void __gmpq_div (mpq_ptr, mpq_srcptr, mpq_srcptr);


 void __gmpq_div_2exp (mpq_ptr, mpq_srcptr, mp_bitcnt_t);


 int __gmpq_equal (mpq_srcptr, mpq_srcptr) __attribute__ ((__pure__));


 void __gmpq_get_num (mpz_ptr, mpq_srcptr);


 void __gmpq_get_den (mpz_ptr, mpq_srcptr);


 double __gmpq_get_d (mpq_srcptr) __attribute__ ((__pure__));


 char *__gmpq_get_str (char *, int, mpq_srcptr);


 void __gmpq_init (mpq_ptr);


 void __gmpq_inits (mpq_ptr, ...);







 void __gmpq_inv (mpq_ptr, mpq_srcptr);


 void __gmpq_mul (mpq_ptr, mpq_srcptr, mpq_srcptr);


 void __gmpq_mul_2exp (mpq_ptr, mpq_srcptr, mp_bitcnt_t);



 void __gmpq_neg (mpq_ptr, mpq_srcptr);
# 1255 "../gmp.h"
 void __gmpq_set (mpq_ptr, mpq_srcptr);


 void __gmpq_set_d (mpq_ptr, double);


 void __gmpq_set_den (mpq_ptr, mpz_srcptr);


 void __gmpq_set_f (mpq_ptr, mpf_srcptr);


 void __gmpq_set_num (mpq_ptr, mpz_srcptr);


 void __gmpq_set_si (mpq_ptr, signed long int, unsigned long int);


 int __gmpq_set_str (mpq_ptr, const char *, int);


 void __gmpq_set_ui (mpq_ptr, unsigned long int, unsigned long int);


 void __gmpq_set_z (mpq_ptr, mpz_srcptr);


 void __gmpq_sub (mpq_ptr, mpq_srcptr, mpq_srcptr);


 void __gmpq_swap (mpq_ptr, mpq_ptr) ;





 void __gmpf_abs (mpf_ptr, mpf_srcptr);


 void __gmpf_add (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_add_ui (mpf_ptr, mpf_srcptr, unsigned long int);

 void __gmpf_ceil (mpf_ptr, mpf_srcptr);


 void __gmpf_clear (mpf_ptr);


 void __gmpf_clears (mpf_ptr, ...);


 int __gmpf_cmp (mpf_srcptr, mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_cmp_d (mpf_srcptr, double) __attribute__ ((__pure__));


 int __gmpf_cmp_si (mpf_srcptr, signed long int) __attribute__ ((__pure__));


 int __gmpf_cmp_ui (mpf_srcptr, unsigned long int) __attribute__ ((__pure__));


 void __gmpf_div (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_div_2exp (mpf_ptr, mpf_srcptr, mp_bitcnt_t);


 void __gmpf_div_ui (mpf_ptr, mpf_srcptr, unsigned long int);


 void __gmpf_dump (mpf_srcptr);


 int __gmpf_eq (mpf_srcptr, mpf_srcptr, unsigned long int) __attribute__ ((__pure__));


 int __gmpf_fits_sint_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_slong_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_sshort_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_uint_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_ulong_p (mpf_srcptr) __attribute__ ((__pure__));


 int __gmpf_fits_ushort_p (mpf_srcptr) __attribute__ ((__pure__));


 void __gmpf_floor (mpf_ptr, mpf_srcptr);


 double __gmpf_get_d (mpf_srcptr) __attribute__ ((__pure__));


 double __gmpf_get_d_2exp (signed long int *, mpf_srcptr);


 mp_bitcnt_t __gmpf_get_default_prec (void) __attribute__ ((__pure__));


 mp_bitcnt_t __gmpf_get_prec (mpf_srcptr) __attribute__ ((__pure__));


 long __gmpf_get_si (mpf_srcptr) __attribute__ ((__pure__));


 char *__gmpf_get_str (char *, mp_exp_t *, int, size_t, mpf_srcptr);


 unsigned long __gmpf_get_ui (mpf_srcptr) __attribute__ ((__pure__));


 void __gmpf_init (mpf_ptr);


 void __gmpf_init2 (mpf_ptr, mp_bitcnt_t);


 void __gmpf_inits (mpf_ptr, ...);


 void __gmpf_init_set (mpf_ptr, mpf_srcptr);


 void __gmpf_init_set_d (mpf_ptr, double);


 void __gmpf_init_set_si (mpf_ptr, signed long int);


 int __gmpf_init_set_str (mpf_ptr, const char *, int);


 void __gmpf_init_set_ui (mpf_ptr, unsigned long int);







 int __gmpf_integer_p (mpf_srcptr) __attribute__ ((__pure__));


 void __gmpf_mul (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_mul_2exp (mpf_ptr, mpf_srcptr, mp_bitcnt_t);


 void __gmpf_mul_ui (mpf_ptr, mpf_srcptr, unsigned long int);


 void __gmpf_neg (mpf_ptr, mpf_srcptr);







 void __gmpf_pow_ui (mpf_ptr, mpf_srcptr, unsigned long int);


 void __gmpf_random2 (mpf_ptr, mp_size_t, mp_exp_t);


 void __gmpf_reldiff (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_set (mpf_ptr, mpf_srcptr);


 void __gmpf_set_d (mpf_ptr, double);


 void __gmpf_set_default_prec (mp_bitcnt_t) ;


 void __gmpf_set_prec (mpf_ptr, mp_bitcnt_t);


 void __gmpf_set_prec_raw (mpf_ptr, mp_bitcnt_t) ;


 void __gmpf_set_q (mpf_ptr, mpq_srcptr);


 void __gmpf_set_si (mpf_ptr, signed long int);


 int __gmpf_set_str (mpf_ptr, const char *, int);


 void __gmpf_set_ui (mpf_ptr, unsigned long int);


 void __gmpf_set_z (mpf_ptr, mpz_srcptr);


 size_t __gmpf_size (mpf_srcptr) __attribute__ ((__pure__));


 void __gmpf_sqrt (mpf_ptr, mpf_srcptr);


 void __gmpf_sqrt_ui (mpf_ptr, unsigned long int);


 void __gmpf_sub (mpf_ptr, mpf_srcptr, mpf_srcptr);


 void __gmpf_sub_ui (mpf_ptr, mpf_srcptr, unsigned long int);


 void __gmpf_swap (mpf_ptr, mpf_ptr) ;


 void __gmpf_trunc (mpf_ptr, mpf_srcptr);


 void __gmpf_ui_div (mpf_ptr, unsigned long int, mpf_srcptr);


 void __gmpf_ui_sub (mpf_ptr, unsigned long int, mpf_srcptr);


 void __gmpf_urandomb (mpf_t, gmp_randstate_t, mp_bitcnt_t);
# 1501 "../gmp.h"
 mp_limb_t __gmpn_add (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr,mp_size_t);




 mp_limb_t __gmpn_add_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t) ;



 mp_limb_t __gmpn_add_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_addmul_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);



 int __gmpn_cmp (mp_srcptr, mp_srcptr, mp_size_t) __attribute__ ((__pure__));






 mp_limb_t __gmpn_divexact_by3c (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);





 mp_limb_t __gmpn_divrem (mp_ptr, mp_size_t, mp_ptr, mp_size_t, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_divrem_1 (mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_divrem_2 (mp_ptr, mp_size_t, mp_ptr, mp_size_t, mp_srcptr);


 mp_size_t __gmpn_gcd (mp_ptr, mp_ptr, mp_size_t, mp_ptr, mp_size_t);


 mp_limb_t __gmpn_gcd_1 (mp_srcptr, mp_size_t, mp_limb_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_gcdext_1 (mp_limb_signed_t *, mp_limb_signed_t *, mp_limb_t, mp_limb_t);


 mp_size_t __gmpn_gcdext (mp_ptr, mp_ptr, mp_size_t *, mp_ptr, mp_size_t, mp_ptr, mp_size_t);


 size_t __gmpn_get_str (unsigned char *, int, mp_ptr, mp_size_t);


 mp_bitcnt_t __gmpn_hamdist (mp_srcptr, mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_lshift (mp_ptr, mp_srcptr, mp_size_t, unsigned int);


 mp_limb_t __gmpn_mod_1 (mp_srcptr, mp_size_t, mp_limb_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_mul_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);


 void __gmpn_mul_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 void __gmpn_sqr (mp_ptr, mp_srcptr, mp_size_t);



 mp_limb_t __gmpn_neg (mp_ptr, mp_srcptr, mp_size_t);




 void __gmpn_com (mp_ptr, mp_srcptr, mp_size_t);



 int __gmpn_perfect_square_p (mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 int __gmpn_perfect_power_p (mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 mp_bitcnt_t __gmpn_popcount (mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 mp_size_t __gmpn_pow_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_ptr);



 mp_limb_t __gmpn_preinv_mod_1 (mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t) __attribute__ ((__pure__));


 void __gmpn_random (mp_ptr, mp_size_t);


 void __gmpn_random2 (mp_ptr, mp_size_t);


 mp_limb_t __gmpn_rshift (mp_ptr, mp_srcptr, mp_size_t, unsigned int);


 mp_bitcnt_t __gmpn_scan0 (mp_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 mp_bitcnt_t __gmpn_scan1 (mp_srcptr, mp_bitcnt_t) __attribute__ ((__pure__));


 mp_size_t __gmpn_set_str (mp_ptr, const unsigned char *, size_t, int);


 mp_size_t __gmpn_sqrtrem (mp_ptr, mp_ptr, mp_srcptr, mp_size_t);



 mp_limb_t __gmpn_sub (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr,mp_size_t);




 mp_limb_t __gmpn_sub_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t) ;



 mp_limb_t __gmpn_sub_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_submul_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);


 void __gmpn_tdiv_qr (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);


 void __gmpn_and_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_andn_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_nand_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_ior_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_iorn_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_nior_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_xor_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 void __gmpn_xnor_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 void __gmpn_copyi (mp_ptr, mp_srcptr, mp_size_t);

 void __gmpn_copyd (mp_ptr, mp_srcptr, mp_size_t);

 void __gmpn_zero (mp_ptr, mp_size_t);
# 1681 "../gmp.h"
extern __inline__ __attribute__ ((__gnu_inline__)) void
__gmpz_abs (mpz_ptr __gmp_w, mpz_srcptr __gmp_u)
{
  if (__gmp_w != __gmp_u)
    __gmpz_set (__gmp_w, __gmp_u);
  __gmp_w->_mp_size = ((__gmp_w->_mp_size) >= 0 ? (__gmp_w->_mp_size) : -(__gmp_w->_mp_size));
}
# 1705 "../gmp.h"
extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpz_fits_uint_p (mpz_srcptr __gmp_z)
{
  mp_size_t __gmp_n = __gmp_z->_mp_size; mp_ptr __gmp_p = __gmp_z->_mp_d; return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= (~ (unsigned) 0)));;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpz_fits_ulong_p (mpz_srcptr __gmp_z)
{
  mp_size_t __gmp_n = __gmp_z->_mp_size; mp_ptr __gmp_p = __gmp_z->_mp_d; return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= (~ (unsigned long) 0)));;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpz_fits_ushort_p (mpz_srcptr __gmp_z)
{
  mp_size_t __gmp_n = __gmp_z->_mp_size; mp_ptr __gmp_p = __gmp_z->_mp_d; return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= ((unsigned short) ~0)));;
}




extern __inline__ __attribute__ ((__gnu_inline__))

unsigned long
__gmpz_get_ui (mpz_srcptr __gmp_z)
{
  mp_ptr __gmp_p = __gmp_z->_mp_d;
  mp_size_t __gmp_n = __gmp_z->_mp_size;
  mp_limb_t __gmp_l = __gmp_p[0];






  return (__gmp_n != 0 ? __gmp_l : 0);
# 1761 "../gmp.h"
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpz_getlimbn (mpz_srcptr __gmp_z, mp_size_t __gmp_n)
{
  mp_limb_t __gmp_result = 0;
  if (__builtin_expect ((__gmp_n >= 0 && __gmp_n < ((__gmp_z->_mp_size) >= 0 ? (__gmp_z->_mp_size) : -(__gmp_z->_mp_size))) != 0, 1))
    __gmp_result = __gmp_z->_mp_d[__gmp_n];
  return __gmp_result;
}



extern __inline__ __attribute__ ((__gnu_inline__)) void
__gmpz_neg (mpz_ptr __gmp_w, mpz_srcptr __gmp_u)
{
  if (__gmp_w != __gmp_u)
    __gmpz_set (__gmp_w, __gmp_u);
  __gmp_w->_mp_size = - __gmp_w->_mp_size;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpz_perfect_square_p (mpz_srcptr __gmp_a)
{
  mp_size_t __gmp_asize;
  int __gmp_result;

  __gmp_asize = __gmp_a->_mp_size;
  __gmp_result = (__gmp_asize >= 0);
  if (__builtin_expect ((__gmp_asize > 0) != 0, 1))
    __gmp_result = __gmpn_perfect_square_p (__gmp_a->_mp_d, __gmp_asize);
  return __gmp_result;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_bitcnt_t
__gmpz_popcount (mpz_srcptr __gmp_u)
{
  mp_size_t __gmp_usize;
  mp_bitcnt_t __gmp_result;

  __gmp_usize = __gmp_u->_mp_size;
  __gmp_result = (__gmp_usize < 0 ? (~ (unsigned long) 0) : 0);
  if (__builtin_expect ((__gmp_usize > 0) != 0, 1))
    __gmp_result = __gmpn_popcount (__gmp_u->_mp_d, __gmp_usize);
  return __gmp_result;
}




extern __inline__ __attribute__ ((__gnu_inline__))

void
__gmpz_set_q (mpz_ptr __gmp_w, mpq_srcptr __gmp_u)
{
  __gmpz_tdiv_q (__gmp_w, (&((__gmp_u)->_mp_num)), (&((__gmp_u)->_mp_den)));
}




extern __inline__ __attribute__ ((__gnu_inline__))

size_t
__gmpz_size (mpz_srcptr __gmp_z)
{
  return ((__gmp_z->_mp_size) >= 0 ? (__gmp_z->_mp_size) : -(__gmp_z->_mp_size));
}






extern __inline__ __attribute__ ((__gnu_inline__)) void
__gmpq_abs (mpq_ptr __gmp_w, mpq_srcptr __gmp_u)
{
  if (__gmp_w != __gmp_u)
    __gmpq_set (__gmp_w, __gmp_u);
  __gmp_w->_mp_num._mp_size = ((__gmp_w->_mp_num._mp_size) >= 0 ? (__gmp_w->_mp_num._mp_size) : -(__gmp_w->_mp_num._mp_size));
}



extern __inline__ __attribute__ ((__gnu_inline__)) void
__gmpq_neg (mpq_ptr __gmp_w, mpq_srcptr __gmp_u)
{
  if (__gmp_w != __gmp_u)
    __gmpq_set (__gmp_w, __gmp_u);
  __gmp_w->_mp_num._mp_size = - __gmp_w->_mp_num._mp_size;
}
# 2103 "../gmp.h"
extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_add (mp_ptr __gmp_wp, mp_srcptr __gmp_xp, mp_size_t __gmp_xsize, mp_srcptr __gmp_yp, mp_size_t __gmp_ysize)
{
  mp_limb_t __gmp_c;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x; __gmp_i = (__gmp_ysize); if (__gmp_i != 0) { if (__gmpn_add_n (__gmp_wp, __gmp_xp, __gmp_yp, __gmp_i)) { do { if (__gmp_i >= (__gmp_xsize)) { (__gmp_c) = 1; goto __gmp_done; } __gmp_x = (__gmp_xp)[__gmp_i]; } while ((((__gmp_wp)[__gmp_i++] = (__gmp_x + 1) & ((~ ((mp_limb_t) (0))) >> 0)) == 0)); } } if ((__gmp_wp) != (__gmp_xp)) do { mp_size_t __gmp_j; ; for (__gmp_j = (__gmp_i); __gmp_j < (__gmp_xsize); __gmp_j++) (__gmp_wp)[__gmp_j] = (__gmp_xp)[__gmp_j]; } while (0); (__gmp_c) = 0; __gmp_done: ; } while (0);
  return __gmp_c;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_add_1 (mp_ptr __gmp_dst, mp_srcptr __gmp_src, mp_size_t __gmp_size, mp_limb_t __gmp_n)
{
  mp_limb_t __gmp_c;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x, __gmp_r; __gmp_x = (__gmp_src)[0]; __gmp_r = __gmp_x + (__gmp_n); (__gmp_dst)[0] = __gmp_r; if (((__gmp_r) < ((__gmp_n)))) { (__gmp_c) = 1; for (__gmp_i = 1; __gmp_i < (__gmp_size);) { __gmp_x = (__gmp_src)[__gmp_i]; __gmp_r = __gmp_x + 1; (__gmp_dst)[__gmp_i] = __gmp_r; ++__gmp_i; if (!((__gmp_r) < (1))) { if ((__gmp_src) != (__gmp_dst)) do { mp_size_t __gmp_j; ; for (__gmp_j = (__gmp_i); __gmp_j < (__gmp_size); __gmp_j++) (__gmp_dst)[__gmp_j] = (__gmp_src)[__gmp_j]; } while (0); (__gmp_c) = 0; break; } } } else { if ((__gmp_src) != (__gmp_dst)) do { mp_size_t __gmp_j; ; for (__gmp_j = (1); __gmp_j < (__gmp_size); __gmp_j++) (__gmp_dst)[__gmp_j] = (__gmp_src)[__gmp_j]; } while (0); (__gmp_c) = 0; } } while (0);
  return __gmp_c;
}




extern __inline__ __attribute__ ((__gnu_inline__))

int
__gmpn_cmp (mp_srcptr __gmp_xp, mp_srcptr __gmp_yp, mp_size_t __gmp_size)
{
  int __gmp_result;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x, __gmp_y; (__gmp_result) = 0; __gmp_i = (__gmp_size); while (--__gmp_i >= 0) { __gmp_x = (__gmp_xp)[__gmp_i]; __gmp_y = (__gmp_yp)[__gmp_i]; if (__gmp_x != __gmp_y) { (__gmp_result) = (__gmp_x > __gmp_y ? 1 : -1); break; } } } while (0);
  return __gmp_result;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_sub (mp_ptr __gmp_wp, mp_srcptr __gmp_xp, mp_size_t __gmp_xsize, mp_srcptr __gmp_yp, mp_size_t __gmp_ysize)
{
  mp_limb_t __gmp_c;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x; __gmp_i = (__gmp_ysize); if (__gmp_i != 0) { if (__gmpn_sub_n (__gmp_wp, __gmp_xp, __gmp_yp, __gmp_i)) { do { if (__gmp_i >= (__gmp_xsize)) { (__gmp_c) = 1; goto __gmp_done; } __gmp_x = (__gmp_xp)[__gmp_i]; } while ((((__gmp_wp)[__gmp_i++] = (__gmp_x - 1) & ((~ ((mp_limb_t) (0))) >> 0)), __gmp_x == 0)); } } if ((__gmp_wp) != (__gmp_xp)) do { mp_size_t __gmp_j; ; for (__gmp_j = (__gmp_i); __gmp_j < (__gmp_xsize); __gmp_j++) (__gmp_wp)[__gmp_j] = (__gmp_xp)[__gmp_j]; } while (0); (__gmp_c) = 0; __gmp_done: ; } while (0);
  return __gmp_c;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_sub_1 (mp_ptr __gmp_dst, mp_srcptr __gmp_src, mp_size_t __gmp_size, mp_limb_t __gmp_n)
{
  mp_limb_t __gmp_c;
  do { mp_size_t __gmp_i; mp_limb_t __gmp_x, __gmp_r; __gmp_x = (__gmp_src)[0]; __gmp_r = __gmp_x - (__gmp_n); (__gmp_dst)[0] = __gmp_r; if (((__gmp_x) < ((__gmp_n)))) { (__gmp_c) = 1; for (__gmp_i = 1; __gmp_i < (__gmp_size);) { __gmp_x = (__gmp_src)[__gmp_i]; __gmp_r = __gmp_x - 1; (__gmp_dst)[__gmp_i] = __gmp_r; ++__gmp_i; if (!((__gmp_x) < (1))) { if ((__gmp_src) != (__gmp_dst)) do { mp_size_t __gmp_j; ; for (__gmp_j = (__gmp_i); __gmp_j < (__gmp_size); __gmp_j++) (__gmp_dst)[__gmp_j] = (__gmp_src)[__gmp_j]; } while (0); (__gmp_c) = 0; break; } } } else { if ((__gmp_src) != (__gmp_dst)) do { mp_size_t __gmp_j; ; for (__gmp_j = (1); __gmp_j < (__gmp_size); __gmp_j++) (__gmp_dst)[__gmp_j] = (__gmp_src)[__gmp_j]; } while (0); (__gmp_c) = 0; } } while (0);
  return __gmp_c;
}




extern __inline__ __attribute__ ((__gnu_inline__))

mp_limb_t
__gmpn_neg (mp_ptr __gmp_rp, mp_srcptr __gmp_up, mp_size_t __gmp_n)
{
  mp_limb_t __gmp_ul, __gmp_cy;
  __gmp_cy = 0;
  do {
      __gmp_ul = *__gmp_up++;
      *__gmp_rp++ = -__gmp_ul - __gmp_cy;
      __gmp_cy |= __gmp_ul != 0;
  } while (--__gmp_n != 0);
  return __gmp_cy;
}
# 2260 "../gmp.h"
enum
{
  GMP_ERROR_NONE = 0,
  GMP_ERROR_UNSUPPORTED_ARGUMENT = 1,
  GMP_ERROR_DIVISION_BY_ZERO = 2,
  GMP_ERROR_SQRT_OF_NEGATIVE = 4,
  GMP_ERROR_INVALID_ARGUMENT = 8
};
# 74 "powm.c" 2
# 1 "../gmp-impl.h" 1
# 100 "../gmp-impl.h"
# 1 "../config.h" 1
# 101 "../gmp-impl.h" 2
# 1 "../gmp-mparam.h" 1
# 102 "../gmp-impl.h" 2
# 1 "../fib_table.h" 1
# 103 "../gmp-impl.h" 2
# 1 "../mp_bases.h" 1
# 104 "../gmp-impl.h" 2






# 1 "/usr/include/inttypes.h" 1 3 4
# 26 "/usr/include/inttypes.h" 3 4
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
# 27 "/usr/include/inttypes.h" 2 3 4

# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 126 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 29 "/usr/include/inttypes.h" 2 3 4






typedef long int __gwchar_t;
# 274 "/usr/include/inttypes.h" 3 4

# 288 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long long int quot;
    long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__));


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__));
# 379 "/usr/include/inttypes.h" 3 4
__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
      char **__restrict __endptr,
      int __base, int __group)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
__attribute__ ((__nothrow__)) strtoimax (__const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtoll_internal (nptr, endptr, base, 0);
}

__extension__
extern unsigned long long int __strtoull_internal (__const char *
         __restrict __nptr,
         char **
         __restrict __endptr,
         int __base,
         int __group)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
__attribute__ ((__nothrow__)) strtoumax (__const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtoull_internal (nptr, endptr, base, 0);
}

__extension__
extern long long int __wcstoll_internal (__const __gwchar_t *
      __restrict __nptr,
      __gwchar_t **__restrict __endptr,
      int __base, int __group)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
__attribute__ ((__nothrow__)) wcstoimax (__const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstoll_internal (nptr, endptr, base, 0);
}


__extension__
extern unsigned long long int __wcstoull_internal (__const __gwchar_t *
         __restrict __nptr,
         __gwchar_t **
         __restrict __endptr,
         int __base,
         int __group)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
__attribute__ ((__nothrow__)) wcstoumax (__const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstoull_internal (nptr, endptr, base, 0);
}





# 111 "../gmp-impl.h" 2
# 188 "../gmp-impl.h"
typedef uint_least32_t gmp_uint_least32_t;
# 204 "../gmp-impl.h"
typedef intptr_t gmp_intptr_t;






typedef struct {mp_limb_t inv32;} gmp_pi1_t;
typedef struct {mp_limb_t inv21, inv32, inv53;} gmp_pi2_t;
# 308 "../gmp-impl.h"
union tmp_align_t {
  mp_limb_t l;
  char *p;
};
# 325 "../gmp-impl.h"
struct tmp_reentrant_t {
  struct tmp_reentrant_t *next;
  size_t size;
};
 void *__gmp_tmp_reentrant_alloc (struct tmp_reentrant_t **, size_t) __attribute__ ((malloc));
 void __gmp_tmp_reentrant_free (struct tmp_reentrant_t *);
# 657 "../gmp-impl.h"
 extern void * (*__gmp_allocate_func) (size_t);
 extern void * (*__gmp_reallocate_func) (void *, size_t, size_t);
 extern void (*__gmp_free_func) (void *, size_t);

 void *__gmp_default_allocate (size_t);
 void *__gmp_default_reallocate (void *, size_t, size_t);
 void __gmp_default_free (void *, size_t);
# 764 "../gmp-impl.h"
 void __gmpz_aorsmul_1 (mp_size_t,mpz_ptr,mpz_srcptr,mp_limb_t) __attribute__ ((regparm (1)));



 void __gmpz_n_pow_ui (mpz_ptr, mp_srcptr, mp_size_t, unsigned long);



 mp_limb_t __gmpn_addmul_1c (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t);


 mp_limb_t __gmpn_addmul_2 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_addmul_3 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_addmul_4 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_addmul_5 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_addmul_6 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_addmul_7 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_addmul_8 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);




 mp_limb_t __gmpn_addlsh1_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);




 mp_limb_t __gmpn_addlsh2_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);




  mp_limb_t __gmpn_addlsh_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, unsigned int);




 mp_limb_t __gmpn_sublsh1_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);




 mp_limb_signed_t __gmpn_rsblsh1_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);




 mp_limb_t __gmpn_sublsh2_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);




 mp_limb_signed_t __gmpn_rsblsh2_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);




 mp_limb_signed_t __gmpn_rsblsh_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, unsigned int);




 mp_limb_t __gmpn_rsh1add_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 mp_limb_t __gmpn_rsh1add_nc (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_limb_t);






 mp_limb_t __gmpn_rsh1sub_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);

 mp_limb_t __gmpn_rsh1sub_nc (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_lshiftc (mp_ptr, mp_srcptr, mp_size_t, unsigned int);


 mp_limb_t __gmpn_add_n_sub_n (mp_ptr, mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 mp_limb_t __gmpn_add_n_sub_nc (mp_ptr, mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_addaddmul_1msb0 (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t);


 mp_limb_t __gmpn_divrem_1c (mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t);


 void __gmpn_dump (mp_srcptr, mp_size_t);


 mp_size_t __gmpn_fib2_ui (mp_ptr, mp_ptr, unsigned long);






 int __gmpn_jacobi_base (mp_limb_t, mp_limb_t, int) __attribute__ ((const));


 mp_limb_t __gmpn_mod_1c (mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t) __attribute__ ((__pure__));


 mp_limb_t __gmpn_mul_1c (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t);


 mp_limb_t __gmpn_mul_2 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_mul_3 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);


 mp_limb_t __gmpn_mul_4 (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);



 void __gmpn_mul_basecase (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);



 void __gmpn_mullo_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 void __gmpn_mullo_basecase (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t);


 void __gmpn_sqr (mp_ptr, mp_srcptr, mp_size_t);



 void __gmpn_sqr_basecase (mp_ptr, mp_srcptr, mp_size_t);



 mp_limb_t __gmpn_submul_1c (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t);


 void __gmpn_redc_1 (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);


 void __gmpn_redc_2 (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);

 void __gmpn_redc_n (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_srcptr);



 void __gmpn_mod_1_1p_cps (mp_limb_t [4], mp_limb_t);

 mp_limb_t __gmpn_mod_1_1p (mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t [4]) __attribute__ ((__pure__));


 void __gmpn_mod_1s_2p_cps (mp_limb_t [5], mp_limb_t);

 mp_limb_t __gmpn_mod_1s_2p (mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t [5]) __attribute__ ((__pure__));


 void __gmpn_mod_1s_3p_cps (mp_limb_t [6], mp_limb_t);

 mp_limb_t __gmpn_mod_1s_3p (mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t [6]) __attribute__ ((__pure__));


 void __gmpn_mod_1s_4p_cps (mp_limb_t [7], mp_limb_t);

 mp_limb_t __gmpn_mod_1s_4p (mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t [7]) __attribute__ ((__pure__));


 void __gmpn_bc_mulmod_bnm1 (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_ptr);

 void __gmpn_mulmod_bnm1 (mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_mulmod_bnm1_next_size (mp_size_t) __attribute__ ((const));
static inline mp_size_t
mpn_mulmod_bnm1_itch (mp_size_t rn, mp_size_t an, mp_size_t bn) {
  mp_size_t n, itch;
  n = rn >> 1;
  itch = rn + 4 +
    (an > n ? (bn > n ? rn : n) : 0);
  return itch;
}


 void __gmpn_sqrmod_bnm1 (mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_sqrmod_bnm1_next_size (mp_size_t) __attribute__ ((const));
static inline mp_size_t
mpn_sqrmod_bnm1_itch (mp_size_t rn, mp_size_t an) {
  mp_size_t n, itch;
  n = rn >> 1;
  itch = rn + 3 +
    (an > n ? an : 0);
  return itch;
}

typedef __gmp_randstate_struct *gmp_randstate_ptr;
typedef const __gmp_randstate_struct *gmp_randstate_srcptr;


typedef struct {
  void (*randseed_fn) (gmp_randstate_t, mpz_srcptr);
  void (*randget_fn) (gmp_randstate_t, mp_ptr, unsigned long int);
  void (*randclear_fn) (gmp_randstate_t);
  void (*randiset_fn) (gmp_randstate_ptr, gmp_randstate_srcptr);
} gmp_randfnptr_t;
# 999 "../gmp-impl.h"
 void __gmp_randinit_mt_noseed (gmp_randstate_t);
# 1014 "../gmp-impl.h"
 extern char __gmp_rands_initialized;
 extern gmp_randstate_t __gmp_rands;
# 1068 "../gmp-impl.h"
 void __gmpn_sqr_diagonal (mp_ptr, mp_srcptr, mp_size_t);


 void __gmpn_toom_interpolate_5pts (mp_ptr, mp_ptr, mp_ptr, mp_size_t, mp_size_t, int, mp_limb_t);

enum toom6_flags {toom6_all_pos = 0, toom6_vm1_neg = 1, toom6_vm2_neg = 2};

 void __gmpn_toom_interpolate_6pts (mp_ptr, mp_size_t, enum toom6_flags, mp_ptr, mp_ptr, mp_ptr, mp_size_t);

enum toom7_flags { toom7_w1_neg = 1, toom7_w3_neg = 2 };

 void __gmpn_toom_interpolate_7pts (mp_ptr, mp_size_t, enum toom7_flags, mp_ptr, mp_ptr, mp_ptr, mp_ptr, mp_size_t, mp_ptr);


 void __gmpn_toom_interpolate_8pts (mp_ptr, mp_size_t, mp_ptr, mp_ptr, mp_size_t, mp_ptr);


 void __gmpn_toom_interpolate_12pts (mp_ptr, mp_ptr, mp_ptr, mp_ptr, mp_size_t, mp_size_t, int, mp_ptr);


 void __gmpn_toom_interpolate_16pts (mp_ptr, mp_ptr, mp_ptr, mp_ptr, mp_ptr, mp_size_t, mp_size_t, int, mp_ptr);


 void __gmpn_toom_couple_handling (mp_ptr, mp_size_t, mp_ptr, int, mp_size_t, int, int);


 int __gmpn_toom_eval_dgr3_pm1 (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_size_t, mp_ptr);


 int __gmpn_toom_eval_dgr3_pm2 (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_size_t, mp_ptr);


 int __gmpn_toom_eval_pm1 (mp_ptr, mp_ptr, unsigned, mp_srcptr, mp_size_t, mp_size_t, mp_ptr);


 int __gmpn_toom_eval_pm2 (mp_ptr, mp_ptr, unsigned, mp_srcptr, mp_size_t, mp_size_t, mp_ptr);


 int __gmpn_toom_eval_pm2exp (mp_ptr, mp_ptr, unsigned, mp_srcptr, mp_size_t, mp_size_t, unsigned, mp_ptr);


 int __gmpn_toom_eval_pm2rexp (mp_ptr, mp_ptr, unsigned, mp_srcptr, mp_size_t, mp_size_t, unsigned, mp_ptr);


 void __gmpn_toom22_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom32_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom42_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom52_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom62_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom2_sqr (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom33_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom43_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom53_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom63_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom3_sqr (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom44_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom4_sqr (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom6h_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom6_sqr (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom8h_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_toom8_sqr (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);


 int __gmpn_fft_best_k (mp_size_t, int) __attribute__ ((const));


 mp_limb_t __gmpn_mul_fft (mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, int);


 void __gmpn_mul_fft_full (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);


 void __gmpn_nussbaumer_mul (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);


 mp_size_t __gmpn_fft_next_size (mp_size_t, int) __attribute__ ((const));


 mp_limb_t __gmpn_sbpi1_div_qr (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_sbpi1_div_q (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_sbpi1_divappr_q (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_dcpi1_div_qr (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, gmp_pi1_t *);

 mp_limb_t __gmpn_dcpi1_div_qr_n (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, gmp_pi1_t *, mp_ptr);


 mp_limb_t __gmpn_dcpi1_div_q (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, gmp_pi1_t *);


 mp_limb_t __gmpn_dcpi1_divappr_q (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, gmp_pi1_t *);

 mp_limb_t __gmpn_dcpi1_divappr_q_n (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, gmp_pi1_t *, mp_ptr);


 mp_limb_t __gmpn_mu_div_qr (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_mu_div_qr_itch (mp_size_t, mp_size_t, int);

 mp_size_t __gmpn_mu_div_qr_choose_in (mp_size_t, mp_size_t, int);


 mp_limb_t __gmpn_preinv_mu_div_qr (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 mp_limb_t __gmpn_mu_divappr_q (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_mu_divappr_q_itch (mp_size_t, mp_size_t, int);

 mp_size_t __gmpn_mu_divappr_q_choose_in (mp_size_t, mp_size_t, int);


 mp_limb_t __gmpn_preinv_mu_divappr_q (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 mp_limb_t __gmpn_mu_div_q (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_mu_div_q_itch (mp_size_t, mp_size_t, int);


 void __gmpn_div_q (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);


 void __gmpn_invert (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);



 mp_limb_t __gmpn_ni_invertappr (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);

 mp_limb_t __gmpn_invertappr (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);



 void __gmpn_binvert (mp_ptr, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_binvert_itch (mp_size_t);


 mp_limb_t __gmpn_bdiv_q_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_pi1_bdiv_q_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t, int);


 mp_limb_t __gmpn_sbpi1_bdiv_qr (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);


 void __gmpn_sbpi1_bdiv_q (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);


 mp_limb_t __gmpn_dcpi1_bdiv_qr (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);

 mp_size_t __gmpn_dcpi1_bdiv_qr_n_itch (mp_size_t);


 mp_limb_t __gmpn_dcpi1_bdiv_qr_n (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_ptr);

 void __gmpn_dcpi1_bdiv_q (mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t);


 mp_size_t __gmpn_dcpi1_bdiv_q_n_itch (mp_size_t);

 void __gmpn_dcpi1_bdiv_q_n (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_ptr);


 mp_limb_t __gmpn_mu_bdiv_qr (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_mu_bdiv_qr_itch (mp_size_t, mp_size_t);


 void __gmpn_mu_bdiv_q (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_mu_bdiv_q_itch (mp_size_t, mp_size_t);


 mp_limb_t __gmpn_bdiv_qr (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_bdiv_qr_itch (mp_size_t, mp_size_t);


 void __gmpn_bdiv_q (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_bdiv_q_itch (mp_size_t, mp_size_t);


 void __gmpn_divexact (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t);

 mp_size_t __gmpn_divexact_itch (mp_size_t, mp_size_t);


 mp_limb_t __gmpn_bdiv_dbm1c (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t);




 void __gmpn_powm (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 void __gmpn_powlo (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_size_t, mp_ptr);

 void __gmpn_powm_sec (mp_ptr, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_powm_sec_itch (mp_size_t, mp_size_t, mp_size_t);

 mp_limb_t __gmpn_subcnd_n (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_limb_t);

 void __gmpn_tabselect (volatile mp_limb_t *, volatile mp_limb_t *, mp_size_t, mp_size_t, mp_size_t);

 void __gmpn_redc_1_sec (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);
# 1365 "../gmp-impl.h"
 void __gmpz_divexact_gcd (mpz_ptr, mpz_srcptr, mpz_srcptr);







 int __gmpn_divisible_p (mp_srcptr, mp_size_t, mp_srcptr, mp_size_t) __attribute__ ((__pure__));


 mp_size_t __gmpn_rootrem (mp_ptr, mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);
# 1667 "../gmp-impl.h"
 extern const mp_limb_t __gmp_fib_table[];



typedef struct
{
  unsigned long d;
  unsigned long s0;
  unsigned long sqrt_s0;
  unsigned char s[512 + 1];
} gmp_primesieve_t;


 void __gmp_init_primesieve (gmp_primesieve_t *);


 unsigned long int __gmp_nextprime (gmp_primesieve_t *);
# 1910 "../gmp-impl.h"
struct fft_table_nk
{
  unsigned int n:27;
  unsigned int k:5;
};
# 1993 "../gmp-impl.h"
 void __gmp_assert_header (const char *, int);
 void __gmp_assert_fail (const char *, int, const char *) __attribute__ ((noreturn));
# 2205 "../gmp-impl.h"
 mp_limb_t __gmpn_trialdiv (mp_srcptr, mp_size_t, mp_size_t, int *);


 mp_bitcnt_t __gmpn_remove (mp_ptr, mp_size_t *, mp_ptr, mp_size_t, mp_ptr, mp_size_t, mp_bitcnt_t);
# 2444 "../gmp-impl.h"
struct bases
{



  int chars_per_limb;


  double chars_per_bit_exactly;




  mp_limb_t big_base;




  mp_limb_t big_base_inverted;
};


 extern const struct bases __gmpn_bases[257];
# 2590 "../gmp-impl.h"
 mp_limb_t __gmpn_invert_limb (mp_limb_t) __attribute__ ((const));
# 2810 "../gmp-impl.h"
 mp_limb_t __gmpn_preinv_divrem_1 (mp_ptr, mp_size_t, mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t, int);
# 2843 "../gmp-impl.h"
 mp_limb_t __gmpn_mod_34lsub1 (mp_srcptr, mp_size_t) __attribute__ ((__pure__));
# 2861 "../gmp-impl.h"
 void __gmpn_divexact_1 (mp_ptr, mp_srcptr, mp_size_t, mp_limb_t);
# 2877 "../gmp-impl.h"
 mp_limb_t __gmpn_modexact_1c_odd (mp_srcptr, mp_size_t, mp_limb_t, mp_limb_t) __attribute__ ((__pure__));




 mp_limb_t __gmpn_modexact_1_odd (mp_srcptr, mp_size_t, mp_limb_t) __attribute__ ((__pure__));
# 2914 "../gmp-impl.h"
 extern const unsigned char __gmp_binvert_limb_table[128];
# 3358 "../gmp-impl.h"
typedef unsigned int UQItype __attribute__ ((mode (QI)));
typedef int SItype __attribute__ ((mode (SI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef int DItype __attribute__ ((mode (DI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));
# 3376 "../gmp-impl.h"
typedef mp_limb_t UWtype;
typedef unsigned int UHWtype;
# 3409 "../gmp-impl.h"
union ieee_double_extract
{
  struct
    {
      gmp_uint_least32_t manl:32;
      gmp_uint_least32_t manh:20;
      gmp_uint_least32_t exp:11;
      gmp_uint_least32_t sig:1;
    } s;
  double d;
};
# 3445 "../gmp-impl.h"
 int __gmp_extract_double (mp_ptr, double);


 double __gmpn_get_d (mp_srcptr, mp_size_t, mp_size_t, long) __attribute__ ((__pure__));
# 3517 "../gmp-impl.h"
 extern int __gmp_junk;
 extern const int __gmp_0;
 void __gmp_exception (int) __attribute__ ((noreturn));
 void __gmp_divide_by_zero (void) __attribute__ ((noreturn));
 void __gmp_sqrt_of_negative (void) __attribute__ ((noreturn));
 void __gmp_invalid_operation (void) __attribute__ ((noreturn));
# 3720 "../gmp-impl.h"
 void __gmpn_matrix22_mul (mp_ptr, mp_ptr, mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_srcptr, mp_srcptr, mp_srcptr, mp_size_t, mp_ptr);

 void __gmpn_matrix22_mul_strassen (mp_ptr, mp_ptr, mp_ptr, mp_ptr, mp_size_t, mp_srcptr, mp_srcptr, mp_srcptr, mp_srcptr, mp_size_t, mp_ptr);

 mp_size_t __gmpn_matrix22_mul_itch (mp_size_t, mp_size_t);
# 3756 "../gmp-impl.h"
struct hgcd_matrix1
{
  mp_limb_t u[2][2];
};


 int __gmpn_hgcd2 (mp_limb_t, mp_limb_t, mp_limb_t, mp_limb_t, struct hgcd_matrix1 *);


 mp_size_t __gmpn_hgcd_mul_matrix1_vector (const struct hgcd_matrix1 *, mp_ptr, mp_srcptr, mp_ptr, mp_size_t);


 mp_size_t __gmpn_hgcd_mul_matrix1_inverse_vector (const struct hgcd_matrix1 *, mp_ptr, mp_srcptr, mp_ptr, mp_size_t);

struct hgcd_matrix
{
  mp_size_t alloc;
  mp_size_t n;
  mp_ptr p[2][2];
};




 void __gmpn_hgcd_matrix_init (struct hgcd_matrix *, mp_size_t, mp_ptr);


 void __gmpn_hgcd_matrix_mul (struct hgcd_matrix *, const struct hgcd_matrix *, mp_ptr);


 mp_size_t __gmpn_hgcd_matrix_adjust (struct hgcd_matrix *, mp_size_t, mp_ptr, mp_ptr, mp_size_t, mp_ptr);


 mp_size_t __gmpn_hgcd_itch (mp_size_t);


 mp_size_t __gmpn_hgcd (mp_ptr, mp_ptr, mp_size_t, struct hgcd_matrix *, mp_ptr);




 mp_size_t __gmpn_hgcd_lehmer (mp_ptr, mp_ptr, mp_size_t, struct hgcd_matrix *, mp_ptr);





 mp_size_t __gmpn_gcd_subdiv_step (mp_ptr, mp_size_t *, mp_ptr, mp_ptr, mp_size_t, mp_ptr);




 mp_size_t __gmpn_gcd_lehmer_n (mp_ptr, mp_ptr, mp_ptr, mp_size_t, mp_ptr);


 mp_size_t __gmpn_gcdext_subdiv_step (mp_ptr, mp_size_t *, mp_ptr, mp_size_t *, mp_ptr, mp_ptr, mp_size_t, mp_ptr, mp_ptr, mp_size_t *, mp_ptr, mp_ptr);




 mp_size_t __gmpn_gcdext_lehmer_n (mp_ptr, mp_ptr, mp_size_t *, mp_ptr, mp_ptr, mp_size_t, mp_ptr);
# 3834 "../gmp-impl.h"
struct powers
{
  mp_ptr p;
  mp_size_t n;
  mp_size_t shift;
  size_t digits_in_base;
  int base;
};
typedef struct powers powers_t;






 mp_size_t __gmpn_dc_set_str (mp_ptr, const unsigned char *, size_t, const powers_t *, mp_ptr);

 mp_size_t __gmpn_bc_set_str (mp_ptr, const unsigned char *, size_t, int);

 void __gmpn_set_str_compute_powtab (powers_t *, mp_ptr, mp_size_t, int);
# 3865 "../gmp-impl.h"
 extern mp_size_t __gmp_default_fp_limb_precision;
# 3926 "../gmp-impl.h"
struct doprnt_params_t {
  int base;
  int conv;
  const char *expfmt;
  int exptimes4;
  char fill;
  int justify;
  int prec;
  int showbase;
  int showpoint;
  int showtrailing;
  char sign;
  int width;
};
# 4056 "../gmp-impl.h"
typedef int (*gmp_doscan_scan_t) (void *, const char *, ...);
typedef void *(*gmp_doscan_step_t) (void *, int);
typedef int (*gmp_doscan_get_t) (void *);
typedef int (*gmp_doscan_unget_t) (int, void *);

struct gmp_doscan_funs_t {
  gmp_doscan_scan_t scan;
  gmp_doscan_step_t step;
  gmp_doscan_get_t get;
  gmp_doscan_unget_t unget;
};
extern const struct gmp_doscan_funs_t __gmp_fscanf_funs;
extern const struct gmp_doscan_funs_t __gmp_sscanf_funs;
# 4160 "../gmp-impl.h"
 void __gmpn_cpuvec_init (void);
# 4171 "../gmp-impl.h"
 mp_limb_t __gmpn_add_nc (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_limb_t);
# 4186 "../gmp-impl.h"
 mp_limb_t __gmpn_sub_nc (mp_ptr, mp_srcptr, mp_srcptr, mp_size_t, mp_limb_t);
# 4198 "../gmp-impl.h"
static inline int
mpn_zero_p (mp_srcptr ap, mp_size_t n)
{
  mp_size_t i;
  for (i = n - 1; i >= 0; i--)
    {
      if (ap[i] != 0)
 return 0;
    }
  return 1;
}
# 4541 "../gmp-impl.h"
static inline mp_size_t
mpn_toom6h_mul_itch (mp_size_t an, mp_size_t bn) {
  mp_size_t estimatedN;
  estimatedN = (an + bn) / (size_t) 10 + 1;
  return ( ((estimatedN * 6) - 252)*2 + ((252*2 + (32 - 0)*6) > ((3 * (252) + (32 - 0))) ? (252*2 + (32 - 0)*6) : ((3 * (252) + (32 - 0)))) );
}
# 4558 "../gmp-impl.h"
static inline mp_size_t
mpn_toom8h_mul_itch (mp_size_t an, mp_size_t bn) {
  mp_size_t estimatedN;
  estimatedN = (an + bn) / (size_t) 14 + 1;
  return ( (((estimatedN * 8)*15)>>3) - ((381*15)>>3) + ((((381*15)>>3) + (32 - 0)*6) > (( ((381) - 252)*2 + ((252*2 + (32 - 0)*6) > ((3 * (252) + (32 - 0))) ? (252*2 + (32 - 0)*6) : ((3 * (252) + (32 - 0)))) )) ? (((381*15)>>3) + (32 - 0)*6) : (( ((381) - 252)*2 + ((252*2 + (32 - 0)*6) > ((3 * (252) + (32 - 0))) ? (252*2 + (32 - 0)*6) : ((3 * (252) + (32 - 0)))) ))) );
}

static inline mp_size_t
mpn_toom32_mul_itch (mp_size_t an, mp_size_t bn)
{
  mp_size_t n = 1 + (2 * an >= 3 * bn ? (an - 1) / (size_t) 3 : (bn - 1) >> 1);
  mp_size_t itch = 2 * n + 1;

  return itch;
}

static inline mp_size_t
mpn_toom42_mul_itch (mp_size_t an, mp_size_t bn)
{
  mp_size_t n = an >= 2 * bn ? (an + 3) >> 2 : (bn + 1) >> 1;
  return 6 * n + 3;
}

static inline mp_size_t
mpn_toom43_mul_itch (mp_size_t an, mp_size_t bn)
{
  mp_size_t n = 1 + (3 * an >= 4 * bn ? (an - 1) >> 2 : (bn - 1) / (size_t) 3);

  return 6*n + 4;
}

static inline mp_size_t
mpn_toom52_mul_itch (mp_size_t an, mp_size_t bn)
{
  mp_size_t n = 1 + (2 * an >= 5 * bn ? (an - 1) / (size_t) 5 : (bn - 1) >> 1);
  return 6*n + 4;
}

static inline mp_size_t
mpn_toom53_mul_itch (mp_size_t an, mp_size_t bn)
{
  mp_size_t n = 1 + (3 * an >= 5 * bn ? (an - 1) / (size_t) 5 : (bn - 1) / (size_t) 3);
  return 10 * n + 10;
}

static inline mp_size_t
mpn_toom62_mul_itch (mp_size_t an, mp_size_t bn)
{
  mp_size_t n = 1 + (an >= 3 * bn ? (an - 1) / (size_t) 6 : (bn - 1) >> 1);
  return 10 * n + 10;
}

static inline mp_size_t
mpn_toom63_mul_itch (mp_size_t an, mp_size_t bn)
{
  mp_size_t n = 1 + (an >= 2 * bn ? (an - 1) / (size_t) 6 : (bn - 1) / (size_t) 3);
  return 9 * n + 3;
}
# 75 "powm.c" 2
# 1 "../longlong.h" 1
# 1683 "../longlong.h"
extern UWtype __gmpn_umul_ppmm (UWtype *, UWtype, UWtype);
# 1696 "../longlong.h"
extern UWtype __gmpn_umul_ppmm_r (UWtype, UWtype, UWtype *);
# 1709 "../longlong.h"
extern UWtype __gmpn_udiv_qrnnd (UWtype *, UWtype, UWtype, UWtype);
# 1723 "../longlong.h"
extern UWtype __gmpn_udiv_qrnnd_r (UWtype, UWtype, UWtype, UWtype *);
# 76 "powm.c" 2
# 84 "powm.c"
static inline mp_limb_t
getbits (const mp_limb_t *p, mp_bitcnt_t bi, int nbits)
{
  int nbits_in_r;
  mp_limb_t r;
  mp_size_t i;

  if (bi < nbits)
    {
      return p[0] & (((mp_limb_t) 1 << bi) - 1);
    }
  else
    {
      bi -= nbits;
      i = bi / (32 - 0);
      bi %= (32 - 0);
      r = p[i] >> bi;
      nbits_in_r = (32 - 0) - bi;
      if (nbits_in_r < nbits)
 r += p[i + 1] << nbits_in_r;
      return r & (((mp_limb_t ) 1 << nbits) - 1);
    }
}

static inline int
win_size (mp_bitcnt_t eb)
{
  int k;
  static mp_bitcnt_t x[] = {0,7,25,81,241,673,1793,4609,11521,28161,~(mp_bitcnt_t)0};
  for (k = 1; eb > x[k]; k++)
    ;
  return k;
}


static void
redcify (mp_ptr rp, mp_srcptr up, mp_size_t un, mp_srcptr mp, mp_size_t n)
{
  mp_ptr tp, qp;
  struct tmp_reentrant_t *__tmp_marker;
  __tmp_marker = 0;

  tp = ((mp_limb_t *) (__builtin_expect ((((un + n) * sizeof (mp_limb_t)) < 65536) != 0, 1) ? __builtin_alloca((un + n) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (un + n) * sizeof (mp_limb_t))));
  qp = ((mp_limb_t *) (__builtin_expect ((((un + 1) * sizeof (mp_limb_t)) < 65536) != 0, 1) ? __builtin_alloca((un + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (un + 1) * sizeof (mp_limb_t))));

  do { do {} while (0); if ((n) != 0) { mp_ptr __dst = (tp); mp_size_t __n = (n); do *__dst++ = 0; while (--__n); } } while (0);
  do { do {} while (0); do { do {} while (0); do {} while (0); __gmpn_copyi (tp + n, up, un); } while (0); } while (0);
  __gmpn_tdiv_qr (qp, rp, 0L, tp, un + n, mp, n);
  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
}





void
__gmpn_powm (mp_ptr rp, mp_srcptr bp, mp_size_t bn,
   mp_srcptr ep, mp_size_t en,
   mp_srcptr mp, mp_size_t n, mp_ptr tp)
{
  mp_limb_t ip[2], *mip;
  int cnt;
  mp_bitcnt_t ebi;
  int windowsize, this_windowsize;
  mp_limb_t expbits;
  mp_ptr pp, this_pp;
  mp_ptr b2p;
  long i;
  struct tmp_reentrant_t *__tmp_marker;

  do {} while (0);
  do {} while (0);

  __tmp_marker = 0;

  do { do {} while (0); (cnt) = __builtin_clzl (ep[en - 1]); } while (0);
  ebi = (mp_bitcnt_t) en * 32 - cnt;
# 178 "powm.c"
  windowsize = win_size (ebi);
# 194 "powm.c"
  if ((! ((63) == 0 || ((63) != (-(((long) ((~ (unsigned long) 0) ^ ((unsigned long) (~ (unsigned long) 0) >> 1)))+1)) && (n) >= (63)))))
    {
      mip = ip;
      do { mp_limb_t __n = (mp[0]); mp_limb_t __inv; do {} while (0); __inv = __gmp_binvert_limb_table[(__n/2) & 0x7F]; if ((32 - 0) > 8) __inv = 2 * __inv - __inv * __inv * __n; if ((32 - 0) > 16) __inv = 2 * __inv - __inv * __inv * __n; if ((32 - 0) > 32) __inv = 2 * __inv - __inv * __inv * __n; if ((32 - 0) > 64) { int __invbits = 64; do { __inv = 2 * __inv - __inv * __inv * __n; __invbits *= 2; } while (__invbits < (32 - 0)); } do {} while (0); (mip[0]) = __inv & ((~ ((mp_limb_t) (0))) >> 0); } while (0);
      mip[0] = -mip[0];
    }

  else
    {
      mip = ((mp_limb_t *) (__builtin_expect ((((n) * sizeof (mp_limb_t)) < 65536) != 0, 1) ? __builtin_alloca((n) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (n) * sizeof (mp_limb_t))));
      __gmpn_binvert (mip, mp, n, tp);
    }

  pp = ((mp_limb_t *) (__builtin_expect ((((n << (windowsize - 1)) * sizeof (mp_limb_t)) < 65536) != 0, 1) ? __builtin_alloca((n << (windowsize - 1)) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (n << (windowsize - 1)) * sizeof (mp_limb_t))));

  this_pp = pp;
  redcify (this_pp, bp, bn, mp, n);

  b2p = tp + 2*n;


  __gmpn_sqr (tp, this_pp, n);






  if ((! ((63) == 0 || ((63) != (-(((long) ((~ (unsigned long) 0) ^ ((unsigned long) (~ (unsigned long) 0) >> 1)))+1)) && (n) >= (63)))))
    __gmpn_redc_1 (b2p, tp, mp, n, mip[0]);

  else
    __gmpn_redc_n (b2p, tp, mp, n, mip);


  for (i = (1 << (windowsize - 1)) - 1; i > 0; i--)
    {
      __gmpn_mul_n (tp, this_pp, b2p, n);
      this_pp += n;






      if ((! ((63) == 0 || ((63) != (-(((long) ((~ (unsigned long) 0) ^ ((unsigned long) (~ (unsigned long) 0) >> 1)))+1)) && (n) >= (63)))))
 __gmpn_redc_1 (this_pp, tp, mp, n, mip[0]);

      else
 __gmpn_redc_n (this_pp, tp, mp, n, mip);
    }

  expbits = getbits (ep, ebi, windowsize);
  if (ebi < windowsize)
    ebi = 0;
  else
    ebi -= windowsize;

  do { do {} while (0); (cnt) = __builtin_ctzl (expbits); } while (0);
  ebi += cnt;
  expbits >>= cnt;

  do { do {} while (0); do { do {} while (0); do {} while (0); __gmpn_copyi (rp, pp + n * (expbits >> 1), n); } while (0); } while (0);
# 392 "powm.c"
  if (63 < 20)
    {
      if ((! ((63) == 0 || ((63) != (-(((long) ((~ (unsigned long) 0) ^ ((unsigned long) (~ (unsigned long) 0) >> 1)))+1)) && (n) >= (63)))))
 {






   while (ebi != 0) { while (((ep[(ebi - 1) / 32] >> (ebi - 1) % 32) & 1) == 0) { __gmpn_sqr_basecase (tp,rp,n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); ebi--; if (ebi == 0) goto done; } expbits = getbits (ep, ebi, windowsize); this_windowsize = windowsize; if (ebi < windowsize) { this_windowsize -= windowsize - ebi; ebi = 0; } else ebi -= windowsize; do { do {} while (0); (cnt) = __builtin_ctzl (expbits); } while (0); this_windowsize -= cnt; ebi += cnt; expbits >>= cnt; do { __gmpn_sqr_basecase (tp,rp,n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); this_windowsize--; } while (this_windowsize != 0); __gmpn_mul_basecase (tp,rp,n,pp + n * (expbits >> 1),n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); };
 }
      else if ((! ((20) == 0 || ((20) != (-(((long) ((~ (unsigned long) 0) ^ ((unsigned long) (~ (unsigned long) 0) >> 1)))+1)) && (n) >= (20)))))
 {






   while (ebi != 0) { while (((ep[(ebi - 1) / 32] >> (ebi - 1) % 32) & 1) == 0) { __gmpn_sqr_basecase (tp,rp,n); __gmpn_redc_n (rp, tp, mp, n, mip); ebi--; if (ebi == 0) goto done; } expbits = getbits (ep, ebi, windowsize); this_windowsize = windowsize; if (ebi < windowsize) { this_windowsize -= windowsize - ebi; ebi = 0; } else ebi -= windowsize; do { do {} while (0); (cnt) = __builtin_ctzl (expbits); } while (0); this_windowsize -= cnt; ebi += cnt; expbits >>= cnt; do { __gmpn_sqr_basecase (tp,rp,n); __gmpn_redc_n (rp, tp, mp, n, mip); this_windowsize--; } while (this_windowsize != 0); __gmpn_mul_basecase (tp,rp,n,pp + n * (expbits >> 1),n); __gmpn_redc_n (rp, tp, mp, n, mip); };
 }
      else
 {






   while (ebi != 0) { while (((ep[(ebi - 1) / 32] >> (ebi - 1) % 32) & 1) == 0) { __gmpn_sqr (tp,rp,n); __gmpn_redc_n (rp, tp, mp, n, mip); ebi--; if (ebi == 0) goto done; } expbits = getbits (ep, ebi, windowsize); this_windowsize = windowsize; if (ebi < windowsize) { this_windowsize -= windowsize - ebi; ebi = 0; } else ebi -= windowsize; do { do {} while (0); (cnt) = __builtin_ctzl (expbits); } while (0); this_windowsize -= cnt; ebi += cnt; expbits >>= cnt; do { __gmpn_sqr (tp,rp,n); __gmpn_redc_n (rp, tp, mp, n, mip); this_windowsize--; } while (this_windowsize != 0); __gmpn_mul_n (tp,rp,pp + n * (expbits >> 1),n); __gmpn_redc_n (rp, tp, mp, n, mip); };
 }
    }
  else
    {
      if ((! ((20) == 0 || ((20) != (-(((long) ((~ (unsigned long) 0) ^ ((unsigned long) (~ (unsigned long) 0) >> 1)))+1)) && (n) >= (20)))))
 {






   while (ebi != 0) { while (((ep[(ebi - 1) / 32] >> (ebi - 1) % 32) & 1) == 0) { __gmpn_sqr_basecase (tp,rp,n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); ebi--; if (ebi == 0) goto done; } expbits = getbits (ep, ebi, windowsize); this_windowsize = windowsize; if (ebi < windowsize) { this_windowsize -= windowsize - ebi; ebi = 0; } else ebi -= windowsize; do { do {} while (0); (cnt) = __builtin_ctzl (expbits); } while (0); this_windowsize -= cnt; ebi += cnt; expbits >>= cnt; do { __gmpn_sqr_basecase (tp,rp,n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); this_windowsize--; } while (this_windowsize != 0); __gmpn_mul_basecase (tp,rp,n,pp + n * (expbits >> 1),n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); };
 }
      else if ((! ((63) == 0 || ((63) != (-(((long) ((~ (unsigned long) 0) ^ ((unsigned long) (~ (unsigned long) 0) >> 1)))+1)) && (n) >= (63)))))
 {






   while (ebi != 0) { while (((ep[(ebi - 1) / 32] >> (ebi - 1) % 32) & 1) == 0) { __gmpn_sqr (tp,rp,n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); ebi--; if (ebi == 0) goto done; } expbits = getbits (ep, ebi, windowsize); this_windowsize = windowsize; if (ebi < windowsize) { this_windowsize -= windowsize - ebi; ebi = 0; } else ebi -= windowsize; do { do {} while (0); (cnt) = __builtin_ctzl (expbits); } while (0); this_windowsize -= cnt; ebi += cnt; expbits >>= cnt; do { __gmpn_sqr (tp,rp,n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); this_windowsize--; } while (this_windowsize != 0); __gmpn_mul_n (tp,rp,pp + n * (expbits >> 1),n); __gmpn_redc_1 (rp, tp, mp, n, mip[0]); };
 }
      else
 {






   while (ebi != 0) { while (((ep[(ebi - 1) / 32] >> (ebi - 1) % 32) & 1) == 0) { __gmpn_sqr (tp,rp,n); __gmpn_redc_n (rp, tp, mp, n, mip); ebi--; if (ebi == 0) goto done; } expbits = getbits (ep, ebi, windowsize); this_windowsize = windowsize; if (ebi < windowsize) { this_windowsize -= windowsize - ebi; ebi = 0; } else ebi -= windowsize; do { do {} while (0); (cnt) = __builtin_ctzl (expbits); } while (0); this_windowsize -= cnt; ebi += cnt; expbits >>= cnt; do { __gmpn_sqr (tp,rp,n); __gmpn_redc_n (rp, tp, mp, n, mip); this_windowsize--; } while (this_windowsize != 0); __gmpn_mul_n (tp,rp,pp + n * (expbits >> 1),n); __gmpn_redc_n (rp, tp, mp, n, mip); };
 }
    }


 done:

  do { do {} while (0); do { do {} while (0); do {} while (0); __gmpn_copyi (tp, rp, n); } while (0); } while (0);
  do { do {} while (0); if ((n) != 0) { mp_ptr __dst = (tp + n); mp_size_t __n = (n); do *__dst++ = 0; while (--__n); } } while (0);







  if ((! ((63) == 0 || ((63) != (-(((long) ((~ (unsigned long) 0) ^ ((unsigned long) (~ (unsigned long) 0) >> 1)))+1)) && (n) >= (63)))))
    __gmpn_redc_1 (rp, tp, mp, n, mip[0]);

  else
    __gmpn_redc_n (rp, tp, mp, n, mip);

  if (__gmpn_cmp (rp, mp, n) >= 0)
    __gmpn_sub_n (rp, rp, mp, n);

  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
}
