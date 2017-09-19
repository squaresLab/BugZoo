from typing import Dict

class LineSpectra(object):
    def __init__(self, ep: int, ef: int, np: int, nf: int) -> None:
        assert ep >= 0
        assert ef >= 0
        assert np >= 0
        assert nf >= 0

        self.__ep = ep
        self.__ef = ef
        self.__np = np
        self.__nf = nf


    @attribute
    def ep(self) -> int:
        return self.__ep

    @attribute
    def ef(self) -> int:
        return self.__ef


    @attribute
    def np(self) -> int:
        return self.__np


    @attribute
    def nf(self) -> int:
        return self.__nf


class FileSpectra(object):
    def __init__(self, line_to_row: Dict[int, LineSpectra]) -> None:
        self.__line_to_row = line_to_row

class Spectra(object):
    pass

