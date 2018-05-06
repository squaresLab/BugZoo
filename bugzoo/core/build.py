from typing import Optional, Dict
from pprint import pprint as pp
import warnings
import os
import shutil
import json

import docker
import yaml


class BuildInstructions(object):
    """
    Used to store instructions on how to build a Docker image.

    TODO: only allow relative, forward roots
    """
    def __init__(self,
                 root: str,
                 tag: str,
                 context: str,
                 filename: str,
                 arguments: Dict[str, str],
                 depends_on: Optional[str],
                 source: Optional[str]
                 ) -> None:
        self.__root = root
        self.__tag = tag
        self.__context = context
        self.__filename = filename
        self.__arguments = {k: str(v) for (k, v) in arguments.items()}
        self.__depends_on = depends_on
        self.__source = source

    @property
    def root(self) -> str:
        return self.__root

    @property
    def source(self) -> Optional[str]:
        """
        The name of the source that provides this blueprint, if any.
        """
        return self.__source

    @property
    def depends_on(self) -> Optional[str]:
        """
        The name of the Docker image that the construction of the image
        associated with these build instructions depends on. If no such
        dependency exists, None is returned.
        """
        return self.__depends_on

    @property
    def tag(self) -> str:
        return self.__tag
    name = tag

    @property
    def context(self) -> str:
        return self.__context

    @property
    def abs_context(self) -> str:
        path = os.path.join(self.root, self.context)
        path = os.path.normpath(path)
        return path

    @property
    def file(self) -> str:
        """
        The path to the Dockerfile used to build the image associated with
        these instructions, relative to the location of the build instruction
        file.
        """
        return self.__filename

    @property
    def file_abs(self) -> str:
        return os.path.join(self.root, self.file)

    @property
    def arguments(self) -> Dict[str, str]:
        """
        A dictionary of build-time arguments provided during the construction
        of the Docker image associated with these instructions.
        """
        return dict(self.__arguments)
