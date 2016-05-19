#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
fake_root="$here_dir/fake-root"

pushd $here_dir

# Compile the exploit executable
gcc hoagie.c -o hoagie

# Create a fake root and set up a lighttpd conf
pushd fake-root
  tar -xf htdocs.tar.gz
  sed "s^__FAKE_ROOT_DIRECTORY__^$fake_root^g" lighttpd.conf.template > lighttpd.conf
popd

popd
