from typing import List, Iterator


class TestCase(object):
    """
    Represents an individual test within a test suite.
    """
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

            rbox = BugZoo()
            bug = rbox.bugs['manybugs:python:69223-69224']
            for test in bug.tests:
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
