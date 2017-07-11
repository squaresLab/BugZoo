#!/usr/bin/python3
import os
import yaml
import sys

def process(list_fn):
    with open(list_fn, "r") as f:
        bugs = [l.strip().split('/') for l in f]
    for (prog, ver, bug) in bugs:
        write(prog, ver, bug)

def write(program, version, bug):
    fn = "{}/{}-{}.bug.yaml".format(program, version, bug)
    contents = {
        'version': 0,
        'bug': "{}-{}".format(version, bug),
        'dataset': 'sir',
        'program': program,
        'dockerfile': '../Dockerfile.bug',
        'build-context': '.',
        'build-arguments': {
            'version': version,
            'fault': bug
        }
    }

#    if os.path.exists(fn):
#        return

    with open(fn, "w") as f:
        yaml.dump(contents, f, default_flow_style=False)

process(sys.argv[1])
