from typing import Iterator, Optional
import logging

from .api import APIClient
from ..compiler import CompilationOutcome
from ..core.patch import Patch
from ..core.bug import Bug
from ..core.container import Container
from ..core.coverage import TestSuiteCoverage
from ..testing import TestCase, TestOutcome
from ..cmd import ExecResponse
from ..exceptions import BugZooException

logger = logging.getLogger(__name__)  # type: logging.Logger

__all__ = ['ContainerManager']


class ContainerManager(object):
    def __init__(self, api: APIClient) -> None:
        self.__api = api

    def __getitem__(self, uid: str) -> Container:
        """
        Fetches a container by its ID.

        Parameters:
            uid: the ID of the container.

        Returns:
            the container with the given ID.

        Raises:
            KeyError: if no container is found with the given ID.
        """
        r = self.__api.get('containers/{}'.format(uid))

        if r.status_code == 200:
            return Container.from_dict(r.json())

        if r.status_code == 404:
            raise KeyError("no container found with given UID: {}".format(uid))

        self.__api.handle_erroneous_response(r)

    def __delitem__(self, uid: str) -> None:
        """
        Deletes a given container.

        Parameters:
            uid: the ID of the container.

        Raises:
            KeyError: if no container is found with the given ID, or the
                container has already been destroyed.
        """
        r = self.__api.delete('containers/{}'.format(uid))

        if r.status_code == 204:
            return

        if r.status_code == 404:
            raise KeyError("no container found with given UID: {}".format(uid))

        self.__api.handle_erroneous_response(r)

    def __contains__(self, uid: str) -> bool:
        """
        Checks whether a container with a given ID exists.

        Parameter:
            uid:    the ID of the container.

        Returns:
            True if the container exists; false if not.
        """
        try:
            self[uid]
            return True
        except KeyError:
            return False

    def __iter__(self) -> Iterator[str]:
        """
        Returns an iterator over the identifiers of all of the containers that
        are currently running on the server.
        """
        r = self.__api.get('containers')

        if r.status_code == 200:
            ids = r.json()
            assert isinstance(ids , list)
            assert all(isinstance(n, str) for n in ids)
            return ids.__iter__()

        self.__api.handle_erroneous_response(r)

    def provision(self, bug: Bug) -> Container:
        logger.info("provisioning container for bug: %s", bug.name)
        r = self.__api.post('bugs/{}/provision'.format(bug.name))

        if r.status_code == 200:
            container = Container.from_dict(r.json())
            logger.info("provisioned container (id: %s) for bug: %s",
                               container.uid,
                               bug.name)
            return container

        if r.status_code == 404:
            raise KeyError("no bug registered with given name: {}".format(bug.name))

        self.__api.handle_erroneous_response(r)

    def is_alive(self, container: Container) -> bool:
        """
        Determines whether or not a given container is still alive.
        """
        uid = container.uid
        r = self.__api.get('containers/{}/alive'.format(uid))

        if r.status_code == 200:
            return r.json()

        if r.status_code == 404:
            raise KeyError("no container found with given UID: {}".format(uid))

        self.__api.handle_erroneous_response(r)

    def compile(self,
                container: Container,
                verbose: bool = False
                ) -> CompilationOutcome:
        """
        Attempts to compile the program inside a given container.

        Params:
            container: the container whose program should be compiled.
            verbose: specifies whether to print the stdout and stderr produced
                by the compilation command to the stdout. If `True`, then the
                stdout and stderr will be printed.

        Returns:
            a summary of the outcome of the attempted compilation.

        Raises:
            KeyError: if the container no longer exists.
        """
        path = "containers/{}/build".format(container.uid)
        params = {}
        if verbose:
            params['verbose'] = 'yes'
        r = self.__api.post(path, params=params)
        if r.status_code == 200:
            return CompilationOutcome.from_dict(r.json())
        self.__api.handle_erroneous_response(r)

    build = compile

    def test(self,
             container: Container,
             test: TestCase
             ) -> TestOutcome:
        """
        Executes a given test inside a container.

        Parameters:
            container: the container in which the test should be conducted.
            test: the test that should be executed.

        Returns:
            a summary of the outcome of the test execution.

        Raises:
            KeyError: if the container no longer exists, or the given test
                doesn't exist.
        """
        path = "containers/{}/test/{}".format(container.uid, test.name)
        r = self.__api.post(path)

        if r.status_code == 200:
            return TestOutcome.from_dict(r.json())
        self.__api.handle_erroneous_response(r)

    def coverage(self,
                 container: Container
                 ) -> TestSuiteCoverage:
        uid = container.uid
        logger.info("Fetching coverage information for container: %s",
                    uid)
        r = self.__api.post('containers/{}/coverage'.format(uid))
        if r.status_code == 200:
            jsn = r.json()
            coverage = TestSuiteCoverage.from_dict(jsn)  # type: ignore
            logger.info("Fetched coverage information for container: %s",
                        uid)
            return coverage
        try:
            self.__api.handle_erroneous_response(r)
        except BugZooException as err:
            logger.exception("Failed to fetch coverage information for container %s: %s", uid, err.message)  # noqa: pycodestyle
            raise
        except Exception as err:
            logger.exception("Failed to fetch coverage information for container %s due to unexpected failure: %s", uid, err)  # noqa: pycodestyle
            raise

    def exec(self,
             container: Container,
             command: str,
             context: Optional[str] = None,
             stdout: bool = True,
             stderr: bool = False,
             time_limit: Optional[int] = None
             ) -> ExecResponse:
        """
        Executes a given command inside a provided container.

        Parameters:
            container: the container to which the command should be issued.
            command: the command that should be executed.
            context: the working directory that should be used to perform the
                execution. If no context is provided, then the command will be
                executed at the root of the container.
            stdout: specifies whether or not output to the stdout should be
                included in the execution summary.
            stderr: specifies whether or not output to the stderr should be
                included in the execution summary.
            time_limit: an optional time limit that is applied to the
                execution. If the command fails to execute within the time
                limit, the command will be aborted and treated as a failure.

        Returns:
            a summary of the outcome of the execution.

        Raises:
            KeyError: if the container no longer exists on the server.
        """
        # FIXME perhaps these should be encoded as path variables?
        payload = {
            'command': command,
            'context': context,
            'stdout': stdout,
            'stderr': stderr,
            'time-limit': time_limit
        }
        path = "containers/{}/exec".format(container.uid)
        r = self.__api.post(path, json=payload)

        if r.status_code == 200:
            return ExecResponse.from_dict(r.json())
        if r.status_code == 404:
            raise KeyError("no container found with given UID: {}".format(container.uid))

        self.__api.handle_erroneous_response(r)

    command = exec

    def patch(self, container: Container, patch: Patch) -> bool:
        """
        Attempts to apply a given patch to the source code for a program inside
        a given container. All patch applications are guaranteed to be atomic;
        if the patch fails to apply, no changes will be made to the relevant
        source code files.

        Returns:
            true if patch application was successful, and false if the attempt
            was unsuccessful.
        """
        path = "containers/{}".format(container.uid)
        payload = str(patch)
        r = self.__api.patch(path, payload)

        return r.status_code == 204

    def persist(self, container: Container, image_name: str) -> None:
        """
        Persists the state of a given container as a Docker image on the
        server.

        Parameters:
            container: the container that should be persisted.
            image_name: the name of the Docker image that should be created.

        Raises:
            ContainerNotFound: if the given container does not exist on the
                server.
            ImageAlreadyExists: if the given image name is already in use by
                another Docker image on the server.
        """
        path = "containers/{}/persist/{}".format(container.uid, image_name)
        r = self.__api.put(path)
        if r.status_code != 204:
            self.__api.handle_erroneous_response(r)
