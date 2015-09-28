#!/bin/sh
ulimit -t 2
rm -rf my.help my.normal 
export HOME="."
export DISPLAY=""
($1 -h >& my.help ; diff output.help my.help && (echo "t1" >> $2)) &
($1 >& my.normal ; diff output.normal my.normal && (echo "t2" >> $2)) &
wait
exit 0
