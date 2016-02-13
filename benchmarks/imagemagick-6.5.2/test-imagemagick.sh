#!/bin/sh

export PATH_TO_MODIFY=/home/claire/genprog/genprog-code/ga/

if [ ! -d results ] ; then mkdir results ; fi 
if [ ! -d results/best ] ; then mkdir results/best ; fi 
if [ ! -d results/debug ] ; then mkdir results/debug ; fi 
	
for ((seed=0;seed<100;seed++)) ; do 
  if [ -f *best* ] ; then mv *best* results ; continue ; fi 
  export gpf="0.01"
  export mut="0.06"
  rm -rf [0-9]*
  nice $PATH_TO_MODIFY/modify --max 15 --gcc "./fake-gcc.sh" --good_path_factor $gpf --seed $seed --mut $mut --uniqifier $seed-$gpf-$mut fx.i

  rm -rf [0-9]*
  mv *debug* results/debug
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi ;

  export gpf="0.00"
  export mut="0.03"
  nice $PATH_TO_MODIFY/modify --max 15 --gcc "./fake-gcc.sh" --seed $seed --mut $mut --uniqifier $seed-$gpf-$mut fx.i
  rm -rf [0-9]*
  mv *debug* results/debug
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi

done 
