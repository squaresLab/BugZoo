from typing import List

class TestHarness(object):
    
    @staticmethod
    def from_yaml(yml: dict) -> 'TestHarness':
        """
        Constructs a test harness from its YAML-based (i.e., dictionary)
        description.
        """
        typ = yml['type']
        # route based on type
        if typ == 'genprog':
            return GenProgTestHarness.from_yaml(yml)
        elif typ == 'simple':
            return SimpleTestHarness.from_yaml(yml)

        raise Exception("unexpected test harness type: {}".format(typ))


class SimpleTestHarness(TestHarness):
    @staticmethod
    def from_yaml(yml: dict) -> 'SimpleTestHarness':
        cmd = yml['command']
        ctx = yml['context']
        time_limit = yml['time-limit']
        tests = yml['tests']

        return SimpleTestHarness(cmd, ctx, time_limit, tests)


    def __init__(self, command: str, context: str, time_limit: float, tests: List[str]) -> None:
        assert tests != []
        assert command != ""
        assert context != ""
        assert time_limit > 0

        self.__command = command
        self.__context = context
        self.__time_limit = time_limit
        self.__tests = tests


class GenProgTestHarness(TestHarness):
    @staticmethod
    def from_yaml(yml: dict) -> 'GenProgTestHarness':
        passing = yml['passing']
        failing = yml['failing']
        time_limit = yml['time-limit']
        command = yml.get('command', './test.sh __ID__')
        return GenProgTestHarness(passing, failing, time_limit, command)


    def __init__(self, passing, failing, time_limit, command):
        assert time_limit > 0
        assert passing >= 0
        assert failing > 0

        self.__passing = passing
        self.__failing = failing
        self.__time_limit = time_limit
        self.__command = command


    @property
    def num_passing(self):
        """
        The number of passing tests in the test suite.
        """
        return self.__passing


    @property
    def num_failing(self):
        """
        The number of failing tests in the test suite.
        """
        return self.__failing

    
    @property
    def time_limit(self):
        """
        The time limit on individual test case executions.
        """
        return self.__time_limit


class Test(object):
    
    def __init__(self, identifier):
        self.__identifier = identifier


class TestOutcome(object):

    def __init__(self, passed, duration):
        self.__passed = passed
        self.__duration = duration


    @property
    def passed(self):
        """
        Flag indicating whether the test execution was successful.
        """
        return self.__passed

    
    @property
    def failed(self):
        """
        Flag indicating whether the test execution failed.
        """
        return self.__failed


    @property
    def duration(self) -> float:
        """
        Returns the duration of the test execution, measured in seconds.
        """
        return self.__duration
