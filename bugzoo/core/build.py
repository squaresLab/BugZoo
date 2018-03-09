import warnings
import os
import shutil
import typing
import json
from pprint import pprint as pp

import docker
import yaml


class BuildInstructions(object):
    """
    Used to store instructions on how to build a Docker image.

    TODO: only allow relative, forward roots
    """
    @staticmethod
    def from_file(source: 'Source', fn: str) -> 'BuildInstructions':
        """
        Loads a set of build instructions belonging to a given source from a
        specified YAML file.

        Parameters:
            fn: the name of the file.
        """
        with open(fn, 'r') as f:
            yml = yaml.load(f)
        root = os.path.dirname(fn)
        return BuildInstructions.from_dict(source, root, yml)

    @staticmethod
    def from_dict(source: 'Source', root: str, yml: dict) -> 'BuildInstructions':
        """
        Loads a set of build instructions from a dictionary.
        """
        if 'docker' in yml:
            yml = yml['docker']
            warnings.warn("'docker' property is deprecated; use 'build' instead.", DeprecationWarning)
        elif 'build' in yml:
            yml = yml['build']
        else:
            raise Exception("Illegal build instructions: missing `build` or `docker` property")

        tag = yml['tag']
        context = yml.get('context', '.')
        filename = yml.get('file', 'Dockerfile')

        if 'build-arguments' in yml:
            arguments = yml['build-arguments']
            warnings.warn("'build.build-arguments' property is deprecated; use 'build.arguments' instead.", DeprecationWarning)
        elif 'arguments' in yml:
            arguments = yml['arguments']
        else:
            arguments = {}

        depends_on = yml.get('depends-on', None)

        return BuildInstructions(source, root, tag, context, filename, arguments, depends_on)

    def __init__(self,
                 source: 'Source',
                 root: str,
                 tag: str,
                 context: str,
                 filename: str,
                 arguments: dict,
                 depends_on: str):
        self.__source = source
        self.__root = root
        self.__tag = tag
        self.__context = context
        self.__filename = filename
        self.__arguments = {k: str(v) for (k, v) in arguments.items()}
        self.__depends_on = depends_on

    @property
    def root(self) -> str:
        return self.__root

    @property
    def depends_on(self) -> str:
        """
        The name of the Docker image that the construction of the image
        associated with these build instructions depends on. If no such
        dependency exists, None is returned.
        """
        return self.__depends_on

    @property
    def tag(self) -> str:
        return self.__tag

    @property
    def context(self) -> str:
        return self.__context

    @property
    def source(self) -> 'Source':
        return self.__source

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
    def arguments(self):
        """
        A dictionary of build-time arguments provided during the construction
        of the Docker image associated with these instructions.
        """
        return dict(self.__arguments)
