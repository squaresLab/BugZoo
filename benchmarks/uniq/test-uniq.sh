#!/bin/sh

if [ ! -d results ] ; then mkdir results ; fi 
if [ ! -d results/best ] ; then mkdir results/best ; fi 
if [ ! -d results/debug ] ; then mkdir results/debug ; fi 
	
for ((seed=0;seed<100;seed++)) ; do 
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi 
  export gpf="0.01"
  export mut="0.06"
  rm -rf [0-9]*
  nice $PATH_TO_MODIFY/modify --good_path_factor $gpf --seed $seed --mut $mut --uniqifier $seed-$gpf-$mut uniq.i
  mv *debug* results/debug
  rm -rf [0-9]*
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi 

  export gpf="0.00"
  export mut="0.03"
  nice $PATH_TO_MODIFY/modify --good_path_factor $gpf --seed $seed --mut $mut --uniqifier $seed-$gpf-$mut uniq.i
  mv *debug* results/debug
  rm -rf [0-9]*
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi 
done 
