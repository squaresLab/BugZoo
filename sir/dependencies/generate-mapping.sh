#!/bin/bash

# How many test cases do we have?
num_tests=$(wc -l test.commands)

# Keep a counter of the number of positive and negative tests that we've
# encountered so far
negatives=0
positives=0

# Execute each test case
for (( i = 1; i < num_tests; i++ )); do
  if test-runner $i; then
    positives=$((positives+1))
  else
    negatives=$((negatives+1))
  fi
done
