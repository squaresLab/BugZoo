#!/bin/bash
destination="${1}"
pushd /experiment &> /dev/null
while read to; do
  from=$(echo "$to" | sed -e 's#.c$#.i##')
  mkdir -p "${destination}/$(dirname "$from")"
  cp "source/${from}" "${destination}/${to}"
done < preprocessed/manifest.txt
