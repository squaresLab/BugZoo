from typing import Iterator, List

from ..core.container import Container
from ..core.bug import Bug
from ..core.coverage import ProjectLineCoverage, \
                            ProjectCoverageMap, \
                            Spectra
from ..testing import TestCase, TestOutcome


class ContainerManager(object):
    def __init__(self, installation: 'BugZoo'):
        self.__installation = installation
        self.__containers = {}
        self.__logger = installation.logger.getChild('container')

    def __iter__(self) -> Iterator[Container]:
        """
        Returns an iterator over the set of running containers.
        """
        return self.__containers.values().__iter__()

    def __getitem__(self, uid: str) -> Container:
        """
        Returns the container associated with a given unique identifier.

        Raises:
            KeyError: if no container exists with the given UID.
        """
        return self.__containers[uid]

    def __delitem__(self, uid: str) -> None:
        """
        Deletes a running container with a given UID.

        Parameters:
            uid: the unique identifier of the container.

        Raises:
            KeyError: if no container was found with the given UID.
        """
        self.__logger.info("deleting container: %s", uid)
        try:
            container = self.__containers[uid]
            container.destroy()
            del self.__containers[uid]
        except KeyError:
            self.__logger.error("failed to delete container: %s [not found]", uid)
        self.__logger.info("deleted container: %s", uid)

    delete = __delitem__

    def provision(self,
                  bug: Bug,
                  uid: str = None) -> Container:
        """
        Provisions and returns a container for a given bug.

        Parameters:
            bug: the bug that should be used to provision a container.
            uid: a unique identifier (UID) for the container. If no UID is
                provided then one will be automatically generated.

        Returns:
            a descroption of the provisioned container.
        """
        c = Container(bug, uid=uid)
        self.__containers[c.id] = c
        return c

    def execute(self, container: Container, test: TestCase) -> TestOutcome:
        """
        Runs a specified test inside a given container.

        Returns:
            the outcome of the test execution.
        """
        bug = self.__installation.bugs[container.bug.name]
        cmd, context = bug.harness.command(test)
        response = container.command(cmd, context, stderr=True)
        passed = response.code == 0
        return TestOutcome(response, passed)

    def coverage(self,
                 container: Container,
                 tests: List[TestCase] = None
                 ) -> ProjectCoverageMap:
        """
        Computes line coverage information for an optionally provided list of
        tests. If no list of tests is provided, then coverage will be computed
        for all tests within the test suite associated with the program inside
        the given container.
        """
        assert container.alive # TODO port
        assert tests != []

        if tests is None:
            tests = container.bug.tests

        # fetch the extractor for this language
        # TODO: assumes a single language
        language = container.bug.languages[0]
        extractor = language.coverage_extractor
        return extractor.coverage(self, container, tests)
