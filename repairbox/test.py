from typing import List


class TestCase(object):
    def __init__(self, identifier: str) -> None:
        self.__identifier = identifier


    @property
    def identifier(self):
        return self.__identifier

    
    def __repr__(self):
        return "Test[{}]".format(self.__identifier)


    def __eq__(self, other):
        return  isinstance(other, TestCase) and \
                other.identifier == self.__identifier


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

    
    def __init__(self, tests):
        self.__tests = tests


    @property
    def tests(self):
        return self.__tests[:]


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

        tests = [TestCase(t) for t in tests]
        super().__init__(tests)


    def command(self, test):
        cmd = self.__command.replace('__ID__', test.identifier, 1)
        return (cmd, self.__context)


class GenProgTestHarness(SimpleTestHarness):
    @staticmethod
    def from_yaml(yml: dict) -> 'GenProgTestHarness':
        passing = yml['passing']
        failing = yml['failing']
        time_limit = yml['time-limit']
        command = yml.get('command', './test.sh __ID__')
        context = yml.get('context', '/experiment')
        return GenProgTestHarness(passing, failing, time_limit, command, context)


    def __init__(self, passing: int, failing: int, time_limit: float, command: str, context: str) -> None:
        assert time_limit > 0
        assert passing >= 0
        assert failing > 0

        self.__passing = passing
        self.__failing = failing

        tests = ["p{}".format(n) for n in range(1, passing + 1)] + \
                ["n{}".format(n) for n in range(1, failing + 1)]
        super().__init__(command, context, time_limit, tests)


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
