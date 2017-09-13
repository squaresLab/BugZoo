class TestHarness(object):
    
    @staticmethod
    def fromYAML(yml: dict) -> TestHarness:
        """
        Constructs a test harness from its YAML-based (i.e., dictionary)
        description.
        """
        typ = yml['type']
        # route based on type
        if typ == 'genprog':
            return GenProgTestHarness.fromYAML(yml)

        raise Exception("unexpected test harness type: {}".format(typ))


class GenProgTestHarness(TestHarness):
    @staticmethod
    def from_yaml(yml: dict) -> 'GenProgTestHarness':
        passing = yml['passing']
        failing = yml['failing']
        time_limit = yml['time-limit']
        command = yml.get('command', './test.sh __ID__')
        return GenProgTestHarness(passing, failing, time_limit, command)


    def __init___(self, passing: int, failing: int, time_limit: float, command: str) -> None:
        assert time_limit > 0
        assert passing >= 0
        assert failing > 0

        self.__passing = passing
        self.__failing = failing
        self.__time_limit = time_limit
        self.__command = command


    @property
    def num_passing(self):
        """
        The number of passing tests in the test suite.
        """
        return self.__passing


    @property
    def num_failing(self):
        """
        The number of failing tests in the test suite.
        """
        return self.__failing


class Test(object):
    
    def __init__(self, identifier):
        self.__identifier = identifier
