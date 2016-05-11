#!/bin/bash
#
# Converts a given configuration-default file into a JSON configuration for
# newer versions of GenProg
#
# * accepts the path to a configuration file as its input
# * produces its JSON equivalent in the same directory as the original file,
#   before deleting it
#
cfg=$1
cfg_dir=$(dirname $1)
benchmark=$(basename $cfg_dir)

echo "Converting configuration-default in $cfg_dir...";

# Find the program used by the benchmark
_parts=(${benchmark//-/ })
program=${_parts[0]}

# Find number of positive and negative test cases
pos_tests=$(grep "pos-tests" $cfg | cut -d " " -f2 )
neg_tests=$(grep "neg-tests" $cfg | cut -d " " -f2 )

echo "  program: $program"
echo "  positive_tests: $pos_tests"
echo "  negative_tests: $neg_tests"
