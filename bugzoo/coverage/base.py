import yaml
from copy import copy
from typing import Dict, List, Set, Iterator, Any
from bugzoo.testing import TestCase, TestSuite, TestOutcome


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

    def __init__(self, fn: str, num: int) -> None:
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


class FileLineCoverage(object):
    """
    Provides line-level coverage information for a given file.
    """
    T = Dict[int, int]

    def __init__(self, filename: str, lines: T) -> None:
        self.__filename = filename
        self.__lines = \
            {num: hits for (num, hits) in lines.items() if hits > 0}

#    @property
#    def lines(self) -> List[int]:
#        """
#        A list of the one-indexed numbers of the lines that are included in
#        this report.
#        """
#        return list(self.__lines.keys())

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

    @property
    def lines(self) -> Iterator[FileLine]:
        """
        Returns an iterator over the set of all lines within this file
        that were covered.
        """
        for num in self.__lines:
            yield FileLine(self.__filename, num)

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
        cov = {}
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
    def test(self) -> TestCase:
        """
        The test case used to generate this coverage.
        """
        return self.__test

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

    @property
    def lines(self) -> Iterator[FileLine]:
        """
        Returns an iterator over the set of all lines that were covered.
        """
        for report in self.__files.values():
            for line in report.lines:
                yield line

    def restricted_to_files(self,
                            filenames: List[str]
                            ) -> 'ProjectLineCoverage':
        """
        Returns a variant of this coverage that is restricted to a given list
        of files.
        """
        cov = {fn: c for (fn, c) in self.__files.items() \
               if fn in filenames}
        return ProjectLineCoverage(self.test, self.outcome, cov)

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
        for test in self.__contents.keys():
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

    def restricted_to_files(self,
                            filenames: List[str]
                            ) -> 'ProjectCoverageMap':
        """
        Returns a variant of this coverage that is restricted to a given list
        of files.
        """
        cov = {}
        for test in self:
            cov[test] = self[test].restricted_to_files(filenames)
        return ProjectCoverageMap(cov)

    @property
    def failing(self) -> 'ProjectCoverageMap':
        """
        Returns a variant of this coverage report that only contains coverage
        for failing test executions.
        """
        return ProjectCoverageMap({t: cov \
                                   for (t, cov) in self.__contents.items() \
                                   if not cov.outcome.passed})

    @property
    def passing(self) -> 'ProjectCoverageMap':
        """
        Returns a variant of this coverage report that only contains coverage
        for failing test executions.
        """
        return ProjectCoverageMap({t: cov \
                                   for (t, cov) in self.__contents.items() \
                                   if cov.outcome.passed})

    def __len__(self) -> 'ProjectCoverageMap':
        """
        Returns a count of the number of test executions that are included
        within this coverage report.
        """
        return len(self.__contents)
