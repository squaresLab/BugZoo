#!/bin/bash
# $1 = EXE 
# $2 = test name  
# $3 = port 
# $4 = source name
# $5 = single-fitness-file name 
# exit 0 = success
ulimit -t 1
case $2 in
  p1) $1 1071 1029        | diff gcd/output.1071.1029 - && exit 0 ;;
  p2) $1 555 666          | diff gcd/output.555.666 - && exit 0 ;;
  p3) $1 678 987          | diff gcd/output.678.987 - && exit 0 ;;
  p4) $1 8767 653         | diff gcd/output.8767.653 - && exit 0 ;;
  p5) $1 16777216 512     | diff gcd/output.16777216.512 - && exit 0 ;;
  p6) $1 16 4             | diff gcd/output.16.4 - && exit 0 ;;
  p7) $1 315 831          | diff gcd/output.315.831 - && exit 0 ;;
  p8) $1 513332 91583315  | diff gcd/output.513332.91583315 - && exit 0 ;;
  p9) $1 112 135          | diff gcd/output.112.135 - && exit 0 ;;
  p10) $1 310 55          | diff gcd/output.310.55 - && exit 0 ;;
  n1) $1 0 55             | diff gcd/output.0.55 - && exit 0 ;;
esac 
exit 1
