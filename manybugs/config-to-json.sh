#!/bin/bash
#
# Converts a given configuration-default file into a JSON configuration for
# newer versions of GenProg
#
# Usage:
# 
#   Accepts the path to a benchmark, possibly containing an old GenProg
#   configuration file, and destructively converts that file to its  JSON
#   equivalent.
#
cfg_dir=$1
cfg="$cfg_dir/configuration-default"
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
