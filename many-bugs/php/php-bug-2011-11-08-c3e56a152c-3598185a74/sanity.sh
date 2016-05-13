#!/bin/bash

rm *cache*
for (( i=0; i<25; i++ ))
do
    $REPAIR configuration-default --sanity yes --sample 0.1 --popsize 2 --generations 1 --seed $i
done