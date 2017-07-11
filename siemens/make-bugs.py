#!/usr/bin/python3
import os
import yaml
import sys

def write(program, bug):
    fn = "{}/{}.bug.yaml".format(program, bug)
    contents = {
        'version': 0,
        'bug': bug,
        'dataset': 'siemens',
        'program': program,
        'dockerfile': '../Dockerfile.bug',
        'build-context': bug,
        'build-args': {
            'fault': bug
        }
    }

    if os.path.exists(fn):
        return

    with open(fn, "w") as f:
        yaml.dump(contents, f, default_flow_style=False)

write(sys.argv[1], sys.argv[2])
