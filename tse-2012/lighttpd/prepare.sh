#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

pushd $here_dir

# Compile the exploit executable
gcc hoagie.c -o hoagie

# Create a fake root and set up a lighttpd conf
pushd fake-root
  tar -xf htdocs.tar.gz
popd

popd
