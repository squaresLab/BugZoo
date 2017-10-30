import os
import yaml
import docker
import copy
import typing
import repairbox

from repairbox.build import BuildInstructions
from repairbox.container import Container
from repairbox.test import TestSuite


class CompilationInstructions(object):
    @staticmethod
    def from_yaml(yml: dict) -> 'CompilationInstructions':
        return CompilationInstructions(yml['context'],
                                       yml['command'])


    def __init__(self, context: str, command: str) -> None:
        self.__context = context
        self.__command = command


    @property
    def context(self):
        return self.__context


    @property
    def command(self):
        return self.__command


class Artefact(object):
    """
    Artefacts provide an immutable snapshot of a software system at a given
    point in time, allowing it to be empirically studied and inspected in a
    transparent and reproducible manner.

    Each artefact is assigned a unique identifier, based on its name, and
    the name of the program, if any, and source to which it belongs. This
    identifier takes the form: `"SOURCE:[PROGRAM:]NAME"`. Artefacts can be
    retrieved by using this name, as shown below.

    .. code-block:: python

        rbox = RepairBox()
        artefact = rbox.artefacts['manybugs:python:69223-69224']
    """
    @staticmethod
    def from_file(source: 'repairbox.manager.Source',
                  fn: str) -> 'Artefact':
        """
        Loads an artefact from its YAML manifest file.
        """
        with open(fn, 'r') as f:
            yml = yaml.load(f)

        name = yml['bug'] # TODO: rename to 'artefact'
        program = yml.get('program', None)

        # build the test harness
        harness = TestSuite.from_dict(yml['test-harness'])

        # compilation instructions
        if not 'compilation' in yml:
            raise Exception('No compilation instructions provided for artefact: {}'.format(name))

        compilation_instructions = \
            CompilationInstructions.from_yaml(yml['compilation'])

        # docker build instructions
        build_instructions = {'docker': yml['docker']}
        build_instructions = \
            BuildInstructions.from_yaml(source,
                                        os.path.dirname(fn),
                                        build_instructions)

        return Artefact(source,
                        name,
                        program,
                        harness,
                        build_instructions,
                        compilation_instructions)


    def __init__(self,
                 source: 'repairbox.manager.Source',
                 name: str,
                 program: str,
                 harness: TestSuite,
                 build_instructions: BuildInstructions,
                 compilation_instructions: CompilationInstructions) -> None:
        assert name != ""
        assert program != ""

        self.__name = name
        self.__program = program
        self.__test_harness = harness
        self.__build_instructions = build_instructions
        self.__compilation_instructions = compilation_instructions
        self.__source = source


    @property
    def source_dir(self) -> str:
        """
        The absolute path of the source directory (within the container) for
        this artefact.
        """
        # TODO
        return "/experiment/src"
    

    @property
    def compilation_instructions(self):
        return self.__compilation_instructions


    @property
    def harness(self) -> TestSuite:
        """
        The test harness used by this artefact.
        """
        return self.__test_harness


    @property
    def tests(self):
        """
        The test suite used by this artefact.
        """
        return self.__test_harness.tests


    @property
    def source(self) -> 'Source':
        """
        The source to which this artefact belongs.
        """
        return self.__source


    @property
    def installed(self) -> bool:
        """
        Indicates whether the Docker image for this artefact is installed on the
        local machine.
        """
        return self.__build_instructions.installed

    
    @property
    def image(self) -> str:
        """
        The name of the Docker image for this artefact.
        """
        return self.__build_instructions.tag


    @property
    def identifier(self) -> str:
        """
        The fully-qualified name of this artefact.
        """
        if self.__program:
            return "{}:{}:{}".format(self.__source.name, self.__program, self.__name)
        return "{}:{}".format(self.__source.name, self.__name)


    def build(self, force=False) -> None:
        """
        Builds the Docker image for this artefact.
        """
        self.__build_instructions.build(force=force)


    def uninstall(self, force=False, noprune=False) -> None:
        """
        Uninstalls all Docker images associated with this artefact.
        """
        self.__build_instructions.uninstall(force=force, noprune=noprune)


    def download(self, force=False) -> bool:
        """
        Attempts to download the image for this artefact from
        `DockerHub <https://hub.docker.com>`_. If the force parameter is set to
        True, any existing image will be overwritten.

        Returns:
            `True` if successfully downloaded, else `False`.
        """
        return self.__build_instructions.download(force=force)


    def upload(self) -> bool:
        """
        Attempts to upload the image for this artefact to
        `DockerHub <https://hub.docker.com>`_.
        """
        return self.__build_instructions.upload()


    def install(self, upgrade=False) -> None:
        """
        Installs this artefact by first trying to download it, and if that is
        not possible, by building it locally.

        Args:
            upgrade:    a flag indicating whether this artefact should be
                upgraded if it is already installed.
        """
        # TODO: attempt to download before trying to build
        self.build(force=upgrade)


    def provision(self, volumes=[], network_mode='bridge', ports={}, tty=False) -> 'Container':
        """
        Provisions a container for this artefact.

        Parameters:
            network_mode:   the network mode that should be used by the
                provisioned container. Defaults to `bridge`. For more
                information, see the `documentation for Docker <https://docker-py.readthedocs.io/en/stable/containers.html>`_.
            tty:    a flag indicating whether a pseudo-TTY should be created
                for this container. By default, a pseudo-TTY is not created.
        """
        return Container(self, volumes=volumes, network_mode=network_mode, ports=ports, interactive=tty)
