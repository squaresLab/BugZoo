# SIR Bug Scenarios

## Disclaimer

All of the source files and test cases for the SIR scenarios are adapted from
original C objects in the (awesome) Software Infrastructure Repository
(http://sir.unl.edu/). For each program version, a separate Docker image is
generated for each of the bugs. As with the other bug scenarios provided by
RepairBox, all files are located within the `/example` directory, and are
tailored for automated program repair experiments.

## Test Harness Construction

* checks standard output against oracle
* checks standard error against oracle
* checks contents of (temporary) working directory against oracle
