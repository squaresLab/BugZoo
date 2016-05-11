#!/bin/bash
BENCHMARK=$1
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
BENCHMARK_DIR="$DIR/$BENCHMARK"

cp $DIR/prepare.sh $BENCHMARK_DIR
cp $DIR/.gitignore $BENCHMARK_DIR
cp $DIR/sanity.sh $BENCHMARK_DIR

pushd $BENCHMARK_DIR

rm -f *~
rm -rf coverage diffs local-root sanity 000001
rm -f coverage.path* .Indicator_Makefiles limit* *.cache test_paths.txt
rm -f bug-failures fault.lines fix.lines fix-failures repair.debug.0
rm -f configuration-oracle reconfigure

# Move manifests
mv -f bugged-program.txt preprocessed/manifest.txt
mv -f fixed-program.txt fixed/manifest.txt

# gmp
mv -f gmp-run-tests.pl test.pl
chmod +x test.pl

# Rebuild the test harness
cp $DIR/test.head.sh .
tail -n +14 test.sh > test.tail.sh # offset varies between programs
cat test.head.sh test.tail.sh > test.sh
rm test.tail.sh test.head.sh

# Chuck out all the version control artefacts
find . -name .svn -exec rm -rf {} \;
find . -name .git -exec rm -rf {} \;
find . -name .hg -exec rm -rf {} \;

# Create source archive
pushd gmp
make clean
popd
tar -cvzf gmp.tar.gz gmp
rm -rf gmp

# Create tests archive
if [ -d tests ]; then
  pushd tests
  make clean
  popd
  tar -cvzf tests.tar.gz tests
  rm -rf tests
fi

popd
