import copy
import yaml
import docker
import os

from typing import Dict
from bugzoo.source import Source
from bugzoo.build import BuildInstructions


class Tool(Source):
    @staticmethod
    def from_dict(manager: 'SourceManager',
                  url: str,
                  d: dict) -> 'Tool':
        assert 'name' in d
        name = d['name']

        environment = d.get('environment', {})

        # TODO: tidy up this mess
        assert 'build' in d
        build = {'build': d['build']}

        return Tool(manager, url, name, environment, build)

    def __init__(self,
                 manager: 'SourceManager',
                 url: str,
                 name: str,
                 environment: Dict[str, str],
                 build_instructions: dict) -> None: # TODO: fix this hack!
        super().__init__(manager, url, name)
        self.__environment = environment
        self.__build_instructions = \
            BuildInstructions.from_dict(self, self.abs_path, build_instructions)

    def provision(self):
        # TODO: use custom error
        if not self.installed:
            raise Exception("tool is not installed: {}".format(self.name))

        client = docker.from_env()
        return client.containers.create(self.__build_instructions.tag)

    @property
    def environment(self) -> Dict[str, str]:
        return copy.copy(self.__environment)

    @property
    def installed(self) -> bool:
        """
        Indicates whether the Docker image for this tool is installed on the
        local machine.
        """
        return self.__build_instructions.installed

    def uninstall(self, force=False, noprune=False) -> None:
        """
        Uninstalls all Docker images associated with this tool.
        """
        self.__build_instructions.uninstall(force=force, noprune=noprune)

    def build(self, force=False) -> None:
        """
        Constructs the Docker image associated with this tool. By default, this
        command will do nothing if a version of the image associated with the
        tool is already installed to the local machine. However, if `force` is
        set to `True`, the Docker image will be rebuilt from scratch, replacing
        any exiting image.
        """
        return self.__build_instructions.build(force=force)

    def upload(self) -> bool:
        """
        Attempts to upload the image for this tool to
        `DockerHub <https://hub.docker.com>`_.
        """
        return self.__build_instructions.upload()

    def download(self, force=False) -> bool:
        """
        Attempts to download the image for this tool from
        `DockerHub <https://hub.docker.com>`_. If the force parameter is set to
        True, any existing image will be overwritten.

        Returns:
            `True` if successfully downloaded, else `False`.
        """
        return self.__build_instructions.download(force=force)
