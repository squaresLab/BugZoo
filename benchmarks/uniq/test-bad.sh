#!/bin/sh
ulimit -t 1
ulimit -c 8
rm -rf my.bad1 core.*
($1 < t5 >& my.bad1)
if [ ! -f core.* ]; then echo "t6" >> $2 ; fi
exit 0
