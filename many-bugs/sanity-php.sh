#!/bin/bash
while read scenario; do
  ./sanity.sh ./php/$scenario
done < ./scenarios.txt
