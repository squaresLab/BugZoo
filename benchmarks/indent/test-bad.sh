#!/bin/sh
ulimit -t 1
rm -rf my.t7 
#($1 < t7 >& my.t7 && diff output.t7 my.t7 && (echo "t7" >> $2)) 
($1 < t7 >& my.t7 && (echo "t7" >> $2)) 
exit 0
