import docker


class Bug(object):
    """

    Attributes:
        __name (str): the (unqualified) name of this bug.
        __dataset (str): the name of the dataset to which this bug belongs.
        __program (str, optional): the name of the program to which this bug
            belongs.
    """

    def fromYAML(yml):
        """
        Generates a Bug object from its YAML description.
        """
        return


    def __init__(self):
        self.__name = TODO
        self.__tests = TODO
        self.__dataset = TODO
        self.__program = TODO


    def installed(self):
        """
        Returns true if the Docker image for this bug is installed onto the
        local machine.
        """
        return False


    def image(self):
        """
        Returns the fully-qualified name of the Docker image used by this bug.
        """
        return "TODO"


    def build(self, force=False):
        pass


    def download(self, force=False):
        pass


    def install(self, upgrade=False):
        pass
