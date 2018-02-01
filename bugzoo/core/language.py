from bugzoo.coverage import CoverageExtractor, \
                            CCoverageExtractor
import enum


class LanguageEnumMeta(enum.EnumMeta):
    def __getitem__(self, name):
        return super().__getitem__(name.upper())


class Language(enum.Enum, metaclass=LanguageEnumMeta):
    C = ("c", CCoverageExtractor())
    CPP = ("cpp", CCoverageExtractor())
    # JAVA = None
    # PYTHON = None

    def __init__(self,
                 name: str,
                 coverage_extractor: CoverageExtractor
                 ) -> None:
        self.__name = name
        self.__coverage_extractor = coverage_extractor

    @property
    def name(self) -> str:
        """
        The canonical name of this language.
        """
        return self.__name
    __str__ = name

    @property
    def coverage_extractor(self) -> CoverageExtractor:
        """
        The default coverage extractor used to obtain coverage information
        for programs written in this language.
        """
        return self.__coverage_extractor
