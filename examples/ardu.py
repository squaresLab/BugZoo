#!/usr/bin/env python3
from repairbox.manager import RepairBoxManager

bug = RepairBoxManager.bugs['ardubugs:copter:62a05a0']
tests = bug.tests
bug.install()
try:
    container = bug.provision()
    #print('compiling...')
    #container.compile()
    #print('compiled')
    print('executing test...')
    container.execute(tests[0])
    print('executed')

    # print(test[0])

    # compute coverage
    #cov = container.coverage(test)
    #print(cov)

finally:
    container.destroy()
