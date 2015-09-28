#!/bin/sh

if [ ! -d results ] ; then mkdir results ; fi 
if [ ! -d results/best ] ; then mkdir results/best ; fi 
if [ ! -d results/debug ] ; then mkdir results/debug ; fi 

for ((seed=0;seed<100;seed++)) ; do 
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi 
  rm -rf [0-9]*
  nice $PATH_TO_MODIFY/modify --max 17 --ldflags "-lcrypt -lefence" --good_path_factor 0.01 --seed $seed --mut 0.06 ccrypt_comb.c --uniqifier $seed"-0.01-0.06"
  mv *debug* results/debug
  rm -rf [0-9]*

  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi 

  nice $PATH_TO_MODIFY/modify --max 17 --ldflags "-lcrypt -lefence" --good_path_factor 0.00 --seed $seed --mut 0.03 ccrypt_comb.c --uniqifier $seed"-0.00-0.03"
  rm -rf [0-9]*
  mv *debug* results/debug
  if [ -f *best* ] ; then mv *best* results/best ; continue ; fi 
done 
