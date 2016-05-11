#!/bin/bash
#
# Sanity checking script for all ManyBugs benchmarks.
#
# Usage:
#
# Performs sanity checking on a ManyBugs benchmark at a specified location,
# writing the results to both the terminal and "sanity.results" within the
# benchmark's directory.
#
if [ "$#" -ne 1 ]; then
  echo "ERROR: no benchmark path provided"
  exit 1
fi

benchmark_dir=$1
benchmark=$(basename $1)

echo "Sanity checking: $benchmark"
pushd $benchmark

if [ ! -f problem.json ]; then
  echo "ERROR: couldn't find problem.json within benchmark directory"
  popd
  exit 1
fi

pos_tests=$(jq ".problem.positive_tests" problem.json)
neg_tests=$(jq ".problem.negative_tests" problem.json)

rm sanity.results -f
touch sanity.results

# Positive tests
for i in $(seq 1 $pos_tests); do
  if ./test.sh sanity p$i &> /dev/null; then
    echo "p$i - PASS (GOOD)";
  else
    echo "p$i - FAIL (BAD)";
  fi
done |& tee -a sanity.results

# Negative tests
for i in $(seq 1 $neg_tests); do
  if ./test.sh sanity n$i &> /dev/null; then
    echo "n$i - PASS (BAD)";
  else
    echo "n$i - FAIL (GOOD)";
  fi
done |& tee -a sanity.results
