#!/bin/bash
TIME_LIMIT=120
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
src_dir="$here_dir/src"

if [ $# -ne 1 ]; then
  echo "ERROR: no executable name provided"
  exit 1
fi

exe_name=$1
candidate_dir=$(dirname "$1")

# Copy all the files across from the candidate directory into the source
# directory for this problem, before re-making the program.
if !(cp $candidate_dir/* $src_dir -rf); then
  echo "ERROR: failed to copy patched files to src directory"
  exit 1
fi

# Destroy all temporary object files and shared libraries related to the
# affected files
pushd "$src_dir"
rm -f python
rm -f build/temp.linux-x86_64-3.3/experiment/src/Modules/selectmodule.o
rm -f build/lib.linux-x86_64-3.3/select.cpython-33m.so

# Rebuild!
if !(timeout $TIME_LIMIT make); then
  echo "ERROR: failed to execute make within problem src directory"
  exit 1
fi
