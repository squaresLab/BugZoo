#!/bin/sh
ulimit -t 1
rm -rf my.t1 
(./limit $1 < bad1 >& my.t1 && (echo "t1" >> $2)) 
exit 0
