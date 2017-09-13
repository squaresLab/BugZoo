import os
import yaml
import docker
import copy

from repairbox.build import BuildInstructions


class Bug(object):
    """

    Attributes:
        __name (str): the (unqualified) name of this bug.
        __dataset (str): the name of the dataset to which this bug belongs.
        __program (str, optional): the name of the program to which this bug
            belongs.
    """

    def from_file(source: 'repairbox.manager.Source', fn: str) -> 'Bug':
        """
        Loads a bug from its YAML manifest file.
        """
        with open(fn, 'r') as f:
            yml = yaml.load(f)

        name = yml['bug']
        dataset = yml['dataset']
        program = yml.get('program', None)

        # build the test harness
        # harness = TestHarness.from_yaml(fn, yml['test-harness'])

        # docker build instructions
        build_instructions = {'docker': yml['docker']}
        build_instructions = \
            BuildInstructions.from_yaml(source,
                                        os.path.dirname(fn),
                                        build_instructions)

        return Bug(source, name, dataset, program, build_instructions)


    def __init__(self,
                 source: 'repairbox.manager.Source',
                 name: str,
                 dataset: str,
                 program: str,
                 build_instructions: BuildInstructions) -> None:
        assert name != ""
        assert dataset != ""
        assert program != ""

        self.__name = name
        self.__dataset = dataset
        self.__program = program
        self.__build_instructions = build_instructions


    @property
    def installed(self) -> bool:
        """
        Returns true if the Docker image for this bug is installed onto the
        local machine.
        """
        print(self.__build_instructions)
        return self.__build_instructions.installed


    @property
    def identifier(self) -> str:
        """
        Returns the fully-qualified name of this bug.
        """
        if self.__program:
            return "{}:{}:{}".format(self.__dataset, self.__program, self.__name)
        return "{}:{}".format(self.__dataset, self.__name)


    def build(self, force=False) -> None:
        self.__build_instructions.build(force=force)


    def uninstall(self, force=False, noprune=False) -> None:
        """
        Uninstalls all Docker images associated with this bug.
        """
        self.__build_instructions.uninstall(force=force, noprune=noprune)


    def download(self, force=False) -> None:
        pass


    def install(self, upgrade=False) -> None:
        pass
