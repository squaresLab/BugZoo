from typing import Iterator, Optional
import logging
import os

from .api import APIClient
from .bug import BugManager
from ..core.container import Container
from ..exceptions import BugZooException
from ..util import indent

logger = logging.getLogger(__name__)  # type: logging.Logger

__all__ = ['FileManager']


class FileManager(object):
    def __init__(self,
                 api: APIClient,
                 mgr_bug: BugManager
                 ) -> None:
        self.__api = api
        self.__mgr_bug = mgr_bug

    def resolve(self, container: Container, fn: str) -> str:
        """
        Ensures that relative paths are transformed into absolute paths.
        """
        bug = self.__mgr_bug[container.bug]
        fn_orig = fn

        if not os.path.isabs(fn):
            fn = os.path.join(bug.source_dir, fn)
            logger.debug("converted relative path to absolute path: %s -> %s",
                         fn_orig, fn)

        return fn

    def _file_path(self, container: Container, fn: str) -> str:
        """
        Computes the base path for a given file.
        """
        fn = self.resolve(container, fn)
        assert fn[0] == '/'
        fn = fn[1:]
        path = "files/{}/{}".format(container.uid, fn)
        return path

    def write(self,
              container: Container,
              filepath: str,
              contents: str
              ) -> None:
        """
        Dumps the contents of a given string into a file at a specified
        location inside the container.

        Parameters:
            container: the container to which the file should be written.
            filepath: the path to the file inside the container. If a
                relative path is given, the path will be interpreted as
                being relative to the source directory for the program
                under test inside the container.
            contents: the contents that should be written to the specified
                file.
        """
        logger.debug("writing to file [%s] in container [%s].",
                     filepath, container.uid)
        path = self._file_path(container, filepath)
        try:
            response = self.__api.put(path, data=contents)
            if response.status_code != 204:
                self.__api.handle_erroneous_response(response)
        except BugZooException:
            logger.exception("failed to write to file [%s] in container [%s].",
                             filepath, container.uid)
            raise
        logger.debug("wrote to file [%s] in container [%s].",
                     filepath, container.uid)

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
        logger.debug("reading contents of file [%s] in container [%s].",
                     filepath, container.uid)
        path = self._file_path(container, filepath)
        response = self.__api.get(path)
        if response.status_code == 200:
            contents = response.text
            logger.debug("fetched contents of file [%s] in container [%s]:%s",
                         filepath, container.uid,
                         indent("\n[CONTENTS]\n{}\n[/CONTENTS]".format(contents), 2))  # noqa: pycodestyle
            return contents
        try:
            self.__api.handle_erroneous_response(response)
        except BugZooException as err:
            logger.exception("failed to read contents of file [%s] in container [%s]: %s",  # noqa: pycodestyle
                             filepath, container.uid, err)
            raise
