#!/bin/bash

for (( i=0; i<100 ; i++ ))
do
    echo $i
    sh test.sh p1187 test.sanity
done   