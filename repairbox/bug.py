import docker
import copy


class BuildInstructions(object):
    """
    Used to store instructions on how to build a Docker image.
    """

    @staticmethod
    def fromYAML(yml: dict) -> BuildInstructions:
        tag = yml['tag']
        context = yml['context']
        filename = yml['file']
        arguments = yml.get('arguments', {})

        return BuildInstructions(tag, context, filename, arguments)
        

    def __init__(self, tag: str, context: str, filename: str, arguments: dict) -> None:
        self.__tag = tag
        self.__context = context
        self.__filename = filename
        self.__arguments = arguments

    
    @property
    def tag(self):
        return self.__tag


    @property
    def context(self):
        return self.__context


    @property
    def filename(self):
        return self.__filename


    @property
    def arguments(self):
        return copy.copy(self.__arguments)

    def build(self, tag):
        client.images.build(X, \
                            tag=tag,
                            rm=True,
                            pull=True, # true if update
                            buildargs=self.__arguments)


class Bug(object):
    """

    Attributes:
        __name (str): the (unqualified) name of this bug.
        __dataset (str): the name of the dataset to which this bug belongs.
        __program (str, optional): the name of the program to which this bug
            belongs.
    """

    def fromYAML(yml: dict) -> Bug:
        """
        Generates a Bug object from its YAML description.
        """
        name = yml['bug']
        dataset = yml['dataset']
        program = yml.get('program', None)

        # build the test harness
        # harness = TestHarness.fromYAML(yml['test-harness'])

        # docker build instructions
        build_instructions = BuildInstructions.fromYAML(yml['docker'])

        return Bug(name, dataset, program)


    def __init__(self, name: str, dataset: str, program: str) -> None:
        assert name != ""
        assert dataset != ""
        assert program != ""

        self.__name = name
        self.__dataset = dataset
        self.__program = program


    def installed(self) -> bool:
        """
        Returns true if the Docker image for this bug is installed onto the
        local machine.
        """
        return False


    def image(self) -> str:
        """
        Returns the fully-qualified name of the Docker image used by this bug.
        """
        if self.__program:
            return "{}:{}:{}".format(self.__dataset, self.__program, self.__name)
        return "{}:{}".format(self.__dataset, self.__name)


    def build(self, force=False) -> None:
        pass


    def download(self, force=False) -> None:
        pass


    def install(self, upgrade=False) -> None:
        pass
