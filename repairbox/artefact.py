import os
import yaml
import docker
import copy
import typing

from repairbox.build import BuildInstructions
from repairbox.container import BugContainer
from repairbox.test import TestHarness


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
    def from_file(source: 'repairbox.manager.Source', fn: str) -> 'Artefact':
        """
        Loads an artefact from its YAML manifest file.
        """
        with open(fn, 'r') as f:
            yml = yaml.load(f)

        name = yml['bug'] # TODO: rename to 'artefact'
        dataset = yml['dataset']
        program = yml.get('program', None)

        # build the test harness
        harness = TestHarness.from_yaml(yml['test-harness'])

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
                        dataset,
                        program,
                        harness,
                        build_instructions,
                        compilation_instructions)


    def __init__(self,
                 source: 'repairbox.manager.Source',
                 name: str,
                 dataset: str,
                 program: str,
                 harness: TestHarness,
                 build_instructions: BuildInstructions,
                 compilation_instructions: CompilationInstructions) -> None:
        assert name != ""
        assert dataset != ""
        assert program != ""

        self.__name = name
        self.__dataset = dataset
        self.__program = program
        self.__test_harness = harness
        self.__build_instructions = build_instructions
        self.__compilation_instructions = compilation_instructions
        self.__source = source

    
    # TODO
    @property
    def source_dir(self):
        return "/experiment/src"
    

    @property
    def compilation_instructions(self):
        return self.__compilation_instructions


    @property
    def harness(self):
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
    def dataset(self) -> str:
        """
        The dataset to which this artefact belongs.
        """
        return self.__dataset


    @property
    def installed(self) -> bool:
        """
        Returns true if the Docker image for this artefact is installed onto the
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
            return "{}:{}:{}".format(self.__dataset, self.__program, self.__name)
        return "{}:{}".format(self.__dataset, self.__name)


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


    def download(self, force=False) -> None:
        """
        Attempts to download the Docker image for this artefact from DockerHub.
        """
        pass


    def install(self, upgrade=False) -> None:
        # TODO: attempt to download before trying to build
        self.build(force=upgrade)


    def provision(self, volumes=[], network_mode='bridge', ports={}, tty=False) -> 'BugContainer':
        """
        Provisions a container for this artefact.
        """
        return BugContainer(self, volumes=volumes, network_mode=network_mode, ports=ports, tty=tty)


    def launch(self) -> None:
        """
        Launches an interactive container for this artefact. Once the pseudotty
        session has ended, the container is destroyed.
        """
        c = None
        try:
            c = self.provision(tty=True)
        finally:
            if c:
                c.destroy()
