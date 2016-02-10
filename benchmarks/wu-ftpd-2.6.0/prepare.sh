#!/bin/bash
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
echo "compiling exploit file: wuftpd-god.c"
gcc -m32 -lresolv -lcrypt -lnsl $DIR/wuftpd-god.c > $DIR/wuftpd-god
echo "compiled exploit file."
