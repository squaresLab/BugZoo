#!/bin/sh
ulimit -t 2
rm -rf my.t1 my.t2 my.t3 my.t4 my.t5
($1 < t1 >& my.t1  && (echo "t1" >> $2)) &
($1 < t2 >& my.t2  && (echo "t2" >> $2)) &
($1 < t4 >& my.t3  && (echo "t3" >> $2)) &
($1 < tp1 >& my.t4  && (echo "t4" >> $2)) &
($1 < tp2 >& my.t5  && (echo "t5" >> $2)) &

wait
exit 0
