#!/usr/bin/python3
from subprocess import Popen, PIPE
from pprint import pprint
import re
import argparse
import os.path
import json
import shutil
import subprocess
import sys
import tempfile

INPUT_REGEX = r'(?<=\<\<SANDBOX>>\/)[\w|_|\.|-|\/]+\b'

# Describes the state of the sandbox as a dictionary of file names and their
# associated SHA1 hashes.
def sandbox_state(d):
    cmd = "find '%s' -type f -exec sha1sum '{}' \;" % d
    state = subprocess.check_output(cmd, shell=True)
    state = state.decode(sys.stdout.encoding)
    state = [] if state == "" else state.splitlines(True)
    state = map(lambda l: l.split(' ', 1), state)
    state = {(f[len(d)+2:].strip()): h for (h, f) in state} # trim sandbox dir
    return state

# Provides a detailed description of a particular test suite
class TestManifest(object):
    # loads a manifest from a given file
    def __init__(self, fn):
        assert os.path.isfile(fn), "specified manifest file must exist"
        assert fn[-5:] == '.json', "specified manifest file must end in .json"
        with open(fn, 'r') as f:
            cases  = json.load(f)
            assert isinstance(cases, list), "manifest file must contain a JSON list"
            cases = [TestCase.from_json(i, c) for (i, c) in enumerate(cases)]
            self.__cases = cases

    def contents(self):
        return self.__cases
    def get(self, num):
        return self.__cases[num]

# Provides a particular test suite mapping
class TestMapping(object):
    def __init__(self, fn):
        assert os.path.isfile(fn), "specified mapping file must exist"
        assert fn[-5:] == '.json', "specified mapping file must end in .json"
        with open(fn, 'r') as f:
            self.__mapping = json.load(f)
    def mapping(self):
        return self.__mapping
    def get(self, id):
        return self.__mapping[id]

class TestInput(object):
    def __init__(self, maps_to, maps_from):
        self.__maps_to = maps_to
        self.__maps_from = maps_from
    def maps_to(self):
        return self.__maps_to
    def maps_from(self):
        return self.__maps_from

class TestCase(object):
    @staticmethod
    def from_json(num, jsn):
        assert 'command' in jsn, "test case definition must specify 'command'"
        inpts = [TestInput(t, f) for (t, f) in jsn.get('input', {}).items()]
        return TestCase(num, jsn['command'], inpts)
    def __init__(self, num, command, inpts):
        self.__num = num
        self.__command = command
        self.__inpts = inpts
    def number(self):
        return self.__num
    def command(self):
        return self.__command
    def execute(self, executable_fn, inputd):
        # generate a sandbox directory for this test execution
        sandboxd = tempfile.mkdtemp()

        # execute the test case within the sandbox, then ensure it's destroyed
        try:
            cmd = self.__command.replace("<<EXECUTABLE>>", executable_fn)
            cmd = cmd.replace("<<SANDBOX>>", sandboxd)

            # prepare the inputs
            # TODO: for now the inputs are copied into the sandbox; in the
            #   future, we should allow the creation of symbolic links (when
            #   specified by the user).
            for inpt in self.__inpts:
                cp_from = os.path.join(inputd, inpt.maps_from())
                cp_to = os.path.join(sandboxd, inpt.maps_to())
                cp_to_dir = os.path.dirname(cp_to)
                if not os.path.exists(cp_to_dir):
                    os.makedirs(cp_to_dir)
                shutil.copy2(cp_from, cp_to)

            # execute the command within the sandbox
            p = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE)
            stdout, stderr = p.communicate()
            stdout = str(stdout)[2:-1]
            stderr = str(stderr)[2:-1]
            retcode = p.returncode
            state = sandbox_state(sandboxd)

        finally:
            if os.path.exists(sandboxd):
                shutil.rmtree(sandboxd)
        return TestOutcome(stdout, stderr, retcode, state)

# Describes the outcome of a test case execution in terms of the standard
# output, standard error, return code, and state of the sandbox.
class TestOutcome(object):
    @staticmethod
    def from_json(jsn):
        return TestOutcome(jsn['out'], jsn['err'], jsn['retcode'], jsn['sandbox'])
    def __init__(self, stdout, stderr, retcode, sandbox):
        self.__stdout = stdout
        self.__stderr = stderr
        self.__retcode = retcode
        self.__sandbox = sandbox
    def stdout(self):
        return self.__stdout
    def stderr(self):
        return self.__stderr
    def retcode(self):
        return self.__retcode
    def sandbox(self):
        return self.__sandbox
    def __eq__(self, other):
        return not (other is None) and\
            self.__stdout == other.stdout() and\
            self.__stderr == other.stderr() and\
            self.__retcode == other.retcode() and\
            self.__sandbox == other.sandbox()
    def pretty(self):
        pprint(self.to_json())
    def to_json(self):
        return {'out': self.__stdout,\
                'err': self.__stderr,\
                'retcode': self.__retcode,\
                'sandbox': self.__sandbox}

# Defines the intended behaviour for a program on a given test suite
class Oracle(object):
    @staticmethod
    def generate(manifest, executable_fn, input_d, oracle_fn):
        assert isinstance(manifest, TestManifest), "manifest should be provided as a TestManifest object"
        assert not os.path.exists(oracle_fn), "oracle file must not already exist"
        assert oracle_fn[-5:] == '.json', "oracle file must end in '.json'"

        # compute the expected outcomes for each test
        outcomes = [case.execute(executable_fn, input_d)\
                    for case in manifest.contents()]
        oracle = Oracle(outcomes)

        # write the outcomes to the specified file, ensuring the file is
        # destroyed in the event of an exception (preventing a corrupted
        # oracle).
        try:
            with open(oracle_fn, 'w') as f:
                json.dump(oracle.to_json(), f)
        except:
            if os.path.exists(oracle_fn):
                os.remove(oracle_fn)
            raise

        return oracle

    # Attempts to load an oracle from a given file
    @staticmethod
    def load(oracle_fn):
        assert os.path.isfile(oracle_fn), "oracle file must exist"
        assert oracle_fn[-5:] == '.json', "oracle file must end in '.json'"
        with open(oracle_fn, 'r') as f:
            return Oracle([TestOutcome.from_json(o) for o in json.load(f)])

    def __init__(self, outcomes):
        self.__outcomes = outcomes
    
    # returns the expected outcome for a given test case
    # TODO: test case isn't in oracle
    def expected(self, test):
        return self.__outcomes[test.number()]

    def to_json(self):
        return [o.to_json() for o in self.__outcomes]

def run_test(manifest, oracle, executable, inputs, test):
    expected = oracle.expected(test)
    outcome = test.execute(executable, inputs)
    passed = outcome == expected

    print("Expected:")
    expected.pretty()
    print("\nActual:")
    outcome.pretty()
    print("")

    if passed:
        print("Finished running test case: PASSED")
        exit(0)
    else:
        print("Finished running test case: FAILED")
        exit(1)

# Generates the oracle for a given problem, storing its knowledge to disk at a
# specified oracle directory
def action_generate(args):
    assert os.path.isfile(args.executable), "specified executable must exist"
    assert os.path.isdir(args.inputs), "specified input directory must exist"

    manifest = TestManifest(args.tests)
    print("Generating oracle...")
    Oracle.generate(manifest, args.executable, args.inputs, args.output)
    print("Finished.\nSaved to disk at: %s" % args.output)

# Runs a test case with a given number against the oracle
def action_run(args):
    manifest = TestManifest(args.tests)
    oracle = Oracle.load(args.oracle)
    test = manifest.get(args.num)
    print("Running test case %d: %s" % (args.num, test.command()))
    return run_test(manifest, oracle, args.executable, args.inputs, test) 

# Runs a test case with a given ID, supplied by the mapping file, against the
# oracle
def action_run_by_id(args):
    manifest = TestManifest(args.tests)
    mapping = TestMapping(args.mapping)
    oracle = Oracle.load(args.oracle)
    test_num = mapping.get(args.id)
    test = manifest.get(test_num)
    print("Running test case %s: %s" % (args.id, test.command()))
    return run_test(manifest, oracle, args.executable, args.inputs, test)

# Constructs a test manifest for a given problem by converting its MTS output
def action_build_mts(args):
    # generate mts command list
    try:
        subprocess.check_call(["mts",\
                               args.object, args.executable, args.universe,\
                               "R",\
                               "commands.txt", "NULL", "NULL"])
        print("Generated MTS output")
        subprocess.check_call(("grep -e '^%s' commands.txt | sponge commands.txt" % args.executable),\
                              shell=True)
        # WARN:
        #   really, the matching portion of this should be: ${object}/inputs
        #   however, MTS seems to produce "../inputs", regardless of where the
        #   object directory may be
        subprocess.check_call("sed -i 's;../inputs;<<SANDBOX>>;g' commands.txt",\
                              shell=True)
        subprocess.check_call(("sed -i 's; > %s/outputs/.\+$;;g' commands.txt" % args.object),\
                              shell=True)
        subprocess.check_call(("sed -i 's;%s;<<EXECUTABLE>>;g' commands.txt" % args.executable),\
                              shell=True)
        print("Sanitised MTS output into list of Pythia commands")
    
    # destroy commands.txt in the event of an error
    except:
        if os.path.exists("commands.txt"):
            os.remove("commands.txt")
        raise

    # convert the commands list into a JSON Pythia manifest
    manifest = []
    with open("commands.txt", "r") as f:
        for cmd in f:
            cmd = cmd.strip()
            inpts = {}
            for inpt in re.findall(INPUT_REGEX, cmd):
                inpts[inpt] = inpt
            manifest.append({'command': cmd, 'input': inpts})

    # write the manifest to file
    with open(args.output, "w") as f:
        json.dump(manifest, f, indent=2, sort_keys=True)

# Determines the passing and failing tests for a variant of a program against
# the oracle. These results are used to generate a mapping between GenProg
# style test identifiers and their numbers in the test manifest.
def action_map(args):
    assert not os.path.exists("map.pythia.json"), "map.pythia.json must not exist within working directory"
    manifest = TestManifest(args.tests)
    oracle = Oracle.load(args.oracle)

    print("Generating test case mapping...")
    m = {}
    failed = []
    num_passed = 0
    num_failed = 0
    for test in manifest.contents():
        expected = oracle.expected(test)
        actual = test.execute(args.executable, args.inputs)
        outcome = actual == expected
        if outcome:
            num_passed += 1
            m["p%d" % num_passed] = test.number()
        else:
            num_failed += 1
            failed.append(str(test.number()))
            m["n%d" % num_failed] = test.number()

    # debugging
    print("Generated test case mapping")
    print("Found %d failing tests: %s" % (num_failed, ', '.join(failed)))
    print("Saving map file to disk at: map.pythia.json")
    with open('map.pythia.json', 'w') as f:
        json.dump(m, f)
    print("Saved map file to: map.pythia.json")

# CLI setup
PARSER = argparse.ArgumentParser()
SUBPARSERS = PARSER.add_subparsers()
PARSER.add_argument('--version', action='version', version='0.0.1')

# generate action
GENERATE_PARSER = SUBPARSERS.add_parser('generate')
GENERATE_PARSER.add_argument('executable',\
                             help='location of program executable')
GENERATE_PARSER.add_argument('--inputs',\
                             help='location of test case inputs directory',\
                             default='inputs')
GENERATE_PARSER.add_argument('-t', '--tests',\
                             help='location of test suite manifest file',\
                             default='tests.pythia.json')
GENERATE_PARSER.add_argument('-o', '--output',\
                             help='file to save oracle at',\
                             default='oracle.pythia.json')
GENERATE_PARSER.set_defaults(func=action_generate)

# convert-mts action
BUILD_MTS_PARSER = SUBPARSERS.add_parser('build-manifest-from-mts')
BUILD_MTS_PARSER.add_argument('object',\
                              help='location of root, object directory')
BUILD_MTS_PARSER.add_argument('universe',\
                              help='location of TSL universe file')
BUILD_MTS_PARSER.add_argument('executable',\
                             help='location of program executable')
BUILD_MTS_PARSER.add_argument('-o', '--output',\
                             help='file to save the converted test manifest at',\
                             default='tests.pythia.json')
BUILD_MTS_PARSER.set_defaults(func=action_build_mts)

# run action
RUN_PARSER = SUBPARSERS.add_parser('run')
RUN_PARSER.add_argument('executable',\
                        help='location of program executable')
RUN_PARSER.add_argument('num',\
                        type=int,\
                        help='number of the test case that should be executed')
RUN_PARSER.add_argument('--inputs',\
                        help='location of test case inputs directory',\
                        default='inputs')
RUN_PARSER.add_argument('--oracle',\
                        help='location of oracle file, used for validation',\
                        default='oracle.pythia.json')
RUN_PARSER.add_argument('-t', '--tests',\
                        help='location of test suite manifest file',\
                        default='tests.pythia.json')
RUN_PARSER.set_defaults(func=action_run)

# run by id action
RUN_ID_PARSER = SUBPARSERS.add_parser('run-by-id')
RUN_ID_PARSER.add_argument('executable',\
                        help='location of program executable')
RUN_ID_PARSER.add_argument('id',\
                        help='id of the test that should be run')
RUN_ID_PARSER.add_argument('--inputs',\
                        help='location of test case inputs directory',\
                        default='inputs')
RUN_ID_PARSER.add_argument('--oracle',\
                        help='location of oracle file, used for validation',\
                        default='oracle.pythia.json')
RUN_ID_PARSER.add_argument('-t', '--tests',\
                        help='location of test suite manifest file',\
                        default='tests.pythia.json')
RUN_ID_PARSER.add_argument('--mapping',\
                        help='location of test mapping file',\
                        default='map.pythia.json')
RUN_ID_PARSER.set_defaults(func=action_run_by_id)

# map action
MAP_PARSER = SUBPARSERS.add_parser('map')
MAP_PARSER.add_argument('executable',\
                        help='location of program executable')
MAP_PARSER.add_argument('--inputs',\
                        help='location of test case inputs directory',\
                        default='inputs')
MAP_PARSER.add_argument('--oracle',\
                        help='location of oracle file, used for validation',\
                        default='oracle.pythia.json')
MAP_PARSER.add_argument('-t', '--tests',\
                        help='location of test suite manifest file',\
                        default='tests.pythia.json')
MAP_PARSER.set_defaults(func=action_map)

if __name__ == "__main__":
    args = PARSER.parse_args()
    if 'func' in vars(args):
        args.func(args)
