#!/bin/bash
executable=$( dirname $1 )
test_id=$2
dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

#Check if coverage is being run. If so, don't use time limit.
if [ `basename $1` = "coverage" ] ; then
  timeout=60
else
  timeout=5
fi

run_test()
{
    pushd $dir/src/test > /dev/null
    test_output=$(sed "$1q;d" $dir/TESTS)
    rm -f $test_output
    timeout $timeout make $test_output |& grep "PASS:"
    return $?
}

case $test_id in
    p1) run_test 1 && exit 0 ;; 
    p2) run_test 2 && exit 0 ;; 
    p3) run_test 4 && exit 0 ;; 
    p4) run_test 5 && exit 0 ;; 
    p5) run_test 6 && exit 0 ;; 
    p6) run_test 7 && exit 0 ;; 
    p7) run_test 8 && exit 0 ;; 
    p8) run_test 9 && exit 0 ;; 
    p9) run_test 10 && exit 0 ;; 
    p10) run_test 11 && exit 0 ;; 
    p11) run_test 12 && exit 0 ;; 
    p12) run_test 13 && exit 0 ;; 
    p13) run_test 14 && exit 0 ;; 
    p14) run_test 15 && exit 0 ;; 
    p15) run_test 16 && exit 0 ;; 
    p16) run_test 17 && exit 0 ;; 
    p17) run_test 20 && exit 0 ;; 
    p18) run_test 21 && exit 0 ;; 
    p19) run_test 24 && exit 0 ;; 
    p20) run_test 25 && exit 0 ;; 
    p21) run_test 26 && exit 0 ;; 
    p22) run_test 27 && exit 0 ;; 
    p23) run_test 28 && exit 0 ;; 
    p24) run_test 39 && exit 0 ;; 
    p25) run_test 40 && exit 0 ;; 
    p26) run_test 41 && exit 0 ;; 
    p27) run_test 43 && exit 0 ;; 
    p28) run_test 44 && exit 0 ;; 
    p29) run_test 45 && exit 0 ;; 
    p30) run_test 46 && exit 0 ;; 
    p31) run_test 47 && exit 0 ;; 
    p32) run_test 48 && exit 0 ;; 
    p33) run_test 49 && exit 0 ;; 
    p34) run_test 50 && exit 0 ;; 
    p35) run_test 51 && exit 0 ;; 
    p36) run_test 53 && exit 0 ;; 
    p37) run_test 54 && exit 0 ;; 
    p38) run_test 55 && exit 0 ;; 
    p39) run_test 56 && exit 0 ;; 
    p40) run_test 57 && exit 0 ;; 
    p41) run_test 58 && exit 0 ;; 
    p42) run_test 59 && exit 0 ;; 
    p43) run_test 60 && exit 0 ;; 
    p44) run_test 61 && exit 0 ;; 
    p45) run_test 63 && exit 0 ;; 
    p46) run_test 64 && exit 0 ;; 
    p47) run_test 65 && exit 0 ;; 
    p48) run_test 66 && exit 0 ;; 
    p49) run_test 67 && exit 0 ;; 
    p50) run_test 68 && exit 0 ;; 
    p51) run_test 69 && exit 0 ;; 
    p52) run_test 70 && exit 0 ;; 
    p53) run_test 71 && exit 0 ;; 
    p54) run_test 72 && exit 0 ;; 
    p55) run_test 73 && exit 0 ;; 
    p56) run_test 74 && exit 0 ;; 
    p57) run_test 75 && exit 0 ;; 
    p58) run_test 76 && exit 0 ;; 
    p59) run_test 77 && exit 0 ;; 
    p60) run_test 78 && exit 0 ;; 
    n1) run_test 22 && exit 0 ;; 
esac
exit 1
