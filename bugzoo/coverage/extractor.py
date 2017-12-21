from bugzoo.container import Container
from bugzoo.coverage.base import ProjectLineCoverage


class CoverageExtractor(object):
    """
    Coverage extractors are responsible for obtaining coverage information
    for a given program within a container. It is the responsibilty of the
    extractor to account for the language used by the program being studied.
    """
    def _prepare(self,
                container: Container
                ) -> None:
        """
        Prepares a given container such that it is able to
        """
        raise NotImplementedError

    def _extract(self,
                container: Container
                ) -> ProjectLineCoverage:
        """
        Extracts coverage information from the relevant coverage files within
        a given container.
        """
        raise NotImplementedError

    def collect(self,
                container: Container,
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
    @override
    def _prepare(self,
                 container: Container
                 ) -> None:
        # ensure that gcovr is mounted within the container
        # TODO: mount binaries
        container.command('sudo apt-get update && sudo apt-get install -y gcovr')

        # ensure any preexisting coverage files within this container are purged
        # TODO

        options = {
            "CFLAGS": "CFLAGS='-fprofile-arcs -ftest-coverage -fPIC'"
        }

        outcome = container.compile(options=options)
        if not outcome.passed:
            msg = "failed to generate coverage for container ({}) due to compilation failure.".format(container.id)
            raise Exception(msg)

    @override
    def _extract(self,
                 container: Container
                 ) -> ProjectLineCoverage:
        pass
