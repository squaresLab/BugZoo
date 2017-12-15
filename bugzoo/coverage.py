import xml.etree.ElementTree as ET
from typing import Dict, List


class FileLineCoverage(object):
    """
    Provides line-level coverage information for a given file.
    """
    def __init__(self, filename: str, lines: Dict[int, int]) -> None:
        self.__filename = filename
        self.__lines = lines


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


    def __getitem__(self, num: int) -> int:
        """
        Alias for `hits`
        """
        return self.hits(num)


class ProjectLineCoverage(object):
    """
    Provides complete line coverage information for all files and across all
    tests within a given project.
    """

    @staticmethod
    def from_string(s: str) -> 'ProjectLineCoverage':
        """
        Loads a project line-coverage report from a string-based XML
        description.
        """
        root = ET.fromstring(s)
        return ProjectLineCoverage.from_xml(root)


    @staticmethod
    def from_xml(root: ET.Element) -> 'ProjectLineCoverage':
        """
        Transforms an XML tree, produced by gcovr, into a project
        line-coverage report.
        """
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


    def __getitem__(self, filename: str) -> FileLineCoverage:
        """
        Alias for `file`.
        """
        return self.file(filename)
