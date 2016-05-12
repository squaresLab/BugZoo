#!/bin/bash
#
# This script tidies up a downloaded ManyBugs scenario, clearing any
# redundant files, archiving program source and test cases, and preparing it
# for use with the newest version of GenProg.
#
# Usage:
#
#   Provided with the path to a ManyBugs benchmark directory, the script
#   performs tidying within that directory.
#
dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
benchmark_dir=$1
program_dir=$(dirname $benchmark_dir)
benchmark_name=$(basename $benchmark_dir)
_parts=(${benchmark_name//-/ })
program=${_parts[0]}

# Copy the program's prepare script into the benchmark directory
cp $program_dir/prepare.sh $benchmark_dir

# Copy across the generic compile script
cp $dir/compile.sh $benchmark_dir
chmod +x $dir/compile.sh

pushd $benchmark_dir

# Chuck out all the version control artefacts
find . -name .svn -exec rm -rf {} \;
find . -name .git -exec rm -rf {} \;
find . -name .hg -exec rm -rf {} \;

# Remove redundant files
rm -f *~
rm -rf coverage diffs local-root sanity
rm -f coverage.path* .Indicator_Makefiles limit* *.cache test_paths.txt
rm -f bug-failures fault.lines fix.lines fix-failures repair.debug.0
rm -f configuration-oracle reconfigure

# Move the program manifests to their correct locations
mv -f bugged-program.txt preprocessed/manifest.txt
mv -f fixed-program.txt fixed/manifest.txt

# Tidy the test helper, if there is one
if [ -f "$(program)-run-tests.sh" ]; then
  mv -f "$(program)-run-tests.sh test-helper.sh"
  chmod +X test_helper.sh
fi

# Rebuild the test harness
offset=$(grep "case \$1 in" test.sh -n | cut -d ":" -f1 -)
offset=$(($offset + 1))
mv test.sh test.tmp.sh
tail -n +$offset test.tmp.sh | cat $dir/test.head.sh - > test.sh
chmod +x test.sh
rm test.tmp.sh

# Archive and compress the source code
mv $program src
pushd src
make clean
popd
tar -czf src.tar.gz src
rm -rf src

# Archive and compress any test cases
test -d "test" && mv "test" tests
if [ -d tests ]; then
  tar -czf tests.tar.gz tests
  rm -rf tests
fi

# Convert the configuration file to its JSON equivalent
$dir/config-to-json.sh $benchmark_dir

# Perform any program specific tidying
test -f $program_dir/prepare.sh && $program_dir/prepare.sh $benchmark_dir

popd
