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
json="$cfg_dir/problem.json"
benchmark=$(basename $cfg_dir)

_parts=(${benchmark//-/ })
program=${_parts[0]}

pos_tests=$(grep "pos-tests" $cfg | cut -d " " -f2 )
neg_tests=$(grep "neg-tests" $cfg | cut -d " " -f2 )

cp problem.template.json $json
sed -i -e "s/__PROBLEM_NAME__/$benchmark/g" $json
sed -i -e "s/__PROGRAM_NAME__/$program/g" $json
sed -i -e "s/__POS_TESTS__/$pos_tests/g" $json
sed -i -e "s/__NEG_TESTS__/$neg_tests/g" $json

rm -f $cfg
