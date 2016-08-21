#!/bin/bash
# Find the directory that this test script belongs to.
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
executable="$here_dir/atris"

# compile
./compile.sh $executable

# Generate the output for P1
source $test_dir/env.good.sh
$executable -h &> $test_dir/p1.out

# Generate the output for P2
source $test_dir/env.good.sh
$executable &> $test_dir/p2.out

# destroy artefacts
rm -f $here_dir/atris
