#!/usr/bin/python3
from subprocess import Popen, PIPE
import os.path
import json
import shutil
import subprocess
import sys

# Notice: these files are no longer used, as the oracle is now written to a
# single JSON file instead (rather than a structured set of files).
#
# Names of the files that the standard output and standard error from running
# a given test command should be written to.
#STDOUT_ORACLE_FN = "pythia.out"
#STDERR_ORACLE_FN = "pythia.err"
#RETVAL_ORACLE_FN = "pythia.ret"
#ENV_ORACLE_FN = "pythia.env"

# Describes the state of the sandbox as a dictionary of file names and their
# associated SHA1 hashes.
#
# TODO: what happens when the sandbox is empty?
def sandbox_state(d):
    cmd = ("find %d -type f -print0 | xargs -0 sha1sum" % d)
    state = subprocess.check_output(cmd, shell=True).splitlines(True)
    state = map(lambda l: l.split(' ', 1), state)
    state = {f[2:]: h for (f, h) in state} # trim leading ./
    return state

# Provides a detailed description of a particular test suite
class TestManifest(object):
    # loads a manifest from a given file
    def __init__(self, fn):
        assert os.path.isfile(manifest), "specified manifest file must exist"
        assert manifest[-4:] == '.json', "specified manifest file must end in .json"
        with open(fn, 'r') as f:
            cases  = json.load(f)
            assert isinstance(cases, list), "manifest file must contain a JSON list"
            cases = [TestCase.from_json(i + 1, c) for (i, c) in cases.enumerate()]
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
        inpts = [TestInput(t, f) for (t, f) in jsn.get('inputs', {}).items()]
        return TestCase(num, jsn['command'], inpts)
    def __init__(self, num, command, inpts):
        self.__num = num
        self.__command = command
        self.__inpts = inpts
    def number(self):
        return self.__num
    def command(self):
        return self.__command
    def execute(self, executable, inputd):
        # generate a sandbox directory for this test execution
        sandboxd = tempfile.mkdtemp()

        # execute the test case within the sandbox, then ensure it's destroyed
        try:
            cmd = self.command.replace("<<EXECUTABLE>>", executable)
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
            retcode = p.returncode
            state = sandbox_state(sandboxd)

        finally:
            if os.path.exists(sandboxd):
                shutil.remove(sandboxd)

        # return the outcome of the execution
        return TestOutcome(stdout, stderr, retcode, state)

# Describes the outcome of a test case execution in terms of the standard
# output, standard error, return code, and state of the sandbox.
def TestOutcome(object):
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
        outcomes = [case.execute(executable, input_d)\
                    for case in manifest.contents()]

        # write the outcomes to the specified file, ensuring the file is
        # destroyed in the event of an exception (preventing a corrupted
        # oracle).
        try:
            with open(oracle_fn, 'w') as f:
                json.dump(outcomes, f)
        except:
            if os.path.exists(oracle_fn):
                os.remove(oracle_fn)
            raise

        return Oracle(outcomes)

    # Attempts to load an oracle from a given file
    @staticmethod
    def load(oracle_fn):
        assert os.path.isfile(oracle_fn), "oracle file must exist"
        assert oracle_fn[-5:] == '.json', "oracle file must end in '.json'"

        with open(oracle_fn, 'r') as f:
            return Oracle(json.load(f))

    def __init__(self, outcomes):
        self.__outcomes = outcomes

# Generates the oracle for a given problem, storing its knowledge to disk at a
# specified oracle directory
def generate(manifest_fn, executable_fn, input_d, oracle_fn):
    assert os.path.isfile(executable_fn), "specified executable must exist"
    assert os.path.isdir(input_d), "specified input directory must exist"

    manifest = TestManifest(manifest_fn)
    print("Generating oracle...")
    Oracle.generate(manifest, executable, input_d, oracle_fn)
    print("Finished. Saved to disk at: %s" % oracle_fn)

#def test_by_num(num, manifest, executable, inputd, oracled):
#    assert os.path.isfile(executable), "specified executable must exist"
#    assert os.path.isdir(inputd), "specified input directory must exist"
#
#    manifest = TestManifest(manifest)
#    case = manifest.getByNum(num)

if __name__ == "__main__":
    args = sys.argv[1:]
    if args[0] == 'generate-oracle':
        args = args[1:]
        generate(args[0], args[1], args[2], args[3])
