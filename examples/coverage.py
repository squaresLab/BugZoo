#!/usr/bin/env python3
#
# This example demonstrates how BugZoo can be used to collect coverage
# information for a historical bug from the ManyBugs dataset.
#
import bugzoo
from typing import List
from tabulate import tabulate as _tabulate
from pprint import pprint as pp
from bugzoo import BugZoo
from bugzoo.localization import Localization
from bugzoo.coverage.base import FileLine
from bugzoo.coverage.spectra import Spectra


def tabulate(headers: List[str], rows: List[List[str]]):
    print(_tabulate(rows, headers=headers, tablefmt='simple'))


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
    # pp(coverage.to_dict())

    line = FileLine('src/stat_cache.c', 115)
    tests = coverage.covering_tests(line)
    print(tests)

    # can we restrict the coverage?
    coverage = coverage.restricted_to_files(['src/stat_cache.c'])

    # generate a spectra
    # spectra = Spectra.from_coverage(coverage)
    spectra = bug.spectra.restricted_to_files(['src/joblist.c'])

    # compute localization using tarantula
    tarantula = bugzoo.localization.suspiciousness.tarantula
    loc = Localization.from_spectra(spectra, tarantula)

    tbl = []
    for line in loc:
        if loc[line] > 0:
            tbl.append([line, "{:.2f}".format(loc[line])])
    tabulate(['Line', 'Suspiciousness'], tbl)
