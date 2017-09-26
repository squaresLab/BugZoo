import typing
import xml.etree.ElementTree as ET
from typing import Dict, List


class FileCoverageReport(object):
    def __init__(self, fileName: str, lines: Dict[int, int]) -> None:
        self.__fileName = fileName
        self.__lines = lines


    @property
    def lines(self) -> List[int]:
        """
        A list of the lines that are included in this report.
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


class CoverageReport(object):
    """

    Attributes:
        __files (dict: str -> FileCoverageReport): a dictionary mapping the
            names of files contained within this report to their individual
            coverage reports.
    """
    @staticmethod
    def from_string(s: str) -> 'CoverageReport':
        root = ET.fromstring(s)
        return CoverageReport.from_xml(root)


    @staticmethod
    def from_xml(root: ET.Element) -> 'CoverageReport':
        reports = {}
        packages = root.find('packages')

        for package in packages.findall('package'):
            for cls in package.find('classes').findall('class'):
                fn = cls.attrib['filename']
                # normalise path
                lines = cls.find('lines').findall('line')
                lines = \
                    {int(l.attrib['number']): int(l.attrib['hits']) for l in lines}
                reports[fn] = FileCoverageReport(fn, lines)

        return CoverageReport(reports)


    def __init__(self, files: Dict[str, FileCoverageReport]) -> None:
        self.__files = files


    @property
    def files(self) -> List[str]:
        """
        A list of the names of the files that are included in this report.
        """
        return list(self.__files.keys())


    def file(self, name: str) -> FileCoverageReport:
        assert name != ""
        return self.__files[name]


    def __getitem__(self, name: str) -> FileCoverageReport:
        """
        Alias for `file`.
        """
        return self.file(name)
