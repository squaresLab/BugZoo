from typing import Dict

import yaml
import docker


class Tool(object):
    def __init__(self,
                 name: str,
                 image: str,
                 environment: Dict[str, str]):
        """
        Constructs a new Tool description.

        Parameters:
            name: the name of the tool.
            image: the name of Docker image for this tool.
            environment: a dictionary of environment variables that should be
                injected upon loading the tool inside the container.
        """
        self.__name = name
        self.__environment = environment
        self.__image = image

    #
    # TODO move to ToolManager
    #
    def provision(self):
        # TODO: use custom error
        manager_tool = self.manager.installation.tools
        if not manager_tool.is_installed(self):
            raise Exception("tool is not installed: {}".format(self.name))

        client = docker.from_env(timeout=120)
        return client.containers.create(self.__build_instructions.tag)

    @property
    def name(self) -> str:
        """
        The name of this tool.
        """
        return self.__name

    @property
    def environment(self) -> Dict[str, str]:
        """
        A dictionary of environment variables that should be used when the
        tool is mounted inside a container.
        """
        return dict(self.__environment)

    @property
    def image(self) -> str:
        """
        The name of the Docker image for this tool.
        """
        return self.__image
