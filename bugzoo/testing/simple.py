from typing import List, Iterator
from bugzoo.testing.base import TestSuite, TestCase


class SimpleTestSuite(TestSuite):
    """
    This test harness uses bash to execute its test suite. Each test is
    transformed into a unique bash command by replacing all instances of
    "__ID__" in a template command (given as a string) with the unique
    identifier for that test case.

    For example, if the template command for a simple test harness is:

        ./executable run __ID___

    and the identifier for a test is "test-one", then the unique command for
    that test would be:

        ./executable run test-one

    Tests are deemed to have passed if the execution of the associated bash
    command results in an exit code of zero.
    """
    @staticmethod
    def from_yaml(yml: dict) -> 'SimpleTestSuite':
        cmd = yml['command']
        ctx = yml['context']
        time_limit = yml['time-limit']
        tests = yml['tests']

        return SimpleTestSuite(cmd, ctx, time_limit, tests)

    def __init__(self,
                 command: str,
                 context: str,
                 time_limit: float,
                 tests: List[str]
                 ) -> None:
        assert tests != []
        assert command != ""
        assert context != ""
        assert time_limit > 0

        self.__command = command
        self.__context = context
        self.__time_limit = time_limit

        tests = [TestCase(t) for t in tests]
        super().__init__(tests)

    def command(self, test : TestCase) -> str:
        """
        Computes the bash command that should be used to execute a given test.
        """
        cmd = self.__command.replace('__ID__', test.identifier, 1)
        return (cmd, self.__context)


class GenProgTestSuite(SimpleTestSuite):
    @staticmethod
    def from_yaml(yml: dict) -> 'GenProgTestSuite':
        passing = yml['passing']
        failing = yml['failing']
        time_limit = yml['time-limit']
        command = yml.get('command', './test.sh __ID__')
        context = yml.get('context', '/experiment')
        return GenProgTestSuite(passing, failing, time_limit, command, context)

    def __init__(self,
                 passing: int,
                 failing: int,
                 time_limit: float,
                 command: str,
                 context: str
                 ) -> None:
        assert time_limit > 0
        assert passing >= 0
        assert failing > 0

        tests = ["p{}".format(n) for n in range(1, passing + 1)] + \
                ["n{}".format(n) for n in range(1, failing + 1)]
        super().__init__(command, context, time_limit, tests)

        # extract the passing and failing test cases
        self.__passing = []
        self.__failing = []

        for t in self.tests:
            if t.identifier.startswith('p'):
                self.__passing.append(t)
            else:
                self.__failing.append(t)

    @property
    def passing(self) -> Iterator[TestCase]:
        """
        The test cases that were passed by the original, unmodified bug.
        """
        for t in self.__passing:
            yield t

    @property
    def failing(self) -> Iterator[TestCase]:
        """
        The test cases that were failed by the original, unmodified bug.
        """
        for t in self.__failing:
            yield t

    @property
    def num_passing(self):
        """
        The number of passing tests in the test suite.
        """
        return len(self.__passing)

    @property
    def num_failing(self):
        """
        The number of failing tests in the test suite.
        """
        return len(self.__failing)

    @property
    def time_limit(self):
        """
        The time limit on individual test case executions, measured in seconds.
        """
        return self.__time_limit
