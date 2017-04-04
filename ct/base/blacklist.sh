#!/bin/bash
while read t; do
  grep -v "$t" tests.txt | sponge tests.txt 
done < blacklist.txt
