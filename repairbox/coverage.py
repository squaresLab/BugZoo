from typing import Dict
import xml.etree.ElementTree as ET


class FileCoverageReport(object):
    def __init__(self, fileName, lines):
        self.__fileName = fileName
        self.__lines = lines
        print(lines)


    def was_hit(self, lineNo):
        """
        Determines whether a line with a given number was executed at least
        once during the execution(s).
        """
        return self.hits(lineNo) > 0


    def hits(self, lineNo):
        """
        Returns the number of times that a line with a given number was
        executed.
        """
        assert isinstance(lineNo, int)
        assert lineNo > 0
        return self.__lines[lineNo]


    def __getitem__(self, lineNo):
        """
        Alias for `hits`
        """
        return self.hits(lineNo)


class CoverageReport(object):
    """

    Attributes:
        __files (dict: str -> FileCoverageReport): a dictionary mapping the
            names of files contained within this report to their individual
            coverage reports.
    """
    @staticmethod
    def from_string(s) -> 'CoverageReport':
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


    def file(self, name: str) -> FileCoverageReport:
        assert name != ""
        return self.__files[name]


    def __getitem__(self, name: str) -> FileCoverageReport:
        """
        Alias for `file`.
        """
        return self.file(name)
