from bugzoo.coverage import CoverageExtractor, \
                            CCoverageExtractor
import enum


class LanguageEnumMeta(enum.EnumMeta):
    def __getitem__(self, name):
        return super().__getitem__(name.upper())


class Language(enum.Enum, metaclass=LanguageEnumMeta):
    C = CCoverageExtractor()
    CPP = CCoverageExtractor()
    # JAVA = None
    # PYTHON = None

    def __init__(self, coverage_extractor: CoverageExtractor) -> None:
        self.__coverage_extractor = coverage_extractor

    @property
    def coverage_extractor(self) -> CoverageExtractor:
        """
        The default coverage extractor used to obtain coverage information
        for programs written in this language.
        """
        return self.__coverage_extractor
