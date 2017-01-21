#!/bin/bash
bugrev=1913
executable=$( dirname $1 )
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

#Check if coverage is being run. If so, don't use time limit.
if [ `basename $executable` = "coverage" ] ; then
  timeout=180
else
  timeout=90
fi

run_test()
{
    pushd src
    timeout $timeout $here_dir/helper.pl $1 $bugrev
    result=$?
    popd
    return $result
}

case $test_id in
    p1) run_test 1 && exit 0 ;; 
    p2) run_test 2 && exit 0 ;; 
    p3) run_test 3 && exit 0 ;; 
    p4) run_test 4 && exit 0 ;; 
    p5) run_test 6 && exit 0 ;; 
    p6) run_test 7 && exit 0 ;; 
    p7) run_test 8 && exit 0 ;; 
    p8) run_test 10 && exit 0 ;; 
    p9) run_test 11 && exit 0 ;; 
    p10) run_test 12 && exit 0 ;; 
    p11) run_test 14 && exit 0 ;; 
    p12) run_test 15 && exit 0 ;; 
    p13) run_test 16 && exit 0 ;; 
    p14) run_test 17 && exit 0 ;; 
    p15) run_test 18 && exit 0 ;; 
    p16) run_test 20 && exit 0 ;; 
    p17) run_test 21 && exit 0 ;; 
    n1) run_test 9 && exit 0 ;; 
esac
exit 1
