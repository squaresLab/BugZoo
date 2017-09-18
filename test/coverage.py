#!/usr/bin/env python3
from repairbox.manager import RepairBoxManager

bug = RepairBoxManager.bugs['manybugs:python:69223-69224']
bug.install()
try:
    container = bug.provision()
    container.compile()

    tests = bug.tests
    test = tests[4]
    print(test)

    # compute coverage
    cov = container.coverage(test)
    print(cov)

finally:
    container.destroy()
