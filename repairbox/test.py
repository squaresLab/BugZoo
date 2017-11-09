import typing
from typing import List


class TestCase(object):
    def __init__(self, identifier: str) -> None:
        self.__identifier = identifier


    @property
    def identifier(self) -> str:
        """
        A unique identifier assigned to this test case.
        """
        return self.__identifier


    def __repr__(self) -> str:
        """
        Produces a human-readable description of this test case in the form of:
        `Test[:identifier]`, where `:identifier` is replaced by the identifier for
        this test case.

        Example:

        .. code-block:: python

            rbox = RepairBox()
            artefact = rbox.artefacts['manybugs:python:69223-69224']
            for test in artefact.tests:
                print(test)
        """
        return "Test[{}]".format(self.__identifier)


    def __eq__(self, other) -> bool:
        """
        Checks this test case against another for equality.
        """
        return  isinstance(other, TestCase) and \
                other.identifier == self.__identifier


class TestOutcome(object):
    """
    Used to describe the outcome of a test execution.
    """
    def __init__(self, response, passed, duration):
        self.__response = response
        self.__passed = passed
        self.__duration = duration


    @property
    def response(self):
        """

        """
        return self.__response


    @property
    def passed(self) -> bool:
        """
        Flag indicating whether the associated test execution was successful.
        """
        return self.__passed


    @property
    def duration(self) -> float:
        """
        The duration of the test execution, measured in seconds.
        """
        return self.__duration


class TestSuite(object):

    @staticmethod
    def from_dict(yml: dict) -> 'TestSuite':
        """
        Constructs a test harness from a dictionary-based description.
        """
        typ = yml['type']
        # route based on type
        if typ == 'genprog':
            return GenProgTestSuite.from_yaml(yml)
        elif typ == 'simple':
            return SimpleTestSuite.from_yaml(yml)

        raise Exception("unexpected test harness type: {}".format(typ))


    def __init__(self, tests):
        self.__tests = tests


    @property
    def tests(self):
        """
        The list of tests associated with this test harness.
        """
        return self.__tests[:]


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
        The time limit on individual test case executions, measured in seconds.
        """
        return self.__time_limit
