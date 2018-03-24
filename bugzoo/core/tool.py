from typing import Dict, Optional

import yaml
import docker


class Tool(object):
    def __init__(self,
                 name: str,
                 image: str,
                 environment: Dict[str, str],
                 source: Optional[str]
                 ) -> None:
        """
        Constructs a new Tool description.

        Parameters:
            name: the name of the tool.
            image: the name of Docker image for this tool.
            environment: a dictionary of environment variables that should be
                injected upon loading the tool inside the container.
        """
        self.__name = name
        self.__image = image
        self.__environment = environment
        self.__source = source

    @property
    def source(self) -> Optional[str]:
        """
        The name of the source that provides this tool, if any.
        """
        return self.__source

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
