# BugZoo

 [![Join the chat at https://gitter.im/BugZoo/Lobby](https://badges.gitter.im/BugZoo/Lobby.svg)](https://gitter.im/BugZoo/Lobby?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
 [![Build Status](https://travis-ci.org/squaresLab/BugZoo.svg?branch=master)](https://travis-ci.org/squaresLab/BugZoo)

BugZoo is an ongoing effort to provide a series of controlled environments
for performing experiments on automated program repair of C programs. BugZoo
provides a number of bug scenarios, adapted from existing publicly-available
datasets, including [ManyBugs](http://repairbenchmarks.cs.umass.edu/),
[GenProg's earlier benchmarks](http://dijkstra.cs.virginia.edu/genprog/), and
several datasets from the
[Software Infrastructure Repository](http://sir.unl.edu/).

As well as providing the files necessary to study each bug,
BugZoo also provides a minimal, isolated environment for execution, in the
form of an accompanying Docker container. By providing a container for
each bug, rather than a single, monolithic virtual machine for a group of bugs,
BugZoo incurs fewer overheads (resulting in a much higher performance, crucial
for rigorous experimental trials), makes dependencies easier to manage, and
results in a smaller disk footprint.

For more information on [Docker](https://www.docker.com/), the interested user is
referred to
[https://docs.docker.com/learn/](https://docs.docker.com/learn/).

## Installation

To install the latest stable version of BugZoo:

```
$ pip3 install bugzoo
```

To install the latest development version of BugZoo, first produce a shallow
clone of this repository before executing `pip3` as shown below.

```
$ git clone git://github.com/squaresLab/BugZoo --depth 1 bugzoo
$ cd bugzoo
$ pip3 install . --upgrade
```

## Known Sources

Below is a list of sources that are known to provide datasets or tools that
are compatible with the BugZoo platform.

* [ManyBugs](https://github.com/squaresLab/ManyBugs)
* [GenProg](https://github.com/squaresLab/genprog-code)

To add one of these sources, simply execute the following from the command line:

```
$ bugzoo source add manybugs https://github.com/squaresLab/ManyBugs
$ bugzoo source add genprog https://github.com/squaresLab/genprog-code
```
