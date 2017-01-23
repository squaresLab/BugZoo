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

## Usage

## Anatomy of a Repair Box

A unique repair box, in the form of a Docker container, is supplied for each bug
within this repository. Each of these repair boxes provide a minimal environment
for replicating the bug, containing only the packages required to build and run
the program, and no more.

The associated program and files for each box are located within its `/experiment`
directory, which contains the following files for each bug:

* `problem.json`, a JSON file describing parameters specific to this particular
  bug scenario, including the size of its test suite, the commands that should
  be used for compilation and running tests, and whether the tests within the
  suite may be executed within parallel.
* `source/`, a directory containing the original source code for the scenario.
* `test.sh`, a bash script responsible for determining the success or failure
  of a given test case for a provided executable. This script accepts three
  arguments: the path to the executable within the repair candidate's
  directory; the identifier for the test case, following the GenProg naming
  convention (e.g. `p1`, `n7`); and a random port number to be used for
  performing the test (which is optional for bugs that do not require port
  access).
* `compile.sh`, a bash script responsible for compiling a variant of the
  associated program, using the files provided within the directory of the
  single argument passed.

For the ManyBugs benchmarks, `test.sh` invokes the original (or a slightly
modified version) of the original test harness for the bug scenaro. For
SIR and the TSE 2012 dataset, this file dispatches the test case execution
request onto [Pythia](https://github.com/ChrisTimperley/Pythia), which helps
to ensure candidates that pass all tests within the suite meet a minimal set
of quality requirements.

Where a human repair for the bug was provided by the original dataset, those
files can be found in the `fixed` directory. Additionally, a `diffs` directory
is provided, giving a `diff` for each of the files changed by the human
developer.

For historical reasons, where possible, certain repair boxes also supply a
`configuration-default` file, used to provide the necessary settings required
to perform automated repair of the bug using GenProg 2.

## Future Additions

* continuous integration, with automatic construction and pushing of
  (modified) Docker images to DockerHub.
