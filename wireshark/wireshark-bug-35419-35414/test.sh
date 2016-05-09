#!/bin/bash
bugrev=35419

#Check if coverage is being run. If so, don't use time limit.
if [ `basename $2` = "coverage" ] ; then
    cov=0
else
    cov=1
fi

run_test()
{
    cd wireshark
        /root/mountpoint-genprog/genprog-many-bugs/wireshark-bug-35419-35414/limit  /root/mountpoint-genprog/genprog-many-bugs/wireshark-bug-35419-35414/wireshark-run-tests.sh $1
    RESULT=$?
    killall lt-tshark; killall lt-dumpcap
    cd ..
    return $RESULT
}
case $1 in
    p1) run_test 48 && exit 0 ;; 
    p2) run_test 51 && exit 0 ;; 
    p3) run_test 53 && exit 0 ;; 
    p4) run_test 55 && exit 0 ;; 
    p5) run_test 59 && exit 0 ;; 
    p6) run_test 60 && exit 0 ;; 
    p7) run_test 61 && exit 0 ;; 
    n1) run_test 1 && exit 0 ;; 
    n2) run_test 2 && exit 0 ;; 
    n3) run_test 3 && exit 0 ;; 
    n4) run_test 4 && exit 0 ;; 
    n5) run_test 5 && exit 0 ;; 
    n6) run_test 6 && exit 0 ;; 
    n7) run_test 7 && exit 0 ;; 
    n8) run_test 8 && exit 0 ;; 
    n9) run_test 9 && exit 0 ;; 
    n10) run_test 10 && exit 0 ;; 
    n11) run_test 11 && exit 0 ;; 
    n12) run_test 12 && exit 0 ;; 
    n13) run_test 13 && exit 0 ;; 
    n14) run_test 14 && exit 0 ;; 
    n15) run_test 15 && exit 0 ;; 
    n16) run_test 16 && exit 0 ;; 
    n17) run_test 17 && exit 0 ;; 
    n18) run_test 18 && exit 0 ;; 
    n19) run_test 19 && exit 0 ;; 
    n20) run_test 20 && exit 0 ;; 
    n21) run_test 21 && exit 0 ;; 
    n22) run_test 22 && exit 0 ;; 
    n23) run_test 23 && exit 0 ;; 
    n24) run_test 24 && exit 0 ;; 
    n25) run_test 25 && exit 0 ;; 
    n26) run_test 26 && exit 0 ;; 
    n27) run_test 27 && exit 0 ;; 
    n28) run_test 28 && exit 0 ;; 
    n29) run_test 29 && exit 0 ;; 
    n30) run_test 30 && exit 0 ;; 
    n31) run_test 31 && exit 0 ;; 
    n32) run_test 32 && exit 0 ;; 
    n33) run_test 33 && exit 0 ;; 
    n34) run_test 34 && exit 0 ;; 
    n35) run_test 35 && exit 0 ;; 
    n36) run_test 36 && exit 0 ;; 
    n37) run_test 37 && exit 0 ;; 
    n38) run_test 38 && exit 0 ;; 
    n39) run_test 39 && exit 0 ;; 
    n40) run_test 40 && exit 0 ;; 
    n41) run_test 41 && exit 0 ;; 
    n42) run_test 42 && exit 0 ;; 
    n43) run_test 43 && exit 0 ;; 
    n44) run_test 44 && exit 0 ;; 
    n45) run_test 45 && exit 0 ;; 
    n46) run_test 46 && exit 0 ;; 
    n47) run_test 47 && exit 0 ;; 
    n48) run_test 49 && exit 0 ;; 
    n49) run_test 52 && exit 0 ;; 
    n50) run_test 56 && exit 0 ;; 
    n51) run_test 57 && exit 0 ;; 
    n52) run_test 58 && exit 0 ;; 
esac
exit 1