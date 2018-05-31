# BugZoo

[![Build Status](https://travis-ci.org/squaresLab/BugZoo.svg?branch=master)](https://travis-ci.org/squaresLab/BugZoo)

BugZoo is a decentralised platform for distributing,
reproducing, and interacting with historical software bugs.
BugZoo connects existing datasets and tools to developers and
researchers, and provides a controlled environment for conducting experiments.
To ensure reproducibility, extensibility, and usability, BugZoo
uses Docker containers to package, deliver, and interact with bugs and
tools.

Using BugZoo to conduct experiments has the following advantages:

## Features

* Share and download historical bugs.

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

## Getting Started

Use ManyBugs and GenProg as an example.

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

## Citation

If you wish to cite BugZoo in your work, please use the citation below.

```
@inproceedings{bugzoo,
  author = {Timperley, Christopher and Stepney, Susan and {Le Goues}, Claire}
  title = {{Poster: BugZoo – A Platform for Studying Software Bugs}},
  booktitle = {{International Conference on Software Engineering}},
  series = {{ICSE '18}},
  year = {2018}
  note = {{To appear}}
}
```
