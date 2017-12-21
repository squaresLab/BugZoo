class Language(Enum):
    C = 'c'
    CPP = 'cpp'
    JAVA = 'java'
    PYTHON = 'python'

    def __init__(self, name: str) -> None:
        self.__name = name

    @property
    def name(self) -> str:
        """
        The canonical name for this language.
        """
        return self.__name
