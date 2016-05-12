#!/bin/bash
#
# This script accepts a provided PHP benchmark directory path as its sole input
# and proceeds to destructively convert its C test harness into a perl script,
# matching the rest of the ManyBugs test harnesses.
#
# Usage: ./build-test-harness.sh PHP_BENCHMARK_DIR
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

if [ $# -ne 1 ]; then
  echo "ERROR: expected PHP benchmark directory path as sole argument"
  exit 1
fi

benchmark_dir=$1

if [ ! -f $benchmark_dir/php-run-tests.c ]; then
  echo "ERROR: failed to locate $benchmark_dir/php-run-tests.c"
  exit 1
fi

tail -n +6 $benchmark_dir/php-run-tests.c \
  | head -n -49 - \
  | cat $here_dir/test.head.pl - $here_dir/test.tail.pl > $benchmark_dir/test.pl
chmod +x $benchmark_dir/test.pl
