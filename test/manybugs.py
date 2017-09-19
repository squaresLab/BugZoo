#!/usr/bin/env python3
from repairbox.manager import RepairBoxManager

bug = RepairBoxManager.bugs['manybugs:libtiff:2010-11-27-eb326f9-eec7ec0']
tests = bug.tests
bug.install()
try:
    container = bug.provision()
    print('compiling...')
    container.compile()
    print('compiled')

    for test in tests:
        print('executing: {}...'.format(test.identifier), end='')
        outcome = container.execute(test)
        print('[{}]'.format('PASS' if outcome.passed else 'FAIL'))

    # compute coverage
    #cov = container.coverage(test)
    #print(cov)

finally:
    container.destroy()
