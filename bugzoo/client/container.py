from typing import Iterator
import logging

from .api import APIClient
from .errors import UnexpectedAPIResponse
from ..core.bug import Bug
from ..core.container import Container
from ..core.coverage import TestSuiteCoverage


class ContainerManager(object):
    def __init__(self, api: APIClient) -> None:
        logging.basicConfig(level=logging.DEBUG)
        self.__logger = logging.getLogger('container')
        self.__api = api

    def __getitem__(self, uid: str) -> Container:
        return

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
