# RepairBox

[![Join the chat at https://gitter.im/RepairBox/Lobby](https://badges.gitter.im/RepairBox/Lobby.svg)](https://gitter.im/RepairBox/Lobby?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

RepairBox is an ongoing effort to provide a series of controlled environments
for performing experiments on automated program repair of C programs. RepairBox
provides a number of bug scenarios, adapted from existing publicly-available
datasets, including [ManyBugs](http://repairbenchmarks.cs.umass.edu/),
[GenProg's earlier benchmarks](http://dijkstra.cs.virginia.edu/genprog/), and
several datasets from the
[Software Infrastructure Repository](http://sir.unl.edu/).

As well as providing the files necessary to study each bug,
RepairBox also provides a minimal, isolated environment for execution, in the
form of an accompanying Docker container. By providing a container for
each bug, rather than a single, monolithic virtual machine for a group of bugs,
RepairBox incurs fewer overheads (resulting in a much higher performance; crucial
for rigorous experimental trials), makes dependencies easier to manage, and
results in a smaller disk footprint.

In the future, we plan to host the associated Docker images for each of bug
scenario on DockerHub, allowing researchers to quickly download and use an
image via a single terminal command, without needing to build the images
themselves.

## Installation

At present time, there are two ways in which you can install a particular repair
box within this repository. The preferred method, is to download a pre-built
repair box from DockerHub, using the command given below (using a PHP bug from
the ManyBugs dataset as an example):

```
$ docker pull christimperley/repairbox:manybugs-php-bug-2011-03-11-d890ece3fc-6e74d95f34
```

Alternatively, you may build each of the repair boxes from source by cloning
this repository and call `make` within its root directory, using the commands
given below:

```
$ git clone git://github.com/ChrisTimperley/RepairBox --depth 1
$ cd RepairBox
$ make
```

Producing a shallow clone takes far less time, and the git protocol both
reduces that further and helps to prevent any hangs you might otherwise
experience using the HTTPS protocol. Be warned, constructing all of the boxes
within this repository can take over an hour and consumes tens of GBs.

## Benchmark Structure
Each benchmark, contained within its own sub-directory of the
`benchmarks` directory, contains the following:

* `setup.json`, a JSON file specifying parameters specific to the benchmark,
  such as the number of positive and negative test cases. This file should
  only contain parameters describing the details of the problem, and not
  details of how it should be solved. Usable as a partial GenProg 3
  configuration file.
* `program/`, a directory containing the source code for the given problem.
* `program.txt`, a file specifying the location of each of the source files,
  relative to the directory of that particular benchmark.
* `test.sh`, a bash script responsible for evaluating the success or failure of
  a given test case for a provided executable.
* `test/`, a directory containing any additional files needed to run the test
  cases. Such files may specify the expected output of the program on a given
  test case.
* `.gitignore`, a Git ignore file, set-up to ensure that no search artifacts,
  such as coverage information or path files, are introduced into the
  repository.
