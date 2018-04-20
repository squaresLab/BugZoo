from bugzoo.cmd import ExecResponse
from typing import List, Iterator, Dict, Any


class TestCase(object):
    """
    Represents an individual test within a test suite.
    """
    def __init__(self, name: str) -> None:
        self.__name = name

    @property
    def name(self) -> str:
        """
        A unique identifier assigned to this test case.
        """
        return self.__name

    identifier = name

    def __hash__(self) -> int:
        return hash(self.name)

    def __repr__(self) -> str:
        """
        Produces a human-readable description of this test case in the form of:
        `Test[:identifier]`, where `:identifier` is replaced by the identifier for
        this test case.

        Example:

        .. code-block:: python

            rbox = BugZoo()
            bug = rbox.bugs['manybugs:python:69223-69224']
            for test in bug.tests:
                print(test)
        """
        return "Test[{}]".format(self.__name)

    def __eq__(self, other) -> bool:
        """
        Checks this test case against another for equality.
        """
        return  isinstance(other, TestCase) and \
                other.name == self.__name


class TestOutcome(object):
    """
    Used to describe the outcome of a test execution.
    """
    @staticmethod
    def from_dict(d: dict) -> 'TestOutcome':
        response = ExecResponse.from_dict(d['response'])
        passed = d['passed']
        return TestOutcome(response, passed)

    def __init__(self,
                 response: ExecResponse,
                 passed: bool
                 ) -> None:
        self.__response = response
        self.__passed = passed

    @property
    def response(self) -> ExecResponse:
        """
        The response produced by the command used to execute this test.
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
        return self.response.duration

    def to_dict(self) -> dict:
        """
        Produces a JSON and YAML--ready dictionary describing this test
        outcome.
        """
        return {'passed': self.passed,
                'response': self.response.to_dict()
               }


class TestSuite(object):
    @staticmethod
    def from_dict(yml: dict) -> 'TestSuite':
        """
        Constructs a test harness from a dictionary-based description.
        """
        from bugzoo.testing.simple import SimpleTestSuite, GenProgTestSuite
        from bugzoo.testing.empty import EmptyTestSuite

        typ = yml['type']
        # route based on type
        if typ == 'genprog':
            return GenProgTestSuite.from_yaml(yml)
        if typ == 'simple':
            return SimpleTestSuite.from_yaml(yml)
        if typ == 'empty':
            return EmptyTestSuite()

        raise Exception("unexpected test harness type: {}".format(typ))

    def __init__(self, tests: List[TestCase]) -> None:
        self.__tests = \
            {test.name: test for test in tests} # type: Dict[str, TestCase]

    def __getitem__(self, name: str) -> TestCase:
        """
        Attempts to fetch a test case from this test suite by its name.

        Raises:
            KeyError: if no test case with the given name belongs to this
                test suite.
        """
        return self.__tests[name]

    @property
    def tests(self) -> List[TestCase]:
        """
        The list of tests associated with this test harness.
        """
        return list(self.__tests.values())

    def to_dict(self) -> Dict[str, Any]:
        raise NotImplementedError
