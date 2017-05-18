#!/bin/bash
while read -r sc; do
  sc=$(basename "$sc")
  #mkdir "${sc}"
  #cp deps.json "${sc}"
  cp base.bug.yaml "${sc}.bug.yaml"
  sed -i "s/BUG_NAME/${sc}/" "${sc}.bug.yaml"
done < scenarios.txt
