#!/bin/bash
#
# This script simply forwards a test execution command onto Pythia, along
# with the --coverage flag where appropriate
candidate_dir=$1
test_id=$2

if [[ $(dirname "$candidate_dir") = "coverage" ]]; then
  cov_flag="--coverage" 
else
  cov_flag="" 
fi

pythia run-by-id $cov_flag "${EXECUTABLE}" "${test_id}"
exit $? # is this implicit?
