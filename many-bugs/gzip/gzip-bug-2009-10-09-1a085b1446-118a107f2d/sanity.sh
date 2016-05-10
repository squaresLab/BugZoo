#!/bin/bash
if [ "$#" -ne 2 ]; then
  echo "Failed to run sanity check: expected number of positive and negative test cases as arguments."
  exit 1
fi

NUM_POSITIVE=$1
NUM_NEGATIVE=$2

rm sanity.results -f
touch sanity.results

# Positive tests
for i in $(seq 1 $NUM_POSITIVE); do
  if ./test.sh gzip/gzip p$i &> /dev/null; then
    echo "p$i - PASS (GOOD)";
  else
    echo "p$i - FAIL (BAD)";
  fi
done 2>&1 | tee -a sanity.results

# Negative tests
for i in $(seq 1 $NUM_NEGATIVE); do
  if ./test.sh gzip/gzip n$i &> /dev/null; then
    echo "n$i - PASS (BAD)";
  else
    echo "n$i - FAIL (GOOD)";
  fi
done 2>&1 | tee -a sanity.results
