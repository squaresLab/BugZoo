#!/bin/bash
while read t; do
  ./test-by-name.sh "${t}" &> /dev/null
  if [ $? -eq 0 ]; then
    echo "${t}"
  fi
done < "$1"
