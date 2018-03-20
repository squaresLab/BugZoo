from typing import Dict, List, Set, Iterator, Any

import yaml

from bugzoo.testing import TestSuite, TestOutcome


class FileLine(object):
    """
    Used to represent an one-indexed line within a specific file.
    """
    @staticmethod
    def compactify(d: Dict['FileLine', Any]) -> Dict[str, Dict[int, Any]]:
        """
        Converts a dictionary that is indexed by FileLine objects into a
        nested dictionary structures that maps from file names to a dictionary
        of line numbers.
        """
        assert isinstance(d, dict)
        assert all(isinstance(x, FileLine) for x in d)

        out = {}
        for (line, val) in d.items():
            if not line.filename in out:
                out[line.filename] = {}
            out[line.filename][line.num] = val
        return out

    @staticmethod
    def decompactify(d: Dict[str, Dict[int, Any]]) -> 'Dict[FileLine, Any]':
        lines = {}
        for fn in d:
            for num in d[fn]:
                lines[FileLine(fn, num)] = d[fn][num]
        return lines

    def __init__(self, fn: str, num: int):
        self.__fn = fn
        self.__num = num

    def __hash__(self) -> int:
        return hash((self.__fn, self.__num))

    def __eq__(self, other) -> bool:
        return  isinstance(other, FileLine) and \
                self.filename == other.filename and \
                self.num == other.num

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

    def __str__(self) -> str:
        return "{}:{}".format(self.filename, self.num)

    __repr__ = __str__


class FileLineSet(object):
    T = Dict[str, Set[int]]

    @staticmethod
    def from_dict(d: Dict[str, List[int]]) -> 'FileLineSet':
        contents = {fn: frozenset(lines) for (fn, lines) in d.items()}
        return FileLineSet(contents)

    def __init__(self, contents: T):
        self.__contents = \
            {fn: set(line_nums) for (fn, line_nums) in contents.items()}

    def __iter__(self) -> Iterator[FileLine]:
        """
        Returns an iterator over the lines contained in this set.
        """
        for fn in self.__contents:
            for num in self.__contents[fn]:
                yield FileLine(fn, num)

    def __getitem__(self, fn: str) -> Iterator[FileLine]:
        """
        Returns an iterator over all lines contained in this set that belong
        to a given file.
        """
        if not fn in self.__contents:
            raise StopIteration
        for num in self.__contents[fn]:
            yield FileLine(fn, num)

    def __contains__(self, file_line: FileLine) -> bool:
        """
        Determines whether a given file-line is contained within this set.
        """
        return file_line.fn in self.__contents and \
               file_line.num in self.__contents[file_line.fn]

    def to_dict(self) -> Dict[str, List[int]]:
        """
        Returns the contents of this set as a JSON/YAML-ready dictionary.
        """
        return {fn: list(lines)
                for (fn, lines) in self.__contents.items()}


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
                 coverage: FileLineSet):
        self.__test = test
        self.__outcome = outcome
        self.__coverage = coverage

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
        return TestCoverage(test,
                            outcome,
                            self.__coverage.restricted_to_files(filenames))

    def to_dict(self) -> dict:
        return {'test': self.test,
                'outcome': self.outcome.to_dict(),
                'coverage': self.coverage.to_dict()}


class TestSuiteCoverage(object):
    """
    Holds coverage information for all tests belonging to a particular program
    version.
    """
    @staticmethod
    def from_dict(d: dict) -> 'TestSuiteCoverage':
        coverage_by_test = {}
        for test_coverage_dict in d:
            test_coverage = TestCoverage.from_dict(test_coverage_dict)
            coverage_by_test[test_coverage.test] = test_coverage
        return ProjectCoverageMap(coverage_by_test)

    @staticmethod
    def from_file(fn: str) -> 'TestSuiteCoverage':
        with open(fn, 'r') as f:
            d = yaml.load(f)
            return TestSuiteCoverage.from_dict(d)

    def __init__(self, test_coverage: Dict[str, TestCoverage]):
        self.__test_coverage = test_coverage

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
                            ) -> 'ProjectCoverageMap':
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
        return ProjectCoverageMap({t: cov \
                                   for (t, cov) in self.__test_coverage.items() \
                                   if cov.outcome.passed})

    def __len__(self) -> int:
        """
        Returns a count of the number of test executions that are included
        within this coverage report.
        """
        return len(self.__test_coverage)
