#!/bin/bash
#
# Generic CT bugs compile script
#
# Runs make clean and then parallel make
#
# Uses the following environmental variables:
# - MAKE_TIMEOUT
ulimit -m 1000000
ulimit -v 2000000
ulimit -H -v

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

pushd "${src_dir}"
if !(timeout ${MAKE_TIMEOUT} make -j > /dev/null); then
  echo "ERROR: failed to execute make within source directory"
  exit 1
fi
