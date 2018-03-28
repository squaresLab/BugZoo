from typing import Iterator, Optional, List
import os

import docker
import textwrap
import yaml

import bugzoo.testing
from ..core.coverage import TestSuiteCoverage
from ..core.bug import Bug
from ..core.spectra import Spectra
from ..util import print_task_start, print_task_end


class BugManager(object):
    """
    Used to access and manage all bugs registered with a local BugZoo
    installation.
    """
    def __init__(self,
                 installation: 'BugZoo'):
        self.__installation = installation
        self.__bugs = {}

    def __getitem__(self, name: str) -> Bug:
        """
        Attempts to fetch the description of a named bug.

        Parameters:
            name: the name of the bug.

        Returns:
            a description of the bug.

        Raises:
            KeyError: if no bug is found with the given name.
        """
        return self.__bugs[name]

    def __iter__(self) -> Iterator[Bug]:
        """
        Returns an iterator over the bugs that are registered with this server.
        """
        return self.__bugs.values().__iter__()

    def register(self, bug: Bug) -> None:
        """
        Attempts to register a given bug with this manager.
        """
        self.__bugs[bug.name] = bug

    add = register

    def deregister(self, bug: Bug) -> None:
        """
        Attempts to deregister a given bug from this manager.
        """
        del self.__bugs[bug.name]

    remove = deregister

    def is_installed(self, bug: Bug) -> bool:
        """
        Determines whether or not the Docker image for a given bug has been
        installed onto this server.

        See: `BuildManager.is_installed`
        """
        return self.__installation.build.is_installed(bug.image)

    def build(self,
              bug: Bug,
              force: bool = False,
              quiet: bool = False
              ) -> None:
        """
        Builds the Docker image associated with a given bug.

        See: `BuildManager.build`
        """
        self.__installation.build.build(bug.image,
                                        force=force,
                                        quiet=quiet)

    def uninstall(self,
                  bug: Bug,
                  force: bool = False,
                  noprune: bool = False
                  ) -> None:
        """
        Uninstalls all Docker images associated with this bug.

        See: `BuildManager.uninstall`
        """
        self.__installation.build.uninstall(bug.image,
                                            force=force,
                                            noprune=noprune)

    def download(self,
                 bug: Bug,
                 force=False) -> bool:
        """
        Attempts to download the Docker image for a given bug from
        `DockerHub <https://hub.docker.com>`_. If the force parameter is set to
        True, any existing image will be overwritten.

        Returns:
            `True` if successfully downloaded, else `False`.
        """
        return self.__installation.build.download(bug.image,
                                                  force=force)

    def upload(self, bug: Bug) -> bool:
        """
        Attempts to upload the Docker image for a given bug to
        `DockerHub <https://hub.docker.com>`_.
        """
        return self.__installation.build.upload(bug.image)

    def validate(self, bug: Bug, verbose: bool = True) -> bool:
        """
        Checks that a given bug successfully builds, and that it produces an
        expected set of test suite outcomes.

        Parameters:
            verbose: toggles verbosity of output. If set to `True`, the
                outcomes of each test will be printed to the standard output.

        Returns:
            `True` if bug behaves as expected, else `False`.
        """
        # attempt to rebuild -- don't worry, Docker's layer caching prevents us
        # from actually having to rebuild everything from scratch :-)
        try:
            self.build(bug, force=True, quiet=True)
        except docker.errors.BuildError:
            print("failed to build bug: {}".format(self.identifier))
            return False

        # provision a container
        validated = True
        try:
            c = None
            c = self.__installation.containers.provision(bug)

            # ensure we can compile the bug
            # TODO: check compilation status!
            print_task_start('Compiling')
            self.__installation.containers.compile(c)
            print_task_end('Compiling', 'OK')

            if isinstance(bug.harness, bugzoo.testing.GenProgTestSuite):

                for t in bug.harness.passing:
                    task = 'Running test: {}'.format(t.identifier)
                    print_task_start(task)

                    outcome = \
                        self.__installation.containers.execute(c, t, verbose=verbose)
                    if not outcome.passed:
                        validated = False
                        print_task_end(task, 'UNEXPECTED: FAIL')
                        response = textwrap.indent(outcome.response.output, ' ' * 4)
                        print('\n' + response)
                    else:
                        print_task_end(task, 'OK')

                for t in bug.harness.failing:
                    task = 'Running test: {}'.format(t.identifier)
                    print_task_start(task)

                    outcome = \
                        self.__installation.containers.execute(c, t, verbose=verbose)
                    if outcome.passed:
                        validated = False
                        print_task_end(task, 'UNEXPECTED: PASS')
                        response = textwrap.indent(outcome.response.output, ' ' * 4)
                        print('\n' + response)
                    else:
                        print_task_end(task, 'OK')

        # ensure that the container is destroyed!
        finally:
            if c:
                del self.__installation.containers[c.uid]

        return validated

    def coverage(self, bug: Bug) -> TestSuiteCoverage:
        """
        Provides coverage information for each test within the test suite
        for the program associated with this bug.

        Parameters:
            bug: the bug for which to compute coverage.

        Returns:
            a test suite coverage report for the given bug.
        """
        # determine the location of the coverage map on disk
        fn = os.path.join(self.__installation.coverage_path,
                          "{}.coverage.yml".format(bug.name))

        # is the coverage already cached? if so, load.
        if os.path.exists(fn):
            return TestSuiteCoverage.from_file(fn)

        # if we don't have coverage information, compute it
        try:
            mgr_ctr = self.__installation.containers
            mgr_cov = self.__installation.coverage
            container = None
            container = mgr_ctr.provision(bug)
            coverage = mgr_cov.coverage(container, bug.tests)

            # save to disk
            with open(fn, 'w') as f:
                yaml.dump(coverage.to_dict(), f, default_flow_style=False)
        finally:
            if container:
                del mgr_ctr[container.id]

        return coverage

    def spectra(self, bug: Bug) -> Spectra:
        """
        Computes and returns the fault spectra for a given bug.
        """
        return Spectra.from_coverage(self.coverage)
