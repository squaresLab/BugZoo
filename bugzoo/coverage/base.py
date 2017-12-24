import yaml
from copy import copy
from typing import Dict, List, Set, Iterator
from bugzoo.testing import TestCase, TestSuite, TestOutcome


class FileLine(object):
    """
    Used to represent an one-indexed line within a specific file.
    """
    def __init__(self, fn: str, num: int) -> None:
        self.__fn = fn
        self.__num = num

    @property
    def filename(self) -> str:
        """
        The name of the file to which this line belongs.
        """
        return self.__fn

    fn = filename

    @property
    def num(self) -> int:
        """
        The one-indexed number of this line.
        """
        return self.__num


class FileLineCoverage(object):
    """
    Provides line-level coverage information for a given file.
    """
    T = Dict[int, int]

    def __init__(self, filename: str, lines: T) -> None:
        self.__filename = filename
        self.__lines = \
            {num: hits for (num, hits) in lines.items() if hits > 0}

    @property
    def lines(self) -> List[int]:
        """
        A list of the one-indexed numbers of the lines that are included in
        this report.
        """
        return list(self.__lines.keys())

    def was_hit(self, num: int) -> bool:
        """
        Determines whether a line with a given number was executed at least
        once during the execution(s).
        """
        return self.hits(num) > 0

    def hits(self, num: int) -> int:
        """
        Returns the number of times that a line with a given number was
        executed.
        """
        assert num > 0
        return self.__lines[num] if num in self.__lines else 0

    __getitem__ = hits

    def to_dict(self) -> dict:
        return copy(self.__lines)


class ProjectLineCoverage(object):
    """
    Provides complete line coverage information for all files and across all
    tests within a given project.
    """
    T = Dict[str, FileLineCoverage.T]

    @staticmethod
    def from_dict(test: TestCase,
                  d: dict,
                  ) -> 'ProjectLineCoverage':
        cov: T = {}
        outcome = TestOutcome.from_dict(d['outcome'])
        for (fn, fcov) in d['coverage'].items():
            cov[fn] = FileLineCoverage(fn, fcov)
        return ProjectLineCoverage(test, outcome, cov)

    def __init__(self,
                 test: TestCase,
                 outcome: TestOutcome,
                 files: Dict[str, FileLineCoverage]) -> None:
        self.__test = test
        self.__outcome = outcome
        self.__files = files

    def covers(self, line: FileLine) -> bool:
        """
        Returns `True` if given line was covered, or `False` if not.
        """
        if not line.filename in self.__files:
            return False

        f = self[line.filename]
        return f.was_hit(line.num)

    @property
    def outcome(self) -> TestOutcome:
        """
        The outcome of the test associated with this coverage.
        """
        return self.__outcome

    @property
    def files(self) -> List[str]:
        """
        A list of the names of the files that are included in this report.
        """
        return list(self.__files.keys())

    def file(self, name: str) -> FileLineCoverage:
        """
        Returns the coverage information for a given file within the project
        associated with this report.
        """
        assert name != ""
        return self.__files[name]

    __getitem__ = file

    def to_dict(self) -> dict:
        f_dict = {fn: cov.to_dict() for (fn, cov) in self.__files.items()}
        return {'coverage': f_dict,
                'outcome': self.outcome.to_dict()}


class ProjectCoverageMap(object):
    """
    Holds coverage information for all tests belonging to a particular program
    version.
    """
    T = Dict[TestCase, ProjectLineCoverage.T]

    @staticmethod
    def from_dict(d: T, tests) -> 'ProjectCoverageMap':
        coverage = {}
        for (test_name, test_coverage) in d.items():
            test = tests[test_name]
            test_coverage = ProjectLineCoverage.from_dict(test, test_coverage)
            coverage[test] = test_coverage
        return ProjectCoverageMap(coverage)

    @staticmethod
    def from_file(fn: str, tests: TestSuite) -> 'ProjectCoverageMap':
        with open(fn, 'r') as f:
            yml = yaml.load(f)
            return ProjectCoverageMap.from_dict(yml, tests)

    def __init__(self, contents: T):
        self.__contents = contents

    def covering_tests(self, line: FileLine) -> Set[TestCase]:
        """
        Returns the set of test cases that cover a given line.
        """
        return set(test for (test, cov) in self.__contents.items() \
                   if cov.covers(line))

    def __iter__(self) -> Iterator[TestCase]:
        """
        Returns an iterator over the test cases within this test suite.
        """
        for test in self.__contents.values():
            yield test

    def __getitem__(self, test: TestCase) -> ProjectLineCoverage:
        """
        Retrieves coverage information for a given test case.

        Raises:
            KeyError: if there is no coverage information for the given test
                case.
        """
        return self.__contents[test]

    def __contains__(self, test: TestCase) -> bool:
        """
        Determines whether this map contains coverage information for a given
        test case.
        """
        return test in self.__contents

    def to_dict(self) -> dict:
        return {test.name: cov.to_dict() \
                for (test, cov) in self.__contents.items()}

    def failing(self) -> 'ProjectCoverageMap':
        """
        Returns a variant of this coverage report that only contains coverage
        for failing test executions.
        """
        return ProjectCoverageMap(tcov for tcov in self \
                                  if not tcov.outcome.passed)

    def passing(self) -> 'ProjectCoverageMap':
        """
        Returns a variant of this coverage report that only contains coverage
        for failing test executions.
        """
        return ProjectCoverageMap(tcov for tcov in self \
                                  if tcov.outcome.passed)

    def __len__(self) -> 'ProjectCoverageMap':
        """
        Returns a count of the number of test executions that are included
        within this coverage report.
        """
        return len(self.__contents)
