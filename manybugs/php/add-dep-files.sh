#!/bin/bash


while read -r sc; do
  sc=$(basename "$sc")
  mkdir "${sc}"
  cp deps.json "${sc}"
done < scenarios.txt
