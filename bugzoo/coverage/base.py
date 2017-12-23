import yaml
import xml.etree.ElementTree as ET
from copy import copy
from typing import Dict, List
from bugzoo.testing import TestCase, TestSuite


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
        assert isinstance(num, int)
        assert num > 0
        return self.__lines[num]

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
    def from_dict(d: Dict[str, Dict[int, int]]) -> 'ProjectLineCoverage':
        cov: T = {}
        for (fn, fcov) in d.items():
            cov[fn] = FileLineCoverage(fn, fcov)
        return ProjectLineCoverage(cov)

    @staticmethod
    def from_gcovr_xml_string(s: str) -> 'ProjectLineCoverage':
        """
        Loads a project line-coverage report from a string-based XML
        description.
        """
        root = ET.fromstring(s)
        reports = {}
        packages = root.find('packages')

        for package in packages.findall('package'):
            for cls in package.find('classes').findall('class'):
                fn = cls.attrib['filename']
                # normalise path
                lines = cls.find('lines').findall('line')
                lines = \
                    {int(l.attrib['number']): int(l.attrib['hits']) for l in lines}
                reports[fn] = FileLineCoverage(fn, lines)

        return ProjectLineCoverage(reports)

    def __init__(self, files: Dict[str, FileLineCoverage]) -> None:
        self.__files = files

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
        return {fn: cov.to_dict() \
                for (fn, cov) in self.__files.items()}


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
            test_coverage = ProjectLineCoverage.from_dict(test_coverage)
            coverage[test] = test_coverage
        return ProjectCoverageMap(coverage)

    @staticmethod
    def from_file(fn: str, tests: TestSuite) -> 'ProjectCoverageMap':
        with open(fn, 'r') as f:
            yml = yaml.load(f)
            return ProjectCoverageMap.from_dict(yml, tests)

    def __init__(self, contents: T):
        self.__contents = contents

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
