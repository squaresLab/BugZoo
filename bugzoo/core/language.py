import enum


class LanguageEnumMeta(enum.EnumMeta):
    def __getitem__(self, name):
        return super().__getitem__(name.upper())


class Language(enum.Enum, metaclass=LanguageEnumMeta):
    C = ("c",)
    CPP = ("cpp",)
    # JAVA = None
    # PYTHON = None

    def __init__(self, name: str):
        self.__name = name

    @property
    def name(self) -> str:
        """
        The canonical name of this language.
        """
        return self.__name

    __str__ = name
