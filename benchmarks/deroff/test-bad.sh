#!/bin/sh
ulimit -t 1
rm -rf my.t5 
($1 < t5 >& my.t5  && (echo "t5" >> $2)) 
exit 0
