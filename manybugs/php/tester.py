#!/usr/bin/python
import fnmatch
import os
import sys

# Build a list of all the test cases for the program
def build():
    tests = set()
    for (root, dirs, files) in os.walk('/experiment/src'):
        root = os.path.relpath(root, '/experiment/src')
        for f in fnmatch.filter(files, '*.phpt'):
            test = os.path.join(root, f)
            tests.add(test)

    # Find a list of the failing tests
    with open("/experiment/bug-info/scenario-data.txt", "r") as f:
        lines = [l.strip() for l in f]

    cut_from = \
        (i for (i,l) in enumerate(lines) if l.startswith("failing tests:")).next()
    cut_to = \
        (i for (i,l) in enumerate(lines) if l.startswith("minutes between bug rev and fix rev:")).next()
    failing = set(lines[cut_from+1:cut_to-1])

    # Deduce the set of passing tests
    passing = tests - failing

    # write failing tests to disk
    with open("/experiment/failing.tests.txt", "w") as f:
        for t in failing:
            f.write("{}\n".format(t))

    # write passing tests to disk
    with open("/experiment/passing.tests.txt", "w") as f:
        for t in passing:
            f.write("{}\n".format(t))


def run(identifier, exe=None):
    offset = int(identifier[1:]) - 1
    if identifier[0] == "p":
        with open("/experiment/passing.tests.txt") as f:
            test = f.readlines()[offset]
    elif identifier[0] == "n":
        with open("/experiment/failing.tests.txt") as f:
            test = f.readlines()[offset]

    print("Running test ({}): {}".format(identifier, test))

if __name__ == "__main__":
    cmd = sys.argv[1]
    if cmd == "build":
        build()
    elif cmd == "run":
        run(*sys.argv[2:])
