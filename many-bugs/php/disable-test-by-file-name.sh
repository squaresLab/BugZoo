#!/bin/bash
#
# This script disables a test with a given file name within the test harness
# for a benchmark whose path is provided as an input,  causing it to return as
# passed (i.e. exit status 0) without invoking the test itself.
#
# Determines the number of the test within the test.pl file, then disables the
# test case within test.sh which invokes the test with that number.
#
# Usage: ./disable-test-by-file-name.sh directory_path test_name
#

