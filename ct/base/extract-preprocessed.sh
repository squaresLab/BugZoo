#!/bin/bash
pushd /experiment &> /dev/null
while read to; do
  from=$(echo "$to" | sed -e 's#.c$#.i##')
  mkdir -p "preprocessed/$(dirname "$from")"
  cp "source/${from}" "preprocessed/${to}"
done < preprocessed/manifest.txt
