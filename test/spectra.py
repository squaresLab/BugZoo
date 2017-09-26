#!/usr/bin/env python3
import repairbox.plugin.gcovr
from repairbox.manager import RepairBoxManager

# coverage plugin
gcovr = repairbox.plugin.gcovr.gcovr()

bug = RepairBoxManager.bugs['manybugs:libtiff:2010-11-27-eb326f9-eec7ec0']
tests = bug.tests
bug.install()
try:
    container = bug.provision()
    gcovr.attach(container)
    container.compile()

    passing = []
    failing = []
    for test in tests:
        print('executing: {}...'.format(test.identifier), end='')
        cov = container.coverage(test)
        print('[{}]'.format('PASS' if outcome.passed else 'FAIL'))

 
    cov = container.coverage(test)
    print(cov)


finally:
    gcovr.detach(container)
    container.destroy()
