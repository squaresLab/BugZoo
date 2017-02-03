#!/bin/bash
push_scenarios(){
  while read s; do
    fault=$(basename $s)
    ver=$(basename $(dirname $s))
    prog=$(dirname $(dirname $s))
    img="sir-$prog-$ver-$fault"
    echo "pushing: $img"
    docker push christimperley/repairbox:$img > /dev/null
  done < $1/scenarios.txt
}

push_scenarios sed
push_scenarios gzip
push_scenarios grep
push_scenarios flex
