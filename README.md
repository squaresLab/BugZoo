# RepairBox

 [![Join the chat at https://gitter.im/RepairBox/Lobby](https://badges.gitter.im/RepairBox/Lobby.svg)](https://gitter.im/RepairBox/Lobby?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
 [![Build Status](https://travis-ci.org/squaresLab/RepairBox.svg?branch=master)](https://travis-ci.org/squaresLab/RepairBox)

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
RepairBox incurs fewer overheads (resulting in a much higher performance, crucial
for rigorous experimental trials), makes dependencies easier to manage, and
results in a smaller disk footprint.

For more information on [Docker](https://www.docker.com/), the interested user is
referred to
[https://docs.docker.com/learn/](https://docs.docker.com/learn/).

## Installation

To install the RepairBox platform, we advise that
users produce a shallow clone of this repository using the command below:

```
$ git clone git://github.com/squaresLab/RepairBox --depth 1
$ python3 setup.py install
```

## Known Sources

Below is a list of sources that are known to provide datasets or tools that
are compatible with the RepairBox platform.

* [ManyBugs](https://github.com/ChrisTimperley/ManyBugs)
* [GenProg*](https://bitbucket.org/ChrisTimperley/GP3)

To add one of these sources, simply execute the following from the command line:

```
repairbox source add https://github.com/ChrisTimperley/ManyBugs
```
