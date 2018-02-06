import xml.etree.ElementTree as ET
from typing import List, Dict
from bugzoo.testing import TestCase
from bugzoo.coverage.base import ProjectLineCoverage, \
                                 ProjectCoverageMap, \
                                 FileLineCoverage


class CoverageExtractor(object):
    """
    Coverage extractors are responsible for obtaining coverage information
    for a given program within a container. It is the responsibilty of the
    extractor to account for the language used by the program being studied.
    """
    def _prepare(self,
                container: 'Container'
                ) -> None:
        """
        Prepares a given container such that it is able to
        """
        raise NotImplementedError

    def _extract(self,
                container: 'Container'
                ) -> ProjectLineCoverage:
        """
        Extracts coverage information from the relevant coverage files within
        a given container.
        """
        raise NotImplementedError

    def coverage(self,
                 container: 'Container',
                 tests: List[TestCase]
                 ) -> ProjectCoverageMap:
        """
        Uses a provided container to compute line coverage information for a
        given list of tests.
        """
        assert tests != []

        cov = {}

        self._prepare(container)

        for test in tests:
            print("generating coverage: {}".format(test))
            outcome = container.execute(test)
            file_reports = self._extract(container)
            cov[test] = ProjectLineCoverage(test, outcome, file_reports)

        # TODO: cleanup?
        return ProjectCoverageMap(cov)


class CCoverageExtractor(CoverageExtractor):
    """
    Responsible for collecting coverage information from programs written in C
    and C++.
    """
    def _prepare(self,
                 container: 'Container'
                 ) -> None:
        """
        Recompiles the program within the container using the appropriate
        GCC options, and also ensures that 'gcovr' is installed inside the
        container.
        """
        # ensure that gcovr is mounted within the container
        # TODO: mount binaries
        container.command('sudo apt-get update && sudo apt-get install -y gcovr')

        outcome = container.compile_with_instrumentation()
        if not outcome.successful:
            msg = "failed to generate coverage for container ({}) due to compilation failure.".format(container.id)
            raise Exception(msg)

    def _extract(self,
                 container: 'Container'
                 ) -> Dict[str, FileLineCoverage]:
        """
        Uses gcovr to extract coverage information for all of the C/C++ source
        code files within the project. Destroys '.gcda' files upon computing
        coverage.
        """
        response = container.command('gcovr -x -d -r .',
                                     context=container.bug.source_dir)
        assert response.code == 0
        response = response.output #.decode('utf-8')

        # parse XML to Python data structures
        return self.__from_gcovr_xml_string(response)

    def __from_gcovr_xml_string(self,
                                s: str
                                ) -> Dict[str, FileLineCoverage]:
        """
        Prases a project line-coverage report from a string-based XML
        description produced by 'gcovr'.
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

        return reports
