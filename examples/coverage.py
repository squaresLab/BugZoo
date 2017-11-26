#!/usr/bin/env python3
#
# This example demonstrates how BugZoo can be used to collect coverage
# information for a historical bug from the ManyBugs dataset.
#
from bugzoo import BugZoo
from bugzoo.plugin.gcovr import gcovr

if __name__ == "__main__":
    bgz = BugZoo()

    # ensure the ManyBugs dataset has been registered with BugZoo
    if not bgz.sources.exists('https://github.com/ChrisTimperley/ManyBugs'):
        bgz.sources.add('https://github.com/ChrisTimperley/ManyBugs')

    # build the Docker image for one of the bugs within the ManyBugs dataset
    bug = bgz.bugs['manybugs:python:69223-69224']
    bug.build()

    # we use the "gcovr" plugin to compute coverage
    plugin_gcovr = gcovr()

    # provision a container for the bug and attach the plugin to that container
    container = bug.provision()
    plugin_gcovr.attach(container)

    # compute coverage for each of the tests
    cov = {}
    for test in bug.tests:
        cov[test.identifier] = container.coverage(test)

    # let's determine which tests executed the faulty line
    #
    # TODO
