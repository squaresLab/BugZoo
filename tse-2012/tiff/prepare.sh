#!/bin/bash

# Ensure that we're in the directory containing this script
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/tests"
local_root="$here_dir/local-root"
pushd "$here_dir"

if [ ! -d src ]; then
  tar -xf src.tar.gz
  mkdir -p local-root
  pushd src
  ./configure --prefix="$local_root" --host=i686-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  make
  make install
  popd
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi

# generated expected outputs
$local_root/bin/tiffcp -s $test_dir/flower-rgb-planar-08.tif $test_dir/p1.out
$local_root/bin/tiffcp -s $test_dir/flower-rgb-contig-08.tif $test_dir/p2.out
$local_root/bin/tiffcp -s $test_dir/cramps.tif $test_dir/p3.out
$local_root/bin/tiffcp -s $test_dir/flower-minisblack-32.tif $test_dir/p4.out
$local_root/bin/tiffcp -s $test_dir/flower-minisblack-14.tif $test_dir/p5.out
$local_root/bin/tiffcp $test_dir/flower-minisblack-14.tif $test_dir/p6.out
