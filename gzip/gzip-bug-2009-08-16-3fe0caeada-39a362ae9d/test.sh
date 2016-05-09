#!/bin/bash
bugrev=3fe0caeada

run_test()
{
    cd gzip
        /root/mountpoint-genprog/genprog-many-bugs/gzip-bug-2009-08-16-3fe0caeada-39a362ae9d/limit /usr/bin/perl /root/mountpoint-genprog/genprog-many-bugs/gzip-bug-2009-08-16-3fe0caeada-39a362ae9d/gzip-run-tests.pl $1
    RESULT=$?
    
    cd ..
    return $RESULT
}
case $1 in
    p1) run_test 1 && exit 0 ;; 
    p2) run_test 4 && exit 0 ;; 
    n1) run_test 3 && exit 0 ;; 
esac
exit 1