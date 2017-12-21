import enum


class LanguageEnumMeta(enum.EnumMeta):
    def __getitem__(self, name):
        return super().__getitem__(name.upper())


class Language(enum.Enum, metaclass=LanguageEnumMeta):
    C = enum.auto()
    CPP = enum.auto()
    JAVA = enum.auto()
    PYTHON = enum.auto()
