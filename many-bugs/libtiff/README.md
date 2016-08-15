# Libtiff

This directory contains each of the ManyBugs bug scenarios for Libtiff.
Each scenario uses a sub-set of a more general set of tests of tests to form its
test suite.

* `TESTS`, contains an ordered list of the test scripts belonging to the
  general test suite for the Libtiff bugs. This file is used by the individual
  test harnesses of each bug scenario to determine the appropriate script to
  execute.
* `tests/`, contains each of the test scripts for the general test suite. These
  scripts are copied into the `src/test/` directory for each scenario by its
  accompanying `prepare.sh` script.

Due to incompatibilities on machines other than the ICSE virtual machine, and
in the interest of maintaining ease of replication, each of these scenarios
have been re-created from scratch, but should yield identical results.
