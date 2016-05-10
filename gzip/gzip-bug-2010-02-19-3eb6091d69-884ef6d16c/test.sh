#!/bin/bash
bugrev=3eb6091d69

#Check if coverage is being run. If so, don't use time limit.
if [ `basename $2` = "coverage" ] ; then
    cov=0
else
    cov=1
fi

run_test()
{
    cd gzip
    if [ $cov -eq 0 ] ; then
        /usr/bin/perl /root/mountpoint-genprog/genprog-many-bugs/gzip-bug-2010-02-19-3eb6091d69-884ef6d16c/gzip-run-tests.pl $1
    else
        /root/mountpoint-genprog/genprog-many-bugs/gzip-bug-2010-02-19-3eb6091d69-884ef6d16c/limit /usr/bin/perl /root/mountpoint-genprog/genprog-many-bugs/gzip-bug-2010-02-19-3eb6091d69-884ef6d16c/gzip-run-tests.pl $1
    fi
    RESULT=$?
    
    cd ..
    return $RESULT
}
case $1 in
    p1) run_test 1 && exit 0 ;; 
    p2) run_test 3 && exit 0 ;; 
    p3) run_test 4 && exit 0 ;; 
    p4) run_test 5 && exit 0 ;; 
    p5) run_test 7 && exit 0 ;; 
    p6) run_test 8 && exit 0 ;; 
    p7) run_test 9 && exit 0 ;; 
    p8) run_test 12 && exit 0 ;; 
    n1) run_test 6 && exit 0 ;; 
esac
exit 1