__all__ = ['TestCase', 'TestSuite', 'TestOutcome']

from typing import Sequence, Dict, Iterator, Optional, List, Any
import attr

from ..cmd import ExecResponse


@attr.s(frozen=True)
class TestCase(object):
    name = attr.ib(type=str)
    time_limit = attr.ib(type=int)
    command = attr.ib(type=str)
    context = attr.ib(type=str)
    expected_outcome = attr.ib(type=Optional[bool])

    def to_dict(self) -> Dict[str, Any]:
        return {'name': self.name,
                'time-limit': self.time_limit,
                'command': self.command,
                'context': self.context,
                'expected-outcome': self.expected_outcome}


@attr.s(frozen=True)
class TestOutcome(object):
    response = attr.ib(type=ExecResponse)
    passed = attr.ib(type=bool)

    @staticmethod
    def from_dict(d: dict) -> 'TestOutcome':
        response = ExecResponse.from_dict(d['response'])
        passed = d['passed']
        return TestOutcome(response, passed)

    @property
    def duration(self) -> float:
        """
        The duration of the test execution, measured in seconds.
        """
        return self.response.duration

    def to_dict(self) -> dict:
        return {'passed': self.passed,
                'response': self.response.to_dict()}


@attr.s(frozen=True)
class TestSuite(object):
    _tests = attr.ib(type=Dict[str, TestCase],
                     converter=lambda ts: {t.name: t for t in ts})  # type: ignore

    @staticmethod
    def from_dict(d: dict) -> 'TestSuite':
        command_template = d.get('command', './test.sh __ID__')  # type: str
        default_time_limit = d.get('time-limit', 60)  # type: int
        command_context = d.get('context', '/experiment')  # type: str
        d_tests = d.get('tests', [])

        if d.get('type') == 'empty':
            return TestSuite([])

        if d.get('type') == 'genprog':
            for i in range(1, d['failing'] + 1):
                d_tests.append({'name': "n{}".format(i),
                                'expected-outcome': False})
            for i in range(1, d['passing'] + 1):
                d_tests.append({'name': "p{}".format(i),
                                'expected-outcome': True})

        # build the tests
        tests = []  # type: List[TestCase]
        for test_desc in d_tests:
            # FIXME add expected outcome
            if isinstance(test_desc, str):
                test_name = test_desc
                test_time_limit = default_time_limit
                test_context = command_context
                test_command = \
                    command_template.replace('__ID__', test_name)
                test_expected_outcome = None
            elif isinstance(test_desc, dict):
                if 'name' in test_desc:
                    test_name = test_desc['name']
                else:
                    test_name = test_desc['command']
                if 'command' in test_desc:
                    test_command = test_desc['command']
                else:
                    test_command = \
                        command_template.replace('__ID__', test_name)
                test_context = test_desc.get('context', command_context)
                test_time_limit = \
                    test_desc.get('time-limit', default_time_limit)
                test_expected_outcome = test_desc.get('expected-outcome')

            test = TestCase(name=test_name,
                            time_limit=test_time_limit,
                            command=test_command,
                            context=test_context,
                            expected_outcome=test_expected_outcome)
            tests.append(test)

        return TestSuite(tests)

    @property
    def tests(self) -> Iterator[TestCase]:
        yield from self._tests.values()

    def __getitem__(self, name: str) -> TestCase:
        """
        Attempts to fetch a test case from this test suite by its name.

        Raises:
            KeyError: if no test case with the given name belongs to this
                test suite.
        """
        return self._tests[name]

    def to_dict(self) -> Dict[str, Any]:
        return {'tests': [t.to_dict() for t in self.tests]}
