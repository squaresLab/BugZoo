#!/usr/bin/env python3
from repairbox.manager import RepairBoxManager

bug = RepairBoxManager.bugs['ardubugs:copter:4147825']
bug.install()
try:
    container = bug.provision()
finally:
    container.destroy()
