from typing import Iterator, Optional
import logging

from .api import APIClient
from ..core.container import Container


class FileManager(object):
    def __init__(self, api: APIClient) -> None:
        logging.basicConfig(level=logging.DEBUG)
        self.__logger = logging.getLogger('files')
        self.__api = api

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
        raise NotImplementedError
