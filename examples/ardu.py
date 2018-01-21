#!/usr/bin/env python3
#
# This example demonstrates how BugZoo can be used to collect coverage
# information for a historical bug from the ManyBugs dataset.
#
import sys
import bugzoo
from typing import List
from tabulate import tabulate as _tabulate
from pprint import pprint as pp
from bugzoo import BugZoo
from bugzoo.util import dedent
from bugzoo.localization import Localization
from bugzoo.coverage.base import FileLine
from bugzoo.coverage.spectra import Spectra
from bugzoo.patch import Patch


def tabulate(headers: List[str], rows: List[List[str]]):
    print(_tabulate(rows, headers=headers, tablefmt='simple'))


if __name__ == "__main__":
    bgz = BugZoo()

    if not bgz.sources.exists('https://github.com/ChrisTimperley/ardu-demo-bugs'):
        bgz.sources.add('https://github.com/ChrisTimperley/ardu-demo-bugs')
    bug = bgz.bugs['ardudemo:ardupilot:overflow']
    bug.build()
    spectra = bug.spectra
    spectra = spectra.restricted_to_files(['build/APMrover2/commands_logic.cpp'])
    for line in spectra:
        print("{} <- {}".format(line, spectra[line]))

    # loc = Localization.from_spectra(spectra, tarantula)
    # loc = loc.restricted_to_files(['src/joblist.c'])

    # tbl = []
    # for line in loc:
    #     if loc[line] > 0:
    #         tbl.append([line, "{:.2f}".format(loc[line])])
    # compute coverage for each of the tests
    # coverage = container.coverage()
    # coverage = bug.coverage
    # pp(coverage.to_dict())

    # line = FileLine('src/stat_cache.c', 115)
    # tests = coverage.covering_tests(line)
    # print(tests)

    # restrict coverage to a given file
    # coverage = coverage.restricted_to_files(['src/stat_cache.c'])

    # generate a spectra
    # spectra = Spectra.from_coverage(coverage)
    # spectra = bug.spectra.restricted_to_files(['src/joblist.c'])
    # spectra = bug.spectra

    # compute localization using tarantula
    # tarantula = bugzoo.localization.suspiciousness.tarantula
    # loc = Localization.from_spectra(spectra, tarantula)
    # loc = loc.restricted_to_files(['src/joblist.c'])

    # tbl = []
    # for line in loc:
    #     if loc[line] > 0:
    #         tbl.append([line, "{:.2f}".format(loc[line])])
