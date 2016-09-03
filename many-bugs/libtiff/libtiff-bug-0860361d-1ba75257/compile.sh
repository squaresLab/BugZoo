#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
src_dir="$here_dir/src"

if [ $# -ne 1 ]; then
  echo "ERROR: no executable name provided"
  exit 1
fi

exe_name=$1
candidate_dir=$(dirname $1)

# Copy all the files across from the candidate directory into the source
# directory for this problem, before re-making the program.
rm -f $src_dir/tools/tiffcp.o
if !(cp $candidate_dir/* $src_dir -rf); then
  echo "ERROR: failed to copy patched files to src directory"
  exit 1
fi

# TODO: may need to handle special cases, such as FBC here
pushd $src_dir
if !(make); then
  echo "ERROR: failed to execute make within problem src directory"
  exit 1
fi
popd
