int isLeapYear(int y){ return (y%4 == 0); }

int main(int argc, char *argv[]) {
  int year = 1980;
  int days;
  days = atoi(argv[1]);


    while (days > 365) {
      if (isLeapYear(year)){
  if (days > 366) {
    days -= 366;
    year += 1;
  }
      }
      else {
  days -= 365;
  year += 1;
      }
    }



  printf("current year is %d\n", year);
  return 0;
}
