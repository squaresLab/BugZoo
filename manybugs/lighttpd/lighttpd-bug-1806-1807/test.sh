#!/bin/bash
EXECUTABLE=$( dirname $1 )
TEST_ID=$2
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

#Check if coverage is being run. If so, don't use time limit.
if [ `basename $1` = "coverage" ] ; then
  TIMEOUT=120
else
  TIMEOUT=60
fi

run_test()
{
    pushd lighttpd
    timeout $TIMEOUT $DIR/test.pl $1
    RESULT=$?
    popd
    return $RESULT
}

case $TEST_ID in
    p1) run_test 2 && exit 0 ;; 
    p2) run_test 3 && exit 0 ;; 
    p3) run_test 7 && exit 0 ;; 
    p4) run_test 12 && exit 0 ;; 
    p5) run_test 15 && exit 0 ;; 
    n1) run_test 1 && exit 0 ;; 
    n2) run_test 4 && exit 0 ;; 
    n3) run_test 6 && exit 0 ;; 
    n4) run_test 8 && exit 0 ;; 
    n5) run_test 10 && exit 0 ;; 
    n6) run_test 11 && exit 0 ;; 
    n7) run_test 14 && exit 0 ;; 
    n8) run_test 16 && exit 0 ;; 
    n9) run_test 17 && exit 0 ;; 
    n10) run_test 18 && exit 0 ;; 
    n11) run_test 20 && exit 0 ;; 
    n12) run_test 21 && exit 0 ;; 
esac
exit 1
