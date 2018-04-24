from typing import Iterator, Optional
import logging
import os

from .api import APIClient
from .bug import BugManager
from ..core.container import Container


class FileManager(object):
    def __init__(self,
                 api: APIClient,
                 mgr_bug: BugManager
                 ) -> None:
        logging.basicConfig(level=logging.DEBUG)
        self.__logger = logging.getLogger('files')
        self.__api = api
        self.__mgr_bug = mgr_bug

    def read(self, container: Container, filepath: str) -> str:
        """
        Attempts to retrieve the contents of a given file in a running
        container.

        Parameters:
            container: the container from which the file should be fetched.
            filepath: the path to the file. If a relative path is given,
                the path will be interpreted as being relative to the source
                directory for the program under test inside the container.

        Returns:
            the contents of the file as a string.

        Raises:
            KeyError: if the given file was not found.
        """
        path = "files/{}/{}".format(container.uid, filepath)
        response = self.__api.get(path)
        if response.status_code == 200:
            return response.text
        self.__api.handle_erroneous_response(response)
