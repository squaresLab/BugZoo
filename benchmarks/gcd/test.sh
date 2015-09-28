#!/bin/bash
# $1 = EXE 
# $2 = test name  
# $3 = port 
# $4 = source name
# $5 = single-fitness-file name 
# exit 0 = success

# Find the directory that this test script belongs to.
$DIR = $( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

ulimit -t 1
case $2 in
  p1) $1 1071 1029        | diff $DIR/test/output.1071.1029 - && exit 0 ;;
  p2) $1 555 666          | diff $DIR/test/output.555.666 - && exit 0 ;;
  p3) $1 678 987          | diff $DIR/test/output.678.987 - && exit 0 ;;
  p4) $1 8767 653         | diff $DIR/test/output.8767.653 - && exit 0 ;;
  p5) $1 16777216 512     | diff $DIR/test/output.16777216.512 - && exit 0 ;;
  p6) $1 16 4             | diff $DIR/test/output.16.4 - && exit 0 ;;
  p7) $1 315 831          | diff $DIR/test/output.315.831 - && exit 0 ;;
  p8) $1 513332 91583315  | diff $DIR/test/output.513332.91583315 - && exit 0 ;;
  p9) $1 112 135          | diff $DIR/test/output.112.135 - && exit 0 ;;
  p10) $1 310 55          | diff $DIR/test/output.310.55 - && exit 0 ;;
  n1) $1 0 55             | diff $DIR/test/output.0.55 - && exit 0 ;;
esac 
exit 1
