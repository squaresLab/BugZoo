#!/usr/bin/python3
import click
import os.path
import json
import shutil

from subprocess import Popen, PIPE

# Names of the files that the standard output and standard error from running
# a given test command should be written to.
STDOUT_STORAGE_FN = "pythia.out"
STDERR_STORAGE_FN = "pythia.err"
EXIT_CODE_STORAGE_FN = "python.exit"

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
    def execute(self, executable, inputd, workd):
        cmd = self.command.replace("<<EXECUTABLE>>", executable)
        cmd = cmd.replace("<<WORKDIR>>", workd)
        #cmd = "%s > '%s' 2> '%s'; echo $? > '%s'" % \
        #    (cmd, STDOUT_STORAGE_FN, STDERR_STORAGE_FN, EXIT_CODE_STORAGE_FN)

        # prepare the inputs
        # TODO: for now the inputs are copied into the work directory; in the
        #   future, we should allow the creation of symbolic links (when
        #   specified by the user).
        for inpt in self.__inpts:
            cp_from = os.path.join(inputd, inpt.maps_from())
            cp_to = os.path.join(workd, inpt.maps_to())
            shutil.copy2(cp_from, cp_to)

        # execute the command in the work directory
        p = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE)
        stdout, stderr = p.communicate()
        retcode = p.returncode

# Defines the intended behaviour for a program on a given test suite
class Oracle(object):
    @staticmethod
    def generate(manifest, executable, inputd, oracled):
        assert isinstance(manifest, TestManifest), "manifest should be provided as a TestManifest object"
        assert not os.path.isdir(oracled), "oracle directory must not already exist"

        # attempt to construct the oracle directory
        try:
            os.makedirs(oracled)
            for case in manifest.contents():
                cased = os.path.join(oracled, case.number())
                case.execute(executable, inputd, cased)

        # in the event of an error, destroy the oracle directory; don't allow
        # partial oracles
        except:
            shutil.rmtree(oracled)

    def __init__(self, directory):
        assert os.path.isdir(directory), "specified oracle directory must exist"
        self.__directory = directory

# Ensures a given directory exists; may encounter a race condition if a
# directory or file is created between the first and second lines, but that
# shouldn't happen in this context.
def ensuredir(d):
    if not os.path.exists(d):
        os.makedirs(d)

# Generates the oracle for a given problem, storing its knowledge to disk at a
# specified oracle directory
def generate(manifest, executable, inputd, oracled):
    assert os.path.isfile(executable), "specified executable must exist"
    assert os.path.isdir(inputd), "specified input directory must exist"

    manifest = TestManifest(manifest)
    oracle = Oracle.generate(manifest, executable, inputd, oracled) 

def test_by_num(num, manifest, executable, inputd, oracled):
    assert os.path.isfile(executable), "specified executable must exist"
    assert os.path.isdir(inputd), "specified input directory must exist"

    manifest = TestManifest(manifest)
    case = manifest.getByNum(num)

# run 78

# run a given command and compare against oracle
