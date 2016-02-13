#!/bin/bash

ulimit -t 10
ulimit -c 8

rm -rf core.*

export KEY="blahblah"

cp test6.txt save_test6.txt

rm test6.txt.cpt

./ccrypt-root/bin/ccrypt -e -E KEY test6.txt

cp save_test6.txt test6.txt

(./limit5 $1 -e -E KEY test6.txt < /dev/null)

if [ ! -f core.* ] ; then echo "t10" >> $2 ; fi

mv save_test6.txt test6.txt

wait
exit 0
