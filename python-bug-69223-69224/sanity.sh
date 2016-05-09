#!/bin/bash
rm sanity.results sanity.verbose -f
touch sanity.verbose
touch sanity.results

# Positive tests
for i in $(seq 1 284); do
  if ./test.sh python/python p$i &> /dev/null; then
    echo "p$i - PASS (GOOD)";
  else
    echo "p$i - FAIL (BAD)";
  fi
done >> sanity.results

# Negative tests
for i in $(seq 1 1); do
  if ./test.sh python/python n$i &> /dev/null; then
    echo "n$i - PASS (BAD)";
  else
    echo "n$i - FAIL (GOOD)";
  fi
done >> sanity.results
