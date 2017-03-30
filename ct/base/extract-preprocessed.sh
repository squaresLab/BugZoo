#!/bin/bash
pushd /experiment
while read to; do
  from=$(echo "$to" | sed -e 's#.c$#.i##')
  mkdir -p "$(dirname "$from")"
  cp "source/${from}" "preprocessed/${to}"
done < preprocessed/manifest.txt
