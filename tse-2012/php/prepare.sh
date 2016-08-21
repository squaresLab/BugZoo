#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
php_exe="$here_dir/src/sapi/cli/php"
test_dir="$here_dir/test"

# Unextract the source code, configure, and compile
if [ ! -d src ]; then
  tar -xf src.tar.gz
  cp libxml.patch src
  pushd src
  ./configure --host=i386-pc-linux-gnu "CFLAGS=-m32"
  cat libxml.patch | patch -p0 && make
fi

# Generate expected test outputs for positive tests
$php_exe "$test_dir/p1.php" |& head -n 100 |& tail -n 95 &> "$test_dir/p1.out"
$php_exe "$test_dir/p2.php" |& head -n 100 |& tail -n 95 &> "$test_dir/p2.out"
$php_exe "$test_dir/p3.php" |& head -n 100 |& tail -n 95 &> "$test_dir/p3.out"
