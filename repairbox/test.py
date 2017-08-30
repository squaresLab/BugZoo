class TestHarness(object):
    
    @staticmethod
    def fromYAML(yml: dict) -> TestHarness:
        """
        Constructs a test harness from its YAML-based (i.e., dictionary)
        description.
        """
        typ: str = yml['type']
        # route based on type
        if typ == 'genprog':
            return GenProgTestHarness.fromYAML(yml)

        raise Exception("unexpected test harness type: {}".format(typ))


class GenProgTestHarness(TestHarness):
    
    def __init___(self, passing: int, failing: int, time_limit: float, command: str) -> None:
        self.__passing: int = passing
        self.__failing: int = failing
        self.__time_limit: float = time_limit
        self.__command: str = command


class Test(object):
    
    def __init__(self, identifier):
        self.__identifier = identifier
