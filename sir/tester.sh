#!/bin/bash
INPUTS="LOCATION-OF-INPUTS-DIRECTORY"
ORACLE="LOCATION-OF-ORACLE-DIRECTORY"
EXECUTABLE=$1
TEST=$2

# Find the directory where this file resides
HERE_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Try to find the test number matching the test descriptor.
# If there is no matching test case, print an error and exit with code 1.
if NOT_FOUND; then
  echo "Failed to run test $TEST: no corresponding test number"; exit 1
fi
