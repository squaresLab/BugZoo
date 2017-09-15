#!/usr/bin/env python3
from repairbox.manager import RepairBoxManager

bug = RepairBoxManager.bugs['ardubugs:copter:4147825']
bug.install()
try:
    container = bug.provision()
    container.compile()

    tests = bug.tests
    test = tests[0]
    print(test)

    outcome = container.execute(tests[0])
    print(outcome)
finally:
    container.destroy()
