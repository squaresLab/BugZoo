"""
This module provides functionality that allows users to interact with container
filesystems (e.g., reading, writing, and deleting files).
"""
__all__ = ['FileManager']

import os
import logging
import tempfile

import chardet

from .bug import BugManager
from .container import ContainerManager
from ..core.container import Container

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)


class FileManager(object):
    def __init__(self,
                 mgr_bug: BugManager,
                 mgr_ctr: ContainerManager
                 ) -> None:
        self.__mgr_bug = mgr_bug
        self.__mgr_ctr = mgr_ctr

    def _resolve_path(self, container: Container, filepath: str) -> str:
        """
        Ensures that relative paths are transformed into absolute paths.
        """
        bug = self.__mgr_bug[container.bug]
        filepath_orig = filepath

        if not os.path.isabs(filepath):
            filepath = os.path.join(bug.source_dir, filepath)
            logger.debug("converted relative path to absolute path: %s -> %s",
                         filepath_orig, filepath)

        return filepath

    def read(self, container: Container, filepath: str) -> str:
        """
        Reads the contents of a given file belonging to a container.
        """
        logger.debug("reading contents of file [%s] inside container [%s]",
                     filepath, container.id)
        filepath_orig = filepath
        filepath = self._resolve_path(container, filepath)

        # TODO what if the file doesn't exist?
        # TODO what if we encounter a permissions problem?

        # copy the contents the file to a temporary file on the host machine
        # TODO ensure correct permissions
        (_, fn_host) = tempfile.mkstemp(suffix='.bugzoo')
        try:
            # TODO we can probably move 'copy_from' to this manager
            self.__mgr_ctr.copy_from(container, filepath, fn_host)
            with open(fn_host, 'rb') as fh:
                blob = fh.read()
        finally:
            os.remove(fn_host)

        # detect encoding
        logger.debug("detecting encoding for file [%s] in container [%s]",
                     filepath_orig, container.id)
        chardet_res = chardet.detect(blob)
        encoding = chardet_res['encoding']
        confidence = chardet_res['confidence']
        logger.debug("detected encoding of file [%s] in container [%s]: %s (%.3f confidence)",  # noqa: pycodestyle
                     filepath_orig, container.id, encoding, confidence)

        # decode file
        logger.debug("decoding file [%s] in container [%s]",
                     filepath_orig, container.id)
        try:
            contents = blob.decode(encoding)
        except UnicodeDecodeError:
            logger.exception("failed to decode contents of file [%s] in container [%s]",  # noqa: pycodestyle
                             filepath_orig, container.id)
            raise
        logger.debug("decoded file [%s] in container [%s]",
                     filepath_orig, container.id)

        logger.debug("read contents of file [%s] inside container [%s]",
                     filepath_orig, container.id)
        return contents

    def delete(self,
               container: Container,
               filepath: str,
               force: bool = False
               ) -> None:
        raise NotImplementedError

    def write(self,
              container: Container,
              filepath: str,
              contents: str
              ) -> str:
        """
        Reads the contents of a given file belonging to a container.
        """
        logger.debug("writing to file [%s] inside container [%s]",
                     filepath, container.id)
        filepath = self._resolve_path(container, filepath)

        # write the file contents to a temporary file on the host before
        # copying that file to the container
        (_, fn_host) = tempfile.mkstemp(suffix='.bugzoo')
        try:
            with open(fn_host, 'w') as fh:
                fh.write(contents)
            self.__mgr_ctr.copy_to(container, fn_host, filepath)
        finally:
            os.remove(fn_host)

        logger.debug("wrote to file [%s] inside container [%s]",
                     filepath, container.id)
