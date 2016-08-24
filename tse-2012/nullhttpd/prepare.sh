#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
server_dir="$here_dir/fake-root"

if [ ! -d src ]; then
  tar -xf src.tar.gz
fi

pushd "test"
gcc exploit.c -m32 -o exploit
