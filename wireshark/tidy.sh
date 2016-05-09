#!/bin/bash
BENCHMARK=$1
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
BENCHMARK_DIR="$DIR/$BENCHMARK"

cp $DIR/prepare.sh $BENCHMARK_DIR
cp $DIR/.gitignore $BENCHMARK_DIR

pushd $BENCHMARK_DIR

rm -f *~
rm -rf coverage diffs local-root sanity
rm -f coverage.path* .Indicator_Makefiles limit* *.cache test_paths.txt
rm -f bug-failures fault.lines fix.lines fix-failures repair.debug.0
rm -f configuration-oracle reconfigure
mv -f wireshark-run-tests.sh test-helper.sh
mv -f bugged-program.txt preprocessed/manifest.txt
mv -f fixed-program.txt fixed/manifest.txt
chmod +X test_helper.sh

find . -name .svn -exec rm -rf {} \;

pushd wireshark
make clean
popd

tar -cvzf wireshark.tar.gz wireshark
rm -rf wireshark

tar -cvzf test.tar.gz test
rm -rf test

popd
