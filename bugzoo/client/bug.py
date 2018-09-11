from typing import Iterator
import logging

from .api import APIClient
from ..core.bug import Bug
from ..core.coverage import TestSuiteCoverage

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)

__all__ = ['BugManager']


class BugManager(object):
    """
    Provides access to the historical bugs that are registered with the
    server. Can be used to install, download, and uninstall registered bugs,
    or to dynamically register new bugs with the server.
    """
    def __init__(self, api: APIClient) -> None:
        self.__api = api

    def __getitem__(self, name: str) -> Bug:
        """
        Retrieves the bug registered under a given name.

        Raises:
            KeyError: if no bug is found with the given name.
        """
        logger.info("Fetching information for bug: %s", name)
        r = self.__api.get('bugs/{}'.format(name))

        if r.status_code == 200:
            return Bug.from_dict(r.json())
        if r.status_code == 404:
            logger.info("Bug not found: %s", name)
            raise KeyError("no bug found with given name: {}".format(name))

        logger.info("Unexpected API response when retrieving bug: %s", name)
        self.__api.handle_erroneous_response(r)

    def __iter__(self) -> Iterator[str]:
        """
        Returns an iterator over the names of the bugs registered with
        the server.
        """
        r = self.__api.get('bugs')

        if r.status_code == 200:
            names = r.json()
            assert isinstance(names, list)
            assert all(isinstance(n, str) for n in names)
            return names.__iter__()

        self.__api.handle_erroneous_response(r)

    def is_installed(self, bug: Bug) -> bool:
        """
        Determines whether the Docker image for a given bug has been installed
        on the server.
        """
        r = self.__api.get('bugs/{}/installed'.format(bug.name))

        if r.status_code == 200:
            answer = r.json()
            assert isinstance(answer, bool)
            return answer

        # TODO bug not registered on server
        if r.status_code == 404:
            raise KeyError("no bug found with given name: {}".format(bug.name))

        self.__api.handle_erroneous_response(r)

    def register(self, bug: Bug) -> None:
        """
        Dynamically registers a given bug with the server. Note that the
        registration will not persist beyond the lifetime of the server.
        (I.e., when the server is closed, the bug will be deregistered.)

        Raises:
            BugAlreadyExists: if there is already a bug registered on the
                server under the same name as this bug.
        """
        path = "bugs/{}".format(bug.name)
        payload = bug.to_dict()
        r = self.__api.put(path, json=payload)
        if r.status_code != 204:
            self.__api.handle_erroneous_response(r)

    def coverage(self, bug: Bug) -> TestSuiteCoverage:
        logger.info("Fetching coverage information for snapshot: %s",
                    bug.name)
        r = self.__api.get('bugs/{}/coverage'.format(bug.name))
        if r.status_code == 200:
            jsn = r.json()
            coverage = TestSuiteCoverage.from_dict(jsn)  # type: ignore
            logger.info("Fetched coverage information for snapshot: %s",
                        bug.name)
            return coverage
        logger.error("Failed to fetch coverage information for snapshot: %s",
                     bug.name)
        self.__api.handle_erroneous_response(r)

    def uninstall(self, bug: Bug) -> bool:
        """
        Uninstalls the Docker image associated with a given bug.
        """
        r = self.__api.post('bugs/{}/uninstall'.format(bug.name))
        raise NotImplementedError

    def upload(self, bug: Bug) -> bool:
        """
        Instructs the server to upload the Docker image associated with a
        given bug to DockerHub.
        """
        r = self.__api.post('bugs/{}/upload'.format(bug.name))
        raise NotImplementedError

    def download(self, bug: Bug) -> bool:
        """
        Instructs the server to download the Docker image associated with a
        given bug from DockerHub.
        """
        r = self.__api.post('bugs/{}/download'.format(bug.name))
        raise NotImplementedError

    def build(self, bug: Bug):
        """
        Instructs the server to build the Docker image associated with a given
        bug.
        """
        r = self.__api.post('bugs/{}/build'.format(bug.name))

        if r.status_code == 204:
            return
        if r.status_code == 200:
            raise Exception("bug already built: {}".format(bug.name))
        # TODO: implement ImageBuildFailed.from_dict
        if r.status_code == 400:
            raise Exception("build failure")
        if r.status_code == 404:
          raise KeyError("no bug found with given name: {}".format(bug.name))

        self.__api.handle_erroneous_response(r)
