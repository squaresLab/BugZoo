#!/bin/bash
rm *cache*
    for (( i=0; i<100; i++ ))
    do
	$REPAIR configuration-default --sanity yes --popsize 2 --generations 1 --sample 0.1 --seed $i
    done
