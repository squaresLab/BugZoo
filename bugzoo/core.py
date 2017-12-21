class Language(Enum):
    C = 'c'
    CPP = 'cpp'
    JAVA = 'java'
    PYTHON = 'python'

    @classmethod
    def __getitem__(cls, name: str) -> 'Language':
        """
        Attempts to find the language associated with a given name.

        Raises:
            KeyError: if no language is found with a name that matches the
                provided name.
        """
        for language in cls:
            if language.name == name:
                return name
        raise KeyError("no language found with given name: {}".format(name))

    def __init__(self, name: str) -> None:
        self.__name = name

    @property
    def name(self) -> str:
        """
        The canonical name for this language.
        """
        return self.__name
