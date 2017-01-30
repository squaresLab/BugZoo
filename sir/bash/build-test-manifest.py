#!/usr/bin/python3
import json
import os
import copy
from glob import glob

# Find everything that isn't a test file within this directory
non_test_files = [f for f in os.listdir('/experiment/inputs') \
                  if os.path.isfile(f) and not f.endswith('.test')]
inputs_prototype = {f: f for f in non_test_files}
#print(non_test_files)

manifest = []
for test in glob('*.test'):
    command = './%s' % test
    inputs = copy.copy(inputs_prototype)
    inputs[test] = test
    entry = {'command': command, 'input': inputs}
    manifest.append(entry)
#print(manifest)

with open('/experiment/tests.pythia.json', 'w') as f:
    json.dump(manifest, f, indent=True, sort_keys=True)
