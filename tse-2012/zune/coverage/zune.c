extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1),
__leaf__)) memset)(void *__s , int __c , unsigned long __n ) ;
struct _IO_FILE;
extern int fprintf(struct _IO_FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
extern struct _IO_FILE *fopen(char const   * __restrict  __filename ,
                              char const   * __restrict  __modes ) ;
extern int fflush(struct _IO_FILE *__stream ) ;
extern int fclose(struct _IO_FILE *__stream ) ;
struct _IO_FILE *_coverage_fout  ;
int isLeapYear(int y ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/zune/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  return (y % 4 == 0);
}
}
extern int ( /* missing proto */  atoi)() ;
extern int ( /* missing proto */  printf)() ;
int main(int argc , char **argv ) 
{ 
  int year ;
  int days ;
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/zune/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  year = 1980;
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  days = atoi(*(argv + 1));
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "5\n");
    fflush(_coverage_fout);
    }
    if (days > 365) {
      {
      fprintf(_coverage_fout, "6\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "7\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "8\n");
    fflush(_coverage_fout);
    }
    tmp = isLeapYear(year);
    {
    fprintf(_coverage_fout, "9\n");
    fflush(_coverage_fout);
    }
    if (tmp) {
      {
      fprintf(_coverage_fout, "10\n");
      fflush(_coverage_fout);
      }
      if (days > 366) {
        {
        fprintf(_coverage_fout, "11\n");
        fflush(_coverage_fout);
        }
        days -= 366;
        {
        fprintf(_coverage_fout, "12\n");
        fflush(_coverage_fout);
        }
        year ++;
      } else {
        {
        fprintf(_coverage_fout, "13\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "14\n");
      fflush(_coverage_fout);
      }
      days -= 365;
      {
      fprintf(_coverage_fout, "15\n");
      fflush(_coverage_fout);
      }
      year ++;
    }
  }
  {
  fprintf(_coverage_fout, "16\n");
  fflush(_coverage_fout);
  }
  printf("current year is %d\n", year);
  {
  fprintf(_coverage_fout, "17\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
