#!/bin/bash
while read t; do
  grep -v "$t" tests.txt | sponge tests.txt 
  grep -v "$t" passes.txt | sponge passes.txt 
  grep -v "$t" fails.txt | sponge fails.txt 
done < blacklist.txt
