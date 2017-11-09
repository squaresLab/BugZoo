#!/usr/bin/env python3
import repairbox
from repairbox.manager import RepairBoxManager

bug = RepairBoxManager.bugs['manybugs:python:69223-69224']
bug.install()
try:
    container = bug.provision()
    container.compile()

    tests = bug.tests
    test = tests[4]
    print(test)

    outcome = container.execute(test)
    passed = "Yes" if outcome.passed else "No"
    print("Passed: {}".format(passed))

    # compute coverage
    cov = container.coverage(test)

    # compute spectra

    # compute fault localisation

    # observation-based program slicing

finally:
    container.destroy()
