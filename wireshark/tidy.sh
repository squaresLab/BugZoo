#!/bin/bash
BENCHMARK=$1
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
BENCHMARK_DIR="$DIR/$BENCHMARK"

cp $DIR/prepare.sh $BENCHMARK_DIR

pushd $BENCHMARK_DIR

rm -rf coverage diffs local-root
rm -f coverage.path* .Indicator_Makefiles limit* *.cache
rm -f bug-failures fault.lines fix.lines fix-failures repair.debug.0
rm -f test.sh~ configuration.default~ configuration.oracle configuration.oracle~
mv -f wireshark-run-tests.sh test-helper.sh
mv -f bugged-program.txt preprocessed/manifest.txt
mv -f fixed-program.txt fixed/manifest.txt

find . -name .svn -exec rm -rf {} \;

pushd wireshark
make clean
popd

tar -cvzf wireshark.tar.gz wireshark
rm -rf wireshark

tar -cvzf test.tar.gz test
rm -rf test

popd
