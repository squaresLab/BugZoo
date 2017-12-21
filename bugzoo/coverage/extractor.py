from bugzoo.testing import TestCase
from bugzoo.coverage.base import ProjectLineCoverage


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

    def collect(self,
                container: 'Container',
                test: TestCase
                ) -> ProjectLineCoverage:
        """
        Uses this coverage extractor to compute line coverage information for
        a given test.
        """
        self._prepare(container)
        container.execute(test)
        return self._extract(container)


class CCoverageExtractor(object):
    """
    Responsible for collecting coverage information from programs written in C
    and C++.
    """
    def _prepare(self,
                 container: 'Container'
                 ) -> None:
        """
        Recompiles the program within the container using the appropriate
        GCC options, and also ensures that 'gcov' is installed inside the
        container.
        """
        # ensure that gcovr is mounted within the container
        # TODO: mount binaries
        container.command('sudo apt-get update && sudo apt-get install -y gcovr')

        # ensure any preexisting coverage files within this container are purged
        # TODO: not a priority
        options = {
            "CFLAGS": "CFLAGS='-fprofile-arcs -ftest-coverage -fPIC'"
        }

        outcome = container.compile(options=options)
        if not outcome.passed:
            msg = "failed to generate coverage for container ({}) due to compilation failure.".format(container.id)
            raise Exception(msg)

    def _extract(self,
                 container: 'Container'
                 ) -> ProjectLineCoverage:
        """
        Uses gcovr to extract coverage information for all of the C/C++ source
        code files within the project. Destroys '.gcda' files upon computing
        coverage.
        """
        response = container.command('gcovr -x -d -r .',
                                     context=container.bug.source_dir)
        assert response.code == 0
        response = response.output.decode('utf-8')

        # parse XML to Python data structures
        return ProjectLineCoverage.from_gcovr_xml(response)
