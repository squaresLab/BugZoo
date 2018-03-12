from typing import Iterator, List
import subprocess
import ipaddress

import docker

from ..core.patch import Patch
from ..core.container import Container
from ..core.bug import Bug
from ..core.coverage import ProjectLineCoverage, \
                            ProjectCoverageMap, \
                            Spectra
from ..compiler import CompilationOutcome
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

    def ip_address(self,
                   container: Container,
                   raise_error: bool = False
                   ) -> Optional[Union[IPv4Address, IPv6Address]]:
        """
        The IP address used by a given container, or None if no IP address has
        been assigned to that container.
        """
         # TODO: refactor!
        api_client = docker.APIClient(base_url='unix://var/run/docker.sock')
        docker_info = api_client.inspect_container(container.id)
        address = docker_info['NetworkSettings']['IPAddress']
        try:
            return IPv4Address(address)
        except ipaddress.AddressValueError:
            try:
                return IPv6Address(address)
            except ipaddress.AddressValueError:
                if raise_error:
                    raise
                return None

    def patch(self, container: Container, p: Patch) -> bool:
        """
        Attempts to apply a given patch to the source code for a program inside
        a given container. All patch applications are guaranteed to be atomic;
        if the patch fails to apply, no changes will be made to the relevant
        source code files.

        Returns true if the patch application was successful, and false if
        the attempt was unsuccessful.
        """
        assert isinstance(p, Patch)
        file_container = None
        bug = container.bug # TODO migrate

        try:
            file_host = NamedTemporaryFile(mode='w', suffix='bugzoo')
            file_host.write(str(p))
            file_host.flush()

            # copy contents to a temporary file on the container
            file_container = \
                container.exec_run('mktemp').decode(sys.stdout.encoding).strip()
            container.copy_to(file_host.name, file_container)

            # run patch command inside the source directory
            # cmd = 'patch --no-backup-if-mismatch -p0 -u -i "{}"'.format(container_file, stderr=True)
            cmd = 'git apply -p0 "{}"'.format(file_container)
            outcome = container.command(cmd, context=bug.source_dir)
            return outcome.code == 0

        finally:
            if file_container:
                container.exec_run('rm "{}"'.format(file_container))

    def interact(self, container: Container) -> None:
        """
        Connects to the PTY (pseudo-TTY) for a given container.
        Blocks until the user exits the PTY.
        """
        subprocess.call(['docker', 'attach', container.id])

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

    def compile(self,
                container: Container,
                verbose: bool = False
                ) -> CompilationOutcome:
        """
        Attempts to compile the program inside a given container.

        Params:
            verbose: specifies whether to print the stdout and stderr produced
                by the compilation command to the stdout. If `True`, then the
                stdout and stderr will be printed.

        Returns:
            a summary of the outcome of the compilation attempt.
        """
        # TODO use container name
        bug = container.bug # self.__installation.bugs[container.bug]
        return bug.compiler.compile(container, verbose=verbose)

    def compile_with_instrumentation(self,
                                     container: Container,
                                     verbose: bool = False
                                     ) -> CompilationOutcome:
        """
        Attempts to compile the program inside a given container with
        instrumentation enabled.

        See: `Container.compile`
        """
        bug = self.__installation.bugs[container.bug]
        return bug.compiler.compile_with_coverage_instrumentation(container,
                                                                  verbose=verbose)
