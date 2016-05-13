#!/bin/bash
while read scenario; do
  ./download.sh $scenario
done < ./scenarios.txt
