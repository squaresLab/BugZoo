#!/bin/sh
ulimit -c 8
rm mytest* core*
dir=$TIFFROOT/bin
./limit5 $dir/tiffcp wololo.tif mytest 
if [ ! -f core.* ]; then echo "wolo" >> $2 ; fi
exit 0
