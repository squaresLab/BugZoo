#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
root_dir="$here_dir/fake-root"
src_dir="$here_dir/src"

# Ensure Berkeley DB is installed
#pushd /tmp
#wget http://download.oracle.com/berkeley-db/db-4.2.52.tar.gz
#cd db-4.2.52/build_unix
#../dist/configure
#make
#make install
#popd

# Build the fake root
mkdir -p "$root_dir"

# Unextract, configure, and build
pushd "$src_dir"
#./configure --build=i386-pc-linux-gnu --prefix="$root_dir" \
export CPPFLAGS="-I/usr/local/BerkeleyDB.4.2/include"
export LDFLAGS="-L/usr/local/BerkeleyDB.4.2/lib"
export LD_LIBRARY_PATH="/usr/local/BerkeleyDB.4.2/lib"
./configure
popd
