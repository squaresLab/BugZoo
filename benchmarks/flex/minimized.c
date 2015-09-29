typedef unsigned int size_t;

typedef long long __quad_t;

typedef long __off_t;

typedef __quad_t __off64_t;

struct _IO_FILE;

struct _IO_FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef void _IO_lock_t;

struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};

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

union dfaacc_union {
   int *dfaacc_set ;
   int dfaacc_state ;
};

typedef int __int32_t;

typedef unsigned char yytype_uint8;

typedef signed char yytype_int8;

typedef short yytype_int16;

union yyalloc {
   yytype_int16 yyss ;
   int yyvs ;
};

struct yy_buffer_state;

struct yy_buffer_state;

struct yy_buffer_state;

typedef struct yy_buffer_state *YY_BUFFER_STATE;

typedef unsigned int yy_size_t;

struct yy_buffer_state {
   FILE *yy_input_file ;
   char *yy_ch_buf ;
   char *yy_buf_pos ;
   yy_size_t yy_buf_size ;
   int yy_n_chars ;
   int yy_is_our_buffer ;
   int yy_is_interactive ;
   int yy_at_bol ;
   int yy_fill_buffer ;
   int yy_buffer_status ;
};

typedef unsigned char YY_CHAR;

typedef int yy_state_type;

struct hash_entry {
   struct hash_entry *prev ;
   struct hash_entry *next ;
   char *name ;
   char *str_val ;
   int int_val ;
};

typedef struct hash_entry **hash_table;

/* compiler builtin: 
   void __builtin_varargs_start(__builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin_strcmp(char const   * , char const   * ) ;  */

/* compiler builtin: 
   void *__builtin___memmove_chk(void * , void const   * , unsigned long  ,
                                 unsigned long  ) ;  */

/* compiler builtin: 
   char *__builtin_strpbrk(char const   * , char const   * ) ;  */

/* compiler builtin: 
   void *__builtin_memcpy(void * , void const   * , unsigned long  ) ;  */

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
   void *__builtin___memcpy_chk(void * , void const   * , unsigned long  ,
                                unsigned long  ) ;  */

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
   int __builtin___vsprintf_chk(char * , int  , unsigned long  ,
                                char const   * , __builtin_va_list  ) ;  */

/* compiler builtin: 
   char *__builtin___strncpy_chk(char * , char const   * , unsigned long  ,
                                 unsigned long  ) ;  */

/* compiler builtin: 
   float __builtin_log10f(float  ) ;  */

/* compiler builtin: 
   double __builtin_atan(double  ) ;  */

/* compiler builtin: 
   void *__builtin_alloca(unsigned long  ) ;  */

/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin_strncmp(char const   * , char const   * , unsigned long  ) ;  */

/* compiler builtin: 
   double __builtin_sin(double  ) ;  */

/* compiler builtin: 
   long double __builtin_logl(long double  ) ;  */

/* compiler builtin: 
   float __builtin_coshf(float  ) ;  */

/* compiler builtin: 
   void *__builtin___mempcpy_chk(void * , void const   * , unsigned long  ,
                                 unsigned long  ) ;  */

/* compiler builtin: 
   char *__builtin___strcat_chk(char * , char const   * , unsigned long  ) ;  */

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
   unsigned long __builtin_object_size(void * , int  ) ;  */

/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned long  , void * ) ;  */

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
   int __builtin___sprintf_chk(char * , int  , unsigned long  , char const   * 
                               , ...) ;  */

/* compiler builtin: 
   int __builtin___vprintf_chk(int  , char const   * , __builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin___snprintf_chk(char * , unsigned long  , int  ,
                                unsigned long  , char const   *  , ...) ;  */

/* compiler builtin: 
   long double __builtin_infl(void) ;  */

/* compiler builtin: 
   void *__builtin_mempcpy(void * , void const   * , unsigned long  ) ;  */

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
   int __builtin___vsnprintf_chk(char * , unsigned long  , int  ,
                                 unsigned long  , char const   * ,
                                 __builtin_va_list  ) ;  */

/* compiler builtin: 
   double __builtin_sinh(double  ) ;  */

/* compiler builtin: 
   int __builtin_ffsll(unsigned long long  ) ;  */

/* compiler builtin: 
   char *__builtin___strcpy_chk(char * , char const   * , unsigned long  ) ;  */

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
   char *__builtin___stpcpy_chk(char * , char const   * , unsigned long  ) ;  */

/* compiler builtin: 
   float __builtin_tanf(float  ) ;  */

/* compiler builtin: 
   int __builtin_parityll(unsigned long long  ) ;  */

/* compiler builtin: 
   float __builtin_ldexpf(float  , int  ) ;  */

/* compiler builtin: 
   int __builtin_types_compatible_p(unsigned long  , unsigned long  ) ;  */

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
   void *__builtin___memset_chk(void * , int  , unsigned long  , unsigned long  ) ;  */

/* compiler builtin: 
   char *__builtin___strncat_chk(char * , char const   * , unsigned long  ,
                                 unsigned long  ) ;  */

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
   char *__builtin_strncpy(char * , char const   * , unsigned long  ) ;  */

/* compiler builtin: 
   long double __builtin_powil(long double  , int  ) ;  */

/* compiler builtin: 
   float __builtin_cosf(float  ) ;  */

/* compiler builtin: 
   unsigned long __builtin_strspn(char const   * , char const   * ) ;  */

/* compiler builtin: 
   long double __builtin_modfl(long double  , long double * ) ;  */

/* compiler builtin: 
   int __builtin_parity(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_cosh(double  ) ;  */

/* compiler builtin: 
   char *__builtin_strncat(char * , char const   * , unsigned long  ) ;  */

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
   unsigned long __builtin_strcspn(char const   * , char const   * ) ;  */

/* compiler builtin: 
   int __builtin_ffsl(unsigned long  ) ;  */

/* compiler builtin: 
   float __builtin_nanf(char const   * ) ;  */

extern int _IO_putc(int __c , _IO_FILE *__fp ) ;

extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;

extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;

int csize  ;

int lastccl  ;

int *cclmap  ;

int *ccllen  ;

int *cclng  ;

int current_maxccls  ;

int current_max_ccl_tbl_size  ;

unsigned char *ccltbl  ;

int num_reallocs  ;

void *reallocate_array(void *array , int size , size_t element_size ) ;

void ccladd(int cclp , int ch ) ;

int cclinit(void) ;

void cclnegate(int cclp ) ;

void list_character_set(FILE *file , int *cset ) ;

void check_char(int c ) ;

char *readable_form(int c ) ;

void ccladd(int cclp , int ch ) 
{ int ind ;
  int len ;
  int newpos ;
  int i___0 ;
  void *tmp ;

  {
  check_char(ch);
  len = *(ccllen + cclp);
  ind = *(cclmap + cclp);
  i___0 = 0;
  while (i___0 < len) {
    if ((int )*(ccltbl + (ind + i___0)) == ch) {
      return;
    }
    i___0 ++;
  }
  newpos = ind + len;
  if (newpos >= current_max_ccl_tbl_size) {
    current_max_ccl_tbl_size += 250;
    num_reallocs ++;
    tmp = reallocate_array((void *)ccltbl, current_max_ccl_tbl_size,
                           (unsigned int )sizeof(unsigned char ));
    ccltbl = (unsigned char *)tmp;
  }
  *(ccllen + cclp) = len + 1;
  *(ccltbl + newpos) = (unsigned char )ch;
  return;
}
}

int cclinit(void) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  lastccl ++;
  if (lastccl >= current_maxccls) {
    current_maxccls += 100;
    num_reallocs ++;
    tmp = reallocate_array((void *)cclmap, current_maxccls,
                           (unsigned int )sizeof(int ));
    cclmap = (int *)tmp;
    tmp___0 = reallocate_array((void *)ccllen, current_maxccls,
                               (unsigned int )sizeof(int ));
    ccllen = (int *)tmp___0;
    tmp___1 = reallocate_array((void *)cclng, current_maxccls,
                               (unsigned int )sizeof(int ));
    cclng = (int *)tmp___1;
  }
  if (lastccl == 1) {
    *(cclmap + lastccl) = 0;
  } else {
    *(cclmap + lastccl) = *(cclmap + (lastccl - 1)) + *(ccllen + (lastccl - 1));
  }
  *(ccllen + lastccl) = 0;
  *(cclng + lastccl) = 0;
  return (lastccl);
}
}

void cclnegate(int cclp ) 
{ 

  {
  *(cclng + cclp) = 1;
  return;
}
}

void list_character_set(FILE *file , int *cset ) 
{ register int i___0 ;
  register int start_char ;
  char *tmp ;
  char *tmp___0 ;

  {
  _IO_putc('[', file);
  i___0 = 0;
  while (i___0 < csize) {
    if (*(cset + i___0)) {
      start_char = i___0;
      _IO_putc(' ', file);
      tmp = readable_form(i___0);
      fputs((char const   */* __restrict  */)((char const   *)tmp),
            (FILE */* __restrict  */)file);
      while (1) {
        i___0 ++;
        if (i___0 < csize) {
          if (! *(cset + i___0)) {
            break;
          }
        } else {
          break;
        }
      }
      if (i___0 - 1 > start_char) {
        tmp___0 = readable_form(i___0 - 1);
        fprintf((FILE */* __restrict  */)file,
                (char const   */* __restrict  */)"-%s", tmp___0);
      }
      _IO_putc(' ', file);
    }
    i___0 ++;
  }
  _IO_putc(']', file);
  return;
}
}

extern struct _IO_FILE *stderr ;

int trace  ;

int caseins  ;

int useecs  ;

int fulltbl  ;

int fullspd  ;

int backing_up_report  ;

int long_align  ;

int reject  ;

FILE *backing_up_file  ;

int onestate[500]  ;

int onesym[500]  ;

int onenext[500]  ;

int onedef[500]  ;

int onesp  ;

int num_rules  ;

int *transchar  ;

int *trans1  ;

int *trans2  ;

int *accptnum  ;

int *assoc_rule  ;

int *state_type  ;

int *rule_type  ;

int *rule_linenum  ;

int *rule_useful  ;

int variable_trailing_context_rules  ;

int numecs  ;

int ecgroup[257]  ;

int lastsc  ;

int *scset  ;

int *scbol  ;

int current_max_dfa_size  ;

int current_max_dfas  ;

int lastdfa  ;

int *base  ;

int *def  ;

int *nultrans  ;

int NUL_ec  ;

int **dss  ;

int *dfasiz  ;

union dfaacc_union *dfaacc  ;

int *accsiz  ;

int *dhash  ;

int numas  ;

int numsnpairs  ;

int end_of_buffer_state  ;

int hshcol  ;

int dfaeql  ;

int totnst  ;

int numuniq  ;

int numdup  ;

int hshsave  ;

int num_backing_up  ;

void *allocate_array(int size , size_t element_size ) ;

void flex_free(void *ptr ) ;

void check_for_backing_up(int ds , int *state ) ;

void check_trailing_context(int *nfa_states , int num_states , int *accset ,
                            int nacc ) ;

int *epsclosure(int *t , int *ns_addr , int *accset , int *nacc_addr ,
                int *hv_addr ) ;

void increase_max_dfas(void) ;

void ntod(void) ;

int snstods(int *sns , int numstates , int *accset , int nacc , int hashval ,
            int *newds_addr ) ;

void mkeccl(unsigned char *ccls , int lenccl , int *fwd , int *bck , int llsiz ,
            int NUL_mapping ) ;

void mkechar(int tch , int *fwd , int *bck ) ;

void bubble(int *v , int n ) ;

void dataend(void) ;

void dataflush(void) ;

void flexfatal(char const   *msg ) ;

void mk2data(int value ) ;

void out_str_dec(char const   *fmt , char const   *str , int n ) ;

void outn(char const   *str ) ;

void dumpnfa(int state1 ) ;

int mkbranch(int first , int second ) ;

void line_warning(char *str , int line ) ;

void bldtbl(int *state , int statenum , int totaltrans , int comstate ,
            int comfreq ) ;

void cmptmps(void) ;

void inittbl(void) ;

void mkdeftbl(void) ;

void mk1tbl(int state , int sym , int onenxt , int onedef___0 ) ;

void place_state(int *state , int statenum , int transnum ) ;

void stack1(int statenum , int sym , int nextstate , int deflink ) ;

void dump_associated_rules(FILE *file , int ds ) ;

void dump_transitions(FILE *file , int *state ) ;

void sympartition(int *ds , int numstates , int *symlist , int *duplist ) ;

int symfollowset(int *ds , int dsize , int transsym , int *nset ) ;

void check_for_backing_up(int ds , int *state ) 
{ 

  {
  if (reject) {
    if (! (dfaacc + ds)->dfaacc_set) {
      goto _L;
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
    if (! reject) {
      if (! (dfaacc + ds)->dfaacc_state) {
        _L: 
        num_backing_up ++;
        if (backing_up_report) {
          fprintf((FILE */* __restrict  */)backing_up_file,
                  (char const   */* __restrict  */)"State #%d is non-accepting -\n",
                  ds);
          dump_associated_rules(backing_up_file, ds);
          dump_transitions(backing_up_file, state);
          _IO_putc('\n', backing_up_file);
        }
      }
    }
  }
  return;
}
}

void check_trailing_context(int *nfa_states , int num_states , int *accset ,
                            int nacc ) 
{ register int i___0 ;
  register int j ;
  int ns ;
  register int type ;
  register int ar ;

  {
  i___0 = 1;
  while (i___0 <= num_states) {
    ns = *(nfa_states + i___0);
    type = *(state_type + ns);
    ar = *(assoc_rule + ns);
    if (! (type == 1)) {
      if (! (*(rule_type + ar) != 1)) {
        if (type == 2) {
          j = 1;
          while (j <= nacc) {
            if (*(accset + j) & 16384) {
              line_warning((char *)"dangerous trailing context",
                           *(rule_linenum + ar));
              return;
            }
            j ++;
          }
        }
      }
    }
    i___0 ++;
  }
  return;
}
}

void dump_associated_rules(FILE *file , int ds ) 
{ register int i___0 ;
  register int j ;
  register int num_associated_rules ;
  int rule_set[101] ;
  int *dset ;
  int size ;
  register int rule_num ;

  {
  num_associated_rules = 0;
  dset = *(dss + ds);
  size = *(dfasiz + ds);
  i___0 = 1;
  while (i___0 <= size) {
    rule_num = *(rule_linenum + *(assoc_rule + *(dset + i___0)));
    j = 1;
    while (j <= num_associated_rules) {
      if (rule_num == rule_set[j]) {
        break;
      }
      j ++;
    }
    if (j > num_associated_rules) {
      if (num_associated_rules < 100) {
        num_associated_rules ++;
        rule_set[num_associated_rules] = rule_num;
      }
    }
    i___0 ++;
  }
  bubble(rule_set, num_associated_rules);
  fprintf((FILE */* __restrict  */)file,
          (char const   */* __restrict  */)" associated rule line numbers:");
  i___0 = 1;
  while (i___0 <= num_associated_rules) {
    if (i___0 % 8 == 1) {
      _IO_putc('\n', file);
    }
    fprintf((FILE */* __restrict  */)file,
            (char const   */* __restrict  */)"\t%d", rule_set[i___0]);
    i___0 ++;
  }
  _IO_putc('\n', file);
  return;
}
}

void dump_transitions(FILE *file , int *state ) 
{ register int i___0 ;
  register int ec ;
  int out_char_set[256] ;

  {
  i___0 = 0;
  while (i___0 < csize) {
    if (ecgroup[i___0] < 0) {
      ec = - ecgroup[i___0];
    } else {
      ec = ecgroup[i___0];
    }
    out_char_set[i___0] = *(state + ec);
    i___0 ++;
  }
  fprintf((FILE */* __restrict  */)file,
          (char const   */* __restrict  */)" out-transitions: ");
  list_character_set(file, out_char_set);
  i___0 = 0;
  while (i___0 < csize) {
    out_char_set[i___0] = ! out_char_set[i___0];
    i___0 ++;
  }
  fprintf((FILE */* __restrict  */)file,
          (char const   */* __restrict  */)"\n jam-transitions: EOF ");
  list_character_set(file, out_char_set);
  _IO_putc('\n', file);
  return;
}
}

static int did_stk_init   = 0;

static int *stk  ;

int *epsclosure(int *t , int *ns_addr , int *accset , int *nacc_addr ,
                int *hv_addr ) 
{ register int stkpos ;
  register int ns ;
  register int tsp ;
  int numstates ;
  int nacc ;
  int hashval ;
  int transsym ;
  int nfaccnum ;
  int stkend ;
  int nstate ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;

  {
  numstates = *ns_addr;
  if (! did_stk_init) {
    tmp = allocate_array(current_max_dfa_size, (unsigned int )sizeof(int ));
    stk = (int *)tmp;
    did_stk_init = 1;
  }
  hashval = 0;
  stkend = hashval;
  nacc = stkend;
  nstate = 1;
  while (nstate <= numstates) {
    ns = *(t + nstate);
    if (! (*(trans1 + ns) < 0)) {
      stkend ++;
      if (stkend >= current_max_dfa_size) {
        current_max_dfa_size += 750;
        num_reallocs ++;
        tmp___0 = reallocate_array((void *)t, current_max_dfa_size,
                                   (unsigned int )sizeof(int ));
        t = (int *)tmp___0;
        tmp___1 = reallocate_array((void *)stk, current_max_dfa_size,
                                   (unsigned int )sizeof(int ));
        stk = (int *)tmp___1;
      }
      *(stk + stkend) = ns;
      *(trans1 + ns) -= 32001;
      nfaccnum = *(accptnum + ns);
      if (nfaccnum != 0) {
        nacc ++;
        *(accset + nacc) = nfaccnum;
      }
      hashval += ns;
    }
    nstate ++;
  }
  stkpos = 1;
  while (stkpos <= stkend) {
    ns = *(stk + stkpos);
    transsym = *(transchar + ns);
    if (transsym == 257) {
      tsp = *(trans1 + ns) + 32001;
      if (tsp != 0) {
        if (! (*(trans1 + tsp) < 0)) {
          stkend ++;
          if (stkend >= current_max_dfa_size) {
            current_max_dfa_size += 750;
            num_reallocs ++;
            tmp___2 = reallocate_array((void *)t, current_max_dfa_size,
                                       (unsigned int )sizeof(int ));
            t = (int *)tmp___2;
            tmp___3 = reallocate_array((void *)stk, current_max_dfa_size,
                                       (unsigned int )sizeof(int ));
            stk = (int *)tmp___3;
          }
          *(stk + stkend) = tsp;
          *(trans1 + tsp) -= 32001;
          nfaccnum = *(accptnum + tsp);
          if (nfaccnum != 0) {
            nacc ++;
            *(accset + nacc) = nfaccnum;
          }
          if (nfaccnum != 0) {
            goto _L;
          } else {
            if (*(transchar + tsp) != 257) {
              _L: 
              numstates ++;
              if (numstates >= current_max_dfa_size) {
                current_max_dfa_size += 750;
                num_reallocs ++;
                tmp___4 = reallocate_array((void *)t, current_max_dfa_size,
                                           (unsigned int )sizeof(int ));
                t = (int *)tmp___4;
                tmp___5 = reallocate_array((void *)stk, current_max_dfa_size,
                                           (unsigned int )sizeof(int ));
                stk = (int *)tmp___5;
              }
              *(t + numstates) = tsp;
              hashval += tsp;
            }
          }
        }
        tsp = *(trans2 + ns);
        if (tsp != 0) {
          if (! (*(trans1 + tsp) < 0)) {
            stkend ++;
            if (stkend >= current_max_dfa_size) {
              current_max_dfa_size += 750;
              num_reallocs ++;
              tmp___6 = reallocate_array((void *)t, current_max_dfa_size,
                                         (unsigned int )sizeof(int ));
              t = (int *)tmp___6;
              tmp___7 = reallocate_array((void *)stk, current_max_dfa_size,
                                         (unsigned int )sizeof(int ));
              stk = (int *)tmp___7;
            }
            *(stk + stkend) = tsp;
            *(trans1 + tsp) -= 32001;
            nfaccnum = *(accptnum + tsp);
            if (nfaccnum != 0) {
              nacc ++;
              *(accset + nacc) = nfaccnum;
            }
            if (nfaccnum != 0) {
              goto _L___0;
            } else {
              if (*(transchar + tsp) != 257) {
                _L___0: 
                numstates ++;
                if (numstates >= current_max_dfa_size) {
                  current_max_dfa_size += 750;
                  num_reallocs ++;
                  tmp___8 = reallocate_array((void *)t, current_max_dfa_size,
                                             (unsigned int )sizeof(int ));
                  t = (int *)tmp___8;
                  tmp___9 = reallocate_array((void *)stk, current_max_dfa_size,
                                             (unsigned int )sizeof(int ));
                  stk = (int *)tmp___9;
                }
                *(t + numstates) = tsp;
                hashval += tsp;
              }
            }
          }
        }
      }
    }
    stkpos ++;
  }
  stkpos = 1;
  while (stkpos <= stkend) {
    if (*(trans1 + *(stk + stkpos)) < 0) {
      *(trans1 + *(stk + stkpos)) += 32001;
    } else {
      flexfatal("consistency check failed in epsclosure()");
    }
    stkpos ++;
  }
  *ns_addr = numstates;
  *hv_addr = hashval;
  *nacc_addr = nacc;
  return (t);
}
}

void increase_max_dfas(void) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;

  {
  current_max_dfas += 1000;
  num_reallocs ++;
  tmp = reallocate_array((void *)base, current_max_dfas,
                         (unsigned int )sizeof(int ));
  base = (int *)tmp;
  tmp___0 = reallocate_array((void *)def, current_max_dfas,
                             (unsigned int )sizeof(int ));
  def = (int *)tmp___0;
  tmp___1 = reallocate_array((void *)dfasiz, current_max_dfas,
                             (unsigned int )sizeof(int ));
  dfasiz = (int *)tmp___1;
  tmp___2 = reallocate_array((void *)accsiz, current_max_dfas,
                             (unsigned int )sizeof(int ));
  accsiz = (int *)tmp___2;
  tmp___3 = reallocate_array((void *)dhash, current_max_dfas,
                             (unsigned int )sizeof(int ));
  dhash = (int *)tmp___3;
  tmp___4 = reallocate_array((void *)dss, current_max_dfas,
                             (unsigned int )sizeof(int *));
  dss = (int **)tmp___4;
  tmp___5 = reallocate_array((void *)dfaacc, current_max_dfas,
                             (unsigned int )sizeof(union dfaacc_union ));
  dfaacc = (union dfaacc_union *)tmp___5;
  if (nultrans) {
    tmp___6 = reallocate_array((void *)nultrans, current_max_dfas,
                               (unsigned int )sizeof(int ));
    nultrans = (int *)tmp___6;
  }
  return;
}
}

void ntod(void) 
{ int *accset ;
  int ds ;
  int nacc ;
  int newds ;
  int sym ;
  int hashval ;
  int numstates ;
  int dsize ;
  int num_full_table_rows ;
  int *nset ;
  int *dset ;
  int targptr ;
  int totaltrans ;
  int i___0 ;
  int comstate ;
  int comfreq ;
  int targ ;
  int symlist[257] ;
  int num_start_states ;
  int todo_head ;
  int todo_next ;
  int duplist[257] ;
  int state[257] ;
  int targfreq[257] ;
  int targstate[257] ;
  void *tmp ;
  void *tmp___0 ;
  int use_NUL_table ;
  int power_of_two ;
  void *tmp___1 ;
  char const   *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  register int j ;
  int tmp___6 ;

  {
  tmp = allocate_array(num_rules + 1, (unsigned int )sizeof(int ));
  accset = (int *)tmp;
  tmp___0 = allocate_array(current_max_dfa_size, (unsigned int )sizeof(int ));
  nset = (int *)tmp___0;
  todo_next = 0;
  todo_head = todo_next;
  i___0 = 0;
  while (i___0 <= csize) {
    duplist[i___0] = 0;
    symlist[i___0] = 0;
    i___0 ++;
  }
  i___0 = 0;
  while (i___0 <= num_rules) {
    *(accset + i___0) = 0;
    i___0 ++;
  }
  if (trace) {
    dumpnfa(*(scset + 1));
    fputs((char const   */* __restrict  */)"\n\nDFA Dump:\n\n",
          (FILE */* __restrict  */)stderr);
  }
  inittbl();
  if (! fullspd) {
    if (ecgroup[0] == numecs) {
      use_NUL_table = numecs == csize;
      if (fulltbl) {
        if (! use_NUL_table) {
          power_of_two = 1;
          while (power_of_two <= csize) {
            if (numecs == power_of_two) {
              use_NUL_table = 1;
              break;
            }
            power_of_two *= 2;
          }
        }
      }
      if (use_NUL_table) {
        tmp___1 = allocate_array(current_max_dfas, (unsigned int )sizeof(int ));
        nultrans = (int *)tmp___1;
      }
    }
  }
  if (fullspd) {
    i___0 = 0;
    while (i___0 <= numecs) {
      state[i___0] = 0;
      i___0 ++;
    }
    place_state(state, 0, 0);
    (dfaacc + 0)->dfaacc_state = 0;
  } else {
    if (fulltbl) {
      if (nultrans) {
        num_full_table_rows = numecs;
      } else {
        num_full_table_rows = numecs + 1;
      }
      if (long_align) {
        tmp___2 = "long";
      } else {
        tmp___2 = "short";
      }
      out_str_dec("static yyconst %s yy_nxt[][%d] =\n    {\n", tmp___2,
                  num_full_table_rows);
      outn("    {");
      i___0 = 0;
      while (i___0 < num_full_table_rows) {
        mk2data(0);
        i___0 ++;
      }
      dataflush();
      outn("    },\n");
    }
  }
  num_start_states = lastsc * 2;
  i___0 = 1;
  while (i___0 <= num_start_states) {
    numstates = 1;
    if (i___0 % 2 == 1) {
      *(nset + numstates) = *(scset + (i___0 / 2 + 1));
    } else {
      *(nset + numstates) = mkbranch(*(scbol + i___0 / 2), *(scset + i___0 / 2));
    }
    nset = epsclosure(nset, & numstates, accset, & nacc, & hashval);
    tmp___3 = snstods(nset, numstates, accset, nacc, hashval, & ds);
    if (tmp___3) {
      numas += nacc;
      totnst += numstates;
      todo_next ++;
      if (variable_trailing_context_rules) {
        if (nacc > 0) {
          check_trailing_context(nset, numstates, accset, nacc);
        }
      }
    }
    i___0 ++;
  }
  if (! fullspd) {
    tmp___4 = snstods(nset, 0, accset, 0, 0, & end_of_buffer_state);
    if (! tmp___4) {
      flexfatal("could not create unique end-of-buffer state");
    }
    numas ++;
    num_start_states ++;
    todo_next ++;
  }
  while (todo_head < todo_next) {
    targptr = 0;
    totaltrans = 0;
    i___0 = 1;
    while (i___0 <= numecs) {
      state[i___0] = 0;
      i___0 ++;
    }
    todo_head ++;
    ds = todo_head;
    dset = *(dss + ds);
    dsize = *(dfasiz + ds);
    if (trace) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"state # %d:\n", ds);
    }
    sympartition(dset, dsize, symlist, duplist);
    sym = 1;
    while (sym <= numecs) {
      if (symlist[sym]) {
        symlist[sym] = 0;
        if (duplist[sym] == 0) {
          numstates = symfollowset(dset, dsize, sym, nset);
          nset = epsclosure(nset, & numstates, accset, & nacc, & hashval);
          tmp___5 = snstods(nset, numstates, accset, nacc, hashval, & newds);
          if (tmp___5) {
            totnst += numstates;
            todo_next ++;
            numas += nacc;
            if (variable_trailing_context_rules) {
              if (nacc > 0) {
                check_trailing_context(nset, numstates, accset, nacc);
              }
            }
          }
          state[sym] = newds;
          if (trace) {
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"\t%d\t%d\n", sym, newds);
          }
          targptr ++;
          targfreq[targptr] = 1;
          targstate[targptr] = newds;
          numuniq ++;
        } else {
          targ = state[duplist[sym]];
          state[sym] = targ;
          if (trace) {
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"\t%d\t%d\n", sym, targ);
          }
          i___0 = 0;
          while (1) {
            i___0 ++;
            if (! (targstate[i___0] != targ)) {
              break;
            }
          }
          (targfreq[i___0]) ++;
          numdup ++;
        }
        totaltrans ++;
        duplist[sym] = 0;
      }
      sym ++;
    }
    if (caseins) {
      if (! useecs) {
        i___0 = 'A';
        j = 'a';
        while (i___0 <= 90) {
          if (state[i___0] == 0) {
            if (state[j] != 0) {
              totaltrans ++;
            } else {
              goto _L;
            }
          } else {
            _L: 
            if (state[i___0] != 0) {
              if (state[j] == 0) {
                totaltrans --;
              }
            }
          }
          state[i___0] = state[j];
          i___0 ++;
          j ++;
        }
      }
    }
    numsnpairs += totaltrans;
    if (ds > num_start_states) {
      check_for_backing_up(ds, state);
    }
    if (nultrans) {
      *(nultrans + ds) = state[NUL_ec];
      state[NUL_ec] = 0;
    }
    if (fulltbl) {
      outn("    {");
      if (ds == end_of_buffer_state) {
        mk2data(- end_of_buffer_state);
      } else {
        mk2data(end_of_buffer_state);
      }
      i___0 = 1;
      while (i___0 < num_full_table_rows) {
        if (state[i___0]) {
          tmp___6 = state[i___0];
        } else {
          tmp___6 = - ds;
        }
        mk2data(tmp___6);
        i___0 ++;
      }
      dataflush();
      outn("    },\n");
    } else {
      if (fullspd) {
        place_state(state, ds, totaltrans);
      } else {
        if (ds == end_of_buffer_state) {
          stack1(ds, 0, 0, -32766);
        } else {
          comfreq = 0;
          comstate = 0;
          i___0 = 1;
          while (i___0 <= targptr) {
            if (targfreq[i___0] > comfreq) {
              comfreq = targfreq[i___0];
              comstate = targstate[i___0];
            }
            i___0 ++;
          }
          bldtbl(state, ds, totaltrans, comstate, comfreq);
        }
      }
    }
  }
  if (fulltbl) {
    dataend();
  } else {
    if (! fullspd) {
      cmptmps();
      while (onesp > 0) {
        mk1tbl(onestate[onesp], onesym[onesp], onenext[onesp], onedef[onesp]);
        onesp --;
      }
      mkdeftbl();
    }
  }
  flex_free((void *)accset);
  flex_free((void *)nset);
  return;
}
}

int snstods(int *sns , int numstates , int *accset , int nacc , int hashval ,
            int *newds_addr ) 
{ int didsort ;
  register int i___0 ;
  register int j ;
  int newds ;
  int *oldsns ;
  void *tmp ;
  void *tmp___0 ;

  {
  didsort = 0;
  i___0 = 1;
  while (i___0 <= lastdfa) {
    if (hashval == *(dhash + i___0)) {
      if (numstates == *(dfasiz + i___0)) {
        oldsns = *(dss + i___0);
        if (! didsort) {
          bubble(sns, numstates);
          didsort = 1;
        }
        j = 1;
        while (j <= numstates) {
          if (*(sns + j) != *(oldsns + j)) {
            break;
          }
          j ++;
        }
        if (j > numstates) {
          dfaeql ++;
          *newds_addr = i___0;
          return (0);
        }
        hshcol ++;
      } else {
        hshsave ++;
      }
    }
    i___0 ++;
  }
  lastdfa ++;
  if (lastdfa >= current_max_dfas) {
    increase_max_dfas();
  }
  newds = lastdfa;
  tmp = allocate_array(numstates + 1, (unsigned int )sizeof(int ));
  *(dss + newds) = (int *)tmp;
  if (! didsort) {
    bubble(sns, numstates);
  }
  i___0 = 1;
  while (i___0 <= numstates) {
    *(*(dss + newds) + i___0) = *(sns + i___0);
    i___0 ++;
  }
  *(dfasiz + newds) = numstates;
  *(dhash + newds) = hashval;
  if (nacc == 0) {
    if (reject) {
      (dfaacc + newds)->dfaacc_set = (int *)0;
    } else {
      (dfaacc + newds)->dfaacc_state = 0;
    }
    *(accsiz + newds) = 0;
  } else {
    if (reject) {
      bubble(accset, nacc);
      tmp___0 = allocate_array(nacc + 1, (unsigned int )sizeof(int ));
      (dfaacc + newds)->dfaacc_set = (int *)tmp___0;
      i___0 = 1;
      while (i___0 <= nacc) {
        *((dfaacc + newds)->dfaacc_set + i___0) = *(accset + i___0);
        if (*(accset + i___0) <= num_rules) {
          *(rule_useful + *(accset + i___0)) = 1;
        }
        i___0 ++;
      }
      *(accsiz + newds) = nacc;
    } else {
      j = num_rules + 1;
      i___0 = 1;
      while (i___0 <= nacc) {
        if (*(accset + i___0) < j) {
          j = *(accset + i___0);
        }
        i___0 ++;
      }
      (dfaacc + newds)->dfaacc_state = j;
      if (j <= num_rules) {
        *(rule_useful + j) = 1;
      }
    }
  }
  *newds_addr = newds;
  return (1);
}
}

int symfollowset(int *ds , int dsize , int transsym , int *nset ) 
{ int ns ;
  int tsp ;
  int sym ;
  int i___0 ;
  int j ;
  int lenccl ;
  int ch ;
  int numstates ;
  int ccllist ;
  int tmp ;

  {
  numstates = 0;
  i___0 = 1;
  while (i___0 <= dsize) {
    ns = *(ds + i___0);
    sym = *(transchar + ns);
    tsp = *(trans1 + ns);
    if (sym < 0) {
      sym = - sym;
      ccllist = *(cclmap + sym);
      lenccl = *(ccllen + sym);
      if (*(cclng + sym)) {
        j = 0;
        while (j < lenccl) {
          ch = (int )*(ccltbl + (ccllist + j));
          if (ch == 0) {
            ch = NUL_ec;
          }
          if (ch > transsym) {
            break;
          } else {
            if (ch == transsym) {
              goto bottom;
            }
          }
          j ++;
        }
        numstates ++;
        *(nset + numstates) = tsp;
      } else {
        j = 0;
        while (j < lenccl) {
          ch = (int )*(ccltbl + (ccllist + j));
          if (ch == 0) {
            ch = NUL_ec;
          }
          if (ch > transsym) {
            break;
          } else {
            if (ch == transsym) {
              numstates ++;
              *(nset + numstates) = tsp;
              break;
            }
          }
          j ++;
        }
      }
    } else {
      if (sym >= 65) {
        if (sym <= 90) {
          if (caseins) {
            flexfatal("consistency check failed in symfollowset");
          } else {
            goto _L___0;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0: 
        if (! (sym == 257)) {
          if (ecgroup[sym] < 0) {
            tmp = - ecgroup[sym];
          } else {
            tmp = ecgroup[sym];
          }
          if (tmp == transsym) {
            numstates ++;
            *(nset + numstates) = tsp;
          }
        }
      }
    }
    bottom: 
    i___0 ++;
  }
  return (numstates);
}
}

void sympartition(int *ds , int numstates , int *symlist , int *duplist ) 
{ int tch ;
  int i___0 ;
  int j ;
  int k ;
  int ns ;
  int dupfwd[257] ;
  int lenccl ;
  int cclp ;
  int ich ;
  int ec ;

  {
  i___0 = 1;
  while (i___0 <= numecs) {
    *(duplist + i___0) = i___0 - 1;
    dupfwd[i___0] = i___0 + 1;
    i___0 ++;
  }
  *(duplist + 1) = 0;
  dupfwd[numecs] = 0;
  i___0 = 1;
  while (i___0 <= numstates) {
    ns = *(ds + i___0);
    tch = *(transchar + ns);
    if (tch != 257) {
      if (tch < - lastccl) {
        flexfatal("bad transition character detected in sympartition()");
      } else {
        if (tch >= csize) {
          flexfatal("bad transition character detected in sympartition()");
        }
      }
      if (tch >= 0) {
        ec = ecgroup[tch];
        mkechar(ec, dupfwd, duplist);
        *(symlist + ec) = 1;
      } else {
        tch = - tch;
        lenccl = *(ccllen + tch);
        cclp = *(cclmap + tch);
        mkeccl(ccltbl + cclp, lenccl, dupfwd, duplist, numecs, NUL_ec);
        if (*(cclng + tch)) {
          j = 0;
          k = 0;
          while (k < lenccl) {
            ich = (int )*(ccltbl + (cclp + k));
            if (ich == 0) {
              ich = NUL_ec;
            }
            j ++;
            while (j < ich) {
              *(symlist + j) = 1;
              j ++;
            }
            k ++;
          }
          j ++;
          while (j <= numecs) {
            *(symlist + j) = 1;
            j ++;
          }
        } else {
          k = 0;
          while (k < lenccl) {
            ich = (int )*(ccltbl + (cclp + k));
            if (ich == 0) {
              ich = NUL_ec;
            }
            *(symlist + ich) = 1;
            k ++;
          }
        }
      }
    }
    i___0 ++;
  }
  return;
}
}

void ccl2ecl(void) ;

int cre8ecs(int *fwd , int *bck , int num ) ;

void ccl2ecl(void) 
{ int i___0 ;
  int ich ;
  int newlen ;
  int cclp ;
  int ccls ;
  int cclmec ;

  {
  i___0 = 1;
  while (i___0 <= lastccl) {
    newlen = 0;
    cclp = *(cclmap + i___0);
    ccls = 0;
    while (ccls < *(ccllen + i___0)) {
      ich = (int )*(ccltbl + (cclp + ccls));
      cclmec = ecgroup[ich];
      if (cclmec > 0) {
        *(ccltbl + (cclp + newlen)) = (unsigned char )cclmec;
        newlen ++;
      }
      ccls ++;
    }
    *(ccllen + i___0) = newlen;
    i___0 ++;
  }
  return;
}
}

int cre8ecs(int *fwd , int *bck , int num ) 
{ int i___0 ;
  int j ;
  int numcl ;

  {
  numcl = 0;
  i___0 = 1;
  while (i___0 <= num) {
    if (*(bck + i___0) == 0) {
      numcl ++;
      *(bck + i___0) = numcl;
      j = *(fwd + i___0);
      while (j != 0) {
        *(bck + j) = - numcl;
        j = *(fwd + j);
      }
    }
    i___0 ++;
  }
  return (numcl);
}
}

static unsigned char cclflags[256]  ;

void mkeccl(unsigned char *ccls , int lenccl , int *fwd , int *bck , int llsiz ,
            int NUL_mapping ) 
{ int cclp ;
  int oldec ;
  int newec ;
  int cclm ;
  int i___0 ;
  int j ;
  register int ccl_char ;

  {
  cclp = 0;
  while (cclp < lenccl) {
    cclm = (int )*(ccls + cclp);
    if (NUL_mapping) {
      if (cclm == 0) {
        cclm = NUL_mapping;
      }
    }
    oldec = *(bck + cclm);
    newec = cclm;
    j = cclp + 1;
    i___0 = *(fwd + cclm);
    while (1) {
      if (i___0 != 0) {
        if (! (i___0 <= llsiz)) {
          break;
        }
      } else {
        break;
      }
      while (j < lenccl) {
        if (NUL_mapping) {
          if ((int )*(ccls + j) == 0) {
            ccl_char = NUL_mapping;
          } else {
            ccl_char = (int )*(ccls + j);
          }
        } else {
          ccl_char = (int )*(ccls + j);
        }
        if (ccl_char > i___0) {
          break;
        }
        if (ccl_char == i___0) {
          if (! cclflags[j]) {
            *(bck + i___0) = newec;
            *(fwd + newec) = i___0;
            newec = i___0;
            cclflags[j] = (unsigned char)1;
            goto next_pt;
          }
        }
        j ++;
      }
      *(bck + i___0) = oldec;
      if (oldec != 0) {
        *(fwd + oldec) = i___0;
      }
      oldec = i___0;
      next_pt: 
      i___0 = *(fwd + i___0);
    }
    if (*(bck + cclm) != 0) {
      *(bck + cclm) = 0;
      *(fwd + oldec) = 0;
    } else {
      if (oldec != *(bck + cclm)) {
        *(bck + cclm) = 0;
        *(fwd + oldec) = 0;
      }
    }
    *(fwd + newec) = 0;
    cclp ++;
    while (1) {
      if (cclflags[cclp]) {
        if (! (cclp < lenccl)) {
          break;
        }
      } else {
        break;
      }
      cclflags[cclp] = (unsigned char)0;
      cclp ++;
    }
  }
  return;
}
}

void mkechar(int tch , int *fwd , int *bck ) 
{ 

  {
  if (*(fwd + tch) != 0) {
    *(bck + *(fwd + tch)) = *(bck + tch);
  }
  if (*(bck + tch) != 0) {
    *(fwd + *(bck + tch)) = *(fwd + tch);
  }
  *(fwd + tch) = 0;
  *(bck + tch) = 0;
  return;
}
}

extern struct _IO_FILE *stdout ;

extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;

extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;

int ddebug  ;

int interactive  ;

int do_yylineno  ;

int usemecs  ;

int C_plus_plus  ;

int use_read  ;

int yytext_is_array  ;

int yymore_used  ;

int real_reject  ;

char *action_array  ;

int defs1_offset  ;

int prolog_offset  ;

int action_offset  ;

int numtemps  ;

int tecbck[257]  ;

int *sceof  ;

char **scname  ;

int current_max_xpairs  ;

int *nxt  ;

int *chk  ;

int tblend  ;

int jambase  ;

int jamstate  ;

int sectnum  ;

int nummt  ;

int tmpuses  ;

int bol_needed  ;

void do_indent(void) ;

void gen_backing_up(void) ;

void gen_bu_action(void) ;

void genctbl(void) ;

void gen_find_action(void) ;

void genftbl(void) ;

void gen_next_compressed_state(char *char_map ) ;

void gen_next_match(void) ;

void gen_next_state(int worry_about_NULs ) ;

void gen_NUL_trans(void) ;

void gen_start_state(void) ;

void gentabs(void) ;

void indent_put2s(char *fmt , char *arg ) ;

void indent_puts(char *str ) ;

void make_tables(void) ;

unsigned char clower(int c ) ;

void line_directive_out(FILE *output_file , int do_infile ) ;

void mkdata(int value ) ;

void out(char const   *str ) ;

void out_dec(char const   *fmt , int n ) ;

void out_hex(char const   *fmt , unsigned int x ) ;

void out_str(char const   *fmt , char const   *str ) ;

void outc(int c ) ;

void skelout(void) ;

void transition_struct_out(int element_v , int element_n ) ;

int flexscan(void) ;

void expand_nxt_chk(void) ;

void genecs(void) ;

static int indent_level   = 0;

static char C_int_decl[40]   = 
  {(char )'s', (char )'t', (char )'a', (char )'t', (char )'i', (char )'c',
   (char )' ', (char )'y', (char )'y', (char )'c', (char )'o', (char )'n',
   (char )'s', (char )'t', (char )' ', (char )'i', (char )'n', (char )'t',
   (char )' ', (char )'%', (char )'s', (char )'[', (char )'%', (char )'d',
   (char )']', (char )' ', (char )'=', (char )'\n', (char )' ', (char )' ',
   (char )' ', (char )' ', (char )'{', (char )' ', (char )' ', (char )' ',
   (char )'0', (char )',', (char )'\n', (char )'\000'};

static char C_short_decl[46]   = 
  {(char )'s', (char )'t', (char )'a', (char )'t', (char )'i', (char )'c',
   (char )' ', (char )'y', (char )'y', (char )'c', (char )'o', (char )'n',
   (char )'s', (char )'t', (char )' ', (char )'s', (char )'h', (char )'o',
   (char )'r', (char )'t', (char )' ', (char )'i', (char )'n', (char )'t',
   (char )' ', (char )'%', (char )'s', (char )'[', (char )'%', (char )'d',
   (char )']', (char )' ', (char )'=', (char )'\n', (char )' ', (char )' ',
   (char )' ', (char )' ', (char )'{', (char )' ', (char )' ', (char )' ',
   (char )'0', (char )',', (char )'\n', (char )'\000'};

static char C_long_decl[45]   = 
  {(char )'s', (char )'t', (char )'a', (char )'t', (char )'i', (char )'c',
   (char )' ', (char )'y', (char )'y', (char )'c', (char )'o', (char )'n',
   (char )'s', (char )'t', (char )' ', (char )'l', (char )'o', (char )'n',
   (char )'g', (char )' ', (char )'i', (char )'n', (char )'t', (char )' ',
   (char )'%', (char )'s', (char )'[', (char )'%', (char )'d', (char )']',
   (char )' ', (char )'=', (char )'\n', (char )' ', (char )' ', (char )' ',
   (char )' ', (char )'{', (char )' ', (char )' ', (char )' ', (char )'0',
   (char )',', (char )'\n', (char )'\000'};

static char C_state_decl[50]   = 
  {(char )'s', (char )'t', (char )'a', (char )'t', (char )'i', (char )'c',
   (char )' ', (char )'y', (char )'y', (char )'c', (char )'o', (char )'n',
   (char )'s', (char )'t', (char )' ', (char )'y', (char )'y', (char )'_',
   (char )'s', (char )'t', (char )'a', (char )'t', (char )'e', (char )'_',
   (char )'t', (char )'y', (char )'p', (char )'e', (char )' ', (char )'%',
   (char )'s', (char )'[', (char )'%', (char )'d', (char )']', (char )' ',
   (char )'=', (char )'\n', (char )' ', (char )' ', (char )' ', (char )' ',
   (char )'{', (char )' ', (char )' ', (char )' ', (char )'0', (char )',',
   (char )'\n', (char )'\000'};

void do_indent(void) 
{ register int i___0 ;

  {
  i___0 = indent_level * 8;
  while (i___0 >= 8) {
    outc('\t');
    i___0 -= 8;
  }
  while (i___0 > 0) {
    outc(' ');
    i___0 --;
  }
  return;
}
}

void gen_backing_up(void) 
{ 

  {
  if (reject) {
    return;
  } else {
    if (num_backing_up == 0) {
      return;
    }
  }
  if (fullspd) {
    indent_puts((char *)"if ( yy_current_state[-1].yy_nxt )");
  } else {
    indent_puts((char *)"if ( yy_accept[yy_current_state] )");
  }
  indent_level ++;
  indent_puts((char *)"{");
  indent_puts((char *)"yy_last_accepting_state = yy_current_state;");
  indent_puts((char *)"yy_last_accepting_cpos = yy_cp;");
  indent_puts((char *)"}");
  indent_level --;
  return;
}
}

void gen_bu_action(void) 
{ 

  {
  if (reject) {
    return;
  } else {
    if (num_backing_up == 0) {
      return;
    }
  }
  indent_level = 3;
  indent_puts((char *)"case 0: /* must back up */");
  indent_puts((char *)"/* undo the effects of YY_DO_BEFORE_ACTION */");
  indent_puts((char *)"*yy_cp = yy_hold_char;");
  if (fullspd) {
    indent_puts((char *)"yy_cp = yy_last_accepting_cpos + 1;");
  } else {
    if (fulltbl) {
      indent_puts((char *)"yy_cp = yy_last_accepting_cpos + 1;");
    } else {
      indent_puts((char *)"yy_cp = yy_last_accepting_cpos;");
    }
  }
  indent_puts((char *)"yy_current_state = yy_last_accepting_state;");
  indent_puts((char *)"goto yy_find_action;");
  outc('\n');
  indent_level = 0;
  return;
}
}

void genctbl(void) 
{ register int i___0 ;
  int end_of_buffer_action ;
  int anum ;
  int offset ;

  {
  end_of_buffer_action = num_rules + 1;
  out_dec("static yyconst struct yy_trans_info yy_transition[%d] =\n",
          (tblend + numecs) + 1);
  outn("    {");
  while (tblend + 2 >= current_max_xpairs) {
    expand_nxt_chk();
  }
  while (lastdfa + 1 >= current_max_dfas) {
    increase_max_dfas();
  }
  *(base + (lastdfa + 1)) = tblend + 2;
  *(nxt + (tblend + 1)) = end_of_buffer_action;
  *(chk + (tblend + 1)) = numecs + 1;
  *(chk + (tblend + 2)) = 1;
  *(nxt + (tblend + 2)) = 0;
  i___0 = 0;
  while (i___0 <= lastdfa) {
    anum = (dfaacc + i___0)->dfaacc_state;
    offset = *(base + i___0);
    *(chk + offset) = -1;
    *(chk + (offset - 1)) = -2;
    *(nxt + (offset - 1)) = anum;
    i___0 ++;
  }
  i___0 = 0;
  while (i___0 <= tblend) {
    if (*(chk + i___0) == -1) {
      transition_struct_out(0, *(base + (lastdfa + 1)) - i___0);
    } else {
      if (*(chk + i___0) == -2) {
        transition_struct_out(0, *(nxt + i___0));
      } else {
        if (*(chk + i___0) > numecs) {
          transition_struct_out(0, 0);
        } else {
          if (*(chk + i___0) == 0) {
            transition_struct_out(0, 0);
          } else {
            transition_struct_out(*(chk + i___0),
                                  *(base + *(nxt + i___0)) - (i___0 - *(chk + i___0)));
          }
        }
      }
    }
    i___0 ++;
  }
  transition_struct_out(*(chk + (tblend + 1)), *(nxt + (tblend + 1)));
  transition_struct_out(*(chk + (tblend + 2)), *(nxt + (tblend + 2)));
  outn("    };\n");
  out_dec("static yyconst struct yy_trans_info *yy_start_state_list[%d] =\n",
          lastsc * 2 + 1);
  outn("    {");
  i___0 = 0;
  while (i___0 <= lastsc * 2) {
    out_dec("    &yy_transition[%d],\n", *(base + i___0));
    i___0 ++;
  }
  dataend();
  if (useecs) {
    genecs();
  }
  return;
}
}

void genecs(void) 
{ register int i___0 ;
  register int j ;
  int numrows ;
  unsigned char tmp ;
  char *tmp___0 ;

  {
  out_str_dec((char const   *)(C_int_decl), "yy_ec", csize);
  i___0 = 1;
  while (i___0 < csize) {
    if (caseins) {
      if (i___0 >= 65) {
        if (i___0 <= 90) {
          tmp = clower(i___0);
          ecgroup[i___0] = ecgroup[tmp];
        }
      }
    }
    if (ecgroup[i___0] < 0) {
      ecgroup[i___0] = - ecgroup[i___0];
    } else {
      ecgroup[i___0] = ecgroup[i___0];
    }
    mkdata(ecgroup[i___0]);
    i___0 ++;
  }
  dataend();
  if (trace) {
    fputs((char const   */* __restrict  */)"\n\nEquivalence Classes:\n\n",
          (FILE */* __restrict  */)stderr);
    numrows = csize / 8;
    j = 0;
    while (j < numrows) {
      i___0 = j;
      while (i___0 < csize) {
        tmp___0 = readable_form(i___0);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%4s = %-2d", tmp___0,
                ecgroup[i___0]);
        _IO_putc(' ', stderr);
        i___0 += numrows;
      }
      _IO_putc('\n', stderr);
      j ++;
    }
  }
  return;
}
}

void gen_find_action(void) 
{ 

  {
  if (fullspd) {
    indent_puts((char *)"yy_act = yy_current_state[-1].yy_nxt;");
  } else {
    if (fulltbl) {
      indent_puts((char *)"yy_act = yy_accept[yy_current_state];");
    } else {
      if (reject) {
        indent_puts((char *)"yy_current_state = *--yy_state_ptr;");
        indent_puts((char *)"yy_lp = yy_accept[yy_current_state];");
        outn("find_rule: /* we branch to this label when backing up */");
        indent_puts((char *)"for ( ; ; ) /* until we find what rule we matched */");
        indent_level ++;
        indent_puts((char *)"{");
        indent_puts((char *)"if ( yy_lp && yy_lp < yy_accept[yy_current_state + 1] )");
        indent_level ++;
        indent_puts((char *)"{");
        indent_puts((char *)"yy_act = yy_acclist[yy_lp];");
        if (variable_trailing_context_rules) {
          indent_puts((char *)"if ( yy_act & YY_TRAILING_HEAD_MASK ||");
          indent_puts((char *)"     yy_looking_for_trail_begin )");
          indent_level ++;
          indent_puts((char *)"{");
          indent_puts((char *)"if ( yy_act == yy_looking_for_trail_begin )");
          indent_level ++;
          indent_puts((char *)"{");
          indent_puts((char *)"yy_looking_for_trail_begin = 0;");
          indent_puts((char *)"yy_act &= ~YY_TRAILING_HEAD_MASK;");
          indent_puts((char *)"break;");
          indent_puts((char *)"}");
          indent_level --;
          indent_puts((char *)"}");
          indent_level --;
          indent_puts((char *)"else if ( yy_act & YY_TRAILING_MASK )");
          indent_level ++;
          indent_puts((char *)"{");
          indent_puts((char *)"yy_looking_for_trail_begin = yy_act & ~YY_TRAILING_MASK;");
          indent_puts((char *)"yy_looking_for_trail_begin |= YY_TRAILING_HEAD_MASK;");
          if (real_reject) {
            indent_puts((char *)"yy_full_match = yy_cp;");
            indent_puts((char *)"yy_full_state = yy_state_ptr;");
            indent_puts((char *)"yy_full_lp = yy_lp;");
          }
          indent_puts((char *)"}");
          indent_level --;
          indent_puts((char *)"else");
          indent_level ++;
          indent_puts((char *)"{");
          indent_puts((char *)"yy_full_match = yy_cp;");
          indent_puts((char *)"yy_full_state = yy_state_ptr;");
          indent_puts((char *)"yy_full_lp = yy_lp;");
          indent_puts((char *)"break;");
          indent_puts((char *)"}");
          indent_level --;
          indent_puts((char *)"++yy_lp;");
          indent_puts((char *)"goto find_rule;");
        } else {
          indent_level ++;
          indent_puts((char *)"{");
          indent_puts((char *)"yy_full_match = yy_cp;");
          indent_puts((char *)"break;");
          indent_puts((char *)"}");
          indent_level --;
        }
        indent_puts((char *)"}");
        indent_level --;
        indent_puts((char *)"--yy_cp;");
        indent_puts((char *)"yy_current_state = *--yy_state_ptr;");
        indent_puts((char *)"yy_lp = yy_accept[yy_current_state];");
        indent_puts((char *)"}");
        indent_level --;
      } else {
        indent_puts((char *)"yy_act = yy_accept[yy_current_state];");
        if (interactive) {
          if (! reject) {
            indent_puts((char *)"if ( yy_act == 0 )");
            indent_level ++;
            indent_puts((char *)"{ /* have to back up */");
            indent_puts((char *)"yy_cp = yy_last_accepting_cpos;");
            indent_puts((char *)"yy_current_state = yy_last_accepting_state;");
            indent_puts((char *)"yy_act = yy_accept[yy_current_state];");
            indent_puts((char *)"}");
            indent_level --;
          }
        }
      }
    }
  }
  return;
}
}

void genftbl(void) 
{ register int i___0 ;
  int end_of_buffer_action ;
  char *tmp ;
  register int anum ;

  {
  end_of_buffer_action = num_rules + 1;
  if (long_align) {
    tmp = C_long_decl;
  } else {
    tmp = C_short_decl;
  }
  out_str_dec((char const   *)tmp, "yy_accept", lastdfa + 1);
  (dfaacc + end_of_buffer_state)->dfaacc_state = end_of_buffer_action;
  i___0 = 1;
  while (i___0 <= lastdfa) {
    anum = (dfaacc + i___0)->dfaacc_state;
    mkdata(anum);
    if (trace) {
      if (anum) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"state # %d accepts: [%d]\n",
                i___0, anum);
      }
    }
    i___0 ++;
  }
  dataend();
  if (useecs) {
    genecs();
  }
  return;
}
}

void gen_next_compressed_state(char *char_map ) 
{ 

  {
  indent_put2s((char *)"register YY_CHAR yy_c = %s;", char_map);
  gen_backing_up();
  indent_puts((char *)"while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )");
  indent_level ++;
  indent_puts((char *)"{");
  indent_puts((char *)"yy_current_state = (int) yy_def[yy_current_state];");
  if (usemecs) {
    do_indent();
    out_dec("if ( yy_current_state >= %d )\n", lastdfa + 2);
    indent_level ++;
    indent_puts((char *)"yy_c = yy_meta[(unsigned int) yy_c];");
    indent_level --;
  }
  indent_puts((char *)"}");
  indent_level --;
  indent_puts((char *)"yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];");
  return;
}
}

void gen_next_match(void) 
{ char *char_map ;
  char const   *tmp ;
  char *char_map_2 ;
  char const   *tmp___0 ;

  {
  if (useecs) {
    tmp = "yy_ec[YY_SC_TO_UI(*yy_cp)]";
  } else {
    tmp = "YY_SC_TO_UI(*yy_cp)";
  }
  char_map = (char *)tmp;
  if (useecs) {
    tmp___0 = "yy_ec[YY_SC_TO_UI(*++yy_cp)]";
  } else {
    tmp___0 = "YY_SC_TO_UI(*++yy_cp)";
  }
  char_map_2 = (char *)tmp___0;
  if (fulltbl) {
    indent_put2s((char *)"while ( (yy_current_state = yy_nxt[yy_current_state][%s]) > 0 )",
                 char_map);
    indent_level ++;
    if (num_backing_up > 0) {
      indent_puts((char *)"{");
      gen_backing_up();
      outc('\n');
    }
    indent_puts((char *)"++yy_cp;");
    if (num_backing_up > 0) {
      indent_puts((char *)"}");
    }
    indent_level --;
    outc('\n');
    indent_puts((char *)"yy_current_state = -yy_current_state;");
  } else {
    if (fullspd) {
      indent_puts((char *)"{");
      indent_puts((char *)"register yyconst struct yy_trans_info *yy_trans_info;\n");
      indent_puts((char *)"register YY_CHAR yy_c;\n");
      indent_put2s((char *)"for ( yy_c = %s;", char_map);
      indent_puts((char *)"      (yy_trans_info = &yy_current_state[(unsigned int) yy_c])->");
      indent_puts((char *)"yy_verify == yy_c;");
      indent_put2s((char *)"      yy_c = %s )", char_map_2);
      indent_level ++;
      if (num_backing_up > 0) {
        indent_puts((char *)"{");
      }
      indent_puts((char *)"yy_current_state += yy_trans_info->yy_nxt;");
      if (num_backing_up > 0) {
        outc('\n');
        gen_backing_up();
        indent_puts((char *)"}");
      }
      indent_level --;
      indent_puts((char *)"}");
    } else {
      indent_puts((char *)"do");
      indent_level ++;
      indent_puts((char *)"{");
      gen_next_state(0);
      indent_puts((char *)"++yy_cp;");
      indent_puts((char *)"}");
      indent_level --;
      do_indent();
      if (interactive) {
        out_dec("while ( yy_base[yy_current_state] != %d );\n", jambase);
      } else {
        out_dec("while ( yy_current_state != %d );\n", jamstate);
      }
      if (! reject) {
        if (! interactive) {
          indent_puts((char *)"yy_cp = yy_last_accepting_cpos;");
          indent_puts((char *)"yy_current_state = yy_last_accepting_state;");
        }
      }
    }
  }
  return;
}
}

void gen_next_state(int worry_about_NULs ) 
{ char char_map[256] ;
  char const   *tmp ;

  {
  if (worry_about_NULs) {
    if (! nultrans) {
      if (useecs) {
        sprintf((char */* __restrict  */)(char_map),
                (char const   */* __restrict  */)"(*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : %d)",
                NUL_ec);
      } else {
        sprintf((char */* __restrict  */)(char_map),
                (char const   */* __restrict  */)"(*yy_cp ? YY_SC_TO_UI(*yy_cp) : %d)",
                NUL_ec);
      }
    } else {
      goto _L;
    }
  } else {
    _L: 
    if (useecs) {
      tmp = "yy_ec[YY_SC_TO_UI(*yy_cp)]";
    } else {
      tmp = "YY_SC_TO_UI(*yy_cp)";
    }
    strcpy((char */* __restrict  */)(char_map),
           (char const   */* __restrict  */)tmp);
  }
  if (worry_about_NULs) {
    if (nultrans) {
      if (! fulltbl) {
        if (! fullspd) {
          gen_backing_up();
        }
      }
      indent_puts((char *)"if ( *yy_cp )");
      indent_level ++;
      indent_puts((char *)"{");
    }
  }
  if (fulltbl) {
    indent_put2s((char *)"yy_current_state = yy_nxt[yy_current_state][%s];",
                 char_map);
  } else {
    if (fullspd) {
      indent_put2s((char *)"yy_current_state += yy_current_state[%s].yy_nxt;",
                   char_map);
    } else {
      gen_next_compressed_state(char_map);
    }
  }
  if (worry_about_NULs) {
    if (nultrans) {
      indent_puts((char *)"}");
      indent_level --;
      indent_puts((char *)"else");
      indent_level ++;
      indent_puts((char *)"yy_current_state = yy_NUL_trans[yy_current_state];");
      indent_level --;
    }
  }
  if (fullspd) {
    gen_backing_up();
  } else {
    if (fulltbl) {
      gen_backing_up();
    }
  }
  if (reject) {
    indent_puts((char *)"*yy_state_ptr++ = yy_current_state;");
  }
  return;
}
}

void gen_NUL_trans(void) 
{ int need_backing_up ;
  int tmp ;
  char NUL_ec_str[20] ;

  {
  if (num_backing_up > 0) {
    if (! reject) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  need_backing_up = tmp;
  if (need_backing_up) {
    if (! nultrans) {
      indent_puts((char *)"register char *yy_cp = yy_c_buf_p;");
    } else {
      if (fullspd) {
        indent_puts((char *)"register char *yy_cp = yy_c_buf_p;");
      } else {
        if (fulltbl) {
          indent_puts((char *)"register char *yy_cp = yy_c_buf_p;");
        }
      }
    }
  }
  outc('\n');
  if (nultrans) {
    indent_puts((char *)"yy_current_state = yy_NUL_trans[yy_current_state];");
    indent_puts((char *)"yy_is_jam = (yy_current_state == 0);");
  } else {
    if (fulltbl) {
      do_indent();
      out_dec("yy_current_state = yy_nxt[yy_current_state][%d];\n", NUL_ec);
      indent_puts((char *)"yy_is_jam = (yy_current_state <= 0);");
    } else {
      if (fullspd) {
        do_indent();
        out_dec("register int yy_c = %d;\n", NUL_ec);
        indent_puts((char *)"register yyconst struct yy_trans_info *yy_trans_info;\n");
        indent_puts((char *)"yy_trans_info = &yy_current_state[(unsigned int) yy_c];");
        indent_puts((char *)"yy_current_state += yy_trans_info->yy_nxt;");
        indent_puts((char *)"yy_is_jam = (yy_trans_info->yy_verify != yy_c);");
      } else {
        sprintf((char */* __restrict  */)(NUL_ec_str),
                (char const   */* __restrict  */)"%d", NUL_ec);
        gen_next_compressed_state(NUL_ec_str);
        do_indent();
        out_dec("yy_is_jam = (yy_current_state == %d);\n", jamstate);
        if (reject) {
          indent_puts((char *)"if ( ! yy_is_jam )");
          indent_level ++;
          indent_puts((char *)"*yy_state_ptr++ = yy_current_state;");
          indent_level --;
        }
      }
    }
  }
  if (need_backing_up) {
    if (fullspd) {
      goto _L;
    } else {
      if (fulltbl) {
        _L: 
        outc('\n');
        indent_puts((char *)"if ( ! yy_is_jam )");
        indent_level ++;
        indent_puts((char *)"{");
        gen_backing_up();
        indent_puts((char *)"}");
        indent_level --;
      }
    }
  }
  return;
}
}

void gen_start_state(void) 
{ 

  {
  if (fullspd) {
    if (bol_needed) {
      indent_puts((char *)"yy_current_state = yy_start_state_list[yy_start + YY_AT_BOL()];");
    } else {
      indent_puts((char *)"yy_current_state = yy_start_state_list[yy_start];");
    }
  } else {
    indent_puts((char *)"yy_current_state = yy_start;");
    if (bol_needed) {
      indent_puts((char *)"yy_current_state += YY_AT_BOL();");
    }
    if (reject) {
      indent_puts((char *)"yy_state_ptr = yy_state_buf;");
      indent_puts((char *)"*yy_state_ptr++ = yy_current_state;");
    }
  }
  return;
}
}

void gentabs(void) 
{ int i___0 ;
  int j ;
  int k ;
  int *accset ;
  int nacc ;
  int *acc_array ;
  int total_states ;
  int end_of_buffer_action ;
  void *tmp ;
  int EOB_accepting_list[2] ;
  int tmp___0 ;
  char *tmp___1 ;
  int accnum ;
  char *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  register int d ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;

  {
  end_of_buffer_action = num_rules + 1;
  tmp = allocate_array(current_max_dfas, (unsigned int )sizeof(int ));
  acc_array = (int *)tmp;
  nummt = 0;
  num_backing_up ++;
  if (reject) {
    EOB_accepting_list[0] = 0;
    EOB_accepting_list[1] = end_of_buffer_action;
    *(accsiz + end_of_buffer_state) = 1;
    (dfaacc + end_of_buffer_state)->dfaacc_set = EOB_accepting_list;
    if (numas > 1) {
      tmp___0 = numas;
    } else {
      tmp___0 = 1;
    }
    if (long_align) {
      tmp___1 = C_long_decl;
    } else {
      tmp___1 = C_short_decl;
    }
    out_str_dec((char const   *)tmp___1, "yy_acclist", tmp___0 + 1);
    j = 1;
    i___0 = 1;
    while (i___0 <= lastdfa) {
      *(acc_array + i___0) = j;
      if (*(accsiz + i___0) != 0) {
        accset = (dfaacc + i___0)->dfaacc_set;
        nacc = *(accsiz + i___0);
        if (trace) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"state # %d accepts: ", i___0);
        }
        k = 1;
        while (k <= nacc) {
          accnum = *(accset + k);
          j ++;
          if (variable_trailing_context_rules) {
            if (! (accnum & 16384)) {
              if (accnum > 0) {
                if (accnum <= num_rules) {
                  if (*(rule_type + accnum) == 1) {
                    accnum |= 8192;
                  }
                }
              }
            }
          }
          mkdata(accnum);
          if (trace) {
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"[%d]", *(accset + k));
            if (k < nacc) {
              fputs((char const   */* __restrict  */)", ",
                    (FILE */* __restrict  */)stderr);
            } else {
              _IO_putc('\n', stderr);
            }
          }
          k ++;
        }
      }
      i___0 ++;
    }
    *(acc_array + i___0) = j;
    dataend();
  } else {
    (dfaacc + end_of_buffer_state)->dfaacc_state = end_of_buffer_action;
    i___0 = 1;
    while (i___0 <= lastdfa) {
      *(acc_array + i___0) = (dfaacc + i___0)->dfaacc_state;
      i___0 ++;
    }
    *(acc_array + i___0) = 0;
  }
  k = lastdfa + 2;
  if (reject) {
    k ++;
  }
  if (long_align) {
    tmp___2 = C_long_decl;
  } else {
    tmp___2 = C_short_decl;
  }
  out_str_dec((char const   *)tmp___2, "yy_accept", k);
  i___0 = 1;
  while (i___0 <= lastdfa) {
    mkdata(*(acc_array + i___0));
    if (! reject) {
      if (trace) {
        if (*(acc_array + i___0)) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"state # %d accepts: [%d]\n",
                  i___0, *(acc_array + i___0));
        }
      }
    }
    i___0 ++;
  }
  mkdata(*(acc_array + i___0));
  if (reject) {
    mkdata(*(acc_array + i___0));
  }
  dataend();
  if (useecs) {
    genecs();
  }
  if (usemecs) {
    if (trace) {
      fputs((char const   */* __restrict  */)"\n\nMeta-Equivalence Classes:\n",
            (FILE */* __restrict  */)stderr);
    }
    out_str_dec((char const   *)(C_int_decl), "yy_meta", numecs + 1);
    i___0 = 1;
    while (i___0 <= numecs) {
      if (trace) {
        if (tecbck[i___0] < 0) {
          tmp___3 = - tecbck[i___0];
        } else {
          tmp___3 = tecbck[i___0];
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%d = %d\n", i___0, tmp___3);
      }
      if (tecbck[i___0] < 0) {
        tmp___4 = - tecbck[i___0];
      } else {
        tmp___4 = tecbck[i___0];
      }
      mkdata(tmp___4);
      i___0 ++;
    }
    dataend();
  }
  total_states = lastdfa + numtemps;
  if (tblend >= 32700) {
    tmp___5 = C_long_decl;
  } else {
    if (long_align) {
      tmp___5 = C_long_decl;
    } else {
      tmp___5 = C_short_decl;
    }
  }
  out_str_dec((char const   *)tmp___5, "yy_base", total_states + 1);
  i___0 = 1;
  while (i___0 <= lastdfa) {
    d = *(def + i___0);
    if (*(base + i___0) == -32766) {
      *(base + i___0) = jambase;
    }
    if (d == -32766) {
      *(def + i___0) = jamstate;
    } else {
      if (d < 0) {
        tmpuses ++;
        *(def + i___0) = (lastdfa - d) + 1;
      }
    }
    mkdata(*(base + i___0));
    i___0 ++;
  }
  mkdata(*(base + i___0));
  i___0 ++;
  while (i___0 <= total_states) {
    mkdata(*(base + i___0));
    *(def + i___0) = jamstate;
    i___0 ++;
  }
  dataend();
  if (total_states >= 32700) {
    tmp___6 = C_long_decl;
  } else {
    if (long_align) {
      tmp___6 = C_long_decl;
    } else {
      tmp___6 = C_short_decl;
    }
  }
  out_str_dec((char const   *)tmp___6, "yy_def", total_states + 1);
  i___0 = 1;
  while (i___0 <= total_states) {
    mkdata(*(def + i___0));
    i___0 ++;
  }
  dataend();
  if (total_states >= 32700) {
    tmp___7 = C_long_decl;
  } else {
    if (long_align) {
      tmp___7 = C_long_decl;
    } else {
      tmp___7 = C_short_decl;
    }
  }
  out_str_dec((char const   *)tmp___7, "yy_nxt", tblend + 1);
  i___0 = 1;
  while (i___0 <= tblend) {
    if (*(chk + i___0) == 0) {
      *(nxt + i___0) = jamstate;
    } else {
      if (*(nxt + i___0) == 0) {
        *(nxt + i___0) = jamstate;
      }
    }
    mkdata(*(nxt + i___0));
    i___0 ++;
  }
  dataend();
  if (total_states >= 32700) {
    tmp___8 = C_long_decl;
  } else {
    if (long_align) {
      tmp___8 = C_long_decl;
    } else {
      tmp___8 = C_short_decl;
    }
  }
  out_str_dec((char const   *)tmp___8, "yy_chk", tblend + 1);
  i___0 = 1;
  while (i___0 <= tblend) {
    if (*(chk + i___0) == 0) {
      nummt ++;
    }
    mkdata(*(chk + i___0));
    i___0 ++;
  }
  dataend();
  return;
}
}

void indent_put2s(char *fmt , char *arg ) 
{ 

  {
  do_indent();
  out_str((char const   *)fmt, (char const   *)arg);
  outn("");
  return;
}
}

void indent_puts(char *str ) 
{ 

  {
  do_indent();
  outn((char const   *)str);
  return;
}
}

void make_tables(void) 
{ register int i___0 ;
  int did_eof_rule ;
  int total_table_size ;
  char *trans_offset_type ;
  char const   *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;

  {
  did_eof_rule = 0;
  skelout();
  indent_level = 1;
  if (yymore_used) {
    if (! yytext_is_array) {
      indent_puts((char *)"yytext_ptr -= yy_more_len; \\");
      indent_puts((char *)"yyleng = (int) (yy_cp - yytext_ptr); \\");
    } else {
      indent_puts((char *)"yyleng = (int) (yy_cp - yy_bp); \\");
    }
  } else {
    indent_puts((char *)"yyleng = (int) (yy_cp - yy_bp); \\");
  }
  skelout();
  if (yytext_is_array) {
    if (yymore_used) {
      indent_puts((char *)"if ( yyleng + yy_more_offset >= YYLMAX ) \\");
    } else {
      indent_puts((char *)"if ( yyleng >= YYLMAX ) \\");
    }
    indent_level ++;
    indent_puts((char *)"YY_FATAL_ERROR( \"token too large, exceeds YYLMAX\" ); \\");
    indent_level --;
    if (yymore_used) {
      indent_puts((char *)"yy_flex_strncpy( &yytext[yy_more_offset], yytext_ptr, yyleng + 1 ); \\");
      indent_puts((char *)"yyleng += yy_more_offset; \\");
      indent_puts((char *)"yy_prev_more_offset = yy_more_offset; \\");
      indent_puts((char *)"yy_more_offset = 0; \\");
    } else {
      indent_puts((char *)"yy_flex_strncpy( yytext, yytext_ptr, yyleng + 1 ); \\");
    }
  }
  indent_level = 0;
  skelout();
  out_dec("#define YY_NUM_RULES %d\n", num_rules);
  out_dec("#define YY_END_OF_BUFFER %d\n", num_rules + 1);
  if (fullspd) {
    total_table_size = (tblend + numecs) + 1;
    if (total_table_size >= 32700) {
      tmp = "long";
    } else {
      if (long_align) {
        tmp = "long";
      } else {
        tmp = "short";
      }
    }
    trans_offset_type = (char *)tmp;
    indent_level = 0;
    indent_puts((char *)"struct yy_trans_info");
    indent_level ++;
    indent_puts((char *)"{");
    if (long_align) {
      indent_puts((char *)"long yy_verify;");
    } else {
      indent_puts((char *)"short yy_verify;");
    }
    indent_put2s((char *)"%s yy_nxt;", trans_offset_type);
    indent_puts((char *)"};");
    indent_level --;
  }
  if (fullspd) {
    genctbl();
  } else {
    if (fulltbl) {
      genftbl();
    } else {
      gentabs();
    }
  }
  if (num_backing_up > 0) {
    if (! reject) {
      if (! C_plus_plus) {
        indent_puts((char *)"static yy_state_type yy_last_accepting_state;");
        indent_puts((char *)"static char *yy_last_accepting_cpos;\n");
      }
    }
  }
  if (nultrans) {
    out_str_dec((char const   *)(C_state_decl), "yy_NUL_trans", lastdfa + 1);
    i___0 = 1;
    while (i___0 <= lastdfa) {
      if (fullspd) {
        out_dec("    &yy_transition[%d],\n", *(base + i___0));
      } else {
        mkdata(*(nultrans + i___0));
      }
      i___0 ++;
    }
    dataend();
  }
  if (ddebug) {
    if (! C_plus_plus) {
      indent_puts((char *)"extern int yy_flex_debug;");
      indent_puts((char *)"int yy_flex_debug = 1;\n");
    }
    if (long_align) {
      tmp___0 = C_long_decl;
    } else {
      tmp___0 = C_short_decl;
    }
    out_str_dec((char const   *)tmp___0, "yy_rule_linenum", num_rules);
    i___0 = 1;
    while (i___0 < num_rules) {
      mkdata(*(rule_linenum + i___0));
      i___0 ++;
    }
    dataend();
  }
  if (reject) {
    if (! C_plus_plus) {
      outn("static yy_state_type yy_state_buf[YY_BUF_SIZE + 2], *yy_state_ptr;");
      outn("static char *yy_full_match;");
      outn("static int yy_lp;");
    }
    if (variable_trailing_context_rules) {
      if (! C_plus_plus) {
        outn("static int yy_looking_for_trail_begin = 0;");
        outn("static int yy_full_lp;");
        outn("static int *yy_full_state;");
      }
      out_hex("#define YY_TRAILING_MASK 0x%x\n", 8192U);
      out_hex("#define YY_TRAILING_HEAD_MASK 0x%x\n", 16384U);
    }
    outn("#define REJECT \\");
    outn("{ \\");
    outn("*yy_cp = yy_hold_char; /* undo effects of setting up yytext */ \\");
    outn("yy_cp = yy_full_match; /* restore poss. backed-over text */ \\");
    if (variable_trailing_context_rules) {
      outn("yy_lp = yy_full_lp; /* restore orig. accepting pos. */ \\");
      outn("yy_state_ptr = yy_full_state; /* restore orig. state */ \\");
      outn("yy_current_state = *yy_state_ptr; /* restore curr. state */ \\");
    }
    outn("++yy_lp; \\");
    outn("goto find_rule; \\");
    outn("}");
  } else {
    outn("/* The intent behind this definition is that it\'ll catch");
    outn(" * any uses of REJECT which flex missed.");
    outn(" */");
    outn("#define REJECT reject_used_but_not_detected");
  }
  if (yymore_used) {
    if (! C_plus_plus) {
      if (yytext_is_array) {
        indent_puts((char *)"static int yy_more_offset = 0;");
        indent_puts((char *)"static int yy_prev_more_offset = 0;");
      } else {
        indent_puts((char *)"static int yy_more_flag = 0;");
        indent_puts((char *)"static int yy_more_len = 0;");
      }
    }
    if (yytext_is_array) {
      indent_puts((char *)"#define yymore() (yy_more_offset = yy_flex_strlen( yytext ))");
      indent_puts((char *)"#define YY_NEED_STRLEN");
      indent_puts((char *)"#define YY_MORE_ADJ 0");
      indent_puts((char *)"#define YY_RESTORE_YY_MORE_OFFSET \\");
      indent_level ++;
      indent_puts((char *)"{ \\");
      indent_puts((char *)"yy_more_offset = yy_prev_more_offset; \\");
      indent_puts((char *)"yyleng -= yy_more_offset; \\");
      indent_puts((char *)"}");
      indent_level --;
    } else {
      indent_puts((char *)"#define yymore() (yy_more_flag = 1)");
      indent_puts((char *)"#define YY_MORE_ADJ yy_more_len");
      indent_puts((char *)"#define YY_RESTORE_YY_MORE_OFFSET");
    }
  } else {
    indent_puts((char *)"#define yymore() yymore_used_but_not_detected");
    indent_puts((char *)"#define YY_MORE_ADJ 0");
    indent_puts((char *)"#define YY_RESTORE_YY_MORE_OFFSET");
  }
  if (! C_plus_plus) {
    if (yytext_is_array) {
      outn("#ifndef YYLMAX");
      outn("#define YYLMAX 8192");
      outn("#endif\n");
      outn("char yytext[YYLMAX];");
      outn("char *yytext_ptr;");
    } else {
      outn("char *yytext;");
    }
  }
  out((char const   *)(action_array + defs1_offset));
  line_directive_out(stdout, 0);
  skelout();
  if (! C_plus_plus) {
    if (use_read) {
      outn("\tif ( (result = read( fileno(yyin), (char *) buf, max_size )) < 0 ) \\");
      outn("\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" );");
    } else {
      outn("\tif ( yy_current_buffer->yy_is_interactive ) \\");
      outn("\t\t{ \\");
      outn("\t\tint c = \'*\', n; \\");
      outn("\t\tfor ( n = 0; n < max_size && \\");
      outn("\t\t\t     (c = getc( yyin )) != EOF && c != \'\\n\'; ++n ) \\");
      outn("\t\t\tbuf[n] = (char) c; \\");
      outn("\t\tif ( c == \'\\n\' ) \\");
      outn("\t\t\tbuf[n++] = (char) c; \\");
      outn("\t\tif ( c == EOF && ferror( yyin ) ) \\");
      outn("\t\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" ); \\");
      outn("\t\tresult = n; \\");
      outn("\t\t} \\");
      outn("\telse if ( ((result = fread( buf, 1, max_size, yyin )) == 0) \\");
      outn("\t\t  && ferror( yyin ) ) \\");
      outn("\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" );");
    }
  }
  skelout();
  indent_puts((char *)"#define YY_RULE_SETUP \\");
  indent_level ++;
  if (bol_needed) {
    indent_puts((char *)"if ( yyleng > 0 ) \\");
    indent_level ++;
    indent_puts((char *)"yy_current_buffer->yy_at_bol = \\");
    indent_puts((char *)"\t\t(yytext[yyleng - 1] == \'\\n\'); \\");
    indent_level --;
  }
  indent_puts((char *)"YY_USER_ACTION");
  indent_level --;
  skelout();
  out((char const   *)(action_array + prolog_offset));
  line_directive_out(stdout, 0);
  skelout();
  indent_level = 2;
  if (yymore_used) {
    if (! yytext_is_array) {
      indent_puts((char *)"yy_more_len = 0;");
      indent_puts((char *)"if ( yy_more_flag )");
      indent_level ++;
      indent_puts((char *)"{");
      indent_puts((char *)"yy_more_len = yy_c_buf_p - yytext_ptr;");
      indent_puts((char *)"yy_more_flag = 0;");
      indent_puts((char *)"}");
      indent_level --;
    }
  }
  skelout();
  gen_start_state();
  outn("yy_match:");
  gen_next_match();
  skelout();
  indent_level = 2;
  gen_find_action();
  skelout();
  if (do_yylineno) {
    indent_puts((char *)"if ( yy_act != YY_END_OF_BUFFER )");
    indent_level ++;
    indent_puts((char *)"{");
    indent_puts((char *)"int yyl;");
    indent_puts((char *)"for ( yyl = 0; yyl < yyleng; ++yyl )");
    indent_level ++;
    indent_puts((char *)"if ( yytext[yyl] == \'\\n\' )");
    indent_level ++;
    indent_puts((char *)"++yylineno;");
    indent_level --;
    indent_level --;
    indent_puts((char *)"}");
    indent_level --;
  }
  skelout();
  if (ddebug) {
    indent_puts((char *)"if ( yy_flex_debug )");
    indent_level ++;
    indent_puts((char *)"{");
    indent_puts((char *)"if ( yy_act == 0 )");
    indent_level ++;
    if (C_plus_plus) {
      tmp___1 = "cerr << \"--scanner backing up\\n\";";
    } else {
      tmp___1 = "fprintf( stderr, \"--scanner backing up\\n\" );";
    }
    indent_puts((char *)tmp___1);
    indent_level --;
    do_indent();
    out_dec("else if ( yy_act < %d )\n", num_rules);
    indent_level ++;
    if (C_plus_plus) {
      indent_puts((char *)"cerr << \"--accepting rule at line \" << yy_rule_linenum[yy_act] <<");
      indent_puts((char *)"         \"(\\\"\" << yytext << \"\\\")\\n\";");
    } else {
      indent_puts((char *)"fprintf( stderr, \"--accepting rule at line %d (\\\"%s\\\")\\n\",");
      indent_puts((char *)"         yy_rule_linenum[yy_act], yytext );");
    }
    indent_level --;
    do_indent();
    out_dec("else if ( yy_act == %d )\n", num_rules);
    indent_level ++;
    if (C_plus_plus) {
      indent_puts((char *)"cerr << \"--accepting default rule (\\\"\" << yytext << \"\\\")\\n\";");
    } else {
      indent_puts((char *)"fprintf( stderr, \"--accepting default rule (\\\"%s\\\")\\n\",");
      indent_puts((char *)"         yytext );");
    }
    indent_level --;
    do_indent();
    out_dec("else if ( yy_act == %d )\n", num_rules + 1);
    indent_level ++;
    if (C_plus_plus) {
      tmp___2 = "cerr << \"--(end of buffer or a NUL)\\n\";";
    } else {
      tmp___2 = "fprintf( stderr, \"--(end of buffer or a NUL)\\n\" );";
    }
    indent_puts((char *)tmp___2);
    indent_level --;
    do_indent();
    outn("else");
    indent_level ++;
    if (C_plus_plus) {
      indent_puts((char *)"cerr << \"--EOF (start condition \" << YY_START << \")\\n\";");
    } else {
      indent_puts((char *)"fprintf( stderr, \"--EOF (start condition %d)\\n\", YY_START );");
    }
    indent_level --;
    indent_puts((char *)"}");
    indent_level --;
  }
  skelout();
  indent_level ++;
  gen_bu_action();
  out((char const   *)(action_array + action_offset));
  line_directive_out(stdout, 0);
  i___0 = 1;
  while (i___0 <= lastsc) {
    if (! *(sceof + i___0)) {
      do_indent();
      out_str("case YY_STATE_EOF(%s):\n", (char const   *)*(scname + i___0));
      did_eof_rule = 1;
    }
    i___0 ++;
  }
  if (did_eof_rule) {
    indent_level ++;
    indent_puts((char *)"yyterminate();");
    indent_level --;
  }
  skelout();
  indent_level = 4;
  if (fullspd) {
    indent_puts((char *)"yy_cp = yy_c_buf_p;");
  } else {
    if (fulltbl) {
      indent_puts((char *)"yy_cp = yy_c_buf_p;");
    } else {
      if (! reject) {
        if (! interactive) {
          indent_puts((char *)"yy_cp = yy_last_accepting_cpos;");
          indent_puts((char *)"yy_current_state = yy_last_accepting_state;");
        } else {
          indent_puts((char *)"yy_cp = yy_c_buf_p;");
        }
      } else {
        indent_puts((char *)"yy_cp = yy_c_buf_p;");
      }
    }
  }
  indent_level = 1;
  skelout();
  gen_start_state();
  indent_level = 2;
  skelout();
  gen_next_state(1);
  indent_level = 1;
  skelout();
  gen_NUL_trans();
  skelout();
  if (do_yylineno) {
    indent_puts((char *)"if ( c == \'\\n\' )");
    indent_level ++;
    indent_puts((char *)"--yylineno;");
    indent_level --;
  }
  skelout();
  if (bol_needed) {
    indent_puts((char *)"yy_current_buffer->yy_at_bol = (c == \'\\n\');");
    if (do_yylineno) {
      indent_puts((char *)"if ( yy_current_buffer->yy_at_bol )");
      indent_level ++;
      indent_puts((char *)"++yylineno;");
      indent_level --;
    }
  } else {
    if (do_yylineno) {
      indent_puts((char *)"if ( c == \'\\n\' )");
      indent_level ++;
      indent_puts((char *)"++yylineno;");
      indent_level --;
    }
  }
  skelout();
  line_directive_out(stdout, 1);
  if (sectnum == 3) {
    flexscan();
  }
  return;
}
}

char copyright[92]   = 
  {(char )'@', (char )'(', (char )'#', (char )')', (char )' ', (char )'C',
   (char )'o', (char )'p', (char )'y', (char )'r', (char )'i', (char )'g',
   (char )'h', (char )'t', (char )' ', (char )'(', (char )'c', (char )')',
   (char )' ', (char )'1', (char )'9', (char )'9', (char )'0', (char )' ',
   (char )'T', (char )'h', (char )'e', (char )' ', (char )'R', (char )'e',
   (char )'g', (char )'e', (char )'n', (char )'t', (char )'s', (char )' ',
   (char )'o', (char )'f', (char )' ', (char )'t', (char )'h', (char )'e',
   (char )' ', (char )'U', (char )'n', (char )'i', (char )'v', (char )'e',
   (char )'r', (char )'s', (char )'i', (char )'t', (char )'y', (char )' ',
   (char )'o', (char )'f', (char )' ', (char )'C', (char )'a', (char )'l',
   (char )'i', (char )'f', (char )'o', (char )'r', (char )'n', (char )'i',
   (char )'a', (char )'.', (char )'\n', (char )' ', (char )'A', (char )'l',
   (char )'l', (char )' ', (char )'r', (char )'i', (char )'g', (char )'h',
   (char )'t', (char )'s', (char )' ', (char )'r', (char )'e', (char )'s',
   (char )'e', (char )'r', (char )'v', (char )'e', (char )'d', (char )'.',
   (char )'\n', (char )'\000'};

extern int fclose(FILE *__stream ) ;

extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;

extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;

extern int printf(char const   * __restrict  __format  , ...) ;

extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;

int printstats  ;

int syntaxerror  ;

int eofseen  ;

int nowarn  ;

int spprdflt  ;

int lex_compat  ;

int gen_line_dirs  ;

int performance_report  ;

int do_yywrap  ;

int continued_action  ;

int in_rule  ;

int yymore_really_used  ;

int reject_really_used  ;

int datapos  ;

int dataline  ;

int linenum  ;

int out_linenum  ;

FILE *skelfile ;

int skel_ind ;

char *infilename ;

char *outfilename ;

int did_outfilename  ;

char *prefix  ;

char *yyclass  ;

int do_stdinit  ;

int use_stdout  ;

char **input_files  ;

int num_input_files  ;

char *program_name ;

int action_size  ;

int action_index  ;

int current_mns  ;

int current_max_rules  ;

int num_eof_rules  ;

int default_rule  ;

int lastnfa  ;

int *firstst  ;

int *lastst  ;

int *finalst  ;

int current_state_type  ;

int numprots  ;

int protprev[50]  ;

int protnext[50]  ;

int prottbl[50]  ;

int protcomst[50]  ;

int firstprot  ;

int lastprot  ;

int protsave[2000]  ;

int nextecm[257]  ;

int nummecs  ;

int tecfwd[257]  ;

int *scxclu  ;

int current_max_scs  ;

int current_max_template_xpairs  ;

int *tnxt  ;

int firstfree  ;

int cclreuse  ;

char nmstr[2048]  ;

int numeps  ;

int eps2  ;

int peakpairs  ;

void check_options(void) ;

void flexend(int exit_status ) ;

void usage(void) ;

void flexerror(char const   *msg ) ;

void lerrif(char const   *msg , int arg ) ;

void lerrsf(char const   *msg , char const   *arg ) ;

void out_str3(char const   *fmt , char const   *s1 , char const   *s2 ,
              char const   *s3 ) ;

void pinpoint_message(char *str ) ;

void warn(char *str ) ;

int yyparse(void) ;

void set_input_file(char *file ) ;

static char flex_version[6]   = {(char )'2', (char )'.', (char )'5', (char )'.',
                                 (char )'4', (char )'\000'};

void flexinit(int argc , char **argv ) ;

void readin(void) ;

void set_up_initial_allocations(void) ;

FILE *skelfile   = (FILE *)((void *)0);

int skel_ind   = 0;

char *infilename   = (char *)((void *)0);

char *outfilename   = (char *)((void *)0);

char *program_name   = (char *)"flex";

static char *outfile_template   = (char *)"lex.%s.%s";

static char *backing_name   = (char *)"lex.backup";

static char outfile_path[2048]  ;

static int outfile_created   = 0;

static char *skelname   = (char *)((void *)0);

int main(int argc , char **argv ) 
{ int i___0 ;

  {
  flexinit(argc, argv);
  readin();
  ntod();
  i___0 = 1;
  while (i___0 <= num_rules) {
    if (! *(rule_useful + i___0)) {
      if (i___0 != default_rule) {
        line_warning((char *)"rule cannot be matched", *(rule_linenum + i___0));
      }
    }
    i___0 ++;
  }
  if (spprdflt) {
    if (! reject) {
      if (*(rule_useful + default_rule)) {
        line_warning((char *)"-s option given but default rule can be matched",
                     *(rule_linenum + default_rule));
      }
    }
  }
  make_tables();
  flexend(0);
  return (0);
}
}

void check_options(void) 
{ int i___0 ;
  FILE *prev_stdout ;
  char *suffix ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  if (lex_compat) {
    if (C_plus_plus) {
      flexerror("Can\'t use -+ with -l option");
    }
    if (fulltbl) {
      flexerror("Can\'t use -f or -F with -l option");
    } else {
      if (fullspd) {
        flexerror("Can\'t use -f or -F with -l option");
      }
    }
    reject_really_used = 1;
    yymore_really_used = reject_really_used;
    yytext_is_array = 1;
    do_yylineno = 1;
    use_read = 0;
  }
  if (do_yylineno) {
    reject_really_used = 1;
  }
  if (csize == -1) {
    if (fulltbl) {
      goto _L;
    } else {
      if (fullspd) {
        _L: 
        if (! useecs) {
          csize = 128;
        } else {
          csize = 256;
        }
      } else {
        csize = 256;
      }
    }
  }
  if (interactive == -1) {
    if (fulltbl) {
      interactive = 0;
    } else {
      if (fullspd) {
        interactive = 0;
      } else {
        interactive = 1;
      }
    }
  }
  if (fulltbl) {
    goto _L___0;
  } else {
    if (fullspd) {
      _L___0: 
      if (usemecs) {
        flexerror("-Cf/-CF and -Cm don\'t make sense together");
      }
      if (interactive) {
        flexerror("-Cf/-CF and -I are incompatible");
      }
      if (lex_compat) {
        flexerror("-Cf/-CF are incompatible with lex-compatibility mode");
      }
      if (do_yylineno) {
        flexerror("-Cf/-CF and %option yylineno are incompatible");
      }
      if (fulltbl) {
        if (fullspd) {
          flexerror("-Cf and -CF are mutually exclusive");
        }
      }
    }
  }
  if (C_plus_plus) {
    if (fullspd) {
      flexerror("Can\'t use -+ with -CF option");
    }
  }
  if (C_plus_plus) {
    if (yytext_is_array) {
      warn((char *)"%array incompatible with -+ option");
      yytext_is_array = 0;
    }
  }
  if (useecs) {
    ecgroup[1] = 0;
    i___0 = 2;
    while (i___0 <= csize) {
      ecgroup[i___0] = i___0 - 1;
      nextecm[i___0 - 1] = i___0;
      i___0 ++;
    }
    nextecm[csize] = 0;
  } else {
    i___0 = 1;
    while (i___0 <= csize) {
      ecgroup[i___0] = i___0;
      nextecm[i___0] = -32767;
      i___0 ++;
    }
  }
  if (! use_stdout) {
    if (! did_outfilename) {
      if (C_plus_plus) {
        suffix = (char *)"cc";
      } else {
        suffix = (char *)"c";
      }
      sprintf((char */* __restrict  */)(outfile_path),
              (char const   */* __restrict  */)((char const   *)outfile_template),
              prefix, suffix);
      outfilename = outfile_path;
    }
    prev_stdout = freopen((char const   */* __restrict  */)((char const   *)outfilename),
                          (char const   */* __restrict  */)"w",
                          (FILE */* __restrict  */)stdout);
    if ((unsigned int )prev_stdout == (unsigned int )((void *)0)) {
      lerrsf("could not create %s", (char const   *)outfilename);
    }
    outfile_created = 1;
  }
  if (skelname) {
    skelfile = fopen((char const   */* __restrict  */)((char const   *)skelname),
                     (char const   */* __restrict  */)"r");
    if ((unsigned int )skelfile == (unsigned int )((void *)0)) {
      lerrsf("can\'t open skeleton file %s", (char const   *)skelname);
    }
  }
  if (0) {
    __s1_len = strlen((char const   *)prefix);
    __s2_len = strlen("yy");
    if (! ((unsigned int )((void const   *)(prefix + 1)) - (unsigned int )((void const   *)prefix) == 1U)) {
      goto _L___2;
    } else {
      if (__s1_len >= 4U) {
        _L___2: 
        if (! ((unsigned int )((void const   *)("yy" + 1)) - (unsigned int )((void const   *)"yy") == 1U)) {
          tmp___8 = 1;
        } else {
          if (__s2_len >= 4U) {
            tmp___8 = 1;
          } else {
            tmp___8 = 0;
          }
        }
      } else {
        tmp___8 = 0;
      }
    }
    if (tmp___8) {
      tmp___4 = __builtin_strcmp((char const   *)prefix, "yy");
    } else {
      tmp___7 = __builtin_strcmp((char const   *)prefix, "yy");
      tmp___4 = tmp___7;
    }
  } else {
    tmp___7 = __builtin_strcmp((char const   *)prefix, "yy");
    tmp___4 = tmp___7;
  }
  if (tmp___4) {
    if (C_plus_plus) {
      out_str3("#define yy%s %s%s\n", "FlexLexer", (char const   *)prefix,
               "FlexLexer");
    } else {
      out_str3("#define yy%s %s%s\n", "_create_buffer", (char const   *)prefix,
               "_create_buffer");
      out_str3("#define yy%s %s%s\n", "_delete_buffer", (char const   *)prefix,
               "_delete_buffer");
      out_str3("#define yy%s %s%s\n", "_scan_buffer", (char const   *)prefix,
               "_scan_buffer");
      out_str3("#define yy%s %s%s\n", "_scan_string", (char const   *)prefix,
               "_scan_string");
      out_str3("#define yy%s %s%s\n", "_scan_bytes", (char const   *)prefix,
               "_scan_bytes");
      out_str3("#define yy%s %s%s\n", "_flex_debug", (char const   *)prefix,
               "_flex_debug");
      out_str3("#define yy%s %s%s\n", "_init_buffer", (char const   *)prefix,
               "_init_buffer");
      out_str3("#define yy%s %s%s\n", "_flush_buffer", (char const   *)prefix,
               "_flush_buffer");
      out_str3("#define yy%s %s%s\n", "_load_buffer_state",
               (char const   *)prefix, "_load_buffer_state");
      out_str3("#define yy%s %s%s\n", "_switch_to_buffer",
               (char const   *)prefix, "_switch_to_buffer");
      out_str3("#define yy%s %s%s\n", "in", (char const   *)prefix, "in");
      out_str3("#define yy%s %s%s\n", "leng", (char const   *)prefix, "leng");
      out_str3("#define yy%s %s%s\n", "lex", (char const   *)prefix, "lex");
      out_str3("#define yy%s %s%s\n", "out", (char const   *)prefix, "out");
      out_str3("#define yy%s %s%s\n", "restart", (char const   *)prefix,
               "restart");
      out_str3("#define yy%s %s%s\n", "text", (char const   *)prefix, "text");
      if (do_yylineno) {
        out_str3("#define yy%s %s%s\n", "lineno", (char const   *)prefix,
                 "lineno");
      }
    }
    if (do_yywrap) {
      out_str3("#define yy%s %s%s\n", "wrap", (char const   *)prefix, "wrap");
    }
    outn("");
  }
  if (did_outfilename) {
    line_directive_out(stdout, 0);
  }
  skelout();
  return;
}
}

extern int unlink() ;

void flexend(int exit_status ) 
{ int tblsiz ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___11 ;
  int tmp___14 ;
  int tmp___15 ;

  {
  if ((unsigned int )skelfile != (unsigned int )((void *)0)) {
    tmp___0 = ferror(skelfile);
    if (tmp___0) {
      lerrsf("input error reading skeleton file %s", (char const   *)skelname);
    } else {
      tmp = fclose(skelfile);
      if (tmp) {
        lerrsf("error closing skeleton file %s", (char const   *)skelname);
      }
    }
  }
  if (exit_status != 0) {
    if (outfile_created) {
      tmp___3 = ferror(stdout);
      if (tmp___3) {
        lerrsf("error writing output file %s", (char const   *)outfilename);
      } else {
        tmp___2 = fclose(stdout);
        if (tmp___2) {
          lerrsf("error closing output file %s", (char const   *)outfilename);
        } else {
          tmp___1 = unlink(outfilename);
          if (tmp___1) {
            lerrsf("error deleting output file %s", (char const   *)outfilename);
          }
        }
      }
    }
  }
  if (backing_up_report) {
    if (backing_up_file) {
      if (num_backing_up == 0) {
        fprintf((FILE */* __restrict  */)backing_up_file,
                (char const   */* __restrict  */)"No backing up.\n");
      } else {
        if (fullspd) {
          fprintf((FILE */* __restrict  */)backing_up_file,
                  (char const   */* __restrict  */)"%d backing up (non-accepting) states.\n",
                  num_backing_up);
        } else {
          if (fulltbl) {
            fprintf((FILE */* __restrict  */)backing_up_file,
                    (char const   */* __restrict  */)"%d backing up (non-accepting) states.\n",
                    num_backing_up);
          } else {
            fprintf((FILE */* __restrict  */)backing_up_file,
                    (char const   */* __restrict  */)"Compressed tables always back up.\n");
          }
        }
      }
      tmp___5 = ferror(backing_up_file);
      if (tmp___5) {
        lerrsf("error writing backup file %s", (char const   *)backing_name);
      } else {
        tmp___4 = fclose(backing_up_file);
        if (tmp___4) {
          lerrsf("error closing backup file %s", (char const   *)backing_name);
        }
      }
    }
  }
  if (printstats) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s version %s usage statistics:\n",
            program_name, flex_version);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  scanner options: -");
    if (C_plus_plus) {
      _IO_putc('+', stderr);
    }
    if (backing_up_report) {
      _IO_putc('b', stderr);
    }
    if (ddebug) {
      _IO_putc('d', stderr);
    }
    if (caseins) {
      _IO_putc('i', stderr);
    }
    if (lex_compat) {
      _IO_putc('l', stderr);
    }
    if (performance_report > 0) {
      _IO_putc('p', stderr);
    }
    if (performance_report > 1) {
      _IO_putc('p', stderr);
    }
    if (spprdflt) {
      _IO_putc('s', stderr);
    }
    if (use_stdout) {
      _IO_putc('t', stderr);
    }
    if (printstats) {
      _IO_putc('v', stderr);
    }
    if (nowarn) {
      _IO_putc('w', stderr);
    }
    if (interactive == 0) {
      _IO_putc('B', stderr);
    }
    if (interactive == 1) {
      _IO_putc('I', stderr);
    }
    if (! gen_line_dirs) {
      _IO_putc('L', stderr);
    }
    if (trace) {
      _IO_putc('T', stderr);
    }
    if (csize == -1) {
      csize = 256;
    }
    if (csize == 128) {
      _IO_putc('7', stderr);
    } else {
      _IO_putc('8', stderr);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)" -C");
    if (long_align) {
      _IO_putc('a', stderr);
    }
    if (fulltbl) {
      _IO_putc('f', stderr);
    }
    if (fullspd) {
      _IO_putc('F', stderr);
    }
    if (useecs) {
      _IO_putc('e', stderr);
    }
    if (usemecs) {
      _IO_putc('m', stderr);
    }
    if (use_read) {
      _IO_putc('r', stderr);
    }
    if (did_outfilename) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)" -o%s", outfilename);
    }
    if (skelname) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)" -S%s", skelname);
    }
    if (0) {
      __s1_len = strlen((char const   *)prefix);
      __s2_len = strlen("yy");
      if (! ((unsigned int )((void const   *)(prefix + 1)) - (unsigned int )((void const   *)prefix) == 1U)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4U) {
          _L___0: 
          if (! ((unsigned int )((void const   *)("yy" + 1)) - (unsigned int )((void const   *)"yy") == 1U)) {
            tmp___15 = 1;
          } else {
            if (__s2_len >= 4U) {
              tmp___15 = 1;
            } else {
              tmp___15 = 0;
            }
          }
        } else {
          tmp___15 = 0;
        }
      }
      if (tmp___15) {
        tmp___11 = __builtin_strcmp((char const   *)prefix, "yy");
      } else {
        tmp___14 = __builtin_strcmp((char const   *)prefix, "yy");
        tmp___11 = tmp___14;
      }
    } else {
      tmp___14 = __builtin_strcmp((char const   *)prefix, "yy");
      tmp___11 = tmp___14;
    }
    if (tmp___11) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)" -P%s", prefix);
    }
    _IO_putc('\n', stderr);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d/%d NFA states\n", lastnfa,
            current_mns);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d/%d DFA states (%d words)\n",
            lastdfa, current_max_dfas, totnst);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d rules\n",
            (num_rules + num_eof_rules) - 1);
    if (num_backing_up == 0) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  No backing up\n");
    } else {
      if (fullspd) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"  %d backing-up (non-accepting) states\n",
                num_backing_up);
      } else {
        if (fulltbl) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"  %d backing-up (non-accepting) states\n",
                  num_backing_up);
        } else {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"  Compressed tables always back-up\n");
        }
      }
    }
    if (bol_needed) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  Beginning-of-line patterns used\n");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d/%d start conditions\n",
            lastsc, current_max_scs);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d epsilon states, %d double epsilon states\n",
            numeps, eps2);
    if (lastccl == 0) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  no character classes\n");
    } else {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d/%d character classes needed %d/%d words of storage, %d reused\n",
              lastccl, current_maxccls,
              *(cclmap + lastccl) + *(ccllen + lastccl),
              current_max_ccl_tbl_size, cclreuse);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d state/nextstate pairs created\n",
            numsnpairs);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d/%d unique/duplicate transitions\n",
            numuniq, numdup);
    if (fulltbl) {
      tblsiz = lastdfa * numecs;
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d table entries\n", tblsiz);
    } else {
      tblsiz = 2 * (lastdfa + numtemps) + 2 * tblend;
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d/%d base-def entries created\n",
              lastdfa + numtemps, current_max_dfas);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d/%d (peak %d) nxt-chk entries created\n",
              tblend, current_max_xpairs, peakpairs);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d/%d (peak %d) template nxt-chk entries created\n",
              numtemps * nummecs, current_max_template_xpairs, numtemps * numecs);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d empty table entries\n",
              nummt);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d protos created\n", numprots);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d templates created, %d uses\n",
              numtemps, tmpuses);
    }
    if (useecs) {
      tblsiz += csize;
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d/%d equivalence classes created\n",
              numecs, csize);
    }
    if (usemecs) {
      tblsiz += numecs;
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  %d/%d meta-equivalence classes created\n",
              nummecs, csize);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d (%d saved) hash collisions, %d DFAs equal\n",
            hshcol, hshsave, dfaeql);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d sets of reallocations needed\n",
            num_reallocs);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"  %d total table entries needed\n",
            tblsiz);
  }
  exit(exit_status);
}
}

void flexinit(int argc , char **argv ) 
{ int i___0 ;
  int sawcmpflag ;
  char *arg ;
  void *tmp ;
  size_t tmp___0 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___6 ;
  int tmp___9 ;
  int tmp___10 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___16 ;
  int tmp___19 ;
  int tmp___20 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___26 ;
  int tmp___29 ;
  int tmp___30 ;
  char *tmp___31 ;

  {
  caseins = 0;
  spprdflt = caseins;
  trace = spprdflt;
  syntaxerror = trace;
  printstats = syntaxerror;
  fulltbl = 0;
  ddebug = fulltbl;
  backing_up_report = ddebug;
  C_plus_plus = backing_up_report;
  lex_compat = C_plus_plus;
  continued_action = 0;
  yymore_used = continued_action;
  nowarn = yymore_used;
  long_align = nowarn;
  fullspd = long_align;
  do_stdinit = 0;
  reject = do_stdinit;
  in_rule = reject;
  yytext_is_array = in_rule;
  do_yylineno = yytext_is_array;
  reject_really_used = -1;
  yymore_really_used = reject_really_used;
  csize = -1;
  interactive = csize;
  useecs = 1;
  usemecs = useecs;
  gen_line_dirs = usemecs;
  do_yywrap = gen_line_dirs;
  performance_report = 0;
  did_outfilename = 0;
  prefix = (char *)"yy";
  yyclass = (char *)0;
  use_stdout = 0;
  use_read = use_stdout;
  sawcmpflag = 0;
  action_size = 2048;
  tmp = allocate_array(action_size, (unsigned int )sizeof(char ));
  action_array = (char *)tmp;
  action_index = 0;
  action_offset = action_index;
  prolog_offset = action_offset;
  defs1_offset = prolog_offset;
  *(action_array + 0) = (char )'\000';
  program_name = *(argv + 0);
  if ((int )*(program_name + 0) != 0) {
    tmp___0 = strlen((char const   *)program_name);
    if ((int )*(program_name + (tmp___0 - 1U)) == 43) {
      C_plus_plus = 1;
    }
  }
  argc --;
  argv ++;
  while (argc) {
    arg = *(argv + 0);
    if ((int )*(arg + 0) != 45) {
      break;
    } else {
      if ((int )*(arg + 1) == 0) {
        break;
      }
    }
    if ((int )*(arg + 1) == 45) {
      if (0) {
        __s1_len___1 = strlen((char const   *)arg);
        __s2_len___1 = strlen("--help");
        if (! ((unsigned int )((void const   *)(arg + 1)) - (unsigned int )((void const   *)arg) == 1U)) {
          goto _L___4;
        } else {
          if (__s1_len___1 >= 4U) {
            _L___4: 
            if (! ((unsigned int )((void const   *)("--help" + 1)) - (unsigned int )((void const   *)"--help") == 1U)) {
              tmp___30 = 1;
            } else {
              if (__s2_len___1 >= 4U) {
                tmp___30 = 1;
              } else {
                tmp___30 = 0;
              }
            }
          } else {
            tmp___30 = 0;
          }
        }
        if (tmp___30) {
          tmp___26 = __builtin_strcmp((char const   *)arg, "--help");
        } else {
          tmp___29 = __builtin_strcmp((char const   *)arg, "--help");
          tmp___26 = tmp___29;
        }
      } else {
        tmp___29 = __builtin_strcmp((char const   *)arg, "--help");
        tmp___26 = tmp___29;
      }
      if (tmp___26) {
        if (0) {
          __s1_len___0 = strlen((char const   *)arg);
          __s2_len___0 = strlen("--version");
          if (! ((unsigned int )((void const   *)(arg + 1)) - (unsigned int )((void const   *)arg) == 1U)) {
            goto _L___2;
          } else {
            if (__s1_len___0 >= 4U) {
              _L___2: 
              if (! ((unsigned int )((void const   *)("--version" + 1)) - (unsigned int )((void const   *)"--version") == 1U)) {
                tmp___20 = 1;
              } else {
                if (__s2_len___0 >= 4U) {
                  tmp___20 = 1;
                } else {
                  tmp___20 = 0;
                }
              }
            } else {
              tmp___20 = 0;
            }
          }
          if (tmp___20) {
            tmp___16 = __builtin_strcmp((char const   *)arg, "--version");
          } else {
            tmp___19 = __builtin_strcmp((char const   *)arg, "--version");
            tmp___16 = tmp___19;
          }
        } else {
          tmp___19 = __builtin_strcmp((char const   *)arg, "--version");
          tmp___16 = tmp___19;
        }
        if (tmp___16) {
          if (0) {
            __s1_len = strlen((char const   *)arg);
            __s2_len = strlen("--");
            if (! ((unsigned int )((void const   *)(arg + 1)) - (unsigned int )((void const   *)arg) == 1U)) {
              goto _L___0;
            } else {
              if (__s1_len >= 4U) {
                _L___0: 
                if (! ((unsigned int )((void const   *)("--" + 1)) - (unsigned int )((void const   *)"--") == 1U)) {
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
              tmp___6 = __builtin_strcmp((char const   *)arg, "--");
            } else {
              tmp___9 = __builtin_strcmp((char const   *)arg, "--");
              tmp___6 = tmp___9;
            }
          } else {
            tmp___9 = __builtin_strcmp((char const   *)arg, "--");
            tmp___6 = tmp___9;
          }
          if (! tmp___6) {
            argc --;
            argv ++;
            break;
          }
        } else {
          arg = (char *)"-V";
        }
      } else {
        arg = (char *)"-h";
      }
    }
    i___0 = 1;
    while ((int )*(arg + i___0) != 0) {
      switch ((int )*(arg + i___0)) {
      case 43: 
      C_plus_plus = 1;
      break;
      case 66: 
      interactive = 0;
      break;
      case 98: 
      backing_up_report = 1;
      break;
      case 99: 
      break;
      case 67: 
      if (i___0 != 1) {
        flexerror("-C flag must be given separately");
      }
      if (! sawcmpflag) {
        useecs = 0;
        usemecs = 0;
        fulltbl = 0;
        sawcmpflag = 1;
      }
      i___0 ++;
      while ((int )*(arg + i___0) != 0) {
        switch ((int )*(arg + i___0)) {
        case 97: 
        long_align = 1;
        break;
        case 101: 
        useecs = 1;
        break;
        case 70: 
        fullspd = 1;
        break;
        case 102: 
        fulltbl = 1;
        break;
        case 109: 
        usemecs = 1;
        break;
        case 114: 
        use_read = 1;
        break;
        default: 
        lerrif("unknown -C option \'%c\'", (int )*(arg + i___0));
        break;
        }
        i___0 ++;
      }
      goto get_next_arg;
      case 100: 
      ddebug = 1;
      break;
      case 102: 
      usemecs = 0;
      useecs = usemecs;
      fulltbl = 1;
      use_read = fulltbl;
      break;
      case 70: 
      usemecs = 0;
      useecs = usemecs;
      fullspd = 1;
      use_read = fullspd;
      break;
      case 63: 
      case 104: 
      usage();
      exit(0);
      case 73: 
      interactive = 1;
      break;
      case 105: 
      caseins = 1;
      break;
      case 108: 
      lex_compat = 1;
      break;
      case 76: 
      gen_line_dirs = 0;
      break;
      case 110: 
      break;
      case 111: 
      if (i___0 != 1) {
        flexerror("-o flag must be given separately");
      }
      outfilename = (arg + i___0) + 1;
      did_outfilename = 1;
      goto get_next_arg;
      case 80: 
      if (i___0 != 1) {
        flexerror("-P flag must be given separately");
      }
      prefix = (arg + i___0) + 1;
      goto get_next_arg;
      case 112: 
      performance_report ++;
      break;
      case 83: 
      if (i___0 != 1) {
        flexerror("-S flag must be given separately");
      }
      skelname = (arg + i___0) + 1;
      goto get_next_arg;
      case 115: 
      spprdflt = 1;
      break;
      case 116: 
      use_stdout = 1;
      break;
      case 84: 
      trace = 1;
      break;
      case 118: 
      printstats = 1;
      break;
      case 86: 
      printf((char const   */* __restrict  */)"%s version %s\n", program_name,
             flex_version);
      exit(0);
      case 119: 
      nowarn = 1;
      break;
      case 55: 
      csize = 128;
      break;
      case 56: 
      csize = 256;
      break;
      default: 
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s: unknown flag \'%c\'.  For usage, try\n\t%s --help\n",
              program_name, (int )*(arg + i___0), program_name);
      exit(1);
      }
      i___0 ++;
    }
    get_next_arg: 
    argc --;
    argv ++;
  }
  num_input_files = argc;
  input_files = argv;
  if (num_input_files > 0) {
    tmp___31 = *(input_files + 0);
  } else {
    tmp___31 = (char *)((void *)0);
  }
  set_input_file(tmp___31);
  lastnfa = 0;
  lastdfa = lastnfa;
  lastsc = lastdfa;
  lastccl = lastsc;
  default_rule = 0;
  num_eof_rules = default_rule;
  num_rules = num_eof_rules;
  tmpuses = 0;
  numsnpairs = tmpuses;
  numas = numsnpairs;
  totnst = 0;
  dfaeql = totnst;
  hshcol = dfaeql;
  num_reallocs = hshcol;
  eps2 = num_reallocs;
  numeps = eps2;
  numecs = numeps;
  dataline = 0;
  datapos = dataline;
  eofseen = datapos;
  hshsave = eofseen;
  numdup = hshsave;
  numuniq = numdup;
  numprots = 0;
  onesp = numprots;
  num_backing_up = onesp;
  bol_needed = 0;
  variable_trailing_context_rules = bol_needed;
  sectnum = 1;
  linenum = sectnum;
  out_linenum = linenum;
  firstprot = 0;
  lastprot = 1;
  set_up_initial_allocations();
  return;
}
}

static char yy_stdinit[37]   = 
  {(char )'F', (char )'I', (char )'L', (char )'E', (char )' ', (char )'*',
   (char )'y', (char )'y', (char )'i', (char )'n', (char )' ', (char )'=',
   (char )' ', (char )'s', (char )'t', (char )'d', (char )'i', (char )'n',
   (char )',', (char )' ', (char )'*', (char )'y', (char )'y', (char )'o',
   (char )'u', (char )'t', (char )' ', (char )'=', (char )' ', (char )'s',
   (char )'t', (char )'d', (char )'o', (char )'u', (char )'t', (char )';',
   (char )'\000'};

static char yy_nostdinit[46]   = 
  {(char )'F', (char )'I', (char )'L', (char )'E', (char )' ', (char )'*',
   (char )'y', (char )'y', (char )'i', (char )'n', (char )' ', (char )'=',
   (char )' ', (char )'(', (char )'F', (char )'I', (char )'L', (char )'E',
   (char )' ', (char )'*', (char )')', (char )' ', (char )'0', (char )',',
   (char )' ', (char )'*', (char )'y', (char )'y', (char )'o', (char )'u',
   (char )'t', (char )' ', (char )'=', (char )' ', (char )'(', (char )'F',
   (char )'I', (char )'L', (char )'E', (char )' ', (char )'*', (char )')',
   (char )' ', (char )'0', (char )';', (char )'\000'};

void readin(void) 
{ int tmp ;

  {
  line_directive_out((FILE *)0, 1);
  tmp = yyparse();
  if (tmp) {
    pinpoint_message((char *)"fatal parse error");
    flexend(1);
  }
  if (syntaxerror) {
    flexend(1);
  }
  if (backing_up_report) {
    backing_up_file = fopen((char const   */* __restrict  */)((char const   *)backing_name),
                            (char const   */* __restrict  */)"w");
    if ((unsigned int )backing_up_file == (unsigned int )((void *)0)) {
      lerrsf("could not create backing-up info file %s",
             (char const   *)backing_name);
    }
  } else {
    backing_up_file = (FILE *)((void *)0);
  }
  if (yymore_really_used == 1) {
    yymore_used = 1;
  } else {
    if (yymore_really_used == 0) {
      yymore_used = 0;
    }
  }
  if (reject_really_used == 1) {
    reject = 1;
  } else {
    if (reject_really_used == 0) {
      reject = 0;
    }
  }
  if (performance_report > 0) {
    if (lex_compat) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"-l AT&T lex compatibility option entails a large performance penalty\n");
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)" and may be the actual source of other reported performance penalties\n");
    } else {
      if (do_yylineno) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%%option yylineno entails a large performance penalty\n");
      }
    }
    if (performance_report > 1) {
      if (interactive) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"-I (interactive) entails a minor performance penalty\n");
      }
      if (yymore_used) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"yymore() entails a minor performance penalty\n");
      }
    }
    if (reject) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"REJECT entails a large performance penalty\n");
    }
    if (variable_trailing_context_rules) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Variable trailing context rules entail a large performance penalty\n");
    }
  }
  if (reject) {
    real_reject = 1;
  }
  if (variable_trailing_context_rules) {
    reject = 1;
  }
  if (fulltbl) {
    goto _L;
  } else {
    if (fullspd) {
      _L: 
      if (reject) {
        if (real_reject) {
          flexerror("REJECT cannot be used with -f or -F");
        } else {
          if (do_yylineno) {
            flexerror("%option yylineno cannot be used with -f or -F");
          } else {
            flexerror("variable trailing context rules cannot be used with -f or -F");
          }
        }
      }
    }
  }
  if (reject) {
    outn("\n#define YY_USES_REJECT");
  }
  if (! do_yywrap) {
    outn("\n#define yywrap() 1");
    outn("#define YY_SKIP_YYWRAP");
  }
  if (ddebug) {
    outn("\n#define FLEX_DEBUG");
  }
  if (csize == 256) {
    outn("typedef unsigned char YY_CHAR;");
  } else {
    outn("typedef char YY_CHAR;");
  }
  if (C_plus_plus) {
    outn("#define yytext_ptr yytext");
    if (interactive) {
      outn("#define YY_INTERACTIVE");
    }
  } else {
    if (do_stdinit) {
      outn("#ifdef VMS");
      outn("#ifndef __VMS_POSIX");
      outn((char const   *)(yy_nostdinit));
      outn("#else");
      outn((char const   *)(yy_stdinit));
      outn("#endif");
      outn("#else");
      outn((char const   *)(yy_stdinit));
      outn("#endif");
    } else {
      outn((char const   *)(yy_nostdinit));
    }
  }
  if (fullspd) {
    outn("typedef yyconst struct yy_trans_info *yy_state_type;");
  } else {
    if (! C_plus_plus) {
      outn("typedef int yy_state_type;");
    }
  }
  if (ddebug) {
    outn("\n#define FLEX_DEBUG");
  }
  if (lex_compat) {
    outn("#define YY_FLEX_LEX_COMPAT");
  }
  if (do_yylineno) {
    if (! C_plus_plus) {
      outn("extern int yylineno;");
      outn("int yylineno = 1;");
    }
  }
  if (C_plus_plus) {
    outn("\n#include <FlexLexer.h>");
    if (yyclass) {
      outn("int yyFlexLexer::yylex()");
      outn("\t{");
      outn("\tLexerError( \"yyFlexLexer::yylex invoked but %option yyclass used\" );");
      outn("\treturn 0;");
      outn("\t}");
      out_str("\n#define YY_DECL int %s::yylex()\n", (char const   *)yyclass);
    }
  } else {
    if (yytext_is_array) {
      outn("extern char yytext[];\n");
    } else {
      outn("extern char *yytext;");
      outn("#define yytext_ptr yytext");
    }
    if (yyclass) {
      flexerror("%option yyclass only meaningful for C++ scanners");
    }
  }
  if (useecs) {
    numecs = cre8ecs(nextecm, ecgroup, csize);
  } else {
    numecs = csize;
  }
  ecgroup[0] = ecgroup[csize];
  if (ecgroup[0] < 0) {
    NUL_ec = - ecgroup[0];
  } else {
    NUL_ec = ecgroup[0];
  }
  if (useecs) {
    ccl2ecl();
  }
  return;
}
}

void set_up_initial_allocations(void) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  void *tmp___12 ;
  void *tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  void *tmp___16 ;
  void *tmp___17 ;
  void *tmp___18 ;
  void *tmp___19 ;
  void *tmp___20 ;
  void *tmp___21 ;
  void *tmp___22 ;
  void *tmp___23 ;
  void *tmp___24 ;
  void *tmp___25 ;
  void *tmp___26 ;
  void *tmp___27 ;
  void *tmp___28 ;
  void *tmp___29 ;

  {
  current_mns = 2000;
  tmp = allocate_array(current_mns, (unsigned int )sizeof(int ));
  firstst = (int *)tmp;
  tmp___0 = allocate_array(current_mns, (unsigned int )sizeof(int ));
  lastst = (int *)tmp___0;
  tmp___1 = allocate_array(current_mns, (unsigned int )sizeof(int ));
  finalst = (int *)tmp___1;
  tmp___2 = allocate_array(current_mns, (unsigned int )sizeof(int ));
  transchar = (int *)tmp___2;
  tmp___3 = allocate_array(current_mns, (unsigned int )sizeof(int ));
  trans1 = (int *)tmp___3;
  tmp___4 = allocate_array(current_mns, (unsigned int )sizeof(int ));
  trans2 = (int *)tmp___4;
  tmp___5 = allocate_array(current_mns, (unsigned int )sizeof(int ));
  accptnum = (int *)tmp___5;
  tmp___6 = allocate_array(current_mns, (unsigned int )sizeof(int ));
  assoc_rule = (int *)tmp___6;
  tmp___7 = allocate_array(current_mns, (unsigned int )sizeof(int ));
  state_type = (int *)tmp___7;
  current_max_rules = 100;
  tmp___8 = allocate_array(current_max_rules, (unsigned int )sizeof(int ));
  rule_type = (int *)tmp___8;
  tmp___9 = allocate_array(current_max_rules, (unsigned int )sizeof(int ));
  rule_linenum = (int *)tmp___9;
  tmp___10 = allocate_array(current_max_rules, (unsigned int )sizeof(int ));
  rule_useful = (int *)tmp___10;
  current_max_scs = 40;
  tmp___11 = allocate_array(current_max_scs, (unsigned int )sizeof(int ));
  scset = (int *)tmp___11;
  tmp___12 = allocate_array(current_max_scs, (unsigned int )sizeof(int ));
  scbol = (int *)tmp___12;
  tmp___13 = allocate_array(current_max_scs, (unsigned int )sizeof(int ));
  scxclu = (int *)tmp___13;
  tmp___14 = allocate_array(current_max_scs, (unsigned int )sizeof(int ));
  sceof = (int *)tmp___14;
  tmp___15 = allocate_array(current_max_scs, (unsigned int )sizeof(char *));
  scname = (char **)tmp___15;
  current_maxccls = 100;
  tmp___16 = allocate_array(current_maxccls, (unsigned int )sizeof(int ));
  cclmap = (int *)tmp___16;
  tmp___17 = allocate_array(current_maxccls, (unsigned int )sizeof(int ));
  ccllen = (int *)tmp___17;
  tmp___18 = allocate_array(current_maxccls, (unsigned int )sizeof(int ));
  cclng = (int *)tmp___18;
  current_max_ccl_tbl_size = 500;
  tmp___19 = allocate_array(current_max_ccl_tbl_size,
                            (unsigned int )sizeof(unsigned char ));
  ccltbl = (unsigned char *)tmp___19;
  current_max_dfa_size = 750;
  current_max_xpairs = 2000;
  tmp___20 = allocate_array(current_max_xpairs, (unsigned int )sizeof(int ));
  nxt = (int *)tmp___20;
  tmp___21 = allocate_array(current_max_xpairs, (unsigned int )sizeof(int ));
  chk = (int *)tmp___21;
  current_max_template_xpairs = 2500;
  tmp___22 = allocate_array(current_max_template_xpairs,
                            (unsigned int )sizeof(int ));
  tnxt = (int *)tmp___22;
  current_max_dfas = 1000;
  tmp___23 = allocate_array(current_max_dfas, (unsigned int )sizeof(int ));
  base = (int *)tmp___23;
  tmp___24 = allocate_array(current_max_dfas, (unsigned int )sizeof(int ));
  def = (int *)tmp___24;
  tmp___25 = allocate_array(current_max_dfas, (unsigned int )sizeof(int ));
  dfasiz = (int *)tmp___25;
  tmp___26 = allocate_array(current_max_dfas, (unsigned int )sizeof(int ));
  accsiz = (int *)tmp___26;
  tmp___27 = allocate_array(current_max_dfas, (unsigned int )sizeof(int ));
  dhash = (int *)tmp___27;
  tmp___28 = allocate_array(current_max_dfas, (unsigned int )sizeof(int *));
  dss = (int **)tmp___28;
  tmp___29 = allocate_array(current_max_dfas,
                            (unsigned int )sizeof(union dfaacc_union ));
  dfaacc = (union dfaacc_union *)tmp___29;
  nultrans = (int *)0;
  return;
}
}

void usage(void) 
{ FILE *f ;
  char const   *tmp ;

  {
  f = stdout;
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"%s [-bcdfhilnpstvwBFILTV78+? -C[aefFmr] -ooutput -Pprefix -Sskeleton]\n",
          program_name);
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t[--help --version] [file ...]\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-b  generate backing-up information to %s\n",
          backing_name);
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-c  do-nothing POSIX option\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-d  turn on debug mode in generated scanner\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-f  generate fast, large scanner\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-h  produce this help message\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-i  generate case-insensitive scanner\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-l  maximal compatibility with original lex\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-n  do-nothing POSIX option\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-p  generate performance report to stderr\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-s  suppress default rule to ECHO unmatched text\n");
  if (! did_outfilename) {
    if (C_plus_plus) {
      tmp = "cc";
    } else {
      tmp = "c";
    }
    sprintf((char */* __restrict  */)(outfile_path),
            (char const   */* __restrict  */)((char const   *)outfile_template),
            prefix, tmp);
    outfilename = outfile_path;
  }
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-t  write generated scanner on stdout instead of %s\n",
          outfilename);
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-v  write summary of scanner statistics to f\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-w  do not generate warnings\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-B  generate batch scanner (opposite of -I)\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-F  use alternative fast scanner representation\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-I  generate interactive scanner (opposite of -B)\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-L  suppress #line directives in scanner\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-T  %s should run in trace mode\n",
          program_name);
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-V  report %s version\n",
          program_name);
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-7  generate 7-bit scanner\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-8  generate 8-bit scanner\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-+  generate C++ scanner class\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-?  produce this help message\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-C  specify degree of table compression (default is -Cem):\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t\t-Ca  trade off larger tables for better memory alignment\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t\t-Ce  construct equivalence classes\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t\t-Cf  do not compress scanner tables; use -f representation\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t\t-CF  do not compress scanner tables; use -F representation\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t\t-Cm  construct meta-equivalence classes\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t\t-Cr  use read() instead of stdio for scanner input\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-o  specify output filename\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-P  specify scanner prefix other than \"yy\"\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t-S  specify skeleton file\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t--help     produce this help message\n");
  fprintf((FILE */* __restrict  */)f,
          (char const   */* __restrict  */)"\t--version  report %s version\n",
          program_name);
  return;
}
}

extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;

extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;

extern int puts(char const   *__s ) ;

extern unsigned short const   **__ctype_b_loc(void)  __attribute__((__const__)) ;

extern __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__const__)) ;

__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;

__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline static int tolower(int __c ) 
{ __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp___1 = __ctype_tolower_loc();
      tmp___0 = (int )*(*tmp___1 + __c);
    } else {
      tmp___0 = (int )((int const   )__c);
    }
  } else {
    tmp___0 = (int )((int const   )__c);
  }
  return (tmp___0);
}
}

char const   *skel[1542] ;

void *flex_alloc(size_t size ) ;

void *flex_realloc(void *ptr , size_t size ) ;

void action_define(char *defname , int value ) ;

void add_action(char *new_text ) ;

int all_lower(char *str ) ;

int all_upper(char *str ) ;

char *copy_string(char const   *str ) ;

unsigned char *copy_unsigned_string(unsigned char *str ) ;

void cshell(unsigned char *v , int n , int special_case_0 ) ;

int htoi(unsigned char *str ) ;

void mark_defs1(void) ;

void mark_prolog(void) ;

int myctoi(char *array ) ;

unsigned char myesc(unsigned char *array ) ;

int otoi(unsigned char *str ) ;

void out_dec2(char const   *fmt , int n1 , int n2 ) ;

void out_line_count(char const   *str ) ;

void *yy_flex_xmalloc(int size ) ;

void zero_out(char *region_ptr , size_t size_in_bytes ) ;

void format_pinpoint_message(char *msg , char *arg ) ;

void action_define(char *defname , int value ) 
{ char buf[2048] ;
  size_t tmp ;

  {
  tmp = strlen((char const   *)defname);
  if ((int )tmp > 1024) {
    format_pinpoint_message((char *)"name \"%s\" ridiculously long", defname);
    return;
  }
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)"#define %s %d\n", defname, value);
  add_action(buf);
  return;
}
}

void add_action(char *new_text ) 
{ int len ;
  size_t tmp ;
  int new_size ;
  void *tmp___0 ;

  {
  tmp = strlen((char const   *)new_text);
  len = (int )tmp;
  while (len + action_index >= action_size - 10) {
    new_size = action_size * 2;
    if (new_size <= 0) {
      action_size += action_size / 8;
    } else {
      action_size = new_size;
    }
    tmp___0 = reallocate_array((void *)action_array, action_size,
                               (unsigned int )sizeof(char ));
    action_array = (char *)tmp___0;
  }
  strcpy((char */* __restrict  */)(action_array + action_index),
         (char const   */* __restrict  */)((char const   *)new_text));
  action_index += len;
  return;
}
}

void *allocate_array(int size , size_t element_size ) 
{ register void *mem ;
  size_t num_bytes ;

  {
  num_bytes = element_size * (unsigned int )size;
  mem = flex_alloc(num_bytes);
  if (! mem) {
    flexfatal("memory allocation failed in allocate_array()");
  }
  return (mem);
}
}

int all_lower(char *str ) 
{ unsigned short const   **tmp ;

  {
  while (*str) {
    if (! (((int )((unsigned char )*str) & -128) == 0)) {
      return (0);
    } else {
      tmp = __ctype_b_loc();
      if (! ((int const   )*(*tmp + (int )*str) & 512)) {
        return (0);
      }
    }
    str ++;
  }
  return (1);
}
}

int all_upper(char *str ) 
{ unsigned short const   **tmp ;

  {
  while (*str) {
    if (! (((int )((unsigned char )*str) & -128) == 0)) {
      return (0);
    } else {
      tmp = __ctype_b_loc();
      if (! ((int const   )*(*tmp + (int )*str) & 256)) {
        return (0);
      }
    }
    str ++;
  }
  return (1);
}
}

void bubble(int *v , int n ) 
{ register int i___0 ;
  register int j ;
  register int k ;

  {
  i___0 = n;
  while (i___0 > 1) {
    j = 1;
    while (j < i___0) {
      if (*(v + j) > *(v + (j + 1))) {
        k = *(v + j);
        *(v + j) = *(v + (j + 1));
        *(v + (j + 1)) = k;
      }
      j ++;
    }
    i___0 --;
  }
  return;
}
}

void check_char(int c ) 
{ char *tmp ;
  char *tmp___0 ;

  {
  if (c >= 256) {
    tmp = readable_form(c);
    lerrsf("bad character \'%s\' detected in check_char()", (char const   *)tmp);
  }
  if (c >= csize) {
    tmp___0 = readable_form(c);
    lerrsf("scanner requires -8 flag to use the character %s",
           (char const   *)tmp___0);
  }
  return;
}
}

unsigned char clower(int c ) 
{ int tmp___3 ;
  int __res___0 ;
  __int32_t const   **tmp___6 ;
  unsigned short const   **tmp___7 ;

  {
  if ((c & -128) == 0) {
    tmp___7 = __ctype_b_loc();
    if ((int const   )*(*tmp___7 + c) & 256) {
      if (sizeof(c) > 1UL) {
        __res___0 = tolower(c);
      } else {
        tmp___6 = __ctype_tolower_loc();
        __res___0 = (int )*(*tmp___6 + c);
      }
      tmp___3 = __res___0;
    } else {
      tmp___3 = c;
    }
  } else {
    tmp___3 = c;
  }
  return ((unsigned char )tmp___3);
}
}

char *copy_string(char const   *str ) 
{ register char const   *c1 ;
  register char *c2 ;
  char *copy ;
  unsigned int size ;
  void *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;

  {
  c1 = str;
  while (*c1) {
    c1 ++;
  }
  size = (unsigned int )((unsigned long )((unsigned int )((c1 - str) + 1)) * sizeof(char ));
  tmp = flex_alloc(size);
  copy = (char *)tmp;
  if ((unsigned int )copy == (unsigned int )((void *)0)) {
    flexfatal("dynamic memory failure in copy_string()");
  }
  c2 = copy;
  while (1) {
    tmp___0 = c2;
    c2 ++;
    tmp___1 = str;
    str ++;
    *tmp___0 = (char )*tmp___1;
    if (! ((int )*tmp___0 != 0)) {
      break;
    }
  }
  return (copy);
}
}

unsigned char *copy_unsigned_string(unsigned char *str ) 
{ register unsigned char *c ;
  unsigned char *copy ;
  void *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;

  {
  c = str;
  while (*c) {
    c ++;
  }
  tmp = allocate_array((c - str) + 1, (unsigned int )sizeof(unsigned char ));
  copy = (unsigned char *)tmp;
  c = copy;
  while (1) {
    tmp___0 = c;
    c ++;
    tmp___1 = str;
    str ++;
    *tmp___0 = *tmp___1;
    if (! ((int )*tmp___0 != 0)) {
      break;
    }
  }
  return (copy);
}
}

void cshell(unsigned char *v , int n , int special_case_0 ) 
{ int gap ;
  int i___0 ;
  int j ;
  int jg ;
  unsigned char k ;

  {
  gap = n / 2;
  while (gap > 0) {
    i___0 = gap;
    while (i___0 < n) {
      j = i___0 - gap;
      while (j >= 0) {
        jg = j + gap;
        if (special_case_0) {
          if ((int )*(v + jg) == 0) {
            break;
          } else {
            if ((int )*(v + j) != 0) {
              if ((int )*(v + j) <= (int )*(v + jg)) {
                break;
              }
            }
          }
        } else {
          if ((int )*(v + j) <= (int )*(v + jg)) {
            break;
          }
        }
        k = *(v + j);
        *(v + j) = *(v + jg);
        *(v + jg) = k;
        j -= gap;
      }
      i___0 ++;
    }
    gap /= 2;
  }
  return;
}
}

void dataend(void) 
{ 

  {
  if (datapos > 0) {
    dataflush();
  }
  outn("    } ;\n");
  dataline = 0;
  datapos = 0;
  return;
}
}

void dataflush(void) 
{ 

  {
  outc('\n');
  dataline ++;
  if (dataline >= 10) {
    outc('\n');
    dataline = 0;
  }
  datapos = 0;
  return;
}
}

void flexerror(char const   *msg ) 
{ 

  {
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"%s: %s\n", program_name, msg);
  flexend(1);
  return;
}
}

void flexfatal(char const   *msg ) 
{ 

  {
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"%s: fatal internal error, %s\n",
          program_name, msg);
  exit(1);
}
}

int htoi(unsigned char *str ) 
{ unsigned int result ;

  {
  sscanf((char const   */* __restrict  */)((char const   *)((char *)str)),
         (char const   */* __restrict  */)"%x", & result);
  return ((int )result);
}
}

void lerrif(char const   *msg , int arg ) 
{ char errmsg[2048] ;

  {
  sprintf((char */* __restrict  */)(errmsg),
          (char const   */* __restrict  */)msg, arg);
  flexerror((char const   *)(errmsg));
  return;
}
}

void lerrsf(char const   *msg , char const   *arg ) 
{ char errmsg[2048] ;

  {
  sprintf((char */* __restrict  */)(errmsg),
          (char const   */* __restrict  */)msg, arg);
  flexerror((char const   *)(errmsg));
  return;
}
}

static char line_fmt[15]   = 
  {(char )'#', (char )'l', (char )'i', (char )'n', (char )'e', (char )' ',
   (char )'%', (char )'d', (char )' ', (char )'\"', (char )'%', (char )'s',
   (char )'\"', (char )'\n', (char )'\000'};

void line_directive_out(FILE *output_file , int do_infile ) 
{ char directive[2048] ;
  char filename[2048] ;
  char *s1 ;
  char *s2 ;
  char *s3 ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  if (! gen_line_dirs) {
    return;
  }
  if (do_infile) {
    if (! infilename) {
      return;
    } else {
      goto _L;
    }
  } else {
    _L: 
    if (! do_infile) {
      if (! outfilename) {
        return;
      }
    }
  }
  if (do_infile) {
    s1 = infilename;
  } else {
    s1 = outfilename;
  }
  s2 = filename;
  s3 = & filename[sizeof(filename) - 2UL];
  while (1) {
    if ((unsigned int )s2 < (unsigned int )s3) {
      if (! *s1) {
        break;
      }
    } else {
      break;
    }
    if ((int )*s1 == 92) {
      tmp = s2;
      s2 ++;
      *tmp = (char )'\\';
    }
    tmp___0 = s2;
    s2 ++;
    tmp___1 = s1;
    s1 ++;
    *tmp___0 = *tmp___1;
  }
  *s2 = (char )'\000';
  if (do_infile) {
    sprintf((char */* __restrict  */)(directive),
            (char const   */* __restrict  */)((char const   *)(line_fmt)),
            linenum, filename);
  } else {
    if ((unsigned int )output_file == (unsigned int )stdout) {
      out_linenum ++;
    }
    sprintf((char */* __restrict  */)(directive),
            (char const   */* __restrict  */)((char const   *)(line_fmt)),
            out_linenum, filename);
  }
  if (output_file) {
    fputs((char const   */* __restrict  */)((char const   *)(directive)),
          (FILE */* __restrict  */)output_file);
  } else {
    add_action(directive);
  }
  return;
}
}

void mark_defs1(void) 
{ int tmp ;

  {
  defs1_offset = 0;
  tmp = action_index;
  action_index ++;
  *(action_array + tmp) = (char )'\000';
  prolog_offset = action_index;
  action_offset = prolog_offset;
  *(action_array + action_index) = (char )'\000';
  return;
}
}

void mark_prolog(void) 
{ int tmp ;

  {
  tmp = action_index;
  action_index ++;
  *(action_array + tmp) = (char )'\000';
  action_offset = action_index;
  *(action_array + action_index) = (char )'\000';
  return;
}
}

void mk2data(int value ) 
{ 

  {
  if (datapos >= 10) {
    outc(',');
    dataflush();
  }
  if (datapos == 0) {
    out("    ");
  } else {
    outc(',');
  }
  datapos ++;
  out_dec("%5d", value);
  return;
}
}

void mkdata(int value ) 
{ 

  {
  if (datapos >= 10) {
    outc(',');
    dataflush();
  }
  if (datapos == 0) {
    out("    ");
  } else {
    outc(',');
  }
  datapos ++;
  out_dec("%5d", value);
  return;
}
}

int myctoi(char *array ) 
{ int val ;

  {
  val = 0;
  sscanf((char const   */* __restrict  */)((char const   *)array),
         (char const   */* __restrict  */)"%d", & val);
  return (val);
}
}

unsigned char myesc(unsigned char *array ) 
{ unsigned char c ;
  unsigned char esc_char ;
  int sptr ;
  unsigned short const   **tmp ;
  int tmp___0 ;
  int sptr___0 ;
  unsigned short const   **tmp___1 ;
  int tmp___2 ;

  {
  switch ((int )*(array + 1)) {
  case 98: 
  return ((unsigned char )'\b');
  case 102: 
  return ((unsigned char )'\f');
  case 110: 
  return ((unsigned char )'\n');
  case 114: 
  return ((unsigned char )'\r');
  case 116: 
  return ((unsigned char )'\t');
  case 97: 
  return ((unsigned char )'\a');
  case 118: 
  return ((unsigned char )'\v');
  case 48: 
  case 49: 
  case 50: 
  case 51: 
  case 52: 
  case 53: 
  case 54: 
  case 55: 
  sptr = 1;
  while (1) {
    if (((int )*(array + sptr) & -128) == 0) {
      tmp = __ctype_b_loc();
      if (! ((int const   )*(*tmp + (int )*(array + sptr)) & 2048)) {
        break;
      }
    } else {
      break;
    }
    sptr ++;
  }
  c = *(array + sptr);
  *(array + sptr) = (unsigned char )'\000';
  tmp___0 = otoi(array + 1);
  esc_char = (unsigned char )tmp___0;
  *(array + sptr) = c;
  return (esc_char);
  case 120: 
  sptr___0 = 2;
  while (1) {
    if (((int )*(array + sptr___0) & -128) == 0) {
      tmp___1 = __ctype_b_loc();
      if (! ((int const   )*(*tmp___1 + (int )((char )*(array + sptr___0))) & 4096)) {
        break;
      }
    } else {
      break;
    }
    sptr___0 ++;
  }
  c = *(array + sptr___0);
  *(array + sptr___0) = (unsigned char )'\000';
  tmp___2 = htoi(array + 2);
  esc_char = (unsigned char )tmp___2;
  *(array + sptr___0) = c;
  return (esc_char);
  default: ;
  return (*(array + 1));
  }
}
}

int otoi(unsigned char *str ) 
{ unsigned int result ;

  {
  sscanf((char const   */* __restrict  */)((char const   *)((char *)str)),
         (char const   */* __restrict  */)"%o", & result);
  return ((int )result);
}
}

void out(char const   *str ) 
{ 

  {
  fputs((char const   */* __restrict  */)str, (FILE */* __restrict  */)stdout);
  out_line_count(str);
  return;
}
}

void out_dec(char const   *fmt , int n ) 
{ 

  {
  printf((char const   */* __restrict  */)fmt, n);
  out_line_count(fmt);
  return;
}
}

void out_dec2(char const   *fmt , int n1 , int n2 ) 
{ 

  {
  printf((char const   */* __restrict  */)fmt, n1, n2);
  out_line_count(fmt);
  return;
}
}

void out_hex(char const   *fmt , unsigned int x ) 
{ 

  {
  printf((char const   */* __restrict  */)fmt, x);
  out_line_count(fmt);
  return;
}
}

void out_line_count(char const   *str ) 
{ register int i___0 ;

  {
  i___0 = 0;
  while (*(str + i___0)) {
    if ((int const   )*(str + i___0) == 10) {
      out_linenum ++;
    }
    i___0 ++;
  }
  return;
}
}

void out_str(char const   *fmt , char const   *str ) 
{ 

  {
  printf((char const   */* __restrict  */)fmt, str);
  out_line_count(fmt);
  out_line_count(str);
  return;
}
}

void out_str3(char const   *fmt , char const   *s1 , char const   *s2 ,
              char const   *s3 ) 
{ 

  {
  printf((char const   */* __restrict  */)fmt, s1, s2, s3);
  out_line_count(fmt);
  out_line_count(s1);
  out_line_count(s2);
  out_line_count(s3);
  return;
}
}

void out_str_dec(char const   *fmt , char const   *str , int n ) 
{ 

  {
  printf((char const   */* __restrict  */)fmt, str, n);
  out_line_count(fmt);
  out_line_count(str);
  return;
}
}

void outc(int c ) 
{ 

  {
  _IO_putc(c, stdout);
  if (c == 10) {
    out_linenum ++;
  }
  return;
}
}

void outn(char const   *str ) 
{ 

  {
  puts(str);
  out_line_count(str);
  out_linenum ++;
  return;
}
}

static char rform[10]  ;

char *readable_form(int c ) 
{ 

  {
  if (c >= 0) {
    if (c < 32) {
      goto _L;
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
    if (c >= 127) {
      _L: 
      switch (c) {
      case 8: 
      return ((char *)"\\b");
      case 12: 
      return ((char *)"\\f");
      case 10: 
      return ((char *)"\\n");
      case 13: 
      return ((char *)"\\r");
      case 9: 
      return ((char *)"\\t");
      case 7: 
      return ((char *)"\\a");
      case 11: 
      return ((char *)"\\v");
      default: 
      sprintf((char */* __restrict  */)(rform),
              (char const   */* __restrict  */)"\\%.3o", (unsigned int )c);
      return (rform);
      }
    } else {
      if (c == 32) {
        return ((char *)"\' \'");
      } else {
        rform[0] = (char )c;
        rform[1] = (char )'\000';
        return (rform);
      }
    }
  }
}
}

void *reallocate_array(void *array , int size , size_t element_size ) 
{ register void *new_array ;
  size_t num_bytes ;

  {
  num_bytes = element_size * (unsigned int )size;
  new_array = flex_realloc(array, num_bytes);
  if (! new_array) {
    flexfatal("attempt to increase array size failed");
  }
  return (new_array);
}
}

void skelout(void) 
{ char buf_storage[2048] ;
  char *buf ;
  int do_copy ;
  int tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;

  {
  buf = buf_storage;
  do_copy = 1;
  while (1) {
    if (skelfile) {
      tmp___2 = fgets((char */* __restrict  */)buf, 2048,
                      (FILE */* __restrict  */)skelfile);
      tmp___1 = (unsigned int )tmp___2 != (unsigned int )((void *)0);
    } else {
      tmp___3 = skel_ind;
      skel_ind ++;
      buf = (char *)skel[tmp___3];
      tmp___1 = (unsigned int )buf != (unsigned int )((char *)0);
    }
    if (! tmp___1) {
      break;
    }
    if ((int )*(buf + 0) == 37) {
      switch ((int )*(buf + 1)) {
      case 37: 
      return;
      case 43: 
      do_copy = C_plus_plus;
      break;
      case 45: 
      do_copy = ! C_plus_plus;
      break;
      case 42: 
      do_copy = 1;
      break;
      default: 
      flexfatal("bad line in skeleton file");
      }
    } else {
      if (do_copy) {
        if (skelfile) {
          out((char const   *)buf);
        } else {
          outn((char const   *)buf);
        }
      }
    }
  }
  return;
}
}

void transition_struct_out(int element_v , int element_n ) 
{ 

  {
  out_dec2(" {%4d,%4d },", element_v, element_n);
  datapos += 14;
  if (datapos >= 65) {
    outc('\n');
    dataline ++;
    if (dataline % 10 == 0) {
      outc('\n');
    }
    datapos = 0;
  }
  return;
}
}

void *yy_flex_xmalloc(int size ) 
{ void *result ;
  void *tmp ;

  {
  tmp = flex_alloc((unsigned int )size);
  result = tmp;
  if (! result) {
    flexfatal("memory allocation failed in yy_flex_xmalloc()");
  }
  return (result);
}
}

void zero_out(char *region_ptr , size_t size_in_bytes ) 
{ register char *rp ;
  register char *rp_end ;
  char *tmp ;

  {
  rp = region_ptr;
  rp_end = region_ptr + size_in_bytes;
  while ((unsigned int )rp < (unsigned int )rp_end) {
    tmp = rp;
    rp ++;
    *tmp = (char)0;
  }
  return;
}
}

void add_accept(int mach , int accepting_number ) ;

int copysingl(int singl , int num ) ;

void finish_rule(int mach , int variable_trail_rule___0 , int headcnt___0 ,
                 int trailcnt___0 ) ;

int link_machines(int first , int last ) ;

void mark_beginning_as_normal(int mach ) ;

int mkclos(int state ) ;

int mkopt(int mach ) ;

int mkor(int first , int second ) ;

int mkposcl(int state ) ;

int mkrep(int mach , int lb , int ub ) ;

int mkstate(int sym ) ;

void new_rule(void) ;

int dupmachine(int mach ) ;

void mkxtion(int statefrom , int stateto ) ;

void add_accept(int mach , int accepting_number ) 
{ int astate ;
  int tmp ;

  {
  if (*(transchar + *(finalst + mach)) == 257) {
    *(accptnum + *(finalst + mach)) = accepting_number;
  } else {
    tmp = mkstate(257);
    astate = tmp;
    *(accptnum + astate) = accepting_number;
    link_machines(mach, astate);
  }
  return;
}
}

int copysingl(int singl , int num ) 
{ int copy ;
  int i___0 ;
  int tmp ;

  {
  copy = mkstate(257);
  i___0 = 1;
  while (i___0 <= num) {
    tmp = dupmachine(singl);
    copy = link_machines(copy, tmp);
    i___0 ++;
  }
  return (copy);
}
}

void dumpnfa(int state1 ) 
{ int sym ;
  int tsp1 ;
  int tsp2 ;
  int anum ;
  int ns ;

  {
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"\n\n********** beginning dump of nfa with start state %d\n",
          state1);
  ns = 1;
  while (ns <= lastnfa) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"state # %4d\t", ns);
    sym = *(transchar + ns);
    tsp1 = *(trans1 + ns);
    tsp2 = *(trans2 + ns);
    anum = *(accptnum + ns);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%3d:  %4d, %4d", sym, tsp1, tsp2);
    if (anum != 0) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"  [%d]", anum);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"\n");
    ns ++;
  }
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"********** end of dump\n");
  return;
}
}

int dupmachine(int mach ) 
{ int i___0 ;
  int init ;
  int state_offset ;
  int state ;
  int last ;

  {
  state = 0;
  last = *(lastst + mach);
  i___0 = *(firstst + mach);
  while (i___0 <= last) {
    state = mkstate(*(transchar + i___0));
    if (*(trans1 + i___0) != 0) {
      mkxtion(*(finalst + state), (*(trans1 + i___0) + state) - i___0);
      if (*(transchar + i___0) == 257) {
        if (*(trans2 + i___0) != 0) {
          mkxtion(*(finalst + state), (*(trans2 + i___0) + state) - i___0);
        }
      }
    }
    *(accptnum + state) = *(accptnum + i___0);
    i___0 ++;
  }
  if (state == 0) {
    flexfatal("empty machine in dupmachine()");
  }
  state_offset = (state - i___0) + 1;
  init = mach + state_offset;
  *(firstst + init) = *(firstst + mach) + state_offset;
  *(finalst + init) = *(finalst + mach) + state_offset;
  *(lastst + init) = *(lastst + mach) + state_offset;
  return (init);
}
}

void finish_rule(int mach , int variable_trail_rule___0 , int headcnt___0 ,
                 int trailcnt___0 ) 
{ char action_text[2048] ;
  char *scanner_cp ;
  char *scanner_bp ;

  {
  add_accept(mach, num_rules);
  *(rule_linenum + num_rules) = linenum;
  if (continued_action) {
    (*(rule_linenum + num_rules)) --;
  }
  sprintf((char */* __restrict  */)(action_text),
          (char const   */* __restrict  */)"case %d:\n", num_rules);
  add_action(action_text);
  if (variable_trail_rule___0) {
    *(rule_type + num_rules) = 1;
    if (performance_report > 0) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Variable trailing context rule at line %d\n",
              *(rule_linenum + num_rules));
    }
    variable_trailing_context_rules = 1;
  } else {
    *(rule_type + num_rules) = 0;
    if (headcnt___0 > 0) {
      goto _L;
    } else {
      if (trailcnt___0 > 0) {
        _L: 
        scanner_cp = (char *)"yy_c_buf_p = yy_cp";
        scanner_bp = (char *)"yy_bp";
        add_action((char *)"*yy_cp = yy_hold_char; /* undo effects of setting up yytext */\n");
        if (headcnt___0 > 0) {
          sprintf((char */* __restrict  */)(action_text),
                  (char const   */* __restrict  */)"%s = %s + %d;\n",
                  scanner_cp, scanner_bp, headcnt___0);
          add_action(action_text);
        } else {
          sprintf((char */* __restrict  */)(action_text),
                  (char const   */* __restrict  */)"%s -= %d;\n", scanner_cp,
                  trailcnt___0);
          add_action(action_text);
        }
        add_action((char *)"YY_DO_BEFORE_ACTION; /* set up yytext again */\n");
      }
    }
  }
  if (! continued_action) {
    add_action((char *)"YY_RULE_SETUP\n");
  }
  line_directive_out((FILE *)0, 1);
  return;
}
}

int link_machines(int first , int last ) 
{ 

  {
  if (first == 0) {
    return (last);
  } else {
    if (last == 0) {
      return (first);
    } else {
      mkxtion(*(finalst + first), last);
      *(finalst + first) = *(finalst + last);
      if (*(lastst + first) > *(lastst + last)) {
        *(lastst + first) = *(lastst + first);
      } else {
        *(lastst + first) = *(lastst + last);
      }
      if (*(firstst + first) < *(firstst + last)) {
        *(firstst + first) = *(firstst + first);
      } else {
        *(firstst + first) = *(firstst + last);
      }
      return (first);
    }
  }
}
}

void mark_beginning_as_normal(int mach ) 
{ 

  {
  switch (*(state_type + mach)) {
  case 1: 
  return;
  case 2: 
  *(state_type + mach) = 1;
  if (*(transchar + mach) == 257) {
    if (*(trans1 + mach) != 0) {
      mark_beginning_as_normal(*(trans1 + mach));
    }
    if (*(trans2 + mach) != 0) {
      mark_beginning_as_normal(*(trans2 + mach));
    }
  }
  break;
  default: 
  flexerror("bad state type in mark_beginning_as_normal()");
  break;
  }
  return;
}
}

int mkbranch(int first , int second ) 
{ int eps___0 ;

  {
  if (first == 0) {
    return (second);
  } else {
    if (second == 0) {
      return (first);
    }
  }
  eps___0 = mkstate(257);
  mkxtion(eps___0, first);
  mkxtion(eps___0, second);
  return (eps___0);
}
}

int mkclos(int state ) 
{ int tmp ;
  int tmp___0 ;

  {
  tmp = mkposcl(state);
  tmp___0 = mkopt(tmp);
  return (tmp___0);
}
}

int mkopt(int mach ) 
{ int eps___0 ;

  {
  if (*(transchar + *(finalst + mach)) == 257) {
    if (! (*(trans1 + *(finalst + mach)) == 0)) {
      eps___0 = mkstate(257);
      mach = link_machines(mach, eps___0);
    }
  } else {
    eps___0 = mkstate(257);
    mach = link_machines(mach, eps___0);
  }
  eps___0 = mkstate(257);
  mach = link_machines(eps___0, mach);
  mkxtion(mach, *(finalst + mach));
  return (mach);
}
}

int mkor(int first , int second ) 
{ int eps___0 ;
  int orend ;

  {
  if (first == 0) {
    return (second);
  } else {
    if (second == 0) {
      return (first);
    } else {
      eps___0 = mkstate(257);
      first = link_machines(eps___0, first);
      mkxtion(first, second);
      if (*(transchar + *(finalst + first)) == 257) {
        if (*(trans1 + *(finalst + first)) == 0) {
          if (*(accptnum + *(finalst + first)) == 0) {
            orend = *(finalst + first);
            mkxtion(*(finalst + second), orend);
          } else {
            goto _L___0;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0: 
        if (*(transchar + *(finalst + second)) == 257) {
          if (*(trans1 + *(finalst + second)) == 0) {
            if (*(accptnum + *(finalst + second)) == 0) {
              orend = *(finalst + second);
              mkxtion(*(finalst + first), orend);
            } else {
              eps___0 = mkstate(257);
              first = link_machines(first, eps___0);
              orend = *(finalst + first);
              mkxtion(*(finalst + second), orend);
            }
          } else {
            eps___0 = mkstate(257);
            first = link_machines(first, eps___0);
            orend = *(finalst + first);
            mkxtion(*(finalst + second), orend);
          }
        } else {
          eps___0 = mkstate(257);
          first = link_machines(first, eps___0);
          orend = *(finalst + first);
          mkxtion(*(finalst + second), orend);
        }
      }
    }
  }
  *(finalst + first) = orend;
  return (first);
}
}

int mkposcl(int state ) 
{ int eps___0 ;
  int tmp ;

  {
  if (*(transchar + *(finalst + state)) == 257) {
    if (*(trans1 + *(finalst + state)) == 0) {
      mkxtion(*(finalst + state), state);
      return (state);
    } else {
      eps___0 = mkstate(257);
      mkxtion(eps___0, state);
      tmp = link_machines(state, eps___0);
      return (tmp);
    }
  } else {
    eps___0 = mkstate(257);
    mkxtion(eps___0, state);
    tmp = link_machines(state, eps___0);
    return (tmp);
  }
}
}

int mkrep(int mach , int lb , int ub ) 
{ int base_mach ;
  int tail ;
  int copy ;
  int i___0 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  base_mach = copysingl(mach, lb - 1);
  if (ub == -1) {
    copy = dupmachine(mach);
    tmp = mkclos(copy);
    tmp___0 = link_machines(base_mach, tmp);
    mach = link_machines(mach, tmp___0);
  } else {
    tail = mkstate(257);
    i___0 = lb;
    while (i___0 < ub) {
      copy = dupmachine(mach);
      tmp___1 = link_machines(copy, tail);
      tail = mkopt(tmp___1);
      i___0 ++;
    }
    tmp___2 = link_machines(base_mach, tail);
    mach = link_machines(mach, tmp___2);
  }
  return (mach);
}
}

int mkstate(int sym ) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;

  {
  lastnfa ++;
  if (lastnfa >= current_mns) {
    current_mns += 1000;
    if (current_mns >= 31999) {
      lerrif("input rules are too complicated (>= %d NFA states)", current_mns);
    }
    num_reallocs ++;
    tmp = reallocate_array((void *)firstst, current_mns,
                           (unsigned int )sizeof(int ));
    firstst = (int *)tmp;
    tmp___0 = reallocate_array((void *)lastst, current_mns,
                               (unsigned int )sizeof(int ));
    lastst = (int *)tmp___0;
    tmp___1 = reallocate_array((void *)finalst, current_mns,
                               (unsigned int )sizeof(int ));
    finalst = (int *)tmp___1;
    tmp___2 = reallocate_array((void *)transchar, current_mns,
                               (unsigned int )sizeof(int ));
    transchar = (int *)tmp___2;
    tmp___3 = reallocate_array((void *)trans1, current_mns,
                               (unsigned int )sizeof(int ));
    trans1 = (int *)tmp___3;
    tmp___4 = reallocate_array((void *)trans2, current_mns,
                               (unsigned int )sizeof(int ));
    trans2 = (int *)tmp___4;
    tmp___5 = reallocate_array((void *)accptnum, current_mns,
                               (unsigned int )sizeof(int ));
    accptnum = (int *)tmp___5;
    tmp___6 = reallocate_array((void *)assoc_rule, current_mns,
                               (unsigned int )sizeof(int ));
    assoc_rule = (int *)tmp___6;
    tmp___7 = reallocate_array((void *)state_type, current_mns,
                               (unsigned int )sizeof(int ));
    state_type = (int *)tmp___7;
  }
  *(firstst + lastnfa) = lastnfa;
  *(finalst + lastnfa) = lastnfa;
  *(lastst + lastnfa) = lastnfa;
  *(transchar + lastnfa) = sym;
  *(trans1 + lastnfa) = 0;
  *(trans2 + lastnfa) = 0;
  *(accptnum + lastnfa) = 0;
  *(assoc_rule + lastnfa) = num_rules;
  *(state_type + lastnfa) = current_state_type;
  if (! (sym < 0)) {
    if (sym == 257) {
      numeps ++;
    } else {
      check_char(sym);
      if (useecs) {
        if (sym) {
          tmp___8 = sym;
        } else {
          tmp___8 = csize;
        }
        mkechar(tmp___8, nextecm, ecgroup);
      }
    }
  }
  return (lastnfa);
}
}

void mkxtion(int statefrom , int stateto ) 
{ 

  {
  if (*(trans1 + statefrom) == 0) {
    *(trans1 + statefrom) = stateto;
  } else {
    if (*(transchar + statefrom) != 257) {
      flexfatal("found too many transitions in mkxtion()");
    } else {
      if (*(trans2 + statefrom) != 0) {
        flexfatal("found too many transitions in mkxtion()");
      } else {
        eps2 ++;
        *(trans2 + statefrom) = stateto;
      }
    }
  }
  return;
}
}

void new_rule(void) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  num_rules ++;
  if (num_rules >= current_max_rules) {
    num_reallocs ++;
    current_max_rules += 100;
    tmp = reallocate_array((void *)rule_type, current_max_rules,
                           (unsigned int )sizeof(int ));
    rule_type = (int *)tmp;
    tmp___0 = reallocate_array((void *)rule_linenum, current_max_rules,
                               (unsigned int )sizeof(int ));
    rule_linenum = (int *)tmp___0;
    tmp___1 = reallocate_array((void *)rule_useful, current_max_rules,
                               (unsigned int )sizeof(int ));
    rule_useful = (int *)tmp___1;
  }
  if (num_rules > 8191) {
    lerrif("too many rules (> %d)!", 8191);
  }
  *(rule_linenum + num_rules) = linenum;
  *(rule_useful + num_rules) = 0;
  return;
}
}

extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;

extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;

int yylval  ;

void build_eof_action(void) ;

void line_pinpoint(char *str , int line ) ;

void format_synerr(char *msg , char *arg ) ;

void synerr(char *str ) ;

void format_warn(char *msg , char *arg ) ;

void yyerror(char *msg ) ;

void scinstal(char *str , int xcluflg___0 ) ;

int sclookup(char *str ) ;

int yylex(void) ;

int pat  ;

int scnum  ;

int eps  ;

int headcnt  ;

int trailcnt  ;

int anyccl  ;

int lastchar  ;

int i  ;

int rulelen  ;

int trlcontxt  ;

int xcluflg  ;

int currccl  ;

int cclsorted  ;

int varlength  ;

int variable_trail_rule  ;

int *scon_stk  ;

int scon_stk_ptr  ;

static int madeany   = 0;

int previous_continued_action  ;

static yytype_uint8 const   yytranslate[282]   = 
  {(unsigned char const   )0, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )28, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )42, (unsigned char const   )2,
   (unsigned char const   )36, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )43, (unsigned char const   )44,
   (unsigned char const   )34, (unsigned char const   )39,
   (unsigned char const   )35, (unsigned char const   )47,
   (unsigned char const   )41, (unsigned char const   )38,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )32, (unsigned char const   )27,
   (unsigned char const   )33, (unsigned char const   )40,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )45,
   (unsigned char const   )2, (unsigned char const   )46,
   (unsigned char const   )31, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )29,
   (unsigned char const   )37, (unsigned char const   )30,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )1, (unsigned char const   )2,
   (unsigned char const   )3, (unsigned char const   )4,
   (unsigned char const   )5, (unsigned char const   )6,
   (unsigned char const   )7, (unsigned char const   )8,
   (unsigned char const   )9, (unsigned char const   )10,
   (unsigned char const   )11, (unsigned char const   )12,
   (unsigned char const   )13, (unsigned char const   )14,
   (unsigned char const   )15, (unsigned char const   )16,
   (unsigned char const   )17, (unsigned char const   )18,
   (unsigned char const   )19, (unsigned char const   )20,
   (unsigned char const   )21, (unsigned char const   )22,
   (unsigned char const   )23, (unsigned char const   )24,
   (unsigned char const   )25, (unsigned char const   )26};

static yytype_uint8 const   yyr1[77]   = 
  {(unsigned char const   )0, (unsigned char const   )48,
   (unsigned char const   )49, (unsigned char const   )50,
   (unsigned char const   )51, (unsigned char const   )51,
   (unsigned char const   )51, (unsigned char const   )51,
   (unsigned char const   )52, (unsigned char const   )53,
   (unsigned char const   )53, (unsigned char const   )54,
   (unsigned char const   )54, (unsigned char const   )54,
   (unsigned char const   )55, (unsigned char const   )56,
   (unsigned char const   )56, (unsigned char const   )57,
   (unsigned char const   )57, (unsigned char const   )57,
   (unsigned char const   )58, (unsigned char const   )58,
   (unsigned char const   )58, (unsigned char const   )59,
   (unsigned char const   )60, (unsigned char const   )60,
   (unsigned char const   )60, (unsigned char const   )60,
   (unsigned char const   )61, (unsigned char const   )62,
   (unsigned char const   )62, (unsigned char const   )62,
   (unsigned char const   )63, (unsigned char const   )63,
   (unsigned char const   )63, (unsigned char const   )64,
   (unsigned char const   )65, (unsigned char const   )65,
   (unsigned char const   )65, (unsigned char const   )65,
   (unsigned char const   )66, (unsigned char const   )66,
   (unsigned char const   )67, (unsigned char const   )68,
   (unsigned char const   )68, (unsigned char const   )69,
   (unsigned char const   )69, (unsigned char const   )69,
   (unsigned char const   )69, (unsigned char const   )69,
   (unsigned char const   )69, (unsigned char const   )69,
   (unsigned char const   )69, (unsigned char const   )69,
   (unsigned char const   )69, (unsigned char const   )69,
   (unsigned char const   )69, (unsigned char const   )70,
   (unsigned char const   )70, (unsigned char const   )71,
   (unsigned char const   )71, (unsigned char const   )71,
   (unsigned char const   )71, (unsigned char const   )72,
   (unsigned char const   )72, (unsigned char const   )72,
   (unsigned char const   )72, (unsigned char const   )72,
   (unsigned char const   )72, (unsigned char const   )72,
   (unsigned char const   )72, (unsigned char const   )72,
   (unsigned char const   )72, (unsigned char const   )72,
   (unsigned char const   )72, (unsigned char const   )73,
   (unsigned char const   )73};

static yytype_uint8 const   yyr2[77]   = 
  {(unsigned char const   )0, (unsigned char const   )2,
   (unsigned char const   )5, (unsigned char const   )0,
   (unsigned char const   )3, (unsigned char const   )2,
   (unsigned char const   )0, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )2,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )0, (unsigned char const   )3,
   (unsigned char const   )3, (unsigned char const   )3,
   (unsigned char const   )5, (unsigned char const   )5,
   (unsigned char const   )0, (unsigned char const   )0,
   (unsigned char const   )2, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )0, (unsigned char const   )4,
   (unsigned char const   )3, (unsigned char const   )0,
   (unsigned char const   )3, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )2, (unsigned char const   )3,
   (unsigned char const   )2, (unsigned char const   )1,
   (unsigned char const   )3, (unsigned char const   )1,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )1, (unsigned char const   )2,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )6, (unsigned char const   )5,
   (unsigned char const   )4, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )3, (unsigned char const   )3,
   (unsigned char const   )1, (unsigned char const   )3,
   (unsigned char const   )4, (unsigned char const   )4,
   (unsigned char const   )2, (unsigned char const   )2,
   (unsigned char const   )0, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )1,
   (unsigned char const   )1, (unsigned char const   )2,
   (unsigned char const   )0};

static yytype_uint8 const   yydefact[107]   = 
  {(unsigned char const   )3, (unsigned char const   )0,
   (unsigned char const   )0, (unsigned char const   )1,
   (unsigned char const   )7, (unsigned char const   )0,
   (unsigned char const   )8, (unsigned char const   )9,
   (unsigned char const   )10, (unsigned char const   )16,
   (unsigned char const   )22, (unsigned char const   )0,
   (unsigned char const   )5, (unsigned char const   )14,
   (unsigned char const   )31, (unsigned char const   )13,
   (unsigned char const   )12, (unsigned char const   )4,
   (unsigned char const   )0, (unsigned char const   )0,
   (unsigned char const   )0, (unsigned char const   )15,
   (unsigned char const   )28, (unsigned char const   )2,
   (unsigned char const   )23, (unsigned char const   )11,
   (unsigned char const   )0, (unsigned char const   )0,
   (unsigned char const   )0, (unsigned char const   )0,
   (unsigned char const   )0, (unsigned char const   )22,
   (unsigned char const   )0, (unsigned char const   )17,
   (unsigned char const   )18, (unsigned char const   )19,
   (unsigned char const   )30, (unsigned char const   )34,
   (unsigned char const   )35, (unsigned char const   )0,
   (unsigned char const   )33, (unsigned char const   )31,
   (unsigned char const   )27, (unsigned char const   )56,
   (unsigned char const   )53, (unsigned char const   )26,
   (unsigned char const   )0, (unsigned char const   )51,
   (unsigned char const   )76, (unsigned char const   )0,
   (unsigned char const   )62, (unsigned char const   )0,
   (unsigned char const   )25, (unsigned char const   )39,
   (unsigned char const   )0, (unsigned char const   )41,
   (unsigned char const   )44, (unsigned char const   )52,
   (unsigned char const   )29, (unsigned char const   )0,
   (unsigned char const   )21, (unsigned char const   )24,
   (unsigned char const   )0, (unsigned char const   )0,
   (unsigned char const   )62, (unsigned char const   )0,
   (unsigned char const   )20, (unsigned char const   )38,
   (unsigned char const   )0, (unsigned char const   )42,
   (unsigned char const   )36, (unsigned char const   )43,
   (unsigned char const   )0, (unsigned char const   )45,
   (unsigned char const   )46, (unsigned char const   )47,
   (unsigned char const   )32, (unsigned char const   )75,
   (unsigned char const   )54, (unsigned char const   )55,
   (unsigned char const   )0, (unsigned char const   )60,
   (unsigned char const   )63, (unsigned char const   )64,
   (unsigned char const   )65, (unsigned char const   )66,
   (unsigned char const   )67, (unsigned char const   )68,
   (unsigned char const   )69, (unsigned char const   )70,
   (unsigned char const   )71, (unsigned char const   )72,
   (unsigned char const   )73, (unsigned char const   )74,
   (unsigned char const   )57, (unsigned char const   )61,
   (unsigned char const   )40, (unsigned char const   )37,
   (unsigned char const   )0, (unsigned char const   )58,
   (unsigned char const   )0, (unsigned char const   )50,
   (unsigned char const   )0, (unsigned char const   )59,
   (unsigned char const   )0, (unsigned char const   )49,
   (unsigned char const   )48};

static yytype_int8 const   yydefgoto[26]   = 
  {(signed char const   )-1, (signed char const   )1, (signed char const   )2,
   (signed char const   )5, (signed char const   )10, (signed char const   )11,
   (signed char const   )17, (signed char const   )12, (signed char const   )13,
   (signed char const   )21, (signed char const   )14, (signed char const   )23,
   (signed char const   )51, (signed char const   )30, (signed char const   )24,
   (signed char const   )39, (signed char const   )40, (signed char const   )52,
   (signed char const   )53, (signed char const   )54, (signed char const   )55,
   (signed char const   )56, (signed char const   )57, (signed char const   )65,
   (signed char const   )95, (signed char const   )62};

static yytype_int8 const   yypact[107]   = 
  {(signed char const   )-52, (signed char const   )1, (signed char const   )78,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )81, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )6, (signed char const   )-52, (signed char const   )-2,
   (signed char const   )5, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )20,
   (signed char const   )-14, (signed char const   )9, (signed char const   )16,
   (signed char const   )-52, (signed char const   )39,
   (signed char const   )-52, (signed char const   )31,
   (signed char const   )-52, (signed char const   )51,
   (signed char const   )74, (signed char const   )82, (signed char const   )61,
   (signed char const   )30, (signed char const   )-52,
   (signed char const   )-1, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )58,
   (signed char const   )-52, (signed char const   )44,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )24, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )24,
   (signed char const   )66, (signed char const   )70,
   (signed char const   )-52, (signed char const   )25,
   (signed char const   )24, (signed char const   )24, (signed char const   )41,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )91, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )26,
   (signed char const   )27, (signed char const   )-52, (signed char const   )0,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )24, (signed char const   )-52,
   (signed char const   )59, (signed char const   )41, (signed char const   )96,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )32,
   (signed char const   )54, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )24,
   (signed char const   )-52, (signed char const   )4,
   (signed char const   )-52, (signed char const   )99,
   (signed char const   )-52, (signed char const   )2,
   (signed char const   )-52, (signed char const   )73,
   (signed char const   )-52, (signed char const   )-52};

static yytype_int8 const   yypgoto[26]   = 
  {(signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )75, (signed char const   )80,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )-52, (signed char const   )-52,
   (signed char const   )46, (signed char const   )62, (signed char const   )23,
   (signed char const   )-52, (signed char const   )42,
   (signed char const   )-51, (signed char const   )-52,
   (signed char const   )43, (signed char const   )-52,
   (signed char const   )-52};

static yytype_int8 const   yytable[111]   = 
  {(signed char const   )42, (signed char const   )3, (signed char const   )43,
   (signed char const   )81, (signed char const   )71,
   (signed char const   )-23, (signed char const   )104,
   (signed char const   )15, (signed char const   )44, (signed char const   )45,
   (signed char const   )18, (signed char const   )19, (signed char const   )20,
   (signed char const   )26, (signed char const   )16, (signed char const   )82,
   (signed char const   )83, (signed char const   )84, (signed char const   )85,
   (signed char const   )86, (signed char const   )87, (signed char const   )88,
   (signed char const   )89, (signed char const   )90, (signed char const   )91,
   (signed char const   )92, (signed char const   )93, (signed char const   )43,
   (signed char const   )25, (signed char const   )77, (signed char const   )46,
   (signed char const   )37, (signed char const   )105,
   (signed char const   )44, (signed char const   )101,
   (signed char const   )81, (signed char const   )27, (signed char const   )22,
   (signed char const   )38, (signed char const   )102,
   (signed char const   )47, (signed char const   )48, (signed char const   )49,
   (signed char const   )28, (signed char const   )50, (signed char const   )71,
   (signed char const   )94, (signed char const   )82, (signed char const   )83,
   (signed char const   )84, (signed char const   )85, (signed char const   )86,
   (signed char const   )87, (signed char const   )88, (signed char const   )89,
   (signed char const   )90, (signed char const   )91, (signed char const   )92,
   (signed char const   )93, (signed char const   )33, (signed char const   )31,
   (signed char const   )67, (signed char const   )68, (signed char const   )69,
   (signed char const   )68, (signed char const   )47, (signed char const   )48,
   (signed char const   )49, (signed char const   )78, (signed char const   )50,
   (signed char const   )72, (signed char const   )79, (signed char const   )63,
   (signed char const   )29, (signed char const   )60, (signed char const   )73,
   (signed char const   )22, (signed char const   )70, (signed char const   )99,
   (signed char const   )4, (signed char const   )74, (signed char const   )75,
   (signed char const   )34, (signed char const   )-6, (signed char const   )-6,
   (signed char const   )-6, (signed char const   )6, (signed char const   )7,
   (signed char const   )8, (signed char const   )-6, (signed char const   )35,
   (signed char const   )58, (signed char const   )9, (signed char const   )59,
   (signed char const   )36, (signed char const   )97, (signed char const   )68,
   (signed char const   )64, (signed char const   )66, (signed char const   )38,
   (signed char const   )98, (signed char const   )100,
   (signed char const   )103, (signed char const   )106,
   (signed char const   )32, (signed char const   )76, (signed char const   )41,
   (signed char const   )80, (signed char const   )61, (signed char const   )0,
   (signed char const   )96};

static yytype_int8 const   yycheck[111]   = 
  {(signed char const   )1, (signed char const   )0, (signed char const   )3,
   (signed char const   )3, (signed char const   )55, (signed char const   )0,
   (signed char const   )4, (signed char const   )1, (signed char const   )9,
   (signed char const   )10, (signed char const   )12, (signed char const   )13,
   (signed char const   )14, (signed char const   )27, (signed char const   )8,
   (signed char const   )15, (signed char const   )16, (signed char const   )17,
   (signed char const   )18, (signed char const   )19, (signed char const   )20,
   (signed char const   )21, (signed char const   )22, (signed char const   )23,
   (signed char const   )24, (signed char const   )25, (signed char const   )26,
   (signed char const   )3, (signed char const   )8, (signed char const   )3,
   (signed char const   )31, (signed char const   )1, (signed char const   )30,
   (signed char const   )9, (signed char const   )30, (signed char const   )3,
   (signed char const   )27, (signed char const   )32, (signed char const   )8,
   (signed char const   )35, (signed char const   )41, (signed char const   )42,
   (signed char const   )43, (signed char const   )27, (signed char const   )45,
   (signed char const   )96, (signed char const   )46, (signed char const   )15,
   (signed char const   )16, (signed char const   )17, (signed char const   )18,
   (signed char const   )19, (signed char const   )20, (signed char const   )21,
   (signed char const   )22, (signed char const   )23, (signed char const   )24,
   (signed char const   )25, (signed char const   )26, (signed char const   )8,
   (signed char const   )29, (signed char const   )36, (signed char const   )37,
   (signed char const   )38, (signed char const   )37, (signed char const   )41,
   (signed char const   )42, (signed char const   )43, (signed char const   )42,
   (signed char const   )45, (signed char const   )29, (signed char const   )44,
   (signed char const   )49, (signed char const   )34, (signed char const   )30,
   (signed char const   )34, (signed char const   )32, (signed char const   )54,
   (signed char const   )46, (signed char const   )1, (signed char const   )39,
   (signed char const   )40, (signed char const   )8, (signed char const   )5,
   (signed char const   )6, (signed char const   )7, (signed char const   )5,
   (signed char const   )6, (signed char const   )7, (signed char const   )11,
   (signed char const   )8, (signed char const   )33, (signed char const   )11,
   (signed char const   )35, (signed char const   )33, (signed char const   )36,
   (signed char const   )37, (signed char const   )31, (signed char const   )28,
   (signed char const   )8, (signed char const   )4, (signed char const   )47,
   (signed char const   )3, (signed char const   )30, (signed char const   )24,
   (signed char const   )59, (signed char const   )31, (signed char const   )64,
   (signed char const   )46, (signed char const   )-1, (signed char const   )68};

static yytype_uint8 const   yystos[107]   = 
  {(unsigned char const   )0, (unsigned char const   )49,
   (unsigned char const   )50, (unsigned char const   )0,
   (unsigned char const   )1, (unsigned char const   )51,
   (unsigned char const   )5, (unsigned char const   )6,
   (unsigned char const   )7, (unsigned char const   )11,
   (unsigned char const   )52, (unsigned char const   )53,
   (unsigned char const   )55, (unsigned char const   )56,
   (unsigned char const   )58, (unsigned char const   )1,
   (unsigned char const   )8, (unsigned char const   )54,
   (unsigned char const   )12, (unsigned char const   )13,
   (unsigned char const   )14, (unsigned char const   )57,
   (unsigned char const   )32, (unsigned char const   )59,
   (unsigned char const   )62, (unsigned char const   )8,
   (unsigned char const   )27, (unsigned char const   )27,
   (unsigned char const   )27, (unsigned char const   )34,
   (unsigned char const   )61, (unsigned char const   )29,
   (unsigned char const   )59, (unsigned char const   )8,
   (unsigned char const   )8, (unsigned char const   )8,
   (unsigned char const   )33, (unsigned char const   )1,
   (unsigned char const   )8, (unsigned char const   )63,
   (unsigned char const   )64, (unsigned char const   )58,
   (unsigned char const   )1, (unsigned char const   )3,
   (unsigned char const   )9, (unsigned char const   )10,
   (unsigned char const   )31, (unsigned char const   )41,
   (unsigned char const   )42, (unsigned char const   )43,
   (unsigned char const   )45, (unsigned char const   )60,
   (unsigned char const   )65, (unsigned char const   )66,
   (unsigned char const   )67, (unsigned char const   )68,
   (unsigned char const   )69, (unsigned char const   )70,
   (unsigned char const   )33, (unsigned char const   )35,
   (unsigned char const   )30, (unsigned char const   )65,
   (unsigned char const   )73, (unsigned char const   )66,
   (unsigned char const   )31, (unsigned char const   )71,
   (unsigned char const   )28, (unsigned char const   )36,
   (unsigned char const   )37, (unsigned char const   )38,
   (unsigned char const   )66, (unsigned char const   )69,
   (unsigned char const   )29, (unsigned char const   )34,
   (unsigned char const   )39, (unsigned char const   )40,
   (unsigned char const   )64, (unsigned char const   )3,
   (unsigned char const   )42, (unsigned char const   )44,
   (unsigned char const   )71, (unsigned char const   )3,
   (unsigned char const   )15, (unsigned char const   )16,
   (unsigned char const   )17, (unsigned char const   )18,
   (unsigned char const   )19, (unsigned char const   )20,
   (unsigned char const   )21, (unsigned char const   )22,
   (unsigned char const   )23, (unsigned char const   )24,
   (unsigned char const   )25, (unsigned char const   )26,
   (unsigned char const   )46, (unsigned char const   )72,
   (unsigned char const   )68, (unsigned char const   )36,
   (unsigned char const   )4, (unsigned char const   )46,
   (unsigned char const   )47, (unsigned char const   )30,
   (unsigned char const   )35, (unsigned char const   )3,
   (unsigned char const   )4, (unsigned char const   )30,
   (unsigned char const   )30};

static void yydestruct(char const   *yymsg , int yytype , int *yyvaluep ) 
{ 

  {
  if (! yymsg) {
    yymsg = "Deleting";
  }
  switch (yytype) {
  default: ;
  break;
  }
  return;
}
}

int yychar  ;

int yynerrs  ;

int yyparse(void) 
{ int yystate ;
  int yyn ;
  int yyresult ;
  int yyerrstatus ;
  int yytoken ;
  yytype_int16 yyssa[200] ;
  yytype_int16 *yyss ;
  yytype_int16 *yyssp ;
  int yyvsa[200] ;
  int *yyvs ;
  int *yyvsp ;
  unsigned int yystacksize ;
  int yyval ;
  int yylen ;
  unsigned int yysize ;
  yytype_int16 *yyss1 ;
  union yyalloc *yyptr ;
  void *tmp ;
  unsigned int yynewbytes ;
  unsigned int yynewbytes___0 ;
  int def_rule ;
  void *tmp___0 ;
  int j ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  unsigned char tmp___6 ;
  unsigned char tmp___7 ;
  unsigned char tmp___8 ;
  int tmp___9 ;
  unsigned char tmp___10 ;
  int tmp___11 ;
  int c ;
  unsigned short const   **tmp___12 ;
  int c___0 ;
  unsigned short const   **tmp___13 ;
  int c___1 ;
  int c___2 ;
  unsigned short const   **tmp___14 ;
  int c___3 ;
  unsigned short const   **tmp___15 ;
  int c___4 ;
  unsigned short const   **tmp___16 ;
  int c___5 ;
  unsigned short const   **tmp___17 ;
  int c___6 ;
  unsigned short const   **tmp___18 ;
  int c___7 ;
  unsigned short const   **tmp___19 ;
  int c___8 ;
  unsigned short const   **tmp___20 ;
  int c___9 ;
  unsigned short const   **tmp___21 ;
  int c___10 ;
  unsigned short const   **tmp___22 ;
  int c___11 ;
  unsigned short const   **tmp___23 ;
  unsigned char tmp___24 ;
  int tmp___25 ;

  {
  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = 200U;
  yylen = 0;
  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = -2;
  yyssp = yyss;
  yyvsp = yyvs;
  goto yysetstate;
  yynewstate: 
  yyssp ++;
  yysetstate: 
  *yyssp = (short )yystate;
  if ((unsigned int )((yyss + yystacksize) - 1) <= (unsigned int )yyssp) {
    yysize = (unsigned int )((yyssp - yyss) + 1);
    if (10000U <= yystacksize) {
      goto yyexhaustedlab;
    }
    yystacksize *= 2U;
    if (10000U < yystacksize) {
      yystacksize = 10000U;
    }
    yyss1 = yyss;
    tmp = malloc((unsigned int )((unsigned long )yystacksize * (sizeof(yytype_int16 ) + sizeof(int )) + (sizeof(union yyalloc ) - 1UL)));
    yyptr = (union yyalloc *)tmp;
    if (! yyptr) {
      goto yyexhaustedlab;
    }
    while (1) {
      __builtin_memcpy((void *)(& yyptr->yyss), (void const   *)yyss,
                       (unsigned long )yysize * sizeof(*yyss));
      yyss = & yyptr->yyss;
      yynewbytes = (unsigned int )((unsigned long )yystacksize * sizeof(*yyss) + (sizeof(union yyalloc ) - 1UL));
      yyptr += (unsigned long )yynewbytes / sizeof(*yyptr);
      break;
    }
    while (1) {
      __builtin_memcpy((void *)(& yyptr->yyvs), (void const   *)yyvs,
                       (unsigned long )yysize * sizeof(*yyvs));
      yyvs = & yyptr->yyvs;
      yynewbytes___0 = (unsigned int )((unsigned long )yystacksize * sizeof(*yyvs) + (sizeof(union yyalloc ) - 1UL));
      yyptr += (unsigned long )yynewbytes___0 / sizeof(*yyptr);
      break;
    }
    if ((unsigned int )yyss1 != (unsigned int )(yyssa)) {
      free((void *)yyss1);
    }
    yyssp = (yyss + yysize) - 1;
    yyvsp = (yyvs + yysize) - 1;
    if ((unsigned int )((yyss + yystacksize) - 1) <= (unsigned int )yyssp) {
      goto yyabortlab;
    }
  }
  goto yybackup;
  yybackup: 
  yyn = (int )yypact[yystate];
  if (yyn == -52) {
    goto yydefault;
  }
  if (yychar == -2) {
    yychar = yylex();
  }
  if (yychar <= 0) {
    yytoken = 0;
    yychar = yytoken;
  } else {
    if ((unsigned int )yychar <= 281U) {
      yytoken = (int )yytranslate[yychar];
    } else {
      yytoken = 2;
    }
  }
  yyn += yytoken;
  if (yyn < 0) {
    goto yydefault;
  } else {
    if (110 < yyn) {
      goto yydefault;
    } else {
      if ((int const   )yycheck[yyn] != (int const   )yytoken) {
        goto yydefault;
      }
    }
  }
  yyn = (int )yytable[yyn];
  if (yyn <= 0) {
    if (yyn == 0) {
      goto yyerrlab;
    } else {
      if (yyn == -24) {
        goto yyerrlab;
      }
    }
    yyn = - yyn;
    goto yyreduce;
  }
  if (yyn == 3) {
    goto yyacceptlab;
  }
  if (yyerrstatus) {
    yyerrstatus --;
  }
  if (yychar != 0) {
    yychar = -2;
  }
  yystate = yyn;
  yyvsp ++;
  *yyvsp = yylval;
  goto yynewstate;
  yydefault: 
  yyn = (int )yydefact[yystate];
  if (yyn == 0) {
    goto yyerrlab;
  }
  goto yyreduce;
  yyreduce: 
  yylen = (int )yyr2[yyn];
  yyval = *(yyvsp + (1 - yylen));
  switch (yyn) {
  case 2: 
  pat = cclinit();
  cclnegate(pat);
  def_rule = mkstate(- pat);
  default_rule = num_rules;
  finish_rule(def_rule, 0, 0, 0);
  i = 1;
  while (i <= lastsc) {
    *(scset + i) = mkbranch(*(scset + i), def_rule);
    i ++;
  }
  if (spprdflt) {
    add_action((char *)"YY_FATAL_ERROR( \"flex scanner jammed\" )");
  } else {
    add_action((char *)"ECHO");
  }
  add_action((char *)";\n\tYY_BREAK\n");
  break;
  case 3: 
  scinstal((char *)"INITIAL", 0);
  break;
  case 7: 
  synerr((char *)"unknown error processing section 1");
  break;
  case 8: 
  check_options();
  tmp___0 = allocate_array(lastsc + 1, (unsigned int )sizeof(int ));
  scon_stk = (int *)tmp___0;
  scon_stk_ptr = 0;
  break;
  case 9: 
  xcluflg = 0;
  break;
  case 10: 
  xcluflg = 1;
  break;
  case 11: 
  scinstal(nmstr, xcluflg);
  break;
  case 12: 
  scinstal(nmstr, xcluflg);
  break;
  case 13: 
  synerr((char *)"bad start condition list");
  break;
  case 17: 
  outfilename = copy_string((char const   *)(nmstr));
  did_outfilename = 1;
  break;
  case 18: 
  prefix = copy_string((char const   *)(nmstr));
  break;
  case 19: 
  yyclass = copy_string((char const   *)(nmstr));
  break;
  case 20: 
  scon_stk_ptr = *(yyvsp + -3);
  break;
  case 21: 
  scon_stk_ptr = *(yyvsp + -3);
  break;
  case 23: 
  varlength = 0;
  variable_trail_rule = varlength;
  trlcontxt = variable_trail_rule;
  rulelen = 0;
  headcnt = rulelen;
  trailcnt = headcnt;
  current_state_type = 1;
  previous_continued_action = continued_action;
  in_rule = 1;
  new_rule();
  break;
  case 24: 
  pat = *(yyvsp + 0);
  finish_rule(pat, variable_trail_rule, headcnt, trailcnt);
  if (scon_stk_ptr > 0) {
    i = 1;
    while (i <= scon_stk_ptr) {
      *(scbol + *(scon_stk + i)) = mkbranch(*(scbol + *(scon_stk + i)), pat);
      i ++;
    }
  } else {
    i = 1;
    while (i <= lastsc) {
      if (! *(scxclu + i)) {
        *(scbol + i) = mkbranch(*(scbol + i), pat);
      }
      i ++;
    }
  }
  if (! bol_needed) {
    bol_needed = 1;
    if (performance_report > 1) {
      pinpoint_message((char *)"\'^\' operator results in sub-optimal performance");
    }
  }
  break;
  case 25: 
  pat = *(yyvsp + 0);
  finish_rule(pat, variable_trail_rule, headcnt, trailcnt);
  if (scon_stk_ptr > 0) {
    i = 1;
    while (i <= scon_stk_ptr) {
      *(scset + *(scon_stk + i)) = mkbranch(*(scset + *(scon_stk + i)), pat);
      i ++;
    }
  } else {
    i = 1;
    while (i <= lastsc) {
      if (! *(scxclu + i)) {
        *(scset + i) = mkbranch(*(scset + i), pat);
      }
      i ++;
    }
  }
  break;
  case 26: 
  if (scon_stk_ptr > 0) {
    build_eof_action();
  } else {
    i = 1;
    while (i <= lastsc) {
      if (! *(sceof + i)) {
        scon_stk_ptr ++;
        *(scon_stk + scon_stk_ptr) = i;
      }
      i ++;
    }
    if (scon_stk_ptr == 0) {
      warn((char *)"all start conditions already have <<EOF>> rules");
    } else {
      build_eof_action();
    }
  }
  break;
  case 27: 
  synerr((char *)"unrecognized rule");
  break;
  case 28: 
  yyval = scon_stk_ptr;
  break;
  case 29: 
  yyval = *(yyvsp + -2);
  break;
  case 30: 
  yyval = scon_stk_ptr;
  i = 1;
  while (i <= lastsc) {
    j = 1;
    while (j <= scon_stk_ptr) {
      if (*(scon_stk + j) == i) {
        break;
      }
      j ++;
    }
    if (j > scon_stk_ptr) {
      scon_stk_ptr ++;
      *(scon_stk + scon_stk_ptr) = i;
    }
    i ++;
  }
  break;
  case 31: 
  yyval = scon_stk_ptr;
  break;
  case 34: 
  synerr((char *)"bad start condition list");
  break;
  case 35: 
  scnum = sclookup(nmstr);
  if (scnum == 0) {
    format_pinpoint_message((char *)"undeclared start condition %s", nmstr);
  } else {
    i = 1;
    while (i <= scon_stk_ptr) {
      if (*(scon_stk + i) == scnum) {
        format_warn((char *)"<%s> specified twice", *(scname + scnum));
        break;
      }
      i ++;
    }
    if (i > scon_stk_ptr) {
      scon_stk_ptr ++;
      *(scon_stk + scon_stk_ptr) = scnum;
    }
  }
  break;
  case 36: 
  if (*(transchar + *(lastst + *(yyvsp + 0))) != 257) {
    tmp___1 = mkstate(257);
    *(yyvsp + 0) = link_machines(*(yyvsp + 0), tmp___1);
  }
  mark_beginning_as_normal(*(yyvsp + 0));
  current_state_type = 1;
  if (previous_continued_action) {
    if (! varlength) {
      warn((char *)"trailing context made variable due to preceding \'|\' action");
    } else {
      if (headcnt != 0) {
        warn((char *)"trailing context made variable due to preceding \'|\' action");
      }
    }
    varlength = 1;
    headcnt = 0;
  }
  if (lex_compat) {
    add_accept(*(yyvsp + -1), num_rules | 16384);
    variable_trail_rule = 1;
  } else {
    if (varlength) {
      if (headcnt == 0) {
        add_accept(*(yyvsp + -1), num_rules | 16384);
        variable_trail_rule = 1;
      } else {
        trailcnt = rulelen;
      }
    } else {
      trailcnt = rulelen;
    }
  }
  yyval = link_machines(*(yyvsp + -1), *(yyvsp + 0));
  break;
  case 37: 
  synerr((char *)"trailing context used twice");
  break;
  case 38: 
  headcnt = 0;
  trailcnt = 1;
  rulelen = 1;
  varlength = 0;
  current_state_type = 2;
  if (trlcontxt) {
    synerr((char *)"trailing context used twice");
    yyval = mkstate(257);
  } else {
    if (previous_continued_action) {
      warn((char *)"trailing context made variable due to preceding \'|\' action");
      varlength = 1;
    }
  }
  if (lex_compat) {
    add_accept(*(yyvsp + -1), num_rules | 16384);
    variable_trail_rule = 1;
  } else {
    if (varlength) {
      add_accept(*(yyvsp + -1), num_rules | 16384);
      variable_trail_rule = 1;
    }
  }
  trlcontxt = 1;
  eps = mkstate(257);
  tmp___2 = mkstate('\n');
  tmp___3 = link_machines(eps, tmp___2);
  yyval = link_machines(*(yyvsp + -1), tmp___3);
  break;
  case 39: 
  yyval = *(yyvsp + 0);
  if (trlcontxt) {
    if (lex_compat) {
      variable_trail_rule = 1;
    } else {
      if (varlength) {
        if (headcnt == 0) {
          variable_trail_rule = 1;
        } else {
          trailcnt = rulelen;
        }
      } else {
        trailcnt = rulelen;
      }
    }
  }
  break;
  case 40: 
  varlength = 1;
  yyval = mkor(*(yyvsp + -2), *(yyvsp + 0));
  break;
  case 41: 
  yyval = *(yyvsp + 0);
  break;
  case 42: 
  if (trlcontxt) {
    synerr((char *)"trailing context used twice");
  } else {
    trlcontxt = 1;
  }
  if (varlength) {
    varlength = 0;
  } else {
    headcnt = rulelen;
  }
  rulelen = 0;
  current_state_type = 2;
  yyval = *(yyvsp + -1);
  break;
  case 43: 
  yyval = link_machines(*(yyvsp + -1), *(yyvsp + 0));
  break;
  case 44: 
  yyval = *(yyvsp + 0);
  break;
  case 45: 
  varlength = 1;
  yyval = mkclos(*(yyvsp + -1));
  break;
  case 46: 
  varlength = 1;
  yyval = mkposcl(*(yyvsp + -1));
  break;
  case 47: 
  varlength = 1;
  yyval = mkopt(*(yyvsp + -1));
  break;
  case 48: 
  varlength = 1;
  if (*(yyvsp + -3) > *(yyvsp + -1)) {
    synerr((char *)"bad iteration values");
    yyval = *(yyvsp + -5);
  } else {
    if (*(yyvsp + -3) < 0) {
      synerr((char *)"bad iteration values");
      yyval = *(yyvsp + -5);
    } else {
      if (*(yyvsp + -3) == 0) {
        if (*(yyvsp + -1) <= 0) {
          synerr((char *)"bad iteration values");
          yyval = *(yyvsp + -5);
        } else {
          tmp___4 = mkrep(*(yyvsp + -5), 1, *(yyvsp + -1));
          yyval = mkopt(tmp___4);
        }
      } else {
        yyval = mkrep(*(yyvsp + -5), *(yyvsp + -3), *(yyvsp + -1));
      }
    }
  }
  break;
  case 49: 
  varlength = 1;
  if (*(yyvsp + -2) <= 0) {
    synerr((char *)"iteration value must be positive");
    yyval = *(yyvsp + -4);
  } else {
    yyval = mkrep(*(yyvsp + -4), *(yyvsp + -2), -1);
  }
  break;
  case 50: 
  varlength = 1;
  if (*(yyvsp + -1) <= 0) {
    synerr((char *)"iteration value must be positive");
    yyval = *(yyvsp + -3);
  } else {
    tmp___5 = copysingl(*(yyvsp + -3), *(yyvsp + -1) - 1);
    yyval = link_machines(*(yyvsp + -3), tmp___5);
  }
  break;
  case 51: 
  if (! madeany) {
    anyccl = cclinit();
    ccladd(anyccl, '\n');
    cclnegate(anyccl);
    if (useecs) {
      mkeccl(ccltbl + *(cclmap + anyccl), *(ccllen + anyccl), nextecm, ecgroup,
             csize, csize);
    }
    madeany = 1;
  }
  rulelen ++;
  yyval = mkstate(- anyccl);
  break;
  case 52: 
  if (! cclsorted) {
    cshell(ccltbl + *(cclmap + *(yyvsp + 0)), *(ccllen + *(yyvsp + 0)), 1);
  }
  if (useecs) {
    mkeccl(ccltbl + *(cclmap + *(yyvsp + 0)), *(ccllen + *(yyvsp + 0)), nextecm,
           ecgroup, csize, csize);
  }
  rulelen ++;
  yyval = mkstate(- *(yyvsp + 0));
  break;
  case 53: 
  rulelen ++;
  yyval = mkstate(- *(yyvsp + 0));
  break;
  case 54: 
  yyval = *(yyvsp + -1);
  break;
  case 55: 
  yyval = *(yyvsp + -1);
  break;
  case 56: 
  rulelen ++;
  if (caseins) {
    if (*(yyvsp + 0) >= 65) {
      if (*(yyvsp + 0) <= 90) {
        tmp___6 = clower(*(yyvsp + 0));
        *(yyvsp + 0) = (int )tmp___6;
      }
    }
  }
  yyval = mkstate(*(yyvsp + 0));
  break;
  case 57: 
  yyval = *(yyvsp + -1);
  break;
  case 58: 
  cclnegate(*(yyvsp + -1));
  yyval = *(yyvsp + -1);
  break;
  case 59: 
  if (caseins) {
    if (*(yyvsp + -2) >= 65) {
      if (*(yyvsp + -2) <= 90) {
        tmp___7 = clower(*(yyvsp + -2));
        *(yyvsp + -2) = (int )tmp___7;
      }
    }
    if (*(yyvsp + 0) >= 65) {
      if (*(yyvsp + 0) <= 90) {
        tmp___8 = clower(*(yyvsp + 0));
        *(yyvsp + 0) = (int )tmp___8;
      }
    }
  }
  if (*(yyvsp + -2) > *(yyvsp + 0)) {
    synerr((char *)"negative range in character class");
  } else {
    i = *(yyvsp + -2);
    while (i <= *(yyvsp + 0)) {
      ccladd(*(yyvsp + -3), i);
      i ++;
    }
    if (cclsorted) {
      if (*(yyvsp + -2) > lastchar) {
        tmp___9 = 1;
      } else {
        tmp___9 = 0;
      }
    } else {
      tmp___9 = 0;
    }
    cclsorted = tmp___9;
    lastchar = *(yyvsp + 0);
  }
  yyval = *(yyvsp + -3);
  break;
  case 60: 
  if (caseins) {
    if (*(yyvsp + 0) >= 65) {
      if (*(yyvsp + 0) <= 90) {
        tmp___10 = clower(*(yyvsp + 0));
        *(yyvsp + 0) = (int )tmp___10;
      }
    }
  }
  ccladd(*(yyvsp + -1), *(yyvsp + 0));
  if (cclsorted) {
    if (*(yyvsp + 0) > lastchar) {
      tmp___11 = 1;
    } else {
      tmp___11 = 0;
    }
  } else {
    tmp___11 = 0;
  }
  cclsorted = tmp___11;
  lastchar = *(yyvsp + 0);
  yyval = *(yyvsp + -1);
  break;
  case 61: 
  cclsorted = 0;
  yyval = *(yyvsp + -1);
  break;
  case 62: 
  cclsorted = 1;
  lastchar = 0;
  yyval = cclinit();
  currccl = yyval;
  break;
  case 63: 
  c = 0;
  while (c < csize) {
    if ((c & -128) == 0) {
      tmp___12 = __ctype_b_loc();
      if ((int const   )*(*tmp___12 + c) & 8) {
        ccladd(currccl, c);
      }
    }
    c ++;
  }
  break;
  case 64: 
  c___0 = 0;
  while (c___0 < csize) {
    if ((c___0 & -128) == 0) {
      tmp___13 = __ctype_b_loc();
      if ((int const   )*(*tmp___13 + c___0) & 1024) {
        ccladd(currccl, c___0);
      }
    }
    c___0 ++;
  }
  break;
  case 65: 
  c___1 = 0;
  while (c___1 < csize) {
    if ((c___1 & -128) == 0) {
      if (c___1 == 32) {
        ccladd(currccl, c___1);
      } else {
        if (c___1 == 9) {
          ccladd(currccl, c___1);
        }
      }
    }
    c___1 ++;
  }
  break;
  case 66: 
  c___2 = 0;
  while (c___2 < csize) {
    if ((c___2 & -128) == 0) {
      tmp___14 = __ctype_b_loc();
      if ((int const   )*(*tmp___14 + c___2) & 2) {
        ccladd(currccl, c___2);
      }
    }
    c___2 ++;
  }
  break;
  case 67: 
  c___3 = 0;
  while (c___3 < csize) {
    if ((c___3 & -128) == 0) {
      tmp___15 = __ctype_b_loc();
      if ((int const   )*(*tmp___15 + c___3) & 2048) {
        ccladd(currccl, c___3);
      }
    }
    c___3 ++;
  }
  break;
  case 68: 
  c___4 = 0;
  while (c___4 < csize) {
    if ((c___4 & -128) == 0) {
      tmp___16 = __ctype_b_loc();
      if ((int const   )*(*tmp___16 + c___4) & 32768) {
        ccladd(currccl, c___4);
      }
    }
    c___4 ++;
  }
  break;
  case 69: 
  c___5 = 0;
  while (c___5 < csize) {
    if ((c___5 & -128) == 0) {
      tmp___17 = __ctype_b_loc();
      if ((int const   )*(*tmp___17 + c___5) & 512) {
        ccladd(currccl, c___5);
      }
    }
    c___5 ++;
  }
  break;
  case 70: 
  c___6 = 0;
  while (c___6 < csize) {
    if ((c___6 & -128) == 0) {
      tmp___18 = __ctype_b_loc();
      if ((int const   )*(*tmp___18 + c___6) & 16384) {
        ccladd(currccl, c___6);
      }
    }
    c___6 ++;
  }
  break;
  case 71: 
  c___7 = 0;
  while (c___7 < csize) {
    if ((c___7 & -128) == 0) {
      tmp___19 = __ctype_b_loc();
      if ((int const   )*(*tmp___19 + c___7) & 4) {
        ccladd(currccl, c___7);
      }
    }
    c___7 ++;
  }
  break;
  case 72: 
  c___8 = 0;
  while (c___8 < csize) {
    if ((c___8 & -128) == 0) {
      tmp___20 = __ctype_b_loc();
      if ((int const   )*(*tmp___20 + c___8) & 8192) {
        ccladd(currccl, c___8);
      }
    }
    c___8 ++;
  }
  break;
  case 73: 
  if (caseins) {
    c___9 = 0;
    while (c___9 < csize) {
      if ((c___9 & -128) == 0) {
        tmp___21 = __ctype_b_loc();
        if ((int const   )*(*tmp___21 + c___9) & 512) {
          ccladd(currccl, c___9);
        }
      }
      c___9 ++;
    }
  } else {
    c___10 = 0;
    while (c___10 < csize) {
      if ((c___10 & -128) == 0) {
        tmp___22 = __ctype_b_loc();
        if ((int const   )*(*tmp___22 + c___10) & 256) {
          ccladd(currccl, c___10);
        }
      }
      c___10 ++;
    }
  }
  break;
  case 74: 
  c___11 = 0;
  while (c___11 < csize) {
    if ((c___11 & -128) == 0) {
      tmp___23 = __ctype_b_loc();
      if ((int const   )*(*tmp___23 + c___11) & 4096) {
        ccladd(currccl, c___11);
      }
    }
    c___11 ++;
  }
  break;
  case 75: 
  if (caseins) {
    if (*(yyvsp + 0) >= 65) {
      if (*(yyvsp + 0) <= 90) {
        tmp___24 = clower(*(yyvsp + 0));
        *(yyvsp + 0) = (int )tmp___24;
      }
    }
  }
  rulelen ++;
  tmp___25 = mkstate(*(yyvsp + 0));
  yyval = link_machines(*(yyvsp + -1), tmp___25);
  break;
  case 76: 
  yyval = mkstate(257);
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
  yystate = (int )((int const   )yypgoto[yyn - 48] + (int const   )*yyssp);
  if (0 <= yystate) {
    if (yystate <= 110) {
      if ((int const   )yycheck[yystate] == (int const   )*yyssp) {
        yystate = (int )yytable[yystate];
      } else {
        yystate = (int )yydefgoto[yyn - 48];
      }
    } else {
      yystate = (int )yydefgoto[yyn - 48];
    }
  } else {
    yystate = (int )yydefgoto[yyn - 48];
  }
  goto yynewstate;
  yyerrlab: 
  if (! yyerrstatus) {
    yynerrs ++;
    yyerror((char *)"syntax error");
  }
  if (yyerrstatus == 3) {
    if (yychar <= 0) {
      if (yychar == 0) {
        goto yyabortlab;
      }
    } else {
      yydestruct("Error: discarding", yytoken, & yylval);
      yychar = -2;
    }
  }
  goto yyerrlab1;
  yyvsp -= yylen;
  yyssp -= yylen;
  yylen = 0;
  yystate = (int )*yyssp;
  goto yyerrlab1;
  yyerrlab1: 
  yyerrstatus = 3;
  while (1) {
    yyn = (int )yypact[yystate];
    if (yyn != -52) {
      yyn ++;
      if (0 <= yyn) {
        if (yyn <= 110) {
          if ((int const   )yycheck[yyn] == 1) {
            yyn = (int )yytable[yyn];
            if (0 < yyn) {
              break;
            }
          }
        }
      }
    }
    if ((unsigned int )yyssp == (unsigned int )yyss) {
      goto yyabortlab;
    }
    yydestruct("Error: popping", (int )yystos[yystate], yyvsp);
    yyvsp --;
    yyssp --;
    yystate = (int )*yyssp;
  }
  if (yyn == 3) {
    goto yyacceptlab;
  }
  yyvsp ++;
  *yyvsp = yylval;
  yystate = yyn;
  goto yynewstate;
  yyacceptlab: 
  yyresult = 0;
  goto yyreturn;
  yyabortlab: 
  yyresult = 1;
  goto yyreturn;
  yyexhaustedlab: 
  yyerror((char *)"memory exhausted");
  yyresult = 2;
  yyreturn: 
  if (yychar != 0) {
    if (yychar != -2) {
      yydestruct("Cleanup: discarding lookahead", yytoken, & yylval);
    }
  }
  yyvsp -= yylen;
  yyssp -= yylen;
  while ((unsigned int )yyssp != (unsigned int )yyss) {
    yydestruct("Cleanup: popping", (int )yystos[*yyssp], yyvsp);
    yyvsp --;
    yyssp --;
  }
  if ((unsigned int )yyss != (unsigned int )(yyssa)) {
    free((void *)yyss);
  }
  return (yyresult);
}
}

void build_eof_action(void) 
{ register int i___0 ;
  char action_text[2048] ;

  {
  i___0 = 1;
  while (i___0 <= scon_stk_ptr) {
    if (*(sceof + *(scon_stk + i___0))) {
      format_pinpoint_message((char *)"multiple <<EOF>> rules for start condition %s",
                              *(scname + *(scon_stk + i___0)));
    } else {
      *(sceof + *(scon_stk + i___0)) = 1;
      sprintf((char */* __restrict  */)(action_text),
              (char const   */* __restrict  */)"case YY_STATE_EOF(%s):\n",
              *(scname + *(scon_stk + i___0)));
      add_action(action_text);
    }
    i___0 ++;
  }
  line_directive_out((FILE *)0, 1);
  num_rules --;
  num_eof_rules ++;
  return;
}
}

void format_synerr(char *msg , char *arg ) 
{ char errmsg[2048] ;

  {
  sprintf((char */* __restrict  */)(errmsg),
          (char const   */* __restrict  */)((char const   *)msg), arg);
  synerr(errmsg);
  return;
}
}

void synerr(char *str ) 
{ 

  {
  syntaxerror = 1;
  pinpoint_message(str);
  return;
}
}

void format_warn(char *msg , char *arg ) 
{ char warn_msg[2048] ;

  {
  sprintf((char */* __restrict  */)(warn_msg),
          (char const   */* __restrict  */)((char const   *)msg), arg);
  warn(warn_msg);
  return;
}
}

void warn(char *str ) 
{ 

  {
  line_warning(str, linenum);
  return;
}
}

void format_pinpoint_message(char *msg , char *arg ) 
{ char errmsg[2048] ;

  {
  sprintf((char */* __restrict  */)(errmsg),
          (char const   */* __restrict  */)((char const   *)msg), arg);
  pinpoint_message(errmsg);
  return;
}
}

void pinpoint_message(char *str ) 
{ 

  {
  line_pinpoint(str, linenum);
  return;
}
}

void line_warning(char *str , int line ) 
{ char warning[2048] ;

  {
  if (! nowarn) {
    sprintf((char */* __restrict  */)(warning),
            (char const   */* __restrict  */)"warning, %s", str);
    line_pinpoint(warning, line);
  }
  return;
}
}

void line_pinpoint(char *str , int line ) 
{ 

  {
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"\"%s\", line %d: %s\n", infilename,
          line, str);
  return;
}
}

void yyerror(char *msg ) 
{ 

  {
  return;
}
}

extern int _IO_getc(_IO_FILE *__fp ) ;

extern struct _IO_FILE *stdin ;

extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;

extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;

extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;

int yyleng  ;

FILE *yyin ;

FILE *yyout ;

static YY_BUFFER_STATE yy_current_buffer   = (struct yy_buffer_state *)0;

static char yy_hold_char  ;

static int yy_n_chars  ;

static char *yy_c_buf_p   = (char *)0;

static int yy_init   = 1;

static int yy_start   = 0;

static int yy_did_buffer_switch_on_eof  ;

void yyrestart(FILE *input_file ) ;

void yy_switch_to_buffer(YY_BUFFER_STATE new_buffer ) ;

void yy_load_buffer_state(void) ;

YY_BUFFER_STATE yy_create_buffer(FILE *file , int size ) ;

void yy_delete_buffer(YY_BUFFER_STATE b ) ;

void yy_init_buffer(YY_BUFFER_STATE b , FILE *file ) ;

void yy_flush_buffer(YY_BUFFER_STATE b ) ;

YY_BUFFER_STATE yy_scan_buffer(char *base___0 , yy_size_t size ) ;

YY_BUFFER_STATE yy_scan_string(char const   *yy_str ) ;

YY_BUFFER_STATE yy_scan_bytes(char const   *bytes , int len ) ;

static void *yy_flex_alloc(yy_size_t size ) ;

static void *yy_flex_realloc(void *ptr , yy_size_t size ) ;

static void yy_flex_free(void *ptr ) ;

FILE *yyin   = (FILE *)0;

FILE *yyout   = (FILE *)0;

char *yytext  ;

static yy_state_type yy_get_previous_state(void) ;

static yy_state_type yy_try_NUL_trans(yy_state_type yy_current_state ) ;

static int yy_get_next_buffer(void) ;

static void yy_fatal_error(char const   *msg ) ;

static short const   yy_accept[769]   = 
  {(short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )87, (short const   )87,
   (short const   )163, (short const   )163, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )166, (short const   )164,
   (short const   )7, (short const   )18, (short const   )164,
   (short const   )16, (short const   )1, (short const   )17,
   (short const   )164, (short const   )164, (short const   )164,
   (short const   )164, (short const   )15, (short const   )108,
   (short const   )100, (short const   )101, (short const   )108,
   (short const   )93, (short const   )108, (short const   )107,
   (short const   )108, (short const   )108, (short const   )108,
   (short const   )107, (short const   )99, (short const   )89,
   (short const   )108, (short const   )108, (short const   )91,
   (short const   )92, (short const   )87, (short const   )88,
   (short const   )87, (short const   )86, (short const   )85,
   (short const   )86, (short const   )86, (short const   )163,
   (short const   )163, (short const   )28, (short const   )29,
   (short const   )28, (short const   )28, (short const   )28,
   (short const   )28, (short const   )28, (short const   )28,
   (short const   )31, (short const   )30, (short const   )32,
   (short const   )31, (short const   )113, (short const   )109,
   (short const   )110, (short const   )112, (short const   )114,
   (short const   )141, (short const   )142, (short const   )141,
   (short const   )139, (short const   )138, (short const   )140,
   (short const   )115, (short const   )117, (short const   )115,
   (short const   )116, (short const   )115, (short const   )120,
   (short const   )120, (short const   )120, (short const   )120,
   (short const   )122, (short const   )124, (short const   )122,
   (short const   )122, (short const   )122, (short const   )122,
   (short const   )123, (short const   )151, (short const   )155,
   (short const   )151, (short const   )154, (short const   )156,
   (short const   )156, (short const   )152, (short const   )152,
   (short const   )152, (short const   )149, (short const   )150,
   (short const   )164, (short const   )82, (short const   )164,
   (short const   )21, (short const   )22, (short const   )21,
   (short const   )20, (short const   )157, (short const   )159,
   (short const   )157, (short const   )160, (short const   )161,
   (short const   )147, (short const   )147, (short const   )148,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )147, (short const   )81, (short const   )34,
   (short const   )33, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )35,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )26, (short const   )23,
   (short const   )26, (short const   )24, (short const   )7,
   (short const   )18, (short const   )0, (short const   )16, (short const   )1,
   (short const   )17, (short const   )0, (short const   )0, (short const   )0,
   (short const   )14, (short const   )8, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )4, (short const   )5,
   (short const   )0, (short const   )2, (short const   )15,
   (short const   )100, (short const   )101, (short const   )0,
   (short const   )0, (short const   )0, (short const   )95, (short const   )0,
   (short const   )0, (short const   )105, (short const   )105,
   (short const   )0, (short const   )162, (short const   )162,
   (short const   )162, (short const   )94, (short const   )0,
   (short const   )99, (short const   )89, (short const   )0, (short const   )0,
   (short const   )0, (short const   )91, (short const   )92,
   (short const   )104, (short const   )90, (short const   )0,
   (short const   )87, (short const   )88, (short const   )86,
   (short const   )85, (short const   )85, (short const   )83,
   (short const   )84, (short const   )163, (short const   )163,
   (short const   )28, (short const   )29, (short const   )28,
   (short const   )28, (short const   )28, (short const   )28,
   (short const   )31, (short const   )30, (short const   )32,
   (short const   )111, (short const   )112, (short const   )142,
   (short const   )138, (short const   )117, (short const   )0,
   (short const   )118, (short const   )119, (short const   )124,
   (short const   )121, (short const   )151, (short const   )155,
   (short const   )0, (short const   )153, (short const   )0,
   (short const   )144, (short const   )152, (short const   )152,
   (short const   )152, (short const   )0, (short const   )82,
   (short const   )0, (short const   )21, (short const   )22,
   (short const   )21, (short const   )19, (short const   )157,
   (short const   )159, (short const   )158, (short const   )147,
   (short const   )147, (short const   )147, (short const   )148,
   (short const   )143, (short const   )147, (short const   )147,
   (short const   )147, (short const   )34, (short const   )33,
   (short const   )0, (short const   )80, (short const   )0, (short const   )0,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )36, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )0, (short const   )25, (short const   )24, (short const   )0,
   (short const   )14, (short const   )8, (short const   )0, (short const   )12,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )4, (short const   )5, (short const   )0,
   (short const   )6, (short const   )0, (short const   )96, (short const   )0,
   (short const   )97, (short const   )0, (short const   )0,
   (short const   )105, (short const   )105, (short const   )0,
   (short const   )105, (short const   )105, (short const   )105,
   (short const   )162, (short const   )162, (short const   )0,
   (short const   )106, (short const   )90, (short const   )98,
   (short const   )0, (short const   )104, (short const   )0,
   (short const   )83, (short const   )84, (short const   )28,
   (short const   )28, (short const   )28, (short const   )27,
   (short const   )28, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )152, (short const   )152,
   (short const   )143, (short const   )143, (short const   )147,
   (short const   )147, (short const   )0, (short const   )0,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )44,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )49, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )0,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )0, (short const   )0, (short const   )0,
   (short const   )12, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )4,
   (short const   )5, (short const   )0, (short const   )105,
   (short const   )105, (short const   )105, (short const   )105,
   (short const   )105, (short const   )105, (short const   )162,
   (short const   )0, (short const   )0, (short const   )28, (short const   )28,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )152, (short const   )152,
   (short const   )147, (short const   )147, (short const   )37,
   (short const   )38, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )50, (short const   )51, (short const   )81,
   (short const   )81, (short const   )81, (short const   )55,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )60, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )67, (short const   )0, (short const   )0,
   (short const   )0, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )0,
   (short const   )13, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )105,
   (short const   )105, (short const   )105, (short const   )105,
   (short const   )105, (short const   )105, (short const   )0,
   (short const   )0, (short const   )28, (short const   )28,
   (short const   )137, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )152, (short const   )152,
   (short const   )147, (short const   )147, (short const   )39,
   (short const   )81, (short const   )41, (short const   )81,
   (short const   )43, (short const   )81, (short const   )81,
   (short const   )81, (short const   )47, (short const   )81,
   (short const   )52, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )62, (short const   )81,
   (short const   )81, (short const   )65, (short const   )81,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )3, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )105,
   (short const   )105, (short const   )105, (short const   )0,
   (short const   )0, (short const   )28, (short const   )28, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )145,
   (short const   )146, (short const   )145, (short const   )146,
   (short const   )81, (short const   )42, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )78,
   (short const   )61, (short const   )81, (short const   )64,
   (short const   )81, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )81, (short const   )81,
   (short const   )69, (short const   )70, (short const   )0,
   (short const   )10, (short const   )0, (short const   )11, (short const   )0,
   (short const   )103, (short const   )0, (short const   )102,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )45, (short const   )81, (short const   )48,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )77, (short const   )81,
   (short const   )59, (short const   )63, (short const   )66,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )79, (short const   )81, (short const   )0,
   (short const   )102, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )81, (short const   )81,
   (short const   )81, (short const   )46, (short const   )81,
   (short const   )81, (short const   )56, (short const   )81,
   (short const   )81, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )68, (short const   )0, (short const   )9,
   (short const   )0, (short const   )125, (short const   )126,
   (short const   )127, (short const   )128, (short const   )129,
   (short const   )130, (short const   )131, (short const   )132,
   (short const   )133, (short const   )134, (short const   )135,
   (short const   )0, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )136,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )54, (short const   )81,
   (short const   )81, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )81,
   (short const   )81, (short const   )81, (short const   )53,
   (short const   )81, (short const   )58, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )72, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )73, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )71, (short const   )0, (short const   )75, (short const   )0,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )74, (short const   )76, (short const   )81,
   (short const   )81, (short const   )81, (short const   )81,
   (short const   )81, (short const   )81, (short const   )57,
   (short const   )40, (short const   )0};

static int const   yy_ec[256]   = 
  {(int const   )0, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )2, (int const   )3, (int const   )1,
   (int const   )1, (int const   )4, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )2, (int const   )1, (int const   )5, (int const   )6,
   (int const   )7, (int const   )8, (int const   )1, (int const   )9,
   (int const   )10, (int const   )10, (int const   )11, (int const   )12,
   (int const   )13, (int const   )14, (int const   )10, (int const   )15,
   (int const   )16, (int const   )16, (int const   )16, (int const   )16,
   (int const   )16, (int const   )16, (int const   )16, (int const   )17,
   (int const   )18, (int const   )19, (int const   )20, (int const   )1,
   (int const   )21, (int const   )22, (int const   )23, (int const   )10,
   (int const   )1, (int const   )31, (int const   )32, (int const   )33,
   (int const   )34, (int const   )35, (int const   )36, (int const   )37,
   (int const   )38, (int const   )39, (int const   )40, (int const   )41,
   (int const   )42, (int const   )43, (int const   )44, (int const   )45,
   (int const   )46, (int const   )47, (int const   )48, (int const   )49,
   (int const   )50, (int const   )51, (int const   )52, (int const   )53,
   (int const   )54, (int const   )55, (int const   )47, (int const   )26,
   (int const   )27, (int const   )28, (int const   )29, (int const   )30,
   (int const   )1, (int const   )31, (int const   )32, (int const   )33,
   (int const   )34, (int const   )35, (int const   )36, (int const   )37,
   (int const   )38, (int const   )39, (int const   )40, (int const   )41,
   (int const   )42, (int const   )43, (int const   )44, (int const   )45,
   (int const   )46, (int const   )47, (int const   )48, (int const   )49,
   (int const   )50, (int const   )51, (int const   )52, (int const   )53,
   (int const   )54, (int const   )55, (int const   )47, (int const   )56,
   (int const   )57, (int const   )58, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1};

static int const   yy_meta[59]   = 
  {(int const   )0, (int const   )1, (int const   )1, (int const   )2,
   (int const   )1, (int const   )3, (int const   )1, (int const   )1,
   (int const   )1, (int const   )4, (int const   )1, (int const   )5,
   (int const   )6, (int const   )1, (int const   )7, (int const   )4,
   (int const   )8, (int const   )8, (int const   )8, (int const   )8,
   (int const   )1, (int const   )1, (int const   )1, (int const   )1,
   (int const   )9, (int const   )10, (int const   )1, (int const   )11,
   (int const   )12, (int const   )1, (int const   )13, (int const   )14,
   (int const   )14, (int const   )14, (int const   )14, (int const   )14,
   (int const   )14, (int const   )15, (int const   )15, (int const   )15,
   (int const   )15, (int const   )15, (int const   )15, (int const   )15,
   (int const   )15, (int const   )15, (int const   )15, (int const   )15,
   (int const   )15, (int const   )15, (int const   )15, (int const   )15,
   (int const   )15, (int const   )15, (int const   )15, (int const   )15,
   (int const   )4, (int const   )1, (int const   )16};

static short const   yy_base[858]   = 
  {(short const   )0, (short const   )0, (short const   )58,
   (short const   )115, (short const   )172, (short const   )120,
   (short const   )129, (short const   )2712, (short const   )2711,
   (short const   )230, (short const   )2705, (short const   )136,
   (short const   )141, (short const   )288, (short const   )0,
   (short const   )2683, (short const   )2682, (short const   )144,
   (short const   )151, (short const   )185, (short const   )191,
   (short const   )178, (short const   )188, (short const   )344,
   (short const   )347, (short const   )375, (short const   )0,
   (short const   )125, (short const   )131, (short const   )147,
   (short const   )216, (short const   )431, (short const   )434,
   (short const   )461, (short const   )0, (short const   )519,
   (short const   )0, (short const   )205, (short const   )349,
   (short const   )2710, (short const   )2716, (short const   )353,
   (short const   )2716, (short const   )2706, (short const   )0,
   (short const   )360, (short const   )2716, (short const   )2705,
   (short const   )144, (short const   )570, (short const   )2696,
   (short const   )0, (short const   )2716, (short const   )577,
   (short const   )2716, (short const   )2703, (short const   )2716,
   (short const   )438, (short const   )2716, (short const   )2684,
   (short const   )126, (short const   )149, (short const   )427,
   (short const   )591, (short const   )2716, (short const   )2701,
   (short const   )141, (short const   )2682, (short const   )2716,
   (short const   )0, (short const   )2716, (short const   )2699,
   (short const   )0, (short const   )2699, (short const   )2697,
   (short const   )155, (short const   )2696, (short const   )2716,
   (short const   )0, (short const   )2716, (short const   )2695,
   (short const   )2716, (short const   )0, (short const   )2662,
   (short const   )2641, (short const   )2637, (short const   )0,
   (short const   )2692, (short const   )2716, (short const   )2690,
   (short const   )2716, (short const   )2716, (short const   )2663,
   (short const   )0, (short const   )2716, (short const   )2716,
   (short const   )2716, (short const   )2688, (short const   )2716,
   (short const   )431, (short const   )2716, (short const   )2716,
   (short const   )2716, (short const   )2687, (short const   )2716,
   (short const   )567, (short const   )2716, (short const   )2669,
   (short const   )571, (short const   )164, (short const   )2716,
   (short const   )2716, (short const   )2685, (short const   )0,
   (short const   )2667, (short const   )573, (short const   )2716,
   (short const   )0, (short const   )2716, (short const   )2683,
   (short const   )2716, (short const   )573, (short const   )2674,
   (short const   )0, (short const   )2649, (short const   )2628,
   (short const   )2716, (short const   )2716, (short const   )222,
   (short const   )2716, (short const   )356, (short const   )448,
   (short const   )2716, (short const   )450, (short const   )2667,
   (short const   )0, (short const   )2716, (short const   )2678,
   (short const   )2716, (short const   )0, (short const   )0,
   (short const   )198, (short const   )2716, (short const   )2677,
   (short const   )2621, (short const   )2716, (short const   )2667,
   (short const   )0, (short const   )2642, (short const   )2621,
   (short const   )2716, (short const   )2673, (short const   )2716,
   (short const   )2671, (short const   )2668, (short const   )2640,
   (short const   )2639, (short const   )2716, (short const   )544,
   (short const   )2639, (short const   )579, (short const   )2634,
   (short const   )2635, (short const   )318, (short const   )0,
   (short const   )2623, (short const   )2631, (short const   )424,
   (short const   )562, (short const   )2614, (short const   )587,
   (short const   )2629, (short const   )2613, (short const   )2618,
   (short const   )2626, (short const   )2629, (short const   )2604,
   (short const   )2716, (short const   )2716, (short const   )2653,
   (short const   )612, (short const   )634, (short const   )2716,
   (short const   )2654, (short const   )0, (short const   )637,
   (short const   )2716, (short const   )2653, (short const   )600,
   (short const   )2616, (short const   )0, (short const   )0,
   (short const   )641, (short const   )647, (short const   )651,
   (short const   )669, (short const   )0, (short const   )0,
   (short const   )453, (short const   )2716, (short const   )0,
   (short const   )672, (short const   )2716, (short const   )2651,
   (short const   )2597, (short const   )605, (short const   )2716,
   (short const   )2649, (short const   )2616, (short const   )620,
   (short const   )657, (short const   )645, (short const   )2716,
   (short const   )662, (short const   )0, (short const   )2716,
   (short const   )2592, (short const   )688, (short const   )2716,
   (short const   )2646, (short const   )2592, (short const   )2636,
   (short const   )2625, (short const   )2716, (short const   )0,
   (short const   )2716, (short const   )2610, (short const   )0,
   (short const   )2716, (short const   )0, (short const   )0,
   (short const   )2642, (short const   )0, (short const   )0,
   (short const   )2640, (short const   )2716, (short const   )0,
   (short const   )2716, (short const   )0, (short const   )2602,
   (short const   )2598, (short const   )745, (short const   )0,
   (short const   )2638, (short const   )2716, (short const   )2716,
   (short const   )0, (short const   )2716, (short const   )688,
   (short const   )2716, (short const   )773, (short const   )2716,
   (short const   )2716, (short const   )2716, (short const   )2716,
   (short const   )0, (short const   )2716, (short const   )673,
   (short const   )2716, (short const   )0, (short const   )2716,
   (short const   )0, (short const   )2599, (short const   )2595,
   (short const   )690, (short const   )2716, (short const   )698,
   (short const   )707, (short const   )2716, (short const   )709,
   (short const   )2716, (short const   )0, (short const   )2716,
   (short const   )2716, (short const   )0, (short const   )596,
   (short const   )2579, (short const   )2716, (short const   )827,
   (short const   )0, (short const   )2596, (short const   )2592,
   (short const   )2632, (short const   )2716, (short const   )2628,
   (short const   )2716, (short const   )2593, (short const   )2592,
   (short const   )0, (short const   )642, (short const   )2582,
   (short const   )563, (short const   )2617, (short const   )2579,
   (short const   )620, (short const   )2578, (short const   )2577,
   (short const   )2583, (short const   )669, (short const   )2570,
   (short const   )2584, (short const   )2572, (short const   )0,
   (short const   )2569, (short const   )2716, (short const   )2570,
   (short const   )2571, (short const   )2579, (short const   )2582,
   (short const   )685, (short const   )125, (short const   )2570,
   (short const   )2567, (short const   )2566, (short const   )688,
   (short const   )2608, (short const   )2716, (short const   )716,
   (short const   )2568, (short const   )0, (short const   )0,
   (short const   )720, (short const   )2716, (short const   )2608,
   (short const   )884, (short const   )2562, (short const   )2559,
   (short const   )2569, (short const   )0, (short const   )0,
   (short const   )723, (short const   )2716, (short const   )739,
   (short const   )2716, (short const   )805, (short const   )2716,
   (short const   )808, (short const   )2562, (short const   )787,
   (short const   )869, (short const   )876, (short const   )930,
   (short const   )881, (short const   )973, (short const   )800,
   (short const   )0, (short const   )2548, (short const   )2716,
   (short const   )2716, (short const   )2716, (short const   )2570,
   (short const   )0, (short const   )2559, (short const   )0,
   (short const   )0, (short const   )2568, (short const   )2557,
   (short const   )0, (short const   )2716, (short const   )0,
   (short const   )1009, (short const   )2581, (short const   )678,
   (short const   )870, (short const   )871, (short const   )874,
   (short const   )879, (short const   )913, (short const   )992,
   (short const   )974, (short const   )1013, (short const   )885,
   (short const   )2565, (short const   )2554, (short const   )0,
   (short const   )1067, (short const   )2563, (short const   )2552,
   (short const   )2546, (short const   )2545, (short const   )2557,
   (short const   )2562, (short const   )2561, (short const   )2550,
   (short const   )2557, (short const   )0, (short const   )2554,
   (short const   )2537, (short const   )2556, (short const   )0,
   (short const   )2536, (short const   )2543, (short const   )2533,
   (short const   )2548, (short const   )2568, (short const   )2537,
   (short const   )2549, (short const   )2544, (short const   )2542,
   (short const   )2541, (short const   )2532, (short const   )2539,
   (short const   )2540, (short const   )2538, (short const   )2539,
   (short const   )578, (short const   )2520, (short const   )2538,
   (short const   )2525, (short const   )860, (short const   )2526,
   (short const   )2528, (short const   )2521, (short const   )2517,
   (short const   )2529, (short const   )817, (short const   )1044,
   (short const   )2716, (short const   )822, (short const   )1095,
   (short const   )914, (short const   )2532, (short const   )2523,
   (short const   )2517, (short const   )0, (short const   )0,
   (short const   )2524, (short const   )1102, (short const   )1025,
   (short const   )1142, (short const   )2539, (short const   )1028,
   (short const   )1163, (short const   )2716, (short const   )2513,
   (short const   )2521, (short const   )2523, (short const   )2507,
   (short const   )0, (short const   )2526, (short const   )1058,
   (short const   )891, (short const   )1014, (short const   )1019,
   (short const   )894, (short const   )1038, (short const   )1080,
   (short const   )1072, (short const   )1086, (short const   )1083,
   (short const   )1081, (short const   )2520, (short const   )2504,
   (short const   )2518, (short const   )2502, (short const   )2716,
   (short const   )2716, (short const   )2505, (short const   )2493,
   (short const   )2492, (short const   )2495, (short const   )2507,
   (short const   )1148, (short const   )2507, (short const   )2492,
   (short const   )0, (short const   )0, (short const   )2492,
   (short const   )2493, (short const   )2507, (short const   )0,
   (short const   )2525, (short const   )2490, (short const   )2498,
   (short const   )2522, (short const   )2485, (short const   )2495,
   (short const   )0, (short const   )2500, (short const   )2491,
   (short const   )2487, (short const   )2479, (short const   )2479,
   (short const   )2483, (short const   )0, (short const   )875,
   (short const   )2494, (short const   )2481, (short const   )2494,
   (short const   )2480, (short const   )2475, (short const   )2491,
   (short const   )2519, (short const   )2716, (short const   )920,
   (short const   )999, (short const   )2465, (short const   )2474,
   (short const   )2468, (short const   )2494, (short const   )2496,
   (short const   )1105, (short const   )1184, (short const   )1081,
   (short const   )902, (short const   )969, (short const   )2479,
   (short const   )2491, (short const   )2463, (short const   )2477,
   (short const   )2716, (short const   )165, (short const   )1090,
   (short const   )1144, (short const   )1143, (short const   )1147,
   (short const   )1163, (short const   )1095, (short const   )1145,
   (short const   )1037, (short const   )1085, (short const   )1150,
   (short const   )1173, (short const   )2461, (short const   )2475,
   (short const   )2459, (short const   )2473, (short const   )0,
   (short const   )2458, (short const   )0, (short const   )2460,
   (short const   )0, (short const   )1165, (short const   )2454,
   (short const   )2469, (short const   )0, (short const   )2461,
   (short const   )0, (short const   )2471, (short const   )2410,
   (short const   )2414, (short const   )2434, (short const   )2400,
   (short const   )2393, (short const   )2405, (short const   )2385,
   (short const   )2382, (short const   )0, (short const   )2383,
   (short const   )2335, (short const   )0, (short const   )2335,
   (short const   )2330, (short const   )2326, (short const   )2309,
   (short const   )2278, (short const   )2259, (short const   )2269,
   (short const   )2268, (short const   )2256, (short const   )2297,
   (short const   )1046, (short const   )2238, (short const   )2242,
   (short const   )2253, (short const   )1179, (short const   )1142,
   (short const   )1145, (short const   )2247, (short const   )2246,
   (short const   )0, (short const   )0, (short const   )1191,
   (short const   )1192, (short const   )1172, (short const   )1201,
   (short const   )1202, (short const   )1204, (short const   )1205,
   (short const   )1206, (short const   )1207, (short const   )1209,
   (short const   )1210, (short const   )1208, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0,
   (short const   )2254, (short const   )0, (short const   )2221,
   (short const   )2229, (short const   )2218, (short const   )2208,
   (short const   )2200, (short const   )2209, (short const   )2198,
   (short const   )2195, (short const   )2165, (short const   )2168,
   (short const   )2149, (short const   )2132, (short const   )0,
   (short const   )0, (short const   )2129, (short const   )0,
   (short const   )2139, (short const   )2143, (short const   )2134,
   (short const   )2124, (short const   )2137, (short const   )2117,
   (short const   )2116, (short const   )0, (short const   )0,
   (short const   )1228, (short const   )2716, (short const   )1232,
   (short const   )2716, (short const   )2111, (short const   )2716,
   (short const   )2117, (short const   )2716, (short const   )2115,
   (short const   )2114, (short const   )2108, (short const   )2107,
   (short const   )2106, (short const   )2103, (short const   )2102,
   (short const   )2098, (short const   )2095, (short const   )2063,
   (short const   )2047, (short const   )1213, (short const   )2012,
   (short const   )1986, (short const   )1975, (short const   )0,
   (short const   )1954, (short const   )0, (short const   )1947,
   (short const   )1950, (short const   )1941, (short const   )1945,
   (short const   )0, (short const   )1942, (short const   )0,
   (short const   )0, (short const   )0, (short const   )1938,
   (short const   )1940, (short const   )1934, (short const   )1905,
   (short const   )0, (short const   )1872, (short const   )1234,
   (short const   )2716, (short const   )1888, (short const   )1882,
   (short const   )1881, (short const   )1864, (short const   )1848,
   (short const   )1832, (short const   )1828, (short const   )1827,
   (short const   )1826, (short const   )1823, (short const   )1806,
   (short const   )1809, (short const   )1784, (short const   )1787,
   (short const   )1772, (short const   )0, (short const   )1781,
   (short const   )1786, (short const   )0, (short const   )1766,
   (short const   )1767, (short const   )1759, (short const   )1744,
   (short const   )1213, (short const   )1736, (short const   )0,
   (short const   )1236, (short const   )2716, (short const   )1245,
   (short const   )2716, (short const   )2716, (short const   )2716,
   (short const   )2716, (short const   )2716, (short const   )2716,
   (short const   )2716, (short const   )2716, (short const   )2716,
   (short const   )2716, (short const   )2716, (short const   )1750,
   (short const   )1727, (short const   )1720, (short const   )1701,
   (short const   )1687, (short const   )1670, (short const   )1681,
   (short const   )1667, (short const   )1679, (short const   )1659,
   (short const   )689, (short const   )1658, (short const   )1671,
   (short const   )2716, (short const   )1657, (short const   )1627,
   (short const   )1621, (short const   )1635, (short const   )0,
   (short const   )1603, (short const   )1596, (short const   )1595,
   (short const   )1608, (short const   )1602, (short const   )1587,
   (short const   )1586, (short const   )1583, (short const   )1581,
   (short const   )1587, (short const   )1555, (short const   )0,
   (short const   )1547, (short const   )0, (short const   )1527,
   (short const   )1507, (short const   )1520, (short const   )1503,
   (short const   )1483, (short const   )1482, (short const   )1485,
   (short const   )1443, (short const   )1440, (short const   )1228,
   (short const   )2716, (short const   )1225, (short const   )1224,
   (short const   )1206, (short const   )1210, (short const   )2716,
   (short const   )1213, (short const   )1202, (short const   )1018,
   (short const   )948, (short const   )2716, (short const   )945,
   (short const   )2716, (short const   )884, (short const   )780,
   (short const   )771, (short const   )779, (short const   )2716,
   (short const   )2716, (short const   )689, (short const   )673,
   (short const   )581, (short const   )408, (short const   )318,
   (short const   )86, (short const   )0, (short const   )0,
   (short const   )2716, (short const   )1263, (short const   )1279,
   (short const   )1295, (short const   )1311, (short const   )1327,
   (short const   )1343, (short const   )1359, (short const   )1375,
   (short const   )1391, (short const   )1407, (short const   )1423,
   (short const   )1439, (short const   )1455, (short const   )1471,
   (short const   )1481, (short const   )1496, (short const   )1505,
   (short const   )1520, (short const   )1536, (short const   )1545,
   (short const   )1560, (short const   )1576, (short const   )1592,
   (short const   )1608, (short const   )1624, (short const   )1634,
   (short const   )1649, (short const   )1659, (short const   )1674,
   (short const   )1690, (short const   )1706, (short const   )1718,
   (short const   )1728, (short const   )1743, (short const   )1759,
   (short const   )1775, (short const   )1791, (short const   )1807,
   (short const   )1817, (short const   )1832, (short const   )1843,
   (short const   )1236, (short const   )1858, (short const   )1874,
   (short const   )1890, (short const   )1898, (short const   )1905,
   (short const   )1920, (short const   )1936, (short const   )1952,
   (short const   )1968, (short const   )1977, (short const   )1985,
   (short const   )2001, (short const   )2017, (short const   )2033,
   (short const   )2049, (short const   )2065, (short const   )2081,
   (short const   )2097, (short const   )2113, (short const   )2123,
   (short const   )2138, (short const   )2148, (short const   )2155,
   (short const   )2170, (short const   )2182, (short const   )2192,
   (short const   )2207, (short const   )2223, (short const   )2239,
   (short const   )2255, (short const   )2265, (short const   )2280,
   (short const   )2291, (short const   )2306, (short const   )2322,
   (short const   )2338, (short const   )2354, (short const   )2364,
   (short const   )2373, (short const   )2388, (short const   )2404,
   (short const   )2420, (short const   )2429, (short const   )2437,
   (short const   )2453, (short const   )2469, (short const   )2485};

static short const   yy_def[858]   = 
  {(short const   )0, (short const   )768, (short const   )768,
   (short const   )769, (short const   )769, (short const   )770,
   (short const   )771, (short const   )772, (short const   )772,
   (short const   )768, (short const   )9, (short const   )773,
   (short const   )773, (short const   )768, (short const   )13,
   (short const   )774, (short const   )774, (short const   )775,
   (short const   )775, (short const   )776, (short const   )776,
   (short const   )777, (short const   )777, (short const   )778,
   (short const   )778, (short const   )768, (short const   )25,
   (short const   )779, (short const   )779, (short const   )780,
   (short const   )780, (short const   )781, (short const   )781,
   (short const   )768, (short const   )33, (short const   )768,
   (short const   )35, (short const   )782, (short const   )782,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )783,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )784, (short const   )768,
   (short const   )785, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )786, (short const   )787, (short const   )788,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )789, (short const   )768, (short const   )789,
   (short const   )790, (short const   )791, (short const   )790,
   (short const   )790, (short const   )792, (short const   )768,
   (short const   )793, (short const   )768, (short const   )793,
   (short const   )768, (short const   )794, (short const   )794,
   (short const   )794, (short const   )793, (short const   )795,
   (short const   )768, (short const   )768, (short const   )795,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )796, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )787, (short const   )768, (short const   )768,
   (short const   )787, (short const   )797, (short const   )768,
   (short const   )768, (short const   )768, (short const   )798,
   (short const   )768, (short const   )787, (short const   )768,
   (short const   )799, (short const   )768, (short const   )799,
   (short const   )768, (short const   )800, (short const   )768,
   (short const   )801, (short const   )801, (short const   )801,
   (short const   )768, (short const   )768, (short const   )802,
   (short const   )768, (short const   )802, (short const   )803,
   (short const   )768, (short const   )803, (short const   )768,
   (short const   )804, (short const   )768, (short const   )804,
   (short const   )768, (short const   )805, (short const   )806,
   (short const   )806, (short const   )768, (short const   )806,
   (short const   )806, (short const   )768, (short const   )806,
   (short const   )807, (short const   )807, (short const   )807,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )808, (short const   )768,
   (short const   )768, (short const   )768, (short const   )809,
   (short const   )809, (short const   )809, (short const   )809,
   (short const   )809, (short const   )809, (short const   )809,
   (short const   )809, (short const   )809, (short const   )809,
   (short const   )810, (short const   )809, (short const   )809,
   (short const   )809, (short const   )809, (short const   )809,
   (short const   )809, (short const   )809, (short const   )809,
   (short const   )768, (short const   )768, (short const   )811,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )783, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )812, (short const   )813,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )814, (short const   )815,
   (short const   )816, (short const   )768, (short const   )785,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )817, (short const   )768,
   (short const   )768, (short const   )768, (short const   )818,
   (short const   )818, (short const   )819, (short const   )768,
   (short const   )768, (short const   )820, (short const   )768,
   (short const   )821, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )822,
   (short const   )768, (short const   )768, (short const   )823,
   (short const   )768, (short const   )824, (short const   )825,
   (short const   )825, (short const   )826, (short const   )827,
   (short const   )828, (short const   )768, (short const   )829,
   (short const   )768, (short const   )830, (short const   )830,
   (short const   )830, (short const   )768, (short const   )831,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )832, (short const   )768, (short const   )768,
   (short const   )768, (short const   )833, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )834, (short const   )768, (short const   )835,
   (short const   )768, (short const   )835, (short const   )768,
   (short const   )836, (short const   )836, (short const   )836,
   (short const   )837, (short const   )768, (short const   )837,
   (short const   )838, (short const   )768, (short const   )838,
   (short const   )768, (short const   )839, (short const   )768,
   (short const   )768, (short const   )840, (short const   )840,
   (short const   )840, (short const   )768, (short const   )768,
   (short const   )841, (short const   )841, (short const   )841,
   (short const   )768, (short const   )768, (short const   )842,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )768, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )844, (short const   )768, (short const   )768,
   (short const   )768, (short const   )845, (short const   )846,
   (short const   )847, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )848, (short const   )849,
   (short const   )850, (short const   )768, (short const   )850,
   (short const   )768, (short const   )851, (short const   )768,
   (short const   )851, (short const   )768, (short const   )852,
   (short const   )852, (short const   )852, (short const   )768,
   (short const   )852, (short const   )852, (short const   )768,
   (short const   )853, (short const   )854, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )855, (short const   )768, (short const   )826,
   (short const   )827, (short const   )830, (short const   )830,
   (short const   )241, (short const   )768, (short const   )241,
   (short const   )241, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )836, (short const   )836, (short const   )278,
   (short const   )278, (short const   )841, (short const   )841,
   (short const   )768, (short const   )768, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )768, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )768, (short const   )847, (short const   )847,
   (short const   )768, (short const   )847, (short const   )847,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )848, (short const   )849,
   (short const   )768, (short const   )341, (short const   )852,
   (short const   )343, (short const   )341, (short const   )852,
   (short const   )343, (short const   )768, (short const   )768,
   (short const   )768, (short const   )830, (short const   )830,
   (short const   )360, (short const   )768, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )836, (short const   )836,
   (short const   )841, (short const   )841, (short const   )768,
   (short const   )768, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )768,
   (short const   )768, (short const   )768, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )768, (short const   )768, (short const   )847,
   (short const   )847, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )427,
   (short const   )852, (short const   )343, (short const   )852,
   (short const   )852, (short const   )852, (short const   )768,
   (short const   )768, (short const   )830, (short const   )830,
   (short const   )768, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )836, (short const   )836,
   (short const   )841, (short const   )841, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )768,
   (short const   )856, (short const   )768, (short const   )768,
   (short const   )768, (short const   )852, (short const   )852,
   (short const   )852, (short const   )768, (short const   )768,
   (short const   )830, (short const   )830, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )836,
   (short const   )836, (short const   )841, (short const   )841,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )856, (short const   )768, (short const   )856,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )833,
   (short const   )833, (short const   )833, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )843, (short const   )843, (short const   )857,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )833, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )843,
   (short const   )857, (short const   )768, (short const   )857,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )843,
   (short const   )843, (short const   )843, (short const   )768,
   (short const   )768, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )843, (short const   )843, (short const   )843,
   (short const   )0, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768};

static short const   yy_nxt[2775]   = 
  {(short const   )0, (short const   )40, (short const   )41,
   (short const   )42, (short const   )43, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )44, (short const   )44, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )45, (short const   )46, (short const   )47,
   (short const   )40, (short const   )48, (short const   )40,
   (short const   )49, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )50, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )51, (short const   )51,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )53, (short const   )54, (short const   )55,
   (short const   )56, (short const   )767, (short const   )57,
   (short const   )70, (short const   )71, (short const   )58,
   (short const   )58, (short const   )58, (short const   )129,
   (short const   )130, (short const   )58, (short const   )73,
   (short const   )70, (short const   )74, (short const   )129,
   (short const   )130, (short const   )59, (short const   )75,
   (short const   )87, (short const   )88, (short const   )89,
   (short const   )60, (short const   )61, (short const   )87,
   (short const   )88, (short const   )89, (short const   )188,
   (short const   )96, (short const   )97, (short const   )224,
   (short const   )132, (short const   )133, (short const   )210,
   (short const   )211, (short const   )96, (short const   )97,
   (short const   )404, (short const   )98, (short const   )134,
   (short const   )405, (short const   )99, (short const   )99,
   (short const   )99, (short const   )99, (short const   )98,
   (short const   )213, (short const   )213, (short const   )99,
   (short const   )99, (short const   )99, (short const   )99,
   (short const   )62, (short const   )58, (short const   )58,
   (short const   )63, (short const   )64, (short const   )65,
   (short const   )56, (short const   )252, (short const   )57,
   (short const   )66, (short const   )40, (short const   )58,
   (short const   )58, (short const   )58, (short const   )439,
   (short const   )189, (short const   )58, (short const   )102,
   (short const   )103, (short const   )104, (short const   )40,
   (short const   )252, (short const   )67, (short const   )102,
   (short const   )103, (short const   )104, (short const   )225,
   (short const   )60, (short const   )61, (short const   )275,
   (short const   )68, (short const   )100, (short const   )214,
   (short const   )107, (short const   )108, (short const   )276,
   (short const   )109, (short const   )178, (short const   )100,
   (short const   )179, (short const   )232, (short const   )105,
   (short const   )233, (short const   )107, (short const   )108,
   (short const   )572, (short const   )109, (short const   )105,
   (short const   )132, (short const   )133, (short const   )180,
   (short const   )180, (short const   )180, (short const   )180,
   (short const   )265, (short const   )266, (short const   )134,
   (short const   )62, (short const   )58, (short const   )58,
   (short const   )78, (short const   )78, (short const   )79,
   (short const   )80, (short const   )78, (short const   )78,
   (short const   )78, (short const   )78, (short const   )78,
   (short const   )78, (short const   )81, (short const   )78,
   (short const   )78, (short const   )78, (short const   )78,
   (short const   )78, (short const   )78, (short const   )78,
   (short const   )78, (short const   )78, (short const   )78,
   (short const   )78, (short const   )78, (short const   )82,
   (short const   )82, (short const   )78, (short const   )78,
   (short const   )78, (short const   )78, (short const   )82,
   (short const   )82, (short const   )82, (short const   )82,
   (short const   )82, (short const   )82, (short const   )82,
   (short const   )82, (short const   )82, (short const   )82,
   (short const   )82, (short const   )82, (short const   )82,
   (short const   )82, (short const   )82, (short const   )82,
   (short const   )82, (short const   )82, (short const   )83,
   (short const   )82, (short const   )82, (short const   )82,
   (short const   )82, (short const   )82, (short const   )82,
   (short const   )84, (short const   )78, (short const   )78,
   (short const   )78, (short const   )90, (short const   )90,
   (short const   )40, (short const   )90, (short const   )90,
   (short const   )90, (short const   )90, (short const   )90,
   (short const   )90, (short const   )90, (short const   )91,
   (short const   )90, (short const   )91, (short const   )90,
   (short const   )90, (short const   )90, (short const   )90,
   (short const   )90, (short const   )90, (short const   )90,
   (short const   )90, (short const   )90, (short const   )92,
   (short const   )93, (short const   )93, (short const   )90,
   (short const   )90, (short const   )90, (short const   )90,
   (short const   )93, (short const   )93, (short const   )93,
   (short const   )93, (short const   )93, (short const   )93,
   (short const   )93, (short const   )93, (short const   )93,
   (short const   )93, (short const   )93, (short const   )93,
   (short const   )93, (short const   )93, (short const   )93,
   (short const   )93, (short const   )93, (short const   )93,
   (short const   )93, (short const   )93, (short const   )93,
   (short const   )93, (short const   )93, (short const   )93,
   (short const   )93, (short const   )93, (short const   )90,
   (short const   )90, (short const   )90, (short const   )111,
   (short const   )112, (short const   )296, (short const   )111,
   (short const   )112, (short const   )178, (short const   )766,
   (short const   )179, (short const   )181, (short const   )182,
   (short const   )183, (short const   )113, (short const   )265,
   (short const   )266, (short const   )113, (short const   )185,
   (short const   )186, (short const   )187, (short const   )180,
   (short const   )180, (short const   )180, (short const   )180,
   (short const   )297, (short const   )114, (short const   )115,
   (short const   )116, (short const   )114, (short const   )115,
   (short const   )116, (short const   )117, (short const   )117,
   (short const   )118, (short const   )119, (short const   )120,
   (short const   )117, (short const   )117, (short const   )117,
   (short const   )121, (short const   )117, (short const   )117,
   (short const   )117, (short const   )117, (short const   )117,
   (short const   )122, (short const   )117, (short const   )117,
   (short const   )117, (short const   )117, (short const   )117,
   (short const   )117, (short const   )117, (short const   )117,
   (short const   )123, (short const   )123, (short const   )117,
   (short const   )117, (short const   )117, (short const   )117,
   (short const   )123, (short const   )123, (short const   )123,
   (short const   )123, (short const   )123, (short const   )123,
   (short const   )123, (short const   )123, (short const   )123,
   (short const   )123, (short const   )123, (short const   )123,
   (short const   )123, (short const   )123, (short const   )123,
   (short const   )123, (short const   )123, (short const   )123,
   (short const   )124, (short const   )123, (short const   )123,
   (short const   )123, (short const   )123, (short const   )123,
   (short const   )123, (short const   )125, (short const   )126,
   (short const   )117, (short const   )127, (short const   )136,
   (short const   )137, (short const   )138, (short const   )136,
   (short const   )137, (short const   )138, (short const   )206,
   (short const   )206, (short const   )207, (short const   )215,
   (short const   )215, (short const   )215, (short const   )215,
   (short const   )248, (short const   )248, (short const   )248,
   (short const   )248, (short const   )268, (short const   )269,
   (short const   )268, (short const   )269, (short const   )300,
   (short const   )331, (short const   )332, (short const   )139,
   (short const   )301, (short const   )765, (short const   )139,
   (short const   )140, (short const   )141, (short const   )142,
   (short const   )143, (short const   )140, (short const   )140,
   (short const   )140, (short const   )144, (short const   )140,
   (short const   )140, (short const   )145, (short const   )140,
   (short const   )140, (short const   )140, (short const   )146,
   (short const   )140, (short const   )140, (short const   )140,
   (short const   )140, (short const   )140, (short const   )140,
   (short const   )140, (short const   )140, (short const   )147,
   (short const   )147, (short const   )140, (short const   )140,
   (short const   )140, (short const   )140, (short const   )147,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )147, (short const   )147, (short const   )148,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )147, (short const   )147, (short const   )147,
   (short const   )149, (short const   )140, (short const   )140,
   (short const   )140, (short const   )150, (short const   )151,
   (short const   )152, (short const   )153, (short const   )154,
   (short const   )150, (short const   )150, (short const   )150,
   (short const   )150, (short const   )150, (short const   )150,
   (short const   )150, (short const   )150, (short const   )150,
   (short const   )150, (short const   )150, (short const   )155,
   (short const   )156, (short const   )150, (short const   )150,
   (short const   )150, (short const   )157, (short const   )150,
   (short const   )150, (short const   )150, (short const   )150,
   (short const   )150, (short const   )150, (short const   )150,
   (short const   )150, (short const   )158, (short const   )159,
   (short const   )160, (short const   )161, (short const   )162,
   (short const   )163, (short const   )164, (short const   )164,
   (short const   )165, (short const   )164, (short const   )164,
   (short const   )166, (short const   )167, (short const   )168,
   (short const   )169, (short const   )170, (short const   )164,
   (short const   )171, (short const   )172, (short const   )164,
   (short const   )173, (short const   )174, (short const   )175,
   (short const   )164, (short const   )176, (short const   )150,
   (short const   )150, (short const   )150, (short const   )191,
   (short const   )201, (short const   )202, (short const   )203,
   (short const   )258, (short const   )213, (short const   )213,
   (short const   )204, (short const   )289, (short const   )213,
   (short const   )213, (short const   )213, (short const   )213,
   (short const   )292, (short const   )290, (short const   )217,
   (short const   )218, (short const   )219, (short const   )383,
   (short const   )303, (short const   )275, (short const   )220,
   (short const   )259, (short const   )192, (short const   )188,
   (short const   )193, (short const   )276, (short const   )193,
   (short const   )221, (short const   )304, (short const   )335,
   (short const   )336, (short const   )293, (short const   )193,
   (short const   )222, (short const   )384, (short const   )193,
   (short const   )194, (short const   )195, (short const   )480,
   (short const   )193, (short const   )196, (short const   )223,
   (short const   )214, (short const   )306, (short const   )481,
   (short const   )197, (short const   )214, (short const   )198,
   (short const   )214, (short const   )317, (short const   )317,
   (short const   )317, (short const   )317, (short const   )307,
   (short const   )764, (short const   )205, (short const   )308,
   (short const   )181, (short const   )182, (short const   )183,
   (short const   )185, (short const   )186, (short const   )187,
   (short const   )189, (short const   )321, (short const   )322,
   (short const   )323, (short const   )339, (short const   )340,
   (short const   )205, (short const   )321, (short const   )322,
   (short const   )323, (short const   )387, (short const   )321,
   (short const   )322, (short const   )323, (short const   )388,
   (short const   )324, (short const   )324, (short const   )324,
   (short const   )324, (short const   )342, (short const   )342,
   (short const   )324, (short const   )324, (short const   )324,
   (short const   )324, (short const   )324, (short const   )324,
   (short const   )324, (short const   )324, (short const   )321,
   (short const   )322, (short const   )323, (short const   )201,
   (short const   )202, (short const   )203, (short const   )341,
   (short const   )344, (short const   )344, (short const   )204,
   (short const   )380, (short const   )258, (short const   )339,
   (short const   )340, (short const   )324, (short const   )324,
   (short const   )324, (short const   )324, (short const   )325,
   (short const   )217, (short const   )218, (short const   )219,
   (short const   )265, (short const   )266, (short const   )381,
   (short const   )220, (short const   )326, (short const   )439,
   (short const   )343, (short const   )259, (short const   )265,
   (short const   )266, (short const   )221, (short const   )248,
   (short const   )248, (short const   )248, (short const   )248,
   (short const   )673, (short const   )222, (short const   )268,
   (short const   )269, (short const   )268, (short const   )269,
   (short const   )327, (short const   )392, (short const   )402,
   (short const   )223, (short const   )409, (short const   )393,
   (short const   )440, (short const   )410, (short const   )416,
   (short const   )417, (short const   )418, (short const   )403,
   (short const   )331, (short const   )332, (short const   )763,
   (short const   )205, (short const   )411, (short const   )412,
   (short const   )317, (short const   )317, (short const   )317,
   (short const   )317, (short const   )419, (short const   )419,
   (short const   )419, (short const   )419, (short const   )721,
   (short const   )413, (short const   )331, (short const   )332,
   (short const   )722, (short const   )205, (short const   )357,
   (short const   )357, (short const   )358, (short const   )359,
   (short const   )357, (short const   )357, (short const   )357,
   (short const   )357, (short const   )357, (short const   )357,
   (short const   )360, (short const   )357, (short const   )357,
   (short const   )357, (short const   )357, (short const   )357,
   (short const   )357, (short const   )357, (short const   )357,
   (short const   )357, (short const   )357, (short const   )357,
   (short const   )357, (short const   )360, (short const   )360,
   (short const   )357, (short const   )357, (short const   )357,
   (short const   )357, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )357, (short const   )357, (short const   )357,
   (short const   )362, (short const   )363, (short const   )364,
   (short const   )365, (short const   )335, (short const   )336,
   (short const   )366, (short const   )335, (short const   )336,
   (short const   )339, (short const   )340, (short const   )367,
   (short const   )212, (short const   )212, (short const   )762,
   (short const   )368, (short const   )493, (short const   )494,
   (short const   )369, (short const   )761, (short const   )370,
   (short const   )417, (short const   )494, (short const   )371,
   (short const   )374, (short const   )374, (short const   )760,
   (short const   )374, (short const   )374, (short const   )374,
   (short const   )374, (short const   )374, (short const   )374,
   (short const   )374, (short const   )375, (short const   )374,
   (short const   )374, (short const   )374, (short const   )374,
   (short const   )374, (short const   )374, (short const   )374,
   (short const   )374, (short const   )374, (short const   )374,
   (short const   )374, (short const   )374, (short const   )375,
   (short const   )375, (short const   )374, (short const   )374,
   (short const   )374, (short const   )374, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )374, (short const   )374,
   (short const   )374, (short const   )420, (short const   )322,
   (short const   )323, (short const   )427, (short const   )439,
   (short const   )439, (short const   )428, (short const   )428,
   (short const   )439, (short const   )339, (short const   )340,
   (short const   )431, (short const   )431, (short const   )439,
   (short const   )324, (short const   )324, (short const   )324,
   (short const   )324, (short const   )338, (short const   )439,
   (short const   )485, (short const   )339, (short const   )340,
   (short const   )486, (short const   )487, (short const   )439,
   (short const   )441, (short const   )443, (short const   )439,
   (short const   )442, (short const   )420, (short const   )322,
   (short const   )323, (short const   )450, (short const   )552,
   (short const   )759, (short const   )513, (short const   )493,
   (short const   )494, (short const   )516, (short const   )553,
   (short const   )444, (short const   )339, (short const   )340,
   (short const   )429, (short const   )338, (short const   )338,
   (short const   )439, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )430, (short const   )430, (short const   )339,
   (short const   )340, (short const   )445, (short const   )338,
   (short const   )338, (short const   )430, (short const   )430,
   (short const   )430, (short const   )430, (short const   )430,
   (short const   )430, (short const   )430, (short const   )430,
   (short const   )430, (short const   )430, (short const   )430,
   (short const   )430, (short const   )430, (short const   )430,
   (short const   )430, (short const   )430, (short const   )430,
   (short const   )430, (short const   )430, (short const   )430,
   (short const   )430, (short const   )430, (short const   )430,
   (short const   )430, (short const   )430, (short const   )338,
   (short const   )338, (short const   )338, (short const   )432,
   (short const   )432, (short const   )432, (short const   )432,
   (short const   )758, (short const   )439, (short const   )339,
   (short const   )340, (short const   )432, (short const   )757,
   (short const   )339, (short const   )340, (short const   )495,
   (short const   )417, (short const   )418, (short const   )432,
   (short const   )432, (short const   )432, (short const   )432,
   (short const   )432, (short const   )432, (short const   )360,
   (short const   )360, (short const   )439, (short const   )438,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )448, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )439, (short const   )439,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )439, (short const   )446,
   (short const   )501, (short const   )501, (short const   )447,
   (short const   )504, (short const   )504, (short const   )416,
   (short const   )417, (short const   )418, (short const   )616,
   (short const   )617, (short const   )339, (short const   )340,
   (short const   )638, (short const   )339, (short const   )340,
   (short const   )515, (short const   )439, (short const   )439,
   (short const   )449, (short const   )419, (short const   )419,
   (short const   )419, (short const   )419, (short const   )514,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )375, (short const   )375, (short const   )580,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )439, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )517,
   (short const   )439, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )495,
   (short const   )417, (short const   )418, (short const   )439,
   (short const   )439, (short const   )511, (short const   )439,
   (short const   )512, (short const   )439, (short const   )439,
   (short const   )339, (short const   )340, (short const   )209,
   (short const   )439, (short const   )419, (short const   )419,
   (short const   )419, (short const   )419, (short const   )439,
   (short const   )519, (short const   )520, (short const   )581,
   (short const   )518, (short const   )522, (short const   )566,
   (short const   )566, (short const   )375, (short const   )375,
   (short const   )375, (short const   )500, (short const   )500,
   (short const   )573, (short const   )521, (short const   )578,
   (short const   )339, (short const   )340, (short const   )500,
   (short const   )500, (short const   )500, (short const   )500,
   (short const   )500, (short const   )500, (short const   )500,
   (short const   )500, (short const   )500, (short const   )500,
   (short const   )500, (short const   )500, (short const   )500,
   (short const   )500, (short const   )500, (short const   )500,
   (short const   )500, (short const   )500, (short const   )500,
   (short const   )500, (short const   )500, (short const   )500,
   (short const   )500, (short const   )500, (short const   )500,
   (short const   )502, (short const   )502, (short const   )502,
   (short const   )502, (short const   )532, (short const   )439,
   (short const   )439, (short const   )439, (short const   )502,
   (short const   )439, (short const   )339, (short const   )340,
   (short const   )439, (short const   )339, (short const   )340,
   (short const   )502, (short const   )502, (short const   )502,
   (short const   )502, (short const   )502, (short const   )502,
   (short const   )505, (short const   )505, (short const   )505,
   (short const   )505, (short const   )439, (short const   )533,
   (short const   )582, (short const   )576, (short const   )505,
   (short const   )574, (short const   )579, (short const   )534,
   (short const   )575, (short const   )439, (short const   )439,
   (short const   )505, (short const   )505, (short const   )505,
   (short const   )505, (short const   )505, (short const   )505,
   (short const   )567, (short const   )567, (short const   )567,
   (short const   )567, (short const   )590, (short const   )339,
   (short const   )340, (short const   )338, (short const   )567,
   (short const   )577, (short const   )583, (short const   )439,
   (short const   )439, (short const   )625, (short const   )591,
   (short const   )567, (short const   )567, (short const   )567,
   (short const   )567, (short const   )567, (short const   )567,
   (short const   )439, (short const   )439, (short const   )624,
   (short const   )439, (short const   )439, (short const   )439,
   (short const   )439, (short const   )439, (short const   )439,
   (short const   )439, (short const   )616, (short const   )617,
   (short const   )439, (short const   )623, (short const   )616,
   (short const   )617, (short const   )685, (short const   )686,
   (short const   )685, (short const   )686, (short const   )756,
   (short const   )628, (short const   )626, (short const   )632,
   (short const   )708, (short const   )755, (short const   )634,
   (short const   )685, (short const   )686, (short const   )302,
   (short const   )302, (short const   )627, (short const   )629,
   (short const   )754, (short const   )753, (short const   )630,
   (short const   )631, (short const   )633, (short const   )752,
   (short const   )751, (short const   )750, (short const   )709,
   (short const   )669, (short const   )52, (short const   )52,
   (short const   )52, (short const   )52, (short const   )52,
   (short const   )52, (short const   )52, (short const   )52,
   (short const   )52, (short const   )52, (short const   )52,
   (short const   )52, (short const   )52, (short const   )52,
   (short const   )52, (short const   )52, (short const   )69,
   (short const   )69, (short const   )69, (short const   )69,
   (short const   )69, (short const   )69, (short const   )69,
   (short const   )69, (short const   )69, (short const   )69,
   (short const   )69, (short const   )69, (short const   )69,
   (short const   )69, (short const   )69, (short const   )69,
   (short const   )72, (short const   )72, (short const   )72,
   (short const   )72, (short const   )72, (short const   )72,
   (short const   )72, (short const   )72, (short const   )72,
   (short const   )72, (short const   )72, (short const   )72,
   (short const   )72, (short const   )72, (short const   )72,
   (short const   )72, (short const   )76, (short const   )76,
   (short const   )76, (short const   )76, (short const   )76,
   (short const   )76, (short const   )76, (short const   )76,
   (short const   )76, (short const   )76, (short const   )76,
   (short const   )76, (short const   )76, (short const   )76,
   (short const   )76, (short const   )76, (short const   )86,
   (short const   )86, (short const   )86, (short const   )86,
   (short const   )86, (short const   )86, (short const   )86,
   (short const   )86, (short const   )86, (short const   )86,
   (short const   )86, (short const   )86, (short const   )86,
   (short const   )86, (short const   )86, (short const   )86,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )40, (short const   )40,
   (short const   )40, (short const   )95, (short const   )95,
   (short const   )95, (short const   )95, (short const   )95,
   (short const   )95, (short const   )95, (short const   )95,
   (short const   )95, (short const   )95, (short const   )95,
   (short const   )95, (short const   )95, (short const   )95,
   (short const   )95, (short const   )95, (short const   )101,
   (short const   )101, (short const   )101, (short const   )101,
   (short const   )101, (short const   )101, (short const   )101,
   (short const   )101, (short const   )101, (short const   )101,
   (short const   )101, (short const   )101, (short const   )101,
   (short const   )101, (short const   )101, (short const   )101,
   (short const   )106, (short const   )106, (short const   )106,
   (short const   )106, (short const   )106, (short const   )106,
   (short const   )106, (short const   )106, (short const   )106,
   (short const   )106, (short const   )106, (short const   )106,
   (short const   )106, (short const   )106, (short const   )106,
   (short const   )106, (short const   )110, (short const   )110,
   (short const   )110, (short const   )110, (short const   )110,
   (short const   )110, (short const   )110, (short const   )110,
   (short const   )110, (short const   )110, (short const   )110,
   (short const   )110, (short const   )110, (short const   )110,
   (short const   )110, (short const   )110, (short const   )128,
   (short const   )128, (short const   )128, (short const   )128,
   (short const   )128, (short const   )128, (short const   )128,
   (short const   )128, (short const   )128, (short const   )128,
   (short const   )128, (short const   )128, (short const   )128,
   (short const   )128, (short const   )128, (short const   )128,
   (short const   )131, (short const   )131, (short const   )131,
   (short const   )131, (short const   )131, (short const   )131,
   (short const   )131, (short const   )131, (short const   )131,
   (short const   )131, (short const   )131, (short const   )131,
   (short const   )131, (short const   )131, (short const   )131,
   (short const   )131, (short const   )135, (short const   )135,
   (short const   )135, (short const   )135, (short const   )135,
   (short const   )135, (short const   )135, (short const   )135,
   (short const   )135, (short const   )135, (short const   )135,
   (short const   )135, (short const   )135, (short const   )135,
   (short const   )135, (short const   )135, (short const   )177,
   (short const   )177, (short const   )177, (short const   )177,
   (short const   )177, (short const   )177, (short const   )177,
   (short const   )177, (short const   )177, (short const   )177,
   (short const   )177, (short const   )177, (short const   )177,
   (short const   )177, (short const   )177, (short const   )177,
   (short const   )184, (short const   )184, (short const   )184,
   (short const   )184, (short const   )749, (short const   )748,
   (short const   )184, (short const   )184, (short const   )184,
   (short const   )190, (short const   )190, (short const   )190,
   (short const   )190, (short const   )190, (short const   )190,
   (short const   )190, (short const   )190, (short const   )190,
   (short const   )190, (short const   )190, (short const   )190,
   (short const   )190, (short const   )190, (short const   )190,
   (short const   )200, (short const   )200, (short const   )200,
   (short const   )200, (short const   )747, (short const   )746,
   (short const   )200, (short const   )200, (short const   )200,
   (short const   )209, (short const   )745, (short const   )209,
   (short const   )209, (short const   )209, (short const   )209,
   (short const   )209, (short const   )209, (short const   )209,
   (short const   )209, (short const   )209, (short const   )209,
   (short const   )209, (short const   )209, (short const   )209,
   (short const   )209, (short const   )212, (short const   )744,
   (short const   )212, (short const   )212, (short const   )212,
   (short const   )212, (short const   )212, (short const   )212,
   (short const   )212, (short const   )212, (short const   )212,
   (short const   )212, (short const   )212, (short const   )212,
   (short const   )212, (short const   )212, (short const   )216,
   (short const   )216, (short const   )216, (short const   )743,
   (short const   )742, (short const   )216, (short const   )216,
   (short const   )216, (short const   )227, (short const   )741,
   (short const   )227, (short const   )227, (short const   )227,
   (short const   )227, (short const   )227, (short const   )227,
   (short const   )227, (short const   )227, (short const   )227,
   (short const   )227, (short const   )227, (short const   )227,
   (short const   )227, (short const   )227, (short const   )229,
   (short const   )740, (short const   )229, (short const   )229,
   (short const   )229, (short const   )229, (short const   )229,
   (short const   )229, (short const   )229, (short const   )229,
   (short const   )229, (short const   )229, (short const   )229,
   (short const   )229, (short const   )229, (short const   )229,
   (short const   )230, (short const   )739, (short const   )230,
   (short const   )230, (short const   )230, (short const   )230,
   (short const   )230, (short const   )230, (short const   )230,
   (short const   )230, (short const   )230, (short const   )230,
   (short const   )230, (short const   )230, (short const   )230,
   (short const   )230, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )236,
   (short const   )738, (short const   )236, (short const   )236,
   (short const   )737, (short const   )236, (short const   )236,
   (short const   )236, (short const   )736, (short const   )735,
   (short const   )236, (short const   )236, (short const   )734,
   (short const   )733, (short const   )732, (short const   )236,
   (short const   )238, (short const   )238, (short const   )238,
   (short const   )238, (short const   )731, (short const   )730,
   (short const   )238, (short const   )238, (short const   )238,
   (short const   )242, (short const   )729, (short const   )242,
   (short const   )242, (short const   )242, (short const   )242,
   (short const   )242, (short const   )242, (short const   )242,
   (short const   )242, (short const   )242, (short const   )242,
   (short const   )242, (short const   )242, (short const   )242,
   (short const   )242, (short const   )246, (short const   )246,
   (short const   )246, (short const   )246, (short const   )728,
   (short const   )727, (short const   )246, (short const   )246,
   (short const   )246, (short const   )251, (short const   )726,
   (short const   )251, (short const   )251, (short const   )251,
   (short const   )251, (short const   )251, (short const   )251,
   (short const   )251, (short const   )251, (short const   )251,
   (short const   )251, (short const   )251, (short const   )251,
   (short const   )251, (short const   )251, (short const   )254,
   (short const   )725, (short const   )254, (short const   )254,
   (short const   )254, (short const   )254, (short const   )254,
   (short const   )254, (short const   )254, (short const   )254,
   (short const   )254, (short const   )724, (short const   )254,
   (short const   )254, (short const   )254, (short const   )254,
   (short const   )255, (short const   )723, (short const   )720,
   (short const   )719, (short const   )255, (short const   )255,
   (short const   )255, (short const   )255, (short const   )718,
   (short const   )717, (short const   )255, (short const   )255,
   (short const   )257, (short const   )716, (short const   )257,
   (short const   )257, (short const   )257, (short const   )257,
   (short const   )257, (short const   )257, (short const   )257,
   (short const   )257, (short const   )257, (short const   )257,
   (short const   )257, (short const   )257, (short const   )257,
   (short const   )257, (short const   )261, (short const   )261,
   (short const   )261, (short const   )261, (short const   )715,
   (short const   )714, (short const   )261, (short const   )261,
   (short const   )261, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )267,
   (short const   )267, (short const   )267, (short const   )267,
   (short const   )713, (short const   )267, (short const   )267,
   (short const   )267, (short const   )267, (short const   )267,
   (short const   )267, (short const   )267, (short const   )267,
   (short const   )267, (short const   )267, (short const   )267,
   (short const   )271, (short const   )712, (short const   )711,
   (short const   )271, (short const   )271, (short const   )271,
   (short const   )271, (short const   )271, (short const   )271,
   (short const   )271, (short const   )710, (short const   )271,
   (short const   )271, (short const   )271, (short const   )271,
   (short const   )271, (short const   )273, (short const   )707,
   (short const   )273, (short const   )273, (short const   )273,
   (short const   )273, (short const   )273, (short const   )273,
   (short const   )273, (short const   )273, (short const   )273,
   (short const   )273, (short const   )273, (short const   )273,
   (short const   )273, (short const   )273, (short const   )274,
   (short const   )706, (short const   )274, (short const   )274,
   (short const   )705, (short const   )274, (short const   )274,
   (short const   )274, (short const   )704, (short const   )703,
   (short const   )274, (short const   )274, (short const   )702,
   (short const   )701, (short const   )700, (short const   )274,
   (short const   )279, (short const   )279, (short const   )279,
   (short const   )279, (short const   )699, (short const   )698,
   (short const   )279, (short const   )279, (short const   )279,
   (short const   )284, (short const   )697, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )288, (short const   )288,
   (short const   )696, (short const   )288, (short const   )288,
   (short const   )695, (short const   )694, (short const   )693,
   (short const   )288, (short const   )288, (short const   )315,
   (short const   )692, (short const   )315, (short const   )315,
   (short const   )315, (short const   )315, (short const   )315,
   (short const   )315, (short const   )315, (short const   )315,
   (short const   )315, (short const   )315, (short const   )315,
   (short const   )315, (short const   )315, (short const   )315,
   (short const   )319, (short const   )691, (short const   )319,
   (short const   )319, (short const   )319, (short const   )319,
   (short const   )319, (short const   )319, (short const   )319,
   (short const   )319, (short const   )319, (short const   )319,
   (short const   )319, (short const   )319, (short const   )319,
   (short const   )319, (short const   )320, (short const   )690,
   (short const   )320, (short const   )320, (short const   )320,
   (short const   )320, (short const   )320, (short const   )320,
   (short const   )320, (short const   )320, (short const   )320,
   (short const   )320, (short const   )320, (short const   )320,
   (short const   )320, (short const   )320, (short const   )328,
   (short const   )328, (short const   )689, (short const   )688,
   (short const   )328, (short const   )328, (short const   )328,
   (short const   )329, (short const   )329, (short const   )687,
   (short const   )683, (short const   )329, (short const   )329,
   (short const   )329, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )338, (short const   )682, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )681,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )209, (short const   )680,
   (short const   )209, (short const   )209, (short const   )209,
   (short const   )209, (short const   )209, (short const   )209,
   (short const   )209, (short const   )209, (short const   )209,
   (short const   )209, (short const   )209, (short const   )209,
   (short const   )209, (short const   )209, (short const   )345,
   (short const   )345, (short const   )679, (short const   )678,
   (short const   )677, (short const   )676, (short const   )345,
   (short const   )346, (short const   )346, (short const   )346,
   (short const   )346, (short const   )675, (short const   )674,
   (short const   )346, (short const   )346, (short const   )346,
   (short const   )346, (short const   )351, (short const   )673,
   (short const   )351, (short const   )351, (short const   )351,
   (short const   )351, (short const   )351, (short const   )351,
   (short const   )351, (short const   )351, (short const   )351,
   (short const   )351, (short const   )351, (short const   )351,
   (short const   )351, (short const   )351, (short const   )227,
   (short const   )672, (short const   )227, (short const   )227,
   (short const   )227, (short const   )227, (short const   )227,
   (short const   )227, (short const   )227, (short const   )227,
   (short const   )227, (short const   )227, (short const   )227,
   (short const   )227, (short const   )227, (short const   )227,
   (short const   )229, (short const   )671, (short const   )229,
   (short const   )229, (short const   )229, (short const   )229,
   (short const   )229, (short const   )229, (short const   )229,
   (short const   )229, (short const   )229, (short const   )229,
   (short const   )229, (short const   )229, (short const   )229,
   (short const   )229, (short const   )230, (short const   )670,
   (short const   )230, (short const   )230, (short const   )230,
   (short const   )230, (short const   )230, (short const   )230,
   (short const   )230, (short const   )230, (short const   )230,
   (short const   )230, (short const   )230, (short const   )230,
   (short const   )230, (short const   )230, (short const   )353,
   (short const   )668, (short const   )353, (short const   )353,
   (short const   )353, (short const   )353, (short const   )353,
   (short const   )353, (short const   )353, (short const   )353,
   (short const   )353, (short const   )353, (short const   )353,
   (short const   )353, (short const   )353, (short const   )353,
   (short const   )354, (short const   )667, (short const   )354,
   (short const   )354, (short const   )354, (short const   )354,
   (short const   )354, (short const   )354, (short const   )354,
   (short const   )354, (short const   )354, (short const   )354,
   (short const   )354, (short const   )354, (short const   )354,
   (short const   )354, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )234,
   (short const   )234, (short const   )234, (short const   )236,
   (short const   )666, (short const   )236, (short const   )236,
   (short const   )665, (short const   )236, (short const   )236,
   (short const   )236, (short const   )664, (short const   )663,
   (short const   )236, (short const   )236, (short const   )662,
   (short const   )661, (short const   )660, (short const   )236,
   (short const   )238, (short const   )238, (short const   )238,
   (short const   )238, (short const   )659, (short const   )658,
   (short const   )238, (short const   )238, (short const   )238,
   (short const   )242, (short const   )657, (short const   )242,
   (short const   )242, (short const   )242, (short const   )242,
   (short const   )242, (short const   )242, (short const   )242,
   (short const   )242, (short const   )242, (short const   )242,
   (short const   )242, (short const   )242, (short const   )242,
   (short const   )242, (short const   )246, (short const   )246,
   (short const   )246, (short const   )246, (short const   )656,
   (short const   )655, (short const   )246, (short const   )246,
   (short const   )246, (short const   )361, (short const   )361,
   (short const   )654, (short const   )653, (short const   )652,
   (short const   )361, (short const   )361, (short const   )255,
   (short const   )651, (short const   )650, (short const   )649,
   (short const   )255, (short const   )255, (short const   )255,
   (short const   )255, (short const   )648, (short const   )647,
   (short const   )255, (short const   )255, (short const   )257,
   (short const   )646, (short const   )257, (short const   )257,
   (short const   )257, (short const   )257, (short const   )257,
   (short const   )257, (short const   )257, (short const   )257,
   (short const   )257, (short const   )257, (short const   )257,
   (short const   )257, (short const   )257, (short const   )257,
   (short const   )261, (short const   )261, (short const   )261,
   (short const   )261, (short const   )645, (short const   )644,
   (short const   )261, (short const   )261, (short const   )261,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )264, (short const   )264,
   (short const   )264, (short const   )267, (short const   )267,
   (short const   )267, (short const   )267, (short const   )643,
   (short const   )267, (short const   )267, (short const   )267,
   (short const   )267, (short const   )267, (short const   )267,
   (short const   )267, (short const   )267, (short const   )267,
   (short const   )267, (short const   )267, (short const   )271,
   (short const   )642, (short const   )641, (short const   )271,
   (short const   )271, (short const   )271, (short const   )271,
   (short const   )271, (short const   )271, (short const   )271,
   (short const   )640, (short const   )271, (short const   )271,
   (short const   )271, (short const   )271, (short const   )271,
   (short const   )274, (short const   )639, (short const   )274,
   (short const   )274, (short const   )638, (short const   )274,
   (short const   )274, (short const   )274, (short const   )637,
   (short const   )636, (short const   )274, (short const   )274,
   (short const   )635, (short const   )622, (short const   )621,
   (short const   )274, (short const   )279, (short const   )279,
   (short const   )279, (short const   )279, (short const   )620,
   (short const   )619, (short const   )279, (short const   )279,
   (short const   )279, (short const   )284, (short const   )618,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )288,
   (short const   )288, (short const   )560, (short const   )288,
   (short const   )288, (short const   )614, (short const   )613,
   (short const   )612, (short const   )288, (short const   )288,
   (short const   )315, (short const   )611, (short const   )315,
   (short const   )315, (short const   )315, (short const   )315,
   (short const   )315, (short const   )315, (short const   )315,
   (short const   )315, (short const   )315, (short const   )315,
   (short const   )315, (short const   )315, (short const   )315,
   (short const   )315, (short const   )319, (short const   )610,
   (short const   )319, (short const   )319, (short const   )319,
   (short const   )319, (short const   )319, (short const   )319,
   (short const   )319, (short const   )319, (short const   )319,
   (short const   )319, (short const   )319, (short const   )319,
   (short const   )319, (short const   )319, (short const   )320,
   (short const   )609, (short const   )320, (short const   )320,
   (short const   )320, (short const   )320, (short const   )320,
   (short const   )320, (short const   )320, (short const   )320,
   (short const   )320, (short const   )320, (short const   )320,
   (short const   )320, (short const   )320, (short const   )320,
   (short const   )415, (short const   )415, (short const   )415,
   (short const   )415, (short const   )415, (short const   )415,
   (short const   )415, (short const   )415, (short const   )415,
   (short const   )415, (short const   )415, (short const   )415,
   (short const   )415, (short const   )415, (short const   )415,
   (short const   )415, (short const   )424, (short const   )424,
   (short const   )424, (short const   )424, (short const   )608,
   (short const   )607, (short const   )424, (short const   )424,
   (short const   )424, (short const   )425, (short const   )425,
   (short const   )425, (short const   )425, (short const   )606,
   (short const   )605, (short const   )425, (short const   )425,
   (short const   )425, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )330,
   (short const   )330, (short const   )330, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )334, (short const   )334, (short const   )334,
   (short const   )338, (short const   )604, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )338, (short const   )603,
   (short const   )338, (short const   )338, (short const   )338,
   (short const   )338, (short const   )433, (short const   )433,
   (short const   )602, (short const   )601, (short const   )600,
   (short const   )599, (short const   )433, (short const   )346,
   (short const   )346, (short const   )346, (short const   )346,
   (short const   )598, (short const   )597, (short const   )346,
   (short const   )346, (short const   )346, (short const   )346,
   (short const   )351, (short const   )596, (short const   )351,
   (short const   )351, (short const   )351, (short const   )351,
   (short const   )351, (short const   )351, (short const   )351,
   (short const   )351, (short const   )351, (short const   )351,
   (short const   )351, (short const   )351, (short const   )351,
   (short const   )351, (short const   )615, (short const   )615,
   (short const   )615, (short const   )615, (short const   )615,
   (short const   )615, (short const   )615, (short const   )615,
   (short const   )615, (short const   )615, (short const   )615,
   (short const   )615, (short const   )615, (short const   )615,
   (short const   )615, (short const   )615, (short const   )684,
   (short const   )684, (short const   )684, (short const   )684,
   (short const   )684, (short const   )684, (short const   )684,
   (short const   )684, (short const   )684, (short const   )684,
   (short const   )684, (short const   )684, (short const   )684,
   (short const   )684, (short const   )684, (short const   )684,
   (short const   )595, (short const   )594, (short const   )593,
   (short const   )592, (short const   )589, (short const   )588,
   (short const   )587, (short const   )586, (short const   )585,
   (short const   )584, (short const   )571, (short const   )570,
   (short const   )569, (short const   )568, (short const   )565,
   (short const   )564, (short const   )563, (short const   )562,
   (short const   )561, (short const   )560, (short const   )559,
   (short const   )558, (short const   )557, (short const   )556,
   (short const   )555, (short const   )554, (short const   )551,
   (short const   )550, (short const   )549, (short const   )548,
   (short const   )547, (short const   )546, (short const   )545,
   (short const   )544, (short const   )543, (short const   )542,
   (short const   )541, (short const   )540, (short const   )539,
   (short const   )538, (short const   )537, (short const   )536,
   (short const   )535, (short const   )531, (short const   )530,
   (short const   )529, (short const   )528, (short const   )527,
   (short const   )526, (short const   )525, (short const   )524,
   (short const   )523, (short const   )510, (short const   )509,
   (short const   )508, (short const   )507, (short const   )506,
   (short const   )503, (short const   )499, (short const   )498,
   (short const   )497, (short const   )496, (short const   )492,
   (short const   )491, (short const   )490, (short const   )489,
   (short const   )488, (short const   )484, (short const   )483,
   (short const   )482, (short const   )479, (short const   )478,
   (short const   )477, (short const   )476, (short const   )475,
   (short const   )474, (short const   )473, (short const   )472,
   (short const   )471, (short const   )470, (short const   )469,
   (short const   )468, (short const   )467, (short const   )466,
   (short const   )465, (short const   )464, (short const   )463,
   (short const   )462, (short const   )461, (short const   )460,
   (short const   )459, (short const   )458, (short const   )457,
   (short const   )456, (short const   )455, (short const   )454,
   (short const   )453, (short const   )452, (short const   )451,
   (short const   )439, (short const   )437, (short const   )436,
   (short const   )435, (short const   )434, (short const   )347,
   (short const   )426, (short const   )423, (short const   )422,
   (short const   )421, (short const   )322, (short const   )414,
   (short const   )316, (short const   )408, (short const   )407,
   (short const   )406, (short const   )401, (short const   )400,
   (short const   )399, (short const   )398, (short const   )397,
   (short const   )396, (short const   )395, (short const   )394,
   (short const   )391, (short const   )390, (short const   )389,
   (short const   )386, (short const   )385, (short const   )382,
   (short const   )379, (short const   )378, (short const   )285,
   (short const   )282, (short const   )377, (short const   )376,
   (short const   )278, (short const   )373, (short const   )372,
   (short const   )243, (short const   )356, (short const   )355,
   (short const   )235, (short const   )231, (short const   )352,
   (short const   )350, (short const   )349, (short const   )348,
   (short const   )218, (short const   )347, (short const   )337,
   (short const   )206, (short const   )333, (short const   )202,
   (short const   )318, (short const   )186, (short const   )182,
   (short const   )316, (short const   )314, (short const   )313,
   (short const   )312, (short const   )311, (short const   )310,
   (short const   )309, (short const   )305, (short const   )299,
   (short const   )298, (short const   )295, (short const   )294,
   (short const   )291, (short const   )287, (short const   )286,
   (short const   )285, (short const   )283, (short const   )282,
   (short const   )281, (short const   )280, (short const   )260,
   (short const   )278, (short const   )277, (short const   )272,
   (short const   )270, (short const   )263, (short const   )262,
   (short const   )260, (short const   )256, (short const   )250,
   (short const   )253, (short const   )250, (short const   )249,
   (short const   )247, (short const   )245, (short const   )244,
   (short const   )243, (short const   )241, (short const   )240,
   (short const   )239, (short const   )237, (short const   )235,
   (short const   )228, (short const   )231, (short const   )228,
   (short const   )226, (short const   )218, (short const   )208,
   (short const   )202, (short const   )199, (short const   )186,
   (short const   )182, (short const   )768, (short const   )94,
   (short const   )94, (short const   )85, (short const   )77,
   (short const   )77, (short const   )39, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768};

static short const   yy_chk[2775]   = 
  {(short const   )0, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )2, (short const   )2, (short const   )2,
   (short const   )2, (short const   )3, (short const   )3, (short const   )3,
   (short const   )3, (short const   )765, (short const   )3, (short const   )5,
   (short const   )5, (short const   )3, (short const   )3, (short const   )3,
   (short const   )27, (short const   )27, (short const   )3, (short const   )6,
   (short const   )6, (short const   )6, (short const   )28, (short const   )28,
   (short const   )3, (short const   )6, (short const   )11, (short const   )11,
   (short const   )11, (short const   )3, (short const   )3, (short const   )12,
   (short const   )12, (short const   )12, (short const   )48,
   (short const   )17, (short const   )17, (short const   )66,
   (short const   )29, (short const   )29, (short const   )60,
   (short const   )60, (short const   )18, (short const   )18,
   (short const   )310, (short const   )17, (short const   )29,
   (short const   )310, (short const   )17, (short const   )17,
   (short const   )17, (short const   )17, (short const   )18,
   (short const   )61, (short const   )61, (short const   )18,
   (short const   )18, (short const   )18, (short const   )18,
   (short const   )3, (short const   )3, (short const   )3, (short const   )4,
   (short const   )4, (short const   )4, (short const   )4, (short const   )109,
   (short const   )4, (short const   )4, (short const   )21, (short const   )4,
   (short const   )4, (short const   )4, (short const   )511,
   (short const   )48, (short const   )4, (short const   )19,
   (short const   )19, (short const   )19, (short const   )22,
   (short const   )109, (short const   )4, (short const   )20,
   (short const   )20, (short const   )20, (short const   )66,
   (short const   )4, (short const   )4, (short const   )141, (short const   )4,
   (short const   )17, (short const   )61, (short const   )21,
   (short const   )21, (short const   )141, (short const   )21,
   (short const   )37, (short const   )18, (short const   )37,
   (short const   )75, (short const   )19, (short const   )75,
   (short const   )22, (short const   )22, (short const   )511,
   (short const   )22, (short const   )20, (short const   )30,
   (short const   )30, (short const   )37, (short const   )37,
   (short const   )37, (short const   )37, (short const   )128,
   (short const   )128, (short const   )30, (short const   )4,
   (short const   )4, (short const   )4, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )9, (short const   )9, (short const   )9, (short const   )9,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )13, (short const   )13,
   (short const   )13, (short const   )23, (short const   )23,
   (short const   )163, (short const   )24, (short const   )24,
   (short const   )38, (short const   )764, (short const   )38,
   (short const   )41, (short const   )41, (short const   )41,
   (short const   )23, (short const   )130, (short const   )130,
   (short const   )24, (short const   )45, (short const   )45,
   (short const   )45, (short const   )38, (short const   )38,
   (short const   )38, (short const   )38, (short const   )163,
   (short const   )23, (short const   )23, (short const   )23,
   (short const   )24, (short const   )24, (short const   )24,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )25, (short const   )25,
   (short const   )25, (short const   )31, (short const   )31,
   (short const   )31, (short const   )32, (short const   )32,
   (short const   )32, (short const   )57, (short const   )57,
   (short const   )57, (short const   )62, (short const   )62,
   (short const   )62, (short const   )62, (short const   )99,
   (short const   )99, (short const   )99, (short const   )99,
   (short const   )131, (short const   )131, (short const   )133,
   (short const   )133, (short const   )167, (short const   )198,
   (short const   )198, (short const   )31, (short const   )167,
   (short const   )763, (short const   )32, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )33, (short const   )33, (short const   )33,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )35, (short const   )35,
   (short const   )35, (short const   )49, (short const   )53,
   (short const   )53, (short const   )53, (short const   )121,
   (short const   )105, (short const   )105, (short const   )53,
   (short const   )158, (short const   )108, (short const   )108,
   (short const   )115, (short const   )115, (short const   )160,
   (short const   )158, (short const   )63, (short const   )63,
   (short const   )63, (short const   )291, (short const   )168,
   (short const   )275, (short const   )63, (short const   )121,
   (short const   )49, (short const   )188, (short const   )49,
   (short const   )275, (short const   )49, (short const   )63,
   (short const   )168, (short const   )205, (short const   )205,
   (short const   )160, (short const   )49, (short const   )63,
   (short const   )291, (short const   )49, (short const   )49,
   (short const   )49, (short const   )405, (short const   )49,
   (short const   )49, (short const   )63, (short const   )105,
   (short const   )170, (short const   )405, (short const   )49,
   (short const   )108, (short const   )49, (short const   )115,
   (short const   )180, (short const   )180, (short const   )180,
   (short const   )180, (short const   )170, (short const   )762,
   (short const   )53, (short const   )170, (short const   )181,
   (short const   )181, (short const   )181, (short const   )185,
   (short const   )185, (short const   )185, (short const   )188,
   (short const   )192, (short const   )192, (short const   )192,
   (short const   )209, (short const   )209, (short const   )63,
   (short const   )193, (short const   )193, (short const   )193,
   (short const   )294, (short const   )194, (short const   )194,
   (short const   )194, (short const   )294, (short const   )192,
   (short const   )192, (short const   )192, (short const   )192,
   (short const   )211, (short const   )211, (short const   )193,
   (short const   )193, (short const   )193, (short const   )193,
   (short const   )194, (short const   )194, (short const   )194,
   (short const   )194, (short const   )195, (short const   )195,
   (short const   )195, (short const   )201, (short const   )201,
   (short const   )201, (short const   )210, (short const   )213,
   (short const   )213, (short const   )201, (short const   )289,
   (short const   )257, (short const   )210, (short const   )210,
   (short const   )195, (short const   )195, (short const   )195,
   (short const   )195, (short const   )192, (short const   )217,
   (short const   )217, (short const   )217, (short const   )264,
   (short const   )264, (short const   )289, (short const   )217,
   (short const   )194, (short const   )362, (short const   )211,
   (short const   )257, (short const   )266, (short const   )266,
   (short const   )217, (short const   )248, (short const   )248,
   (short const   )248, (short const   )248, (short const   )761,
   (short const   )217, (short const   )267, (short const   )267,
   (short const   )269, (short const   )269, (short const   )195,
   (short const   )298, (short const   )309, (short const   )217,
   (short const   )314, (short const   )298, (short const   )362,
   (short const   )314, (short const   )321, (short const   )321,
   (short const   )321, (short const   )309, (short const   )330,
   (short const   )330, (short const   )760, (short const   )201,
   (short const   )314, (short const   )314, (short const   )317,
   (short const   )317, (short const   )317, (short const   )317,
   (short const   )321, (short const   )321, (short const   )321,
   (short const   )321, (short const   )708, (short const   )314,
   (short const   )332, (short const   )332, (short const   )708,
   (short const   )217, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )241,
   (short const   )241, (short const   )241, (short const   )250,
   (short const   )250, (short const   )250, (short const   )250,
   (short const   )334, (short const   )334, (short const   )250,
   (short const   )336, (short const   )336, (short const   )338,
   (short const   )338, (short const   )250, (short const   )344,
   (short const   )344, (short const   )757, (short const   )250,
   (short const   )415, (short const   )415, (short const   )250,
   (short const   )756, (short const   )250, (short const   )418,
   (short const   )418, (short const   )250, (short const   )278,
   (short const   )278, (short const   )755, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )278, (short const   )278, (short const   )278,
   (short const   )324, (short const   )324, (short const   )324,
   (short const   )339, (short const   )363, (short const   )364,
   (short const   )340, (short const   )340, (short const   )365,
   (short const   )339, (short const   )339, (short const   )342,
   (short const   )342, (short const   )366, (short const   )324,
   (short const   )324, (short const   )324, (short const   )324,
   (short const   )340, (short const   )371, (short const   )409,
   (short const   )342, (short const   )342, (short const   )409,
   (short const   )409, (short const   )441, (short const   )363,
   (short const   )365, (short const   )444, (short const   )364,
   (short const   )420, (short const   )420, (short const   )420,
   (short const   )371, (short const   )485, (short const   )754,
   (short const   )441, (short const   )494, (short const   )494,
   (short const   )444, (short const   )485, (short const   )366,
   (short const   )504, (short const   )504, (short const   )340,
   (short const   )341, (short const   )341, (short const   )367,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )367, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )341, (short const   )341,
   (short const   )341, (short const   )343, (short const   )343,
   (short const   )343, (short const   )343, (short const   )752,
   (short const   )369, (short const   )505, (short const   )505,
   (short const   )343, (short const   )750, (short const   )343,
   (short const   )343, (short const   )495, (short const   )495,
   (short const   )495, (short const   )343, (short const   )343,
   (short const   )343, (short const   )343, (short const   )343,
   (short const   )343, (short const   )360, (short const   )360,
   (short const   )368, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )369,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )370, (short const   )442, (short const   )360,
   (short const   )360, (short const   )360, (short const   )360,
   (short const   )443, (short const   )368, (short const   )428,
   (short const   )428, (short const   )368, (short const   )431,
   (short const   )431, (short const   )416, (short const   )416,
   (short const   )416, (short const   )561, (short const   )561,
   (short const   )428, (short const   )428, (short const   )749,
   (short const   )431, (short const   )431, (short const   )443,
   (short const   )519, (short const   )445, (short const   )370,
   (short const   )416, (short const   )416, (short const   )416,
   (short const   )416, (short const   )442, (short const   )360,
   (short const   )360, (short const   )360, (short const   )375,
   (short const   )375, (short const   )519, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )440, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )445, (short const   )447,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )375, (short const   )419, (short const   )419,
   (short const   )419, (short const   )446, (short const   )450,
   (short const   )440, (short const   )449, (short const   )440,
   (short const   )520, (short const   )448, (short const   )503,
   (short const   )503, (short const   )503, (short const   )512,
   (short const   )419, (short const   )419, (short const   )419,
   (short const   )419, (short const   )517, (short const   )447,
   (short const   )448, (short const   )520, (short const   )446,
   (short const   )450, (short const   )501, (short const   )501,
   (short const   )375, (short const   )375, (short const   )375,
   (short const   )427, (short const   )427, (short const   )512,
   (short const   )449, (short const   )517, (short const   )501,
   (short const   )501, (short const   )427, (short const   )427,
   (short const   )427, (short const   )427, (short const   )427,
   (short const   )427, (short const   )427, (short const   )427,
   (short const   )427, (short const   )427, (short const   )427,
   (short const   )427, (short const   )427, (short const   )427,
   (short const   )427, (short const   )427, (short const   )427,
   (short const   )427, (short const   )427, (short const   )427,
   (short const   )427, (short const   )427, (short const   )427,
   (short const   )427, (short const   )427, (short const   )429,
   (short const   )429, (short const   )429, (short const   )429,
   (short const   )462, (short const   )514, (short const   )513,
   (short const   )518, (short const   )429, (short const   )515,
   (short const   )566, (short const   )566, (short const   )521,
   (short const   )567, (short const   )567, (short const   )429,
   (short const   )429, (short const   )429, (short const   )429,
   (short const   )429, (short const   )429, (short const   )432,
   (short const   )432, (short const   )432, (short const   )432,
   (short const   )516, (short const   )462, (short const   )521,
   (short const   )515, (short const   )432, (short const   )513,
   (short const   )518, (short const   )462, (short const   )514,
   (short const   )574, (short const   )522, (short const   )432,
   (short const   )432, (short const   )432, (short const   )432,
   (short const   )432, (short const   )432, (short const   )502,
   (short const   )502, (short const   )502, (short const   )502,
   (short const   )532, (short const   )565, (short const   )565,
   (short const   )565, (short const   )502, (short const   )516,
   (short const   )522, (short const   )572, (short const   )573,
   (short const   )574, (short const   )532, (short const   )502,
   (short const   )502, (short const   )502, (short const   )502,
   (short const   )502, (short const   )502, (short const   )575,
   (short const   )576, (short const   )573, (short const   )577,
   (short const   )578, (short const   )579, (short const   )580,
   (short const   )583, (short const   )581, (short const   )582,
   (short const   )615, (short const   )615, (short const   )634,
   (short const   )572, (short const   )617, (short const   )617,
   (short const   )656, (short const   )656, (short const   )684,
   (short const   )684, (short const   )748, (short const   )577,
   (short const   )575, (short const   )581, (short const   )681,
   (short const   )747, (short const   )583, (short const   )686,
   (short const   )686, (short const   )810, (short const   )810,
   (short const   )576, (short const   )578, (short const   )745,
   (short const   )744, (short const   )579, (short const   )580,
   (short const   )582, (short const   )743, (short const   )742,
   (short const   )740, (short const   )681, (short const   )634,
   (short const   )769, (short const   )769, (short const   )769,
   (short const   )769, (short const   )769, (short const   )769,
   (short const   )769, (short const   )769, (short const   )769,
   (short const   )769, (short const   )769, (short const   )769,
   (short const   )769, (short const   )769, (short const   )769,
   (short const   )769, (short const   )770, (short const   )770,
   (short const   )770, (short const   )770, (short const   )770,
   (short const   )770, (short const   )770, (short const   )770,
   (short const   )770, (short const   )770, (short const   )770,
   (short const   )770, (short const   )770, (short const   )770,
   (short const   )770, (short const   )770, (short const   )771,
   (short const   )771, (short const   )771, (short const   )771,
   (short const   )771, (short const   )771, (short const   )771,
   (short const   )771, (short const   )771, (short const   )771,
   (short const   )771, (short const   )771, (short const   )771,
   (short const   )771, (short const   )771, (short const   )771,
   (short const   )772, (short const   )772, (short const   )772,
   (short const   )772, (short const   )772, (short const   )772,
   (short const   )772, (short const   )772, (short const   )772,
   (short const   )772, (short const   )772, (short const   )772,
   (short const   )772, (short const   )772, (short const   )772,
   (short const   )772, (short const   )773, (short const   )773,
   (short const   )773, (short const   )773, (short const   )773,
   (short const   )773, (short const   )773, (short const   )773,
   (short const   )773, (short const   )773, (short const   )773,
   (short const   )773, (short const   )773, (short const   )773,
   (short const   )773, (short const   )773, (short const   )774,
   (short const   )774, (short const   )774, (short const   )774,
   (short const   )774, (short const   )774, (short const   )774,
   (short const   )774, (short const   )774, (short const   )774,
   (short const   )774, (short const   )774, (short const   )774,
   (short const   )774, (short const   )774, (short const   )774,
   (short const   )775, (short const   )775, (short const   )775,
   (short const   )775, (short const   )775, (short const   )775,
   (short const   )775, (short const   )775, (short const   )775,
   (short const   )775, (short const   )775, (short const   )775,
   (short const   )775, (short const   )775, (short const   )775,
   (short const   )775, (short const   )776, (short const   )776,
   (short const   )776, (short const   )776, (short const   )776,
   (short const   )776, (short const   )776, (short const   )776,
   (short const   )776, (short const   )776, (short const   )776,
   (short const   )776, (short const   )776, (short const   )776,
   (short const   )776, (short const   )776, (short const   )777,
   (short const   )777, (short const   )777, (short const   )777,
   (short const   )777, (short const   )777, (short const   )777,
   (short const   )777, (short const   )777, (short const   )777,
   (short const   )777, (short const   )777, (short const   )777,
   (short const   )777, (short const   )777, (short const   )777,
   (short const   )778, (short const   )778, (short const   )778,
   (short const   )778, (short const   )778, (short const   )778,
   (short const   )778, (short const   )778, (short const   )778,
   (short const   )778, (short const   )778, (short const   )778,
   (short const   )778, (short const   )778, (short const   )778,
   (short const   )778, (short const   )779, (short const   )779,
   (short const   )779, (short const   )779, (short const   )779,
   (short const   )779, (short const   )779, (short const   )779,
   (short const   )779, (short const   )779, (short const   )779,
   (short const   )779, (short const   )779, (short const   )779,
   (short const   )779, (short const   )779, (short const   )780,
   (short const   )780, (short const   )780, (short const   )780,
   (short const   )780, (short const   )780, (short const   )780,
   (short const   )780, (short const   )780, (short const   )780,
   (short const   )780, (short const   )780, (short const   )780,
   (short const   )780, (short const   )780, (short const   )780,
   (short const   )781, (short const   )781, (short const   )781,
   (short const   )781, (short const   )781, (short const   )781,
   (short const   )781, (short const   )781, (short const   )781,
   (short const   )781, (short const   )781, (short const   )781,
   (short const   )781, (short const   )781, (short const   )781,
   (short const   )781, (short const   )782, (short const   )782,
   (short const   )782, (short const   )782, (short const   )782,
   (short const   )782, (short const   )782, (short const   )782,
   (short const   )782, (short const   )782, (short const   )782,
   (short const   )782, (short const   )782, (short const   )782,
   (short const   )782, (short const   )782, (short const   )783,
   (short const   )783, (short const   )783, (short const   )783,
   (short const   )739, (short const   )738, (short const   )783,
   (short const   )783, (short const   )783, (short const   )784,
   (short const   )784, (short const   )784, (short const   )784,
   (short const   )784, (short const   )784, (short const   )784,
   (short const   )784, (short const   )784, (short const   )784,
   (short const   )784, (short const   )784, (short const   )784,
   (short const   )784, (short const   )784, (short const   )785,
   (short const   )785, (short const   )785, (short const   )785,
   (short const   )737, (short const   )736, (short const   )785,
   (short const   )785, (short const   )785, (short const   )786,
   (short const   )735, (short const   )786, (short const   )786,
   (short const   )786, (short const   )786, (short const   )786,
   (short const   )786, (short const   )786, (short const   )786,
   (short const   )786, (short const   )786, (short const   )786,
   (short const   )786, (short const   )786, (short const   )786,
   (short const   )787, (short const   )734, (short const   )787,
   (short const   )787, (short const   )787, (short const   )787,
   (short const   )787, (short const   )787, (short const   )787,
   (short const   )787, (short const   )787, (short const   )787,
   (short const   )787, (short const   )787, (short const   )787,
   (short const   )787, (short const   )788, (short const   )788,
   (short const   )788, (short const   )733, (short const   )732,
   (short const   )788, (short const   )788, (short const   )788,
   (short const   )789, (short const   )731, (short const   )789,
   (short const   )789, (short const   )789, (short const   )789,
   (short const   )789, (short const   )789, (short const   )789,
   (short const   )789, (short const   )789, (short const   )789,
   (short const   )789, (short const   )789, (short const   )789,
   (short const   )789, (short const   )790, (short const   )729,
   (short const   )790, (short const   )790, (short const   )790,
   (short const   )790, (short const   )790, (short const   )790,
   (short const   )790, (short const   )790, (short const   )790,
   (short const   )790, (short const   )790, (short const   )790,
   (short const   )790, (short const   )790, (short const   )791,
   (short const   )727, (short const   )791, (short const   )791,
   (short const   )791, (short const   )791, (short const   )791,
   (short const   )791, (short const   )791, (short const   )791,
   (short const   )791, (short const   )791, (short const   )791,
   (short const   )791, (short const   )791, (short const   )791,
   (short const   )792, (short const   )792, (short const   )792,
   (short const   )792, (short const   )792, (short const   )792,
   (short const   )792, (short const   )792, (short const   )792,
   (short const   )792, (short const   )792, (short const   )792,
   (short const   )792, (short const   )792, (short const   )792,
   (short const   )792, (short const   )793, (short const   )726,
   (short const   )793, (short const   )793, (short const   )725,
   (short const   )793, (short const   )793, (short const   )793,
   (short const   )724, (short const   )723, (short const   )793,
   (short const   )793, (short const   )722, (short const   )721,
   (short const   )720, (short const   )793, (short const   )794,
   (short const   )794, (short const   )794, (short const   )794,
   (short const   )719, (short const   )718, (short const   )794,
   (short const   )794, (short const   )794, (short const   )795,
   (short const   )717, (short const   )795, (short const   )795,
   (short const   )795, (short const   )795, (short const   )795,
   (short const   )795, (short const   )795, (short const   )795,
   (short const   )795, (short const   )795, (short const   )795,
   (short const   )795, (short const   )795, (short const   )795,
   (short const   )796, (short const   )796, (short const   )796,
   (short const   )796, (short const   )715, (short const   )714,
   (short const   )796, (short const   )796, (short const   )796,
   (short const   )797, (short const   )713, (short const   )797,
   (short const   )797, (short const   )797, (short const   )797,
   (short const   )797, (short const   )797, (short const   )797,
   (short const   )797, (short const   )797, (short const   )797,
   (short const   )797, (short const   )797, (short const   )797,
   (short const   )797, (short const   )798, (short const   )712,
   (short const   )798, (short const   )798, (short const   )798,
   (short const   )798, (short const   )798, (short const   )798,
   (short const   )798, (short const   )798, (short const   )798,
   (short const   )710, (short const   )798, (short const   )798,
   (short const   )798, (short const   )798, (short const   )799,
   (short const   )709, (short const   )707, (short const   )706,
   (short const   )799, (short const   )799, (short const   )799,
   (short const   )799, (short const   )705, (short const   )704,
   (short const   )799, (short const   )799, (short const   )800,
   (short const   )703, (short const   )800, (short const   )800,
   (short const   )800, (short const   )800, (short const   )800,
   (short const   )800, (short const   )800, (short const   )800,
   (short const   )800, (short const   )800, (short const   )800,
   (short const   )800, (short const   )800, (short const   )800,
   (short const   )801, (short const   )801, (short const   )801,
   (short const   )801, (short const   )702, (short const   )701,
   (short const   )801, (short const   )801, (short const   )801,
   (short const   )802, (short const   )802, (short const   )802,
   (short const   )802, (short const   )802, (short const   )802,
   (short const   )802, (short const   )802, (short const   )802,
   (short const   )802, (short const   )802, (short const   )802,
   (short const   )802, (short const   )802, (short const   )802,
   (short const   )802, (short const   )803, (short const   )803,
   (short const   )803, (short const   )803, (short const   )700,
   (short const   )803, (short const   )803, (short const   )803,
   (short const   )803, (short const   )803, (short const   )803,
   (short const   )803, (short const   )803, (short const   )803,
   (short const   )803, (short const   )803, (short const   )804,
   (short const   )699, (short const   )698, (short const   )804,
   (short const   )804, (short const   )804, (short const   )804,
   (short const   )804, (short const   )804, (short const   )804,
   (short const   )682, (short const   )804, (short const   )804,
   (short const   )804, (short const   )804, (short const   )804,
   (short const   )805, (short const   )680, (short const   )805,
   (short const   )805, (short const   )805, (short const   )805,
   (short const   )805, (short const   )805, (short const   )805,
   (short const   )805, (short const   )805, (short const   )805,
   (short const   )805, (short const   )805, (short const   )805,
   (short const   )805, (short const   )806, (short const   )679,
   (short const   )806, (short const   )806, (short const   )678,
   (short const   )806, (short const   )806, (short const   )806,
   (short const   )677, (short const   )675, (short const   )806,
   (short const   )806, (short const   )674, (short const   )672,
   (short const   )671, (short const   )806, (short const   )807,
   (short const   )807, (short const   )807, (short const   )807,
   (short const   )670, (short const   )669, (short const   )807,
   (short const   )807, (short const   )807, (short const   )808,
   (short const   )668, (short const   )808, (short const   )808,
   (short const   )808, (short const   )808, (short const   )808,
   (short const   )808, (short const   )808, (short const   )808,
   (short const   )808, (short const   )808, (short const   )808,
   (short const   )808, (short const   )808, (short const   )808,
   (short const   )809, (short const   )809, (short const   )667,
   (short const   )809, (short const   )809, (short const   )666,
   (short const   )665, (short const   )664, (short const   )809,
   (short const   )809, (short const   )811, (short const   )663,
   (short const   )811, (short const   )811, (short const   )811,
   (short const   )811, (short const   )811, (short const   )811,
   (short const   )811, (short const   )811, (short const   )811,
   (short const   )811, (short const   )811, (short const   )811,
   (short const   )811, (short const   )811, (short const   )812,
   (short const   )662, (short const   )812, (short const   )812,
   (short const   )812, (short const   )812, (short const   )812,
   (short const   )812, (short const   )812, (short const   )812,
   (short const   )812, (short const   )812, (short const   )812,
   (short const   )812, (short const   )812, (short const   )812,
   (short const   )813, (short const   )661, (short const   )813,
   (short const   )813, (short const   )813, (short const   )813,
   (short const   )813, (short const   )813, (short const   )813,
   (short const   )813, (short const   )813, (short const   )813,
   (short const   )813, (short const   )813, (short const   )813,
   (short const   )813, (short const   )814, (short const   )814,
   (short const   )660, (short const   )659, (short const   )814,
   (short const   )814, (short const   )814, (short const   )815,
   (short const   )815, (short const   )658, (short const   )655,
   (short const   )815, (short const   )815, (short const   )815,
   (short const   )816, (short const   )816, (short const   )816,
   (short const   )816, (short const   )816, (short const   )816,
   (short const   )816, (short const   )816, (short const   )816,
   (short const   )816, (short const   )816, (short const   )816,
   (short const   )816, (short const   )816, (short const   )816,
   (short const   )816, (short const   )817, (short const   )817,
   (short const   )817, (short const   )817, (short const   )817,
   (short const   )817, (short const   )817, (short const   )817,
   (short const   )817, (short const   )817, (short const   )817,
   (short const   )817, (short const   )817, (short const   )817,
   (short const   )817, (short const   )817, (short const   )818,
   (short const   )653, (short const   )818, (short const   )818,
   (short const   )818, (short const   )818, (short const   )818,
   (short const   )818, (short const   )818, (short const   )818,
   (short const   )818, (short const   )652, (short const   )818,
   (short const   )818, (short const   )818, (short const   )818,
   (short const   )819, (short const   )651, (short const   )819,
   (short const   )819, (short const   )819, (short const   )819,
   (short const   )819, (short const   )819, (short const   )819,
   (short const   )819, (short const   )819, (short const   )819,
   (short const   )819, (short const   )819, (short const   )819,
   (short const   )819, (short const   )820, (short const   )820,
   (short const   )650, (short const   )646, (short const   )644,
   (short const   )643, (short const   )820, (short const   )821,
   (short const   )821, (short const   )821, (short const   )821,
   (short const   )642, (short const   )641, (short const   )821,
   (short const   )821, (short const   )821, (short const   )821,
   (short const   )822, (short const   )639, (short const   )822,
   (short const   )822, (short const   )822, (short const   )822,
   (short const   )822, (short const   )822, (short const   )822,
   (short const   )822, (short const   )822, (short const   )822,
   (short const   )822, (short const   )822, (short const   )822,
   (short const   )822, (short const   )823, (short const   )637,
   (short const   )823, (short const   )823, (short const   )823,
   (short const   )823, (short const   )823, (short const   )823,
   (short const   )823, (short const   )823, (short const   )823,
   (short const   )823, (short const   )823, (short const   )823,
   (short const   )823, (short const   )823, (short const   )824,
   (short const   )636, (short const   )824, (short const   )824,
   (short const   )824, (short const   )824, (short const   )824,
   (short const   )824, (short const   )824, (short const   )824,
   (short const   )824, (short const   )824, (short const   )824,
   (short const   )824, (short const   )824, (short const   )824,
   (short const   )825, (short const   )635, (short const   )825,
   (short const   )825, (short const   )825, (short const   )825,
   (short const   )825, (short const   )825, (short const   )825,
   (short const   )825, (short const   )825, (short const   )825,
   (short const   )825, (short const   )825, (short const   )825,
   (short const   )825, (short const   )826, (short const   )633,
   (short const   )826, (short const   )826, (short const   )826,
   (short const   )826, (short const   )826, (short const   )826,
   (short const   )826, (short const   )826, (short const   )826,
   (short const   )826, (short const   )826, (short const   )826,
   (short const   )826, (short const   )826, (short const   )827,
   (short const   )632, (short const   )827, (short const   )827,
   (short const   )827, (short const   )827, (short const   )827,
   (short const   )827, (short const   )827, (short const   )827,
   (short const   )827, (short const   )827, (short const   )827,
   (short const   )827, (short const   )827, (short const   )827,
   (short const   )828, (short const   )828, (short const   )828,
   (short const   )828, (short const   )828, (short const   )828,
   (short const   )828, (short const   )828, (short const   )828,
   (short const   )828, (short const   )828, (short const   )828,
   (short const   )828, (short const   )828, (short const   )828,
   (short const   )828, (short const   )829, (short const   )631,
   (short const   )829, (short const   )829, (short const   )630,
   (short const   )829, (short const   )829, (short const   )829,
   (short const   )629, (short const   )628, (short const   )829,
   (short const   )829, (short const   )627, (short const   )626,
   (short const   )625, (short const   )829, (short const   )830,
   (short const   )830, (short const   )830, (short const   )830,
   (short const   )624, (short const   )623, (short const   )830,
   (short const   )830, (short const   )830, (short const   )831,
   (short const   )621, (short const   )831, (short const   )831,
   (short const   )831, (short const   )831, (short const   )831,
   (short const   )831, (short const   )831, (short const   )831,
   (short const   )831, (short const   )831, (short const   )831,
   (short const   )831, (short const   )831, (short const   )831,
   (short const   )832, (short const   )832, (short const   )832,
   (short const   )832, (short const   )619, (short const   )612,
   (short const   )832, (short const   )832, (short const   )832,
   (short const   )833, (short const   )833, (short const   )611,
   (short const   )610, (short const   )609, (short const   )833,
   (short const   )833, (short const   )834, (short const   )608,
   (short const   )607, (short const   )606, (short const   )834,
   (short const   )834, (short const   )834, (short const   )834,
   (short const   )604, (short const   )601, (short const   )834,
   (short const   )834, (short const   )835, (short const   )600,
   (short const   )835, (short const   )835, (short const   )835,
   (short const   )835, (short const   )835, (short const   )835,
   (short const   )835, (short const   )835, (short const   )835,
   (short const   )835, (short const   )835, (short const   )835,
   (short const   )835, (short const   )835, (short const   )836,
   (short const   )836, (short const   )836, (short const   )836,
   (short const   )599, (short const   )598, (short const   )836,
   (short const   )836, (short const   )836, (short const   )837,
   (short const   )837, (short const   )837, (short const   )837,
   (short const   )837, (short const   )837, (short const   )837,
   (short const   )837, (short const   )837, (short const   )837,
   (short const   )837, (short const   )837, (short const   )837,
   (short const   )837, (short const   )837, (short const   )837,
   (short const   )838, (short const   )838, (short const   )838,
   (short const   )838, (short const   )597, (short const   )838,
   (short const   )838, (short const   )838, (short const   )838,
   (short const   )838, (short const   )838, (short const   )838,
   (short const   )838, (short const   )838, (short const   )838,
   (short const   )838, (short const   )839, (short const   )596,
   (short const   )595, (short const   )839, (short const   )839,
   (short const   )839, (short const   )839, (short const   )839,
   (short const   )839, (short const   )839, (short const   )594,
   (short const   )839, (short const   )839, (short const   )839,
   (short const   )839, (short const   )839, (short const   )840,
   (short const   )593, (short const   )840, (short const   )840,
   (short const   )592, (short const   )840, (short const   )840,
   (short const   )840, (short const   )591, (short const   )590,
   (short const   )840, (short const   )840, (short const   )588,
   (short const   )569, (short const   )568, (short const   )840,
   (short const   )841, (short const   )841, (short const   )841,
   (short const   )841, (short const   )564, (short const   )563,
   (short const   )841, (short const   )841, (short const   )841,
   (short const   )842, (short const   )562, (short const   )842,
   (short const   )842, (short const   )842, (short const   )842,
   (short const   )842, (short const   )842, (short const   )842,
   (short const   )842, (short const   )842, (short const   )842,
   (short const   )842, (short const   )842, (short const   )842,
   (short const   )842, (short const   )843, (short const   )843,
   (short const   )560, (short const   )843, (short const   )843,
   (short const   )559, (short const   )558, (short const   )557,
   (short const   )843, (short const   )843, (short const   )844,
   (short const   )556, (short const   )844, (short const   )844,
   (short const   )844, (short const   )844, (short const   )844,
   (short const   )844, (short const   )844, (short const   )844,
   (short const   )844, (short const   )844, (short const   )844,
   (short const   )844, (short const   )844, (short const   )844,
   (short const   )845, (short const   )555, (short const   )845,
   (short const   )845, (short const   )845, (short const   )845,
   (short const   )845, (short const   )845, (short const   )845,
   (short const   )845, (short const   )845, (short const   )845,
   (short const   )845, (short const   )845, (short const   )845,
   (short const   )845, (short const   )846, (short const   )554,
   (short const   )846, (short const   )846, (short const   )846,
   (short const   )846, (short const   )846, (short const   )846,
   (short const   )846, (short const   )846, (short const   )846,
   (short const   )846, (short const   )846, (short const   )846,
   (short const   )846, (short const   )846, (short const   )847,
   (short const   )847, (short const   )847, (short const   )847,
   (short const   )847, (short const   )847, (short const   )847,
   (short const   )847, (short const   )847, (short const   )847,
   (short const   )847, (short const   )847, (short const   )847,
   (short const   )847, (short const   )847, (short const   )847,
   (short const   )848, (short const   )848, (short const   )848,
   (short const   )848, (short const   )553, (short const   )552,
   (short const   )848, (short const   )848, (short const   )848,
   (short const   )849, (short const   )849, (short const   )849,
   (short const   )849, (short const   )551, (short const   )549,
   (short const   )849, (short const   )849, (short const   )849,
   (short const   )850, (short const   )850, (short const   )850,
   (short const   )850, (short const   )850, (short const   )850,
   (short const   )850, (short const   )850, (short const   )850,
   (short const   )850, (short const   )850, (short const   )850,
   (short const   )850, (short const   )850, (short const   )850,
   (short const   )850, (short const   )851, (short const   )851,
   (short const   )851, (short const   )851, (short const   )851,
   (short const   )851, (short const   )851, (short const   )851,
   (short const   )851, (short const   )851, (short const   )851,
   (short const   )851, (short const   )851, (short const   )851,
   (short const   )851, (short const   )851, (short const   )852,
   (short const   )548, (short const   )852, (short const   )852,
   (short const   )852, (short const   )852, (short const   )852,
   (short const   )852, (short const   )852, (short const   )852,
   (short const   )852, (short const   )546, (short const   )852,
   (short const   )852, (short const   )852, (short const   )852,
   (short const   )853, (short const   )853, (short const   )545,
   (short const   )544, (short const   )543, (short const   )542,
   (short const   )853, (short const   )854, (short const   )854,
   (short const   )854, (short const   )854, (short const   )541,
   (short const   )540, (short const   )854, (short const   )854,
   (short const   )854, (short const   )854, (short const   )855,
   (short const   )539, (short const   )855, (short const   )855,
   (short const   )855, (short const   )855, (short const   )855,
   (short const   )855, (short const   )855, (short const   )855,
   (short const   )855, (short const   )855, (short const   )855,
   (short const   )855, (short const   )855, (short const   )855,
   (short const   )856, (short const   )856, (short const   )856,
   (short const   )856, (short const   )856, (short const   )856,
   (short const   )856, (short const   )856, (short const   )856,
   (short const   )856, (short const   )856, (short const   )856,
   (short const   )856, (short const   )856, (short const   )856,
   (short const   )856, (short const   )857, (short const   )857,
   (short const   )857, (short const   )857, (short const   )857,
   (short const   )857, (short const   )857, (short const   )857,
   (short const   )857, (short const   )857, (short const   )857,
   (short const   )857, (short const   )857, (short const   )857,
   (short const   )857, (short const   )857, (short const   )538,
   (short const   )536, (short const   )534, (short const   )533,
   (short const   )530, (short const   )528, (short const   )526,
   (short const   )525, (short const   )524, (short const   )523,
   (short const   )509, (short const   )508, (short const   )507,
   (short const   )506, (short const   )500, (short const   )499,
   (short const   )498, (short const   )497, (short const   )496,
   (short const   )492, (short const   )491, (short const   )490,
   (short const   )489, (short const   )488, (short const   )487,
   (short const   )486, (short const   )483, (short const   )482,
   (short const   )481, (short const   )480, (short const   )479,
   (short const   )478, (short const   )476, (short const   )475,
   (short const   )474, (short const   )473, (short const   )472,
   (short const   )471, (short const   )469, (short const   )468,
   (short const   )467, (short const   )464, (short const   )463,
   (short const   )461, (short const   )460, (short const   )459,
   (short const   )458, (short const   )457, (short const   )454,
   (short const   )453, (short const   )452, (short const   )451,
   (short const   )439, (short const   )437, (short const   )436,
   (short const   )435, (short const   )434, (short const   )430,
   (short const   )426, (short const   )423, (short const   )422,
   (short const   )421, (short const   )414, (short const   )413,
   (short const   )412, (short const   )411, (short const   )410,
   (short const   )408, (short const   )407, (short const   )406,
   (short const   )404, (short const   )403, (short const   )402,
   (short const   )401, (short const   )400, (short const   )399,
   (short const   )398, (short const   )397, (short const   )396,
   (short const   )395, (short const   )394, (short const   )393,
   (short const   )392, (short const   )391, (short const   )390,
   (short const   )388, (short const   )387, (short const   )386,
   (short const   )384, (short const   )383, (short const   )382,
   (short const   )381, (short const   )380, (short const   )379,
   (short const   )378, (short const   )377, (short const   )376,
   (short const   )373, (short const   )372, (short const   )361,
   (short const   )356, (short const   )355, (short const   )352,
   (short const   )350, (short const   )346, (short const   )337,
   (short const   )327, (short const   )326, (short const   )325,
   (short const   )323, (short const   )318, (short const   )315,
   (short const   )313, (short const   )312, (short const   )311,
   (short const   )308, (short const   )307, (short const   )306,
   (short const   )305, (short const   )303, (short const   )301,
   (short const   )300, (short const   )299, (short const   )297,
   (short const   )296, (short const   )295, (short const   )293,
   (short const   )292, (short const   )290, (short const   )287,
   (short const   )286, (short const   )284, (short const   )282,
   (short const   )281, (short const   )280, (short const   )276,
   (short const   )263, (short const   )262, (short const   )243,
   (short const   )240, (short const   )239, (short const   )234,
   (short const   )231, (short const   )226, (short const   )222,
   (short const   )221, (short const   )220, (short const   )219,
   (short const   )216, (short const   )208, (short const   )207,
   (short const   )204, (short const   )203, (short const   )189,
   (short const   )187, (short const   )183, (short const   )179,
   (short const   )176, (short const   )175, (short const   )174,
   (short const   )173, (short const   )172, (short const   )171,
   (short const   )169, (short const   )166, (short const   )165,
   (short const   )162, (short const   )161, (short const   )159,
   (short const   )156, (short const   )155, (short const   )154,
   (short const   )153, (short const   )151, (short const   )149,
   (short const   )148, (short const   )146, (short const   )144,
   (short const   )143, (short const   )137, (short const   )134,
   (short const   )125, (short const   )124, (short const   )122,
   (short const   )119, (short const   )114, (short const   )112,
   (short const   )107, (short const   )103, (short const   )97,
   (short const   )92, (short const   )89, (short const   )87,
   (short const   )85, (short const   )84, (short const   )83,
   (short const   )80, (short const   )76, (short const   )74,
   (short const   )73, (short const   )71, (short const   )67,
   (short const   )65, (short const   )59, (short const   )55,
   (short const   )50, (short const   )47, (short const   )43,
   (short const   )39, (short const   )16, (short const   )15,
   (short const   )10, (short const   )8, (short const   )7,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768, (short const   )768,
   (short const   )768, (short const   )768};

static yy_state_type yy_last_accepting_state  ;

static char *yy_last_accepting_cpos  ;

extern  __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size )  __attribute__((__warn_unused_result__,
__malloc__)) ;

int yywrap(void) ;

void cclinstal(unsigned char *ccltxt , int cclnum ) ;

int ccllookup(unsigned char *ccltxt ) ;

void ndinstal(char *name , unsigned char *definition ) ;

unsigned char *ndlookup(char *nd ) ;

static void yyunput(int c , char *yy_bp ) ;

static int input(void) ;

static int yy_start_stack_ptr   = 0;

static int yy_start_stack_depth   = 0;

static int *yy_start_stack   = (int *)0;

static void yy_push_state(int new_state ) ;

static void yy_pop_state(void) ;

static int bracelevel  ;

static int didadef  ;

static int indented_code  ;

static int doing_rule_action   = 0;

static int option_sense  ;

int flexscan(void) 
{ register yy_state_type yy_current_state ;
  register char *yy_cp ;
  register char *yy_bp ;
  register int yy_act ;
  int doing_codeblock ;
  int i___0 ;
  unsigned char nmdef[2048] ;
  register YY_CHAR yy_c ;
  size_t tmp ;
  size_t tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;
  int cclval ;
  int tmp___3 ;
  register unsigned char *nmdefptr ;
  int len ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  unsigned char tmp___9 ;
  int yy_amount_of_matched_text ;
  yy_state_type yy_next_state ;
  int tmp___10 ;
  int tmp___11 ;

  {
  doing_codeblock = 0;
  if (yy_init) {
    yy_init = 0;
    if (! yy_start) {
      yy_start = 1;
    }
    if (! yyin) {
      yyin = stdin;
    }
    if (! yyout) {
      yyout = stdout;
    }
    if (! yy_current_buffer) {
      yy_current_buffer = yy_create_buffer(yyin, 16384);
    }
    yy_load_buffer_state();
  }
  while (1) {
    yy_cp = yy_c_buf_p;
    *yy_cp = yy_hold_char;
    yy_bp = yy_cp;
    yy_current_state = yy_start;
    yy_current_state += yy_current_buffer->yy_at_bol;
    yy_match: 
    while (1) {
      yy_c = (unsigned char )yy_ec[(unsigned int )((unsigned char )*yy_cp)];
      if (yy_accept[yy_current_state]) {
        yy_last_accepting_state = yy_current_state;
        yy_last_accepting_cpos = yy_cp;
      }
      while ((int const   )yy_chk[(int const   )yy_base[yy_current_state] + (int const   )yy_c] != (int const   )yy_current_state) {
        yy_current_state = (int )yy_def[yy_current_state];
        if (yy_current_state >= 769) {
          yy_c = (unsigned char )yy_meta[(unsigned int )yy_c];
        }
      }
      yy_current_state = (int )yy_nxt[(unsigned int )yy_base[yy_current_state] + (unsigned int )yy_c];
      yy_cp ++;
      if (! ((int const   )yy_base[yy_current_state] != 2716)) {
        break;
      }
    }
    yy_find_action: 
    yy_act = (int )yy_accept[yy_current_state];
    if (yy_act == 0) {
      yy_cp = yy_last_accepting_cpos;
      yy_current_state = yy_last_accepting_state;
      yy_act = (int )yy_accept[yy_current_state];
    }
    yytext = yy_bp;
    yyleng = yy_cp - yy_bp;
    yy_hold_char = *yy_cp;
    *yy_cp = (char )'\000';
    yy_c_buf_p = yy_cp;
    do_action: 
    switch (yy_act) {
    case 0: 
    *yy_cp = yy_hold_char;
    yy_cp = yy_last_accepting_cpos;
    yy_current_state = yy_last_accepting_state;
    goto yy_find_action;
    case 1: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    indented_code = 1;
    yy_start = 9;
    break;
    case 2: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    yy_push_state(14);
    break;
    case 3: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_push_state(18);
    break;
    case 4: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return (261);
    break;
    case 5: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return (262);
    break;
    case 6: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    line_directive_out((FILE *)0, 1);
    indented_code = 0;
    yy_start = 9;
    break;
    case 7: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    break;
    case 8: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    sectnum = 2;
    bracelevel = 0;
    mark_defs1();
    line_directive_out((FILE *)0, 1);
    yy_start = 5;
    return (260);
    break;
    case 9: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yytext_is_array = 0;
    linenum ++;
    break;
    case 10: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yytext_is_array = 1;
    linenum ++;
    break;
    case 11: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 35;
    return (266);
    break;
    case 12: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    break;
    case 13: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    break;
    case 14: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    synerr((char *)"unrecognized \'%\' directive");
    break;
    case 15: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    strcpy((char */* __restrict  */)(nmstr),
           (char const   */* __restrict  */)((char const   *)yytext));
    didadef = 0;
    yy_start = 11;
    break;
    case 16: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    strcpy((char */* __restrict  */)(nmstr),
           (char const   */* __restrict  */)((char const   *)yytext));
    return (263);
    break;
    case 17: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    break;
    case 18: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    linenum ++;
    break;
    case 19: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    yy_pop_state();
    break;
    case 20: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 21: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 22: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    add_action(yytext);
    break;
    case 23: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_pop_state();
    break;
    case 24: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum = myctoi(yytext);
    break;
    case 25: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    flex_free((void *)infilename);
    infilename = copy_string((char const   *)(yytext + 1));
    tmp = strlen((char const   *)infilename);
    *(infilename + (tmp - 1U)) = (char )'\000';
    break;
    case 26: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    break;
    case 27: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    yy_start = 1;
    break;
    case 28: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 29: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    add_action(yytext);
    if (indented_code) {
      yy_start = 1;
    }
    break;
    case 30: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    break;
    case 31: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    tmp___0 = strlen((char const   *)((char *)(nmdef)));
    i___0 = (int )(tmp___0 - 1U);
    while (1) {
      if (i___0 >= 0) {
        if (! ((int )nmdef[i___0] == 32)) {
          if (! ((int )nmdef[i___0] == 9)) {
            break;
          }
        }
      } else {
        break;
      }
      i___0 --;
    }
    nmdef[i___0 + 1] = (unsigned char )'\000';
    ndinstal(nmstr, nmdef);
    didadef = 1;
    break;
    case 32: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! didadef) {
      synerr((char *)"incomplete name definition");
    }
    yy_start = 1;
    linenum ++;
    break;
    case 33: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    yy_start = 1;
    break;
    case 34: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    option_sense = 1;
    break;
    case 35: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return ('=');
    break;
    case 36: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    option_sense = ! option_sense;
    break;
    case 37: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (option_sense) {
      csize = 128;
    } else {
      csize = 256;
    }
    break;
    case 38: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (option_sense) {
      csize = 256;
    } else {
      csize = 128;
    }
    break;
    case 39: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    long_align = option_sense;
    break;
    case 40: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    action_define((char *)"YY_ALWAYS_INTERACTIVE", option_sense);
    break;
    case 41: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yytext_is_array = option_sense;
    break;
    case 42: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    backing_up_report = option_sense;
    break;
    case 43: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    interactive = ! option_sense;
    break;
    case 44: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    C_plus_plus = option_sense;
    break;
    case 45: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    caseins = ! option_sense;
    break;
    case 46: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    caseins = option_sense;
    break;
    case 47: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    ddebug = option_sense;
    break;
    case 48: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    spprdflt = ! option_sense;
    break;
    case 49: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    useecs = option_sense;
    break;
    case 50: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    usemecs = 0;
    useecs = usemecs;
    fullspd = 1;
    use_read = fullspd;
    break;
    case 51: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    usemecs = 0;
    useecs = usemecs;
    fulltbl = 1;
    use_read = fulltbl;
    break;
    case 52: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! option_sense) {
      action_define((char *)"YY_NO_INPUT", 1);
    }
    break;
    case 53: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    interactive = option_sense;
    break;
    case 54: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    lex_compat = option_sense;
    break;
    case 55: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    action_define((char *)"YY_MAIN", option_sense);
    do_yywrap = ! option_sense;
    break;
    case 56: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    usemecs = option_sense;
    break;
    case 57: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    action_define((char *)"YY_NEVER_INTERACTIVE", option_sense);
    break;
    case 58: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (option_sense) {
      tmp___1 = 1;
    } else {
      tmp___1 = -1;
    }
    performance_report += tmp___1;
    break;
    case 59: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yytext_is_array = ! option_sense;
    break;
    case 60: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    use_read = option_sense;
    break;
    case 61: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    reject_really_used = option_sense;
    break;
    case 62: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    action_define((char *)"YY_STACK_USED", option_sense);
    break;
    case 63: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    do_stdinit = option_sense;
    break;
    case 64: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    use_stdout = option_sense;
    break;
    case 65: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! option_sense) {
      action_define((char *)"YY_NO_UNPUT", 1);
    }
    break;
    case 66: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    printstats = option_sense;
    break;
    case 67: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    nowarn = ! option_sense;
    break;
    case 68: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    do_yylineno = option_sense;
    break;
    case 69: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yymore_really_used = option_sense;
    break;
    case 70: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    do_yywrap = option_sense;
    break;
    case 71: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! option_sense) {
      action_define((char *)"YY_NO_PUSH_STATE", 1);
    }
    break;
    case 72: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! option_sense) {
      action_define((char *)"YY_NO_POP_STATE", 1);
    }
    break;
    case 73: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! option_sense) {
      action_define((char *)"YY_NO_TOP_STATE", 1);
    }
    break;
    case 74: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! option_sense) {
      action_define((char *)"YY_NO_SCAN_BUFFER", 1);
    }
    break;
    case 75: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! option_sense) {
      action_define((char *)"YY_NO_SCAN_BYTES", 1);
    }
    break;
    case 76: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (! option_sense) {
      action_define((char *)"YY_NO_SCAN_STRING", 1);
    }
    break;
    case 77: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return (267);
    break;
    case 78: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return (268);
    break;
    case 79: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return (269);
    break;
    case 80: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    strcpy((char */* __restrict  */)(nmstr),
           (char const   */* __restrict  */)((char const   *)(yytext + 1)));
    tmp___2 = strlen((char const   *)(nmstr));
    nmstr[tmp___2 - 1U] = (char )'\000';
    return (263);
    break;
    case 81: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    format_synerr((char *)"unrecognized %%option: %s", yytext);
    yy_start = 27;
    break;
    case 82: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    yy_start = 1;
    break;
    case 83: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    bracelevel ++;
    while (1) {
      *yy_cp = yy_hold_char;
      yy_cp = (yy_bp + 2) - 0;
      yy_c_buf_p = yy_cp;
      yytext = yy_bp;
      yyleng = yy_cp - yy_bp;
      yy_hold_char = *yy_cp;
      *yy_cp = (char )'\000';
      yy_c_buf_p = yy_cp;
      break;
    }
    break;
    case 84: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    bracelevel --;
    while (1) {
      *yy_cp = yy_hold_char;
      yy_cp = (yy_bp + 2) - 0;
      yy_c_buf_p = yy_cp;
      yytext = yy_bp;
      yyleng = yy_cp - yy_bp;
      yy_hold_char = *yy_cp;
      *yy_cp = (char )'\000';
      yy_c_buf_p = yy_cp;
      break;
    }
    break;
    case 85: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 86: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    if (bracelevel <= 0) {
      while (1) {
        *yy_cp = yy_hold_char;
        yy_cp = (yy_bp + 0) - 0;
        yy_c_buf_p = yy_cp;
        yytext = yy_bp;
        yyleng = yy_cp - yy_bp;
        yy_hold_char = *yy_cp;
        *yy_cp = (char )'\000';
        yy_c_buf_p = yy_cp;
        break;
      }
      if (! yy_current_buffer) {
        yy_current_buffer = yy_create_buffer(yyin, 16384);
      }
      yy_current_buffer->yy_at_bol = 1;
      mark_prolog();
      yy_start = 3;
    } else {
      add_action(yytext);
    }
    break;
    case 87: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 88: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    add_action(yytext);
    break;
    case 169: 
    mark_prolog();
    sectnum = 0;
    return (0);
    break;
    case 89: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    break;
    case 90: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    indented_code = 0;
    doing_codeblock = 1;
    bracelevel = 1;
    yy_start = 33;
    break;
    case 91: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 13;
    return ('<');
    break;
    case 92: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return ('^');
    break;
    case 93: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 19;
    return ('\"');
    break;
    case 94: 
    *yy_cp = yy_hold_char;
    yy_cp = yy_bp + 1;
    yy_c_buf_p = yy_cp;
    yytext = yy_bp;
    yyleng = yy_cp - yy_bp;
    yy_hold_char = *yy_cp;
    *yy_cp = (char )'\000';
    yy_c_buf_p = yy_cp;
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 17;
    return ('{');
    break;
    case 95: 
    *yy_cp = yy_hold_char;
    yy_cp = yy_bp + 1;
    yy_c_buf_p = yy_cp;
    yytext = yy_bp;
    yyleng = yy_cp - yy_bp;
    yy_hold_char = *yy_cp;
    *yy_cp = (char )'\000';
    yy_c_buf_p = yy_cp;
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return ('$');
    break;
    case 96: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    bracelevel = 1;
    yy_start = 33;
    if (in_rule) {
      doing_rule_action = 1;
      in_rule = 0;
      return ('\n');
    }
    break;
    case 97: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    continued_action = 1;
    linenum ++;
    return ('\n');
    break;
    case 98: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    while (1) {
      *yy_cp = yy_hold_char;
      yy_cp = ((yy_bp + yyleng) - 2) - 0;
      yy_c_buf_p = yy_cp;
      yytext = yy_bp;
      yyleng = yy_cp - yy_bp;
      yy_hold_char = *yy_cp;
      *yy_cp = (char )'\000';
      yy_c_buf_p = yy_cp;
      break;
    }
    bracelevel = 0;
    continued_action = 0;
    yy_start = 25;
    break;
    case 99: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    break;
    case 100: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    bracelevel = 0;
    continued_action = 0;
    yy_start = 25;
    if (in_rule) {
      doing_rule_action = 1;
      in_rule = 0;
      return ('\n');
    }
    break;
    case 101: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    bracelevel = 0;
    continued_action = 0;
    yy_start = 25;
    yyunput('\n', yytext);
    if (in_rule) {
      doing_rule_action = 1;
      in_rule = 0;
      return ('\n');
    }
    break;
    case 102: 
    case 103: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return (265);
    break;
    case 104: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    sectnum = 3;
    yy_start = 7;
    return (0);
    break;
    case 105: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    strcpy((char */* __restrict  */)(nmstr),
           (char const   */* __restrict  */)((char const   *)yytext));
    cclval = ccllookup((unsigned char *)(nmstr));
    if (cclval != 0) {
      tmp___3 = input();
      if (tmp___3 != 93) {
        synerr((char *)"bad character class");
      }
      yylval = cclval;
      cclreuse ++;
      return (264);
    } else {
      cclinstal((unsigned char *)(nmstr), lastccl + 1);
      while (1) {
        *yy_cp = yy_hold_char;
        yy_cp = (yy_bp + 1) - 0;
        yy_c_buf_p = yy_cp;
        yytext = yy_bp;
        yyleng = yy_cp - yy_bp;
        yy_hold_char = *yy_cp;
        *yy_cp = (char )'\000';
        yy_c_buf_p = yy_cp;
        break;
      }
      yy_start = 21;
      return ('[');
    }
    break;
    case 106: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    strcpy((char */* __restrict  */)(nmstr),
           (char const   */* __restrict  */)((char const   *)(yytext + 1)));
    nmstr[yyleng - 2] = (char )'\000';
    nmdefptr = ndlookup(nmstr);
    if ((unsigned int )nmdefptr == (unsigned int )((unsigned char *)0)) {
      format_synerr((char *)"undefined definition {%s}", nmstr);
    } else {
      tmp___4 = strlen((char const   *)((char *)nmdefptr));
      len = (int )tmp___4;
      if (lex_compat) {
        goto _L;
      } else {
        if ((int )*(nmdefptr + 0) == 94) {
          goto _L;
        } else {
          if (len > 0) {
            if ((int )*(nmdefptr + (len - 1)) == 36) {
              _L: 
              tmp___5 = strlen((char const   *)((char *)nmdefptr));
              i___0 = (int )(tmp___5 - 1U);
              while (i___0 >= 0) {
                yyunput((int )*((char *)nmdefptr + i___0), yytext);
                i___0 --;
              }
              if ((int )*(nmdefptr + 0) == 94) {
                yy_start = 15;
              }
            } else {
              goto _L___0;
            }
          } else {
            _L___0: 
            yyunput(')', yytext);
            tmp___6 = strlen((char const   *)((char *)nmdefptr));
            i___0 = (int )(tmp___6 - 1U);
            while (i___0 >= 0) {
              yyunput((int )*((char *)nmdefptr + i___0), yytext);
              i___0 --;
            }
            yyunput('(', yytext);
          }
        }
      }
    }
    break;
    case 107: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return ((int )((unsigned char )*(yytext + 0)));
    break;
    case 108: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yylval = (int )((unsigned char )*(yytext + 0));
    return (258);
    break;
    case 109: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return ((int )((unsigned char )*(yytext + 0)));
    break;
    case 110: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 3;
    return ('>');
    break;
    case 111: 
    *yy_cp = yy_hold_char;
    yy_cp = yy_bp + 1;
    yy_c_buf_p = yy_cp;
    yytext = yy_bp;
    yyleng = yy_cp - yy_bp;
    yy_hold_char = *yy_cp;
    *yy_cp = (char )'\000';
    yy_c_buf_p = yy_cp;
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 15;
    return ('>');
    break;
    case 112: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    strcpy((char */* __restrict  */)(nmstr),
           (char const   */* __restrict  */)((char const   *)yytext));
    return (263);
    break;
    case 113: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    format_synerr((char *)"bad <start condition>: %s", yytext);
    break;
    case 114: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 3;
    return ('^');
    break;
    case 115: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yylval = (int )((unsigned char )*(yytext + 0));
    return (258);
    break;
    case 116: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 3;
    return ('\"');
    break;
    case 117: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    synerr((char *)"missing quote");
    yy_start = 3;
    linenum ++;
    return ('\"');
    break;
    case 118: 
    *yy_cp = yy_hold_char;
    yy_cp = yy_bp + 1;
    yy_c_buf_p = yy_cp;
    yytext = yy_bp;
    yyleng = yy_cp - yy_bp;
    yy_hold_char = *yy_cp;
    *yy_cp = (char )'\000';
    yy_c_buf_p = yy_cp;
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return ('^');
    break;
    case 119: 
    *yy_cp = yy_hold_char;
    yy_cp = yy_bp + 1;
    yy_c_buf_p = yy_cp;
    yytext = yy_bp;
    yyleng = yy_cp - yy_bp;
    yy_hold_char = *yy_cp;
    *yy_cp = (char )'\000';
    yy_c_buf_p = yy_cp;
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return ('^');
    break;
    case 120: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    yylval = (int )((unsigned char )*(yytext + 0));
    return (258);
    break;
    case 121: 
    *yy_cp = yy_hold_char;
    yy_cp = yy_bp + 1;
    yy_c_buf_p = yy_cp;
    yytext = yy_bp;
    yyleng = yy_cp - yy_bp;
    yy_hold_char = *yy_cp;
    *yy_cp = (char )'\000';
    yy_c_buf_p = yy_cp;
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return ('-');
    break;
    case 122: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yylval = (int )((unsigned char )*(yytext + 0));
    return (258);
    break;
    case 123: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 3;
    return (']');
    break;
    case 124: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    synerr((char *)"bad character class");
    yy_start = 3;
    return (']');
    break;
    case 125: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (270);
    break;
    case 126: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (271);
    break;
    case 127: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (272);
    break;
    case 128: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (273);
    break;
    case 129: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (274);
    break;
    case 130: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (275);
    break;
    case 131: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (276);
    break;
    case 132: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (277);
    break;
    case 133: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (278);
    break;
    case 134: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (279);
    break;
    case 135: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (280);
    break;
    case 136: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 23;
    return (281);
    break;
    case 137: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    format_synerr((char *)"bad character class expression: %s", yytext);
    yy_start = 23;
    return (270);
    break;
    case 138: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yylval = myctoi(yytext);
    return (259);
    break;
    case 139: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    return (',');
    break;
    case 140: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_start = 3;
    return ('}');
    break;
    case 141: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    synerr((char *)"bad character inside {}\'s");
    yy_start = 3;
    return ('}');
    break;
    case 142: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    synerr((char *)"missing }");
    yy_start = 3;
    linenum ++;
    return ('}');
    break;
    case 143: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    bracelevel = 0;
    break;
    case 144: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    yy_push_state(14);
    break;
    case 145: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    tmp___7 = all_upper(yytext);
    if (tmp___7) {
      reject = 1;
    }
    break;
    case 146: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    tmp___8 = all_lower(yytext);
    if (tmp___8) {
      yymore_used = 1;
    }
    break;
    case 147: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 148: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    add_action(yytext);
    if (bracelevel == 0) {
      goto _L___1;
    } else {
      if (doing_codeblock) {
        if (indented_code) {
          _L___1: 
          if (doing_rule_action) {
            add_action((char *)"\tYY_BREAK\n");
          }
          doing_codeblock = 0;
          doing_rule_action = doing_codeblock;
          yy_start = 3;
        }
      }
    }
    break;
    case 149: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    bracelevel ++;
    break;
    case 150: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    bracelevel --;
    break;
    case 151: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 152: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 153: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 154: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    yy_start = 31;
    break;
    case 155: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    add_action(yytext);
    if (bracelevel == 0) {
      if (doing_rule_action) {
        add_action((char *)"\tYY_BREAK\n");
      }
      doing_rule_action = 0;
      yy_start = 3;
    }
    break;
    case 156: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 157: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 158: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 159: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    linenum ++;
    add_action(yytext);
    break;
    case 160: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    yy_start = 25;
    break;
    case 161: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    add_action(yytext);
    break;
    case 181: 
    case 179: 
    case 182: 
    synerr((char *)"EOF encountered inside an action");
    return (0);
    break;
    case 162: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    tmp___9 = myesc((unsigned char *)yytext);
    yylval = (int )tmp___9;
    if ((yy_start - 1) / 2 == 10) {
      yy_start = 23;
    }
    return (258);
    break;
    case 163: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    fwrite((void const   */* __restrict  */)((void const   *)yytext),
           (unsigned int )yyleng, 1U, (FILE */* __restrict  */)yyout);
    break;
    case 170: 
    sectnum = 0;
    return (0);
    break;
    case 164: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    format_synerr((char *)"bad character: %s", yytext);
    break;
    case 165: 
    if (yyleng > 0) {
      yy_current_buffer->yy_at_bol = (int )*(yytext + (yyleng - 1)) == 10;
    }
    yy_fatal_error("flex scanner jammed");
    break;
    case 167: 
    case 168: 
    case 171: 
    case 172: 
    case 173: 
    case 174: 
    case 175: 
    case 176: 
    case 177: 
    case 178: 
    case 180: 
    case 183: 
    case 184: 
    case 185: 
    return (0);
    case 166: 
    yy_amount_of_matched_text = (yy_cp - yytext) - 1;
    *yy_cp = yy_hold_char;
    if (yy_current_buffer->yy_buffer_status == 0) {
      yy_n_chars = yy_current_buffer->yy_n_chars;
      yy_current_buffer->yy_input_file = yyin;
      yy_current_buffer->yy_buffer_status = 1;
    }
    if ((unsigned int )yy_c_buf_p <= (unsigned int )(yy_current_buffer->yy_ch_buf + yy_n_chars)) {
      yy_c_buf_p = yytext + yy_amount_of_matched_text;
      yy_current_state = yy_get_previous_state();
      yy_next_state = yy_try_NUL_trans(yy_current_state);
      yy_bp = yytext + 0;
      if (yy_next_state) {
        yy_c_buf_p ++;
        yy_cp = yy_c_buf_p;
        yy_current_state = yy_next_state;
        goto yy_match;
      } else {
        yy_cp = yy_c_buf_p;
        goto yy_find_action;
      }
    } else {
      tmp___10 = yy_get_next_buffer();
      switch (tmp___10) {
      case 1: 
      yy_did_buffer_switch_on_eof = 0;
      tmp___11 = yywrap();
      if (tmp___11) {
        yy_c_buf_p = yytext + 0;
        yy_act = (166 + (yy_start - 1) / 2) + 1;
        goto do_action;
      } else {
        if (! yy_did_buffer_switch_on_eof) {
          yyrestart(yyin);
        }
      }
      break;
      case 0: 
      yy_c_buf_p = yytext + yy_amount_of_matched_text;
      yy_current_state = yy_get_previous_state();
      yy_cp = yy_c_buf_p;
      yy_bp = yytext + 0;
      goto yy_match;
      case 2: 
      yy_c_buf_p = yy_current_buffer->yy_ch_buf + yy_n_chars;
      yy_current_state = yy_get_previous_state();
      yy_cp = yy_c_buf_p;
      yy_bp = yytext + 0;
      goto yy_find_action;
      }
    }
    break;
    default: 
    yy_fatal_error("fatal flex scanner internal error--no action found");
    }
  }
}
}

static int yy_get_next_buffer(void) 
{ register char *dest ;
  register char *source ;
  register int number_to_move ;
  register int i___0 ;
  int ret_val ;
  char *tmp ;
  char *tmp___0 ;
  int num_to_read ;
  YY_BUFFER_STATE b ;
  int yy_c_buf_p_offset ;
  int new_size ;
  void *tmp___1 ;
  int c ;
  int n ;
  int tmp___2 ;
  int tmp___3 ;
  size_t tmp___4 ;
  int tmp___5 ;

  {
  dest = yy_current_buffer->yy_ch_buf;
  source = yytext;
  if ((unsigned int )yy_c_buf_p > (unsigned int )(yy_current_buffer->yy_ch_buf + (yy_n_chars + 1))) {
    yy_fatal_error("fatal flex scanner internal error--end of buffer missed");
  }
  if (yy_current_buffer->yy_fill_buffer == 0) {
    if ((yy_c_buf_p - yytext) - 0 == 1) {
      return (1);
    } else {
      return (2);
    }
  }
  number_to_move = (yy_c_buf_p - yytext) - 1;
  i___0 = 0;
  while (i___0 < number_to_move) {
    tmp = dest;
    dest ++;
    tmp___0 = source;
    source ++;
    *tmp = *tmp___0;
    i___0 ++;
  }
  if (yy_current_buffer->yy_buffer_status == 2) {
    yy_n_chars = 0;
    yy_current_buffer->yy_n_chars = yy_n_chars;
  } else {
    num_to_read = (int )((yy_current_buffer->yy_buf_size - (unsigned int )number_to_move) - 1U);
    while (num_to_read <= 0) {
      b = yy_current_buffer;
      yy_c_buf_p_offset = yy_c_buf_p - b->yy_ch_buf;
      if (b->yy_is_our_buffer) {
        new_size = (int )(b->yy_buf_size * 2U);
        if (new_size <= 0) {
          b->yy_buf_size += b->yy_buf_size / 8U;
        } else {
          b->yy_buf_size *= 2U;
        }
        tmp___1 = yy_flex_realloc((void *)b->yy_ch_buf, b->yy_buf_size + 2U);
        b->yy_ch_buf = (char *)tmp___1;
      } else {
        b->yy_ch_buf = (char *)0;
      }
      if (! b->yy_ch_buf) {
        yy_fatal_error("fatal error - scanner input buffer overflow");
      }
      yy_c_buf_p = b->yy_ch_buf + yy_c_buf_p_offset;
      num_to_read = (int )((yy_current_buffer->yy_buf_size - (unsigned int )number_to_move) - 1U);
    }
    if (num_to_read > 8192) {
      num_to_read = 8192;
    }
    if (yy_current_buffer->yy_is_interactive) {
      c = '*';
      n = 0;
      while (1) {
        if (n < num_to_read) {
          c = _IO_getc(yyin);
          if (c != -1) {
            if (! (c != 10)) {
              break;
            }
          } else {
            break;
          }
        } else {
          break;
        }
        *((yy_current_buffer->yy_ch_buf + number_to_move) + n) = (char )c;
        n ++;
      }
      if (c == 10) {
        tmp___2 = n;
        n ++;
        *((yy_current_buffer->yy_ch_buf + number_to_move) + tmp___2) = (char )c;
      }
      if (c == -1) {
        tmp___3 = ferror(yyin);
        if (tmp___3) {
          yy_fatal_error("input in flex scanner failed");
        }
      }
      yy_n_chars = n;
    } else {
      tmp___4 = fread((void */* __restrict  */)((void *)(yy_current_buffer->yy_ch_buf + number_to_move)),
                      1U, (unsigned int )num_to_read,
                      (FILE */* __restrict  */)yyin);
      yy_n_chars = (int )tmp___4;
      if (yy_n_chars == 0) {
        tmp___5 = ferror(yyin);
        if (tmp___5) {
          yy_fatal_error("input in flex scanner failed");
        }
      }
    }
    yy_current_buffer->yy_n_chars = yy_n_chars;
  }
  if (yy_n_chars == 0) {
    if (number_to_move == 0) {
      ret_val = 1;
      yyrestart(yyin);
    } else {
      ret_val = 2;
      yy_current_buffer->yy_buffer_status = 2;
    }
  } else {
    ret_val = 0;
  }
  yy_n_chars += number_to_move;
  *(yy_current_buffer->yy_ch_buf + yy_n_chars) = (char)0;
  *(yy_current_buffer->yy_ch_buf + (yy_n_chars + 1)) = (char)0;
  yytext = yy_current_buffer->yy_ch_buf + 0;
  return (ret_val);
}
}

static yy_state_type yy_get_previous_state(void) 
{ register yy_state_type yy_current_state ;
  register char *yy_cp ;
  register YY_CHAR yy_c ;
  int tmp ;

  {
  yy_current_state = yy_start;
  yy_current_state += yy_current_buffer->yy_at_bol;
  yy_cp = yytext + 0;
  while ((unsigned int )yy_cp < (unsigned int )yy_c_buf_p) {
    if (*yy_cp) {
      tmp = (int )yy_ec[(unsigned int )((unsigned char )*yy_cp)];
    } else {
      tmp = (int )((int const   )1);
    }
    yy_c = (unsigned char )tmp;
    if (yy_accept[yy_current_state]) {
      yy_last_accepting_state = yy_current_state;
      yy_last_accepting_cpos = yy_cp;
    }
    while ((int const   )yy_chk[(int const   )yy_base[yy_current_state] + (int const   )yy_c] != (int const   )yy_current_state) {
      yy_current_state = (int )yy_def[yy_current_state];
      if (yy_current_state >= 769) {
        yy_c = (unsigned char )yy_meta[(unsigned int )yy_c];
      }
    }
    yy_current_state = (int )yy_nxt[(unsigned int )yy_base[yy_current_state] + (unsigned int )yy_c];
    yy_cp ++;
  }
  return (yy_current_state);
}
}

static yy_state_type yy_try_NUL_trans(yy_state_type yy_current_state ) 
{ register int yy_is_jam ;
  register char *yy_cp ;
  register YY_CHAR yy_c ;
  int tmp ;

  {
  yy_cp = yy_c_buf_p;
  yy_c = (unsigned char)1;
  if (yy_accept[yy_current_state]) {
    yy_last_accepting_state = yy_current_state;
    yy_last_accepting_cpos = yy_cp;
  }
  while ((int const   )yy_chk[(int const   )yy_base[yy_current_state] + (int const   )yy_c] != (int const   )yy_current_state) {
    yy_current_state = (int )yy_def[yy_current_state];
    if (yy_current_state >= 769) {
      yy_c = (unsigned char )yy_meta[(unsigned int )yy_c];
    }
  }
  yy_current_state = (int )yy_nxt[(unsigned int )yy_base[yy_current_state] + (unsigned int )yy_c];
  yy_is_jam = yy_current_state == 768;
  if (yy_is_jam) {
    tmp = 0;
  } else {
    tmp = yy_current_state;
  }
  return (tmp);
}
}

static void yyunput(int c , char *yy_bp ) 
{ register char *yy_cp ;
  register int number_to_move ;
  register char *dest ;
  register char *source ;

  {
  yy_cp = yy_c_buf_p;
  *yy_cp = yy_hold_char;
  if ((unsigned int )yy_cp < (unsigned int )(yy_current_buffer->yy_ch_buf + 2)) {
    number_to_move = yy_n_chars + 2;
    dest = yy_current_buffer->yy_ch_buf + (yy_current_buffer->yy_buf_size + 2U);
    source = yy_current_buffer->yy_ch_buf + number_to_move;
    while ((unsigned int )source > (unsigned int )yy_current_buffer->yy_ch_buf) {
      dest --;
      source --;
      *dest = *source;
    }
    yy_cp += dest - source;
    yy_bp += dest - source;
    yy_n_chars = (int )yy_current_buffer->yy_buf_size;
    yy_current_buffer->yy_n_chars = yy_n_chars;
    if ((unsigned int )yy_cp < (unsigned int )(yy_current_buffer->yy_ch_buf + 2)) {
      yy_fatal_error("flex scanner push-back overflow");
    }
  }
  yy_cp --;
  *yy_cp = (char )c;
  yytext = yy_bp;
  yy_hold_char = *yy_cp;
  yy_c_buf_p = yy_cp;
  return;
}
}

static int input(void) 
{ int c ;
  int offset ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  *yy_c_buf_p = yy_hold_char;
  if ((int )*yy_c_buf_p == 0) {
    if ((unsigned int )yy_c_buf_p < (unsigned int )(yy_current_buffer->yy_ch_buf + yy_n_chars)) {
      *yy_c_buf_p = (char )'\000';
    } else {
      offset = yy_c_buf_p - yytext;
      yy_c_buf_p ++;
      tmp = yy_get_next_buffer();
      switch (tmp) {
      case 2: 
      yyrestart(yyin);
      case 1: 
      tmp___0 = yywrap();
      if (tmp___0) {
        return (-1);
      }
      if (! yy_did_buffer_switch_on_eof) {
        yyrestart(yyin);
      }
      tmp___1 = input();
      return (tmp___1);
      case 0: 
      yy_c_buf_p = yytext + offset;
      break;
      }
    }
  }
  c = (int )*((unsigned char *)yy_c_buf_p);
  *yy_c_buf_p = (char )'\000';
  yy_c_buf_p ++;
  yy_hold_char = *yy_c_buf_p;
  yy_current_buffer->yy_at_bol = c == 10;
  return (c);
}
}

void yyrestart(FILE *input_file ) 
{ 

  {
  if (! yy_current_buffer) {
    yy_current_buffer = yy_create_buffer(yyin, 16384);
  }
  yy_init_buffer(yy_current_buffer, input_file);
  yy_load_buffer_state();
  return;
}
}

void yy_switch_to_buffer(YY_BUFFER_STATE new_buffer ) 
{ 

  {
  if ((unsigned int )yy_current_buffer == (unsigned int )new_buffer) {
    return;
  }
  if (yy_current_buffer) {
    *yy_c_buf_p = yy_hold_char;
    yy_current_buffer->yy_buf_pos = yy_c_buf_p;
    yy_current_buffer->yy_n_chars = yy_n_chars;
  }
  yy_current_buffer = new_buffer;
  yy_load_buffer_state();
  yy_did_buffer_switch_on_eof = 1;
  return;
}
}

void yy_load_buffer_state(void) 
{ 

  {
  yy_n_chars = yy_current_buffer->yy_n_chars;
  yy_c_buf_p = yy_current_buffer->yy_buf_pos;
  yytext = yy_c_buf_p;
  yyin = yy_current_buffer->yy_input_file;
  yy_hold_char = *yy_c_buf_p;
  return;
}
}

YY_BUFFER_STATE yy_create_buffer(FILE *file , int size ) 
{ YY_BUFFER_STATE b ;
  void *tmp ;
  void *tmp___0 ;

  {
  tmp = yy_flex_alloc((unsigned int )sizeof(struct yy_buffer_state ));
  b = (struct yy_buffer_state *)tmp;
  if (! b) {
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");
  }
  b->yy_buf_size = (unsigned int )size;
  tmp___0 = yy_flex_alloc(b->yy_buf_size + 2U);
  b->yy_ch_buf = (char *)tmp___0;
  if (! b->yy_ch_buf) {
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");
  }
  b->yy_is_our_buffer = 1;
  yy_init_buffer(b, file);
  return (b);
}
}

void yy_delete_buffer(YY_BUFFER_STATE b ) 
{ 

  {
  if (! b) {
    return;
  }
  if ((unsigned int )b == (unsigned int )yy_current_buffer) {
    yy_current_buffer = (struct yy_buffer_state *)0;
  }
  if (b->yy_is_our_buffer) {
    yy_flex_free((void *)b->yy_ch_buf);
  }
  yy_flex_free((void *)b);
  return;
}
}

extern int isatty(int  ) ;

void yy_init_buffer(YY_BUFFER_STATE b , FILE *file ) 
{ int tmp___1 ;
  int tmp___2 ;

  {
  yy_flush_buffer(b);
  b->yy_input_file = file;
  b->yy_fill_buffer = 1;
  if (file) {
    tmp___1 = fileno(file);
    tmp___2 = isatty(tmp___1);
    b->yy_is_interactive = tmp___2 > 0;
  } else {
    b->yy_is_interactive = 0;
  }
  return;
}
}

void yy_flush_buffer(YY_BUFFER_STATE b ) 
{ 

  {
  if (! b) {
    return;
  }
  b->yy_n_chars = 0;
  *(b->yy_ch_buf + 0) = (char)0;
  *(b->yy_ch_buf + 1) = (char)0;
  b->yy_buf_pos = b->yy_ch_buf + 0;
  b->yy_at_bol = 1;
  b->yy_buffer_status = 0;
  if ((unsigned int )b == (unsigned int )yy_current_buffer) {
    yy_load_buffer_state();
  }
  return;
}
}

YY_BUFFER_STATE yy_scan_buffer(char *base___0 , yy_size_t size ) 
{ YY_BUFFER_STATE b ;
  void *tmp ;

  {
  if (size < 2U) {
    return ((struct yy_buffer_state *)0);
  } else {
    if ((int )*(base___0 + (size - 2U)) != 0) {
      return ((struct yy_buffer_state *)0);
    } else {
      if ((int )*(base___0 + (size - 1U)) != 0) {
        return ((struct yy_buffer_state *)0);
      }
    }
  }
  tmp = yy_flex_alloc((unsigned int )sizeof(struct yy_buffer_state ));
  b = (struct yy_buffer_state *)tmp;
  if (! b) {
    yy_fatal_error("out of dynamic memory in yy_scan_buffer()");
  }
  b->yy_buf_size = size - 2U;
  b->yy_ch_buf = base___0;
  b->yy_buf_pos = b->yy_ch_buf;
  b->yy_is_our_buffer = 0;
  b->yy_input_file = (FILE *)0;
  b->yy_n_chars = (int )b->yy_buf_size;
  b->yy_is_interactive = 0;
  b->yy_at_bol = 1;
  b->yy_fill_buffer = 0;
  b->yy_buffer_status = 0;
  yy_switch_to_buffer(b);
  return (b);
}
}

YY_BUFFER_STATE yy_scan_string(char const   *yy_str ) 
{ int len ;
  YY_BUFFER_STATE tmp ;

  {
  len = 0;
  while (*(yy_str + len)) {
    len ++;
  }
  tmp = yy_scan_bytes(yy_str, len);
  return (tmp);
}
}

YY_BUFFER_STATE yy_scan_bytes(char const   *bytes , int len ) 
{ YY_BUFFER_STATE b ;
  char *buf ;
  yy_size_t n ;
  int i___0 ;
  void *tmp ;

  {
  n = (unsigned int )(len + 2);
  tmp = yy_flex_alloc(n);
  buf = (char *)tmp;
  if (! buf) {
    yy_fatal_error("out of dynamic memory in yy_scan_bytes()");
  }
  i___0 = 0;
  while (i___0 < len) {
    *(buf + i___0) = (char )*(bytes + i___0);
    i___0 ++;
  }
  *(buf + (len + 1)) = (char)0;
  *(buf + len) = *(buf + (len + 1));
  b = yy_scan_buffer(buf, n);
  if (! b) {
    yy_fatal_error("bad buffer in yy_scan_bytes()");
  }
  b->yy_is_our_buffer = 1;
  return (b);
}
}

static void yy_push_state(int new_state ) 
{ yy_size_t new_size ;
  void *tmp ;
  void *tmp___0 ;
  int tmp___1 ;

  {
  if (yy_start_stack_ptr >= yy_start_stack_depth) {
    yy_start_stack_depth += 25;
    new_size = (unsigned int )((unsigned long )((unsigned int )yy_start_stack_depth) * sizeof(int ));
    if (! yy_start_stack) {
      tmp = yy_flex_alloc(new_size);
      yy_start_stack = (int *)tmp;
    } else {
      tmp___0 = yy_flex_realloc((void *)yy_start_stack, new_size);
      yy_start_stack = (int *)tmp___0;
    }
    if (! yy_start_stack) {
      yy_fatal_error("out of memory expanding start-condition stack");
    }
  }
  tmp___1 = yy_start_stack_ptr;
  yy_start_stack_ptr ++;
  *(yy_start_stack + tmp___1) = (yy_start - 1) / 2;
  yy_start = 1 + 2 * new_state;
  return;
}
}

static void yy_pop_state(void) 
{ 

  {
  yy_start_stack_ptr --;
  if (yy_start_stack_ptr < 0) {
    yy_fatal_error("start-condition stack underflow");
  }
  yy_start = 1 + 2 * *(yy_start_stack + yy_start_stack_ptr);
  return;
}
}

static void yy_fatal_error(char const   *msg ) 
{ 

  {
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"%s\n", msg);
  exit(2);
}
}

static void *yy_flex_alloc(yy_size_t size ) 
{ void *tmp ;

  {
  tmp = malloc(size);
  return (tmp);
}
}

static void *yy_flex_realloc(void *ptr , yy_size_t size ) 
{ void *tmp ;

  {
  tmp = realloc((void *)((char *)ptr), size);
  return (tmp);
}
}

static void yy_flex_free(void *ptr ) 
{ 

  {
  free(ptr);
  return;
}
}

int yywrap(void) 
{ 

  {
  num_input_files --;
  if (num_input_files > 0) {
    input_files ++;
    set_input_file(*input_files);
    return (0);
  } else {
    return (1);
  }
}
}

void set_input_file(char *file ) 
{ size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  if (file) {
    if (0) {
      __s1_len = strlen((char const   *)file);
      __s2_len = strlen("-");
      if (! ((unsigned int )((void const   *)(file + 1)) - (unsigned int )((void const   *)file) == 1U)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4U) {
          _L___0: 
          if (! ((unsigned int )((void const   *)("-" + 1)) - (unsigned int )((void const   *)"-") == 1U)) {
            tmp___8 = 1;
          } else {
            if (__s2_len >= 4U) {
              tmp___8 = 1;
            } else {
              tmp___8 = 0;
            }
          }
        } else {
          tmp___8 = 0;
        }
      }
      if (tmp___8) {
        tmp___4 = __builtin_strcmp((char const   *)file, "-");
      } else {
        tmp___7 = __builtin_strcmp((char const   *)file, "-");
        tmp___4 = tmp___7;
      }
    } else {
      tmp___7 = __builtin_strcmp((char const   *)file, "-");
      tmp___4 = tmp___7;
    }
    if (tmp___4) {
      infilename = copy_string((char const   *)file);
      yyin = fopen((char const   */* __restrict  */)((char const   *)infilename),
                   (char const   */* __restrict  */)"r");
      if ((unsigned int )yyin == (unsigned int )((void *)0)) {
        lerrsf("can\'t open %s", (char const   *)file);
      }
    } else {
      yyin = stdin;
      infilename = copy_string("<stdin>");
    }
  } else {
    yyin = stdin;
    infilename = copy_string("<stdin>");
  }
  linenum = 1;
  return;
}
}

void *flex_alloc(size_t size ) 
{ void *tmp ;

  {
  tmp = malloc(size);
  return (tmp);
}
}

void *flex_realloc(void *ptr , size_t size ) 
{ void *tmp ;

  {
  tmp = realloc(ptr, size);
  return (tmp);
}
}

void flex_free(void *ptr ) 
{ 

  {
  if (ptr) {
    free(ptr);
  }
  return;
}
}

char const   *skel[1542]   = 
  {"/* A lexical scanner generated by flex */", "",
   "/* Scanner skeleton version:",
   " * $Header: /home/daffy/u0/vern/flex/RCS/flex.skl,v 2.91 96/09/10 16:58:48 vern Exp $",
   " */", "", "#define FLEX_SCANNER", "#define YY_FLEX_MAJOR_VERSION 2",
   "#define YY_FLEX_MINOR_VERSION 5", "", "%-", "#include <stdio.h>", "%*", "",
   "", "/* cfront 1.2 defines \"c_plusplus\" instead of \"__cplusplus\" */",
   "#ifdef c_plusplus", "#ifndef __cplusplus", "#define __cplusplus", "#endif",
   "#endif", "", "", "#ifdef __cplusplus", "", "#include <stdlib.h>", "%+",
   "class istream;", "%*", "#include <unistd.h>", "",
   "/* Use prototypes in function declarations. */", "#define YY_USE_PROTOS",
   "", "/* The \"const\" storage-class-modifier is valid. */",
   "#define YY_USE_CONST", "", "#else\t/* ! __cplusplus */", "", "#if __STDC__",
   "", "#define YY_USE_PROTOS", "#define YY_USE_CONST", "",
   "#endif\t/* __STDC__ */", "#endif\t/* ! __cplusplus */", "",
   "#ifdef __TURBOC__", " #pragma warn -rch", " #pragma warn -use",
   "#include <io.h>", "#include <stdlib.h>", "#define YY_USE_CONST",
   "#define YY_USE_PROTOS", "#endif", "", "#ifdef YY_USE_CONST",
   "#define yyconst const", "#else", "#define yyconst", "#endif", "", "",
   "#ifdef YY_USE_PROTOS", "#define YY_PROTO(proto) proto", "#else",
   "#define YY_PROTO(proto) ()", "#endif", "",
   "/* Returned upon end-of-file. */", "#define YY_NULL 0", "",
   "/* Promotes a possibly negative, possibly signed char to an unsigned",
   " * integer for use as an array index.  If the signed char is negative,",
   " * we want to instead treat it as an 8-bit unsigned char, hence the",
   " * double cast.", " */",
   "#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)", "",
   "/* Enter a start condition.  This macro really ought to take a parameter,",
   " * but we do it the disgusting crufty way forced on us by the ()-less",
   " * definition of BEGIN.", " */", "#define BEGIN yy_start = 1 + 2 *", "",
   "/* Translate the current start state into a value that can be later handed",
   " * to BEGIN to return to the state.  The YYSTATE alias is for lex",
   " * compatibility.", " */", "#define YY_START ((yy_start - 1) / 2)",
   "#define YYSTATE YY_START", "",
   "/* Action number for EOF rule of a given start state. */",
   "#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)", "",
   "/* Special action meaning \"start processing a new file\". */",
   "#define YY_NEW_FILE yyrestart( yyin )", "",
   "#define YY_END_OF_BUFFER_CHAR 0", "", "/* Size of default input buffer. */",
   "#define YY_BUF_SIZE 16384", "",
   "typedef struct yy_buffer_state *YY_BUFFER_STATE;", "", "extern int yyleng;",
   "%-", "extern FILE *yyin, *yyout;", "%*", "",
   "#define EOB_ACT_CONTINUE_SCAN 0", "#define EOB_ACT_END_OF_FILE 1",
   "#define EOB_ACT_LAST_MATCH 2", "",
   "/* The funky do-while in the following #define is used to turn the definition",
   " * int a single C statement (which needs a semi-colon terminator).  This",
   " * avoids problems with code like:", " *", " * \tif ( condition_holds )",
   " *\t\tyyless( 5 );", " *\telse", " *\t\tdo_something_else();", " *",
   " * Prior to using the do-while the compiler would get upset at the",
   " * \"else\" because it interpreted the \"if\" statement as being all",
   " * done when it reached the \';\' after the yyless() call.", " */", "",
   "/* Return all but the first \'n\' matched characters back to the input stream. */",
   "", "#define yyless(n) \\", "\tdo \\", "\t\t{ \\",
   "\t\t/* Undo effects of setting up yytext. */ \\",
   "\t\t*yy_cp = yy_hold_char; \\", "\t\tYY_RESTORE_YY_MORE_OFFSET \\",
   "\t\tyy_c_buf_p = yy_cp = yy_bp + n - YY_MORE_ADJ; \\",
   "\t\tYY_DO_BEFORE_ACTION; /* set up yytext again */ \\", "\t\t} \\",
   "\twhile ( 0 )", "", "#define unput(c) yyunput( c, yytext_ptr )", "",
   "/* The following is because we cannot portably get our hands on size_t",
   " * (without autoconf\'s help, which isn\'t available because we want",
   " * flex-generated scanners to compile on their own).", " */",
   "typedef unsigned int yy_size_t;", "", "", "struct yy_buffer_state", "\t{",
   "%-", "\tFILE *yy_input_file;", "%+", "\tistream* yy_input_file;", "%*", "",
   "\tchar *yy_ch_buf;\t\t/* input buffer */",
   "\tchar *yy_buf_pos;\t\t/* current position in input buffer */", "",
   "\t/* Size of input buffer in bytes, not including room for EOB",
   "\t * characters.", "\t */", "\tyy_size_t yy_buf_size;", "",
   "\t/* Number of characters read into yy_ch_buf, not including EOB",
   "\t * characters.", "\t */", "\tint yy_n_chars;", "",
   "\t/* Whether we \"own\" the buffer - i.e., we know we created it,",
   "\t * and can realloc() it to grow it, and should free() it to",
   "\t * delete it.", "\t */", "\tint yy_is_our_buffer;", "",
   "\t/* Whether this is an \"interactive\" input source; if so, and",
   "\t * if we\'re using stdio for input, then we want to use getc()",
   "\t * instead of fread(), to make sure we stop fetching input after",
   "\t * each newline.", "\t */", "\tint yy_is_interactive;", "",
   "\t/* Whether we\'re considered to be at the beginning of a line.",
   "\t * If so, \'^\' rules will be active on the next match, otherwise",
   "\t * not.", "\t */", "\tint yy_at_bol;", "",
   "\t/* Whether to try to fill the input buffer when we reach the",
   "\t * end of it.", "\t */", "\tint yy_fill_buffer;", "",
   "\tint yy_buffer_status;", "#define YY_BUFFER_NEW 0",
   "#define YY_BUFFER_NORMAL 1",
   "\t/* When an EOF\'s been seen but there\'s still some text to process",
   "\t * then we mark the buffer as YY_EOF_PENDING, to indicate that we",
   "\t * shouldn\'t try reading from the input source any more.  We might",
   "\t * still have a bunch of tokens to match, though, because of",
   "\t * possible backing-up.", "\t *",
   "\t * When we actually see the EOF, we change the status to \"new\"",
   "\t * (via yyrestart()), so that the user can continue scanning by",
   "\t * just pointing yyin at a new input file.", "\t */",
   "#define YY_BUFFER_EOF_PENDING 2", "\t};", "",
   "%- Standard (non-C++) definition",
   "static YY_BUFFER_STATE yy_current_buffer = 0;", "%*", "",
   "/* We provide macros for accessing buffer states in case in the",
   " * future we want to put the buffer states in a more general",
   " * \"scanner state\".", " */",
   "#define YY_CURRENT_BUFFER yy_current_buffer", "", "",
   "%- Standard (non-C++) definition",
   "/* yy_hold_char holds the character lost when yytext is formed. */",
   "static char yy_hold_char;", "",
   "static int yy_n_chars;\t\t/* number of characters read into yy_ch_buf */",
   "", "", "int yyleng;", "", "/* Points to current character in buffer. */",
   "static char *yy_c_buf_p = (char *) 0;",
   "static int yy_init = 1;\t\t/* whether we need to initialize */",
   "static int yy_start = 0;\t/* start state number */", "",
   "/* Flag which is used to allow yywrap()\'s to do buffer switches",
   " * instead of setting up a fresh yyin.  A bit of a hack ...", " */",
   "static int yy_did_buffer_switch_on_eof;", "",
   "void yyrestart YY_PROTO(( FILE *input_file ));", "",
   "void yy_switch_to_buffer YY_PROTO(( YY_BUFFER_STATE new_buffer ));",
   "void yy_load_buffer_state YY_PROTO(( void ));",
   "YY_BUFFER_STATE yy_create_buffer YY_PROTO(( FILE *file, int size ));",
   "void yy_delete_buffer YY_PROTO(( YY_BUFFER_STATE b ));",
   "void yy_init_buffer YY_PROTO(( YY_BUFFER_STATE b, FILE *file ));",
   "void yy_flush_buffer YY_PROTO(( YY_BUFFER_STATE b ));",
   "#define YY_FLUSH_BUFFER yy_flush_buffer( yy_current_buffer )", "",
   "YY_BUFFER_STATE yy_scan_buffer YY_PROTO(( char *base, yy_size_t size ));",
   "YY_BUFFER_STATE yy_scan_string YY_PROTO(( yyconst char *yy_str ));",
   "YY_BUFFER_STATE yy_scan_bytes YY_PROTO(( yyconst char *bytes, int len ));",
   "%*", "", "static void *yy_flex_alloc YY_PROTO(( yy_size_t ));",
   "static void *yy_flex_realloc YY_PROTO(( void *, yy_size_t ));",
   "static void yy_flex_free YY_PROTO(( void * ));", "",
   "#define yy_new_buffer yy_create_buffer", "",
   "#define yy_set_interactive(is_interactive) \\", "\t{ \\",
   "\tif ( ! yy_current_buffer ) \\",
   "\t\tyy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \\",
   "\tyy_current_buffer->yy_is_interactive = is_interactive; \\", "\t}", "",
   "#define yy_set_bol(at_bol) \\", "\t{ \\", "\tif ( ! yy_current_buffer ) \\",
   "\t\tyy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \\",
   "\tyy_current_buffer->yy_at_bol = at_bol; \\", "\t}", "",
   "#define YY_AT_BOL() (yy_current_buffer->yy_at_bol)", "",
   "%% yytext/yyin/yyout/yy_state_type/yylineno etc. def\'s & init go here", "",
   "%- Standard (non-C++) definition",
   "static yy_state_type yy_get_previous_state YY_PROTO(( void ));",
   "static yy_state_type yy_try_NUL_trans YY_PROTO(( yy_state_type current_state ));",
   "static int yy_get_next_buffer YY_PROTO(( void ));",
   "static void yy_fatal_error YY_PROTO(( yyconst char msg[] ));", "%*", "",
   "/* Done after the current pattern has been matched and before the",
   " * corresponding action - sets up yytext.", " */",
   "#define YY_DO_BEFORE_ACTION \\", "\tyytext_ptr = yy_bp; \\",
   "%% code to fiddle yytext and yyleng for yymore() goes here",
   "\tyy_hold_char = *yy_cp; \\", "\t*yy_cp = \'\\0\'; \\",
   "%% code to copy yytext_ptr to yytext[] goes here, if %array",
   "\tyy_c_buf_p = yy_cp;", "",
   "%% data tables for the DFA and the user\'s section 1 definitions go here",
   "",
   "/* Macros after this point can all be overridden by user definitions in",
   " * section 1.", " */", "", "#ifndef YY_SKIP_YYWRAP", "#ifdef __cplusplus",
   "extern \"C\" int yywrap YY_PROTO(( void ));", "#else",
   "extern int yywrap YY_PROTO(( void ));", "#endif", "#endif", "", "%-",
   "#ifndef YY_NO_UNPUT",
   "static void yyunput YY_PROTO(( int c, char *buf_ptr ));", "#endif", "%*",
   "", "#ifndef yytext_ptr",
   "static void yy_flex_strncpy YY_PROTO(( char *, yyconst char *, int ));",
   "#endif", "", "#ifdef YY_NEED_STRLEN",
   "static int yy_flex_strlen YY_PROTO(( yyconst char * ));", "#endif", "",
   "#ifndef YY_NO_INPUT", "%- Standard (non-C++) definition",
   "#ifdef __cplusplus", "static int yyinput YY_PROTO(( void ));", "#else",
   "static int input YY_PROTO(( void ));", "#endif", "%*", "#endif", "",
   "#if YY_STACK_USED", "static int yy_start_stack_ptr = 0;",
   "static int yy_start_stack_depth = 0;", "static int *yy_start_stack = 0;",
   "#ifndef YY_NO_PUSH_STATE",
   "static void yy_push_state YY_PROTO(( int new_state ));", "#endif",
   "#ifndef YY_NO_POP_STATE", "static void yy_pop_state YY_PROTO(( void ));",
   "#endif", "#ifndef YY_NO_TOP_STATE",
   "static int yy_top_state YY_PROTO(( void ));", "#endif", "", "#else",
   "#define YY_NO_PUSH_STATE 1", "#define YY_NO_POP_STATE 1",
   "#define YY_NO_TOP_STATE 1", "#endif", "", "#ifdef YY_MALLOC_DECL",
   "YY_MALLOC_DECL", "#else", "#if __STDC__", "#ifndef __cplusplus",
   "#include <stdlib.h>", "#endif", "#else",
   "/* Just try to get by without declaring the routines.  This will fail",
   " * miserably on non-ANSI systems for which sizeof(size_t) != sizeof(int)",
   " * or sizeof(void*) != sizeof(int).", " */", "#endif", "#endif", "",
   "/* Amount of stuff to slurp up with each read. */",
   "#ifndef YY_READ_BUF_SIZE", "#define YY_READ_BUF_SIZE 8192", "#endif", "",
   "/* Copy whatever the last rule matched to the standard output. */", "",
   "#ifndef ECHO", "%- Standard (non-C++) definition",
   "/* This used to be an fputs(), but since the string might contain NUL\'s,",
   " * we now use fwrite().", " */",
   "#define ECHO (void) fwrite( yytext, yyleng, 1, yyout )",
   "%+ C++ definition", "#define ECHO LexerOutput( yytext, yyleng )", "%*",
   "#endif", "",
   "/* Gets input and stuffs it into \"buf\".  number of characters read, or YY_NULL,",
   " * is returned in \"result\".", " */", "#ifndef YY_INPUT",
   "#define YY_INPUT(buf,result,max_size) \\",
   "%% fread()/read() definition of YY_INPUT goes here unless we\'re doing C++",
   "%+ C++ definition",
   "\tif ( (result = LexerInput( (char *) buf, max_size )) < 0 ) \\",
   "\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" );", "%*", "#endif",
   "",
   "/* No semi-colon after return; correct usage is to write \"yyterminate();\" -",
   " * we don\'t want an extra \';\' after the \"return\" because that will cause",
   " * some compilers to complain about unreachable statements.", " */",
   "#ifndef yyterminate", "#define yyterminate() return YY_NULL", "#endif", "",
   "/* Number of entries by which start-condition stack grows. */",
   "#ifndef YY_START_STACK_INCR", "#define YY_START_STACK_INCR 25", "#endif",
   "", "/* Report a fatal error. */", "#ifndef YY_FATAL_ERROR", "%-",
   "#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )", "%+",
   "#define YY_FATAL_ERROR(msg) LexerError( msg )", "%*", "#endif", "",
   "/* Default declaration of generated scanner - a define so the user can",
   " * easily add parameters.", " */", "#ifndef YY_DECL",
   "%- Standard (non-C++) definition",
   "#define YY_DECL int yylex YY_PROTO(( void ))", "%+ C++ definition",
   "#define YY_DECL int yyFlexLexer::yylex()", "%*", "#endif", "",
   "/* Code executed at the beginning of each rule, after yytext and yyleng",
   " * have been set up.", " */", "#ifndef YY_USER_ACTION",
   "#define YY_USER_ACTION", "#endif", "",
   "/* Code executed at the end of each rule. */", "#ifndef YY_BREAK",
   "#define YY_BREAK break;", "#endif", "",
   "%% YY_RULE_SETUP definition goes here", "", "YY_DECL", "\t{",
   "\tregister yy_state_type yy_current_state;",
   "\tregister char *yy_cp, *yy_bp;", "\tregister int yy_act;", "",
   "%% user\'s declarations go here", "", "\tif ( yy_init )", "\t\t{",
   "\t\tyy_init = 0;", "", "#ifdef YY_USER_INIT", "\t\tYY_USER_INIT;", "#endif",
   "", "\t\tif ( ! yy_start )", "\t\t\tyy_start = 1;\t/* first start state */",
   "", "\t\tif ( ! yyin )", "%-", "\t\t\tyyin = stdin;", "%+",
   "\t\t\tyyin = &cin;", "%*", "", "\t\tif ( ! yyout )", "%-",
   "\t\t\tyyout = stdout;", "%+", "\t\t\tyyout = &cout;", "%*", "",
   "\t\tif ( ! yy_current_buffer )", "\t\t\tyy_current_buffer =",
   "\t\t\t\tyy_create_buffer( yyin, YY_BUF_SIZE );", "",
   "\t\tyy_load_buffer_state();", "\t\t}", "",
   "\twhile ( 1 )\t\t/* loops until end-of-file is reached */", "\t\t{",
   "%% yymore()-related code goes here", "\t\tyy_cp = yy_c_buf_p;", "",
   "\t\t/* Support of yytext. */", "\t\t*yy_cp = yy_hold_char;", "",
   "\t\t/* yy_bp points to the position in yy_ch_buf of the start of",
   "\t\t * the current run.", "\t\t */", "\t\tyy_bp = yy_cp;", "",
   "%% code to set up and find next match goes here", "", "yy_find_action:",
   "%% code to find the action number goes here", "",
   "\t\tYY_DO_BEFORE_ACTION;", "", "%% code for yylineno update goes here", "",
   "do_action:\t/* This label is used only to access EOF actions. */", "",
   "%% debug code goes here", "", "\t\tswitch ( yy_act )",
   "\t{ /* beginning of action switch */", "%% actions go here", "",
   "\tcase YY_END_OF_BUFFER:", "\t\t{",
   "\t\t/* Amount of text matched not including the EOB char. */",
   "\t\tint yy_amount_of_matched_text = (int) (yy_cp - yytext_ptr) - 1;", "",
   "\t\t/* Undo the effects of YY_DO_BEFORE_ACTION. */",
   "\t\t*yy_cp = yy_hold_char;", "\t\tYY_RESTORE_YY_MORE_OFFSET", "",
   "\t\tif ( yy_current_buffer->yy_buffer_status == YY_BUFFER_NEW )", "\t\t\t{",
   "\t\t\t/* We\'re scanning a new file or input source.  It\'s",
   "\t\t\t * possible that this happened because the user",
   "\t\t\t * just pointed yyin at a new source and called",
   "\t\t\t * yylex().  If so, then we have to assure",
   "\t\t\t * consistency between yy_current_buffer and our",
   "\t\t\t * globals.  Here is the right place to do so, because",
   "\t\t\t * this is the first action (other than possibly a",
   "\t\t\t * back-up) that will match for the new input source.", "\t\t\t */",
   "\t\t\tyy_n_chars = yy_current_buffer->yy_n_chars;",
   "\t\t\tyy_current_buffer->yy_input_file = yyin;",
   "\t\t\tyy_current_buffer->yy_buffer_status = YY_BUFFER_NORMAL;", "\t\t\t}",
   "", "\t\t/* Note that here we test for yy_c_buf_p \"<=\" to the position",
   "\t\t * of the first EOB in the buffer, since yy_c_buf_p will",
   "\t\t * already have been incremented past the NUL character",
   "\t\t * (since all states make transitions on EOB to the",
   "\t\t * end-of-buffer state).  Contrast this with the test",
   "\t\t * in input().", "\t\t */",
   "\t\tif ( yy_c_buf_p <= &yy_current_buffer->yy_ch_buf[yy_n_chars] )",
   "\t\t\t{ /* This was really a NUL. */", "\t\t\tyy_state_type yy_next_state;",
   "", "\t\t\tyy_c_buf_p = yytext_ptr + yy_amount_of_matched_text;", "",
   "\t\t\tyy_current_state = yy_get_previous_state();", "",
   "\t\t\t/* Okay, we\'re now positioned to make the NUL",
   "\t\t\t * transition.  We couldn\'t have",
   "\t\t\t * yy_get_previous_state() go ahead and do it",
   "\t\t\t * for us because it doesn\'t know how to deal",
   "\t\t\t * with the possibility of jamming (and we don\'t",
   "\t\t\t * want to build jamming into it because then it",
   "\t\t\t * will run more slowly).", "\t\t\t */", "",
   "\t\t\tyy_next_state = yy_try_NUL_trans( yy_current_state );", "",
   "\t\t\tyy_bp = yytext_ptr + YY_MORE_ADJ;", "", "\t\t\tif ( yy_next_state )",
   "\t\t\t\t{", "\t\t\t\t/* Consume the NUL. */",
   "\t\t\t\tyy_cp = ++yy_c_buf_p;", "\t\t\t\tyy_current_state = yy_next_state;",
   "\t\t\t\tgoto yy_match;", "\t\t\t\t}", "", "\t\t\telse", "\t\t\t\t{",
   "%% code to do back-up for compressed tables and set up yy_cp goes here",
   "\t\t\t\tgoto yy_find_action;", "\t\t\t\t}", "\t\t\t}", "",
   "\t\telse switch ( yy_get_next_buffer() )", "\t\t\t{",
   "\t\t\tcase EOB_ACT_END_OF_FILE:", "\t\t\t\t{",
   "\t\t\t\tyy_did_buffer_switch_on_eof = 0;", "", "\t\t\t\tif ( yywrap() )",
   "\t\t\t\t\t{", "\t\t\t\t\t/* Note: because we\'ve taken care in",
   "\t\t\t\t\t * yy_get_next_buffer() to have set up",
   "\t\t\t\t\t * yytext, we can now set up",
   "\t\t\t\t\t * yy_c_buf_p so that if some total",
   "\t\t\t\t\t * hoser (like flex itself) wants to",
   "\t\t\t\t\t * call the scanner after we return the",
   "\t\t\t\t\t * YY_NULL, it\'ll still work - another",
   "\t\t\t\t\t * YY_NULL will get returned.", "\t\t\t\t\t */",
   "\t\t\t\t\tyy_c_buf_p = yytext_ptr + YY_MORE_ADJ;", "",
   "\t\t\t\t\tyy_act = YY_STATE_EOF(YY_START);", "\t\t\t\t\tgoto do_action;",
   "\t\t\t\t\t}", "", "\t\t\t\telse", "\t\t\t\t\t{",
   "\t\t\t\t\tif ( ! yy_did_buffer_switch_on_eof )", "\t\t\t\t\t\tYY_NEW_FILE;",
   "\t\t\t\t\t}", "\t\t\t\tbreak;", "\t\t\t\t}", "",
   "\t\t\tcase EOB_ACT_CONTINUE_SCAN:", "\t\t\t\tyy_c_buf_p =",
   "\t\t\t\t\tyytext_ptr + yy_amount_of_matched_text;", "",
   "\t\t\t\tyy_current_state = yy_get_previous_state();", "",
   "\t\t\t\tyy_cp = yy_c_buf_p;", "\t\t\t\tyy_bp = yytext_ptr + YY_MORE_ADJ;",
   "\t\t\t\tgoto yy_match;", "", "\t\t\tcase EOB_ACT_LAST_MATCH:",
   "\t\t\t\tyy_c_buf_p =", "\t\t\t\t&yy_current_buffer->yy_ch_buf[yy_n_chars];",
   "", "\t\t\t\tyy_current_state = yy_get_previous_state();", "",
   "\t\t\t\tyy_cp = yy_c_buf_p;", "\t\t\t\tyy_bp = yytext_ptr + YY_MORE_ADJ;",
   "\t\t\t\tgoto yy_find_action;", "\t\t\t}", "\t\tbreak;", "\t\t}", "",
   "\tdefault:", "\t\tYY_FATAL_ERROR(",
   "\t\t\t\"fatal flex scanner internal error--no action found\" );",
   "\t} /* end of action switch */", "\t\t} /* end of scanning one token */",
   "\t} /* end of yylex */", "", "%+",
   "yyFlexLexer::yyFlexLexer( istream* arg_yyin, ostream* arg_yyout )", "\t{",
   "\tyyin = arg_yyin;", "\tyyout = arg_yyout;", "\tyy_c_buf_p = 0;",
   "\tyy_init = 1;", "\tyy_start = 0;", "\tyy_flex_debug = 0;",
   "\tyylineno = 1;\t// this will only get updated if %option yylineno", "",
   "\tyy_did_buffer_switch_on_eof = 0;", "",
   "\tyy_looking_for_trail_begin = 0;", "\tyy_more_flag = 0;",
   "\tyy_more_len = 0;", "\tyy_more_offset = yy_prev_more_offset = 0;", "",
   "\tyy_start_stack_ptr = yy_start_stack_depth = 0;", "\tyy_start_stack = 0;",
   "", "\tyy_current_buffer = 0;", "", "#ifdef YY_USES_REJECT",
   "\tyy_state_buf = new yy_state_type[YY_BUF_SIZE + 2];", "#else",
   "\tyy_state_buf = 0;", "#endif", "\t}", "", "yyFlexLexer::~yyFlexLexer()",
   "\t{", "\tdelete yy_state_buf;", "\tyy_delete_buffer( yy_current_buffer );",
   "\t}", "",
   "void yyFlexLexer::switch_streams( istream* new_in, ostream* new_out )",
   "\t{", "\tif ( new_in )", "\t\t{",
   "\t\tyy_delete_buffer( yy_current_buffer );",
   "\t\tyy_switch_to_buffer( yy_create_buffer( new_in, YY_BUF_SIZE ) );",
   "\t\t}", "", "\tif ( new_out )", "\t\tyyout = new_out;", "\t}", "",
   "#ifdef YY_INTERACTIVE",
   "int yyFlexLexer::LexerInput( char* buf, int /* max_size */ )", "#else",
   "int yyFlexLexer::LexerInput( char* buf, int max_size )", "#endif", "\t{",
   "\tif ( yyin->eof() || yyin->fail() )", "\t\treturn 0;", "",
   "#ifdef YY_INTERACTIVE", "\tyyin->get( buf[0] );", "",
   "\tif ( yyin->eof() )", "\t\treturn 0;", "", "\tif ( yyin->bad() )",
   "\t\treturn -1;", "", "\treturn 1;", "", "#else",
   "\t(void) yyin->read( buf, max_size );", "", "\tif ( yyin->bad() )",
   "\t\treturn -1;", "\telse", "\t\treturn yyin->gcount();", "#endif", "\t}",
   "", "void yyFlexLexer::LexerOutput( const char* buf, int size )", "\t{",
   "\t(void) yyout->write( buf, size );", "\t}", "%*", "",
   "/* yy_get_next_buffer - try to read in a new buffer", " *",
   " * Returns a code representing an action:", " *\tEOB_ACT_LAST_MATCH -",
   " *\tEOB_ACT_CONTINUE_SCAN - continue scanning from current position",
   " *\tEOB_ACT_END_OF_FILE - end of file", " */", "", "%-",
   "static int yy_get_next_buffer()", "%+",
   "int yyFlexLexer::yy_get_next_buffer()", "%*", "\t{",
   "\tregister char *dest = yy_current_buffer->yy_ch_buf;",
   "\tregister char *source = yytext_ptr;", "\tregister int number_to_move, i;",
   "\tint ret_val;", "",
   "\tif ( yy_c_buf_p > &yy_current_buffer->yy_ch_buf[yy_n_chars + 1] )",
   "\t\tYY_FATAL_ERROR(",
   "\t\t\"fatal flex scanner internal error--end of buffer missed\" );", "",
   "\tif ( yy_current_buffer->yy_fill_buffer == 0 )",
   "\t\t{ /* Don\'t try to fill the buffer, so this is an EOF. */",
   "\t\tif ( yy_c_buf_p - yytext_ptr - YY_MORE_ADJ == 1 )", "\t\t\t{",
   "\t\t\t/* We matched a single character, the EOB, so",
   "\t\t\t * treat this as a final EOF.", "\t\t\t */",
   "\t\t\treturn EOB_ACT_END_OF_FILE;", "\t\t\t}", "", "\t\telse", "\t\t\t{",
   "\t\t\t/* We matched some text prior to the EOB, first",
   "\t\t\t * process it.", "\t\t\t */", "\t\t\treturn EOB_ACT_LAST_MATCH;",
   "\t\t\t}", "\t\t}", "", "\t/* Try to read more data. */", "",
   "\t/* First move last chars to start of buffer. */",
   "\tnumber_to_move = (int) (yy_c_buf_p - yytext_ptr) - 1;", "",
   "\tfor ( i = 0; i < number_to_move; ++i )", "\t\t*(dest++) = *(source++);",
   "", "\tif ( yy_current_buffer->yy_buffer_status == YY_BUFFER_EOF_PENDING )",
   "\t\t/* don\'t do the read, it\'s not guaranteed to return an EOF,",
   "\t\t * just force an EOF", "\t\t */",
   "\t\tyy_current_buffer->yy_n_chars = yy_n_chars = 0;", "", "\telse", "\t\t{",
   "\t\tint num_to_read =",
   "\t\t\tyy_current_buffer->yy_buf_size - number_to_move - 1;", "",
   "\t\twhile ( num_to_read <= 0 )",
   "\t\t\t{ /* Not enough room in the buffer - grow it. */",
   "#ifdef YY_USES_REJECT", "\t\t\tYY_FATAL_ERROR(",
   "\"input buffer overflow, can\'t enlarge buffer because scanner uses REJECT\" );",
   "#else", "", "\t\t\t/* just a shorter name for the current buffer */",
   "\t\t\tYY_BUFFER_STATE b = yy_current_buffer;", "",
   "\t\t\tint yy_c_buf_p_offset =",
   "\t\t\t\t(int) (yy_c_buf_p - b->yy_ch_buf);", "",
   "\t\t\tif ( b->yy_is_our_buffer )", "\t\t\t\t{",
   "\t\t\t\tint new_size = b->yy_buf_size * 2;", "",
   "\t\t\t\tif ( new_size <= 0 )",
   "\t\t\t\t\tb->yy_buf_size += b->yy_buf_size / 8;", "\t\t\t\telse",
   "\t\t\t\t\tb->yy_buf_size *= 2;", "", "\t\t\t\tb->yy_ch_buf = (char *)",
   "\t\t\t\t\t/* Include room in for 2 EOB chars. */",
   "\t\t\t\t\tyy_flex_realloc( (void *) b->yy_ch_buf,",
   "\t\t\t\t\t\t\t b->yy_buf_size + 2 );", "\t\t\t\t}", "\t\t\telse",
   "\t\t\t\t/* Can\'t grow it, we don\'t own it. */",
   "\t\t\t\tb->yy_ch_buf = 0;", "", "\t\t\tif ( ! b->yy_ch_buf )",
   "\t\t\t\tYY_FATAL_ERROR(",
   "\t\t\t\t\"fatal error - scanner input buffer overflow\" );", "",
   "\t\t\tyy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];", "",
   "\t\t\tnum_to_read = yy_current_buffer->yy_buf_size -",
   "\t\t\t\t\t\tnumber_to_move - 1;", "#endif", "\t\t\t}", "",
   "\t\tif ( num_to_read > YY_READ_BUF_SIZE )",
   "\t\t\tnum_to_read = YY_READ_BUF_SIZE;", "", "\t\t/* Read in more data. */",
   "\t\tYY_INPUT( (&yy_current_buffer->yy_ch_buf[number_to_move]),",
   "\t\t\tyy_n_chars, num_to_read );", "",
   "\t\tyy_current_buffer->yy_n_chars = yy_n_chars;", "\t\t}", "",
   "\tif ( yy_n_chars == 0 )", "\t\t{",
   "\t\tif ( number_to_move == YY_MORE_ADJ )", "\t\t\t{",
   "\t\t\tret_val = EOB_ACT_END_OF_FILE;", "\t\t\tyyrestart( yyin );",
   "\t\t\t}", "", "\t\telse", "\t\t\t{", "\t\t\tret_val = EOB_ACT_LAST_MATCH;",
   "\t\t\tyy_current_buffer->yy_buffer_status =",
   "\t\t\t\tYY_BUFFER_EOF_PENDING;", "\t\t\t}", "\t\t}", "", "\telse",
   "\t\tret_val = EOB_ACT_CONTINUE_SCAN;", "",
   "\tyy_n_chars += number_to_move;",
   "\tyy_current_buffer->yy_ch_buf[yy_n_chars] = YY_END_OF_BUFFER_CHAR;",
   "\tyy_current_buffer->yy_ch_buf[yy_n_chars + 1] = YY_END_OF_BUFFER_CHAR;",
   "", "\tyytext_ptr = &yy_current_buffer->yy_ch_buf[0];", "",
   "\treturn ret_val;", "\t}", "", "",
   "/* yy_get_previous_state - get the state just before the EOB char was reached */",
   "", "%-", "static yy_state_type yy_get_previous_state()", "%+",
   "yy_state_type yyFlexLexer::yy_get_previous_state()", "%*", "\t{",
   "\tregister yy_state_type yy_current_state;", "\tregister char *yy_cp;", "",
   "%% code to get the start state into yy_current_state goes here", "",
   "\tfor ( yy_cp = yytext_ptr + YY_MORE_ADJ; yy_cp < yy_c_buf_p; ++yy_cp )",
   "\t\t{", "%% code to find the next state goes here", "\t\t}", "",
   "\treturn yy_current_state;", "\t}", "", "",
   "/* yy_try_NUL_trans - try to make a transition on the NUL character", " *",
   " * synopsis", " *\tnext_state = yy_try_NUL_trans( current_state );", " */",
   "", "%-", "#ifdef YY_USE_PROTOS",
   "static yy_state_type yy_try_NUL_trans( yy_state_type yy_current_state )",
   "#else", "static yy_state_type yy_try_NUL_trans( yy_current_state )",
   "yy_state_type yy_current_state;", "#endif", "%+",
   "yy_state_type yyFlexLexer::yy_try_NUL_trans( yy_state_type yy_current_state )",
   "%*", "\t{", "\tregister int yy_is_jam;",
   "%% code to find the next state, and perhaps do backing up, goes here", "",
   "\treturn yy_is_jam ? 0 : yy_current_state;", "\t}", "", "", "%-",
   "#ifndef YY_NO_UNPUT", "#ifdef YY_USE_PROTOS",
   "static void yyunput( int c, register char *yy_bp )", "#else",
   "static void yyunput( c, yy_bp )", "int c;", "register char *yy_bp;",
   "#endif", "%+", "void yyFlexLexer::yyunput( int c, register char* yy_bp )",
   "%*", "\t{", "\tregister char *yy_cp = yy_c_buf_p;", "",
   "\t/* undo effects of setting up yytext */", "\t*yy_cp = yy_hold_char;", "",
   "\tif ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )",
   "\t\t{ /* need to shift things up to make room */",
   "\t\t/* +2 for EOB chars. */",
   "\t\tregister int number_to_move = yy_n_chars + 2;",
   "\t\tregister char *dest = &yy_current_buffer->yy_ch_buf[",
   "\t\t\t\t\tyy_current_buffer->yy_buf_size + 2];",
   "\t\tregister char *source =",
   "\t\t\t\t&yy_current_buffer->yy_ch_buf[number_to_move];", "",
   "\t\twhile ( source > yy_current_buffer->yy_ch_buf )",
   "\t\t\t*--dest = *--source;", "", "\t\tyy_cp += (int) (dest - source);",
   "\t\tyy_bp += (int) (dest - source);", "\t\tyy_current_buffer->yy_n_chars =",
   "\t\t\tyy_n_chars = yy_current_buffer->yy_buf_size;", "",
   "\t\tif ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )",
   "\t\t\tYY_FATAL_ERROR( \"flex scanner push-back overflow\" );", "\t\t}", "",
   "\t*--yy_cp = (char) c;", "", "%% update yylineno here", "",
   "\tyytext_ptr = yy_bp;", "\tyy_hold_char = *yy_cp;", "\tyy_c_buf_p = yy_cp;",
   "\t}", "%-", "#endif\t/* ifndef YY_NO_UNPUT */", "%*", "", "", "%-",
   "#ifdef __cplusplus", "static int yyinput()", "#else", "static int input()",
   "#endif", "%+", "int yyFlexLexer::yyinput()", "%*", "\t{", "\tint c;", "",
   "\t*yy_c_buf_p = yy_hold_char;", "",
   "\tif ( *yy_c_buf_p == YY_END_OF_BUFFER_CHAR )", "\t\t{",
   "\t\t/* yy_c_buf_p now points to the character we want to return.",
   "\t\t * If this occurs *before* the EOB characters, then it\'s a",
   "\t\t * valid NUL; if not, then we\'ve hit the end of the buffer.",
   "\t\t */",
   "\t\tif ( yy_c_buf_p < &yy_current_buffer->yy_ch_buf[yy_n_chars] )",
   "\t\t\t/* This was really a NUL. */", "\t\t\t*yy_c_buf_p = \'\\0\';", "",
   "\t\telse", "\t\t\t{ /* need more input */",
   "\t\t\tint offset = yy_c_buf_p - yytext_ptr;", "\t\t\t++yy_c_buf_p;", "",
   "\t\t\tswitch ( yy_get_next_buffer() )", "\t\t\t\t{",
   "\t\t\t\tcase EOB_ACT_LAST_MATCH:",
   "\t\t\t\t\t/* This happens because yy_g_n_b()",
   "\t\t\t\t\t * sees that we\'ve accumulated a",
   "\t\t\t\t\t * token and flags that we need to",
   "\t\t\t\t\t * try matching the token before",
   "\t\t\t\t\t * proceeding.  But for input(),",
   "\t\t\t\t\t * there\'s no matching to consider.",
   "\t\t\t\t\t * So convert the EOB_ACT_LAST_MATCH",
   "\t\t\t\t\t * to EOB_ACT_END_OF_FILE.", "\t\t\t\t\t */", "",
   "\t\t\t\t\t/* Reset buffer status. */", "\t\t\t\t\tyyrestart( yyin );", "",
   "\t\t\t\t\t/* fall through */", "", "\t\t\t\tcase EOB_ACT_END_OF_FILE:",
   "\t\t\t\t\t{", "\t\t\t\t\tif ( yywrap() )", "\t\t\t\t\t\treturn EOF;", "",
   "\t\t\t\t\tif ( ! yy_did_buffer_switch_on_eof )", "\t\t\t\t\t\tYY_NEW_FILE;",
   "#ifdef __cplusplus", "\t\t\t\t\treturn yyinput();", "#else",
   "\t\t\t\t\treturn input();", "#endif", "\t\t\t\t\t}", "",
   "\t\t\t\tcase EOB_ACT_CONTINUE_SCAN:",
   "\t\t\t\t\tyy_c_buf_p = yytext_ptr + offset;", "\t\t\t\t\tbreak;",
   "\t\t\t\t}", "\t\t\t}", "\t\t}", "",
   "\tc = *(unsigned char *) yy_c_buf_p;\t/* cast for 8-bit char\'s */",
   "\t*yy_c_buf_p = \'\\0\';\t/* preserve yytext */",
   "\tyy_hold_char = *++yy_c_buf_p;", "", "%% update BOL and yylineno", "",
   "\treturn c;", "\t}", "", "", "%-", "#ifdef YY_USE_PROTOS",
   "void yyrestart( FILE *input_file )", "#else",
   "void yyrestart( input_file )", "FILE *input_file;", "#endif", "%+",
   "void yyFlexLexer::yyrestart( istream* input_file )", "%*", "\t{",
   "\tif ( ! yy_current_buffer )",
   "\t\tyy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE );", "",
   "\tyy_init_buffer( yy_current_buffer, input_file );",
   "\tyy_load_buffer_state();", "\t}", "", "", "%-", "#ifdef YY_USE_PROTOS",
   "void yy_switch_to_buffer( YY_BUFFER_STATE new_buffer )", "#else",
   "void yy_switch_to_buffer( new_buffer )", "YY_BUFFER_STATE new_buffer;",
   "#endif", "%+",
   "void yyFlexLexer::yy_switch_to_buffer( YY_BUFFER_STATE new_buffer )", "%*",
   "\t{", "\tif ( yy_current_buffer == new_buffer )", "\t\treturn;", "",
   "\tif ( yy_current_buffer )", "\t\t{",
   "\t\t/* Flush out information for old buffer. */",
   "\t\t*yy_c_buf_p = yy_hold_char;",
   "\t\tyy_current_buffer->yy_buf_pos = yy_c_buf_p;",
   "\t\tyy_current_buffer->yy_n_chars = yy_n_chars;", "\t\t}", "",
   "\tyy_current_buffer = new_buffer;", "\tyy_load_buffer_state();", "",
   "\t/* We don\'t actually know whether we did this switch during",
   "\t * EOF (yywrap()) processing, but the only time this flag",
   "\t * is looked at is after yywrap() is called, so it\'s safe",
   "\t * to go ahead and always set it.", "\t */",
   "\tyy_did_buffer_switch_on_eof = 1;", "\t}", "", "", "%-",
   "#ifdef YY_USE_PROTOS", "void yy_load_buffer_state( void )", "#else",
   "void yy_load_buffer_state()", "#endif", "%+",
   "void yyFlexLexer::yy_load_buffer_state()", "%*", "\t{",
   "\tyy_n_chars = yy_current_buffer->yy_n_chars;",
   "\tyytext_ptr = yy_c_buf_p = yy_current_buffer->yy_buf_pos;",
   "\tyyin = yy_current_buffer->yy_input_file;",
   "\tyy_hold_char = *yy_c_buf_p;", "\t}", "", "", "%-", "#ifdef YY_USE_PROTOS",
   "YY_BUFFER_STATE yy_create_buffer( FILE *file, int size )", "#else",
   "YY_BUFFER_STATE yy_create_buffer( file, size )", "FILE *file;", "int size;",
   "#endif", "%+",
   "YY_BUFFER_STATE yyFlexLexer::yy_create_buffer( istream* file, int size )",
   "%*", "\t{", "\tYY_BUFFER_STATE b;", "",
   "\tb = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );",
   "\tif ( ! b )",
   "\t\tYY_FATAL_ERROR( \"out of dynamic memory in yy_create_buffer()\" );", "",
   "\tb->yy_buf_size = size;", "",
   "\t/* yy_ch_buf has to be 2 characters longer than the size given because",
   "\t * we need to put in 2 end-of-buffer characters.", "\t */",
   "\tb->yy_ch_buf = (char *) yy_flex_alloc( b->yy_buf_size + 2 );",
   "\tif ( ! b->yy_ch_buf )",
   "\t\tYY_FATAL_ERROR( \"out of dynamic memory in yy_create_buffer()\" );", "",
   "\tb->yy_is_our_buffer = 1;", "", "\tyy_init_buffer( b, file );", "",
   "\treturn b;", "\t}", "", "", "%-", "#ifdef YY_USE_PROTOS",
   "void yy_delete_buffer( YY_BUFFER_STATE b )", "#else",
   "void yy_delete_buffer( b )", "YY_BUFFER_STATE b;", "#endif", "%+",
   "void yyFlexLexer::yy_delete_buffer( YY_BUFFER_STATE b )", "%*", "\t{",
   "\tif ( ! b )", "\t\treturn;", "", "\tif ( b == yy_current_buffer )",
   "\t\tyy_current_buffer = (YY_BUFFER_STATE) 0;", "",
   "\tif ( b->yy_is_our_buffer )", "\t\tyy_flex_free( (void *) b->yy_ch_buf );",
   "", "\tyy_flex_free( (void *) b );", "\t}", "", "", "%-",
   "#ifndef YY_ALWAYS_INTERACTIVE", "#ifndef YY_NEVER_INTERACTIVE",
   "extern int isatty YY_PROTO(( int ));", "#endif", "#endif", "",
   "#ifdef YY_USE_PROTOS",
   "void yy_init_buffer( YY_BUFFER_STATE b, FILE *file )", "#else",
   "void yy_init_buffer( b, file )", "YY_BUFFER_STATE b;", "FILE *file;",
   "#endif", "", "%+", "extern \"C\" int isatty YY_PROTO(( int ));",
   "void yyFlexLexer::yy_init_buffer( YY_BUFFER_STATE b, istream* file )", "%*",
   "", "\t{", "\tyy_flush_buffer( b );", "", "\tb->yy_input_file = file;",
   "\tb->yy_fill_buffer = 1;", "", "%-", "#if YY_ALWAYS_INTERACTIVE",
   "\tb->yy_is_interactive = 1;", "#else", "#if YY_NEVER_INTERACTIVE",
   "\tb->yy_is_interactive = 0;", "#else",
   "\tb->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;",
   "#endif", "#endif", "%+", "\tb->yy_is_interactive = 0;", "%*", "\t}", "", "",
   "%-", "#ifdef YY_USE_PROTOS", "void yy_flush_buffer( YY_BUFFER_STATE b )",
   "#else", "void yy_flush_buffer( b )", "YY_BUFFER_STATE b;", "#endif", "",
   "%+", "void yyFlexLexer::yy_flush_buffer( YY_BUFFER_STATE b )", "%*", "\t{",
   "\tif ( ! b )", "\t\treturn;", "", "\tb->yy_n_chars = 0;", "",
   "\t/* We always need two end-of-buffer characters.  The first causes",
   "\t * a transition to the end-of-buffer state.  The second causes",
   "\t * a jam in that state.", "\t */",
   "\tb->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;",
   "\tb->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;", "",
   "\tb->yy_buf_pos = &b->yy_ch_buf[0];", "", "\tb->yy_at_bol = 1;",
   "\tb->yy_buffer_status = YY_BUFFER_NEW;", "",
   "\tif ( b == yy_current_buffer )", "\t\tyy_load_buffer_state();", "\t}",
   "%*", "", "", "#ifndef YY_NO_SCAN_BUFFER", "%-", "#ifdef YY_USE_PROTOS",
   "YY_BUFFER_STATE yy_scan_buffer( char *base, yy_size_t size )", "#else",
   "YY_BUFFER_STATE yy_scan_buffer( base, size )", "char *base;",
   "yy_size_t size;", "#endif", "\t{", "\tYY_BUFFER_STATE b;", "",
   "\tif ( size < 2 ||", "\t     base[size-2] != YY_END_OF_BUFFER_CHAR ||",
   "\t     base[size-1] != YY_END_OF_BUFFER_CHAR )",
   "\t\t/* They forgot to leave room for the EOB\'s. */", "\t\treturn 0;", "",
   "\tb = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );",
   "\tif ( ! b )",
   "\t\tYY_FATAL_ERROR( \"out of dynamic memory in yy_scan_buffer()\" );", "",
   "\tb->yy_buf_size = size - 2;\t/* \"- 2\" to take care of EOB\'s */",
   "\tb->yy_buf_pos = b->yy_ch_buf = base;", "\tb->yy_is_our_buffer = 0;",
   "\tb->yy_input_file = 0;", "\tb->yy_n_chars = b->yy_buf_size;",
   "\tb->yy_is_interactive = 0;", "\tb->yy_at_bol = 1;",
   "\tb->yy_fill_buffer = 0;", "\tb->yy_buffer_status = YY_BUFFER_NEW;", "",
   "\tyy_switch_to_buffer( b );", "", "\treturn b;", "\t}", "%*", "#endif", "",
   "", "#ifndef YY_NO_SCAN_STRING", "%-", "#ifdef YY_USE_PROTOS",
   "YY_BUFFER_STATE yy_scan_string( yyconst char *yy_str )", "#else",
   "YY_BUFFER_STATE yy_scan_string( yy_str )", "yyconst char *yy_str;",
   "#endif", "\t{", "\tint len;", "\tfor ( len = 0; yy_str[len]; ++len )",
   "\t\t;", "", "\treturn yy_scan_bytes( yy_str, len );", "\t}", "%*", "#endif",
   "", "", "#ifndef YY_NO_SCAN_BYTES", "%-", "#ifdef YY_USE_PROTOS",
   "YY_BUFFER_STATE yy_scan_bytes( yyconst char *bytes, int len )", "#else",
   "YY_BUFFER_STATE yy_scan_bytes( bytes, len )", "yyconst char *bytes;",
   "int len;", "#endif", "\t{", "\tYY_BUFFER_STATE b;", "\tchar *buf;",
   "\tyy_size_t n;", "\tint i;", "",
   "\t/* Get memory for full buffer, including space for trailing EOB\'s. */",
   "\tn = len + 2;", "\tbuf = (char *) yy_flex_alloc( n );", "\tif ( ! buf )",
   "\t\tYY_FATAL_ERROR( \"out of dynamic memory in yy_scan_bytes()\" );", "",
   "\tfor ( i = 0; i < len; ++i )", "\t\tbuf[i] = bytes[i];", "",
   "\tbuf[len] = buf[len+1] = YY_END_OF_BUFFER_CHAR;", "",
   "\tb = yy_scan_buffer( buf, n );", "\tif ( ! b )",
   "\t\tYY_FATAL_ERROR( \"bad buffer in yy_scan_bytes()\" );", "",
   "\t/* It\'s okay to grow etc. this buffer, and we should throw it",
   "\t * away when we\'re done.", "\t */", "\tb->yy_is_our_buffer = 1;", "",
   "\treturn b;", "\t}", "%*", "#endif", "", "", "#ifndef YY_NO_PUSH_STATE",
   "%-", "#ifdef YY_USE_PROTOS", "static void yy_push_state( int new_state )",
   "#else", "static void yy_push_state( new_state )", "int new_state;",
   "#endif", "%+", "void yyFlexLexer::yy_push_state( int new_state )", "%*",
   "\t{", "\tif ( yy_start_stack_ptr >= yy_start_stack_depth )", "\t\t{",
   "\t\tyy_size_t new_size;", "",
   "\t\tyy_start_stack_depth += YY_START_STACK_INCR;",
   "\t\tnew_size = yy_start_stack_depth * sizeof( int );", "",
   "\t\tif ( ! yy_start_stack )",
   "\t\t\tyy_start_stack = (int *) yy_flex_alloc( new_size );", "", "\t\telse",
   "\t\t\tyy_start_stack = (int *) yy_flex_realloc(",
   "\t\t\t\t\t(void *) yy_start_stack, new_size );", "",
   "\t\tif ( ! yy_start_stack )", "\t\t\tYY_FATAL_ERROR(",
   "\t\t\t\"out of memory expanding start-condition stack\" );", "\t\t}", "",
   "\tyy_start_stack[yy_start_stack_ptr++] = YY_START;", "",
   "\tBEGIN(new_state);", "\t}", "#endif", "", "", "#ifndef YY_NO_POP_STATE",
   "%-", "static void yy_pop_state()", "%+", "void yyFlexLexer::yy_pop_state()",
   "%*", "\t{", "\tif ( --yy_start_stack_ptr < 0 )",
   "\t\tYY_FATAL_ERROR( \"start-condition stack underflow\" );", "",
   "\tBEGIN(yy_start_stack[yy_start_stack_ptr]);", "\t}", "#endif", "", "",
   "#ifndef YY_NO_TOP_STATE", "%-", "static int yy_top_state()", "%+",
   "int yyFlexLexer::yy_top_state()", "%*", "\t{",
   "\treturn yy_start_stack[yy_start_stack_ptr - 1];", "\t}", "#endif", "",
   "#ifndef YY_EXIT_FAILURE", "#define YY_EXIT_FAILURE 2", "#endif", "", "%-",
   "#ifdef YY_USE_PROTOS", "static void yy_fatal_error( yyconst char msg[] )",
   "#else", "static void yy_fatal_error( msg )", "char msg[];", "#endif", "\t{",
   "\t(void) fprintf( stderr, \"%s\\n\", msg );", "\texit( YY_EXIT_FAILURE );",
   "\t}", "", "%+", "", "void yyFlexLexer::LexerError( yyconst char msg[] )",
   "\t{", "\tcerr << msg << \'\\n\';", "\texit( YY_EXIT_FAILURE );", "\t}",
   "%*", "", "", "/* Redefine yyless() so it works in section 3 code. */", "",
   "#undef yyless", "#define yyless(n) \\", "\tdo \\", "\t\t{ \\",
   "\t\t/* Undo effects of setting up yytext. */ \\",
   "\t\tyytext[yyleng] = yy_hold_char; \\", "\t\tyy_c_buf_p = yytext + n; \\",
   "\t\tyy_hold_char = *yy_c_buf_p; \\", "\t\t*yy_c_buf_p = \'\\0\'; \\",
   "\t\tyyleng = n; \\", "\t\t} \\", "\twhile ( 0 )", "", "",
   "/* Internal utility routines. */", "", "#ifndef yytext_ptr",
   "#ifdef YY_USE_PROTOS",
   "static void yy_flex_strncpy( char *s1, yyconst char *s2, int n )", "#else",
   "static void yy_flex_strncpy( s1, s2, n )", "char *s1;", "yyconst char *s2;",
   "int n;", "#endif", "\t{", "\tregister int i;",
   "\tfor ( i = 0; i < n; ++i )", "\t\ts1[i] = s2[i];", "\t}", "#endif", "",
   "#ifdef YY_NEED_STRLEN", "#ifdef YY_USE_PROTOS",
   "static int yy_flex_strlen( yyconst char *s )", "#else",
   "static int yy_flex_strlen( s )", "yyconst char *s;", "#endif", "\t{",
   "\tregister int n;", "\tfor ( n = 0; s[n]; ++n )", "\t\t;", "",
   "\treturn n;", "\t}", "#endif", "", "", "#ifdef YY_USE_PROTOS",
   "static void *yy_flex_alloc( yy_size_t size )", "#else",
   "static void *yy_flex_alloc( size )", "yy_size_t size;", "#endif", "\t{",
   "\treturn (void *) malloc( size );", "\t}", "", "#ifdef YY_USE_PROTOS",
   "static void *yy_flex_realloc( void *ptr, yy_size_t size )", "#else",
   "static void *yy_flex_realloc( ptr, size )", "void *ptr;", "yy_size_t size;",
   "#endif", "\t{",
   "\t/* The cast to (char *) in the following accommodates both",
   "\t * implementations that use char* generic pointers, and those",
   "\t * that use void* generic pointers.  It works with the latter",
   "\t * because both ANSI C and C++ allow castless assignment from",
   "\t * any pointer type to void*, and deal with argument conversions",
   "\t * as though doing an assignment.", "\t */",
   "\treturn (void *) realloc( (char *) ptr, size );", "\t}", "",
   "#ifdef YY_USE_PROTOS", "static void yy_flex_free( void *ptr )", "#else",
   "static void yy_flex_free( ptr )", "void *ptr;", "#endif", "\t{",
   "\tfree( ptr );", "\t}", "", "#if YY_MAIN", "int main()", "\t{",
   "\tyylex();", "\treturn 0;", "\t}", "#endif", (char const   *)0};

struct hash_entry *ndtbl[101]  ;

struct hash_entry *sctbl[101]  ;

struct hash_entry *ccltab[101]  ;

int addsym(char *sym , char *str_def , int int_def , hash_table table ,
           int table_size ) ;

struct hash_entry *findsym(char *sym , hash_table table , int table_size ) ;

void scextend(void) ;

int hashfunct(char *str , int hash_size ) ;

int addsym(char *sym , char *str_def , int int_def , hash_table table ,
           int table_size ) 
{ int hash_val ;
  int tmp ;
  register struct hash_entry *sym_entry ;
  register struct hash_entry *new_entry ;
  register struct hash_entry *successor ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___5 ;
  int tmp___8 ;
  int tmp___9 ;
  void *tmp___10 ;

  {
  tmp = hashfunct(sym, table_size);
  hash_val = tmp;
  sym_entry = *(table + hash_val);
  while (sym_entry) {
    if (0) {
      __s1_len = strlen((char const   *)sym);
      __s2_len = strlen((char const   *)sym_entry->name);
      if (! ((unsigned int )((void const   *)(sym + 1)) - (unsigned int )((void const   *)sym) == 1U)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4U) {
          _L___0: 
          if (! ((unsigned int )((void const   *)(sym_entry->name + 1)) - (unsigned int )((void const   *)sym_entry->name) == 1U)) {
            tmp___9 = 1;
          } else {
            if (__s2_len >= 4U) {
              tmp___9 = 1;
            } else {
              tmp___9 = 0;
            }
          }
        } else {
          tmp___9 = 0;
        }
      }
      if (tmp___9) {
        tmp___5 = __builtin_strcmp((char const   *)sym,
                                   (char const   *)sym_entry->name);
      } else {
        tmp___8 = __builtin_strcmp((char const   *)sym,
                                   (char const   *)sym_entry->name);
        tmp___5 = tmp___8;
      }
    } else {
      tmp___8 = __builtin_strcmp((char const   *)sym,
                                 (char const   *)sym_entry->name);
      tmp___5 = tmp___8;
    }
    if (! tmp___5) {
      return (-1);
    }
    sym_entry = sym_entry->next;
  }
  tmp___10 = flex_alloc((unsigned int )sizeof(struct hash_entry ));
  new_entry = (struct hash_entry *)tmp___10;
  if ((unsigned int )new_entry == (unsigned int )((void *)0)) {
    flexfatal("symbol table memory allocation failed");
  }
  successor = *(table + hash_val);
  if ((unsigned int )successor != (unsigned int )((struct hash_entry *)0)) {
    new_entry->next = successor;
    successor->prev = new_entry;
  } else {
    new_entry->next = (struct hash_entry *)((void *)0);
  }
  new_entry->prev = (struct hash_entry *)((void *)0);
  new_entry->name = sym;
  new_entry->str_val = str_def;
  new_entry->int_val = int_def;
  *(table + hash_val) = new_entry;
  return (0);
}
}

void cclinstal(unsigned char *ccltxt , int cclnum ) 
{ unsigned char *tmp ;

  {
  tmp = copy_unsigned_string(ccltxt);
  addsym((char *)tmp, (char *)0, cclnum, ccltab, 101);
  return;
}
}

int ccllookup(unsigned char *ccltxt ) 
{ struct hash_entry *tmp ;

  {
  tmp = findsym((char *)ccltxt, ccltab, 101);
  return (tmp->int_val);
}
}

static struct hash_entry empty_entry   = {(struct hash_entry *)0,
                                          (struct hash_entry *)0, (char *)0,
                                          (char *)0, 0};

struct hash_entry *findsym(char *sym , hash_table table , int table_size ) 
{ register struct hash_entry *sym_entry ;
  int tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___5 ;
  int tmp___8 ;
  int tmp___9 ;

  {
  tmp = hashfunct(sym, table_size);
  sym_entry = *(table + tmp);
  while (sym_entry) {
    if (0) {
      __s1_len = strlen((char const   *)sym);
      __s2_len = strlen((char const   *)sym_entry->name);
      if (! ((unsigned int )((void const   *)(sym + 1)) - (unsigned int )((void const   *)sym) == 1U)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4U) {
          _L___0: 
          if (! ((unsigned int )((void const   *)(sym_entry->name + 1)) - (unsigned int )((void const   *)sym_entry->name) == 1U)) {
            tmp___9 = 1;
          } else {
            if (__s2_len >= 4U) {
              tmp___9 = 1;
            } else {
              tmp___9 = 0;
            }
          }
        } else {
          tmp___9 = 0;
        }
      }
      if (tmp___9) {
        tmp___5 = __builtin_strcmp((char const   *)sym,
                                   (char const   *)sym_entry->name);
      } else {
        tmp___8 = __builtin_strcmp((char const   *)sym,
                                   (char const   *)sym_entry->name);
        tmp___5 = tmp___8;
      }
    } else {
      tmp___8 = __builtin_strcmp((char const   *)sym,
                                 (char const   *)sym_entry->name);
      tmp___5 = tmp___8;
    }
    if (! tmp___5) {
      return (sym_entry);
    }
    sym_entry = sym_entry->next;
  }
  return (& empty_entry);
}
}

int hashfunct(char *str , int hash_size ) 
{ register int hashval ;
  register int locstr ;
  int tmp ;

  {
  hashval = 0;
  locstr = 0;
  while (*(str + locstr)) {
    tmp = locstr;
    locstr ++;
    hashval = (hashval << 1) + (int )((unsigned char )*(str + tmp));
    hashval %= hash_size;
  }
  return (hashval);
}
}

void ndinstal(char *name , unsigned char *definition ) 
{ unsigned char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  tmp = copy_unsigned_string(definition);
  tmp___0 = copy_string((char const   *)name);
  tmp___1 = addsym(tmp___0, (char *)tmp, 0, ndtbl, 101);
  if (tmp___1) {
    synerr((char *)"name defined twice");
  }
  return;
}
}

unsigned char *ndlookup(char *nd ) 
{ struct hash_entry *tmp ;

  {
  tmp = findsym(nd, ndtbl, 101);
  return ((unsigned char *)tmp->str_val);
}
}

void scextend(void) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;

  {
  current_max_scs += 40;
  num_reallocs ++;
  tmp = reallocate_array((void *)scset, current_max_scs,
                         (unsigned int )sizeof(int ));
  scset = (int *)tmp;
  tmp___0 = reallocate_array((void *)scbol, current_max_scs,
                             (unsigned int )sizeof(int ));
  scbol = (int *)tmp___0;
  tmp___1 = reallocate_array((void *)scxclu, current_max_scs,
                             (unsigned int )sizeof(int ));
  scxclu = (int *)tmp___1;
  tmp___2 = reallocate_array((void *)sceof, current_max_scs,
                             (unsigned int )sizeof(int ));
  sceof = (int *)tmp___2;
  tmp___3 = reallocate_array((void *)scname, current_max_scs,
                             (unsigned int )sizeof(char *));
  scname = (char **)tmp___3;
  return;
}
}

void scinstal(char *str , int xcluflg___0 ) 
{ int tmp ;

  {
  action_define(str, lastsc);
  lastsc ++;
  if (lastsc >= current_max_scs) {
    scextend();
  }
  *(scname + lastsc) = copy_string((char const   *)str);
  tmp = addsym(*(scname + lastsc), (char *)0, lastsc, sctbl, 101);
  if (tmp) {
    format_pinpoint_message((char *)"start condition %s declared twice", str);
  }
  *(scset + lastsc) = mkstate(257);
  *(scbol + lastsc) = mkstate(257);
  *(scxclu + lastsc) = xcluflg___0;
  *(sceof + lastsc) = 0;
  return;
}
}

int sclookup(char *str ) 
{ struct hash_entry *tmp ;

  {
  tmp = findsym(str, sctbl, 101);
  return (tmp->int_val);
}
}

int find_table_space(int *state , int numtrans ) ;

void mkentry(int *state , int numchars , int statenum , int deflink ,
             int totaltrans ) ;

void mkprot(int *state , int statenum , int comstate ) ;

void mktemplate(int *state , int statenum , int comstate ) ;

void mv2front(int qelm ) ;

int tbldiff(int *state , int pr , int *ext ) ;

void bldtbl(int *state , int statenum , int totaltrans , int comstate ,
            int comfreq ) 
{ int extptr ;
  int extrct[2][257] ;
  int mindiff ;
  int minprot ;
  int i___0 ;
  int d ;
  int checkcom ;

  {
  extptr = 0;
  if (totaltrans * 100 < numecs * 15) {
    mkentry(state, numecs, statenum, -32766, totaltrans);
  } else {
    checkcom = comfreq * 100 > totaltrans * 50;
    minprot = firstprot;
    mindiff = totaltrans;
    if (checkcom) {
      i___0 = firstprot;
      while (i___0 != 0) {
        if (protcomst[i___0] == comstate) {
          minprot = i___0;
          mindiff = tbldiff(state, minprot, extrct[extptr]);
          break;
        }
        i___0 = protnext[i___0];
      }
    } else {
      comstate = 0;
      if (firstprot != 0) {
        minprot = firstprot;
        mindiff = tbldiff(state, minprot, extrct[extptr]);
      }
    }
    if (mindiff * 100 > totaltrans * 10) {
      i___0 = minprot;
      while (i___0 != 0) {
        d = tbldiff(state, i___0, extrct[1 - extptr]);
        if (d < mindiff) {
          extptr = 1 - extptr;
          mindiff = d;
          minprot = i___0;
        }
        i___0 = protnext[i___0];
      }
    }
    if (mindiff * 100 > totaltrans * 50) {
      if (comfreq * 100 >= totaltrans * 60) {
        mktemplate(state, statenum, comstate);
      } else {
        mkprot(state, statenum, comstate);
        mkentry(state, numecs, statenum, -32766, totaltrans);
      }
    } else {
      mkentry(extrct[extptr], numecs, statenum, prottbl[minprot], mindiff);
      if (mindiff * 100 >= totaltrans * 20) {
        mkprot(state, statenum, comstate);
      }
      mv2front(minprot);
    }
  }
  return;
}
}

void cmptmps(void) 
{ int tmpstorage[257] ;
  register int *tmp ;
  register int i___0 ;
  register int j ;
  int totaltrans ;
  int trans ;

  {
  tmp = tmpstorage;
  peakpairs = numtemps * numecs + tblend;
  if (usemecs) {
    nummecs = cre8ecs(tecfwd, tecbck, numecs);
  } else {
    nummecs = numecs;
  }
  while ((lastdfa + numtemps) + 1 >= current_max_dfas) {
    increase_max_dfas();
  }
  i___0 = 1;
  while (i___0 <= numtemps) {
    totaltrans = 0;
    j = 1;
    while (j <= numecs) {
      trans = *(tnxt + (numecs * i___0 + j));
      if (usemecs) {
        if (tecbck[j] > 0) {
          *(tmp + tecbck[j]) = trans;
          if (trans > 0) {
            totaltrans ++;
          }
        }
      } else {
        *(tmp + j) = trans;
        if (trans > 0) {
          totaltrans ++;
        }
      }
      j ++;
    }
    mkentry(tmp, nummecs, (lastdfa + i___0) + 1, -32766, totaltrans);
    i___0 ++;
  }
  return;
}
}

void expand_nxt_chk(void) 
{ register int old_max ;
  void *tmp ;
  void *tmp___0 ;

  {
  old_max = current_max_xpairs;
  current_max_xpairs += 2000;
  num_reallocs ++;
  tmp = reallocate_array((void *)nxt, current_max_xpairs,
                         (unsigned int )sizeof(int ));
  nxt = (int *)tmp;
  tmp___0 = reallocate_array((void *)chk, current_max_xpairs,
                             (unsigned int )sizeof(int ));
  chk = (int *)tmp___0;
  zero_out((char *)(chk + old_max), (unsigned int )(2000UL * sizeof(int )));
  return;
}
}

int find_table_space(int *state , int numtrans ) 
{ register int i___0 ;
  register int *state_ptr ;
  register int *chk_ptr ;
  register int *ptr_to_last_entry_in_state ;
  int *tmp ;

  {
  if (numtrans > 4) {
    if (tblend < 2) {
      return (1);
    }
    i___0 = tblend - numecs;
  } else {
    i___0 = firstfree;
  }
  while (1) {
    while (i___0 + numecs >= current_max_xpairs) {
      expand_nxt_chk();
    }
    while (1) {
      if (*(chk + (i___0 - 1)) == 0) {
        if (*(chk + i___0) == 0) {
          break;
        } else {
          i___0 += 2;
        }
      } else {
        i___0 ++;
      }
      while (i___0 + numecs >= current_max_xpairs) {
        expand_nxt_chk();
      }
    }
    if (numtrans <= 4) {
      firstfree = i___0 + 1;
    }
    state_ptr = state + 1;
    ptr_to_last_entry_in_state = chk + ((i___0 + numecs) + 1);
    chk_ptr = chk + (i___0 + 1);
    while ((unsigned int )chk_ptr != (unsigned int )ptr_to_last_entry_in_state) {
      tmp = state_ptr;
      state_ptr ++;
      if (*tmp != 0) {
        if (*chk_ptr != 0) {
          break;
        }
      }
      chk_ptr ++;
    }
    if ((unsigned int )chk_ptr == (unsigned int )ptr_to_last_entry_in_state) {
      return (i___0);
    } else {
      i___0 ++;
    }
  }
}
}

void inittbl(void) 
{ register int i___0 ;

  {
  zero_out((char *)chk,
           (unsigned int )((unsigned long )((unsigned int )current_max_xpairs) * sizeof(int )));
  tblend = 0;
  firstfree = tblend + 1;
  numtemps = 0;
  if (usemecs) {
    tecbck[1] = 0;
    i___0 = 2;
    while (i___0 <= numecs) {
      tecbck[i___0] = i___0 - 1;
      tecfwd[i___0 - 1] = i___0;
      i___0 ++;
    }
    tecfwd[numecs] = 0;
  }
  return;
}
}

void mkdeftbl(void) 
{ int i___0 ;

  {
  jamstate = lastdfa + 1;
  tblend ++;
  while (tblend + numecs >= current_max_xpairs) {
    expand_nxt_chk();
  }
  *(nxt + tblend) = end_of_buffer_state;
  *(chk + tblend) = jamstate;
  i___0 = 1;
  while (i___0 <= numecs) {
    *(nxt + (tblend + i___0)) = 0;
    *(chk + (tblend + i___0)) = jamstate;
    i___0 ++;
  }
  jambase = tblend;
  *(base + jamstate) = jambase;
  *(def + jamstate) = 0;
  tblend += numecs;
  numtemps ++;
  return;
}
}

void mkentry(int *state , int numchars , int statenum , int deflink ,
             int totaltrans ) 
{ register int minec ;
  register int maxec ;
  register int i___0 ;
  register int baseaddr ;
  int tblbase ;
  int tbllast ;

  {
  if (totaltrans == 0) {
    if (deflink == -32766) {
      *(base + statenum) = -32766;
    } else {
      *(base + statenum) = 0;
    }
    *(def + statenum) = deflink;
    return;
  }
  minec = 1;
  while (minec <= numchars) {
    if (*(state + minec) != -1) {
      if (*(state + minec) != 0) {
        break;
      } else {
        if (deflink != -32766) {
          break;
        }
      }
    }
    minec ++;
  }
  if (totaltrans == 1) {
    stack1(statenum, minec, *(state + minec), deflink);
    return;
  }
  maxec = numchars;
  while (maxec > 0) {
    if (*(state + maxec) != -1) {
      if (*(state + maxec) != 0) {
        break;
      } else {
        if (deflink != -32766) {
          break;
        }
      }
    }
    maxec --;
  }
  if (totaltrans * 100 <= numchars * 15) {
    baseaddr = firstfree;
    while (baseaddr < minec) {
      baseaddr ++;
      while (*(chk + baseaddr) != 0) {
        baseaddr ++;
      }
    }
    while (((baseaddr + maxec) - minec) + 1 >= current_max_xpairs) {
      expand_nxt_chk();
    }
    i___0 = minec;
    while (i___0 <= maxec) {
      if (*(state + i___0) != -1) {
        if (*(state + i___0) != 0) {
          goto _L;
        } else {
          if (deflink != -32766) {
            _L: 
            if (*(chk + ((baseaddr + i___0) - minec)) != 0) {
              baseaddr ++;
              while (1) {
                if (baseaddr < current_max_xpairs) {
                  if (! (*(chk + baseaddr) != 0)) {
                    break;
                  }
                } else {
                  break;
                }
                baseaddr ++;
              }
              while (((baseaddr + maxec) - minec) + 1 >= current_max_xpairs) {
                expand_nxt_chk();
              }
              i___0 = minec - 1;
            }
          }
        }
      }
      i___0 ++;
    }
  } else {
    if (tblend + 1 > minec) {
      baseaddr = tblend + 1;
    } else {
      baseaddr = minec;
    }
  }
  tblbase = baseaddr - minec;
  tbllast = tblbase + maxec;
  while (tbllast + 1 >= current_max_xpairs) {
    expand_nxt_chk();
  }
  *(base + statenum) = tblbase;
  *(def + statenum) = deflink;
  i___0 = minec;
  while (i___0 <= maxec) {
    if (*(state + i___0) != -1) {
      if (*(state + i___0) != 0) {
        *(nxt + (tblbase + i___0)) = *(state + i___0);
        *(chk + (tblbase + i___0)) = statenum;
      } else {
        if (deflink != -32766) {
          *(nxt + (tblbase + i___0)) = *(state + i___0);
          *(chk + (tblbase + i___0)) = statenum;
        }
      }
    }
    i___0 ++;
  }
  if (baseaddr == firstfree) {
    firstfree ++;
    while (*(chk + firstfree) != 0) {
      firstfree ++;
    }
  }
  if (tblend > tbllast) {
    tblend = tblend;
  } else {
    tblend = tbllast;
  }
  return;
}
}

void mk1tbl(int state , int sym , int onenxt , int onedef___0 ) 
{ int tmp ;

  {
  if (firstfree < sym) {
    firstfree = sym;
  }
  while (*(chk + firstfree) != 0) {
    firstfree ++;
    if (firstfree >= current_max_xpairs) {
      expand_nxt_chk();
    }
  }
  *(base + state) = firstfree - sym;
  *(def + state) = onedef___0;
  *(chk + firstfree) = state;
  *(nxt + firstfree) = onenxt;
  if (firstfree > tblend) {
    tmp = firstfree;
    firstfree ++;
    tblend = tmp;
    if (firstfree >= current_max_xpairs) {
      expand_nxt_chk();
    }
  }
  return;
}
}

void mkprot(int *state , int statenum , int comstate ) 
{ int i___0 ;
  int slot ;
  int tblbase ;

  {
  numprots ++;
  if (numprots >= 50) {
    slot = lastprot;
    lastprot = protprev[lastprot];
    protnext[lastprot] = 0;
  } else {
    if (numecs * numprots >= 2000) {
      slot = lastprot;
      lastprot = protprev[lastprot];
      protnext[lastprot] = 0;
    } else {
      slot = numprots;
    }
  }
  protnext[slot] = firstprot;
  if (firstprot != 0) {
    protprev[firstprot] = slot;
  }
  firstprot = slot;
  prottbl[slot] = statenum;
  protcomst[slot] = comstate;
  tblbase = numecs * (slot - 1);
  i___0 = 1;
  while (i___0 <= numecs) {
    protsave[tblbase + i___0] = *(state + i___0);
    i___0 ++;
  }
  return;
}
}

void mktemplate(int *state , int statenum , int comstate ) 
{ int i___0 ;
  int numdiff ;
  int tmpbase ;
  int tmp[257] ;
  unsigned char transset[257] ;
  int tsptr ;
  void *tmp___0 ;
  int tmp___1 ;

  {
  numtemps ++;
  tsptr = 0;
  tmpbase = numtemps * numecs;
  if (tmpbase + numecs >= current_max_template_xpairs) {
    current_max_template_xpairs += 2500;
    num_reallocs ++;
    tmp___0 = reallocate_array((void *)tnxt, current_max_template_xpairs,
                               (unsigned int )sizeof(int ));
    tnxt = (int *)tmp___0;
  }
  i___0 = 1;
  while (i___0 <= numecs) {
    if (*(state + i___0) == 0) {
      *(tnxt + (tmpbase + i___0)) = 0;
    } else {
      tmp___1 = tsptr;
      tsptr ++;
      transset[tmp___1] = (unsigned char )i___0;
      *(tnxt + (tmpbase + i___0)) = comstate;
    }
    i___0 ++;
  }
  if (usemecs) {
    mkeccl(transset, tsptr, tecfwd, tecbck, numecs, 0);
  }
  mkprot(tnxt + tmpbase, - numtemps, comstate);
  numdiff = tbldiff(state, firstprot, tmp);
  mkentry(tmp, numecs, statenum, - numtemps, numdiff);
  return;
}
}

void mv2front(int qelm ) 
{ 

  {
  if (firstprot != qelm) {
    if (qelm == lastprot) {
      lastprot = protprev[lastprot];
    }
    protnext[protprev[qelm]] = protnext[qelm];
    if (protnext[qelm] != 0) {
      protprev[protnext[qelm]] = protprev[qelm];
    }
    protprev[qelm] = 0;
    protnext[qelm] = firstprot;
    protprev[firstprot] = qelm;
    firstprot = qelm;
  }
  return;
}
}

void place_state(int *state , int statenum , int transnum ) 
{ register int i___0 ;
  register int *state_ptr ;
  int position ;
  int tmp ;

  {
  tmp = find_table_space(state, transnum);
  position = tmp;
  *(base + statenum) = position;
  *(chk + (position - 1)) = 1;
  *(chk + position) = 1;
  state_ptr = state + 1;
  i___0 = 1;
  while (i___0 <= numecs) {
    if (*state_ptr != 0) {
      *(chk + (position + i___0)) = i___0;
      *(nxt + (position + i___0)) = *state_ptr;
    }
    i___0 ++;
    state_ptr ++;
  }
  if (position + numecs > tblend) {
    tblend = position + numecs;
  }
  return;
}
}

void stack1(int statenum , int sym , int nextstate , int deflink ) 
{ 

  {
  if (onesp >= 499) {
    mk1tbl(statenum, sym, nextstate, deflink);
  } else {
    onesp ++;
    onestate[onesp] = statenum;
    onesym[onesp] = sym;
    onenext[onesp] = nextstate;
    onedef[onesp] = deflink;
  }
  return;
}
}

int tbldiff(int *state , int pr , int *ext ) 
{ register int i___0 ;
  register int *sp ;
  register int *ep ;
  register int *protp ;
  register int numdiff ;

  {
  sp = state;
  ep = ext;
  numdiff = 0;
  protp = & protsave[numecs * (pr - 1)];
  i___0 = numecs;
  while (i___0 > 0) {
    protp ++;
    sp ++;
    if (*protp == *sp) {
      ep ++;
      *ep = -1;
    } else {
      ep ++;
      *ep = *sp;
      numdiff ++;
    }
    i___0 --;
  }
  return (numdiff);
}
}

static int beglin   = 0;

int yylex(void) 
{ int toktype ;
  unsigned short const   **tmp ;

  {
  if (eofseen) {
    toktype = -1;
  } else {
    toktype = flexscan();
  }
  if (toktype == -1) {
    goto _L;
  } else {
    if (toktype == 0) {
      _L: 
      eofseen = 1;
      if (sectnum == 1) {
        synerr((char *)"premature EOF");
        sectnum = 2;
        toktype = 260;
      } else {
        toktype = 0;
      }
    }
  }
  if (trace) {
    if (beglin) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%d\t", num_rules + 1);
      beglin = 0;
    }
    switch (toktype) {
    case 60: 
    case 62: 
    case 94: 
    case 36: 
    case 34: 
    case 91: 
    case 93: 
    case 123: 
    case 125: 
    case 124: 
    case 40: 
    case 41: 
    case 45: 
    case 47: 
    case 92: 
    case 63: 
    case 46: 
    case 42: 
    case 43: 
    case 44: 
    _IO_putc(toktype, stderr);
    break;
    case 10: 
    _IO_putc('\n', stderr);
    if (sectnum == 2) {
      beglin = 1;
    }
    break;
    case 261: 
    fputs((char const   */* __restrict  */)"%s", (FILE */* __restrict  */)stderr);
    break;
    case 262: 
    fputs((char const   */* __restrict  */)"%x", (FILE */* __restrict  */)stderr);
    break;
    case 260: 
    fputs((char const   */* __restrict  */)"%%\n",
          (FILE */* __restrict  */)stderr);
    if (sectnum == 2) {
      beglin = 1;
    }
    break;
    case 263: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"\'%s\'", nmstr);
    break;
    case 258: 
    switch (yylval) {
    case 60: 
    case 62: 
    case 94: 
    case 36: 
    case 34: 
    case 91: 
    case 93: 
    case 123: 
    case 125: 
    case 124: 
    case 40: 
    case 41: 
    case 45: 
    case 47: 
    case 92: 
    case 63: 
    case 46: 
    case 42: 
    case 43: 
    case 44: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"\\%c", yylval);
    break;
    default: ;
    if (! ((yylval & -128) == 0)) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"\\%.3o", (unsigned int )yylval);
    } else {
      tmp = __ctype_b_loc();
      if ((int const   )*(*tmp + yylval) & 16384) {
        _IO_putc(yylval, stderr);
      } else {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"\\%.3o", (unsigned int )yylval);
      }
    }
    break;
    }
    break;
    case 259: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%d", yylval);
    break;
    case 264: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"[%d]", yylval);
    break;
    case 265: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"<<EOF>>");
    break;
    case 266: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s ", yytext);
    break;
    case 267: 
    case 268: 
    case 270: 
    case 271: 
    case 272: 
    case 273: 
    case 274: 
    case 275: 
    case 276: 
    case 277: 
    case 278: 
    case 279: 
    case 280: 
    case 281: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s", yytext);
    break;
    case 0: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"End Marker\n");
    break;
    default: 
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"*Something Weird* - tok: %d val: %d\n",
            toktype, yylval);
    break;
    }
  }
  return (toktype);
}
}

