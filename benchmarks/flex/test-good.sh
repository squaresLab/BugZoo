#!/bin/sh
ulimit -t 3
rm -rf my.t1 my.t2 my.t3 my.t4 my.t5
($1 < t1 >& my.t1 ; diff output.t1 my.t1 && (echo "t1" >> $2)) &
($1 < t2 >& my.t2 ; diff output.t2 my.t2 && (echo "t2" >> $2)) &
($1 < t3 >& my.t3 ; diff output.t3 my.t3 && (echo "t3" >> $2)) &
($1 < t4 >& my.t4 ; diff output.t4 my.t4 && (echo "t4" >> $2)) &
($1 < t5 >& my.t5 ; diff output.t5 my.t5 && (echo "t5" >> $2)) &
wait
exit 0
