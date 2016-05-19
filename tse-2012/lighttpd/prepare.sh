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

# Unextract, configure, make, and install lighttpd
tar -xf src.tar.gz
pushd src
  ./configure --prefix="$fake_root" --build=i686-gnu-linux "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  make
  make install
popd

# Generate the expected output for php.100
$fake_root/sbin/lighttpd -D -f $fake_root/lighttpd.conf -m $fake_root/lib/ &
server_process=$!
sleep 2s
curl -s "http://localhost:8080/hello.php" | head -100 > test/hello.100
killall lighttpd

popd
