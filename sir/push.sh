#!/bin/bash
# gzip
while read s; do
  docker push christimperley/repairbox:$s
done < gzip/scenarios.txt
