__all__ = ['CoverageInstructions', 'TestCoverage', 'TestSuiteCoverage']

from typing import Dict, List, Set, Iterator, Any, Iterable, FrozenSet, Type, \
    Optional
import logging

import yaml
import attr

from .language import Language
from .fileline import FileLine, FileLineSet
from .test import TestSuite, TestOutcome
from ..util import indent
from .. import exceptions

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)

_NAME_TO_INSTRUCTIONS = {}  # type: Dict[str, Type[CoverageInstructions]]
_INSTRUCTIONS_TO_NAME = {}  # type: Dict[Type[CoverageInstructions], str]
_LANGUAGE_TO_DEFAULT_INSTRUCTIONS = \
    {}  # type: Dict[Language, Type[CoverageInstructions]]


def _convert_files_to_instrument(files: Iterable[str]) -> FrozenSet[str]:
    return frozenset(files)


class CoverageInstructions(object):
    """
    Provides instructions for computing coverage.
    """
    @classmethod
    def registered_under_name(cls) -> str:
        """
        Returns the name that was used to register this class.
        """
        return _INSTRUCTIONS_TO_NAME[cls]

    @staticmethod
    def language_default(language: Language
                         ) -> Optional[Type['CoverageInstructions']]:
        """
        Returns the default coverage instructions class for a given language,
        if such a class has been registered for that language.
        """
        return _LANGUAGE_TO_DEFAULT_INSTRUCTIONS.get(language)

    @staticmethod
    def find(name: str) -> Type['CoverageInstructions']:
        """
        Retrives the coverage instructions class registered under a given name.
        """
        return _NAME_TO_INSTRUCTIONS[name]

    @classmethod
    def register(cls, name: str) -> None:
        logger.debug("registering coverage instructions [%s] under name [%s]",
                     cls, name)
        if name in _NAME_TO_INSTRUCTIONS:
            raise exceptions.NameInUseError(name)
        if cls in _INSTRUCTIONS_TO_NAME:
            m = "coverage instructions already registered under name: {}"
            m = m.format(_INSTRUCTIONS_TO_NAME[cls])
            raise Exception(m)  # FIXME add new error class
        _NAME_TO_INSTRUCTIONS[name] = cls
        _INSTRUCTIONS_TO_NAME[cls] = name
        logger.debug("registered coverage instructions [%s] under name [%s]",
                     cls, name)

    @classmethod
    def register_as_default(cls, language: Language) -> None:
        logger.debug("registering coverage instructions [%s] as default for %s",  # noqa: pycodestyle
                     cls, language)

        if language in _LANGUAGE_TO_DEFAULT_INSTRUCTIONS:
            m = "language [{}] already has a default coverage instructions: {}"
            m = m.format(language.name,
                         _LANGUAGE_TO_DEFAULT_INSTRUCTIONS[language])
            raise Exception(m)

        if cls not in _INSTRUCTIONS_TO_NAME:
            m = "coverage instructions [{}] have not been registered"
            m = m.format(cls)
            raise Exception(m)
        name = _INSTRUCTIONS_TO_NAME[cls]

        _LANGUAGE_TO_DEFAULT_INSTRUCTIONS[language] = cls
        logger.debug("registered coverage instructions [%s] as default for %s",
                     name, language)

    @staticmethod
    def from_dict(d: Dict[str, Any]) -> 'CoverageInstructions':
        """
        Loads a set of coverage instructions from a given dictionary.

        Raises:
            BadCoverageInstructions: if the given coverage instructions are
                illegal.
        """
        name_type = d['type']
        cls = _NAME_TO_INSTRUCTIONS[name_type]
        return cls.from_dict(d)

    def to_dict(self) -> Dict[str, Any]:
        raise NotImplementedError


class TestCoverage(object):
    """
    Provides complete line coverage information for all files and across all
    tests within a given project.
    """
    @staticmethod
    def from_dict(d: dict) -> 'TestCoverage':
        """

        Example Input:

            {
                "test": "p1",
                "outcome": {

                },
                "coverage": {
                    "foo.c": [1, 2, 6, 10]
                }
            }
        """
        assert 'test' in d
        assert 'outcome' in d
        assert 'coverage' in d

        test = d['test']
        outcome = TestOutcome.from_dict(d['outcome'])
        coverage = FileLineSet.from_dict(d['coverage'])
        return TestCoverage(test, outcome, coverage)

    def __init__(self,
                 test: str,
                 outcome: TestOutcome,
                 coverage: FileLineSet
                 ) -> None:
        self.__test = test
        self.__outcome = outcome
        self.__coverage = coverage

    def __repr__(self) -> str:
        coverage = repr(self.__coverage)
        coverage = indent(coverage, 2)
        status = 'PASSED' if self.__outcome.passed else 'FAILED'
        s = "[{}: {}]\n{}".format(self.__test, status, coverage)
        return s

    def __contains__(self, fileline: FileLine) -> bool:
        return fileline in self.__coverage

    @property
    def test(self) -> str:
        """
        The name of the test case used to generate this coverage.
        """
        return self.__test

    @property
    def outcome(self) -> TestOutcome:
        """
        The outcome of the test associated with this coverage.
        """
        return self.__outcome

    @property
    def lines(self) -> FileLineSet:
        """
        The set of file-lines that were covered.
        """
        return self.__coverage

    coverage = lines

    def restricted_to_files(self, filenames: List[str]) -> 'TestCoverage':
        """
        Returns a variant of this coverage that is restricted to a given list
        of files.
        """
        return TestCoverage(self.__test,
                            self.__outcome,
                            self.__coverage.restricted_to_files(filenames))

    def to_dict(self) -> dict:
        return {'test': self.__test,
                'outcome': self.__outcome.to_dict(),
                'coverage': self.__coverage.to_dict()}


class TestSuiteCoverage(object):
    """
    Holds coverage information for all tests belonging to a particular program
    version.
    """
    @staticmethod
    def from_dict(d: dict) -> 'TestSuiteCoverage':
        coverage_by_test = {}
        for test_coverage_dict in d.values():
            test_coverage = TestCoverage.from_dict(test_coverage_dict)
            coverage_by_test[test_coverage.test] = test_coverage
        return TestSuiteCoverage(coverage_by_test)

    @staticmethod
    def from_file(fn: str) -> 'TestSuiteCoverage':
        with open(fn, 'r') as f:
            d = yaml.load(f)
            return TestSuiteCoverage.from_dict(d)

    def __init__(self, test_coverage: Dict[str, TestCoverage]) -> None:
        self.__test_coverage = test_coverage

    def __repr__(self) -> str:
        output = [repr(self[name_test]) for name_test in self]
        return '\n'.join(output)

    def covering_tests(self, line: FileLine) -> Set[str]:
        """
        Returns the names of all test cases that cover a given line.
        """
        return set(test for (test, cov) in self.__test_coverage.items() \
                   if line in cov)

    def __iter__(self) -> Iterator[str]:
        """
        Returns an iterator over the names of the test cases that are
        represented by this coverage report.
        """
        return self.__test_coverage.keys().__iter__()

    def __getitem__(self, name: str) -> TestCoverage:
        """
        Retrieves coverage information for a given test case.

        Parameters:
            name: the name of the test case.

        Raises:
            KeyError: if there is no coverage information for the given test
                case.
        """
        return self.__test_coverage[name]

    def __contains__(self, name: str) -> bool:
        """
        Determines whether this report contains coverage information for a given
        test case.
        """
        return name in self.__test_coverage

    def to_dict(self) -> dict:
        return {test: cov.to_dict() \
                for (test, cov) in self.__test_coverage.items()}

    def restricted_to_files(self,
                            filenames: List[str]
                            ) -> 'TestSuiteCoverage':
        """
        Returns a variant of this coverage that is restricted to a given list
        of files.
        """
        cov_suite = {}
        for test in self:
            cov_suite[test] = self[test].restricted_to_files(filenames)
        return TestSuiteCoverage(cov_suite)

    @property
    def failing(self) -> 'TestSuiteCoverage':
        """
        Returns a variant of this coverage report that only contains coverage
        for failing test executions.
        """
        return TestSuiteCoverage({t: cov \
                                  for (t, cov) in self.__test_coverage.items() \
                                  if not cov.outcome.passed})

    @property
    def passing(self) -> 'TestSuiteCoverage':
        """
        Returns a variant of this coverage report that only contains coverage
        for failing test executions.
        """
        return TestSuiteCoverage({t: cov \
                                  for (t, cov) in self.__test_coverage.items() \
                                  if cov.outcome.passed})

    def __len__(self) -> int:
        """
        Returns a count of the number of test executions that are included
        within this coverage report.
        """
        return len(self.__test_coverage)

    @property
    def lines(self) -> FileLineSet:
        """
        Returns the set of all file lines that were covered.
        """
        assert len(self) > 0
        output = FileLineSet()
        for coverage in self.__test_coverage.values():
            output = output.union(coverage.lines)
        return output
