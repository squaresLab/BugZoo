#!/bin/bash


for (( i=6; i<25; i++ ))
do
    $REPAIR configuration-default --seed $i --sample 0.1 --sanity yes --popsize 2 --generations 1
done