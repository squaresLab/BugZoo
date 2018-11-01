__all__ = ['BuildInstructions']

from typing import Optional, Dict, Any
from pprint import pprint as pp
import warnings
import os
import shutil
import json

import attr
import docker
import yaml


def converter_args(args: Dict[str, Any]) -> Dict[str, str]:
    return {k: str(v) for (k, v) in args.items()}


@attr.s(frozen=True)
class BuildInstructions(object):
    """
    Used to store instructions on how to build a Docker image.

    TODO: only allow relative, forward roots
    """
    root = attr.ib(type=str)
    tag = attr.ib(type=str)
    context = attr.ib(type=str)

    """
    The path to the Dockerfile used to build the image associated with
    these instructions, relative to the location of the build instruction
    file.
    """
    filename = attr.ib(type=str)

    """
    A dictionary of build-time arguments provided during the construction
    of the Docker image associated with these instructions.
    """
    arguments = attr.ib(type=Dict[str, str],
                        converter=converter_args)

    """
    The name of the source that provides this blueprint, if any.
    """
    source = attr.ib(type=Optional[str])

    """
    The name of the Docker image that the construction of the image
    associated with these build instructions depends on. If no such
    dependency exists, None is returned.
    """
    depends_on = attr.ib(type=Optional[str])

    @property
    def name(self) -> str:
        return self.tag

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
        return self.file

    @property
    def file_abs(self) -> str:
        return os.path.join(self.root, self.file)
