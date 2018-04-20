from typing import List, Iterator, Tuple, Dict, Any
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
        test_names = yml['tests']

        return SimpleTestSuite(cmd, ctx, time_limit, test_names)

    def __init__(self,
                 command: str,
                 context: str,
                 time_limit: int,
                 test_names: List[str]
                 ) -> None:
        assert test_names != []
        assert command != ""
        assert context != ""
        assert time_limit > 0

        self.__command = command
        self.__context = context
        self.__time_limit = time_limit

        tests = [TestCase(t) for t in test_names]
        super().__init__(tests)

    def command(self, test : TestCase) -> Tuple[str, str]:
        """
        Computes the bash command that should be used to execute a given test.

        Returns:
            A tuple of the form `(command, context)`, where `command` describes
            the `command` that should be executed, and `content` specifies the
            directory from which the command should be executed.
        """
        cmd = self.__command.replace('__ID__', test.name, 1)
        return (cmd, self.__context)

    @property
    def command_template(self) -> str:
        return self.__command

    @property
    def time_limit(self) -> int:
        """
        The maximum number of seconds that a test execution may run before
        being terminated.
        """
        return self.__time_limit

    @property
    def context(self) -> str:
        return self.__context


    def to_dict(self) -> Dict[str, Any]:
        return {
            'type': 'simple',
            'command': self.command_template,
            'context': self.context,
            'time-limit': self.time_limit,
            'tests': [t.name for t in self.tests]
        }


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
                 time_limit: int,
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
        self.__passing = [] # type: List[TestCase]
        self.__failing = [] # type: List[TestCase]

        for t in self.tests:
            if t.name.startswith('p'):
                self.__passing.append(t)
            else:
                self.__failing.append(t)

    @property
    def passing(self) -> Iterator[TestCase]:
        """
        The test cases that were passed by the original, unmodified bug.
        """
        return self.__passing.__iter__()

    @property
    def failing(self) -> Iterator[TestCase]:
        """
        The test cases that were failed by the original, unmodified bug.
        """
        return self.__failing.__iter__()

    @property
    def num_passing(self) -> int:
        """
        The number of passing tests in the test suite.
        """
        return len(self.__passing)

    @property
    def num_failing(self) -> int:
        """
        The number of failing tests in the test suite.
        """
        return len(self.__failing)

    def to_dict(self) -> Dict[str, Any]:
        return {
            'type': 'genprog',
            'command': self.command_template,
            'context': self.context,
            'time-limit': self.time_limit,
            'passing': len(self.__passing),
            'failing': len(self.__failing)
        }
