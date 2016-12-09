#!/usr/bin/python3
from subprocess import Popen, PIPE
import argparse
import os.path
import json
import shutil
import subprocess
import sys
import tempfile

# CLI setup
PARSER = argparse.ArgumentParser()
SUBPARSERS = PARSER.add_subparsers()
PARSER.add_argument('--version', action='version', version='0.0.1')

GENERATE_PARSER = SUBPARSERS.add_parser('generate')
GENERATE_PARSER.add_argument('executable',\
                             help='location of program executable')
GENERATE_PARSER.add_argument('--tests',\
                             help='location of test suite manifest file',\
                             default='tests.pythia.json')


RUN_PARSER = SUBPARSERS.add_parser('run')

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
            cases = [TestCase.from_json(i + 1, c) for (i, c) in enumerate(cases)]
            self.__cases = cases

    def contents(self):
        return self.__cases
    # returns a test case from the manifest by its one-indexed number
    def getByNum(self, num):
        return self.__cases[num - 1]

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

        # return the outcome of the execution
        return TestOutcome(stdout, stderr, retcode, state)

# Describes the outcome of a test case execution in terms of the standard
# output, standard error, return code, and state of the sandbox.
class TestOutcome(object):
    def __init__(self, stdout, stderr, retcode, sandbox):
        self.__stdout = stdout
        self.__stderr = stderr
        self.__retcode = retcode
        self.__sandbox = sandbox
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
            return Oracle(json.load(f))

    def __init__(self, outcomes):
        self.__outcomes = outcomes

    def to_json(self):
        return [o.to_json() for o in self.__outcomes]

# Generates the oracle for a given problem, storing its knowledge to disk at a
# specified oracle directory
def generate(manifest_fn, executable_fn, input_d, oracle_fn):
    assert os.path.isfile(executable_fn), "specified executable must exist"
    assert os.path.isdir(input_d), "specified input directory must exist"

    manifest = TestManifest(manifest_fn)
    print("Generating oracle...")
    Oracle.generate(manifest, executable_fn, input_d, oracle_fn)
    print("Finished. Saved to disk at: %s" % oracle_fn)

#def test_by_num(num, manifest, executable, inputd, oracled):
#    assert os.path.isfile(executable), "specified executable must exist"
#    assert os.path.isdir(inputd), "specified input directory must exist"
#
#    manifest = TestManifest(manifest)
#    case = manifest.getByNum(num)

if __name__ == "__main__":
    args = PARSER.parse_args()
