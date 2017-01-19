#!/bin/bash
push_scenarios(){
  while read s; do
    echo "pushing: $s"
    docker push christimperley/repairbox:$s > /dev/null
  done < $1/scenarios.txt
}

push_scenarios gzip
push_scenarios grep
