#!/bin/sh
TIME_LIMIT=5
patch_exe=$1
patch_dir=$(dirname $1)
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
project_dir="$here_dir/src/"
lib_dir="$here_dir/fake-root/lib/"

# Copy the patched file and destroy any related build artefacts, then
# remake the project
cp $patch_dir/mod_fastcgi.c $project_dir/src
pushd $project_dir/src
rm -rf mod_fastcgi.I? .libs/mod_fastcgi.so .libs/mod/fast_cgi.o 
timeout $TIME_LIMIT make || exit 1

# If the project was successfully compiled, updated the library in the fake
# root, otherwise report failure
if [ -f .libs/mod_fastcgi.so -a -f mod_fastcgi.la ]; then 
  cp .libs/mod_fastcgi.so mod_fastcgi.la $lib_dir
  exit 0
else
  exit 1 
fi
