from typing import Dict
import copy
import os

import yaml
import docker

from .source import Source
from .build import BuildInstructions


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

        client = docker.from_env(timeout=120)
        return client.containers.create(self.__build_instructions.tag)

    @property
    def environment(self) -> Dict[str, str]:
        return copy.copy(self.__environment)

    @property
    def build_instructions(self) -> BuildInstructions:
        return self.__build_instructions
