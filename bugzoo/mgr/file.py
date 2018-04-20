import os
import logging
import tempfile

from .bug import BugManager
from .container import ContainerManager
from ..core.container import Container


class FileManager(object):
    def __init__(self,
                 mgr_bug: BugManager,
                 mgr_ctr: ContainerManager
                 ) -> None:
        self.__mgr_bug = mgr_bug
        self.__mgr_ctr = mgr_ctr

    def read(self,
             container: Container,
             filepath: str
             ) -> str:
        bug = self.__mgr_bug[container.bug]

        if not os.path.isabs(filepath):
            filepath = os.path.join(bug.source_dir, filepath)

        # TODO what if the file doesn't exist?
        # TODO what if we encounter a permissions problem?
        # TODO what if we can't decode the file?

        # copy the contents the file to a temporary file on the host machine
        # TODO ensure correct permissions
        (_, fn_host) = tempfile.mkstemp(suffix='.bugzoo')
        try:
            # TODO we can probably move 'copy_from' to this manager
            self.__mgr_ctr.copy_from(container, filepath, fn_host)
            with open(fn_host, 'r') as fh:
                return fh.read()
        finally:
            os.remove(fn_host)

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
        raise NotImplementedError
