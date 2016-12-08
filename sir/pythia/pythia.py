#!/usr/bin/python3
import click
import os.path
import json

# Names of the files that the standard output and standard error from running
# a given test command should be written to.
STDOUT_STORAGE_FN = "pythia.out"
STDERR_STORAGE_FN = "pythia.err"

class TestManifest(object):
    # loads a manifest from a given file
    def __init__(self, fn):
        assert os.path.isfile(manifest), "specified manifest file must exist"
        assert manifest[-4:] == '.json', "specified manifest file must end in .json"
        with open(fn, 'r') as f:
            cases  = json.load(f)
            assert isinstance(cases, list), "manifest file must contain a JSON list"
            cases = [TestCase.from_json(c) for c in cases]
            self.__cases = cases

    # returns a test case from the manifest by its one-indexed number
    def getByNum(num):
        return self.__cases[num - 1]

class TestCase(object):
    @staticmethod
    def from_json(jsn):
        return TestCase(jsn['command'])
    def __init__(self, command):
        self.command = command
    def execute(self, executable, workd):
        cmd = self.command.replace("<<EXECUTABLE>>", executable)
        cmd = cmd.replace("<<WORKDIR>>", workd)
        cmd = "%s > %s 2> %s" % (cmd, STDOUT_STORAGE_FN, STDERR_STORAGE_FN)

# Defines the intended behaviour for a program on a given test suite
class Oracle(object):
    def __init__(self, directory):
        assert os.path.isdir(directory), "specified oracle directory must exist"
        self.__directory = directory

# Run 

# Ensures a given directory exists; may encounter a race condition if a
# directory or file is created between the first and second lines, but that
# shouldn't happen in this context.
def ensuredir(d):
    if not os.path.exists(d):
        os.makedirs(d)

# Generates the oracle directory for a given problem
#
#   generate [manifest] [executable] [inputd] [oracled]
def generate(manifest, executable, inputd, oracled):
    assert os.path.isfile(manifest), "specified manifest file must exist"
    assert manifest[-4:] == '.json', "specified manifest file must end in .json"
    assert os.path.isfile(executable), "specified executable must exist"
    assert os.path.isdir(inputd), "specified input directory must exist"

    # Build the oracle directory
    ensuredir(oracled)

def test_by_num(num, manifest, executable, inputd, oracled):
    assert os.path.isfile(executable), "specified executable must exist"
    assert os.path.isdir(inputd), "specified input directory must exist"

    manifest = TestManifest(manifest)
    case = manifest.getByNum(num)

# run 78

# run a given command and compare against oracle
