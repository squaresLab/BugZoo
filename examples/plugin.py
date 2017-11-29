#!/usr/bin/env python3
import repairbox.plugin.gcovr
from repairbox.manager import RepairBoxManager

gcovr = repairbox.plugin.gcovr.gcovr()

bug = RepairBoxManager.bugs['manybugs:python:69223-69224']
tests = bug.tests
bug.install()
try:
    container = bug.provision()
    gcovr.attach(container)
    container.coverage(tests[0])
    gcovr.detach(container)

finally:
    container.destroy()
