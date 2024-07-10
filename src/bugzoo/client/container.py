import logging
from collections.abc import Iterator
from ipaddress import IPv4Address, IPv6Address
from typing import Optional, Union

from .. import exceptions
from ..cmd import ExecResponse
from ..compiler import CompilationOutcome
from ..core.bug import Bug
from ..core.container import Container
from ..core.coverage import TestSuiteCoverage
from ..core.fileline import FileLineSet
from ..core.patch import Patch
from ..core.test import TestCase, TestOutcome
from ..core.tool import Tool
from .api import APIClient

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)

__all__ = ("ContainerManager",)


class ContainerManager:
    def __init__(self, api: APIClient) -> None:
        self.__api = api

    def __getitem__(self, uid: str) -> Container:
        """Fetches a container by its ID.

        Parameters
        ----------
            uid: the ID of the container.

        Returns
        -------
            the container with the given ID.

        Raises
        ------
            KeyError: if no container is found with the given ID.
        """
        with self.__api.get(f"containers/{uid}") as r:
            if r.status_code == 200:
                return Container.from_dict(r.json())

            if r.status_code == 404:
                m = f"no container found with given UID: {uid}"
                raise KeyError(m)

            self.__api.handle_erroneous_response(r)

    def __delitem__(self, uid: str) -> None:
        """Deletes a given container.

        Parameters
        ----------
            uid: the ID of the container.

        Raises
        ------
            KeyError: if no container is found with the given ID, or the
                container has already been destroyed.
        """
        with self.__api.delete(f"containers/{uid}") as r:
            if r.status_code == 204:
                return

            if r.status_code == 404:
                m = f"no container found with given UID: {uid}"
                raise KeyError(m)

            self.__api.handle_erroneous_response(r)

    def __contains__(self, uid: str) -> bool:
        """Checks whether a container with a given ID exists.

        Parameter:
            uid:    the ID of the container.

        Returns
        -------
            True if the container exists; false if not.
        """
        try:
            self[uid]
            return True
        except KeyError:
            return False

    def clear(self) -> None:
        """Destroys all running containers."""
        with self.__api.delete("containers") as r:
            if r.status_code != 204:
                self.__api.handle_erroneous_response(r)

    def __iter__(self) -> Iterator[str]:
        """Returns an iterator over the identifiers of all of the containers that
        are currently running on the server.
        """
        with self.__api.get("containers") as r:
            if r.status_code == 200:
                ids = r.json()
                assert isinstance(ids , list)
                assert all(isinstance(n, str) for n in ids)
                return ids.__iter__()

            self.__api.handle_erroneous_response(r)

    def provision(self,
                  bug: Bug,
                  *,
                  plugins: Optional[list[Tool]] = None,
                  ) -> Container:
        """Provisions a container for a given bug."""
        if plugins is None:
            plugins = []

        logger.info("provisioning container for bug: %s", bug.name)
        endpoint = f"bugs/{bug.name}/provision"
        payload = {
            "plugins": [p.to_dict() for p in plugins],
        }  # type: Dict[str, Any]
        with self.__api.post(endpoint, json=payload) as r:
            if r.status_code == 200:
                container = Container.from_dict(r.json())
                logger.info("provisioned container (id: %s) for bug: %s",
                                   container.uid,
                                   bug.name)
                return container

            if r.status_code == 404:
                m = f"no bug registered with given name: {bug.name}"
                raise KeyError(m)

            self.__api.handle_erroneous_response(r)

    def mktemp(self, container: Container) -> str:
        """Generates a temporary file for a given container.

        Returns
        -------
            the path to the temporary file inside the given container.
        """
        with self.__api.post(f"containers/{container.uid}/tempfile") as r:
            if r.status_code == 200:
                return r.json()
            self.__api.handle_erroneous_response(r)

    def ip_address(self,
                   container: Container,
                   ) -> Union[IPv4Address, IPv6Address]:
        """The IP address used by a given container, or None if no IP address has
        been assigned to that container.
        """
        with self.__api.get(f"containers/{container.uid}/ip") as r:
            if r.status_code == 200:
                return r.json()
            self.__api.handle_erroneous_response(r)

    def is_alive(self, container: Container) -> bool:
        """Determines whether or not a given container is still alive."""
        uid = container.uid
        with self.__api.get(f"containers/{uid}/alive") as r:
            if r.status_code == 200:
                return r.json()
            if r.status_code == 404:
                m = f"no container found with given UID: {uid}"
                raise KeyError(m)
            self.__api.handle_erroneous_response(r)

    def extract_coverage(self, container: Container) -> FileLineSet:
        """Extracts a report of the lines that have been executed since the last
        time that a coverage report was extracted.
        """
        uid = container.uid
        with self.__api.post(f"containers/{uid}/read-coverage") as r:
            if r.status_code == 200:
                return FileLineSet.from_dict(r.json())
            self.__api.handle_erroneous_response(r)

    def instrument(self,
                   container: Container,
                   ) -> None:
        """Instruments the program inside the container for computing test suite
        coverage.

        Params:
            container: the container that should be instrumented.
        """
        path = f"containers/{container.uid}/instrument"
        with self.__api.post(path) as r:
            if r.status_code != 204:
                logger.info("failed to instrument container: %s", container.uid)
                self.__api.handle_erroneous_response(r)

    def compile(self,
                container: Container,
                verbose: bool = False,
                ) -> CompilationOutcome:
        """Attempts to compile the program inside a given container.

        Params:
            container: the container whose program should be compiled.
            verbose: specifies whether to print the stdout and stderr produced
                by the compilation command to the stdout. If `True`, then the
                stdout and stderr will be printed.

        Returns
        -------
            a summary of the outcome of the attempted compilation.

        Raises
        ------
            KeyError: if the container no longer exists.
        """
        path = f"containers/{container.uid}/build"
        params = {}
        if verbose:
            params["verbose"] = "yes"
        with self.__api.post(path, params=params) as r:
            if r.status_code == 200:
                return CompilationOutcome.from_dict(r.json())
            self.__api.handle_erroneous_response(r)

    build = compile

    def test(self,
             container: Container,
             test: TestCase,
             ) -> TestOutcome:
        """Executes a given test inside a container.

        Parameters
        ----------
            container: the container in which the test should be conducted.
            test: the test that should be executed.

        Returns
        -------
            a summary of the outcome of the test execution.

        Raises
        ------
            KeyError: if the container no longer exists, or the given test
                doesn't exist.
        """
        path = f"containers/{container.uid}/test/{test.name}"
        with self.__api.post(path) as r:
            if r.status_code == 200:
                return TestOutcome.from_dict(r.json())
            self.__api.handle_erroneous_response(r)

    def coverage(self,
                 container: Container,
                 *,
                 instrument: bool = True,
                 ) -> TestSuiteCoverage:
        """Computes complete test suite coverage for a given container.

        Parameters
        ----------
            container: the container for which coverage should be computed.
            rebuild: if set to True, the program will be rebuilt before
                coverage is computed.
        """
        uid = container.uid
        logger.info("Fetching coverage information for container: %s",
                    uid)
        uri = f"containers/{uid}/coverage"
        params = {"instrument": "yes" if instrument else "no"}
        with self.__api.post(uri, params=params) as r:
            if r.status_code == 200:
                jsn = r.json()
                coverage = TestSuiteCoverage.from_dict(jsn)  # type: ignore
                logger.info("Fetched coverage information for container: %s",
                            uid)
                return coverage
            try:
                self.__api.handle_erroneous_response(r)
            except exceptions.BugZooException as err:
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
             time_limit: Optional[int] = None,
             ) -> ExecResponse:
        """Executes a given command inside a provided container.

        Parameters
        ----------
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

        Returns
        -------
            a summary of the outcome of the execution.

        Raises
        ------
            KeyError: if the container no longer exists on the server.
        """
        # FIXME perhaps these should be encoded as path variables?
        payload = {
            "command": command,
            "context": context,
            "stdout": stdout,
            "stderr": stderr,
            "time-limit": time_limit,
        }
        path = f"containers/{container.uid}/exec"
        with self.__api.post(path, json=payload) as r:
            if r.status_code == 200:
                return ExecResponse.from_dict(r.json())
            if r.status_code == 404:
                raise KeyError(f"no container found with given UID: {container.uid}")

            self.__api.handle_erroneous_response(r)

    command = exec

    def patch(self, container: Container, patch: Patch) -> bool:
        """Attempts to apply a given patch to the source code for a program inside
        a given container. All patch applications are guaranteed to be atomic;
        if the patch fails to apply, no changes will be made to the relevant
        source code files.

        Returns
        -------
            true if patch application was successful, and false if the attempt
            was unsuccessful.
        """
        path = f"containers/{container.uid}"
        payload = str(patch)
        with self.__api.patch(path, payload) as r:
            return r.status_code == 204

    def persist(self, container: Container, image_name: str) -> None:
        """Persists the state of a given container as a Docker image.

        Parameters
        ----------
            container: the container that should be persisted.
            image_name: the name of the Docker image that should be created.

        Raises
        ------
            ContainerNotFound: if the given container does not exist on the
                server.
            ImageAlreadyExists: if the given image name is already in use by
                another Docker image on the server.
        """
        logger.debug("attempting to persist container (%s) to image (%s).",
                     container.id,
                     image_name)
        path = f"containers/{container.id}/persist/{image_name}"
        with self.__api.put(path) as r:
            if r.status_code == 204:
                logger.debug("persisted container (%s) to image (%s).",
                             container.id,
                             image_name)
                return
            try:
                self.__api.handle_erroneous_response(r)
            except Exception:
                logger.exception("failed to persist container (%s) to image (%s).",  # noqa: pycodestyle
                                 container.id,
                                 image_name)
                raise
