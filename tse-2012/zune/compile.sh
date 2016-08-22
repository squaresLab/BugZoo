#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
TIME_LIMIT=5
exe=$1
exe_dir=$(dirname "$exe")

echo "Compiling $exe to $exe_dir/zune" >> $here_dir/compile.log
pushd $exe_dir >> $here_dir/compile.log
#timeout $TIME_LIMIT
gcc zune.c -o zune -m32 2>> $here_dir/compile.err

if [ -f zune ]; then
  echo "SUCCEEDED" >> $here_dir/compile.log
else
  echo "FAILED" >> $here_dir/compile.log
fi
