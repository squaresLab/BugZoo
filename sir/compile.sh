#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
src_dir="$here_dir/source"

if [ $# -ne 1 ]; then
  echo "ERROR: no executable name provided"
  exit 1
fi

exe_name=$1
candidate_dir=$(dirname "$1")

if !(cp "$candidate_dir/." "$src_dir" -rf); then
  echo "ERROR: failed to copy patched files to source directory"
  exit 1
fi

if !(make -C "$src_dir" clean && make -C "$src_dir" > /dev/null); then
  echo "ERROR: failed to execute make within source directory"
  exit 1
fi
