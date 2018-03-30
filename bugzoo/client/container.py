from typing import Iterator, Optional
import logging

from .api import APIClient
from .errors import UnexpectedAPIResponse
from ..core.bug import Bug
from ..core.container import Container
from ..core.coverage import TestSuiteCoverage
from ..cmd import ExecResponse


class ContainerManager(object):
    def __init__(self, api: APIClient) -> None:
        logging.basicConfig(level=logging.DEBUG)
        self.__logger = logging.getLogger('container')
        self.__api = api

    def __getitem__(self, uid: str) -> Container:
        r = self.__api.get('containers/{}'.format(uid))

        if r.status_code == 200:
            return Container.from_dict(r.json())

        if r.status_code == 404:
            raise KeyError("no container found with given UID: {}".format(uid))

        raise UnexpectedAPIResponse(r)

    def __delitem__(self, uid: str) -> Container:
        r = self.__api.delete('containers/{}'.format(uid))

        if r.status_code == 204:
            return

        if r.status_code == 404:
            raise KeyError("no container found with given UID: {}".format(uid))

        raise UnexpectedAPIResponse(r)

    def __contains__(self, uid: str) -> bool:
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

        raise UnexpectedAPIResponse(r)

    def provision(self, bug: Bug) -> Container:
        self.__logger.info("provisioning container for bug: %s", bug.name)
        r = self.__api.post('bugs/{}/provision'.format(bug.name))

        if r.status_code == 200:
            container = Container.from_dict(r.json())
            self.__logger.info("provisioned container (id: %s) for bug: %s",
                               container.uid,
                               bug.name)
            return container

        if r.status_code == 404:
            raise KeyError("no bug registered with given name: {}".format(bug.name))

        # TODO catch bug not built error
        raise UnexpectedAPIResponse(r)

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

        raise UnexpectedAPIResponse(r)

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
        """
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
            raise KeyError("no container found with given UID: {}".format(uid))

        raise UnexpectedAPIResponse(r)

    command = exec
