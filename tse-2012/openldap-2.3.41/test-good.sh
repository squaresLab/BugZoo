#!/bin/sh

ulimit -t 600
export PROG=$1
export OUT=$2
export PORT=$3

rm temp_out.txt
p=`PWD`
killall slapd
pushd $OPENLDAP_PARENT_DIR/openldap-2.3.41
make test > $p/temp_out.txt
popd
grep succeeded temp_out.txt > $OUT
wait
exit 0
