#!/bin/bash

# Ensure Berkeley DB is installed
pushd /tmp
wget http://download.oracle.com/berkeley-db/db-4.2.52.tar.gz
cd db-4.2.52/build_unix
../dist/configure
make
make install
popd

# Unextract, configure, and build

