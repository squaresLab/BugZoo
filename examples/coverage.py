#!/usr/bin/env python3
#
# This example demonstrates how BugZoo can be used to collect coverage
# information for a historical bug from the ManyBugs dataset.
#
from pprint import pprint as pp
from bugzoo import BugZoo

if __name__ == "__main__":
    bgz = BugZoo()

    # ensure the ManyBugs dataset has been registered with BugZoo
    if not bgz.sources.exists('https://github.com/ChrisTimperley/ManyBugs'):
        bgz.sources.add('https://github.com/ChrisTimperley/ManyBugs')

    # build the Docker image for one of the bugs within the ManyBugs dataset
    bug = bgz.bugs['manybugs:lighttpd:1794-1795']
    bug.build()

    # compute coverage for each of the tests
    # container = bug.provision()
    # coverage = container.coverage()
    coverage = bug.coverage

    pp(coverage.to_dict())

    # let's determine which tests executed the faulty line
    #
    # TODO
