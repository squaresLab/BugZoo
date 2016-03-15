struct _FBSTRING;
typedef struct _FBSTRING FBSTRING;
struct _IO_FILE;
struct _IO_FILE *_coverage_fout ;
typedef struct _IO_FILE FILE;
extern int fflush(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
struct FB_RTLIB_CTX_;
typedef struct FB_RTLIB_CTX_ FB_RTLIB_CTX;
extern FB_RTLIB_CTX __fb_ctx ;
struct _FB_FILE_HOOKS;
typedef struct _FB_FILE_HOOKS FB_FILE_HOOKS;
typedef unsigned int size_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef __off64_t off_t;
typedef off_t fb_off_t;
enum _FB_FILE_ENCOD {
    FB_FILE_ENCOD_ASCII = 0,
    FB_FILE_ENCOD_UTF8 = 1,
    FB_FILE_ENCOD_UTF16 = 2,
    FB_FILE_ENCOD_UTF32 = 3
} ;
typedef enum _FB_FILE_ENCOD FB_FILE_ENCOD;
struct _FB_FILE {
   int mode ;
   int len ;
   FB_FILE_ENCOD encod ;
   fb_off_t size ;
   int type ;
   int access ;
   int lock ;
   unsigned int line_length ;
   unsigned int width ;
   char putback_buffer[4] ;
   size_t putback_size ;
   FB_FILE_HOOKS *hooks ;
   void *opaque ;
   struct _FB_FILE *redirection_to ;
};
typedef struct _FB_FILE FB_FILE;
typedef unsigned int pthread_key_t;
typedef long wchar_t;
struct FB_HOOKSTB {
   FBSTRING *(*inkeyproc)(void) ;
   int (*getkeyproc)(void) ;
   int (*keyhitproc)(void) ;
   void (*clsproc)(int mode ) ;
   int (*colorproc)(int fc , int bc , int flags ) ;
   int (*locateproc)(int row , int col , int cursor ) ;
   int (*widthproc)(int cols , int rows ) ;
   int (*getxproc)(void) ;
   int (*getyproc)(void) ;
   void (*getxyproc)(int *col , int *row ) ;
   void (*getsizeproc)(int *cols , int *rows ) ;
   void (*printbuffproc)(void const   *buffer , size_t len , int mask ) ;
   void (*printbuffwproc)(wchar_t const   *buffer , size_t len , int mask ) ;
   char *(*readstrproc)(char *buffer , int len ) ;
   int (*multikeyproc)(int scancode ) ;
   int (*getmouseproc)(int *x , int *y , int *z , int *buttons_ , int *clip ) ;
   int (*setmouseproc)(int x , int y , int cursor , int clip ) ;
   int (*inproc)(unsigned short port ) ;
   int (*outproc)(unsigned short port , unsigned char value ) ;
   void (*viewupdateproc)(void) ;
   int (*lineinputproc)(FBSTRING *text , void *dst , int dst_len , int fillrem ,
                        int addquestion , int addnewline ) ;
   int (*lineinputwproc)(wchar_t const   *text , wchar_t *dst , int max_chars ,
                         int addquestion , int addnewline ) ;
   unsigned int (*readxyproc)(int col , int row , int colorflag ) ;
   void (*sleepproc)(int msecs ) ;
   int (*isredirproc)(int is_input ) ;
   int (*pagecopyproc)(int src , int dst ) ;
   int (*pagesetproc)(int active , int visible ) ;
};
typedef struct FB_HOOKSTB FB_HOOKSTB;
struct _FB_FILE;
typedef int (*FnFileOpen)(struct _FB_FILE *handle , char const   *filename ,
                          size_t filename_len );
struct _FBSTRING {
   char *data ;
   int len ;
   int size ;
};
struct FB_RTLIB_CTX_ {
   int argc ;
   char **argv ;
   FBSTRING null_desc ;
   char *error_msg ;
   int (*pfnDevOpenHook)(FBSTRING *filename , unsigned int open_mode ,
                         unsigned int access_mode , unsigned int lock_mode ,
                         int rec_len , FnFileOpen *pfnFileOpen ) ;
   FB_HOOKSTB hooks ;
   pthread_key_t tls_ctxtb[5] ;
   FB_FILE fileTB[257] ;
   int do_file_reset ;
   int lang ;
};
__inline static void fb_hStrSetLength(FBSTRING *str , size_t size ) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
extern FBSTRING *fb_hStrAllocTemp(FBSTRING *str , int size ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
FBSTRING *fb_ULongintToStrQB(unsigned long long num ) 
{ FBSTRING *dst ;
  size_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "424\n");
  fflush(_coverage_fout);
  }
  dst = fb_hStrAllocTemp((FBSTRING *)((void *)0),
                         (int )(sizeof(long long ) * 3U));
  {
  fprintf(_coverage_fout, "425\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )dst != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "420\n");
    fflush(_coverage_fout);
    }
    sprintf((char */* __restrict  */)dst->data,
            (char const   */* __restrict  */)"%llu", num);
    {
    fprintf(_coverage_fout, "421\n");
    fflush(_coverage_fout);
    }
    tmp = strlen((char const   *)dst->data);
    {
    fprintf(_coverage_fout, "422\n");
    fflush(_coverage_fout);
    }
    fb_hStrSetLength(dst, tmp);
  } else {
    {
    fprintf(_coverage_fout, "423\n");
    fflush(_coverage_fout);
    }
    dst = & __fb_ctx.null_desc;
  }
  {
  fprintf(_coverage_fout, "426\n");
  fflush(_coverage_fout);
  }
  return (dst);
}
}
FBSTRING *fb_ULongintToStrQB(unsigned long long num ) ;
FBSTRING *fb_LongintToStrQB(long long num ) 
{ FBSTRING *dst ;
  size_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "417\n");
  fflush(_coverage_fout);
  }
  dst = fb_hStrAllocTemp((FBSTRING *)((void *)0),
                         (int )(sizeof(long long ) * 3U));
  {
  fprintf(_coverage_fout, "418\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )dst != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "413\n");
    fflush(_coverage_fout);
    }
    sprintf((char */* __restrict  */)dst->data,
            (char const   */* __restrict  */)"% lld", num);
    {
    fprintf(_coverage_fout, "414\n");
    fflush(_coverage_fout);
    }
    tmp = strlen((char const   *)dst->data);
    {
    fprintf(_coverage_fout, "415\n");
    fflush(_coverage_fout);
    }
    fb_hStrSetLength(dst, tmp);
  } else {
    {
    fprintf(_coverage_fout, "416\n");
    fflush(_coverage_fout);
    }
    dst = & __fb_ctx.null_desc;
  }
  {
  fprintf(_coverage_fout, "419\n");
  fflush(_coverage_fout);
  }
  return (dst);
}
}
FBSTRING *fb_LongintToStrQB(long long num ) ;
extern int fb_PageSet(int active , int visible ) ;
extern int fb_PageCopy(int src , int dst ) ;
extern int fb_IsRedirected(int is_input ) ;
extern int fb_SleepEx(int msecs , int kind ) ;
extern void fb_Delay(int msecs ) ;
extern void fb_SleepQB(int secs ) ;
extern void fb_Sleep(int msecs ) ;
extern int fb_Out(unsigned short port , unsigned char value ) ;
extern int fb_In(unsigned short port ) ;
extern int fb_SetMouse(int x , int y , int cursor , int clip ) ;
extern int fb_GetMouse(int *x , int *y , int *z , int *buttons_ , int *clip ) ;
extern int fb_Multikey(int scancode ) ;
extern int fb_LineInputWstr(wchar_t const   *text , wchar_t *dst ,
                            int max_chars , int addquestion , int addnewline ) ;
extern int fb_LineInput(FBSTRING *text , void *dst , int dst_len , int fillrem ,
                        int addquestion , int addnewline ) ;
extern char *fb_ReadString(char *buffer , int len , FILE *f ) ;
extern unsigned int fb_ReadXY(int col , int row , int colorflag ) ;
extern void fb_GetSize(int *cols , int *rows ) ;
extern void fb_GetXY(int *col , int *row ) ;
extern int fb_GetY(void) ;
extern int fb_GetX(void) ;
extern int fb_Pos(int dummy ) ;
extern int fb_WidthFile(int fnum , int width ) ;
extern int fb_WidthDev(FBSTRING *dev , int width ) ;
extern int fb_Width(int cols , int rows ) ;
extern void fb_ViewUpdate(void) ;
extern int fb_LocateSub(int row , int col , int cursor ) ;
extern int fb_Locate(int row , int col , int cursor , int start , int stop ) ;
extern int fb_LocateEx(int row , int col , int cursor , int *current_pos ) ;
extern int fb_Color(int fc , int bc , int flags ) ;
extern void fb_Cls(int mode ) ;
extern int fb_KeyHit(void) ;
extern int fb_Getkey(void) ;
extern FBSTRING *fb_InkeyQB(void) ;
extern FBSTRING *fb_Inkey(void) ;
extern void fb_TlsFreeCtxTb(void) ;
extern void fb_TlsDelCtx(int index ) ;
extern void *fb_TlsGetCtx(int index , int len ) ;
struct _FBMUTEX;
struct _FBCOND;
extern void fb_CondWait(struct _FBCOND *cond , struct _FBMUTEX *mutex ) ;
extern void fb_CondBroadcast(struct _FBCOND *cond ) ;
extern void fb_CondSignal(struct _FBCOND *cond ) ;
extern void fb_CondDestroy(struct _FBCOND *cond ) ;
extern struct _FBCOND *fb_CondCreate(void) ;
extern void fb_MutexUnlock(struct _FBMUTEX *mutex ) ;
extern void fb_MutexLock(struct _FBMUTEX *mutex ) ;
extern void fb_MutexDestroy(struct _FBMUTEX *mutex ) ;
extern struct _FBMUTEX *fb_MutexCreate(void) ;
struct _FBTHREAD;
typedef struct _FBTHREAD FBTHREAD;
extern void fb_ThreadWait(FBTHREAD *thread ) ;
extern FBTHREAD *fb_ThreadCreate(void (*proc)(void *param ) , void *param ,
                                 int stack_size ) ;
extern FBSTRING *fb_DrvIntlGetWeekdayName(int weekday , int short_names ) ;
extern FBSTRING *fb_DrvIntlGetMonthName(int month , int short_name ) ;
extern int fb_DrvIntlGetTimeFormat(char *buffer , size_t len ) ;
extern int fb_DrvIntlGetDateFormat(char *buffer , size_t len ) ;
enum _eFbIntlIndex;
typedef enum _eFbIntlIndex eFbIntlIndex;
extern char const   *fb_DrvIntlGet(eFbIntlIndex index ) ;
extern FBSTRING *fb_IntlGetWeekdayName(int weekday , int short_names ,
                                       int disallow_localized ) ;
extern FBSTRING *fb_IntlGetMonthName(int month , int short_name ,
                                     int disallow_localized ) ;
extern int fb_IntlGetTimeFormat(char *buffer , size_t len ,
                                int disallow_localized ) ;
extern int fb_IntlGetDateFormat(char *buffer , size_t len ,
                                int disallow_localized ) ;
extern char const   *fb_IntlGet(eFbIntlIndex index , int disallow_localized ) ;
extern int fb_hTimeGetIntervalType(FBSTRING *interval ) ;
extern void fb_hNormalizeDate(int *pDay , int *pMonth , int *pYear ) ;
extern int fb_hTimeDaysInMonth(int month , int year ) ;
extern int fb_hGetWeeksOfYear(int ref_year , int first_day_of_year ,
                              int first_day_of_week ) ;
extern int fb_hGetWeekOfYear(int ref_year , double serial ,
                             int first_day_of_year , int first_day_of_week ) ;
extern int fb_hGetDayOfYearEx(int year , int month , int day ) ;
extern int fb_hGetDayOfYear(double serial ) ;
extern int fb_hTimeLeap(int year ) ;
extern int fb_I18nGet(void) ;
extern void fb_I18nSet(int on_off ) ;
extern int fb_DateTimeParse(FBSTRING *s , int *pDay , int *pMonth , int *pYear ,
                            int *pHour , int *pMinute , int *pSecond ,
                            int want_date , int want_time ) ;
extern void fb_hTimeDecodeSerial(double serial , int *pHour , int *pMinute ,
                                 int *pSecond , int use_qb_hack ) ;
extern int fb_TimeParse(FBSTRING *s , int *pHour , int *pMinute , int *pSecond ) ;
extern int fb_hTimeParse(char const   *text , size_t text_len , int *pHour ,
                         int *pMinute , int *pSecond , size_t *pLength ) ;
extern void fb_hDateDecodeSerial(double serial , int *pYear , int *pMonth ,
                                 int *pDay ) ;
extern int fb_DateParse(FBSTRING *s , int *pDay , int *pMonth , int *pYear ) ;
extern int fb_hDateParse(char const   *text , size_t text_len , int *pDay ,
                         int *pMonth , int *pYear , size_t *pLength ) ;
extern long long fb_DateDiff(FBSTRING *interval , double serial1 ,
                             double serial2 , int first_day_of_week ,
                             int first_day_of_year ) ;
extern int fb_DatePart(FBSTRING *interval , double serial ,
                       int first_day_of_week , int first_day_of_year ) ;
extern double fb_DateAdd(FBSTRING *interval , double interval_value_arg ,
                         double serial ) ;
extern FBSTRING *fb_WeekdayName(int weekday , int abbreviation ,
                                int first_day_of_week ) ;
extern FBSTRING *fb_MonthName(int month , int abbreviation ) ;
extern double fb_Now(void) ;
extern int fb_Second(double serial ) ;
extern int fb_Minute(double serial ) ;
extern int fb_Hour(double serial ) ;
extern double fb_TimeSerial(int hour , int minute , int second ) ;
extern double fb_TimeValue(FBSTRING *s ) ;
extern int fb_Weekday(double serial , int first_day_of_week ) ;
extern int fb_Day(double serial ) ;
extern int fb_Month(double serial ) ;
extern int fb_Year(double serial ) ;
extern int fb_DateSerial(int year , int month , int day ) ;
extern int fb_DateValue(FBSTRING *s ) ;
extern int fb_IsDate(FBSTRING *s ) ;
extern int fb_hSetDate(int y , int m , int d ) ;
extern int fb_hSetTime(int h , int m , int s ) ;
extern int fb_SetDate(FBSTRING *date ) ;
extern FBSTRING *fb_Date(void) ;
extern int fb_SetTime(FBSTRING *time ) ;
extern FBSTRING *fb_Time(void) ;
extern double fb_Timer(void) ;
struct _DEV_LPT_INFO;
extern int fb_PrinterClose(struct _DEV_LPT_INFO *devInfo ) ;
extern int fb_PrinterWriteWstr(struct _DEV_LPT_INFO *devInfo ,
                               wchar_t const   *data , size_t length ) ;
extern int fb_PrinterWrite(struct _DEV_LPT_INFO *devInfo , void const   *data ,
                           size_t length ) ;
extern int fb_PrinterOpen(struct _DEV_LPT_INFO *devInfo , int iPort ,
                          char const   *pszDevice ) ;
extern int fb_DevPrinterGetOffset(char const   *pszDevice ) ;
extern int fb_DevPrinterSetWidth(char const   *pszDevice , int width ,
                                 int default_width ) ;
extern int fb_DevLptClose(struct _FB_FILE *handle ) ;
extern int fb_DevLptWriteWstr(struct _FB_FILE *handle , wchar_t const   *value ,
                              size_t valuelen ) ;
extern int fb_DevLptWrite(struct _FB_FILE *handle , void const   *value ,
                          size_t valuelen ) ;
struct _DEV_LPT_PROTOCOL;
typedef struct _DEV_LPT_PROTOCOL DEV_LPT_PROTOCOL;
extern int fb_DevLptParseProtocol(DEV_LPT_PROTOCOL **lpt_proto_out ,
                                  char const   *proto_raw ,
                                  size_t proto_raw_len , int substprn ) ;
extern int fb_SerialClose(struct _FB_FILE *handle , void *pvHandle ) ;
extern int fb_SerialReadWstr(struct _FB_FILE *handle , void *pvHandle ,
                             wchar_t *data , size_t *pLength ) ;
extern int fb_SerialRead(struct _FB_FILE *handle , void *pvHandle , void *data ,
                         size_t *pLength ) ;
extern int fb_SerialWriteWstr(struct _FB_FILE *handle , void *pvHandle ,
                              wchar_t const   *data , size_t length ) ;
extern int fb_SerialWrite(struct _FB_FILE *handle , void *pvHandle ,
                          void const   *data , size_t length ) ;
extern int fb_SerialGetRemaining(struct _FB_FILE *handle , void *pvHandle ,
                                 fb_off_t *pLength ) ;
struct _FB_SERIAL_OPTIONS;
typedef struct _FB_SERIAL_OPTIONS FB_SERIAL_OPTIONS;
extern int fb_SerialOpen(struct _FB_FILE *handle , int iPort ,
                         FB_SERIAL_OPTIONS *options , char const   *pszDevice ,
                         void **ppvHandle ) ;
extern int fb_DevSerialSetWidth(char const   *pszDevice , int width ,
                                int default_width ) ;
extern int fb_DevComOpen(struct _FB_FILE *handle , char const   *filename ,
                         size_t filename_len ) ;
extern int fb_DevLptOpen(struct _FB_FILE *handle , char const   *filename ,
                         size_t filename_len ) ;
extern int fb_DevStdIoClose(struct _FB_FILE *handle ) ;
struct _DEV_SCRN_INFO;
typedef struct _DEV_SCRN_INFO DEV_SCRN_INFO;
extern void fb_DevScrnFillInput(DEV_SCRN_INFO *info ) ;
extern int fb_DevScrnReadLineWstr(struct _FB_FILE *handle , wchar_t *dst ,
                                  int dst_chars ) ;
extern int fb_DevScrnReadLine(struct _FB_FILE *handle , FBSTRING *dst ) ;
extern int fb_DevScrnWriteWstr(struct _FB_FILE *handle ,
                               wchar_t const   *value , size_t valuelen ) ;
extern int fb_DevScrnWrite(struct _FB_FILE *handle , void const   *value ,
                           size_t valuelen ) ;
extern int fb_DevScrnReadWstr(struct _FB_FILE *handle , wchar_t *dst ,
                              size_t *pchars ) ;
extern int fb_DevScrnRead(struct _FB_FILE *handle , void *value ,
                          size_t *pLength ) ;
extern int fb_DevScrnEof(struct _FB_FILE *handle ) ;
extern int fb_DevScrnClose(struct _FB_FILE *handle ) ;
extern int fb_DevScrnOpen(struct _FB_FILE *handle , char const   *filename ,
                          size_t filename_len ) ;
extern void fb_DevScrnInit_ReadLineWstr(void) ;
extern void fb_DevScrnInit_ReadLine(void) ;
extern void fb_DevScrnInit_ReadWstr(void) ;
extern void fb_DevScrnInit_Read(void) ;
extern void fb_DevScrnInit_WriteWstr(void) ;
extern void fb_DevScrnInit_Write(void) ;
extern void fb_DevScrnInit_NoOpen(void) ;
extern void fb_DevScrnInit(void) ;
extern int fb_DevPipeClose(struct _FB_FILE *handle ) ;
extern int fb_DevPipeOpen(struct _FB_FILE *handle , char const   *filename ,
                          size_t filename_len ) ;
extern int fb_DevFileOpenUTF(struct _FB_FILE *handle , char const   *filename ,
                             size_t filename_len ) ;
extern int fb_DevFileOpenEncod(struct _FB_FILE *handle ,
                               char const   *filename , size_t fname_len ) ;
extern int fb_DevFileReadLineDumb(FILE *fp , FBSTRING *dst ,
                                  char *(*pfnReadString)(char *buffer ,
                                                         size_t count ,
                                                         FILE *fp ) ) ;
extern int fb_DevFileFlush(struct _FB_FILE *handle ) ;
extern int fb_DevFileWriteWstr(struct _FB_FILE *handle ,
                               wchar_t const   *value , size_t valuelen ) ;
extern int fb_DevFileWrite(struct _FB_FILE *handle , void const   *value ,
                           size_t valuelen ) ;
extern int fb_DevFileUnlock(struct _FB_FILE *handle , fb_off_t position ,
                            fb_off_t size ) ;
extern int fb_DevFileTell(struct _FB_FILE *handle , fb_off_t *pOffset ) ;
enum _FB_FILE_ENCOD;
extern fb_off_t fb_DevFileGetSize(FILE *fp , int mode , FB_FILE_ENCOD encod ,
                                  int seek_back ) ;
extern int fb_DevFileSeek(struct _FB_FILE *handle , fb_off_t offset ,
                          int whence ) ;
extern int fb_DevFileReadLineWstr(struct _FB_FILE *handle , wchar_t *dst ,
                                  int dst_chars ) ;
extern int fb_DevFileReadLine(struct _FB_FILE *handle , FBSTRING *dst ) ;
extern int fb_DevFileReadWstr(struct _FB_FILE *handle , wchar_t *dst ,
                              size_t *pchars ) ;
extern int fb_DevFileRead(struct _FB_FILE *handle , void *value ,
                          size_t *pLength ) ;
extern int fb_DevFileLock(struct _FB_FILE *handle , fb_off_t position ,
                          fb_off_t size ) ;
extern int fb_DevFileEof(struct _FB_FILE *handle ) ;
extern int fb_DevFileClose(struct _FB_FILE *handle ) ;
extern int fb_DevFileOpen(struct _FB_FILE *handle , char const   *filename ,
                          size_t filename_len ) ;
extern int fb_DevErrOpen(struct _FB_FILE *handle , char const   *filename ,
                         size_t filename_len ) ;
extern int fb_DevConsOpen(struct _FB_FILE *handle , char const   *filename ,
                          size_t filename_len ) ;
extern int fb_DrvFileCopy(char const   *source , char const   *destination ) ;
extern int fb_FileCopy(char const   *source , char const   *destination ) ;
extern int fb_hFileRead_UTFToWchar(FILE *fp , FB_FILE_ENCOD encod ,
                                   wchar_t *dst , int max_chars ) ;
extern int fb_hFileRead_UTFToChar(FILE *fp , FB_FILE_ENCOD encod , char *dst ,
                                  int max_chars ) ;
extern char *fb_WCharToUTF(FB_FILE_ENCOD encod , wchar_t const   *src ,
                           int chars , char *dst , int *bytes ) ;
extern char *fb_CharToUTF(FB_FILE_ENCOD encod , char const   *src , int chars ,
                          char *dst , int *bytes ) ;
extern void fb_hCharToUTF8(char const   *src , int chars , char *dst ,
                           int *bytes ) ;
typedef unsigned char uint8_t;
typedef uint8_t UTF_8;
extern UTF_8 const   __fb_utf8_bmarkTb[7] ;
extern void fb_FileInputNextTokenWstr(wchar_t *buffer , int max_chars ,
                                      int is_string ) ;
extern int fb_FileInputNextToken(char *buffer , int maxlen , int isstring ,
                                 int *isfp ) ;
extern int fb_SetPos(FB_FILE *handle , int line_length ) ;
extern FB_FILE_ENCOD fb_hFileStrToEncoding(char const   *encoding ) ;
extern char *fb_hConvertPath(char *path , int len ) ;
extern int fb_hFileUnlock(FILE *f , fb_off_t inipos , fb_off_t size ) ;
extern int fb_hFileLock(FILE *f , fb_off_t inipos , fb_off_t size ) ;
extern int fb_hFilePrintBufferWstrEx(FB_FILE *handle , wchar_t const   *buffer ,
                                     size_t len ) ;
extern int fb_hFilePrintBufferEx(FB_FILE *handle , void const   *buffer ,
                                 size_t len ) ;
extern int fb_hFilePrintBufferWstr(int fnum , wchar_t const   *buffer ) ;
extern int fb_hFilePrintBuffer(int fnum , char const   *buffer ) ;
extern int fb_FileLineInput(int fnum , void *dst , int dst_len , int fillrem ) ;
extern FBSTRING *fb_FileStrInput(int bytes , int fnum ) ;
extern int fb_FilePutBackWstrEx(FB_FILE *handle , wchar_t const   *src ,
                                size_t chars ) ;
extern int fb_FilePutBackEx(FB_FILE *handle , void const   *data ,
                            size_t length ) ;
extern int fb_FilePutBackWstr(int fnum , wchar_t const   *src , size_t chars ) ;
extern int fb_FilePutBack(int fnum , void const   *data , size_t length ) ;
extern fb_off_t fb_FileSizeEx(FB_FILE *handle ) ;
extern long long fb_FileSize(int fnum ) ;
extern void fb_FileResetEx(int streamno ) ;
extern void fb_FileReset(void) ;
extern int fb_FileKill(FBSTRING *str ) ;
extern fb_off_t fb_FileLocationEx(FB_FILE *handle ) ;
extern long long fb_FileLocation(int fnum ) ;
extern int fb_FileSeekEx(FB_FILE *handle , fb_off_t newpos ) ;
extern int fb_FileSeek(int fnum , long newpos ) ;
extern fb_off_t fb_FileTellEx(FB_FILE *handle ) ;
extern long long fb_FileTell(int fnum ) ;
extern int fb_FileEofEx(FB_FILE *handle ) ;
extern int fb_FileEof(int fnum ) ;
struct _FBARRAY;
typedef struct _FBARRAY FBARRAY;
extern int fb_FileGetArray(int fnum , long pos , FBARRAY *dst ) ;
extern int fb_FileGetStrEx(FB_FILE *handle , fb_off_t pos , void *str ,
                           int str_len , size_t *bytesread ) ;
extern int fb_FileGetStr(int fnum , long pos , void *str , int str_len ) ;
extern int fb_FileGetEx(FB_FILE *handle , fb_off_t pos , void *value ,
                        unsigned int valuelen ) ;
extern int fb_FileGet(int fnum , long pos , void *value , unsigned int valuelen ) ;
extern int fb_FilePutArray(int fnum , long pos , FBARRAY *src ) ;
extern int fb_FilePutStrEx(FB_FILE *handle , fb_off_t pos , void *str ,
                           int str_len ) ;
extern int fb_FilePutStr(int fnum , long pos , void *str , int str_len ) ;
extern int fb_FilePutEx(FB_FILE *handle , fb_off_t pos , void *value ,
                        unsigned int valuelen ) ;
extern int fb_FilePut(int fnum , long pos , void *value , unsigned int valuelen ) ;
extern int fb_FileCloseEx(FB_FILE *handle ) ;
extern int fb_FileClose(int fnum ) ;
extern int fb_FileOpenShort(FBSTRING *str_file_mode , int fnum ,
                            FBSTRING *filename , int len ,
                            FBSTRING *str_access_mode , FBSTRING *str_lock_mode ) ;
extern int fb_FileOpenEx(FB_FILE *handle , FBSTRING *str , unsigned int mode ,
                         unsigned int access , unsigned int lock , int len ) ;
extern int fb_FileOpen(FBSTRING *str , unsigned int mode , unsigned int access ,
                       unsigned int lock , int fnum , int len ) ;
extern int fb_FileFree(void) ;
extern int fb_FileOpenCom(FBSTRING *str_filename , unsigned int mode ,
                          unsigned int access , unsigned int lock , int fnum ,
                          int len , char const   *encoding ) ;
extern int fb_FileOpenLpt(FBSTRING *str_filename , unsigned int mode ,
                          unsigned int access , unsigned int lock , int fnum ,
                          int len , char const   *encoding ) ;
extern int fb_FileOpenScrn(FBSTRING *str_filename , unsigned int mode ,
                           unsigned int access , unsigned int lock , int fnum ,
                           int len , char const   *encoding ) ;
extern int fb_FileOpenPipe(FBSTRING *str_filename , unsigned int mode ,
                           unsigned int access , unsigned int lock , int fnum ,
                           int len , char const   *encoding ) ;
extern int fb_FileOpenErr(FBSTRING *str_filename , unsigned int mode ,
                          unsigned int access , unsigned int lock , int fnum ,
                          int len , char const   *encoding ) ;
extern int fb_FileOpenCons(FBSTRING *str_filename , unsigned int mode ,
                           unsigned int access , unsigned int lock , int fnum ,
                           int len , char const   *encoding ) ;
extern int fb_FileOpenVfsEx(FB_FILE *handle , FBSTRING *str_filename ,
                            unsigned int mode , unsigned int access ,
                            unsigned int lock , int len ,
                            FB_FILE_ENCOD encoding ,
                            int (*pfnOpen)(struct _FB_FILE *handle ,
                                           char const   *filename ,
                                           size_t filename_len ) ) ;
extern int fb_FileOpenVfsRawEx(FB_FILE *handle , char const   *filename ,
                               size_t filename_length , unsigned int mode ,
                               unsigned int access , unsigned int lock ,
                               int len , FB_FILE_ENCOD encoding ,
                               int (*pfnOpen)(struct _FB_FILE *handle ,
                                              char const   *filename ,
                                              size_t filename_len ) ) ;
extern int fb_FileGetDataEx(FB_FILE *handle , fb_off_t pos , void *data ,
                            size_t length , size_t *bytesread ,
                            int adjust_rec_pos , int isunicode ) ;
extern int fb_FileGetData(int fnum , fb_off_t pos , void *data , size_t length ,
                          int adjust_rec_pos ) ;
extern int fb_FilePutDataEx(FB_FILE *handle , fb_off_t pos ,
                            void const   *data , size_t length ,
                            int adjust_rec_pos , int checknewline ,
                            int isunicode ) ;
extern int fb_FilePutData(int fnum , fb_off_t pos , void const   *data ,
                          size_t length , int adjust_rec_pos , int checknewline ) ;
union __anonunion_pthread_mutex_t_11;
typedef union __anonunion_pthread_mutex_t_11 pthread_mutex_t;
extern pthread_mutex_t __fb_global_mutex ;
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
extern  __attribute__((__nothrow__)) int pthread_mutex_unlock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_lock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
__inline static struct _FB_FILE *FB_HANDLE_DEREF(struct _FB_FILE *handle ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "411\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )handle != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "407\n");
    fflush(_coverage_fout);
    }
    pthread_mutex_lock(& __fb_global_mutex);
    {
    fprintf(_coverage_fout, "408\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "405\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )handle->redirection_to != (unsigned int )((void *)0)) {
        {
        fprintf(_coverage_fout, "404\n");
        fflush(_coverage_fout);
        }

      } else {
        break;
      }
      {
      fprintf(_coverage_fout, "406\n");
      fflush(_coverage_fout);
      }
      handle = handle->redirection_to;
    }
    {
    fprintf(_coverage_fout, "409\n");
    fflush(_coverage_fout);
    }
    pthread_mutex_unlock(& __fb_global_mutex);
  } else {
    {
    fprintf(_coverage_fout, "410\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "412\n");
  fflush(_coverage_fout);
  }
  return (handle);
}
}
__inline static struct _FB_FILE *FB_HANDLE_DEREF(struct _FB_FILE *handle ) ;
extern void fb_WriteWstr(int fnum , wchar_t *s , int mask ) ;
extern void fb_WriteFixString(int fnum , char *s , int mask ) ;
extern void fb_WriteString(int fnum , FBSTRING *s , int mask ) ;
extern void fb_WriteDouble(int fnum , double val , int mask ) ;
extern void fb_WriteSingle(int fnum , float val , int mask ) ;
extern void fb_WriteUInt(int fnum , unsigned int val , int mask ) ;
extern void fb_WriteInt(int fnum , int val , int mask ) ;
extern void fb_WriteUShort(int fnum , unsigned short val , int mask ) ;
extern void fb_WriteShort(int fnum , short val , int mask ) ;
extern void fb_WriteUByte(int fnum , unsigned char val , int mask ) ;
extern void fb_WriteByte(int fnum , char val , int mask ) ;
extern void fb_WriteVoid(int fnum , int mask ) ;
extern void fb_PrintSPC(int fnum , int n ) ;
extern void fb_PrintTab(int fnum , int newcol ) ;
extern void fb_PrintBufferWstrEx(wchar_t const   *buffer , size_t len ,
                                 int mask ) ;
extern void fb_PrintBufferEx(void const   *buffer , size_t len , int mask ) ;
extern void fb_PrintBuffer(char const   *s , int mask ) ;
extern void fb_PrintFixStringEx(struct _FB_FILE *handle , char const   *s ,
                                int mask ) ;
extern void fb_PrintFixString(int fnum , char const   *s , int mask ) ;
extern void fb_PrintWstrEx(struct _FB_FILE *handle , wchar_t const   *s ,
                           int mask ) ;
extern void fb_PrintStringEx(struct _FB_FILE *handle , FBSTRING *s , int mask ) ;
extern void fb_PrintWstr(int fnum , wchar_t const   *s , int mask ) ;
extern void fb_PrintString(int fnum , FBSTRING *s , int mask ) ;
extern void fb_PrintDouble(int fnum , double val , int mask ) ;
extern void fb_PrintSingle(int fnum , float val , int mask ) ;
extern void fb_PrintUInt(int fnum , unsigned int val , int mask ) ;
extern void fb_PrintInt(int fnum , int val , int mask ) ;
extern void fb_PrintUShort(int fnum , unsigned short val , int mask ) ;
extern void fb_PrintShort(int fnum , short val , int mask ) ;
extern void fb_PrintUByte(int fnum , unsigned char val , int mask ) ;
extern void fb_PrintByte(int fnum , char val , int mask ) ;
extern void fb_PrintVoidWstrEx(struct _FB_FILE *handle , int mask ) ;
extern void fb_PrintVoidWstr(int fnum , int mask ) ;
extern void fb_PrintVoidEx(struct _FB_FILE *handle , int mask ) ;
extern void fb_PrintVoid(int fnum , int mask ) ;
extern void fb_PrintPadWstrEx(struct _FB_FILE *handle , int mask ) ;
extern void fb_PrintPadWstr(int fnum , int mask ) ;
extern void fb_PrintPadEx(struct _FB_FILE *handle , int mask ) ;
extern void fb_PrintPad(int fnum , int mask ) ;
extern int fb_ConsoleLineInputWstr(wchar_t const   *text , wchar_t *dst ,
                                   int max_chars , int addquestion ,
                                   int addnewline ) ;
extern int fb_ConsoleLineInput(FBSTRING *text , void *dst , int dst_len ,
                               int fillrem , int addquestion , int addnewline ) ;
extern FBSTRING *fb_ConReadLine(int soft_cursor ) ;
extern void fb_ConReadLineEx(FBSTRING *dst , int soft_cursor ) ;
extern int fb_ConsolePageSet(int active , int visible ) ;
extern int fb_ConsolePageCopy(int src , int dst ) ;
extern int fb_ConsoleIsRedirected(int is_input ) ;
extern void fb_ConsoleSleep(int msecs ) ;
extern void fb_ConsoleSetTopBotRows(int top , int bot ) ;
extern int fb_ConsoleGetBotRow(void) ;
extern int fb_ConsoleGetTopRow(void) ;
extern char *fb_ConsoleReadStr(char *buffer , int len ) ;
extern void fb_ConsolePrintBufferWstrEx(wchar_t const   *buffer , size_t len ,
                                        int mask ) ;
extern void fb_ConsolePrintBufferEx(void const   *buffer , size_t len ,
                                    int mask ) ;
extern void fb_ConsolePrintBufferWstr(wchar_t const   *buffer , int mask ) ;
extern void fb_ConsolePrintBuffer(char const   *buffer , int mask ) ;
extern int fb_ConsoleSetMouse(int x , int y , int cursor , int clip ) ;
extern int fb_ConsoleGetMouse(int *x , int *y , int *z , int *buttons_ ,
                              int *clip ) ;
extern int fb_ConsoleMultikey(int scancode ) ;
extern int fb_ConsoleKeyHit(void) ;
extern FBSTRING *fb_ConsoleInkey(void) ;
extern int fb_ConsoleGetkey(void) ;
extern void fb_ConsoleScroll(int nrows ) ;
extern void fb_ConsoleViewUpdate(void) ;
extern int fb_ConsoleGetMaxRow(void) ;
extern void fb_ConsoleGetView(int *toprow , int *botrow ) ;
extern int fb_ConsoleViewEx(int toprow , int botrow , int set_cursor ) ;
extern int fb_ConsoleView(int toprow , int botrow ) ;
extern int fb_ConsoleGetColorAtt(void) ;
extern int fb_ConsoleColor(int fc , int bc , int flags ) ;
extern unsigned int fb_ConsoleReadXY(int col , int row , int colorflag ) ;
extern void fb_ConsoleGetXY(int *col , int *row ) ;
extern void fb_ConsoleGetSize(int *cols , int *rows ) ;
extern int fb_ConsoleGetX(void) ;
extern int fb_ConsoleGetY(void) ;
extern int fb_ConsoleLocate(int row , int col , int cursor ) ;
extern void fb_ConsoleClear(int mode ) ;
extern int fb_ConsoleWidth(int cols , int rows ) ;
__inline static int FB_PRINT_CONVERT_BIN_NEWLINE(int mask ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "402\n");
  fflush(_coverage_fout);
  }
  if (mask & 0x00000001) {
    {
    fprintf(_coverage_fout, "400\n");
    fflush(_coverage_fout);
    }
    mask = (mask & -2) | 0x00000004;
  } else {
    {
    fprintf(_coverage_fout, "401\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "403\n");
  fflush(_coverage_fout);
  }
  return (mask);
}
}
__inline static int FB_PRINT_CONVERT_BIN_NEWLINE(int mask ) ;
extern short fb_DataGetLen(void) ;
extern void fb_DataReadDouble(double *dst ) ;
extern void fb_DataReadSingle(float *dst ) ;
extern void fb_DataReadULongint(unsigned long long *dst ) ;
extern void fb_DataReadLongint(long long *dst ) ;
extern void fb_DataReadUInt(unsigned int *dst ) ;
extern void fb_DataReadInt(int *dst ) ;
extern void fb_DataReadUShort(unsigned short *dst ) ;
extern void fb_DataReadShort(short *dst ) ;
extern void fb_DataReadUByte(unsigned char *dst ) ;
extern void fb_DataReadByte(char *dst ) ;
extern void fb_DataReadStr(void *dst , int dst_size , int fillrem ) ;
struct _FB_DATADESC;
typedef struct _FB_DATADESC FB_DATADESC;
extern void fb_DataRestore(FB_DATADESC *labeladdr ) ;
extern FB_DATADESC *__fb_data_ptr ;
extern double fb_FIXDouble(double x ) ;
extern float fb_FIXSingle(float x ) ;
extern int fb_SGNDouble(double x ) ;
extern int fb_SGNSingle(float x ) ;
extern void fb_Randomize(double seed , int algorithm ) ;
extern double fb_Rnd(float n ) ;
extern int fb_Wait(unsigned short port , int and , int xor ) ;
extern int fb_hOut(unsigned short port , unsigned char value ) ;
extern int fb_hIn(unsigned short port ) ;
extern char *fb_hGetExeName(char *dst , int maxlen ) ;
extern char *fb_hGetExePath(char *dst , int maxlen ) ;
extern int fb_hGetCurrentDir(char *dst , int maxlen ) ;
extern char *fb_hGetShortPath(char *src , char *dst , int maxlen ) ;
extern void fb_hDynUnload(void **lib ) ;
extern int fb_hDynLoadAlso(void *lib , char const   **funcname ,
                           void **funcptr , int count ) ;
extern void *fb_hDynLoad(char const   *libname , char const   **funcname ,
                         void **funcptr ) ;
extern void fb_DylibFree(void *library ) ;
extern void *fb_DylibSymbolByOrd(void *library , short symbol ) ;
extern void *fb_DylibSymbol(void *library , FBSTRING *symbol ) ;
extern void *fb_DylibLoad(FBSTRING *library ) ;
extern int fb_hParseArgs(char *dst , char const   *src , int length ) ;
extern int fb_ExecEx(FBSTRING *program , FBSTRING *args , int do_wait ) ;
extern int fb_Exec(FBSTRING *program , FBSTRING *args ) ;
extern int fb_Chain(FBSTRING *program ) ;
extern int fb_Run(FBSTRING *program ) ;
extern int fb_Shell(FBSTRING *program ) ;
extern FBSTRING *fb_ExePath(void) ;
extern FBSTRING *fb_CurDir(void) ;
extern FBSTRING *fb_Command(int argc ) ;
extern void fb_Beep(void) ;
extern void fb_hInitSignals(void) ;
extern void fb_hEnd(int errlevel ) ;
extern void fb_hInit(void) ;
extern void fb_StrSwap(void *str1 , int str1_size , void *str2 , int str2_size ) ;
extern void fb_MemSwap(unsigned char *dst , unsigned char *src , int bytes ) ;
extern void fb_InitSignals(void) ;
extern void fb_RtExit(void) ;
extern void fb_RtInit(void) ;
extern void fb_End(int errlevel ) ;
extern void fb_Init(int argc , char **argv , int lang ) ;
extern void fb_hArrayCtorObj(FBARRAY *array ,
                             void (*ctor)(void const   *this_ ) , int base_idx ) ;
extern void fb_hArrayDtorObj(FBARRAY *array ,
                             void (*dtor)(void const   *this_ ) , int base_idx ) ;
extern void fb_hArrayDtorStr(FBARRAY *array ,
                             void (*dtor)(void const   *this_ ) , int base_idx ) ;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
extern int fb_hArrayRealloc(FBARRAY *array , int element_len , int doclear ,
                            void (*ctor)(void const   *this_ ) ,
                            void (*dtor_mult)(FBARRAY *array ,
                                              void (*dtor)(void const   *this_ ) ,
                                              int base_idx ) ,
                            void (*dtor)(void const   *this_ ) ,
                            int dimensions , va_list ap ) ;
extern int fb_hArrayAlloc(FBARRAY *array , int element_len , int doclear ,
                          void (*ctor)(void const   *this_ ) , int dimensions ,
                          va_list ap ) ;
extern int fb_hArrayCalcDiff(int dimensions , int const   *lboundTB ,
                             int const   *uboundTB ) ;
extern int fb_hArrayCalcElements(int dimensions , int const   *lboundTB ,
                                 int const   *uboundTB ) ;
extern int fb_ArrayUBound(FBARRAY *array , int dimension ) ;
extern int fb_ArrayLBound(FBARRAY *array , int dimension ) ;
extern void fb_ArrayResetDesc(FBARRAY *array ) ;
extern int fb_ArrayClearObj(FBARRAY *array ,
                            void (*ctor)(void const   *this_ ) ,
                            void (*dtor)(void const   *this_ ) , int dofill ) ;
extern int fb_ArrayClear(FBARRAY *array , int isvarlen ) ;
extern void fb_ArrayStrErase(FBARRAY *array ) ;
extern int fb_ArrayEraseObj(FBARRAY *array , void (*dtor)(void const   *this_ ) ) ;
extern int fb_ArrayErase(FBARRAY *array , int isvarlen ) ;
extern int fb_ArrayRedimPresvObj(FBARRAY *array , int element_len ,
                                 void (*ctor)(void const   *this_ ) ,
                                 void (*dtor)(void const   *this_ ) ,
                                 int dimensions  , ...) ;
extern int fb_ArrayRedimPresvEx(FBARRAY *array , int element_len , int doclear ,
                                int isvarlen , int dimensions  , ...) ;
extern int fb_ArrayRedimPresv(FBARRAY *array , int element_len , int preserve ,
                              int dimensions  , ...) ;
extern int fb_ArrayRedimObj(FBARRAY *array , int element_len ,
                            void (*ctor)(void const   *this_ ) ,
                            void (*dtor)(void const   *this_ ) , int dimensions 
                            , ...) ;
extern int fb_ArrayRedimEx(FBARRAY *array , int element_len , int doclear ,
                           int isvarlen , int dimensions  , ...) ;
extern int fb_ArrayRedim(FBARRAY *array , int element_len , int preserve ,
                         int dimensions  , ...) ;
extern FBSTRING *fb_hStrFormat(double value , char const   *mask ,
                               size_t mask_length ) ;
extern FBSTRING *fb_StrFormat(double value , FBSTRING *mask ) ;
extern void fb_WstrAssignMid(wchar_t *dst , int dst_len , int start , int len ,
                             wchar_t const   *src ) ;
extern wchar_t *fb_WstrMid(wchar_t const   *src , int start , int len ) ;
extern int fb_WstrInstrRevAny(wchar_t const   *src , wchar_t const   *patt ,
                              int start ) ;
extern int fb_WstrInstrRev(wchar_t const   *src , wchar_t const   *patt ,
                           int start ) ;
extern int fb_WstrInstrAny(int start , wchar_t const   *src ,
                           wchar_t const   *patt ) ;
extern int fb_WstrInstr(int start , wchar_t const   *src ,
                        wchar_t const   *patt ) ;
extern wchar_t *fb_WstrFill2(int cnt , wchar_t const   *src ) ;
extern wchar_t *fb_WstrFill1(int cnt , wchar_t c ) ;
extern wchar_t *fb_WstrUcase(wchar_t const   *str ) ;
extern wchar_t *fb_WstrLcase(wchar_t const   *str ) ;
extern wchar_t *fb_WstrTrimAny(wchar_t const   *str , wchar_t const   *pattern ) ;
extern wchar_t *fb_WstrTrimEx(wchar_t const   *str , wchar_t const   *pattern ) ;
extern wchar_t *fb_WstrTrim(wchar_t const   *src ) ;
extern wchar_t *fb_WstrRTrimAny(wchar_t const   *str , wchar_t const   *pattern ) ;
extern wchar_t *fb_WstrRTrimEx(wchar_t const   *str , wchar_t const   *pattern ) ;
extern wchar_t *fb_WstrRTrim(wchar_t const   *str ) ;
extern wchar_t *fb_WstrLTrimAny(wchar_t const   *str , wchar_t const   *pattern ) ;
extern wchar_t *fb_WstrLTrimEx(wchar_t const   *str , wchar_t const   *pattern ) ;
extern wchar_t *fb_WstrLTrim(wchar_t const   *str ) ;
extern wchar_t *fb_WstrSpace(int chars ) ;
extern wchar_t *fb_WstrRight(wchar_t const   *str , int chars ) ;
extern wchar_t *fb_WstrLeft(wchar_t const   *str , int chars ) ;
extern unsigned long long fb_WstrValULng(wchar_t const   *str ) ;
extern long long fb_WstrValLng(wchar_t const   *str ) ;
extern unsigned int fb_WstrValUInt(wchar_t const   *str ) ;
extern int fb_WstrValInt(wchar_t const   *str ) ;
extern double fb_WstrVal(wchar_t const   *str ) ;
extern unsigned int fb_WstrAsc(wchar_t const   *str , int pos ) ;
extern wchar_t *fb_WstrChr(int args  , ...) ;
extern long long fb_WstrRadix2Longint(wchar_t const   *s , int len , int radix ) ;
extern int fb_WstrRadix2Int(wchar_t const   *src , int len , int radix ) ;
extern unsigned long long fb_WstrToULongint(wchar_t const   *src , int len ) ;
extern long long fb_WstrToLongint(wchar_t const   *src , int len ) ;
extern unsigned int fb_WstrToUInt(wchar_t const   *src , int len ) ;
extern int fb_WstrToInt(wchar_t const   *src , int len ) ;
extern double fb_WstrToDouble(wchar_t const   *src , int len ) ;
extern FBSTRING *fb_WstrToStr(wchar_t const   *src ) ;
extern wchar_t *fb_StrToWstr(char const   *src ) ;
extern wchar_t *fb_DoubleToWstr(double num ) ;
extern wchar_t *fb_FloatExToWstr(double val , wchar_t *buffer , int digits ,
                                 int mask ) ;
extern wchar_t *fb_FloatToWstr(float num ) ;
extern wchar_t *fb_UIntToWstr(unsigned int num ) ;
extern wchar_t *fb_IntToWstr(int num ) ;
extern int fb_WstrCompare(wchar_t const   *str1 , wchar_t const   *str2 ) ;
extern int fb_WstrLen(wchar_t *str ) ;
extern wchar_t *fb_WstrConcatAssign(wchar_t *dst , int dst_chars ,
                                    wchar_t const   *src ) ;
extern wchar_t *fb_WstrConcatAW(void const   *str1 , int str1_size ,
                                wchar_t const   *str2 ) ;
extern wchar_t *fb_WstrConcatWA(wchar_t const   *str1 , void const   *str2 ,
                                int str2_size ) ;
extern wchar_t *fb_WstrConcat(wchar_t const   *str1 , wchar_t const   *str2 ) ;
extern void *fb_WstrAssignToAEx(void *dst , int dst_chars , wchar_t *src ,
                                int fill_rem , int is_init ) ;
extern void *fb_WstrAssignToA(void *dst , int dst_chars , wchar_t *src ,
                              int fill_rem ) ;
extern wchar_t *fb_WstrAssignFromA(wchar_t *dst , int dst_chars , void *src ,
                                   int src_chars ) ;
extern wchar_t *fb_WstrAssign(wchar_t *dst , int dst_chars , wchar_t *src ) ;
extern void fb_WstrDelete(wchar_t *str ) ;
extern void fb_StrAssignMid(FBSTRING *dst , int start , int len , FBSTRING *src ) ;
extern FBSTRING *fb_StrMid(FBSTRING *src , int start , int len ) ;
extern int fb_StrInstrRevAny(FBSTRING *src , FBSTRING *patt , int start ) ;
extern int fb_StrInstrRev(FBSTRING *src , FBSTRING *patt , int start ) ;
extern int fb_StrInstrAny(int start , FBSTRING *src , FBSTRING *patt ) ;
extern int fb_StrInstr(int start , FBSTRING *src , FBSTRING *patt ) ;
extern FBSTRING *fb_StrFill2(int cnt , FBSTRING *src ) ;
extern FBSTRING *fb_StrFill1(int cnt , int fchar ) ;
extern FBSTRING *fb_UCASE(FBSTRING *str ) ;
extern FBSTRING *fb_LCASE(FBSTRING *str ) ;
extern FBSTRING *fb_TrimAny(FBSTRING *str , FBSTRING *pattern ) ;
extern FBSTRING *fb_TrimEx(FBSTRING *str , FBSTRING *pattern ) ;
extern FBSTRING *fb_TRIM(FBSTRING *src ) ;
extern FBSTRING *fb_RTrimAny(FBSTRING *str , FBSTRING *pattern ) ;
extern FBSTRING *fb_RTrimEx(FBSTRING *str , FBSTRING *pattern ) ;
extern FBSTRING *fb_RTRIM(FBSTRING *str ) ;
extern FBSTRING *fb_LTrimAny(FBSTRING *str , FBSTRING *pattern ) ;
extern FBSTRING *fb_LTrimEx(FBSTRING *str , FBSTRING *pattern ) ;
extern FBSTRING *fb_LTRIM(FBSTRING *str ) ;
extern FBSTRING *fb_SPACE(int chars ) ;
extern FBSTRING *fb_RIGHT(FBSTRING *str , int chars ) ;
extern FBSTRING *fb_LEFT(FBSTRING *str , int chars ) ;
extern FBSTRING *fb_MKS(float num ) ;
extern FBSTRING *fb_MKI(int num ) ;
extern FBSTRING *fb_MKD(double num ) ;
extern FBSTRING *fb_BIN(int num ) ;
extern FBSTRING *fb_OCT(int num ) ;
extern FBSTRING *fb_HEX(int num ) ;
extern int fb_CVI(FBSTRING *str ) ;
extern double fb_CVD(FBSTRING *str ) ;
extern double fb_VAL(FBSTRING *str ) ;
extern unsigned int fb_ASC(FBSTRING *str , int pos ) ;
extern FBSTRING *fb_CHR(int args  , ...) ;
extern char *fb_hFloat2Str(double val , char *buffer , int digits , int mask ) ;
extern long long fb_hStrRadix2Longint(char *s , int len , int radix ) ;
extern int fb_hStrRadix2Int(char *src , int len , int radix ) ;
extern unsigned long long fb_hStr2ULongint(char *src , int len ) ;
extern long long fb_hStr2Longint(char *src , int len ) ;
extern unsigned int fb_hStr2UInt(char *src , int len ) ;
extern int fb_hStr2Int(char *src , int len ) ;
extern double fb_hStr2Double(char *src , int len ) ;
extern FBSTRING *fb_DoubleToStr(double num ) ;
extern FBSTRING *fb_FloatToStr(float num ) ;
extern FBSTRING *fb_UIntToStr(unsigned int num ) ;
extern FBSTRING *fb_IntToStr(int num ) ;
extern int fb_StrLen(void *str , int str_size ) ;
extern FBSTRING *fb_StrAllocTempDescZ(char const   *str ) ;
extern FBSTRING *fb_StrAllocTempDescV(FBSTRING *str ) ;
extern FBSTRING *fb_StrAllocTempDescF(char *str , int str_size ) ;
extern FBSTRING *fb_StrAllocTempResult(FBSTRING *src ) ;
extern int fb_StrCompare(void *str1 , int str1_size , void *str2 ,
                         int str2_size ) ;
extern void *fb_StrConcatAssign(void *dst , int dst_size , void *src ,
                                int src_size , int fillrem ) ;
extern FBSTRING *fb_StrConcat(FBSTRING *dst , void *str1 , int str1_size ,
                              void *str2 , int str2_size ) ;
extern void fb_StrDelete(FBSTRING *str ) ;
extern void *fb_StrAssignEx(void *dst , int dst_size , void *src ,
                            int src_size , int fill_rem , int is_init ) ;
extern void *fb_StrAssign(void *dst , int dst_size , void *src , int src_size ,
                          int fill_rem ) ;
extern void *fb_StrInit(void *dst , int dst_size , void *src , int src_size ,
                        int fill_rem ) ;
extern char *fb_hStrSkipCharRev(char *s , int len , int c ) ;
extern char *fb_hStrSkipChar(char *s , int len , int c ) ;
extern void fb_hStrCopy(char *dst , char const   *src , int bytes ) ;
extern int fb_hStrDelTemp_NoLock(FBSTRING *str ) ;
extern int fb_hStrDelTemp(FBSTRING *str ) ;
extern FBSTRING *fb_hStrAllocTemp_NoLock(FBSTRING *str , int size ) ;
extern FBSTRING *fb_hStrRealloc(FBSTRING *str , int size , int preserve ) ;
extern FBSTRING *fb_hStrAlloc(FBSTRING *str , int size ) ;
extern int fb_hStrDelTempDesc(FBSTRING *str ) ;
extern FBSTRING *fb_hStrAllocTmpDesc(void) ;
__inline static void fb_hStrSetLength(FBSTRING *str , size_t size ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "398\n");
  fflush(_coverage_fout);
  }
  str->len = (int )((unsigned long )size | ((unsigned long )str->len & 0x80000000L));
  {
  fprintf(_coverage_fout, "399\n");
  fflush(_coverage_fout);
  }
  return;
}
}
extern void *fb_ErrorResumeNext(void) ;
extern void *fb_ErrorResume(void) ;
extern int fb_ErrorSetNum(int errnum ) ;
extern int fb_ErrorGetNum(void) ;
typedef void (*FB_ERRHANDLER)(void);
extern FB_ERRHANDLER fb_ErrorSetHandler(void (*newhandler)(void) ) ;
extern FB_ERRHANDLER fb_ErrorThrowEx(int errnum , int linenum ,
                                     char const   *fname , void *res_label ,
                                     void *resnext_label ) ;
struct _FB_LISTELEM;
typedef struct _FB_LISTELEM FB_LISTELEM;
struct _FB_LIST;
typedef struct _FB_LIST FB_LIST;
extern void fb_hListDynElemRemove(FB_LIST *list , FB_LISTELEM *elem ) ;
extern void fb_hListDynElemAdd(FB_LIST *list , FB_LISTELEM *elem ) ;
extern void fb_hListDynInit(FB_LIST *list ) ;
extern void fb_hListFreeElem(FB_LIST *list , FB_LISTELEM *elem ) ;
extern FB_LISTELEM *fb_hListAllocElem(FB_LIST *list ) ;
extern void fb_hListInit(FB_LIST *list , void *table , int elem_size , int size ) ;
extern  __attribute__((__nothrow__)) int wcsncmp(wchar_t const   *__s1 ,
                                                 wchar_t const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__)) ;
__inline static int fb_wstr_Compare(wchar_t const   *str1 ,
                                    wchar_t const   *str2 , int chars ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "396\n");
  fflush(_coverage_fout);
  }
  tmp = wcsncmp(str1, str2, (unsigned int )chars);
  {
  fprintf(_coverage_fout, "397\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static int fb_wstr_Compare(wchar_t const   *str1 ,
                                    wchar_t const   *str2 , int chars ) ;
extern  __attribute__((__nothrow__)) size_t wcscspn(wchar_t const   *__wcs ,
                                                    wchar_t const   *__reject )  __attribute__((__pure__)) ;
__inline static size_t fb_wstr_InstrAny(wchar_t const   *s ,
                                        wchar_t const   *sset ) 
{ size_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "394\n");
  fflush(_coverage_fout);
  }
  tmp = wcscspn(s, sset);
  {
  fprintf(_coverage_fout, "395\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static size_t fb_wstr_InstrAny(wchar_t const   *s ,
                                        wchar_t const   *sset ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsstr(wchar_t const   *__haystack ,
                                                     wchar_t const   *__needle )  __attribute__((__pure__)) ;
__inline static wchar_t *fb_wstr_Instr(wchar_t const   *s ,
                                       wchar_t const   *patt ) 
{ wchar_t *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "392\n");
  fflush(_coverage_fout);
  }
  tmp = wcsstr(s, patt);
  {
  fprintf(_coverage_fout, "393\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static wchar_t *fb_wstr_Instr(wchar_t const   *s ,
                                       wchar_t const   *patt ) ;
__inline static wchar_t const   *fb_wstr_SkipCharRev(wchar_t const   *s ,
                                                     int chars , wchar_t c ) 
{ wchar_t const   *p ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "388\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )s == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "377\n");
    fflush(_coverage_fout);
    }
    return (s);
  } else {
    {
    fprintf(_coverage_fout, "380\n");
    fflush(_coverage_fout);
    }
    if (chars <= 0) {
      {
      fprintf(_coverage_fout, "378\n");
      fflush(_coverage_fout);
      }
      return (s);
    } else {
      {
      fprintf(_coverage_fout, "379\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "389\n");
  fflush(_coverage_fout);
  }
  p = s + (chars - 1);
  {
  fprintf(_coverage_fout, "390\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "384\n");
    fflush(_coverage_fout);
    }
    if (chars > 0) {
      {
      fprintf(_coverage_fout, "381\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "385\n");
    fflush(_coverage_fout);
    }
    if (*p != (wchar_t const   )c) {
      {
      fprintf(_coverage_fout, "382\n");
      fflush(_coverage_fout);
      }
      return (p);
    } else {
      {
      fprintf(_coverage_fout, "383\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "386\n");
    fflush(_coverage_fout);
    }
    p --;
    {
    fprintf(_coverage_fout, "387\n");
    fflush(_coverage_fout);
    }
    chars --;
  }
  {
  fprintf(_coverage_fout, "391\n");
  fflush(_coverage_fout);
  }
  return (p);
}
}
__inline static wchar_t const   *fb_wstr_SkipCharRev(wchar_t const   *s ,
                                                     int chars , wchar_t c ) ;
__inline static wchar_t const   *fb_wstr_SkipChar(wchar_t const   *s ,
                                                  int chars , wchar_t c ) 
{ wchar_t const   *p ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "373\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )s == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "364\n");
    fflush(_coverage_fout);
    }
    return ((wchar_t const   *)((void *)0));
  } else {
    {
    fprintf(_coverage_fout, "365\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "374\n");
  fflush(_coverage_fout);
  }
  p = s;
  {
  fprintf(_coverage_fout, "375\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "369\n");
    fflush(_coverage_fout);
    }
    if (chars > 0) {
      {
      fprintf(_coverage_fout, "366\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "370\n");
    fflush(_coverage_fout);
    }
    if (*p != (wchar_t const   )c) {
      {
      fprintf(_coverage_fout, "367\n");
      fflush(_coverage_fout);
      }
      return (p);
    } else {
      {
      fprintf(_coverage_fout, "368\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "371\n");
    fflush(_coverage_fout);
    }
    p ++;
    {
    fprintf(_coverage_fout, "372\n");
    fflush(_coverage_fout);
    }
    chars --;
  }
  {
  fprintf(_coverage_fout, "376\n");
  fflush(_coverage_fout);
  }
  return (p);
}
}
__inline static wchar_t const   *fb_wstr_SkipChar(wchar_t const   *s ,
                                                  int chars , wchar_t c ) ;
__inline static void fb_wstr_Fill(wchar_t *dst , wchar_t c , int chars ) 
{ int i ;
  wchar_t *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "360\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "361\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "355\n");
    fflush(_coverage_fout);
    }
    if (i < chars) {
      {
      fprintf(_coverage_fout, "354\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "356\n");
    fflush(_coverage_fout);
    }
    tmp = dst;
    {
    fprintf(_coverage_fout, "357\n");
    fflush(_coverage_fout);
    }
    dst ++;
    {
    fprintf(_coverage_fout, "358\n");
    fflush(_coverage_fout);
    }
    *tmp = c;
    {
    fprintf(_coverage_fout, "359\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "362\n");
  fflush(_coverage_fout);
  }
  *dst = 0L;
  {
  fprintf(_coverage_fout, "363\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void fb_wstr_Fill(wchar_t *dst , wchar_t c , int chars ) ;
__inline static void *FB_MEMCPYX(void *dest , void const   *src , size_t n ) ;
__inline static wchar_t *fb_wstr_Move(wchar_t *dst , wchar_t const   *src ,
                                      int chars ) 
{ void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "352\n");
  fflush(_coverage_fout);
  }
  tmp = FB_MEMCPYX((void *)dst, (void const   *)src,
                   (unsigned int )chars * sizeof(wchar_t ));
  {
  fprintf(_coverage_fout, "353\n");
  fflush(_coverage_fout);
  }
  return ((wchar_t *)tmp);
}
}
__inline static wchar_t *fb_wstr_Move(wchar_t *dst , wchar_t const   *src ,
                                      int chars ) ;
__inline static void fb_wstr_Copy(wchar_t *dst , wchar_t const   *src ,
                                  int chars ) 
{ void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "349\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )src != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "347\n");
    fflush(_coverage_fout);
    }
    if (chars > 0) {
      {
      fprintf(_coverage_fout, "344\n");
      fflush(_coverage_fout);
      }
      tmp = FB_MEMCPYX((void *)dst, (void const   *)src,
                       (unsigned int )chars * sizeof(wchar_t ));
      {
      fprintf(_coverage_fout, "345\n");
      fflush(_coverage_fout);
      }
      dst = (wchar_t *)tmp;
    } else {
      {
      fprintf(_coverage_fout, "346\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "348\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "350\n");
  fflush(_coverage_fout);
  }
  *dst = 0L;
  {
  fprintf(_coverage_fout, "351\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void fb_wstr_Copy(wchar_t *dst , wchar_t const   *src ,
                                  int chars ) ;
typedef unsigned int wint_t;
extern  __attribute__((__nothrow__)) wint_t towupper(wint_t __wc ) ;
__inline static wchar_t fb_wstr_ToUpper(wchar_t c ) 
{ wint_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "342\n");
  fflush(_coverage_fout);
  }
  tmp = towupper((unsigned int )c);
  {
  fprintf(_coverage_fout, "343\n");
  fflush(_coverage_fout);
  }
  return ((long )tmp);
}
}
__inline static wchar_t fb_wstr_ToUpper(wchar_t c ) ;
extern  __attribute__((__nothrow__)) wint_t towlower(wint_t __wc ) ;
__inline static wchar_t fb_wstr_ToLower(wchar_t c ) 
{ wint_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "340\n");
  fflush(_coverage_fout);
  }
  tmp = towlower((unsigned int )c);
  {
  fprintf(_coverage_fout, "341\n");
  fflush(_coverage_fout);
  }
  return ((long )tmp);
}
}
__inline static wchar_t fb_wstr_ToLower(wchar_t c ) ;
extern  __attribute__((__nothrow__)) int iswupper(wint_t __wc ) ;
__inline static int fb_wstr_IsUpper(wchar_t c ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "338\n");
  fflush(_coverage_fout);
  }
  tmp = iswupper((unsigned int )c);
  {
  fprintf(_coverage_fout, "339\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static int fb_wstr_IsUpper(wchar_t c ) ;
extern  __attribute__((__nothrow__)) int iswlower(wint_t __wc ) ;
__inline static int fb_wstr_IsLower(wchar_t c ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "336\n");
  fflush(_coverage_fout);
  }
  tmp = iswlower((unsigned int )c);
  {
  fprintf(_coverage_fout, "337\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline static int fb_wstr_IsLower(wchar_t c ) ;
__inline static void fb_wstr_WcharToChar(char *dst , wchar_t const   *src ,
                                         int chars ) ;
__inline static void fb_wstr_ConvToA(char *dst , wchar_t const   *src ,
                                     int chars ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "333\n");
  fflush(_coverage_fout);
  }
  fb_wstr_WcharToChar(dst, src, chars);
  {
  fprintf(_coverage_fout, "334\n");
  fflush(_coverage_fout);
  }
  *(dst + chars) = (char )'\000';
  {
  fprintf(_coverage_fout, "335\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void fb_wstr_ConvToA(char *dst , wchar_t const   *src ,
                                     int chars ) ;
extern  __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict  __pwcs ,
                                                     char const   * __restrict  __s ,
                                                     size_t __n ) ;
__inline static void fb_wstr_ConvFromA(wchar_t *dst , int dst_chars ,
                                       char const   *src ) 
{ int chars ;
  size_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "330\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )src == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "323\n");
    fflush(_coverage_fout);
    }
    chars = -1;
  } else {
    {
    fprintf(_coverage_fout, "324\n");
    fflush(_coverage_fout);
    }
    tmp = mbstowcs((wchar_t */* __restrict  */)dst,
                   (char const   */* __restrict  */)src,
                   (unsigned int )(dst_chars + 1));
    {
    fprintf(_coverage_fout, "325\n");
    fflush(_coverage_fout);
    }
    chars = (int )tmp;
  }
  {
  fprintf(_coverage_fout, "331\n");
  fflush(_coverage_fout);
  }
  if (chars == -1) {
    {
    fprintf(_coverage_fout, "326\n");
    fflush(_coverage_fout);
    }
    *dst = 0L;
  } else {
    {
    fprintf(_coverage_fout, "329\n");
    fflush(_coverage_fout);
    }
    if (chars == dst_chars + 1) {
      {
      fprintf(_coverage_fout, "327\n");
      fflush(_coverage_fout);
      }
      *(dst + dst_chars) = 0L;
    } else {
      {
      fprintf(_coverage_fout, "328\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "332\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void fb_wstr_ConvFromA(wchar_t *dst , int dst_chars ,
                                       char const   *src ) ;
extern  __attribute__((__nothrow__)) size_t wcslen(wchar_t const   *__s )  __attribute__((__pure__)) ;
__inline static int fb_wstr_Len(wchar_t const   *s ) 
{ size_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "321\n");
  fflush(_coverage_fout);
  }
  tmp = wcslen(s);
  {
  fprintf(_coverage_fout, "322\n");
  fflush(_coverage_fout);
  }
  return ((int )tmp);
}
}
__inline static int fb_wstr_Len(wchar_t const   *s ) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
__inline static void fb_wstr_Del(wchar_t *s ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "319\n");
  fflush(_coverage_fout);
  }
  free((void *)s);
  {
  fprintf(_coverage_fout, "320\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void fb_wstr_Del(wchar_t *s ) ;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
__inline static wchar_t *fb_wstr_AllocTemp(int chars ) 
{ void *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "317\n");
  fflush(_coverage_fout);
  }
  tmp = malloc((unsigned int )(chars + 1) * sizeof(wchar_t ));
  {
  fprintf(_coverage_fout, "318\n");
  fflush(_coverage_fout);
  }
  return ((wchar_t *)tmp);
}
}
__inline static wchar_t *fb_wstr_AllocTemp(int chars ) ;
__inline static int fb_wstr_CalcDiff(wchar_t const   *ini ,
                                     wchar_t const   *end ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "316\n");
  fflush(_coverage_fout);
  }
  return ((int )((unsigned int )((int )end - (int )ini) / sizeof(wchar_t )));
}
}
__inline static int fb_wstr_CalcDiff(wchar_t const   *ini ,
                                     wchar_t const   *end ) ;
typedef unsigned int uint32_t;
typedef uint32_t UTF_32;
__inline static void fb_wstr_WcharToChar(char *dst , wchar_t const   *src ,
                                         int chars ) 
{ UTF_32 c ;
  wchar_t const   *tmp ;
  char *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "314\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "305\n");
    fflush(_coverage_fout);
    }
    if (chars) {
      {
      fprintf(_coverage_fout, "302\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "306\n");
    fflush(_coverage_fout);
    }
    tmp = src;
    {
    fprintf(_coverage_fout, "307\n");
    fflush(_coverage_fout);
    }
    src ++;
    {
    fprintf(_coverage_fout, "308\n");
    fflush(_coverage_fout);
    }
    c = (unsigned int )*tmp;
    {
    fprintf(_coverage_fout, "309\n");
    fflush(_coverage_fout);
    }
    if (c > 255U) {
      {
      fprintf(_coverage_fout, "303\n");
      fflush(_coverage_fout);
      }
      c = (unsigned int )'?';
    } else {
      {
      fprintf(_coverage_fout, "304\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "310\n");
    fflush(_coverage_fout);
    }
    tmp___0 = dst;
    {
    fprintf(_coverage_fout, "311\n");
    fflush(_coverage_fout);
    }
    dst ++;
    {
    fprintf(_coverage_fout, "312\n");
    fflush(_coverage_fout);
    }
    *tmp___0 = (char )c;
    {
    fprintf(_coverage_fout, "313\n");
    fflush(_coverage_fout);
    }
    chars --;
  }
  {
  fprintf(_coverage_fout, "315\n");
  fflush(_coverage_fout);
  }
  return;
}
}
struct __locale_struct;
typedef struct __locale_struct *__locale_t;
typedef int __int32_t;
typedef __int32_t const   *wctrans_t;
extern  __attribute__((__nothrow__)) wint_t towctrans_l(wint_t __wc ,
                                                        wctrans_t __desc ,
                                                        __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) wctrans_t wctrans_l(char const   *__property ,
                                                         __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) wint_t towupper_l(wint_t __wc ,
                                                       __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) wint_t towlower_l(wint_t __wc ,
                                                       __locale_t __locale ) ;
typedef unsigned long wctype_t;
extern  __attribute__((__nothrow__)) int iswctype_l(wint_t __wc ,
                                                    wctype_t __desc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) wctype_t wctype_l(char const   *__property ,
                                                       __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswblank_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswxdigit_l(wint_t __wc ,
                                                     __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswupper_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswspace_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswpunct_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswprint_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswlower_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswgraph_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswdigit_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswcntrl_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswalpha_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) int iswalnum_l(wint_t __wc ,
                                                    __locale_t __locale ) ;
extern  __attribute__((__nothrow__)) wint_t towctrans(wint_t __wc ,
                                                      wctrans_t __desc ) ;
extern  __attribute__((__nothrow__)) wctrans_t wctrans(char const   *__property ) ;
extern  __attribute__((__nothrow__)) int iswctype(wint_t __wc , wctype_t __desc ) ;
extern  __attribute__((__nothrow__)) wctype_t wctype(char const   *__property ) ;
extern  __attribute__((__nothrow__)) int iswblank(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswxdigit(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswspace(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswpunct(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswprint(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswgraph(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswdigit(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswcntrl(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswalpha(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int iswalnum(wint_t __wc ) ;
struct tm;
extern  __attribute__((__nothrow__)) size_t wcsftime(wchar_t * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     wchar_t const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
typedef struct _IO_FILE __FILE;
extern wint_t ungetwc(wint_t __wc , __FILE *__stream ) ;
extern int fputws(wchar_t const   * __restrict  __ws ,
                  __FILE * __restrict  __stream ) ;
extern wchar_t *fgetws(wchar_t * __restrict  __ws , int __n ,
                       __FILE * __restrict  __stream ) ;
extern wint_t putwchar(wchar_t __wc ) ;
extern wint_t putwc(wchar_t __wc , __FILE *__stream ) ;
extern wint_t fputwc(wchar_t __wc , __FILE *__stream ) ;
extern wint_t getwchar(void) ;
extern wint_t getwc(__FILE *__stream ) ;
extern wint_t fgetwc(__FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int vswscanf(wchar_t const   * __restrict  __s ,
                                                  wchar_t const   * __restrict  __format ,
                                                  __gnuc_va_list __arg )  __asm__("__isoc99_vswscanf")  ;
extern int vwscanf(wchar_t const   * __restrict  __format ,
                   __gnuc_va_list __arg )  __asm__("__isoc99_vwscanf")  ;
extern int vfwscanf(__FILE * __restrict  __s ,
                    wchar_t const   * __restrict  __format ,
                    __gnuc_va_list __arg )  __asm__("__isoc99_vfwscanf")  ;
extern  __attribute__((__nothrow__)) int swscanf(wchar_t const   * __restrict  __s ,
                                                 wchar_t const   * __restrict  __format 
                                                 , ...)  __asm__("__isoc99_swscanf")  ;
extern int wscanf(wchar_t const   * __restrict  __format  , ...)  __asm__("__isoc99_wscanf")  ;
extern int fwscanf(__FILE * __restrict  __stream ,
                   wchar_t const   * __restrict  __format  , ...)  __asm__("__isoc99_fwscanf")  ;
extern  __attribute__((__nothrow__)) int vswprintf(wchar_t * __restrict  __s ,
                                                   size_t __n ,
                                                   wchar_t const   * __restrict  __format ,
                                                   __gnuc_va_list __arg ) ;
extern int vwprintf(wchar_t const   * __restrict  __format ,
                    __gnuc_va_list __arg ) ;
extern int vfwprintf(__FILE * __restrict  __s ,
                     wchar_t const   * __restrict  __format ,
                     __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int swprintf(wchar_t * __restrict  __s ,
                                                  size_t __n ,
                                                  wchar_t const   * __restrict  __format 
                                                  , ...) ;
extern int wprintf(wchar_t const   * __restrict  __format  , ...) ;
extern int fwprintf(__FILE * __restrict  __stream ,
                    wchar_t const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int fwide(__FILE *__fp , int __mode ) ;
extern  __attribute__((__nothrow__)) __FILE *open_wmemstream(wchar_t **__bufloc ,
                                                             size_t *__sizeloc ) ;
extern  __attribute__((__nothrow__)) unsigned long long wcstoull(wchar_t const   * __restrict  __nptr ,
                                                                 wchar_t ** __restrict  __endptr ,
                                                                 int __base ) ;
extern  __attribute__((__nothrow__)) long long wcstoll(wchar_t const   * __restrict  __nptr ,
                                                       wchar_t ** __restrict  __endptr ,
                                                       int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long wcstoul(wchar_t const   * __restrict  __nptr ,
                                                           wchar_t ** __restrict  __endptr ,
                                                           int __base ) ;
extern  __attribute__((__nothrow__)) long wcstol(wchar_t const   * __restrict  __nptr ,
                                                 wchar_t ** __restrict  __endptr ,
                                                 int __base ) ;
extern  __attribute__((__nothrow__)) long double wcstold(wchar_t const   * __restrict  __nptr ,
                                                         wchar_t ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) float wcstof(wchar_t const   * __restrict  __nptr ,
                                                  wchar_t ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) double wcstod(wchar_t const   * __restrict  __nptr ,
                                                   wchar_t ** __restrict  __endptr ) ;
struct __anonstruct___mbstate_t_22;
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef __mbstate_t mbstate_t;
extern  __attribute__((__nothrow__)) size_t wcsnrtombs(char * __restrict  __dst ,
                                                       wchar_t const   ** __restrict  __src ,
                                                       size_t __nwc ,
                                                       size_t __len ,
                                                       mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t mbsnrtowcs(wchar_t * __restrict  __dst ,
                                                       char const   ** __restrict  __src ,
                                                       size_t __nmc ,
                                                       size_t __len ,
                                                       mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t wcsrtombs(char * __restrict  __dst ,
                                                      wchar_t const   ** __restrict  __src ,
                                                      size_t __len ,
                                                      mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t mbsrtowcs(wchar_t * __restrict  __dst ,
                                                      char const   ** __restrict  __src ,
                                                      size_t __len ,
                                                      mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t __mbrlen(char const   * __restrict  __s ,
                                                     size_t __n ,
                                                     mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) size_t mbrtowc(wchar_t * __restrict  __pwc ,
                                                    char const   * __restrict  __s ,
                                                    size_t __n , mbstate_t *__p ) ;
__inline extern  __attribute__((__nothrow__)) size_t mbrlen(char const   * __restrict  __s ,
                                                            size_t __n ,
                                                            mbstate_t * __restrict  __ps ) ;
__inline extern size_t mbrlen(char const   * __restrict  __s , size_t __n ,
                              mbstate_t * __restrict  __ps ) 
{ size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "300\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__ps != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "296\n");
    fflush(_coverage_fout);
    }
    tmp = mbrtowc((wchar_t */* __restrict  */)((void *)0), __s, __n,
                  (mbstate_t *)__ps);
    {
    fprintf(_coverage_fout, "297\n");
    fflush(_coverage_fout);
    }
    tmp___1 = tmp;
  } else {
    {
    fprintf(_coverage_fout, "298\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __mbrlen(__s, __n, (mbstate_t */* __restrict  */)((void *)0));
    {
    fprintf(_coverage_fout, "299\n");
    fflush(_coverage_fout);
    }
    tmp___1 = tmp___0;
  }
  {
  fprintf(_coverage_fout, "301\n");
  fflush(_coverage_fout);
  }
  return (tmp___1);
}
}
__inline extern  __attribute__((__nothrow__)) size_t mbrlen(char const   * __restrict  __s ,
                                                            size_t __n ,
                                                            mbstate_t * __restrict  __ps ) ;
extern int __wctob_alias(wint_t __c )  __asm__("wctob")  ;
__inline extern  __attribute__((__nothrow__)) int wctob(wint_t __wc ) ;
__inline extern int wctob(wint_t __wc ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "294\n");
  fflush(_coverage_fout);
  }
  tmp = __wctob_alias(__wc);
  {
  fprintf(_coverage_fout, "295\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int wctob(wint_t __wc ) ;
extern wint_t __btowc_alias(int __c )  __asm__("btowc")  ;
__inline extern  __attribute__((__nothrow__)) wint_t btowc(int __c ) ;
__inline extern wint_t btowc(int __c ) 
{ wint_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "292\n");
  fflush(_coverage_fout);
  }
  tmp = __btowc_alias(__c);
  {
  fprintf(_coverage_fout, "293\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) wint_t btowc(int __c ) ;
extern  __attribute__((__nothrow__)) size_t wcrtomb(char * __restrict  __s ,
                                                    wchar_t __wc ,
                                                    mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) int mbsinit(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wmemset(wchar_t *__s ,
                                                      wchar_t __c , size_t __n ) ;
extern  __attribute__((__nothrow__)) wchar_t *wmemmove(wchar_t *__s1 ,
                                                       wchar_t const   *__s2 ,
                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) wchar_t *wmemcpy(wchar_t * __restrict  __s1 ,
                                                      wchar_t const   * __restrict  __s2 ,
                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) int wmemcmp(wchar_t const   * __restrict  __s1 ,
                                                 wchar_t const   * __restrict  __s2 ,
                                                 size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wmemchr(wchar_t const   *__s ,
                                                      wchar_t __c , size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t wcsnlen(wchar_t const   *__s ,
                                                    size_t __maxlen )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcstok(wchar_t * __restrict  __s ,
                                                     wchar_t const   * __restrict  __delim ,
                                                     wchar_t ** __restrict  __ptr ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcspbrk(wchar_t const   *__wcs ,
                                                      wchar_t const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t wcsspn(wchar_t const   *__wcs ,
                                                   wchar_t const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsrchr(wchar_t const   *__wcs ,
                                                      wchar_t __wc )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcschr(wchar_t const   *__wcs ,
                                                     wchar_t __wc )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsdup(wchar_t const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) size_t wcsxfrm_l(wchar_t *__s1 ,
                                                      wchar_t const   *__s2 ,
                                                      size_t __n ,
                                                      __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) int wcscoll_l(wchar_t const   *__s1 ,
                                                   wchar_t const   *__s2 ,
                                                   __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) size_t wcsxfrm(wchar_t * __restrict  __s1 ,
                                                    wchar_t const   * __restrict  __s2 ,
                                                    size_t __n ) ;
extern  __attribute__((__nothrow__)) int wcscoll(wchar_t const   *__s1 ,
                                                 wchar_t const   *__s2 ) ;
extern  __attribute__((__nothrow__)) int wcsncasecmp_l(wchar_t const   *__s1 ,
                                                       wchar_t const   *__s2 ,
                                                       size_t __n ,
                                                       __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) int wcscasecmp_l(wchar_t const   *__s1 ,
                                                      wchar_t const   *__s2 ,
                                                      __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) int wcsncasecmp(wchar_t const   *__s1 ,
                                                     wchar_t const   *__s2 ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int wcscasecmp(wchar_t const   *__s1 ,
                                                    wchar_t const   *__s2 ) ;
extern  __attribute__((__nothrow__)) int wcscmp(wchar_t const   *__s1 ,
                                                wchar_t const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsncat(wchar_t * __restrict  __dest ,
                                                      wchar_t const   * __restrict  __src ,
                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcscat(wchar_t * __restrict  __dest ,
                                                     wchar_t const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcsncpy(wchar_t * __restrict  __dest ,
                                                      wchar_t const   * __restrict  __src ,
                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) wchar_t *wcscpy(wchar_t * __restrict  __dest ,
                                                     wchar_t const   * __restrict  __src ) ;
extern int fb_CpuDetect(void) ;
__inline static size_t FB_MEMLEN(void const   *s , int c , size_t n ) 
{ size_t len ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "289\n");
  fflush(_coverage_fout);
  }
  if (n == 0U) {
    {
    fprintf(_coverage_fout, "287\n");
    fflush(_coverage_fout);
    }
    return (0U);
  } else {
    {
    fprintf(_coverage_fout, "288\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "290\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   (" pushl %%edi            \n"
                       " pushf                  \n"
                       " std                    \n"
                       " repe                   \n"
                       " scasb                  \n"
                       " je 0f                  \n"
                       " inc %%ecx              \n"
                       "0:                      \n"
                       " popf                   \n"
                       " popl %%edi             \n": "=c" (len): "c" (n),
                       "a" (c), "D" (((char const   *)s + n) - 1));
  {
  fprintf(_coverage_fout, "291\n");
  fflush(_coverage_fout);
  }
  return (len);
}
}
__inline static size_t FB_MEMLEN(void const   *s , int c , size_t n ) ;
__inline static void const   *FB_MEMCHR(void const   *s , int c , size_t n ) 
{ void const   *dst ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "284\n");
  fflush(_coverage_fout);
  }
  if (n == 0U) {
    {
    fprintf(_coverage_fout, "282\n");
    fflush(_coverage_fout);
    }
    return ((void const   *)((void *)0));
  } else {
    {
    fprintf(_coverage_fout, "283\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "285\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   (" pushl %%ecx            \n"
                       " pushf                  \n"
                       " cld                    \n"
                       " repne                  \n"
                       " scasb                  \n"
                       " jne 0f                 \n"
                       " dec %%edi              \n"
                       " jmp 1f                 \n"
                       "0:                      \n"
                       " xorl %%edi, %%edi      \n"
                       "1:                      \n"
                       " popf                   \n"
                       " popl %%ecx             \n": "=D" (dst): "c" (n),
                       "a" (c), "D" (s));
  {
  fprintf(_coverage_fout, "286\n");
  fflush(_coverage_fout);
  }
  return (dst);
}
}
__inline static void const   *FB_MEMCHR(void const   *s , int c , size_t n ) ;
__inline static void *FB_MEMCPYX(void *dest , void const   *src , size_t n ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "280\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   (" pushl %%ecx      \n"
                       " pushl %%esi      \n"
                       " pushl %%ecx      \n"
                       " shrl $2,%%ecx    \n"
                       " rep              \n"
                       " movsd            \n"
                       " popl %%ecx       \n"
                       " andl $3,%%ecx    \n"
                       " rep              \n"
                       " movsb            \n"
                       " popl %%esi       \n"
                       " popl %%ecx       \n": "=D" (dest): "c" (n), "S" (src),
                       "D" (dest));
  {
  fprintf(_coverage_fout, "281\n");
  fflush(_coverage_fout);
  }
  return (dest);
}
}
__inline static void *FB_MEMCPY(void *dest , void const   *src , size_t n ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "278\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   (" pushl %%ecx      \n"
                       " pushl %%esi      \n"
                       " pushl %%edi      \n"
                       " pushl %%ecx      \n"
                       " shrl $2,%%ecx    \n"
                       " rep              \n"
                       " movsd            \n"
                       " popl %%ecx       \n"
                       " andl $3,%%ecx    \n"
                       " rep              \n"
                       " movsb            \n"
                       " popl %%edi       \n"
                       " popl %%esi       \n"
                       " popl %%ecx       \n": : "c" (n), "S" (src), "D" (dest));
  {
  fprintf(_coverage_fout, "279\n");
  fflush(_coverage_fout);
  }
  return (dest);
}
}
__inline static void *FB_MEMCPY(void *dest , void const   *src , size_t n ) ;
__inline static int FB_MEMCMP(void const   *p1 , void const   *p2 , size_t len ) 
{ int res ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "275\n");
  fflush(_coverage_fout);
  }
  if (len == 0U) {
    {
    fprintf(_coverage_fout, "273\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "274\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "276\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   (" pushl %%esi      \n"
                       " pushl %%edi      \n"
                       " repe             \n"
                       " cmpsb            \n"
                       " je 0f            \n"
                       " movl $1, %%ecx   \n"
                       " ja 0f            \n"
                       " neg %%ecx        \n"
                       "0:                \n"
                       " popl %%edi       \n"
                       " popl %%esi       \n": "=c" (res): "c" (len), "S" (p1),
                       "D" (p2));
  {
  fprintf(_coverage_fout, "277\n");
  fflush(_coverage_fout);
  }
  return (res);
}
}
__inline static int FB_MEMCMP(void const   *p1 , void const   *p2 , size_t len ) ;
extern int shm_unlink(char const   *__name ) ;
typedef unsigned int __mode_t;
typedef __mode_t mode_t;
extern int shm_open(char const   *__name , int __oflag , mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int mincore(void *__start , size_t __len ,
                                                 unsigned char *__vec ) ;
extern  __attribute__((__nothrow__)) int munlockall(void) ;
extern  __attribute__((__nothrow__)) int mlockall(int __flags ) ;
extern  __attribute__((__nothrow__)) int munlock(void const   *__addr ,
                                                 size_t __len ) ;
extern  __attribute__((__nothrow__)) int mlock(void const   *__addr ,
                                               size_t __len ) ;
extern  __attribute__((__nothrow__)) int posix_madvise(void *__addr ,
                                                       size_t __len ,
                                                       int __advice ) ;
extern  __attribute__((__nothrow__)) int madvise(void *__addr , size_t __len ,
                                                 int __advice ) ;
extern int msync(void *__addr , size_t __len , int __flags ) ;
extern  __attribute__((__nothrow__)) int mprotect(void *__addr , size_t __len ,
                                                  int __prot ) ;
extern  __attribute__((__nothrow__)) int munmap(void *__addr , size_t __len ) ;
extern  __attribute__((__nothrow__)) void *mmap(void *__addr , size_t __len ,
                                                int __prot , int __flags ,
                                                int __fd , __off64_t __offset )  __asm__("mmap64")  ;
typedef unsigned long XID;
typedef XID KeySym;
struct KeysymToScancode {
   KeySym keysym ;
   int scancode ;
};
typedef struct KeysymToScancode KeysymToScancode;
extern KeysymToScancode const   fb_keysym_to_scancode[] ;
extern void fb_unix_hEnd(int unused ) ;
extern void fb_unix_hInit(void) ;
extern void fb_hExitConsole(void) ;
extern int fb_hInitConsole(void) ;
extern pthread_mutex_t __fb_string_mutex ;
extern int fb_hConsoleGfxMode(void (*gfx_exit)(void) , void (*save)(void) ,
                              void (*restore)(void) ,
                              void (*key_handler)(int  ) ) ;
extern int fb_hXTermHasFocus(void) ;
extern void fb_hXTermExitFocus(void) ;
extern int fb_hXTermInitFocus(void) ;
extern int fb_hGetCh(int remove ) ;
extern int fb_hTermOut(int code , int param1 , int param2 ) ;
struct FBCONSOLE;
typedef struct FBCONSOLE FBCONSOLE;
extern FBCONSOLE __fb_con ;
extern  __attribute__((__nothrow__)) int ioctl(int __fd ,
                                               unsigned long __request  , ...) ;
__inline static void outsl(unsigned short __port , void const   *__addr ,
                           unsigned long __count ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "271\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("cld ; rep ; outsl": "=S" (__addr),
                       "=c" (__count): "d" (__port), "0" (__addr), "1" (__count));
  {
  fprintf(_coverage_fout, "272\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outsl(unsigned short __port , void const   *__addr ,
                           unsigned long __count ) ;
__inline static void outsw(unsigned short __port , void const   *__addr ,
                           unsigned long __count ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "269\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("cld ; rep ; outsw": "=S" (__addr),
                       "=c" (__count): "d" (__port), "0" (__addr), "1" (__count));
  {
  fprintf(_coverage_fout, "270\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outsw(unsigned short __port , void const   *__addr ,
                           unsigned long __count ) ;
__inline static void outsb(unsigned short __port , void const   *__addr ,
                           unsigned long __count ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "267\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("cld ; rep ; outsb": "=S" (__addr),
                       "=c" (__count): "d" (__port), "0" (__addr), "1" (__count));
  {
  fprintf(_coverage_fout, "268\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outsb(unsigned short __port , void const   *__addr ,
                           unsigned long __count ) ;
__inline static void insl(unsigned short __port , void *__addr ,
                          unsigned long __count ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "265\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("cld ; rep ; insl": "=D" (__addr),
                       "=c" (__count): "d" (__port), "0" (__addr), "1" (__count));
  {
  fprintf(_coverage_fout, "266\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void insl(unsigned short __port , void *__addr ,
                          unsigned long __count ) ;
__inline static void insw(unsigned short __port , void *__addr ,
                          unsigned long __count ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "263\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("cld ; rep ; insw": "=D" (__addr),
                       "=c" (__count): "d" (__port), "0" (__addr), "1" (__count));
  {
  fprintf(_coverage_fout, "264\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void insw(unsigned short __port , void *__addr ,
                          unsigned long __count ) ;
__inline static void insb(unsigned short __port , void *__addr ,
                          unsigned long __count ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "261\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("cld ; rep ; insb": "=D" (__addr),
                       "=c" (__count): "d" (__port), "0" (__addr), "1" (__count));
  {
  fprintf(_coverage_fout, "262\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void insb(unsigned short __port , void *__addr ,
                          unsigned long __count ) ;
__inline static void outl_p(unsigned int value , unsigned short __port ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "259\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("outl %0,%w1\noutb %%al,$0x80": : "a" (value),
                       "Nd" (__port));
  {
  fprintf(_coverage_fout, "260\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outl_p(unsigned int value , unsigned short __port ) ;
__inline static void outl(unsigned int value , unsigned short __port ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "257\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("outl %0,%w1": : "a" (value), "Nd" (__port));
  {
  fprintf(_coverage_fout, "258\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outl(unsigned int value , unsigned short __port ) ;
__inline static void outw_p(unsigned short value , unsigned short __port ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "255\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("outw %w0,%w1\noutb %%al,$0x80": : "a" (value),
                       "Nd" (__port));
  {
  fprintf(_coverage_fout, "256\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outw_p(unsigned short value , unsigned short __port ) ;
__inline static void outw(unsigned short value , unsigned short __port ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "253\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("outw %w0,%w1": : "a" (value), "Nd" (__port));
  {
  fprintf(_coverage_fout, "254\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outw(unsigned short value , unsigned short __port ) ;
__inline static void outb_p(unsigned char value , unsigned short __port ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "251\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("outb %b0,%w1\noutb %%al,$0x80": : "a" (value),
                       "Nd" (__port));
  {
  fprintf(_coverage_fout, "252\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outb_p(unsigned char value , unsigned short __port ) ;
__inline static void outb(unsigned char value , unsigned short __port ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "249\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("outb %b0,%w1": : "a" (value), "Nd" (__port));
  {
  fprintf(_coverage_fout, "250\n");
  fflush(_coverage_fout);
  }
  return;
}
}
__inline static void outb(unsigned char value , unsigned short __port ) ;
__inline static unsigned int inl_p(unsigned short __port ) 
{ unsigned int _v ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "247\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("inl %w1,%0\noutb %%al,$0x80": "=a" (_v): "Nd" (__port));
  {
  fprintf(_coverage_fout, "248\n");
  fflush(_coverage_fout);
  }
  return (_v);
}
}
__inline static unsigned int inl_p(unsigned short __port ) ;
__inline static unsigned int inl(unsigned short __port ) 
{ unsigned int _v ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "245\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("inl %w1,%0": "=a" (_v): "Nd" (__port));
  {
  fprintf(_coverage_fout, "246\n");
  fflush(_coverage_fout);
  }
  return (_v);
}
}
__inline static unsigned int inl(unsigned short __port ) ;
__inline static unsigned short inw_p(unsigned short __port ) 
{ unsigned short _v ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "243\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("inw %w1,%0\noutb %%al,$0x80": "=a" (_v): "Nd" (__port));
  {
  fprintf(_coverage_fout, "244\n");
  fflush(_coverage_fout);
  }
  return (_v);
}
}
__inline static unsigned short inw_p(unsigned short __port ) ;
__inline static unsigned short inw(unsigned short __port ) 
{ unsigned short _v ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "241\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("inw %w1,%0": "=a" (_v): "Nd" (__port));
  {
  fprintf(_coverage_fout, "242\n");
  fflush(_coverage_fout);
  }
  return (_v);
}
}
__inline static unsigned short inw(unsigned short __port ) ;
__inline static unsigned char inb_p(unsigned short __port ) 
{ unsigned char _v ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "239\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("inb %w1,%0\noutb %%al,$0x80": "=a" (_v): "Nd" (__port));
  {
  fprintf(_coverage_fout, "240\n");
  fflush(_coverage_fout);
  }
  return (_v);
}
}
__inline static unsigned char inb_p(unsigned short __port ) ;
__inline static unsigned char inb(unsigned short __port ) 
{ unsigned char _v ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "237\n");
  fflush(_coverage_fout);
  }
  __asm__  volatile   ("inb %w1,%0": "=a" (_v): "Nd" (__port));
  {
  fprintf(_coverage_fout, "238\n");
  fflush(_coverage_fout);
  }
  return (_v);
}
}
__inline static unsigned char inb(unsigned short __port ) ;
extern  __attribute__((__nothrow__)) int iopl(int __level ) ;
extern  __attribute__((__nothrow__)) int ioperm(unsigned long __from ,
                                                unsigned long __num ,
                                                int __turn_on ) ;
extern int tputs(char const   * , int  , int (*)(int  ) ) ;
extern int tgetnum(char * ) ;
extern int tgetflag(char * ) ;
extern int tgetent(char * , char const   * ) ;
extern char *tgoto(char const   * , int  , int  ) ;
extern char *tgetstr(char * , char ** ) ;
extern unsigned int ospeed ;
extern char *BC ;
extern char *UP ;
extern char PC ;
struct __anonstruct_XGenericEventCookie_121;
typedef struct __anonstruct_XGenericEventCookie_121 XGenericEventCookie;
struct _XDisplay;
typedef struct _XDisplay Display;
extern void XFreeEventData(Display * , XGenericEventCookie * ) ;
extern int XGetEventData(Display * , XGenericEventCookie * ) ;
extern int _Xwctomb(char * , wchar_t  ) ;
extern int _Xmbtowc(wchar_t * , char * , int  ) ;
extern void XSetAuthorization(char * , int  , char * , int  ) ;
typedef char *XPointer;
extern void XRemoveConnectionWatch(Display * , void (*)(Display * , XPointer  ,
                                                        int  , int  ,
                                                        XPointer * ) ,
                                   XPointer  ) ;
extern int XAddConnectionWatch(Display * , void (*)(Display * , XPointer  ,
                                                    int  , int  , XPointer * ) ,
                               XPointer  ) ;
extern void XProcessInternalConnection(Display * , int  ) ;
extern int XInternalConnectionNumbers(Display * , int ** , int * ) ;
struct _XrmHashBucketRec;
extern int XUnregisterIMInstantiateCallback(Display * ,
                                            struct _XrmHashBucketRec * ,
                                            char * , char * ,
                                            void (*)(Display * , XPointer  ,
                                                     XPointer  ) , XPointer  ) ;
extern int XRegisterIMInstantiateCallback(Display * ,
                                          struct _XrmHashBucketRec * , char * ,
                                          char * , void (*)(Display * ,
                                                            XPointer  ,
                                                            XPointer  ) ,
                                          XPointer  ) ;
typedef void *XVaNestedList;
extern XVaNestedList XVaCreateNestedList(int   , ...)  __attribute__((__sentinel__(0))) ;
struct __anonstruct_XKeyEvent_88;
typedef struct __anonstruct_XKeyEvent_88 XKeyEvent;
typedef XKeyEvent XKeyPressedEvent;
struct _XIC;
typedef struct _XIC *XIC;
extern int Xutf8LookupString(XIC  , XKeyPressedEvent * , char * , int  ,
                             KeySym * , int * ) ;
extern int XwcLookupString(XIC  , XKeyPressedEvent * , wchar_t * , int  ,
                           KeySym * , int * ) ;
extern int XmbLookupString(XIC  , XKeyPressedEvent * , char * , int  ,
                           KeySym * , int * ) ;
typedef XID Window;
union _XEvent;
typedef union _XEvent XEvent;
extern int XFilterEvent(XEvent * , Window  ) ;
struct _XIM;
typedef struct _XIM *XIM;
extern XIM XIMOfIC(XIC  ) ;
extern char *XGetICValues(XIC   , ...)  __attribute__((__sentinel__(0))) ;
extern char *XSetICValues(XIC   , ...)  __attribute__((__sentinel__(0))) ;
extern char *Xutf8ResetIC(XIC  ) ;
extern char *XmbResetIC(XIC  ) ;
extern wchar_t *XwcResetIC(XIC  ) ;
extern void XUnsetICFocus(XIC  ) ;
extern void XSetICFocus(XIC  ) ;
extern void XDestroyIC(XIC  ) ;
extern XIC XCreateIC(XIM   , ...)  __attribute__((__sentinel__(0))) ;
extern char *XLocaleOfIM(XIM  ) ;
extern Display *XDisplayOfIM(XIM  ) ;
extern char *XSetIMValues(XIM   , ...)  __attribute__((__sentinel__(0))) ;
extern char *XGetIMValues(XIM   , ...)  __attribute__((__sentinel__(0))) ;
extern int XCloseIM(XIM  ) ;
extern XIM XOpenIM(Display * , struct _XrmHashBucketRec * , char * , char * ) ;
struct _XGC;
typedef struct _XGC *GC;
struct _XOC;
typedef struct _XOC *XFontSet;
typedef XID Drawable;
extern void Xutf8DrawImageString(Display * , Drawable  , XFontSet  , GC  ,
                                 int  , int  , char const   * , int  ) ;
extern void XwcDrawImageString(Display * , Drawable  , XFontSet  , GC  , int  ,
                               int  , wchar_t const   * , int  ) ;
extern void XmbDrawImageString(Display * , Drawable  , XFontSet  , GC  , int  ,
                               int  , char const   * , int  ) ;
extern void Xutf8DrawString(Display * , Drawable  , XFontSet  , GC  , int  ,
                            int  , char const   * , int  ) ;
extern void XwcDrawString(Display * , Drawable  , XFontSet  , GC  , int  ,
                          int  , wchar_t const   * , int  ) ;
extern void XmbDrawString(Display * , Drawable  , XFontSet  , GC  , int  ,
                          int  , char const   * , int  ) ;
struct __anonstruct_XmbTextItem_130;
typedef struct __anonstruct_XmbTextItem_130 XmbTextItem;
extern void Xutf8DrawText(Display * , Drawable  , GC  , int  , int  ,
                          XmbTextItem * , int  ) ;
struct __anonstruct_XwcTextItem_131;
typedef struct __anonstruct_XwcTextItem_131 XwcTextItem;
extern void XwcDrawText(Display * , Drawable  , GC  , int  , int  ,
                        XwcTextItem * , int  ) ;
extern void XmbDrawText(Display * , Drawable  , GC  , int  , int  ,
                        XmbTextItem * , int  ) ;
struct __anonstruct_XRectangle_81;
typedef struct __anonstruct_XRectangle_81 XRectangle;
extern int Xutf8TextPerCharExtents(XFontSet  , char const   * , int  ,
                                   XRectangle * , XRectangle * , int  , int * ,
                                   XRectangle * , XRectangle * ) ;
extern int XwcTextPerCharExtents(XFontSet  , wchar_t const   * , int  ,
                                 XRectangle * , XRectangle * , int  , int * ,
                                 XRectangle * , XRectangle * ) ;
extern int XmbTextPerCharExtents(XFontSet  , char const   * , int  ,
                                 XRectangle * , XRectangle * , int  , int * ,
                                 XRectangle * , XRectangle * ) ;
extern int Xutf8TextExtents(XFontSet  , char const   * , int  , XRectangle * ,
                            XRectangle * ) ;
extern int XwcTextExtents(XFontSet  , wchar_t const   * , int  , XRectangle * ,
                          XRectangle * ) ;
extern int XmbTextExtents(XFontSet  , char const   * , int  , XRectangle * ,
                          XRectangle * ) ;
extern int Xutf8TextEscapement(XFontSet  , char const   * , int  ) ;
extern int XwcTextEscapement(XFontSet  , wchar_t const   * , int  ) ;
extern int XmbTextEscapement(XFontSet  , char const   * , int  ) ;
struct __anonstruct_XFontSetExtents_129;
typedef struct __anonstruct_XFontSetExtents_129 XFontSetExtents;
extern XFontSetExtents *XExtentsOfFontSet(XFontSet  ) ;
extern int XContextualDrawing(XFontSet  ) ;
extern int XDirectionalDependentDrawing(XFontSet  ) ;
extern int XContextDependentDrawing(XFontSet  ) ;
extern char *XLocaleOfFontSet(XFontSet  ) ;
extern char *XBaseFontNameListOfFontSet(XFontSet  ) ;
struct __anonstruct_XFontStruct_124;
typedef struct __anonstruct_XFontStruct_124 XFontStruct;
extern int XFontsOfFontSet(XFontSet  , XFontStruct *** , char *** ) ;
extern void XFreeFontSet(Display * , XFontSet  ) ;
extern XFontSet XCreateFontSet(Display * , char const   * , char *** , int * ,
                               char ** ) ;
typedef struct _XOC *XOC;
extern char *XGetOCValues(XOC   , ...)  __attribute__((__sentinel__(0))) ;
extern char *XSetOCValues(XOC   , ...)  __attribute__((__sentinel__(0))) ;
struct _XOM;
typedef struct _XOM *XOM;
extern XOM XOMOfOC(XOC  ) ;
extern void XDestroyOC(XOC  ) ;
extern XOC XCreateOC(XOM   , ...)  __attribute__((__sentinel__(0))) ;
extern char *XLocaleOfOM(XOM  ) ;
extern Display *XDisplayOfOM(XOM  ) ;
extern char *XGetOMValues(XOM   , ...)  __attribute__((__sentinel__(0))) ;
extern char *XSetOMValues(XOM   , ...)  __attribute__((__sentinel__(0))) ;
extern int XCloseOM(XOM  ) ;
extern XOM XOpenOM(Display * , struct _XrmHashBucketRec * , char const   * ,
                   char const   * ) ;
extern char *XSetLocaleModifiers(char const   * ) ;
extern int XSupportsLocale(void) ;
typedef XID Pixmap;
extern int XWriteBitmapFile(Display * , char const   * , Pixmap  ,
                            unsigned int  , unsigned int  , int  , int  ) ;
extern int XWindowEvent(Display * , Window  , long  , XEvent * ) ;
struct __anonstruct_Screen_71;
typedef struct __anonstruct_Screen_71 Screen;
extern int XWidthOfScreen(Screen * ) ;
extern int XWidthMMOfScreen(Screen * ) ;
extern int XWarpPointer(Display * , Window  , Window  , int  , int  ,
                        unsigned int  , unsigned int  , int  , int  ) ;
extern int XVendorRelease(Display * ) ;
extern int XUnmapWindow(Display * , Window  ) ;
extern int XUnmapSubwindows(Display * , Window  ) ;
typedef XID Font;
extern int XUnloadFont(Display * , Font  ) ;
typedef XID Colormap;
extern int XUninstallColormap(Display * , Colormap  ) ;
extern int XUngrabServer(Display * ) ;
typedef unsigned long Time;
extern int XUngrabPointer(Display * , Time  ) ;
extern int XUngrabKeyboard(Display * , Time  ) ;
extern int XUngrabKey(Display * , int  , unsigned int  , Window  ) ;
extern int XUngrabButton(Display * , unsigned int  , unsigned int  , Window  ) ;
extern int XUndefineCursor(Display * , Window  ) ;
extern int XTranslateCoordinates(Display * , Window  , Window  , int  , int  ,
                                 int * , int * , Window * ) ;
struct __anonstruct_XChar2b_126;
typedef struct __anonstruct_XChar2b_126 XChar2b;
extern int XTextWidth16(XFontStruct * , XChar2b const   * , int  ) ;
extern int XTextWidth(XFontStruct * , char const   * , int  ) ;
struct __anonstruct_XCharStruct_122;
typedef struct __anonstruct_XCharStruct_122 XCharStruct;
extern int XTextExtents16(XFontStruct * , XChar2b const   * , int  , int * ,
                          int * , int * , XCharStruct * ) ;
extern int XTextExtents(XFontStruct * , char const   * , int  , int * , int * ,
                        int * , XCharStruct * ) ;
extern int XSync(Display * , int  ) ;
extern int XStoreNamedColor(Display * , Colormap  , char const   * ,
                            unsigned long  , int  ) ;
extern int XStoreName(Display * , Window  , char const   * ) ;
struct __anonstruct_XColor_78;
typedef struct __anonstruct_XColor_78 XColor;
extern int XStoreColors(Display * , Colormap  , XColor * , int  ) ;
extern int XStoreColor(Display * , Colormap  , XColor * ) ;
extern int XStoreBytes(Display * , char const   * , int  ) ;
extern int XStoreBuffer(Display * , char const   * , int  , int  ) ;
extern int XSetWindowColormap(Display * , Window  , Colormap  ) ;
extern int XSetWindowBorderWidth(Display * , Window  , unsigned int  ) ;
extern int XSetWindowBorderPixmap(Display * , Window  , Pixmap  ) ;
extern int XSetWindowBorder(Display * , Window  , unsigned long  ) ;
extern int XSetWindowBackgroundPixmap(Display * , Window  , Pixmap  ) ;
extern int XSetWindowBackground(Display * , Window  , unsigned long  ) ;
extern int XSetTile(Display * , GC  , Pixmap  ) ;
extern int XSetTSOrigin(Display * , GC  , int  , int  ) ;
extern int XSetSubwindowMode(Display * , GC  , int  ) ;
extern int XSetStipple(Display * , GC  , Pixmap  ) ;
extern int XSetState(Display * , GC  , unsigned long  , unsigned long  , int  ,
                     unsigned long  ) ;
typedef unsigned long Atom;
extern int XSetSelectionOwner(Display * , Atom  , Window  , Time  ) ;
extern int XSetScreenSaver(Display * , int  , int  , int  , int  ) ;
extern int XSetPointerMapping(Display * , unsigned char const   * , int  ) ;
extern int XSetPlaneMask(Display * , GC  , unsigned long  ) ;
struct __anonstruct_XModifierKeymap_86;
typedef struct __anonstruct_XModifierKeymap_86 XModifierKeymap;
extern int XSetModifierMapping(Display * , XModifierKeymap * ) ;
extern int XSetLineAttributes(Display * , GC  , unsigned int  , int  , int  ,
                              int  ) ;
extern int XSetInputFocus(Display * , Window  , int  , Time  ) ;
extern int XSetIconName(Display * , Window  , char const   * ) ;
extern int XSetGraphicsExposures(Display * , GC  , int  ) ;
extern int XSetFunction(Display * , GC  , int  ) ;
extern int XSetForeground(Display * , GC  , unsigned long  ) ;
extern int XSetFontPath(Display * , char ** , int  ) ;
extern int XSetFont(Display * , GC  , Font  ) ;
extern int XSetFillStyle(Display * , GC  , int  ) ;
extern int XSetFillRule(Display * , GC  , int  ) ;
extern int XSetDashes(Display * , GC  , int  , char const   * , int  ) ;
extern int XSetCommand(Display * , Window  , char ** , int  ) ;
extern int XSetCloseDownMode(Display * , int  ) ;
extern int XSetClipRectangles(Display * , GC  , int  , int  , XRectangle * ,
                              int  , int  ) ;
extern int XSetClipOrigin(Display * , GC  , int  , int  ) ;
extern int XSetClipMask(Display * , GC  , Pixmap  ) ;
extern int XSetBackground(Display * , GC  , unsigned long  ) ;
extern int XSetArcMode(Display * , GC  , int  ) ;
extern int XSetAccessControl(Display * , int  ) ;
extern int XSendEvent(Display * , Window  , int  , long  , XEvent * ) ;
extern int XSelectInput(Display * , Window  , long  ) ;
extern int XScreenCount(Display * ) ;
extern int XRotateWindowProperties(Display * , Window  , Atom * , int  , int  ) ;
extern int XRotateBuffers(Display * , int  ) ;
extern int XRestackWindows(Display * , Window * , int  ) ;
extern int XResizeWindow(Display * , Window  , unsigned int  , unsigned int  ) ;
extern int XResetScreenSaver(Display * ) ;
extern int XReparentWindow(Display * , Window  , Window  , int  , int  ) ;
struct __anonstruct_XHostAddress_75;
typedef struct __anonstruct_XHostAddress_75 XHostAddress;
extern int XRemoveHosts(Display * , XHostAddress * , int  ) ;
extern int XRemoveHost(Display * , XHostAddress * ) ;
extern int XRemoveFromSaveSet(Display * , Window  ) ;
struct __anonstruct_XMappingEvent_117;
typedef struct __anonstruct_XMappingEvent_117 XMappingEvent;
extern int XRefreshKeyboardMapping(XMappingEvent * ) ;
typedef XID Cursor;
extern int XRecolorCursor(Display * , Cursor  , XColor * , XColor * ) ;
extern int XRebindKeysym(Display * , KeySym  , KeySym * , int  ,
                         unsigned char const   * , int  ) ;
extern int XReadBitmapFileData(char const   * , unsigned int * ,
                               unsigned int * , unsigned char ** , int * ,
                               int * ) ;
extern int XReadBitmapFile(Display * , Drawable  , char const   * ,
                           unsigned int * , unsigned int * , Pixmap * , int * ,
                           int * ) ;
extern int XRaiseWindow(Display * , Window  ) ;
extern int XQueryTree(Display * , Window  , Window * , Window * , Window ** ,
                      unsigned int * ) ;
extern int XQueryTextExtents16(Display * , XID  , XChar2b const   * , int  ,
                               int * , int * , int * , XCharStruct * ) ;
extern int XQueryTextExtents(Display * , XID  , char const   * , int  , int * ,
                             int * , int * , XCharStruct * ) ;
extern int XQueryPointer(Display * , Window  , Window * , Window * , int * ,
                         int * , int * , int * , unsigned int * ) ;
extern int XQueryKeymap(Display * , char * ) ;
extern int XQueryExtension(Display * , char const   * , int * , int * , int * ) ;
extern int XQueryColors(Display * , Colormap  , XColor * , int  ) ;
extern int XQueryColor(Display * , Colormap  , XColor * ) ;
extern int XQueryBestTile(Display * , Drawable  , unsigned int  ,
                          unsigned int  , unsigned int * , unsigned int * ) ;
extern int XQueryBestStipple(Display * , Drawable  , unsigned int  ,
                             unsigned int  , unsigned int * , unsigned int * ) ;
extern int XQueryBestSize(Display * , int  , Drawable  , unsigned int  ,
                          unsigned int  , unsigned int * , unsigned int * ) ;
extern int XQueryBestCursor(Display * , Drawable  , unsigned int  ,
                            unsigned int  , unsigned int * , unsigned int * ) ;
extern int XQLength(Display * ) ;
struct _XImage;
typedef struct _XImage XImage;
extern int XPutImage(Display * , Drawable  , GC  , XImage * , int  , int  ,
                     int  , int  , unsigned int  , unsigned int  ) ;
extern int XPutBackEvent(Display * , XEvent * ) ;
extern int XProtocolVersion(Display * ) ;
extern int XProtocolRevision(Display * ) ;
extern int XPlanesOfScreen(Screen * ) ;
extern int XPending(Display * ) ;
extern int XPeekIfEvent(Display * , XEvent * , int (*)(Display * , XEvent * ,
                                                       XPointer  ) , XPointer  ) ;
extern int XPeekEvent(Display * , XEvent * ) ;
extern int XParseGeometry(char const   * , int * , int * , unsigned int * ,
                          unsigned int * ) ;
extern int XParseColor(Display * , Colormap  , char const   * , XColor * ) ;
extern int XNoOp(Display * ) ;
extern int XNextEvent(Display * , XEvent * ) ;
extern int XMoveWindow(Display * , Window  , int  , int  ) ;
extern int XMoveResizeWindow(Display * , Window  , int  , int  , unsigned int  ,
                             unsigned int  ) ;
extern int XMinCmapsOfScreen(Screen * ) ;
extern int XMaxCmapsOfScreen(Screen * ) ;
extern int XMaskEvent(Display * , long  , XEvent * ) ;
extern int XMapWindow(Display * , Window  ) ;
extern int XMapSubwindows(Display * , Window  ) ;
extern int XMapRaised(Display * , Window  ) ;
extern int XLowerWindow(Display * , Window  ) ;
extern int XLookupColor(Display * , Colormap  , char const   * , XColor * ,
                        XColor * ) ;
extern int XKillClient(Display * , XID  ) ;
typedef unsigned char KeyCode;
extern KeyCode XKeysymToKeycode(Display * , KeySym  ) ;
extern int XInstallColormap(Display * , Colormap  ) ;
extern int XImageByteOrder(Display * ) ;
extern int XIfEvent(Display * , XEvent * , int (*)(Display * , XEvent * ,
                                                   XPointer  ) , XPointer  ) ;
extern int XHeightOfScreen(Screen * ) ;
extern int XHeightMMOfScreen(Screen * ) ;
extern int XGrabServer(Display * ) ;
extern int XGrabPointer(Display * , Window  , int  , unsigned int  , int  ,
                        int  , Window  , Cursor  , Time  ) ;
extern int XGrabKeyboard(Display * , Window  , int  , int  , int  , Time  ) ;
extern int XGrabKey(Display * , int  , unsigned int  , Window  , int  , int  ,
                    int  ) ;
extern int XGrabButton(Display * , unsigned int  , unsigned int  , Window  ,
                       int  , unsigned int  , int  , int  , Window  , Cursor  ) ;
struct __anonstruct_XWindowAttributes_74;
typedef struct __anonstruct_XWindowAttributes_74 XWindowAttributes;
extern int XGetWindowAttributes(Display * , Window  , XWindowAttributes * ) ;
extern int XGetWindowProperty(Display * , Window  , Atom  , long  , long  ,
                              int  , Atom  , Atom * , int * , unsigned long * ,
                              unsigned long * , unsigned char ** ) ;
extern int XGetTransientForHint(Display * , Window  , Window * ) ;
extern int XGetScreenSaver(Display * , int * , int * , int * , int * ) ;
extern int XGetPointerMapping(Display * , unsigned char * , int  ) ;
extern int XGetPointerControl(Display * , int * , int * , int * ) ;
struct __anonstruct_XKeyboardState_84;
typedef struct __anonstruct_XKeyboardState_84 XKeyboardState;
extern int XGetKeyboardControl(Display * , XKeyboardState * ) ;
extern int XGetInputFocus(Display * , Window * , int * ) ;
extern int XGetIconName(Display * , Window  , char ** ) ;
extern int XGetGeometry(Display * , Drawable  , Window * , int * , int * ,
                        unsigned int * , unsigned int * , unsigned int * ,
                        unsigned int * ) ;
struct __anonstruct_XGCValues_68;
typedef struct __anonstruct_XGCValues_68 XGCValues;
extern int XGetGCValues(Display * , GC  , unsigned long  , XGCValues * ) ;
extern int XGetFontProperty(XFontStruct * , Atom  , unsigned long * ) ;
extern int XGetErrorText(Display * , int  , char * , int  ) ;
extern int XGetErrorDatabaseText(Display * , char const   * , char const   * ,
                                 char const   * , char * , int  ) ;
extern int XGeometry(Display * , int  , char const   * , char const   * ,
                     unsigned int  , unsigned int  , unsigned int  , int  ,
                     int  , int * , int * , int * , int * ) ;
extern int XFreePixmap(Display * , Pixmap  ) ;
extern int XFreeModifiermap(XModifierKeymap * ) ;
extern int XFreeGC(Display * , GC  ) ;
extern int XFreeFontPath(char ** ) ;
extern int XFreeFontNames(char ** ) ;
extern int XFreeFontInfo(char ** , XFontStruct * , int  ) ;
extern int XFreeFont(Display * , XFontStruct * ) ;
extern int XFreeExtensionList(char ** ) ;
extern int XFreeCursor(Display * , Cursor  ) ;
extern int XFreeColors(Display * , Colormap  , unsigned long * , int  ,
                       unsigned long  ) ;
extern int XFreeColormap(Display * , Colormap  ) ;
extern int XFree(void * ) ;
extern int XForceScreenSaver(Display * , int  ) ;
extern int XFlush(Display * ) ;
extern int XFillRectangles(Display * , Drawable  , GC  , XRectangle * , int  ) ;
extern int XFillRectangle(Display * , Drawable  , GC  , int  , int  ,
                          unsigned int  , unsigned int  ) ;
struct __anonstruct_XPoint_80;
typedef struct __anonstruct_XPoint_80 XPoint;
extern int XFillPolygon(Display * , Drawable  , GC  , XPoint * , int  , int  ,
                        int  ) ;
struct __anonstruct_XArc_82;
typedef struct __anonstruct_XArc_82 XArc;
extern int XFillArcs(Display * , Drawable  , GC  , XArc * , int  ) ;
extern int XFillArc(Display * , Drawable  , GC  , int  , int  , unsigned int  ,
                    unsigned int  , int  , int  ) ;
extern int XFetchName(Display * , Window  , char ** ) ;
extern int XEventsQueued(Display * , int  ) ;
extern int XEnableAccessControl(Display * ) ;
struct __anonstruct_XTextItem16_127;
typedef struct __anonstruct_XTextItem16_127 XTextItem16;
extern int XDrawText16(Display * , Drawable  , GC  , int  , int  ,
                       XTextItem16 * , int  ) ;
struct __anonstruct_XTextItem_125;
typedef struct __anonstruct_XTextItem_125 XTextItem;
extern int XDrawText(Display * , Drawable  , GC  , int  , int  , XTextItem * ,
                     int  ) ;
extern int XDrawString16(Display * , Drawable  , GC  , int  , int  ,
                         XChar2b const   * , int  ) ;
extern int XDrawString(Display * , Drawable  , GC  , int  , int  ,
                       char const   * , int  ) ;
struct __anonstruct_XSegment_79;
typedef struct __anonstruct_XSegment_79 XSegment;
extern int XDrawSegments(Display * , Drawable  , GC  , XSegment * , int  ) ;
extern int XDrawRectangles(Display * , Drawable  , GC  , XRectangle * , int  ) ;
extern int XDrawRectangle(Display * , Drawable  , GC  , int  , int  ,
                          unsigned int  , unsigned int  ) ;
extern int XDrawPoints(Display * , Drawable  , GC  , XPoint * , int  , int  ) ;
extern int XDrawPoint(Display * , Drawable  , GC  , int  , int  ) ;
extern int XDrawLines(Display * , Drawable  , GC  , XPoint * , int  , int  ) ;
extern int XDrawLine(Display * , Drawable  , GC  , int  , int  , int  , int  ) ;
extern int XDrawImageString16(Display * , Drawable  , GC  , int  , int  ,
                              XChar2b const   * , int  ) ;
extern int XDrawImageString(Display * , Drawable  , GC  , int  , int  ,
                            char const   * , int  ) ;
extern int XDrawArcs(Display * , Drawable  , GC  , XArc * , int  ) ;
extern int XDrawArc(Display * , Drawable  , GC  , int  , int  , unsigned int  ,
                    unsigned int  , int  , int  ) ;
extern int XDisplayWidthMM(Display * , int  ) ;
extern int XDisplayWidth(Display * , int  ) ;
extern int XDisplayPlanes(Display * , int  ) ;
extern int XDisplayKeycodes(Display * , int * , int * ) ;
extern int XDisplayHeightMM(Display * , int  ) ;
extern int XDisplayHeight(Display * , int  ) ;
extern int XDisplayCells(Display * , int  ) ;
extern int XDisableAccessControl(Display * ) ;
extern int XDoesSaveUnders(Screen * ) ;
extern int XDoesBackingStore(Screen * ) ;
extern int XDestroySubwindows(Display * , Window  ) ;
extern int XDestroyWindow(Display * , Window  ) ;
extern int XDeleteProperty(Display * , Window  , Atom  ) ;
extern int XDefineCursor(Display * , Window  , Cursor  ) ;
extern int XDefaultScreen(Display * ) ;
extern int XDefaultDepthOfScreen(Screen * ) ;
extern int XDefaultDepth(Display * , int  ) ;
extern int XCopyPlane(Display * , Drawable  , Drawable  , GC  , int  , int  ,
                      unsigned int  , unsigned int  , int  , int  ,
                      unsigned long  ) ;
extern int XCopyGC(Display * , GC  , unsigned long  , GC  ) ;
extern int XCopyArea(Display * , Drawable  , Drawable  , GC  , int  , int  ,
                     unsigned int  , unsigned int  , int  , int  ) ;
extern int XConvertSelection(Display * , Atom  , Atom  , Atom  , Window  ,
                             Time  ) ;
extern int XConnectionNumber(Display * ) ;
struct __anonstruct_XWindowChanges_77;
typedef struct __anonstruct_XWindowChanges_77 XWindowChanges;
extern int XConfigureWindow(Display * , Window  , unsigned int  ,
                            XWindowChanges * ) ;
extern int XCloseDisplay(Display * ) ;
extern int XClearWindow(Display * , Window  ) ;
extern int XClearArea(Display * , Window  , int  , int  , unsigned int  ,
                      unsigned int  , int  ) ;
extern int XCirculateSubwindowsUp(Display * , Window  ) ;
extern int XCirculateSubwindowsDown(Display * , Window  ) ;
extern int XCirculateSubwindows(Display * , Window  , int  ) ;
extern int XCheckWindowEvent(Display * , Window  , long  , XEvent * ) ;
extern int XCheckTypedWindowEvent(Display * , Window  , int  , XEvent * ) ;
extern int XCheckTypedEvent(Display * , int  , XEvent * ) ;
extern int XCheckMaskEvent(Display * , long  , XEvent * ) ;
extern int XCheckIfEvent(Display * , XEvent * , int (*)(Display * , XEvent * ,
                                                        XPointer  ) , XPointer  ) ;
struct __anonstruct_XSetWindowAttributes_73;
typedef struct __anonstruct_XSetWindowAttributes_73 XSetWindowAttributes;
extern int XChangeWindowAttributes(Display * , Window  , unsigned long  ,
                                   XSetWindowAttributes * ) ;
extern int XChangeSaveSet(Display * , Window  , int  ) ;
extern int XChangeProperty(Display * , Window  , Atom  , Atom  , int  , int  ,
                           unsigned char const   * , int  ) ;
extern int XChangePointerControl(Display * , int  , int  , int  , int  , int  ) ;
extern int XChangeKeyboardMapping(Display * , int  , int  , KeySym * , int  ) ;
struct __anonstruct_XKeyboardControl_83;
typedef struct __anonstruct_XKeyboardControl_83 XKeyboardControl;
extern int XChangeKeyboardControl(Display * , unsigned long  ,
                                  XKeyboardControl * ) ;
extern int XChangeGC(Display * , GC  , unsigned long  , XGCValues * ) ;
extern int XChangeActivePointerGrab(Display * , unsigned int  , Cursor  , Time  ) ;
extern int XCellsOfScreen(Screen * ) ;
extern int XBitmapUnit(Display * ) ;
extern int XBitmapPad(Display * ) ;
extern int XBitmapBitOrder(Display * ) ;
extern int XBell(Display * , int  ) ;
extern int XAutoRepeatOn(Display * ) ;
extern int XAutoRepeatOff(Display * ) ;
extern int XAllowEvents(Display * , int  , Time  ) ;
extern int XAllocNamedColor(Display * , Colormap  , char const   * , XColor * ,
                            XColor * ) ;
extern int XAllocColorPlanes(Display * , Colormap  , int  , unsigned long * ,
                             int  , int  , int  , int  , unsigned long * ,
                             unsigned long * , unsigned long * ) ;
extern int XAllocColorCells(Display * , Colormap  , int  , unsigned long * ,
                            unsigned int  , unsigned long * , unsigned int  ) ;
extern int XAllocColor(Display * , Colormap  , XColor * ) ;
extern int XAddToSaveSet(Display * , Window  ) ;
struct _XExtData;
typedef struct _XExtData XExtData;
extern int XAddToExtensionList(struct _XExtData ** , XExtData * ) ;
extern int XAddHosts(Display * , XHostAddress * , int  ) ;
extern int XAddHost(Display * , XHostAddress * ) ;
extern int XActivateScreenSaver(Display * ) ;
extern int XSetTransientForHint(Display * , Window  , Window  ) ;
extern void XFreeStringList(char ** ) ;
extern int XSetWMColormapWindows(Display * , Window  , Window * , int  ) ;
extern int XGetWMColormapWindows(Display * , Window  , Window ** , int * ) ;
extern int XGetCommand(Display * , Window  , char *** , int * ) ;
extern int XWithdrawWindow(Display * , Window  , int  ) ;
extern int XIconifyWindow(Display * , Window  , int  ) ;
extern int XSetWMProtocols(Display * , Window  , Atom * , int  ) ;
extern int XGetWMProtocols(Display * , Window  , Atom ** , int * ) ;
extern int XReconfigureWMWindow(Display * , Window  , int  , unsigned int  ,
                                XWindowChanges * ) ;
extern int *XListDepths(Display * , int  , int * ) ;
struct __anonstruct_XPixmapFormatValues_67;
typedef struct __anonstruct_XPixmapFormatValues_67 XPixmapFormatValues;
extern XPixmapFormatValues *XListPixmapFormats(Display * , int * ) ;
typedef int (*XIOErrorHandler)(Display * );
extern XIOErrorHandler XSetIOErrorHandler(int (*)(Display * ) ) ;
struct __anonstruct_XErrorEvent_118;
typedef struct __anonstruct_XErrorEvent_118 XErrorEvent;
typedef int (*XErrorHandler)(Display * , XErrorEvent * );
extern XErrorHandler XSetErrorHandler(int (*)(Display * , XErrorEvent * ) ) ;
extern int XScreenNumberOfScreen(Screen * ) ;
extern long XEventMaskOfScreen(Screen * ) ;
extern Screen *XDefaultScreenOfDisplay(Display * ) ;
extern Screen *XScreenOfDisplay(Display * , int  ) ;
extern Display *XDisplayOfScreen(Screen * ) ;
extern Colormap XDefaultColormapOfScreen(Screen * ) ;
extern Colormap XDefaultColormap(Display * , int  ) ;
extern char *XDisplayString(Display * ) ;
extern char *XServerVendor(Display * ) ;
extern unsigned long XLastKnownRequestProcessed(Display * ) ;
extern unsigned long XNextRequest(Display * ) ;
extern unsigned long XWhitePixelOfScreen(Screen * ) ;
extern unsigned long XBlackPixelOfScreen(Screen * ) ;
extern unsigned long XAllPlanes(void) ;
extern unsigned long XWhitePixel(Display * , int  ) ;
extern unsigned long XBlackPixel(Display * , int  ) ;
extern GC XDefaultGCOfScreen(Screen * ) ;
extern GC XDefaultGC(Display * , int  ) ;
struct __anonstruct_Visual_69;
typedef struct __anonstruct_Visual_69 Visual;
extern Visual *XDefaultVisualOfScreen(Screen * ) ;
extern Visual *XDefaultVisual(Display * , int  ) ;
extern Window XRootWindowOfScreen(Screen * ) ;
extern Window XDefaultRootWindow(Display * ) ;
extern Window XRootWindow(Display * , int  ) ;
union __anonunion_XEDataObject_128;
typedef union __anonunion_XEDataObject_128 XEDataObject;
extern XExtData **XEHeadOfExtensionList(XEDataObject  ) ;
extern XExtData *XFindOnExtensionList(XExtData ** , int  ) ;
struct __anonstruct_XExtCodes_66;
typedef struct __anonstruct_XExtCodes_66 XExtCodes;
extern XExtCodes *XAddExtension(Display * ) ;
extern XExtCodes *XInitExtension(Display * , char const   * ) ;
extern void XUnlockDisplay(Display * ) ;
extern void XLockDisplay(Display * ) ;
extern int XInitThreads(void) ;
typedef unsigned long VisualID;
extern VisualID XVisualIDFromVisual(Visual * ) ;
extern unsigned long XDisplayMotionBufferSize(Display * ) ;
extern char *XScreenResourceString(Screen * ) ;
extern char *XResourceManagerString(Display * ) ;
extern long XExtendedMaxRequestSize(Display * ) ;
extern long XMaxRequestSize(Display * ) ;
extern KeySym XStringToKeysym(char const   * ) ;
extern KeySym *XGetKeyboardMapping(Display * , KeyCode  , int  , int * ) ;
extern KeySym XLookupKeysym(XKeyEvent * , int  ) ;
extern KeySym XKeycodeToKeysym(Display * , KeyCode  , int  ) ;
extern XHostAddress *XListHosts(Display * , int * , int * ) ;
extern Atom *XListProperties(Display * , Window  , int * ) ;
extern char **XListExtensions(Display * , int * ) ;
extern char **XGetFontPath(Display * , int * ) ;
extern char **XListFontsWithInfo(Display * , char const   * , int  , int * ,
                                 XFontStruct ** ) ;
extern char **XListFonts(Display * , char const   * , int  , int * ) ;
extern Colormap *XListInstalledColormaps(Display * , Window  , int * ) ;
extern Window XCreateWindow(Display * , Window  , int  , int  , unsigned int  ,
                            unsigned int  , unsigned int  , int  ,
                            unsigned int  , Visual * , unsigned long  ,
                            XSetWindowAttributes * ) ;
extern Window XGetSelectionOwner(Display * , Atom  ) ;
extern Window XCreateSimpleWindow(Display * , Window  , int  , int  ,
                                  unsigned int  , unsigned int  ,
                                  unsigned int  , unsigned long  ,
                                  unsigned long  ) ;
extern Pixmap XCreatePixmapFromBitmapData(Display * , Drawable  , char * ,
                                          unsigned int  , unsigned int  ,
                                          unsigned long  , unsigned long  ,
                                          unsigned int  ) ;
extern Pixmap XCreateBitmapFromData(Display * , Drawable  , char const   * ,
                                    unsigned int  , unsigned int  ) ;
extern Pixmap XCreatePixmap(Display * , Drawable  , unsigned int  ,
                            unsigned int  , unsigned int  ) ;
extern void XFlushGC(Display * , GC  ) ;
typedef XID GContext;
extern GContext XGContextFromGC(GC  ) ;
extern GC XCreateGC(Display * , Drawable  , unsigned long  , XGCValues * ) ;
extern Font XLoadFont(Display * , char const   * ) ;
extern Cursor XCreateFontCursor(Display * , unsigned int  ) ;
extern Cursor XCreateGlyphCursor(Display * , Font  , Font  , unsigned int  ,
                                 unsigned int  , XColor const   * ,
                                 XColor const   * ) ;
extern Cursor XCreatePixmapCursor(Display * , Pixmap  , Pixmap  , XColor * ,
                                  XColor * , unsigned int  , unsigned int  ) ;
extern Colormap XCreateColormap(Display * , Window  , Visual * , int  ) ;
extern Colormap XCopyColormapAndFree(Display * , Colormap  ) ;
extern int XInternAtoms(Display * , char ** , int  , int  , Atom * ) ;
extern Atom XInternAtom(Display * , char const   * , int  ) ;
extern int (*XSetAfterFunction(Display * , int (*)(Display * ) ))(Display * ) ;
extern int (*XSynchronize(Display * , int  ))(Display * ) ;
extern char *XKeysymToString(KeySym  ) ;
extern char *XDisplayName(char const   * ) ;
extern char *XGetDefault(Display * , char const   * , char const   * ) ;
extern int XGetAtomNames(Display * , Atom * , int  , char ** ) ;
extern char *XGetAtomName(Display * , Atom  ) ;
extern char *XFetchBuffer(Display * , int * , int  ) ;
extern char *XFetchBytes(Display * , int * ) ;
extern void XrmInitialize(void) ;
extern Display *XOpenDisplay(char const   * ) ;
extern XImage *XGetSubImage(Display * , Drawable  , int  , int  ,
                            unsigned int  , unsigned int  , unsigned long  ,
                            int  , XImage * , int  , int  ) ;
extern XImage *XGetImage(Display * , Drawable  , int  , int  , unsigned int  ,
                         unsigned int  , unsigned long  , int  ) ;
extern int XInitImage(XImage * ) ;
extern XImage *XCreateImage(Display * , Visual * , unsigned int  , int  , int  ,
                            char * , unsigned int  , unsigned int  , int  ,
                            int  ) ;
extern XModifierKeymap *XNewModifiermap(int  ) ;
extern XModifierKeymap *XInsertModifiermapEntry(XModifierKeymap * , KeyCode  ,
                                                int  ) ;
extern XModifierKeymap *XGetModifierMapping(Display * ) ;
extern XModifierKeymap *XDeleteModifiermapEntry(XModifierKeymap * , KeyCode  ,
                                                int  ) ;
struct __anonstruct_XTimeCoord_85;
typedef struct __anonstruct_XTimeCoord_85 XTimeCoord;
extern XTimeCoord *XGetMotionEvents(Display * , Window  , Time  , Time  , int * ) ;
extern XFontStruct *XQueryFont(Display * , XID  ) ;
extern XFontStruct *XLoadQueryFont(Display * , char const   * ) ;
extern int _Xdebug ;
extern int _Xmblen(char *str , int len ) ;
typedef unsigned long pthread_t;
__inline extern  __attribute__((__nothrow__)) int pthread_equal(pthread_t __thread1 ,
                                                                pthread_t __thread2 ) ;
__inline extern int pthread_equal(pthread_t __thread1 , pthread_t __thread2 ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "236\n");
  fflush(_coverage_fout);
  }
  return (__thread1 == __thread2);
}
}
__inline extern  __attribute__((__nothrow__)) int pthread_equal(pthread_t __thread1 ,
                                                                pthread_t __thread2 ) ;
extern  __attribute__((__nothrow__)) int pthread_atfork(void (*__prepare)(void) ,
                                                        void (*__parent)(void) ,
                                                        void (*__child)(void) ) ;
typedef int __clockid_t;
extern  __attribute__((__nothrow__)) int pthread_getcpuclockid(pthread_t __thread_id ,
                                                               __clockid_t *__clock_id )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int pthread_setspecific(pthread_key_t __key ,
                                                             void const   *__pointer ) ;
extern  __attribute__((__nothrow__)) void *pthread_getspecific(pthread_key_t __key ) ;
extern  __attribute__((__nothrow__)) int pthread_key_delete(pthread_key_t __key ) ;
extern  __attribute__((__nothrow__)) int pthread_key_create(pthread_key_t *__key ,
                                                            void (*__destr_function)(void * ) )  __attribute__((__nonnull__(1))) ;
union __anonunion_pthread_barrierattr_t_21;
typedef union __anonunion_pthread_barrierattr_t_21 pthread_barrierattr_t;
extern  __attribute__((__nothrow__)) int pthread_barrierattr_setpshared(pthread_barrierattr_t *__attr ,
                                                                        int __pshared )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_barrierattr_getpshared(pthread_barrierattr_t const   * __restrict  __attr ,
                                                                        int * __restrict  __pshared )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_barrierattr_destroy(pthread_barrierattr_t *__attr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_barrierattr_init(pthread_barrierattr_t *__attr )  __attribute__((__nonnull__(1))) ;
union __anonunion_pthread_barrier_t_20;
typedef union __anonunion_pthread_barrier_t_20 pthread_barrier_t;
extern  __attribute__((__nothrow__)) int pthread_barrier_wait(pthread_barrier_t *__barrier )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_barrier_destroy(pthread_barrier_t *__barrier )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_barrier_init(pthread_barrier_t * __restrict  __barrier ,
                                                              pthread_barrierattr_t const   * __restrict  __attr ,
                                                              unsigned int __count )  __attribute__((__nonnull__(1))) ;
typedef int volatile   pthread_spinlock_t;
extern  __attribute__((__nothrow__)) int pthread_spin_unlock(pthread_spinlock_t *__lock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_spin_trylock(pthread_spinlock_t *__lock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_spin_lock(pthread_spinlock_t *__lock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_spin_destroy(pthread_spinlock_t *__lock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_spin_init(pthread_spinlock_t *__lock ,
                                                           int __pshared )  __attribute__((__nonnull__(1))) ;
union __anonunion_pthread_condattr_t_16;
typedef union __anonunion_pthread_condattr_t_16 pthread_condattr_t;
extern  __attribute__((__nothrow__)) int pthread_condattr_setclock(pthread_condattr_t *__attr ,
                                                                   __clockid_t __clock_id )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_condattr_getclock(pthread_condattr_t const   * __restrict  __attr ,
                                                                   __clockid_t * __restrict  __clock_id )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_condattr_setpshared(pthread_condattr_t *__attr ,
                                                                     int __pshared )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_condattr_getpshared(pthread_condattr_t const   * __restrict  __attr ,
                                                                     int * __restrict  __pshared )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_condattr_destroy(pthread_condattr_t *__attr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_condattr_init(pthread_condattr_t *__attr )  __attribute__((__nonnull__(1))) ;
struct timespec;
union __anonunion_pthread_cond_t_14;
typedef union __anonunion_pthread_cond_t_14 pthread_cond_t;
extern int pthread_cond_timedwait(pthread_cond_t * __restrict  __cond ,
                                  pthread_mutex_t * __restrict  __mutex ,
                                  struct timespec  const  * __restrict  __abstime )  __attribute__((__nonnull__(1,2,3))) ;
extern int pthread_cond_wait(pthread_cond_t * __restrict  __cond ,
                             pthread_mutex_t * __restrict  __mutex )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_cond_broadcast(pthread_cond_t *__cond )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_cond_signal(pthread_cond_t *__cond )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_cond_destroy(pthread_cond_t *__cond )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_cond_init(pthread_cond_t * __restrict  __cond ,
                                                           pthread_condattr_t const   * __restrict  __cond_attr )  __attribute__((__nonnull__(1))) ;
union __anonunion_pthread_rwlockattr_t_19;
typedef union __anonunion_pthread_rwlockattr_t_19 pthread_rwlockattr_t;
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_setkind_np(pthread_rwlockattr_t *__attr ,
                                                                       int __pref )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_getkind_np(pthread_rwlockattr_t const   * __restrict  __attr ,
                                                                       int * __restrict  __pref )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *__attr ,
                                                                       int __pshared )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_getpshared(pthread_rwlockattr_t const   * __restrict  __attr ,
                                                                       int * __restrict  __pshared )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_destroy(pthread_rwlockattr_t *__attr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_init(pthread_rwlockattr_t *__attr )  __attribute__((__nonnull__(1))) ;
union __anonunion_pthread_rwlock_t_17;
typedef union __anonunion_pthread_rwlock_t_17 pthread_rwlock_t;
extern  __attribute__((__nothrow__)) int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlock_timedwrlock(pthread_rwlock_t * __restrict  __rwlock ,
                                                                    struct timespec  const  * __restrict  __abstime )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlock_trywrlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlock_timedrdlock(pthread_rwlock_t * __restrict  __rwlock ,
                                                                    struct timespec  const  * __restrict  __abstime )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlock_tryrdlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlock_destroy(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_rwlock_init(pthread_rwlock_t * __restrict  __rwlock ,
                                                             pthread_rwlockattr_t const   * __restrict  __attr )  __attribute__((__nonnull__(1))) ;
union __anonunion_pthread_mutexattr_t_13;
typedef union __anonunion_pthread_mutexattr_t_13 pthread_mutexattr_t;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_setrobust(pthread_mutexattr_t *__attr ,
                                                                     int __robustness )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_getrobust(pthread_mutexattr_t const   *__attr ,
                                                                     int *__robustness )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *__attr ,
                                                                          int __prioceiling )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_getprioceiling(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                          int * __restrict  __prioceiling )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_setprotocol(pthread_mutexattr_t *__attr ,
                                                                       int __protocol )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_getprotocol(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                       int * __restrict  __protocol )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_settype(pthread_mutexattr_t *__attr ,
                                                                   int __kind )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_gettype(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                   int * __restrict  __kind )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_setpshared(pthread_mutexattr_t *__attr ,
                                                                      int __pshared )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_getpshared(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                      int * __restrict  __pshared )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutexattr_init(pthread_mutexattr_t *__attr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_consistent(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_setprioceiling(pthread_mutex_t * __restrict  __mutex ,
                                                                      int __prioceiling ,
                                                                      int * __restrict  __old_ceiling )  __attribute__((__nonnull__(1,3))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_getprioceiling(pthread_mutex_t const   * __restrict  __mutex ,
                                                                      int * __restrict  __prioceiling )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_timedlock(pthread_mutex_t * __restrict  __mutex ,
                                                                 struct timespec  const  * __restrict  __abstime )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_trylock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_destroy(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_init(pthread_mutex_t *__mutex ,
                                                            pthread_mutexattr_t const   *__mutexattr )  __attribute__((__nonnull__(1))) ;
struct __jmp_buf_tag;
extern  __attribute__((__nothrow__)) int __sigsetjmp(struct __jmp_buf_tag *__env ,
                                                     int __savemask ) ;
struct __anonstruct___pthread_unwind_buf_t_64;
typedef struct __anonstruct___pthread_unwind_buf_t_64  __attribute__((__aligned__)) __pthread_unwind_buf_t;
extern  __attribute__((__noreturn__)) void ( __attribute__((__regparm__(1))) __pthread_unwind_next)(__pthread_unwind_buf_t *__buf )  __attribute__((__weak__)) ;
extern void ( __attribute__((__regparm__(1))) __pthread_unregister_cancel)(__pthread_unwind_buf_t *__buf ) ;
extern void ( __attribute__((__regparm__(1))) __pthread_register_cancel)(__pthread_unwind_buf_t *__buf ) ;
extern void pthread_testcancel(void) ;
extern int pthread_cancel(pthread_t __th ) ;
extern int pthread_setcanceltype(int __type , int *__oldtype ) ;
extern int pthread_setcancelstate(int __state , int *__oldstate ) ;
typedef int pthread_once_t;
extern int pthread_once(pthread_once_t *__once_control ,
                        void (*__init_routine)(void) )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_setschedprio(pthread_t __target_thread ,
                                                              int __prio ) ;
struct sched_param;
extern  __attribute__((__nothrow__)) int pthread_getschedparam(pthread_t __target_thread ,
                                                               int * __restrict  __policy ,
                                                               struct sched_param * __restrict  __param )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) int pthread_setschedparam(pthread_t __target_thread ,
                                                               int __policy ,
                                                               struct sched_param  const  *__param )  __attribute__((__nonnull__(3))) ;
union __anonunion_pthread_attr_t_10;
typedef union __anonunion_pthread_attr_t_10 pthread_attr_t;
extern  __attribute__((__nothrow__)) int pthread_attr_setstack(pthread_attr_t *__attr ,
                                                               void *__stackaddr ,
                                                               size_t __stacksize )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getstack(pthread_attr_t const   * __restrict  __attr ,
                                                               void ** __restrict  __stackaddr ,
                                                               size_t * __restrict  __stacksize )  __attribute__((__nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_setstacksize(pthread_attr_t *__attr ,
                                                                   size_t __stacksize )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getstacksize(pthread_attr_t const   * __restrict  __attr ,
                                                                   size_t * __restrict  __stacksize )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_setstackaddr(pthread_attr_t *__attr ,
                                                                   void *__stackaddr )  __attribute__((__nonnull__(1),
__deprecated__)) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getstackaddr(pthread_attr_t const   * __restrict  __attr ,
                                                                   void ** __restrict  __stackaddr )  __attribute__((__nonnull__(1,2),
__deprecated__)) ;
extern  __attribute__((__nothrow__)) int pthread_attr_setscope(pthread_attr_t *__attr ,
                                                               int __scope )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getscope(pthread_attr_t const   * __restrict  __attr ,
                                                               int * __restrict  __scope )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_setinheritsched(pthread_attr_t *__attr ,
                                                                      int __inherit )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getinheritsched(pthread_attr_t const   * __restrict  __attr ,
                                                                      int * __restrict  __inherit )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_setschedpolicy(pthread_attr_t *__attr ,
                                                                     int __policy )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getschedpolicy(pthread_attr_t const   * __restrict  __attr ,
                                                                     int * __restrict  __policy )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_setschedparam(pthread_attr_t * __restrict  __attr ,
                                                                    struct sched_param  const  * __restrict  __param )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getschedparam(pthread_attr_t const   * __restrict  __attr ,
                                                                    struct sched_param * __restrict  __param )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_setguardsize(pthread_attr_t *__attr ,
                                                                   size_t __guardsize )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getguardsize(pthread_attr_t const   *__attr ,
                                                                   size_t *__guardsize )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_setdetachstate(pthread_attr_t *__attr ,
                                                                     int __detachstate )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_getdetachstate(pthread_attr_t const   *__attr ,
                                                                     int *__detachstate )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_destroy(pthread_attr_t *__attr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_attr_init(pthread_attr_t *__attr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) pthread_t pthread_self(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int pthread_detach(pthread_t __th ) ;
extern int pthread_join(pthread_t __th , void **__thread_return ) ;
extern  __attribute__((__noreturn__)) void pthread_exit(void *__retval ) ;
extern  __attribute__((__nothrow__)) int pthread_create(pthread_t * __restrict  __newthread ,
                                                        pthread_attr_t const   * __restrict  __attr ,
                                                        void *(*__start_routine)(void * ) ,
                                                        void * __restrict  __arg )  __attribute__((__nonnull__(1,3))) ;
typedef void *__timer_t;
typedef __timer_t timer_t;
extern  __attribute__((__nothrow__)) int timer_getoverrun(timer_t __timerid ) ;
struct itimerspec;
extern  __attribute__((__nothrow__)) int timer_gettime(timer_t __timerid ,
                                                       struct itimerspec *__value ) ;
extern  __attribute__((__nothrow__)) int timer_settime(timer_t __timerid ,
                                                       int __flags ,
                                                       struct itimerspec  const  * __restrict  __value ,
                                                       struct itimerspec * __restrict  __ovalue ) ;
extern  __attribute__((__nothrow__)) int timer_delete(timer_t __timerid ) ;
struct sigevent;
typedef __clockid_t clockid_t;
extern  __attribute__((__nothrow__)) int timer_create(clockid_t __clock_id ,
                                                      struct sigevent * __restrict  __evp ,
                                                      timer_t * __restrict  __timerid ) ;
typedef int __pid_t;
typedef __pid_t pid_t;
extern  __attribute__((__nothrow__)) int clock_getcpuclockid(pid_t __pid ,
                                                             clockid_t *__clock_id ) ;
extern int clock_nanosleep(clockid_t __clock_id , int __flags ,
                           struct timespec  const  *__req ,
                           struct timespec *__rem ) ;
extern  __attribute__((__nothrow__)) int clock_settime(clockid_t __clock_id ,
                                                       struct timespec  const  *__tp ) ;
extern  __attribute__((__nothrow__)) int clock_gettime(clockid_t __clock_id ,
                                                       struct timespec *__tp ) ;
extern  __attribute__((__nothrow__)) int clock_getres(clockid_t __clock_id ,
                                                      struct timespec *__res ) ;
extern int nanosleep(struct timespec  const  *__requested_time ,
                     struct timespec *__remaining ) ;
extern  __attribute__((__nothrow__)) int dysize(int __year )  __attribute__((__const__)) ;
typedef long __time_t;
typedef __time_t time_t;
extern  __attribute__((__nothrow__)) time_t timelocal(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) time_t timegm(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) int stime(time_t const   *__when ) ;
extern long timezone ;
extern int daylight ;
extern  __attribute__((__nothrow__)) void tzset(void) ;
extern char *tzname[2] ;
extern long __timezone ;
extern int __daylight ;
extern char *__tzname[2] ;
extern  __attribute__((__nothrow__)) char *ctime_r(time_t const   * __restrict  __timer ,
                                                   char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) char *asctime_r(struct tm  const  * __restrict  __tp ,
                                                     char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) char *asctime(struct tm  const  *__tp ) ;
extern  __attribute__((__nothrow__)) struct tm *localtime_r(time_t const   * __restrict  __timer ,
                                                            struct tm * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) struct tm *gmtime_r(time_t const   * __restrict  __timer ,
                                                         struct tm * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) struct tm *gmtime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) size_t strftime_l(char * __restrict  __s ,
                                                       size_t __maxsize ,
                                                       char const   * __restrict  __format ,
                                                       struct tm  const  * __restrict  __tp ,
                                                       __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) double difftime(time_t __time1 ,
                                                     time_t __time0 )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
typedef long __clock_t;
typedef __clock_t clock_t;
extern  __attribute__((__nothrow__)) clock_t clock(void) ;
extern  __attribute__((__nothrow__)) int sched_rr_get_interval(__pid_t __pid ,
                                                               struct timespec *__t ) ;
extern  __attribute__((__nothrow__)) int sched_get_priority_min(int __algorithm ) ;
extern  __attribute__((__nothrow__)) int sched_get_priority_max(int __algorithm ) ;
extern  __attribute__((__nothrow__)) int sched_yield(void) ;
extern  __attribute__((__nothrow__)) int sched_getscheduler(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) int sched_setscheduler(__pid_t __pid ,
                                                            int __policy ,
                                                            struct sched_param  const  *__param ) ;
extern  __attribute__((__nothrow__)) int sched_getparam(__pid_t __pid ,
                                                        struct sched_param *__param ) ;
extern  __attribute__((__nothrow__)) int sched_setparam(__pid_t __pid ,
                                                        struct sched_param  const  *__param ) ;
struct __anonstruct_cpu_set_t_54;
typedef struct __anonstruct_cpu_set_t_54 cpu_set_t;
extern  __attribute__((__nothrow__)) void __sched_cpufree(cpu_set_t *__set ) ;
extern  __attribute__((__nothrow__)) cpu_set_t *__sched_cpualloc(size_t __count ) ;
extern  __attribute__((__nothrow__)) int __sched_cpucount(size_t __setsize ,
                                                          cpu_set_t const   *__setp ) ;
extern  __attribute__((__nothrow__)) int sched_getcpu(void) ;
extern  __attribute__((__nothrow__)) int unshare(int __flags ) ;
extern  __attribute__((__nothrow__)) int clone(int (*__fn)(void *__arg ) ,
                                               void *__child_stack ,
                                               int __flags , void *__arg  , ...) ;
extern  __attribute__((__nothrow__)) char *dlerror(void) ;
extern  __attribute__((__nothrow__)) void *dlsym(void * __restrict  __handle ,
                                                 char const   * __restrict  __name )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int dlclose(void *__handle )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *dlopen(char const   *__file ,
                                                  int __mode ) ;
typedef int __ssize_t;
extern  __attribute__((__nothrow__)) __ssize_t getdirentries(int __fd ,
                                                             char * __restrict  __buf ,
                                                             size_t __nbytes ,
                                                             __off64_t * __restrict  __basep )  __asm__("getdirentries64") __attribute__((__nonnull__(2,4))) ;
struct dirent;
extern  __attribute__((__nothrow__)) int alphasort(struct dirent  const  **__e1 ,
                                                   struct dirent  const  **__e2 )  __asm__("alphasort64") __attribute__((__pure__,
__nonnull__(1,2))) ;
extern int scandir(char const   * __restrict  __dir ,
                   struct dirent *** __restrict  __namelist ,
                   int (*__selector)(struct dirent  const  * ) ,
                   int (*__cmp)(struct dirent  const  ** ,
                                struct dirent  const  ** ) )  __asm__("scandir64") __attribute__((__nonnull__(1,2))) ;
struct __dirstream;
typedef struct __dirstream DIR;
extern  __attribute__((__nothrow__)) int dirfd(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long telldir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void seekdir(DIR *__dirp , long __pos )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void rewinddir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern int readdir_r(DIR * __restrict  __dirp ,
                     struct dirent * __restrict  __entry ,
                     struct dirent ** __restrict  __result )  __asm__("readdir64_r") __attribute__((__nonnull__(1,2,3))) ;
extern struct dirent *readdir(DIR *__dirp )  __asm__("readdir64") __attribute__((__nonnull__(1))) ;
extern int closedir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern DIR *fdopendir(int __fd ) ;
extern DIR *opendir(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int tcflow(int __fd , int __action ) ;
extern  __attribute__((__nothrow__)) int tcflush(int __fd ,
                                                 int __queue_selector ) ;
extern int tcdrain(int __fd ) ;
extern  __attribute__((__nothrow__)) int tcsendbreak(int __fd , int __duration ) ;
struct termios;
extern  __attribute__((__nothrow__)) void cfmakeraw(struct termios *__termios_p ) ;
extern  __attribute__((__nothrow__)) int tcsetattr(int __fd ,
                                                   int __optional_actions ,
                                                   struct termios  const  *__termios_p ) ;
extern  __attribute__((__nothrow__)) int tcgetattr(int __fd ,
                                                   struct termios *__termios_p ) ;
typedef unsigned int speed_t;
extern  __attribute__((__nothrow__)) int cfsetspeed(struct termios *__termios_p ,
                                                    speed_t __speed ) ;
extern  __attribute__((__nothrow__)) int cfsetispeed(struct termios *__termios_p ,
                                                     speed_t __speed ) ;
extern  __attribute__((__nothrow__)) int cfsetospeed(struct termios *__termios_p ,
                                                     speed_t __speed ) ;
extern  __attribute__((__nothrow__)) speed_t cfgetispeed(struct termios  const  *__termios_p ) ;
extern  __attribute__((__nothrow__)) speed_t cfgetospeed(struct termios  const  *__termios_p ) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;
extern  __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid ,
                                                      int __signo ) ;
struct __anonstruct___sigset_t_8;
typedef struct __anonstruct___sigset_t_8 __sigset_t;
extern  __attribute__((__nothrow__)) int pthread_sigmask(int __how ,
                                                         __sigset_t const   * __restrict  __newmask ,
                                                         __sigset_t * __restrict  __oldmask ) ;
struct sigaltstack;
extern  __attribute__((__nothrow__)) int sigaltstack(struct sigaltstack  const  * __restrict  __ss ,
                                                     struct sigaltstack * __restrict  __oss ) ;
struct sigstack;
extern  __attribute__((__nothrow__)) int sigstack(struct sigstack *__ss ,
                                                  struct sigstack *__oss )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int siginterrupt(int __sig ,
                                                      int __interrupt ) ;
struct sigcontext;
extern  __attribute__((__nothrow__)) int sigreturn(struct sigcontext *__scp ) ;
struct sigvec;
extern  __attribute__((__nothrow__)) int sigvec(int __sig ,
                                                struct sigvec  const  *__vec ,
                                                struct sigvec *__ovec ) ;
extern char const   * const  sys_siglist[65] ;
extern char const   * const  _sys_siglist[65] ;
union sigval;
extern  __attribute__((__nothrow__)) int sigqueue(__pid_t __pid , int __sig ,
                                                  union sigval __val ) ;
struct siginfo;
typedef struct siginfo siginfo_t;
typedef __sigset_t sigset_t;
extern int sigtimedwait(sigset_t const   * __restrict  __set ,
                        siginfo_t * __restrict  __info ,
                        struct timespec  const  * __restrict  __timeout )  __attribute__((__nonnull__(1))) ;
extern int sigwaitinfo(sigset_t const   * __restrict  __set ,
                       siginfo_t * __restrict  __info )  __attribute__((__nonnull__(1))) ;
extern int sigwait(sigset_t const   * __restrict  __set ,
                   int * __restrict  __sig )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int sigpending(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
struct sigaction;
extern  __attribute__((__nothrow__)) int sigaction(int __sig ,
                                                   struct sigaction  const  * __restrict  __act ,
                                                   struct sigaction * __restrict  __oact ) ;
extern int sigsuspend(sigset_t const   *__set )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigprocmask(int __how ,
                                                     sigset_t const   * __restrict  __set ,
                                                     sigset_t * __restrict  __oset ) ;
extern  __attribute__((__nothrow__)) int sigismember(sigset_t const   *__set ,
                                                     int __signo )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigdelset(sigset_t *__set ,
                                                   int __signo )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigaddset(sigset_t *__set ,
                                                   int __signo )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigfillset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sigemptyset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int siggetmask(void)  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigsetmask(int __mask )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigblock(int __mask )  __attribute__((__deprecated__)) ;
extern int __sigpause(int __sig_or_mask , int __is_sig ) ;
extern void psiginfo(siginfo_t const   *__pinfo , char const   *__s ) ;
extern void psignal(int __sig , char const   *__s ) ;
extern  __attribute__((__nothrow__)) int gsignal(int __sig ) ;
typedef void (*__sighandler_t)(int  );
extern  __attribute__((__nothrow__)) __sighandler_t ssignal(int __sig ,
                                                            void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) int raise(int __sig ) ;
extern  __attribute__((__nothrow__)) int killpg(__pid_t __pgrp , int __sig ) ;
extern  __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig ) ;
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig ,
                                                           void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) __sighandler_t __sysv_signal(int __sig ,
                                                                  void (*__handler)(int  ) ) ;
struct __anonstruct___sigset_t_8 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
__inline extern int __sigdelset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "232\n");
  fflush(_coverage_fout);
  }
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "233\n");
  fflush(_coverage_fout);
  }
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  {
  fprintf(_coverage_fout, "234\n");
  fflush(_coverage_fout);
  }
  __set->__val[__word] &= ~ __mask;
  {
  fprintf(_coverage_fout, "235\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
__inline extern int __sigdelset(__sigset_t *__set , int __sig ) ;
__inline extern int __sigaddset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "228\n");
  fflush(_coverage_fout);
  }
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "229\n");
  fflush(_coverage_fout);
  }
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  {
  fprintf(_coverage_fout, "230\n");
  fflush(_coverage_fout);
  }
  __set->__val[__word] |= __mask;
  {
  fprintf(_coverage_fout, "231\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
__inline extern int __sigaddset(__sigset_t *__set , int __sig ) ;
__inline extern int __sigismember(__sigset_t const   *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "224\n");
  fflush(_coverage_fout);
  }
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  {
  fprintf(_coverage_fout, "225\n");
  fflush(_coverage_fout);
  }
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  {
  fprintf(_coverage_fout, "226\n");
  fflush(_coverage_fout);
  }
  if (__set->__val[__word] & __mask) {
    {
    fprintf(_coverage_fout, "222\n");
    fflush(_coverage_fout);
    }
    tmp = 1;
  } else {
    {
    fprintf(_coverage_fout, "223\n");
    fflush(_coverage_fout);
    }
    tmp = 0;
  }
  {
  fprintf(_coverage_fout, "227\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern int __sigismember(__sigset_t const   *__set , int __sig ) ;
extern int fdatasync(int __fildes ) ;
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
typedef int __intptr_t;
typedef __intptr_t intptr_t;
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd ,
                                                   __off64_t __length )  __asm__("ftruncate64")  ;
extern  __attribute__((__nothrow__)) int truncate(char const   *__file ,
                                                  __off64_t __length )  __asm__("truncate64") __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int getdtablesize(void) ;
extern  __attribute__((__nothrow__)) int getpagesize(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) void sync(void) ;
extern long gethostid(void) ;
extern int fsync(int __fd ) ;
extern char *getpass(char const   *__prompt )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int chroot(char const   *__path )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int daemon(int __nochdir , int __noclose ) ;
extern  __attribute__((__nothrow__)) void setusershell(void) ;
extern  __attribute__((__nothrow__)) void endusershell(void) ;
extern  __attribute__((__nothrow__)) char *getusershell(void) ;
extern  __attribute__((__nothrow__)) int acct(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int profil(unsigned short *__sample_buffer ,
                                                size_t __size ,
                                                size_t __offset ,
                                                unsigned int __scale )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int revoke(char const   *__file )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int vhangup(void) ;
extern  __attribute__((__nothrow__)) int setdomainname(char const   *__name ,
                                                       size_t __len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int getdomainname(char *__name ,
                                                       size_t __len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int sethostid(long __id ) ;
extern  __attribute__((__nothrow__)) int sethostname(char const   *__name ,
                                                     size_t __len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int gethostname(char *__name ,
                                                     size_t __len )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int getopt(int ___argc ,
                                                char * const  *___argv ,
                                                char const   *__shortopts ) ;
extern int optopt ;
extern int opterr ;
extern int optind ;
extern char *optarg ;
extern  __attribute__((__nothrow__)) int setlogin(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern int getlogin_r(char *__name , size_t __name_len )  __attribute__((__nonnull__(1))) ;
extern char *getlogin(void) ;
extern  __attribute__((__nothrow__)) int tcsetpgrp(int __fd , __pid_t __pgrp_id ) ;
extern  __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd ) ;
extern  __attribute__((__nothrow__)) int rmdir(char const   *__path )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int unlinkat(int __fd ,
                                                  char const   *__name ,
                                                  int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int unlink(char const   *__name )  __attribute__((__nonnull__(1))) ;
typedef __ssize_t ssize_t;
extern  __attribute__((__nothrow__)) ssize_t readlinkat(int __fd ,
                                                        char const   * __restrict  __path ,
                                                        char * __restrict  __buf ,
                                                        size_t __len )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) int symlinkat(char const   *__from ,
                                                   int __tofd ,
                                                   char const   *__to )  __attribute__((__nonnull__(1,3))) ;
extern  __attribute__((__nothrow__)) ssize_t readlink(char const   * __restrict  __path ,
                                                      char * __restrict  __buf ,
                                                      size_t __len )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int symlink(char const   *__from ,
                                                 char const   *__to )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int linkat(int __fromfd ,
                                                char const   *__from ,
                                                int __tofd ,
                                                char const   *__to ,
                                                int __flags )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) int link(char const   *__from ,
                                              char const   *__to )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int ttyslot(void) ;
extern  __attribute__((__nothrow__)) int isatty(int __fd ) ;
extern  __attribute__((__nothrow__)) int ttyname_r(int __fd , char *__buf ,
                                                   size_t __buflen )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *ttyname(int __fd ) ;
extern  __attribute__((__nothrow__)) __pid_t vfork(void) ;
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
typedef unsigned int __gid_t;
extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid ,
                                                  __gid_t __egid ) ;
extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
typedef unsigned int __uid_t;
extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid ,
                                                  __uid_t __euid ) ;
extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int getgroups(int __size , __gid_t *__list ) ;
extern  __attribute__((__nothrow__)) __gid_t getegid(void) ;
extern  __attribute__((__nothrow__)) __gid_t getgid(void) ;
extern  __attribute__((__nothrow__)) __uid_t geteuid(void) ;
extern  __attribute__((__nothrow__)) __uid_t getuid(void) ;
extern  __attribute__((__nothrow__)) __pid_t getsid(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) __pid_t setsid(void) ;
extern  __attribute__((__nothrow__)) int setpgrp(void) ;
extern  __attribute__((__nothrow__)) int setpgid(__pid_t __pid , __pid_t __pgid ) ;
extern  __attribute__((__nothrow__)) __pid_t getpgid(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) __pid_t __getpgid(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) __pid_t getpgrp(void) ;
extern  __attribute__((__nothrow__)) __pid_t getppid(void) ;
extern  __attribute__((__nothrow__)) __pid_t getpid(void) ;
extern  __attribute__((__nothrow__)) size_t confstr(int __name , char *__buf ,
                                                    size_t __len ) ;
extern  __attribute__((__nothrow__)) long sysconf(int __name ) ;
extern  __attribute__((__nothrow__)) long fpathconf(int __fd , int __name ) ;
extern  __attribute__((__nothrow__)) long pathconf(char const   *__path ,
                                                   int __name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
extern  __attribute__((__nothrow__)) int nice(int __inc ) ;
extern  __attribute__((__nothrow__)) int execlp(char const   *__file ,
                                                char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execvp(char const   *__file ,
                                                char * const  *__argv )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execl(char const   *__path ,
                                               char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execle(char const   *__path ,
                                                char const   *__arg  , ...)  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int execv(char const   *__path ,
                                               char * const  *__argv )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int fexecve(int __fd ,
                                                 char * const  *__argv ,
                                                 char * const  *__envp )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int execve(char const   *__path ,
                                                char * const  *__argv ,
                                                char * const  *__envp )  __attribute__((__nonnull__(1,2))) ;
extern char **__environ ;
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
extern  __attribute__((__nothrow__)) char *getwd(char *__buf )  __attribute__((__nonnull__(1),
__deprecated__)) ;
extern  __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;
extern  __attribute__((__nothrow__)) int fchdir(int __fd ) ;
extern  __attribute__((__nothrow__)) int chdir(char const   *__path )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int fchownat(int __fd ,
                                                  char const   *__file ,
                                                  __uid_t __owner ,
                                                  __gid_t __group , int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int lchown(char const   *__file ,
                                                __uid_t __owner ,
                                                __gid_t __group )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner ,
                                                __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int chown(char const   *__file ,
                                               __uid_t __owner ,
                                               __gid_t __group )  __attribute__((__nonnull__(1))) ;
extern int pause(void) ;
typedef unsigned int __useconds_t;
extern int usleep(__useconds_t __useconds ) ;
extern  __attribute__((__nothrow__)) __useconds_t ualarm(__useconds_t __value ,
                                                         __useconds_t __interval ) ;
extern unsigned int sleep(unsigned int __seconds ) ;
extern  __attribute__((__nothrow__)) unsigned int alarm(unsigned int __seconds ) ;
extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __nbytes ,
                      __off64_t __offset )  __asm__("pwrite64")  ;
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes ,
                     __off64_t __offset )  __asm__("pread64")  ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__)) __off64_t lseek(int __fd ,
                                                     __off64_t __offset ,
                                                     int __whence )  __asm__("lseek64")  ;
extern  __attribute__((__nothrow__)) int faccessat(int __fd ,
                                                   char const   *__file ,
                                                   int __type , int __flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int access(char const   *__name ,
                                                int __type )  __attribute__((__nonnull__(1))) ;
typedef void _IO_lock_t;
typedef long __off_t;
struct _IO_marker;
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
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
__inline extern int ferror_unlocked(FILE *__stream ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "221\n");
  fflush(_coverage_fout);
  }
  return ((__stream->_flags & 0x20) != 0);
}
}
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern int feof_unlocked(FILE *__stream ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "220\n");
  fflush(_coverage_fout);
  }
  return ((__stream->_flags & 0x10) != 0);
}
}
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
extern struct _IO_FILE *stdout ;
typedef struct _IO_FILE _IO_FILE;
extern int __overflow(_IO_FILE * , int  ) ;
__inline extern int putchar_unlocked(int __c ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "217\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )stdout->_IO_write_ptr >= (unsigned int )stdout->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "218\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "210\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(stdout, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "211\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "212\n");
    fflush(_coverage_fout);
    }
    tmp___1 = stdout->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "213\n");
    fflush(_coverage_fout);
    }
    (stdout->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "214\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "215\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "216\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "219\n");
  fflush(_coverage_fout);
  }
  return (tmp___3);
}
}
__inline extern int putchar_unlocked(int __c ) ;
__inline extern int putc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "207\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "208\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "200\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "201\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "202\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __stream->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "203\n");
    fflush(_coverage_fout);
    }
    (__stream->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "204\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "205\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "206\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "209\n");
  fflush(_coverage_fout);
  }
  return (tmp___3);
}
}
__inline extern int putc_unlocked(int __c , FILE *__stream ) ;
__inline extern int fputc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "197\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "198\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "190\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "191\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "192\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __stream->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "193\n");
    fflush(_coverage_fout);
    }
    (__stream->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "194\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "195\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "196\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "199\n");
  fflush(_coverage_fout);
  }
  return (tmp___3);
}
}
__inline extern int fputc_unlocked(int __c , FILE *__stream ) ;
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
__inline extern int putchar(int __c ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "188\n");
  fflush(_coverage_fout);
  }
  tmp = _IO_putc(__c, stdout);
  {
  fprintf(_coverage_fout, "189\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern int putchar(int __c ) ;
extern struct _IO_FILE *stdin ;
extern int __uflow(_IO_FILE * ) ;
__inline extern int getchar_unlocked(void) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "185\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned int )stdin->_IO_read_ptr >= (unsigned int )stdin->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "186\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "180\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(stdin);
    {
    fprintf(_coverage_fout, "181\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "182\n");
    fflush(_coverage_fout);
    }
    tmp___1 = stdin->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "183\n");
    fflush(_coverage_fout);
    }
    (stdin->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "184\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "187\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline extern int getchar_unlocked(void) ;
__inline extern int getc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "177\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "178\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "172\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(__fp);
    {
    fprintf(_coverage_fout, "173\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "174\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __fp->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "175\n");
    fflush(_coverage_fout);
    }
    (__fp->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "176\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "179\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline extern int getc_unlocked(FILE *__fp ) ;
__inline extern int fgetc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "169\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "170\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "164\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(__fp);
    {
    fprintf(_coverage_fout, "165\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "166\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __fp->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "167\n");
    fflush(_coverage_fout);
    }
    (__fp->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "168\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "171\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline extern int fgetc_unlocked(FILE *__fp ) ;
extern int _IO_getc(_IO_FILE *__fp ) ;
__inline extern int getchar(void) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "162\n");
  fflush(_coverage_fout);
  }
  tmp = _IO_getc(stdin);
  {
  fprintf(_coverage_fout, "163\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern int getchar(void) ;
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
__inline extern int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "160\n");
  fflush(_coverage_fout);
  }
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  {
  fprintf(_coverage_fout, "161\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
extern int pclose(FILE *__stream ) ;
extern FILE *popen(char const   *__command , char const   *__modes ) ;
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
extern char const   * const  sys_errlist[] ;
extern int sys_nerr ;
extern void perror(char const   *__s ) ;
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
struct __anonstruct__G_fpos64_t_25;
typedef struct __anonstruct__G_fpos64_t_25 _G_fpos64_t;
typedef _G_fpos64_t fpos_t;
extern int fsetpos(FILE *__stream , fpos_t const   *__pos )  __asm__("fsetpos64")  ;
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos )  __asm__("fgetpos64")  ;
extern __off64_t ftello(FILE *__stream )  __asm__("ftello64")  ;
extern int fseeko(FILE *__stream , __off64_t __off , int __whence )  __asm__("fseeko64")  ;
extern void rewind(FILE *__stream ) ;
extern long ftell(FILE *__stream ) ;
extern int fseek(FILE *__stream , long __off , int __whence ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern int puts(char const   *__s ) ;
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern __ssize_t getline(char ** __restrict  __lineptr ,
                         size_t * __restrict  __n , FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr ,
                          size_t * __restrict  __n , int __delimiter ,
                          FILE * __restrict  __stream ) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr ,
                            size_t * __restrict  __n , int __delimiter ,
                            FILE * __restrict  __stream ) ;
extern char *gets(char *__s ) ;
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
extern int putw(int __w , FILE *__stream ) ;
extern int getw(FILE *__stream ) ;
extern int putc(int __c , FILE *__stream ) ;
extern int fputc(int __c , FILE *__stream ) ;
extern int getc(FILE *__stream ) ;
extern int fgetc(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsscanf)(char const   * __restrict  __s ,
                                                                            char const   * __restrict  __format ,
                                                                            __gnuc_va_list __arg )  __asm__("__isoc99_vsscanf")  ;
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format ,
                                             __gnuc_va_list __arg )  __asm__("__isoc99_vscanf")  ;
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s ,
                                              char const   * __restrict  __format ,
                                              __gnuc_va_list __arg )  __asm__("__isoc99_vfscanf")  ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...)  __asm__("__isoc99_sscanf")  ;
extern int scanf(char const   * __restrict  __format  , ...)  __asm__("__isoc99_scanf")  ;
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...)  __asm__("__isoc99_fscanf")  ;
extern int ( /* format attribute */  dprintf)(int __fd ,
                                              char const   * __restrict  __fmt 
                                              , ...) ;
extern int ( /* format attribute */  vdprintf)(int __fd ,
                                               char const   * __restrict  __fmt ,
                                               __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
                                                                              size_t __maxlen ,
                                                                              char const   * __restrict  __format ,
                                                                              __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) FILE *open_memstream(char **__bufloc ,
                                                          size_t *__sizeloc ) ;
extern  __attribute__((__nothrow__)) FILE *fmemopen(void *__s , size_t __len ,
                                                    char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;
extern int fflush_unlocked(FILE *__stream ) ;
extern int fclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern FILE *tmpfile(void)  __asm__("tmpfile64")  ;
extern  __attribute__((__nothrow__)) int renameat(int __oldfd ,
                                                  char const   *__old ,
                                                  int __newfd ,
                                                  char const   *__new ) ;
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
extern struct _IO_FILE *stderr ;
extern  __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   ,
                        __gnuc_va_list  ) ;
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   ,
                       __gnuc_va_list  , int * __restrict   ) ;
extern  __attribute__((__nothrow__)) int _IO_ftrylockfile(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) void _IO_funlockfile(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) void _IO_flockfile(_IO_FILE * ) ;
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int _IO_ferror(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int _IO_feof(_IO_FILE *__fp ) ;
extern int __underflow(_IO_FILE * ) ;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len )  __asm__("posix_fallocate64")  ;
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off64_t __offset ,
                                                       __off64_t __len ,
                                                       int __advise )  __asm__("posix_fadvise64")  ;
extern int lockf(int __fd , int __cmd , __off64_t __len )  __asm__("lockf64")  ;
extern int creat(char const   *__file , __mode_t __mode )  __asm__("creat64") __attribute__((__nonnull__(1))) ;
extern int openat(int __fd , char const   *__file , int __oflag  , ...)  __asm__("openat64") __attribute__((__nonnull__(2))) ;
extern int open(char const   *__file , int __oflag  , ...)  __asm__("open64") __attribute__((__nonnull__(1))) ;
extern int fcntl(int __fd , int __cmd  , ...) ;
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "157\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "158\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "153\n");
    fflush(_coverage_fout);
    }
    __cp = __retval;
    {
    fprintf(_coverage_fout, "154\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "150\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == 0) {
        {
        fprintf(_coverage_fout, "136\n");
        fflush(_coverage_fout);
        }
        __cp = (char *)((void *)0);
        break;
      } else {
        {
        fprintf(_coverage_fout, "137\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "151\n");
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
        break;
      } else {
        {
        fprintf(_coverage_fout, "149\n");
        fflush(_coverage_fout);
        }
        if ((int )*__cp == (int )__reject2) {
          {
          fprintf(_coverage_fout, "141\n");
          fflush(_coverage_fout);
          }
          tmp = __cp;
          {
          fprintf(_coverage_fout, "142\n");
          fflush(_coverage_fout);
          }
          __cp ++;
          {
          fprintf(_coverage_fout, "143\n");
          fflush(_coverage_fout);
          }
          *tmp = (char )'\000';
          break;
        } else {
          {
          fprintf(_coverage_fout, "148\n");
          fflush(_coverage_fout);
          }
          if ((int )*__cp == (int )__reject3) {
            {
            fprintf(_coverage_fout, "144\n");
            fflush(_coverage_fout);
            }
            tmp = __cp;
            {
            fprintf(_coverage_fout, "145\n");
            fflush(_coverage_fout);
            }
            __cp ++;
            {
            fprintf(_coverage_fout, "146\n");
            fflush(_coverage_fout);
            }
            *tmp = (char )'\000';
            break;
          } else {
            {
            fprintf(_coverage_fout, "147\n");
            fflush(_coverage_fout);
            }

          }
        }
      }
      {
      fprintf(_coverage_fout, "152\n");
      fflush(_coverage_fout);
      }
      __cp ++;
    }
    {
    fprintf(_coverage_fout, "155\n");
    fflush(_coverage_fout);
    }
    *__s = __cp;
  } else {
    {
    fprintf(_coverage_fout, "156\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "159\n");
  fflush(_coverage_fout);
  }
  return (__retval);
}
}
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) ;
__inline extern char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "133\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "134\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "129\n");
    fflush(_coverage_fout);
    }
    __cp = __retval;
    {
    fprintf(_coverage_fout, "130\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "126\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == 0) {
        {
        fprintf(_coverage_fout, "116\n");
        fflush(_coverage_fout);
        }
        __cp = (char *)((void *)0);
        break;
      } else {
        {
        fprintf(_coverage_fout, "117\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "127\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == (int )__reject1) {
        {
        fprintf(_coverage_fout, "118\n");
        fflush(_coverage_fout);
        }
        tmp = __cp;
        {
        fprintf(_coverage_fout, "119\n");
        fflush(_coverage_fout);
        }
        __cp ++;
        {
        fprintf(_coverage_fout, "120\n");
        fflush(_coverage_fout);
        }
        *tmp = (char )'\000';
        break;
      } else {
        {
        fprintf(_coverage_fout, "125\n");
        fflush(_coverage_fout);
        }
        if ((int )*__cp == (int )__reject2) {
          {
          fprintf(_coverage_fout, "121\n");
          fflush(_coverage_fout);
          }
          tmp = __cp;
          {
          fprintf(_coverage_fout, "122\n");
          fflush(_coverage_fout);
          }
          __cp ++;
          {
          fprintf(_coverage_fout, "123\n");
          fflush(_coverage_fout);
          }
          *tmp = (char )'\000';
          break;
        } else {
          {
          fprintf(_coverage_fout, "124\n");
          fflush(_coverage_fout);
          }

        }
      }
      {
      fprintf(_coverage_fout, "128\n");
      fflush(_coverage_fout);
      }
      __cp ++;
    }
    {
    fprintf(_coverage_fout, "131\n");
    fflush(_coverage_fout);
    }
    *__s = __cp;
  } else {
    {
    fprintf(_coverage_fout, "132\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "135\n");
  fflush(_coverage_fout);
  }
  return (__retval);
}
}
__inline extern char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
__inline extern char *__strsep_1c(char **__s , char __reject ) 
{ register char *__retval ;
  char *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "113\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "114\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "108\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __builtin_strchr(__retval, (int )__reject);
    {
    fprintf(_coverage_fout, "109\n");
    fflush(_coverage_fout);
    }
    tmp___0 = tmp___2;
    {
    fprintf(_coverage_fout, "110\n");
    fflush(_coverage_fout);
    }
    *__s = tmp___0;
    {
    fprintf(_coverage_fout, "111\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "104\n");
      fflush(_coverage_fout);
      }
      tmp = *__s;
      {
      fprintf(_coverage_fout, "105\n");
      fflush(_coverage_fout);
      }
      (*__s) ++;
      {
      fprintf(_coverage_fout, "106\n");
      fflush(_coverage_fout);
      }
      *tmp = (char )'\000';
    } else {
      {
      fprintf(_coverage_fout, "107\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "112\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "115\n");
  fflush(_coverage_fout);
  }
  return (__retval);
}
}
__inline extern char *__strsep_1c(char **__s , char __reject ) ;
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "98\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )__s == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "81\n");
    fflush(_coverage_fout);
    }
    __s = *__nextp;
  } else {
    {
    fprintf(_coverage_fout, "82\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "99\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "84\n");
    fflush(_coverage_fout);
    }
    if ((int )*__s == (int )__sep) {
      {
      fprintf(_coverage_fout, "83\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "85\n");
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
    fprintf(_coverage_fout, "93\n");
    fflush(_coverage_fout);
    }
    tmp = __s;
    {
    fprintf(_coverage_fout, "94\n");
    fflush(_coverage_fout);
    }
    __s ++;
    {
    fprintf(_coverage_fout, "95\n");
    fflush(_coverage_fout);
    }
    __result = tmp;
    {
    fprintf(_coverage_fout, "96\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "89\n");
      fflush(_coverage_fout);
      }
      if ((int )*__s != 0) {
        {
        fprintf(_coverage_fout, "86\n");
        fflush(_coverage_fout);
        }

      } else {
        break;
      }
      {
      fprintf(_coverage_fout, "90\n");
      fflush(_coverage_fout);
      }
      tmp___0 = __s;
      {
      fprintf(_coverage_fout, "91\n");
      fflush(_coverage_fout);
      }
      __s ++;
      {
      fprintf(_coverage_fout, "92\n");
      fflush(_coverage_fout);
      }
      if ((int )*tmp___0 == (int )__sep) {
        {
        fprintf(_coverage_fout, "87\n");
        fflush(_coverage_fout);
        }
        *(__s + -1) = (char )'\000';
        break;
      } else {
        {
        fprintf(_coverage_fout, "88\n");
        fflush(_coverage_fout);
        }

      }
    }
  } else {
    {
    fprintf(_coverage_fout, "97\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "102\n");
  fflush(_coverage_fout);
  }
  *__nextp = __s;
  {
  fprintf(_coverage_fout, "103\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "78\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "74\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*__s != 0) {
      {
      fprintf(_coverage_fout, "73\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*__s != (int const   )__accept1) {
        {
        fprintf(_coverage_fout, "72\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*__s != (int const   )__accept2) {
          {
          fprintf(_coverage_fout, "71\n");
          fflush(_coverage_fout);
          }
          if ((int const   )*__s != (int const   )__accept3) {
            {
            fprintf(_coverage_fout, "70\n");
            fflush(_coverage_fout);
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
    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "75\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "79\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*__s == 0) {
    {
    fprintf(_coverage_fout, "76\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "77\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((unsigned int )__s);
  }
  {
  fprintf(_coverage_fout, "80\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "67\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "63\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*__s != 0) {
      {
      fprintf(_coverage_fout, "62\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*__s != (int const   )__accept1) {
        {
        fprintf(_coverage_fout, "61\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*__s != (int const   )__accept2) {
          {
          fprintf(_coverage_fout, "60\n");
          fflush(_coverage_fout);
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
    {
    fprintf(_coverage_fout, "64\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "68\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*__s == 0) {
    {
    fprintf(_coverage_fout, "65\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "66\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((unsigned int )__s);
  }
  {
  fprintf(_coverage_fout, "69\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "57\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "58\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "55\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept1) {
      {
      fprintf(_coverage_fout, "50\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "54\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) == (int const   )__accept2) {
        {
        fprintf(_coverage_fout, "51\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "53\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) == (int const   )__accept3) {
          {
          fprintf(_coverage_fout, "52\n");
          fflush(_coverage_fout);
          }

        } else {
          break;
        }
      }
    }
    {
    fprintf(_coverage_fout, "56\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "59\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "47\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "48\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "45\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept1) {
      {
      fprintf(_coverage_fout, "42\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "44\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) == (int const   )__accept2) {
        {
        fprintf(_coverage_fout, "43\n");
        fflush(_coverage_fout);
        }

      } else {
        break;
      }
    }
    {
    fprintf(_coverage_fout, "46\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "49\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline extern size_t __strspn_c1(char const   *__s , int __accept ) 
{ register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "39\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "40\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "37\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept) {
      {
      fprintf(_coverage_fout, "36\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "38\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "41\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strspn_c1(char const   *__s , int __accept ) ;
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) 
{ register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "33\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "34\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "31\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "30\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        {
        fprintf(_coverage_fout, "29\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          {
          fprintf(_coverage_fout, "28\n");
          fflush(_coverage_fout);
          }
          if ((int const   )*(__s + __result) != (int const   )__reject3) {
            {
            fprintf(_coverage_fout, "27\n");
            fflush(_coverage_fout);
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
    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "32\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "35\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) ;
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) 
{ register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
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
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "21\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        {
        fprintf(_coverage_fout, "20\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          {
          fprintf(_coverage_fout, "19\n");
          fflush(_coverage_fout);
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
    {
    fprintf(_coverage_fout, "23\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "26\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) 
{ register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "16\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "17\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "14\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "13\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject) {
        {
        fprintf(_coverage_fout, "12\n");
        fflush(_coverage_fout);
        }

      } else {
        break;
      }
    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "15\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "18\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) ;
extern void *__rawmemchr(void const   *__s , int __c ) ;
extern  __attribute__((__nothrow__)) char *stpncpy(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *__stpncpy(char * __restrict  __dest ,
                                                     char const   * __restrict  __src ,
                                                     size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *stpcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *__stpcpy(char * __restrict  __dest ,
                                                    char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strsignal(int __sig ) ;
extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 ,
                                                     char const   *__s2 ,
                                                     size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 ,
                                              void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void bcopy(void const   *__src ,
                                                void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strerror_l(int __errnum ,
                                                      __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int strerror_r(int __errnum , char *__buf ,
                                                    size_t __buflen )  __asm__("__xpg_strerror_r") __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) size_t strnlen(char const   *__string ,
                                                    size_t __maxlen )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strtok_r(char * __restrict  __s ,
                                                    char const   * __restrict  __delim ,
                                                    char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) char *__strtok_r(char * __restrict  __s ,
                                                      char const   * __restrict  __delim ,
                                                      char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
extern  __attribute__((__nothrow__)) char *strtok(char * __restrict  __s ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack ,
                                                  char const   *__needle )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strpbrk(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s ,
                                                    char const   *__reject )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *strndup(char const   *__string ,
                                                   size_t __n )  __attribute__((__nonnull__(1),
__malloc__)) ;
extern  __attribute__((__nothrow__)) char *strdup(char const   *__s )  __attribute__((__nonnull__(1),
__malloc__)) ;
extern  __attribute__((__nothrow__)) size_t strxfrm_l(char *__dest ,
                                                      char const   *__src ,
                                                      size_t __n ,
                                                      __locale_t __l )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) int strcoll_l(char const   *__s1 ,
                                                   char const   *__s2 ,
                                                   __locale_t __l )  __attribute__((__pure__,
__nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) size_t strxfrm(char * __restrict  __dest ,
                                                    char const   * __restrict  __src ,
                                                    size_t __n )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 ,
                                                 char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 ,
                                                 char const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 ,
                                                char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strncat(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strcat(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strncpy(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c ,
                                                  size_t __n )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 ,
                                                void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c ,
                                                  size_t __n )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *memccpy(void * __restrict  __dest ,
                                                   void const   * __restrict  __src ,
                                                   int __c , size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memmove(void *__dest ,
                                                   void const   *__src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest ,
                                                  void const   * __restrict  __src ,
                                                  size_t __n )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int getloadavg(double *__loadavg ,
                                                    int __nelem )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int getsubopt(char ** __restrict  __optionp ,
                                                   char * const  * __restrict  __tokens ,
                                                   char ** __restrict  __valuep )  __attribute__((__nonnull__(1,2,3))) ;
extern  __attribute__((__nothrow__)) int rpmatch(char const   *__response )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) size_t wcstombs(char * __restrict  __s ,
                                                     wchar_t const   * __restrict  __pwcs ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;
extern  __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict  __pwc ,
                                                char const   * __restrict  __s ,
                                                size_t __n ) ;
extern  __attribute__((__nothrow__)) int mblen(char const   *__s , size_t __n ) ;
extern  __attribute__((__nothrow__)) int qfcvt_r(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign ,
                                                 char * __restrict  __buf ,
                                                 size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
extern  __attribute__((__nothrow__)) int qecvt_r(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign ,
                                                 char * __restrict  __buf ,
                                                 size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
extern  __attribute__((__nothrow__)) int fcvt_r(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign ,
                                                char * __restrict  __buf ,
                                                size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
extern  __attribute__((__nothrow__)) int ecvt_r(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign ,
                                                char * __restrict  __buf ,
                                                size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
extern  __attribute__((__nothrow__)) char *qgcvt(long double __value ,
                                                 int __ndigit , char *__buf )  __attribute__((__nonnull__(3))) ;
extern  __attribute__((__nothrow__)) char *qfcvt(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) char *qecvt(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) char *gcvt(double __value , int __ndigit ,
                                                char *__buf )  __attribute__((__nonnull__(3))) ;
extern  __attribute__((__nothrow__)) char *fcvt(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
extern  __attribute__((__nothrow__)) char *ecvt(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
struct __anonstruct_lldiv_t_6;
typedef struct __anonstruct_lldiv_t_6 lldiv_t;
extern  __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer ,
                                                   long long __denom )  __attribute__((__const__)) ;
struct __anonstruct_ldiv_t_5;
typedef struct __anonstruct_ldiv_t_5 ldiv_t;
extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;
struct __anonstruct_div_t_4;
typedef struct __anonstruct_div_t_4 div_t;
extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long long llabs(long long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long labs(long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int abs(int __x )  __attribute__((__const__)) ;
extern void qsort(void *__base , size_t __nmemb , size_t __size ,
                  int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,4))) ;
extern void *bsearch(void const   *__key , void const   *__base ,
                     size_t __nmemb , size_t __size ,
                     int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,2,5))) ;
extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name ,
                                                    char * __restrict  __resolved ) ;
extern int system(char const   *__command ) ;
extern  __attribute__((__nothrow__)) char *mkdtemp(char *__template )  __attribute__((__nonnull__(1))) ;
extern int mkstemps(char *__template , int __suffixlen )  __asm__("mkstemps64") __attribute__((__nonnull__(1))) ;
extern int mkstemp(char *__template )  __asm__("mkstemp64") __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *mktemp(char *__template )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int clearenv(void) ;
extern  __attribute__((__nothrow__)) int unsetenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int setenv(char const   *__name ,
                                                char const   *__value ,
                                                int __replace )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int putenv(char *__string )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *__secure_getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__)) int on_exit(void (*__func)(int __status ,
                                                                void *__arg ) ,
                                                 void *__arg )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
extern  __attribute__((__nothrow__)) int posix_memalign(void **__memptr ,
                                                        size_t __alignment ,
                                                        size_t __size )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void *valloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *alloca(size_t __size ) ;
extern  __attribute__((__nothrow__)) void cfree(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size )  __attribute__((__warn_unused_result__)) ;
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
struct drand48_data;
extern  __attribute__((__nothrow__)) int lcong48_r(unsigned short *__param ,
                                                   struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int seed48_r(unsigned short *__seed16v ,
                                                  struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int srand48_r(long __seedval ,
                                                   struct drand48_data *__buffer )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int jrand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int mrand48_r(struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int nrand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int lrand48_r(struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int erand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int drand48_r(struct drand48_data * __restrict  __buffer ,
                                                   double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) void lcong48(unsigned short *__param )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) unsigned short *seed48(unsigned short *__seed16v )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) void srand48(long __seedval ) ;
extern  __attribute__((__nothrow__)) long jrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long mrand48(void) ;
extern  __attribute__((__nothrow__)) long nrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long lrand48(void) ;
extern  __attribute__((__nothrow__)) double erand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) double drand48(void) ;
extern  __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;
extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) int rand(void) ;
struct random_data;
extern  __attribute__((__nothrow__)) int setstate_r(char * __restrict  __statebuf ,
                                                    struct random_data * __restrict  __buf )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) int initstate_r(unsigned int __seed ,
                                                     char * __restrict  __statebuf ,
                                                     size_t __statelen ,
                                                     struct random_data * __restrict  __buf )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) int srandom_r(unsigned int __seed ,
                                                   struct random_data *__buf )  __attribute__((__nonnull__(2))) ;
typedef int int32_t;
extern  __attribute__((__nothrow__)) int random_r(struct random_data * __restrict  __buf ,
                                                  int32_t * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
extern  __attribute__((__nothrow__)) char *setstate(char *__statebuf )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *initstate(unsigned int __seed ,
                                                     char *__statebuf ,
                                                     size_t __statelen )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) long random(void) ;
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline extern unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "11\n");
  fflush(_coverage_fout);
  }
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "10\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline extern unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "9\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
struct __anonstruct_fd_set_9;
typedef struct __anonstruct_fd_set_9 fd_set;
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
struct timeval;
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
extern  __attribute__((__nothrow__)) long a64l(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;
extern  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr ,
                                                       char ** __restrict  __endptr ,
                                                       int __base )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline extern long long atoll(char const   *__nptr ) 
{ long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "7\n");
  fflush(_coverage_fout);
  }
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "8\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr ,
                                                 char ** __restrict  __endptr ,
                                                 int __base )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline extern long atol(char const   *__nptr ) 
{ long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "6\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline extern int atoi(char const   *__nptr ) 
{ long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  return ((int )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr ,
                                                   char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline extern double atof(char const   *__nptr ) 
{ double tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/coverage/coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr ,
                                                                 char ** __restrict  __endptr ,
                                                                 int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ,
                                                                int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr ,
                                                      char ** __restrict  __endptr ,
                                                      int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr ,
                                                           int __base )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) long double strtold(char const   * __restrict  __nptr ,
                                                         char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) float strtof(char const   * __restrict  __nptr ,
                                                  char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
enum FB_LANG {
    FB_LANG_FB = 0,
    FB_LANG_FB_DEPRECATED = 1,
    FB_LANG_FB_FBLITE = 2,
    FB_LANG_QB = 3,
    FB_LANGS = 4
} ;
enum FB_LANG;
struct FB_HOOKSTB;
typedef int (*FB_PAGESETPROC)(int active , int visible );
typedef int (*FB_PAGECOPYPROC)(int src , int dst );
typedef int (*FB_ISREDIRPROC)(int is_input );
typedef void (*FB_SLEEPPROC)(int msecs );
typedef int (*FB_OUTPROC)(unsigned short port , unsigned char value );
typedef int (*FB_INPROC)(unsigned short port );
typedef int (*FB_SETMOUSEPROC)(int x , int y , int cursor , int clip );
typedef int (*FB_GETMOUSEPROC)(int *x , int *y , int *z , int *buttons_ ,
                               int *clip );
typedef int (*FB_MULTIKEYPROC)(int scancode );
typedef int (*FB_LINEINPUTWPROC)(wchar_t const   *text , wchar_t *dst ,
                                 int max_chars , int addquestion ,
                                 int addnewline );
typedef int (*FB_LINEINPUTPROC)(FBSTRING *text , void *dst , int dst_len ,
                                int fillrem , int addquestion , int addnewline );
typedef char *(*FB_READSTRPROC)(char *buffer , int len );
typedef void (*FB_PRINTBUFFWPROC)(wchar_t const   *buffer , size_t len ,
                                  int mask );
typedef void (*FB_PRINTBUFFPROC)(void const   *buffer , size_t len , int mask );
typedef unsigned int (*FB_READXYPROC)(int col , int row , int colorflag );
typedef void (*FB_GETSIZEPROC)(int *cols , int *rows );
typedef void (*FB_GETXYPROC)(int *col , int *row );
typedef int (*FB_GETYPROC)(void);
typedef int (*FB_GETXPROC)(void);
typedef int (*FB_WIDTHPROC)(int cols , int rows );
typedef void (*FB_VIEWUPDATEPROC)(void);
typedef int (*FB_LOCATEPROC)(int row , int col , int cursor );
typedef int (*FB_COLORPROC)(int fc , int bc , int flags );
typedef void (*FB_CLSPROC)(int mode );
typedef int (*FB_KEYHITPROC)(void);
typedef int (*FB_GETKEYPROC)(void);
typedef FBSTRING *(*FB_INKEYPROC)(void);
enum __anonenum_149 {
    FB_TLSLEN_ERROR = 28,
    FB_TLSLEN_DIR = 2060,
    FB_TLSLEN_INPUT = 24,
    FB_TLSLEN_PRINTUSG = 20
} ;
enum __anonenum_149;
enum __anonenum_148 {
    FB_TLSKEY_ERROR = 0,
    FB_TLSKEY_DIR = 1,
    FB_TLSKEY_INPUT = 2,
    FB_TLSKEY_PRINTUSG = 3,
    FB_TLSKEY_GFX = 4,
    FB_TLSKEYS = 5
} ;
enum __anonenum_148;
struct _FBTHREAD {
   pthread_t id ;
   void (*proc)(void *param ) ;
   void *param ;
   void *opaque ;
};
typedef void (*FB_THREADPROC)(void *param );
enum _eFbIntlIndex {
    eFIL_DateDivider = 0,
    eFIL_TimeDivider = 1,
    eFIL_NumDecimalPoint = 2,
    eFIL_NumThousandsSeparator = 3
} ;
typedef struct _DEV_LPT_INFO DEV_LPT_INFO;
struct _DEV_LPT_INFO {
   void *driver_opaque ;
   char *pszDevice ;
   int iPort ;
   size_t uiRefCount ;
};
struct _DEV_LPT_PROTOCOL {
   char *proto ;
   int iPort ;
   char *name ;
   char *title ;
   char *emu ;
   char raw[] ;
};
enum _FB_SERIAL_STOP_BITS {
    FB_SERIAL_STOP_BITS_1 = 0,
    FB_SERIAL_STOP_BITS_1_5 = 1,
    FB_SERIAL_STOP_BITS_2 = 2
} ;
typedef enum _FB_SERIAL_STOP_BITS FB_SERIAL_STOP_BITS;
enum _FB_SERIAL_PARITY {
    FB_SERIAL_PARITY_NONE = 0,
    FB_SERIAL_PARITY_EVEN = 1,
    FB_SERIAL_PARITY_ODD = 2,
    FB_SERIAL_PARITY_SPACE = 3,
    FB_SERIAL_PARITY_MARK = 4
} ;
typedef enum _FB_SERIAL_PARITY FB_SERIAL_PARITY;
struct _FB_SERIAL_OPTIONS {
   unsigned int uiSpeed ;
   unsigned int uiDataBits ;
   FB_SERIAL_PARITY Parity ;
   FB_SERIAL_STOP_BITS StopBits ;
   unsigned int DurationCTS ;
   unsigned int DurationDSR ;
   unsigned int DurationCD ;
   unsigned int OpenTimeout ;
   int SuppressRTS ;
   int AddLF ;
   int CheckParity ;
   int KeepDTREnabled ;
   int DiscardOnError ;
   int IgnoreAllErrors ;
   unsigned int IRQNumber ;
   unsigned int TransmitBuffer ;
   unsigned int ReceiveBuffer ;
};
enum _FB_SERIAL_STOP_BITS;
enum _FB_SERIAL_PARITY;
struct _DEV_SCRN_INFO {
   char buffer[16] ;
   unsigned int length ;
};
typedef char *(*fb_FnDevReadString)(char *buffer , size_t count , FILE *fp );
typedef int (*FnDevOpenHook)(FBSTRING *filename , unsigned int open_mode ,
                             unsigned int access_mode , unsigned int lock_mode ,
                             int rec_len , FnFileOpen *pfnFileOpen );
struct _FB_INPUTCTX;
typedef struct _FB_INPUTCTX FB_INPUTCTX;
struct _FB_INPUTCTX {
   FB_FILE *handle ;
   int status ;
   FBSTRING str ;
   int index ;
};
struct _FB_FILE_HOOKS {
   int (*pfnEof)(struct _FB_FILE *handle ) ;
   int (*pfnClose)(struct _FB_FILE *handle ) ;
   int (*pfnSeek)(struct _FB_FILE *handle , fb_off_t offset , int whence ) ;
   int (*pfnTell)(struct _FB_FILE *handle , fb_off_t *pOffset ) ;
   int (*pfnRead)(struct _FB_FILE *handle , void *value , size_t *pValuelen ) ;
   int (*pfnReadWstr)(struct _FB_FILE *handle , wchar_t *value ,
                      size_t *pValuelen ) ;
   int (*pfnWrite)(struct _FB_FILE *handle , void const   *value ,
                   size_t valuelen ) ;
   int (*pfnWriteWstr)(struct _FB_FILE *handle , wchar_t const   *value ,
                       size_t valuelen ) ;
   int (*pfnLock)(struct _FB_FILE *handle , fb_off_t position , fb_off_t size ) ;
   int (*pfnUnlock)(struct _FB_FILE *handle , fb_off_t position , fb_off_t size ) ;
   int (*pfnReadLine)(struct _FB_FILE *handle , FBSTRING *dst ) ;
   int (*pfnReadLineWstr)(struct _FB_FILE *handle , wchar_t *dst ,
                          int dst_chars ) ;
   int (*pfnSetWidth)(struct _FB_FILE *handle , int new_width ) ;
   int (*pfnFlush)(struct _FB_FILE *handle ) ;
};
typedef int (*FnFileFlush)(struct _FB_FILE *handle );
typedef int (*FnFileReadLineWstr)(struct _FB_FILE *handle , wchar_t *dst ,
                                  int dst_chars );
typedef int (*FnFileReadLine)(struct _FB_FILE *handle , FBSTRING *dst );
typedef int (*FnFileUnlock)(struct _FB_FILE *handle , fb_off_t position ,
                            fb_off_t size );
typedef int (*FnFileLock)(struct _FB_FILE *handle , fb_off_t position ,
                          fb_off_t size );
typedef int (*FnFileWriteWstr)(struct _FB_FILE *handle ,
                               wchar_t const   *value , size_t valuelen );
typedef int (*FnFileWrite)(struct _FB_FILE *handle , void const   *value ,
                           size_t valuelen );
typedef int (*FnFileReadWstr)(struct _FB_FILE *handle , wchar_t *value ,
                              size_t *pValuelen );
typedef int (*FnFileRead)(struct _FB_FILE *handle , void *value ,
                          size_t *pValuelen );
typedef int (*FnFileTell)(struct _FB_FILE *handle , fb_off_t *pOffset );
typedef int (*FnFileSeek)(struct _FB_FILE *handle , fb_off_t offset ,
                          int whence );
typedef int (*FnFileClose)(struct _FB_FILE *handle );
typedef int (*FnFileEof)(struct _FB_FILE *handle );
typedef int (*FnFileTest)(struct _FB_FILE *handle , char const   *filename ,
                          size_t filename_len );
typedef int (*FnFileSetWidth)(struct _FB_FILE *handle , int new_width );
struct _FB_PRINTUSGCTX;
typedef struct _FB_PRINTUSGCTX FB_PRINTUSGCTX;
struct _FB_PRINTUSGCTX {
   int chars ;
   char *ptr ;
   FBSTRING fmtstr ;
};
union __anonunion____missing_field_name_147 {
   char *zstr ;
   wchar_t *wstr ;
   void *ofs ;
   struct _FB_DATADESC *next ;
};
struct _FB_DATADESC {
   short len ;
   union __anonunion____missing_field_name_147 __annonCompField3 ;
} __attribute__((__packed__)) ;
union __anonunion____missing_field_name_147;
typedef void (*FB_DTORMULT)(FBARRAY *array ,
                            void (*dtor)(void const   *this_ ) , int base_idx );
typedef void (*FB_DEFCTOR)(void const   *this_ );
struct _FB_ARRAY_TMPDESC;
typedef struct _FB_ARRAY_TMPDESC FB_ARRAY_TMPDESC;
struct _FBARRAYDIM {
   int elements ;
   int lbound ;
   int ubound ;
};
typedef struct _FBARRAYDIM FBARRAYDIM;
struct _FBARRAY {
   void *data ;
   void *ptr ;
   int size ;
   int element_len ;
   int dimensions ;
   FBARRAYDIM dimTB[1] ;
};
struct _FB_LISTELEM {
   struct _FB_LISTELEM *prev ;
   struct _FB_LISTELEM *next ;
};
struct _FB_ARRAY_TMPDESC {
   FB_LISTELEM elem ;
   FBARRAY array ;
   FBARRAYDIM dimTB[7] ;
};
struct _FBARRAYDIM;
struct _FB_STR_TMPDESC;
typedef struct _FB_STR_TMPDESC FB_STR_TMPDESC;
struct _FB_STR_TMPDESC {
   FB_LISTELEM elem ;
   FBSTRING desc ;
};
struct _FB_ERRORCTX;
typedef struct _FB_ERRORCTX FB_ERRORCTX;
struct _FB_ERRORCTX {
   void (*handler)(void) ;
   int err_num ;
   int line_num ;
   char const   *mod_name ;
   char const   *fun_name ;
   void *res_lbl ;
   void *resnxt_lbl ;
};
enum _FB_RTERROR;
typedef enum _FB_RTERROR FB_RTERROR;
enum _FB_RTERROR {
    FB_RTERROR_OK = 0,
    FB_RTERROR_ILLEGALFUNCTIONCALL = 1,
    FB_RTERROR_FILENOTFOUND = 2,
    FB_RTERROR_FILEIO = 3,
    FB_RTERROR_OUTOFMEM = 4,
    FB_RTERROR_ILLEGALRESUME = 5,
    FB_RTERROR_OUTOFBOUNDS = 6,
    FB_RTERROR_NULLPTR = 7,
    FB_RTERROR_NOPRIVILEDGES = 8,
    FB_RTERROR_SIGINT = 9,
    FB_RTERROR_SIGILL = 10,
    FB_RTERROR_SIGFPE = 11,
    FB_RTERROR_SIGSEGV = 12,
    FB_RTERROR_SIGTERM = 13,
    FB_RTERROR_SIGABRT = 14,
    FB_RTERROR_SIGQUIT = 15,
    FB_RTERROR_RETURNWITHOUTGOSUB = 16,
    FB_RTERROR_ENDOFFILE = 17,
    FB_RTERROR_MAX = 18
} ;
struct _FB_LIST {
   int cnt ;
   FB_LISTELEM *head ;
   FB_LISTELEM *tail ;
   FB_LISTELEM *fhead ;
};
enum __anonenum_146 {
    __ISwupper = 0,
    __ISwlower = 1,
    __ISwalpha = 2,
    __ISwdigit = 3,
    __ISwxdigit = 4,
    __ISwspace = 5,
    __ISwprint = 6,
    __ISwgraph = 7,
    __ISwblank = 8,
    __ISwcntrl = 9,
    __ISwpunct = 10,
    __ISwalnum = 11,
    _ISwupper = 16777216,
    _ISwlower = 33554432,
    _ISwalpha = 67108864,
    _ISwdigit = 134217728,
    _ISwxdigit = 268435456,
    _ISwspace = 536870912,
    _ISwprint = 1073741824,
    _ISwgraph = (-0x7FFFFFFF-1),
    _ISwblank = 65536,
    _ISwcntrl = 131072,
    _ISwpunct = 262144,
    _ISwalnum = 524288
} ;
enum __anonenum_146;
typedef unsigned short uint16_t;
typedef uint16_t UTF_16;
typedef unsigned long long uintmax_t;
typedef long long intmax_t;
typedef unsigned int uintptr_t;
typedef unsigned long long uint_fast64_t;
typedef unsigned int uint_fast32_t;
typedef unsigned int uint_fast16_t;
typedef unsigned char uint_fast8_t;
typedef long long int_fast64_t;
typedef int int_fast32_t;
typedef int int_fast16_t;
typedef signed char int_fast8_t;
typedef unsigned long long uint_least64_t;
typedef unsigned int uint_least32_t;
typedef unsigned short uint_least16_t;
typedef unsigned char uint_least8_t;
typedef long long int_least64_t;
typedef int int_least32_t;
typedef short int_least16_t;
typedef signed char int_least8_t;
typedef unsigned long long uint64_t;
struct KeysymToScancode;
typedef struct _FBMUTEX FBMUTEX;
struct _FBMUTEX {
   pthread_mutex_t id ;
};
struct _FB_DIRCTX;
typedef struct _FB_DIRCTX FB_DIRCTX;
struct _FB_DIRCTX {
   int in_use ;
   int attrib ;
   DIR *dir ;
   char filespec[1024] ;
   char dirname[1024] ;
};
typedef unsigned char cc_t;
typedef unsigned int tcflag_t;
struct termios {
   tcflag_t c_iflag ;
   tcflag_t c_oflag ;
   tcflag_t c_cflag ;
   tcflag_t c_lflag ;
   cc_t c_line ;
   cc_t c_cc[32] ;
   speed_t c_ispeed ;
   speed_t c_ospeed ;
};
struct FBCONSOLE {
   int inited ;
   int term_type ;
   int h_out ;
   int h_in ;
   FILE *f_out ;
   FILE *f_in ;
   struct termios old_term_out ;
   struct termios old_term_in ;
   int in_flags ;
   int old_in_flags ;
   int fg_color ;
   int bg_color ;
   int cur_x ;
   int cur_y ;
   int w ;
   int h ;
   unsigned char *char_buffer ;
   unsigned char *attr_buffer ;
   pthread_t bg_thread ;
   pthread_mutex_t bg_mutex ;
   int has_perm ;
   char *seq[17] ;
   int (*keyboard_getch)(void) ;
   int (*keyboard_init)(void) ;
   void (*keyboard_exit)(void) ;
   void (*keyboard_handler)(void) ;
   int (*mouse_init)(void) ;
   void (*mouse_exit)(void) ;
   void (*mouse_handler)(void) ;
   void (*mouse_update)(int cb , int cx , int cy ) ;
   void (*gfx_exit)(void) ;
};
struct termio {
   unsigned short c_iflag ;
   unsigned short c_oflag ;
   unsigned short c_cflag ;
   unsigned short c_lflag ;
   unsigned char c_line ;
   unsigned char c_cc[8] ;
};
struct termio;
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
struct winsize;
typedef void (*XConnectionWatchProc)(Display * , XPointer  , int  , int  ,
                                     XPointer * );
struct __anonstruct_XIMValuesList_145;
typedef struct __anonstruct_XIMValuesList_145 XIMValuesList;
struct __anonstruct_XIMValuesList_145 {
   unsigned short count_values ;
   char **supported_values ;
};
typedef unsigned long XIMHotKeyState;
struct _XIMHotKeyTriggers;
typedef struct _XIMHotKeyTriggers XIMHotKeyTriggers;
struct _XIMHotKeyTrigger;
typedef struct _XIMHotKeyTrigger XIMHotKeyTrigger;
struct _XIMHotKeyTriggers {
   int num_hot_key ;
   XIMHotKeyTrigger *key ;
};
struct _XIMHotKeyTrigger {
   KeySym keysym ;
   int modifier ;
   int modifier_mask ;
};
struct _XIMStatusDrawCallbackStruct;
typedef struct _XIMStatusDrawCallbackStruct XIMStatusDrawCallbackStruct;
struct _XIMText;
typedef struct _XIMText XIMText;
union __anonunion_data_144 {
   XIMText *text ;
   Pixmap bitmap ;
};
enum __anonenum_XIMStatusDataType_143 {
    XIMTextType = 0,
    XIMBitmapType = 1
} ;
typedef enum __anonenum_XIMStatusDataType_143 XIMStatusDataType;
struct _XIMStatusDrawCallbackStruct {
   XIMStatusDataType type ;
   union __anonunion_data_144 data ;
};
union __anonunion_data_144;
enum __anonenum_XIMStatusDataType_143;
struct _XIMPreeditCaretCallbackStruct;
typedef struct _XIMPreeditCaretCallbackStruct XIMPreeditCaretCallbackStruct;
enum __anonenum_XIMCaretStyle_142 {
    XIMIsInvisible = 0,
    XIMIsPrimary = 1,
    XIMIsSecondary = 2
} ;
typedef enum __anonenum_XIMCaretStyle_142 XIMCaretStyle;
enum __anonenum_XIMCaretDirection_141 {
    XIMForwardChar = 0,
    XIMBackwardChar = 1,
    XIMForwardWord = 2,
    XIMBackwardWord = 3,
    XIMCaretUp = 4,
    XIMCaretDown = 5,
    XIMNextLine = 6,
    XIMPreviousLine = 7,
    XIMLineStart = 8,
    XIMLineEnd = 9,
    XIMAbsolutePosition = 10,
    XIMDontChange = 11
} ;
typedef enum __anonenum_XIMCaretDirection_141 XIMCaretDirection;
struct _XIMPreeditCaretCallbackStruct {
   int position ;
   XIMCaretDirection direction ;
   XIMCaretStyle style ;
};
enum __anonenum_XIMCaretStyle_142;
struct _XIMPreeditDrawCallbackStruct;
typedef struct _XIMPreeditDrawCallbackStruct XIMPreeditDrawCallbackStruct;
struct _XIMPreeditDrawCallbackStruct {
   int caret ;
   int chg_first ;
   int chg_length ;
   XIMText *text ;
};
struct _XIMStringConversionCallbackStruct;
typedef struct _XIMStringConversionCallbackStruct XIMStringConversionCallbackStruct;
struct _XIMStringConversionText;
typedef struct _XIMStringConversionText XIMStringConversionText;
typedef unsigned short XIMStringConversionOperation;
typedef unsigned short XIMStringConversionPosition;
struct _XIMStringConversionCallbackStruct {
   XIMStringConversionPosition position ;
   XIMCaretDirection direction ;
   XIMStringConversionOperation operation ;
   unsigned short factor ;
   XIMStringConversionText *text ;
};
enum __anonenum_XIMCaretDirection_141;
typedef unsigned short XIMStringConversionType;
union __anonunion_string_140 {
   char *mbs ;
   wchar_t *wcs ;
};
typedef unsigned long XIMStringConversionFeedback;
struct _XIMStringConversionText {
   unsigned short length ;
   XIMStringConversionFeedback *feedback ;
   int encoding_is_wchar ;
   union __anonunion_string_140 string ;
};
union __anonunion_string_140;
typedef unsigned long XIMResetState;
struct _XIMPreeditStateNotifyCallbackStruct;
typedef struct _XIMPreeditStateNotifyCallbackStruct XIMPreeditStateNotifyCallbackStruct;
typedef unsigned long XIMPreeditState;
struct _XIMPreeditStateNotifyCallbackStruct {
   XIMPreeditState state ;
};
union __anonunion_string_139 {
   char *multi_byte ;
   wchar_t *wide_char ;
};
typedef unsigned long XIMFeedback;
struct _XIMText {
   unsigned short length ;
   XIMFeedback *feedback ;
   int encoding_is_wchar ;
   union __anonunion_string_139 string ;
};
union __anonunion_string_139;
struct __anonstruct_XICCallback_138;
typedef struct __anonstruct_XICCallback_138 XICCallback;
struct __anonstruct_XICCallback_138 {
   XPointer client_data ;
   int (*callback)(XIC  , XPointer  , XPointer  ) ;
};
struct __anonstruct_XIMCallback_137;
typedef struct __anonstruct_XIMCallback_137 XIMCallback;
struct __anonstruct_XIMCallback_137 {
   XPointer client_data ;
   void (*callback)(XIM  , XPointer  , XPointer  ) ;
};
struct __anonstruct_XIMStyles_136;
typedef struct __anonstruct_XIMStyles_136 XIMStyles;
typedef unsigned long XIMStyle;
struct __anonstruct_XIMStyles_136 {
   unsigned short count_styles ;
   XIMStyle *supported_styles ;
};
typedef void (*XIDProc)(Display * , XPointer  , XPointer  );
typedef int (*XICProc)(XIC  , XPointer  , XPointer  );
typedef void (*XIMProc)(XIM  , XPointer  , XPointer  );
struct __anonstruct_XOMFontInfo_135;
typedef struct __anonstruct_XOMFontInfo_135 XOMFontInfo;
struct __anonstruct_XOMFontInfo_135 {
   int num_font ;
   XFontStruct **font_struct_list ;
   char **font_name_list ;
};
struct __anonstruct_XOMOrientation_134;
typedef struct __anonstruct_XOMOrientation_134 XOMOrientation;
enum __anonenum_XOrientation_133;
typedef enum __anonenum_XOrientation_133 XOrientation;
struct __anonstruct_XOMOrientation_134 {
   int num_orientation ;
   XOrientation *orientation ;
};
enum __anonenum_XOrientation_133 {
    XOMOrientation_LTR_TTB = 0,
    XOMOrientation_RTL_TTB = 1,
    XOMOrientation_TTB_LTR = 2,
    XOMOrientation_TTB_RTL = 3,
    XOMOrientation_Context = 4
} ;
struct __anonstruct_XOMCharSetList_132;
typedef struct __anonstruct_XOMCharSetList_132 XOMCharSetList;
struct __anonstruct_XOMCharSetList_132 {
   int charset_count ;
   char **charset_list ;
};
struct __anonstruct_XwcTextItem_131 {
   wchar_t *chars ;
   int nchars ;
   int delta ;
   XFontSet font_set ;
};
struct __anonstruct_XmbTextItem_130 {
   char *chars ;
   int nchars ;
   int delta ;
   XFontSet font_set ;
};
struct __anonstruct_XRectangle_81 {
   short x ;
   short y ;
   unsigned short width ;
   unsigned short height ;
};
struct __anonstruct_XFontSetExtents_129 {
   XRectangle max_ink_extent ;
   XRectangle max_logical_extent ;
};
struct __anonstruct_ScreenFormat_72;
typedef struct __anonstruct_ScreenFormat_72 ScreenFormat;
union __anonunion_XEDataObject_128 {
   Display *display ;
   GC gc ;
   Visual *visual ;
   Screen *screen ;
   ScreenFormat *pixmap_format ;
   XFontStruct *font ;
};
struct __anonstruct_XTextItem16_127 {
   XChar2b *chars ;
   int nchars ;
   int delta ;
   Font font ;
};
struct __anonstruct_XChar2b_126 {
   unsigned char byte1 ;
   unsigned char byte2 ;
};
struct __anonstruct_XTextItem_125 {
   char *chars ;
   int nchars ;
   int delta ;
   Font font ;
};
struct __anonstruct_XCharStruct_122 {
   short lbearing ;
   short rbearing ;
   short width ;
   short ascent ;
   short descent ;
   unsigned short attributes ;
};
struct __anonstruct_XFontProp_123;
typedef struct __anonstruct_XFontProp_123 XFontProp;
struct __anonstruct_XFontStruct_124 {
   XExtData *ext_data ;
   Font fid ;
   unsigned int direction ;
   unsigned int min_char_or_byte2 ;
   unsigned int max_char_or_byte2 ;
   unsigned int min_byte1 ;
   unsigned int max_byte1 ;
   int all_chars_exist ;
   unsigned int default_char ;
   int n_properties ;
   XFontProp *properties ;
   XCharStruct min_bounds ;
   XCharStruct max_bounds ;
   XCharStruct *per_char ;
   int ascent ;
   int descent ;
};
struct __anonstruct_XFontProp_123 {
   Atom name ;
   unsigned long card32 ;
};
struct __anonstruct_XGenericEventCookie_121 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   int extension ;
   int evtype ;
   unsigned int cookie ;
   void *data ;
};
struct __anonstruct_XGenericEvent_120 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   int extension ;
   int evtype ;
};
typedef struct __anonstruct_XGenericEvent_120 XGenericEvent;
struct __anonstruct_XKeymapEvent_93 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   char key_vector[32] ;
};
typedef struct __anonstruct_XKeymapEvent_93 XKeymapEvent;
struct __anonstruct_XErrorEvent_118 {
   int type ;
   Display *display ;
   XID resourceid ;
   unsigned long serial ;
   unsigned char error_code ;
   unsigned char request_code ;
   unsigned char minor_code ;
};
struct __anonstruct_XMappingEvent_117 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int request ;
   int first_keycode ;
   int count ;
};
union __anonunion_data_116 {
   char b[20] ;
   short s[10] ;
   long l[5] ;
};
struct __anonstruct_XClientMessageEvent_115 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Atom message_type ;
   int format ;
   union __anonunion_data_116 data ;
};
typedef struct __anonstruct_XClientMessageEvent_115 XClientMessageEvent;
struct __anonstruct_XColormapEvent_114 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Colormap colormap ;
   int new ;
   int state ;
};
typedef struct __anonstruct_XColormapEvent_114 XColormapEvent;
struct __anonstruct_XSelectionEvent_113 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window requestor ;
   Atom selection ;
   Atom target ;
   Atom property ;
   Time time ;
};
typedef struct __anonstruct_XSelectionEvent_113 XSelectionEvent;
struct __anonstruct_XSelectionRequestEvent_112 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window owner ;
   Window requestor ;
   Atom selection ;
   Atom target ;
   Atom property ;
   Time time ;
};
typedef struct __anonstruct_XSelectionRequestEvent_112 XSelectionRequestEvent;
struct __anonstruct_XSelectionClearEvent_111 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Atom selection ;
   Time time ;
};
typedef struct __anonstruct_XSelectionClearEvent_111 XSelectionClearEvent;
struct __anonstruct_XPropertyEvent_110 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Atom atom ;
   Time time ;
   int state ;
};
typedef struct __anonstruct_XPropertyEvent_110 XPropertyEvent;
struct __anonstruct_XCirculateRequestEvent_109 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window parent ;
   Window window ;
   int place ;
};
typedef struct __anonstruct_XCirculateRequestEvent_109 XCirculateRequestEvent;
struct __anonstruct_XCirculateEvent_108 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int place ;
};
typedef struct __anonstruct_XCirculateEvent_108 XCirculateEvent;
struct __anonstruct_XConfigureRequestEvent_107 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window parent ;
   Window window ;
   int x ;
   int y ;
   int width ;
   int height ;
   int border_width ;
   Window above ;
   int detail ;
   unsigned long value_mask ;
};
typedef struct __anonstruct_XConfigureRequestEvent_107 XConfigureRequestEvent;
struct __anonstruct_XResizeRequestEvent_106 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int width ;
   int height ;
};
typedef struct __anonstruct_XResizeRequestEvent_106 XResizeRequestEvent;
struct __anonstruct_XGravityEvent_105 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int x ;
   int y ;
};
typedef struct __anonstruct_XGravityEvent_105 XGravityEvent;
struct __anonstruct_XConfigureEvent_104 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int x ;
   int y ;
   int width ;
   int height ;
   int border_width ;
   Window above ;
   int override_redirect ;
};
typedef struct __anonstruct_XConfigureEvent_104 XConfigureEvent;
struct __anonstruct_XReparentEvent_103 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   Window parent ;
   int x ;
   int y ;
   int override_redirect ;
};
typedef struct __anonstruct_XReparentEvent_103 XReparentEvent;
struct __anonstruct_XMapRequestEvent_102 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window parent ;
   Window window ;
};
typedef struct __anonstruct_XMapRequestEvent_102 XMapRequestEvent;
struct __anonstruct_XMapEvent_101 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int override_redirect ;
};
typedef struct __anonstruct_XMapEvent_101 XMapEvent;
struct __anonstruct_XUnmapEvent_100 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int from_configure ;
};
typedef struct __anonstruct_XUnmapEvent_100 XUnmapEvent;
struct __anonstruct_XDestroyWindowEvent_99 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
};
typedef struct __anonstruct_XDestroyWindowEvent_99 XDestroyWindowEvent;
struct __anonstruct_XCreateWindowEvent_98 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window parent ;
   Window window ;
   int x ;
   int y ;
   int width ;
   int height ;
   int border_width ;
   int override_redirect ;
};
typedef struct __anonstruct_XCreateWindowEvent_98 XCreateWindowEvent;
struct __anonstruct_XVisibilityEvent_97 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int state ;
};
typedef struct __anonstruct_XVisibilityEvent_97 XVisibilityEvent;
struct __anonstruct_XNoExposeEvent_96 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Drawable drawable ;
   int major_code ;
   int minor_code ;
};
typedef struct __anonstruct_XNoExposeEvent_96 XNoExposeEvent;
struct __anonstruct_XGraphicsExposeEvent_95 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Drawable drawable ;
   int x ;
   int y ;
   int width ;
   int height ;
   int count ;
   int major_code ;
   int minor_code ;
};
typedef struct __anonstruct_XGraphicsExposeEvent_95 XGraphicsExposeEvent;
struct __anonstruct_XExposeEvent_94 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int x ;
   int y ;
   int width ;
   int height ;
   int count ;
};
typedef struct __anonstruct_XExposeEvent_94 XExposeEvent;
struct __anonstruct_XFocusChangeEvent_92 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int mode ;
   int detail ;
};
typedef struct __anonstruct_XFocusChangeEvent_92 XFocusChangeEvent;
struct __anonstruct_XCrossingEvent_91 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Window root ;
   Window subwindow ;
   Time time ;
   int x ;
   int y ;
   int x_root ;
   int y_root ;
   int mode ;
   int detail ;
   int same_screen ;
   int focus ;
   unsigned int state ;
};
typedef struct __anonstruct_XCrossingEvent_91 XCrossingEvent;
struct __anonstruct_XMotionEvent_90 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Window root ;
   Window subwindow ;
   Time time ;
   int x ;
   int y ;
   int x_root ;
   int y_root ;
   unsigned int state ;
   char is_hint ;
   int same_screen ;
};
typedef struct __anonstruct_XMotionEvent_90 XMotionEvent;
struct __anonstruct_XButtonEvent_89 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Window root ;
   Window subwindow ;
   Time time ;
   int x ;
   int y ;
   int x_root ;
   int y_root ;
   unsigned int state ;
   unsigned int button ;
   int same_screen ;
};
typedef struct __anonstruct_XButtonEvent_89 XButtonEvent;
struct __anonstruct_XKeyEvent_88 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Window root ;
   Window subwindow ;
   Time time ;
   int x ;
   int y ;
   int x_root ;
   int y_root ;
   unsigned int state ;
   unsigned int keycode ;
   int same_screen ;
};
struct __anonstruct_XAnyEvent_119 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
};
typedef struct __anonstruct_XAnyEvent_119 XAnyEvent;
union _XEvent {
   int type ;
   XAnyEvent xany ;
   XKeyEvent xkey ;
   XButtonEvent xbutton ;
   XMotionEvent xmotion ;
   XCrossingEvent xcrossing ;
   XFocusChangeEvent xfocus ;
   XExposeEvent xexpose ;
   XGraphicsExposeEvent xgraphicsexpose ;
   XNoExposeEvent xnoexpose ;
   XVisibilityEvent xvisibility ;
   XCreateWindowEvent xcreatewindow ;
   XDestroyWindowEvent xdestroywindow ;
   XUnmapEvent xunmap ;
   XMapEvent xmap ;
   XMapRequestEvent xmaprequest ;
   XReparentEvent xreparent ;
   XConfigureEvent xconfigure ;
   XGravityEvent xgravity ;
   XResizeRequestEvent xresizerequest ;
   XConfigureRequestEvent xconfigurerequest ;
   XCirculateEvent xcirculate ;
   XCirculateRequestEvent xcirculaterequest ;
   XPropertyEvent xproperty ;
   XSelectionClearEvent xselectionclear ;
   XSelectionRequestEvent xselectionrequest ;
   XSelectionEvent xselection ;
   XColormapEvent xcolormap ;
   XClientMessageEvent xclient ;
   XMappingEvent xmapping ;
   XErrorEvent xerror ;
   XKeymapEvent xkeymap ;
   XGenericEvent xgeneric ;
   XGenericEventCookie xcookie ;
   long pad[24] ;
};
struct __anonstruct_XGenericEvent_120;
struct __anonstruct_XAnyEvent_119;
struct __anonstruct_XClientMessageEvent_115;
union __anonunion_data_116;
struct __anonstruct_XColormapEvent_114;
struct __anonstruct_XSelectionEvent_113;
struct __anonstruct_XSelectionRequestEvent_112;
struct __anonstruct_XSelectionClearEvent_111;
struct __anonstruct_XPropertyEvent_110;
struct __anonstruct_XCirculateRequestEvent_109;
struct __anonstruct_XCirculateEvent_108;
struct __anonstruct_XConfigureRequestEvent_107;
struct __anonstruct_XResizeRequestEvent_106;
struct __anonstruct_XGravityEvent_105;
struct __anonstruct_XConfigureEvent_104;
struct __anonstruct_XReparentEvent_103;
struct __anonstruct_XMapRequestEvent_102;
struct __anonstruct_XMapEvent_101;
struct __anonstruct_XUnmapEvent_100;
struct __anonstruct_XDestroyWindowEvent_99;
struct __anonstruct_XCreateWindowEvent_98;
struct __anonstruct_XVisibilityEvent_97;
struct __anonstruct_XNoExposeEvent_96;
struct __anonstruct_XGraphicsExposeEvent_95;
struct __anonstruct_XExposeEvent_94;
struct __anonstruct_XKeymapEvent_93;
struct __anonstruct_XFocusChangeEvent_92;
typedef XFocusChangeEvent XFocusOutEvent;
typedef XFocusChangeEvent XFocusInEvent;
struct __anonstruct_XCrossingEvent_91;
typedef XCrossingEvent XLeaveWindowEvent;
typedef XCrossingEvent XEnterWindowEvent;
struct __anonstruct_XMotionEvent_90;
typedef XMotionEvent XPointerMovedEvent;
struct __anonstruct_XButtonEvent_89;
typedef XButtonEvent XButtonReleasedEvent;
typedef XButtonEvent XButtonPressedEvent;
typedef XKeyEvent XKeyReleasedEvent;
struct __anonstruct__XPrivDisplay_87;
typedef struct __anonstruct__XPrivDisplay_87 *_XPrivDisplay;
struct _XPrivate;
struct __anonstruct__XPrivDisplay_87 {
   XExtData *ext_data ;
   struct _XPrivate *private1 ;
   int fd ;
   int private2 ;
   int proto_major_version ;
   int proto_minor_version ;
   char *vendor ;
   XID private3 ;
   XID private4 ;
   XID private5 ;
   int private6 ;
   XID (*resource_alloc)(struct _XDisplay * ) ;
   int byte_order ;
   int bitmap_unit ;
   int bitmap_pad ;
   int bitmap_bit_order ;
   int nformats ;
   ScreenFormat *pixmap_format ;
   int private8 ;
   int release ;
   struct _XPrivate *private9 ;
   struct _XPrivate *private10 ;
   int qlen ;
   unsigned long last_request_read ;
   unsigned long request ;
   XPointer private11 ;
   XPointer private12 ;
   XPointer private13 ;
   XPointer private14 ;
   unsigned int max_request_size ;
   struct _XrmHashBucketRec *db ;
   int (*private15)(struct _XDisplay * ) ;
   char *display_name ;
   int default_screen ;
   int nscreens ;
   Screen *screens ;
   unsigned long motion_buffer ;
   unsigned long private16 ;
   int min_keycode ;
   int max_keycode ;
   XPointer private17 ;
   XPointer private18 ;
   int private19 ;
   char *xdefaults ;
};
struct __anonstruct_XModifierKeymap_86 {
   int max_keypermod ;
   KeyCode *modifiermap ;
};
struct __anonstruct_XTimeCoord_85 {
   Time time ;
   short x ;
   short y ;
};
struct __anonstruct_XKeyboardState_84 {
   int key_click_percent ;
   int bell_percent ;
   unsigned int bell_pitch ;
   unsigned int bell_duration ;
   unsigned long led_mask ;
   int global_auto_repeat ;
   char auto_repeats[32] ;
};
struct __anonstruct_XKeyboardControl_83 {
   int key_click_percent ;
   int bell_percent ;
   int bell_pitch ;
   int bell_duration ;
   int led ;
   int led_mode ;
   int key ;
   int auto_repeat_mode ;
};
struct __anonstruct_XArc_82 {
   short x ;
   short y ;
   unsigned short width ;
   unsigned short height ;
   short angle1 ;
   short angle2 ;
};
struct __anonstruct_XPoint_80 {
   short x ;
   short y ;
};
struct __anonstruct_XSegment_79 {
   short x1 ;
   short y1 ;
   short x2 ;
   short y2 ;
};
struct __anonstruct_XColor_78 {
   unsigned long pixel ;
   unsigned short red ;
   unsigned short green ;
   unsigned short blue ;
   char flags ;
   char pad ;
};
struct __anonstruct_XWindowChanges_77 {
   int x ;
   int y ;
   int width ;
   int height ;
   int border_width ;
   Window sibling ;
   int stack_mode ;
};
struct funcs {
   struct _XImage *(*create_image)(struct _XDisplay * , Visual * ,
                                   unsigned int  , int  , int  , char * ,
                                   unsigned int  , unsigned int  , int  , int  ) ;
   int (*destroy_image)(struct _XImage * ) ;
   unsigned long (*get_pixel)(struct _XImage * , int  , int  ) ;
   int (*put_pixel)(struct _XImage * , int  , int  , unsigned long  ) ;
   struct _XImage *(*sub_image)(struct _XImage * , int  , int  , unsigned int  ,
                                unsigned int  ) ;
   int (*add_pixel)(struct _XImage * , long  ) ;
};
struct _XImage {
   int width ;
   int height ;
   int xoffset ;
   int format ;
   char *data ;
   int byte_order ;
   int bitmap_unit ;
   int bitmap_bit_order ;
   int bitmap_pad ;
   int depth ;
   int bytes_per_line ;
   int bits_per_pixel ;
   unsigned long red_mask ;
   unsigned long green_mask ;
   unsigned long blue_mask ;
   XPointer obdata ;
   struct funcs f ;
};
struct funcs;
struct __anonstruct_XServerInterpretedAddress_76;
typedef struct __anonstruct_XServerInterpretedAddress_76 XServerInterpretedAddress;
struct __anonstruct_XServerInterpretedAddress_76 {
   int typelength ;
   int valuelength ;
   char *type ;
   char *value ;
};
struct __anonstruct_XHostAddress_75 {
   int family ;
   int length ;
   char *address ;
};
struct __anonstruct_XWindowAttributes_74 {
   int x ;
   int y ;
   int width ;
   int height ;
   int border_width ;
   int depth ;
   Visual *visual ;
   Window root ;
   int class ;
   int bit_gravity ;
   int win_gravity ;
   int backing_store ;
   unsigned long backing_planes ;
   unsigned long backing_pixel ;
   int save_under ;
   Colormap colormap ;
   int map_installed ;
   int map_state ;
   long all_event_masks ;
   long your_event_mask ;
   long do_not_propagate_mask ;
   int override_redirect ;
   Screen *screen ;
};
struct __anonstruct_XSetWindowAttributes_73 {
   Pixmap background_pixmap ;
   unsigned long background_pixel ;
   Pixmap border_pixmap ;
   unsigned long border_pixel ;
   int bit_gravity ;
   int win_gravity ;
   int backing_store ;
   unsigned long backing_planes ;
   unsigned long backing_pixel ;
   int save_under ;
   long event_mask ;
   long do_not_propagate_mask ;
   int override_redirect ;
   Colormap colormap ;
   Cursor cursor ;
};
struct __anonstruct_ScreenFormat_72 {
   XExtData *ext_data ;
   int depth ;
   int bits_per_pixel ;
   int scanline_pad ;
};
struct __anonstruct_Depth_70;
typedef struct __anonstruct_Depth_70 Depth;
struct __anonstruct_Screen_71 {
   XExtData *ext_data ;
   struct _XDisplay *display ;
   Window root ;
   int width ;
   int height ;
   int mwidth ;
   int mheight ;
   int ndepths ;
   Depth *depths ;
   int root_depth ;
   Visual *root_visual ;
   GC default_gc ;
   Colormap cmap ;
   unsigned long white_pixel ;
   unsigned long black_pixel ;
   int max_maps ;
   int min_maps ;
   int backing_store ;
   int save_unders ;
   long root_input_mask ;
};
struct __anonstruct_Depth_70 {
   int depth ;
   int nvisuals ;
   Visual *visuals ;
};
struct __anonstruct_Visual_69 {
   XExtData *ext_data ;
   VisualID visualid ;
   int class ;
   unsigned long red_mask ;
   unsigned long green_mask ;
   unsigned long blue_mask ;
   int bits_per_rgb ;
   int map_entries ;
};
struct __anonstruct_XGCValues_68 {
   int function ;
   unsigned long plane_mask ;
   unsigned long foreground ;
   unsigned long background ;
   int line_width ;
   int line_style ;
   int cap_style ;
   int join_style ;
   int fill_style ;
   int fill_rule ;
   int arc_mode ;
   Pixmap tile ;
   Pixmap stipple ;
   int ts_x_origin ;
   int ts_y_origin ;
   Font font ;
   int subwindow_mode ;
   int graphics_exposures ;
   int clip_x_origin ;
   int clip_y_origin ;
   Pixmap clip_mask ;
   int dash_offset ;
   char dashes ;
};
struct __anonstruct_XPixmapFormatValues_67 {
   int depth ;
   int bits_per_pixel ;
   int scanline_pad ;
};
struct __anonstruct_XExtCodes_66 {
   int extension ;
   int major_opcode ;
   int first_event ;
   int first_error ;
};
struct _XExtData {
   int number ;
   struct _XExtData *next ;
   int (*free_private)(struct _XExtData *extension ) ;
   XPointer private_data ;
};
typedef int ptrdiff_t;
typedef unsigned long Mask;
struct __pthread_cleanup_frame {
   void (*__cancel_routine)(void * ) ;
   void *__cancel_arg ;
   int __do_it ;
   int __cancel_type ;
};
struct __pthread_cleanup_frame;
typedef int __jmp_buf[6];
struct __anonstruct___cancel_jmp_buf_65 {
   __jmp_buf __cancel_jmp_buf ;
   int __mask_was_saved ;
};
struct __anonstruct___pthread_unwind_buf_t_64 {
   struct __anonstruct___cancel_jmp_buf_65 __cancel_jmp_buf[1] ;
   void *__pad[4] ;
};
struct __anonstruct___cancel_jmp_buf_65;
enum __anonenum_63 {
    PTHREAD_CANCEL_DEFERRED = 0,
    PTHREAD_CANCEL_ASYNCHRONOUS = 1
} ;
enum __anonenum_63;
enum __anonenum_62 {
    PTHREAD_CANCEL_ENABLE = 0,
    PTHREAD_CANCEL_DISABLE = 1
} ;
enum __anonenum_62;
struct _pthread_cleanup_buffer {
   void (*__routine)(void * ) ;
   void *__arg ;
   int __canceltype ;
   struct _pthread_cleanup_buffer *__prev ;
};
struct _pthread_cleanup_buffer;
enum __anonenum_61 {
    PTHREAD_PROCESS_PRIVATE = 0,
    PTHREAD_PROCESS_SHARED = 1
} ;
enum __anonenum_61;
enum __anonenum_60 {
    PTHREAD_SCOPE_SYSTEM = 0,
    PTHREAD_SCOPE_PROCESS = 1
} ;
enum __anonenum_60;
enum __anonenum_59 {
    PTHREAD_INHERIT_SCHED = 0,
    PTHREAD_EXPLICIT_SCHED = 1
} ;
enum __anonenum_59;
enum __anonenum_58 {
    PTHREAD_RWLOCK_PREFER_READER_NP = 0,
    PTHREAD_RWLOCK_PREFER_WRITER_NP = 1,
    PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP = 2,
    PTHREAD_RWLOCK_DEFAULT_NP = 0
} ;
enum __anonenum_58;
enum __anonenum_57 {
    PTHREAD_MUTEX_STALLED = 0,
    PTHREAD_MUTEX_STALLED_NP = 0,
    PTHREAD_MUTEX_ROBUST = 1,
    PTHREAD_MUTEX_ROBUST_NP = 1
} ;
enum __anonenum_57;
enum __anonenum_56 {
    PTHREAD_MUTEX_TIMED_NP = 0,
    PTHREAD_MUTEX_RECURSIVE_NP = 1,
    PTHREAD_MUTEX_ERRORCHECK_NP = 2,
    PTHREAD_MUTEX_ADAPTIVE_NP = 3,
    PTHREAD_MUTEX_NORMAL = 0,
    PTHREAD_MUTEX_RECURSIVE = 1,
    PTHREAD_MUTEX_ERRORCHECK = 2,
    PTHREAD_MUTEX_DEFAULT = 0
} ;
enum __anonenum_56;
enum __anonenum_55 {
    PTHREAD_CREATE_JOINABLE = 0,
    PTHREAD_CREATE_DETACHED = 1
} ;
enum __anonenum_55;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};
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
typedef unsigned long __cpu_mask;
struct __anonstruct_cpu_set_t_54 {
   __cpu_mask __bits[1024U / (8U * sizeof(__cpu_mask ))] ;
};
struct __sched_param {
   int __sched_priority ;
};
struct __sched_param;
struct sched_param {
   int __sched_priority ;
};
enum __anonenum_53 {
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
enum __anonenum_53;
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __ino64_t;
struct dirent {
   __ino64_t d_ino ;
   __off64_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
struct ucontext;
typedef struct ucontext ucontext_t;
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
struct _libc_fpstate;
typedef struct _libc_fpstate *fpregset_t;
typedef int greg_t;
typedef greg_t gregset_t[19];
struct __anonstruct_mcontext_t_52 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
typedef struct __anonstruct_mcontext_t_52 mcontext_t;
struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};
typedef struct sigaltstack stack_t;
struct ucontext {
   unsigned long uc_flags ;
   struct ucontext *uc_link ;
   stack_t uc_stack ;
   mcontext_t uc_mcontext ;
   __sigset_t uc_sigmask ;
   struct _libc_fpstate __fpregs_mem ;
};
struct __anonstruct_mcontext_t_52;
struct _libc_fpreg;
enum __anonenum_51 {
    SS_ONSTACK = 1,
    SS_DISABLE = 2
} ;
enum __anonenum_51;
struct sigstack {
   void *ss_sp ;
   int ss_onstack ;
};
typedef unsigned int __u32;
struct _ymmh_state {
   __u32 ymmh_space[64] ;
};
typedef unsigned long long __u64;
struct _xsave_hdr {
   __u64 xstate_bv ;
   __u64 reserved1[2] ;
   __u64 reserved2[5] ;
};
struct _fpx_sw_bytes {
   __u32 magic1 ;
   __u32 extended_size ;
   __u64 xstate_bv ;
   __u32 xstate_size ;
   __u32 padding[7] ;
};
union __anonunion____missing_field_name_50 {
   unsigned long padding2[12] ;
   struct _fpx_sw_bytes sw_reserved ;
};
struct _xmmreg {
   unsigned long element[4] ;
};
struct _fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};
struct _fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
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
   union __anonunion____missing_field_name_50 __annonCompField2 ;
};
struct _xstate {
   struct _fpstate fpstate ;
   struct _xsave_hdr xstate_hdr ;
   struct _ymmh_state ymmh ;
};
struct _xstate;
struct _ymmh_state;
struct _xsave_hdr;
struct _fpstate;
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
union __anonunion____missing_field_name_50;
struct _xmmreg;
struct _fpxreg;
struct _fpreg;
struct _fpx_sw_bytes;
typedef __u32 __wsum;
typedef unsigned short __u16;
typedef __u16 __sum16;
typedef __u64 __be64;
typedef __u64 __le64;
typedef __u32 __be32;
typedef __u32 __le32;
typedef __u16 __be16;
typedef __u16 __le16;
struct __anonstruct___kernel_fsid_t_49;
typedef struct __anonstruct___kernel_fsid_t_49 __kernel_fsid_t;
struct __anonstruct___kernel_fsid_t_49 {
   int val[2] ;
};
typedef long long __kernel_loff_t;
typedef unsigned short __kernel_old_dev_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned short __kernel_uid16_t;
typedef char *__kernel_caddr_t;
typedef int __kernel_daddr_t;
typedef int __kernel_clockid_t;
typedef int __kernel_timer_t;
typedef long __kernel_clock_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_time_t;
typedef int __kernel_ptrdiff_t;
typedef int __kernel_ssize_t;
typedef unsigned int __kernel_size_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef int __kernel_pid_t;
typedef long __kernel_off_t;
typedef unsigned short __kernel_nlink_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned long __kernel_ino_t;
typedef int __kernel_mqd_t;
typedef int __kernel_key_t;
typedef void (*__kernel_sighandler_t)(int  );
struct __anonstruct___kernel_fd_set_48;
typedef struct __anonstruct___kernel_fd_set_48 __kernel_fd_set;
struct __anonstruct___kernel_fd_set_48 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef unsigned short umode_t;
typedef long long __s64;
typedef int __s32;
typedef short __s16;
typedef unsigned char __u8;
typedef signed char __s8;
struct sigvec {
   void (*sv_handler)(int  ) ;
   int sv_mask ;
   int sv_flags ;
};
union __anonunion___sigaction_handler_47 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_47 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
union __anonunion___sigaction_handler_47;
typedef void (*sig_t)(int  );
enum __anonenum_46 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
enum __anonenum_46;
typedef struct sigevent sigevent_t;
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
struct __anonstruct__sigev_thread_45 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_44 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_45 _sigev_thread ;
};
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_44 _sigev_un ;
};
union __anonunion__sigev_un_44;
struct __anonstruct__sigev_thread_45;
enum __anonenum_43 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
enum __anonenum_43;
enum __anonenum_42 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
enum __anonenum_42;
enum __anonenum_41 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
enum __anonenum_41;
enum __anonenum_40 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
enum __anonenum_40;
enum __anonenum_39 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
enum __anonenum_39;
enum __anonenum_38 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
enum __anonenum_38;
enum __anonenum_37 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
enum __anonenum_37;
enum __anonenum_36 {
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
enum __anonenum_36;
struct __anonstruct__sigpoll_35 {
   long si_band ;
   int si_fd ;
};
struct __anonstruct__sigfault_34 {
   void *si_addr ;
};
struct __anonstruct__sigchld_33 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
struct __anonstruct__rt_32 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__timer_31 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__kill_30 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
union __anonunion__sifields_29 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_30 _kill ;
   struct __anonstruct__timer_31 _timer ;
   struct __anonstruct__rt_32 _rt ;
   struct __anonstruct__sigchld_33 _sigchld ;
   struct __anonstruct__sigfault_34 _sigfault ;
   struct __anonstruct__sigpoll_35 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_29 _sifields ;
};
union __anonunion__sifields_29;
struct __anonstruct__sigpoll_35;
struct __anonstruct__sigfault_34;
struct __anonstruct__sigchld_33;
struct __anonstruct__rt_32;
struct __anonstruct__timer_31;
struct __anonstruct__kill_30;
typedef int __sig_atomic_t;
typedef __sig_atomic_t sig_atomic_t;
enum __anonenum_28 {
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
enum __anonenum_28;
enum __anonenum_27 {
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
enum __anonenum_27;
enum __anonenum_26 {
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
enum __anonenum_26;
typedef unsigned int __socklen_t;
typedef __socklen_t socklen_t;
typedef __useconds_t useconds_t;
typedef int __io_close_fn(void *__cookie );
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
enum __codecvt_result {
    __codecvt_ok = 0,
    __codecvt_partial = 1,
    __codecvt_error = 2,
    __codecvt_noconv = 3
} ;
enum __codecvt_result;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_jump_t;
typedef unsigned int _G_uint32_t;
typedef unsigned short _G_uint16_t;
typedef int _G_int32_t;
typedef short _G_int16_t;
union __anonunion___value_23 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_22 {
   int __count ;
   union __anonunion___value_23 __value ;
};
struct __anonstruct__G_fpos64_t_25 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
struct __anonstruct__G_fpos_t_24;
typedef struct __anonstruct__G_fpos_t_24 _G_fpos_t;
struct __anonstruct__G_fpos_t_24 {
   __off_t __pos ;
   __mbstate_t __state ;
};
union __anonunion___value_23;
typedef __quad_t __blkcnt64_t;
typedef long __blksize_t;
typedef __u_quad_t __dev_t;
typedef unsigned int __nlink_t;
typedef unsigned long __ino_t;
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
struct stat;
struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
struct flock;
typedef __locale_t locale_t;
struct __locale_data;
struct __locale_struct {
   struct __locale_data *__locales[13] ;
   unsigned short const   *__ctype_b ;
   int const   *__ctype_tolower ;
   int const   *__ctype_toupper ;
   char const   *__names[13] ;
};
typedef int (*__compar_fn_t)(void const   * , void const   * );
struct drand48_data {
   unsigned short __x[3] ;
   unsigned short __old_x[3] ;
   unsigned short __c ;
   unsigned short __init ;
   unsigned long long __a ;
};
struct random_data {
   int32_t *fptr ;
   int32_t *rptr ;
   int32_t *state ;
   int rand_type ;
   int rand_deg ;
   int rand_sep ;
   int32_t *end_ptr ;
};
union __anonunion_pthread_barrierattr_t_21 {
   char __size[4] ;
   int __align ;
};
union __anonunion_pthread_barrier_t_20 {
   char __size[20] ;
   long __align ;
};
union __anonunion_pthread_rwlockattr_t_19 {
   char __size[8] ;
   long __align ;
};
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
struct __anonstruct___data_18;
union __anonunion_pthread_condattr_t_16 {
   char __size[4] ;
   long __align ;
};
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
struct __anonstruct___data_15;
union __anonunion_pthread_mutexattr_t_13 {
   char __size[4] ;
   long __align ;
};
struct __pthread_mutex_s;
union __anonunion____missing_field_name_12;
struct __pthread_internal_slist;
union __anonunion_pthread_attr_t_10 {
   char __size[36] ;
   long __align ;
};
typedef __u_quad_t __fsfilcnt64_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef __u_quad_t __fsblkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __blkcnt64_t blkcnt_t;
typedef __blksize_t blksize_t;
typedef long __fd_mask;
typedef __fd_mask fd_mask;
struct __anonstruct_fd_set_9 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef long __suseconds_t;
typedef __suseconds_t suseconds_t;
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef int register_t;
typedef unsigned long long u_int64_t;
typedef unsigned int u_int32_t;
typedef unsigned short u_int16_t;
typedef unsigned char u_int8_t;
typedef long long int64_t;
typedef short int16_t;
typedef signed char int8_t;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned long ulong;
typedef int __key_t;
typedef __key_t key_t;
typedef char *__caddr_t;
typedef __caddr_t caddr_t;
typedef int __daddr_t;
typedef __daddr_t daddr_t;
typedef unsigned int __id_t;
typedef __id_t id_t;
typedef __uid_t uid_t;
typedef __nlink_t nlink_t;
typedef __gid_t gid_t;
typedef __dev_t dev_t;
typedef __ino64_t ino_t;
typedef __off64_t __loff_t;
typedef __loff_t loff_t;
struct __anonstruct___fsid_t_7;
typedef struct __anonstruct___fsid_t_7 __fsid_t;
typedef __fsid_t fsid_t;
typedef __u_quad_t u_quad_t;
typedef __quad_t quad_t;
typedef unsigned long __u_long;
typedef __u_long u_long;
typedef unsigned int __u_int;
typedef __u_int u_int;
typedef unsigned short __u_short;
typedef __u_short u_short;
typedef unsigned char __u_char;
typedef __u_char u_char;
typedef __quad_t *__qaddr_t;
typedef unsigned long __fsfilcnt_t;
typedef unsigned long __fsblkcnt_t;
typedef long __blkcnt_t;
typedef long __swblk_t;
typedef __u_quad_t __rlim64_t;
typedef unsigned long __rlim_t;
struct __anonstruct___fsid_t_7 {
   int __val[2] ;
};
typedef unsigned long long __uint64_t;
typedef long long __int64_t;
typedef unsigned int __uint32_t;
typedef unsigned short __uint16_t;
typedef short __int16_t;
typedef unsigned char __uint8_t;
typedef signed char __int8_t;
struct __anonstruct_lldiv_t_6 {
   long long quot ;
   long long rem ;
};
struct __anonstruct_ldiv_t_5 {
   long quot ;
   long rem ;
};
struct __anonstruct_div_t_4 {
   int quot ;
   int rem ;
};
union __anonunion___WAIT_STATUS_3;
typedef union __anonunion___WAIT_STATUS_3  __attribute__((__transparent_union__)) __WAIT_STATUS;
union wait;
union __anonunion___WAIT_STATUS_3 {
   union wait *__uptr ;
   int *__iptr ;
};
struct __anonstruct___wait_stopped_2 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_terminated_1 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_1 __wait_terminated ;
   struct __anonstruct___wait_stopped_2 __wait_stopped ;
};
struct __anonstruct___wait_stopped_2;
struct __anonstruct___wait_terminated_1;
struct _IO_FILE *_coverage_fout  ;
