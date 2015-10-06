#!/bin/sh

if [ ! -d results ] ; then mkdir results ; fi 
if [ ! -d results/best ] ; then mkdir results/best ; fi
if [ ! -d results/debug ] ; then mkdir results/debug ; fi 

for ((seed=0;seed<100;seed++)); do 
    rm core.*
  if [ -f *best* ] ; then mv *best* results ; continue ; fi 
  export gpf="0.01"
  export mut="0.06"
  rm -rf [0-9]*
  $PATH_TO_MODIFY/modify --good "./limit ./test-good.sh" --max 4 --bad_factor 1 --gcc "./fake-gcc.sh" --good_path_factor $gpf --seed $seed --mut $mut --uniqifier $seed-$gpf-$mut string.i 
  rm -rf [0-9]*
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi
  mv *debug* results/debug

  rm core.*
  export gpf="0.00"
  export mut="0.03"
  $PATH_TO_MODIFY/modify --max 4 --bad_factor 1 --good "./limit ./test-good.sh" --gcc "./limit ./fake-gcc.sh" --good_path_factor $gpf --seed $seed --mut $mut --uniqifier $seed-$gpf-$mut string.i 
  rm -rf [0-9]*
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi
  mv *debug* results/debug
done 
