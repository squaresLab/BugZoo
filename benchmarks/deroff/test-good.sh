#!/bin/sh
ulimit -t 2
rm -rf my.t1 my.t2 my.t4 my.t7 my.t8 
($1 < t1 >& my.t1; diff output.t1 my.t1 && (echo "t1" >> $2)) &
($1 < t2 >& my.t2; diff output.t2 my.t2 && (echo "t2" >> $2)) &
($1 < t4 >& my.t4; diff output.t4 my.t4 && (echo "t4" >> $2)) &
($1 < t7 >& my.t7; diff output.t7 my.t7 && (echo "t7" >> $2)) &
($1 < t8 >& my.t8; diff output.t8 my.t8 && (echo "t8" >> $2)) &

wait
exit 0
