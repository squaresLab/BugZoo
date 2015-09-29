#!/bin/sh
ulimit -t 1
ulimit -c 8
rm -rf my.t11 core.*
#($1 < t7 >& my.t7 && diff output.t7 my.t7 && (echo "t7" >> $2)) 
($1 < t11 >& my.t11) 
if [ ! -f core.* ] ; then echo "t11" >> $2 ; fi 
exit 0
