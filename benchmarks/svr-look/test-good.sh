#!/bin/sh
ulimit -t 2
rm -rf my.tp1 my.tp2 my.tp3 my.tp4 my.tp5
($1 t1 tp1 >& my.tp1  && (echo "tp1" >> $2)) &
($1 t1 tp2 >& my.tp2  && (echo "tp2" >> $2)) &
($1 t1 tp3 >& my.tp3  && (echo "tp3" >> $2)) &
($1 t1 tp4 >& my.tp4  && (echo "tp4" >> $2)) &
($1 t1 tp5 >& my.tp5  && (echo "tp5" >> $2)) &
wait
exit 0
