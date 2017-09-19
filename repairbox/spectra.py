from typing import Dict, List

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


    def __getitem__(self, num: int) -> LineSpectra:
        """
        Retrieves the spectra information for a given line (specified by line
        number) in this file.
        """
        assert num >= 0
        return self.__line_to_row[num]


class Spectra(object):
    
    @staticmethod
    def from_coverage(passing: List[CoverageReport], failing: List[CoverageReport]) -> 'Spectra':
        assert len(passing) + len(failing) > 0

        # WARNING: assumes set of files is the same
        filenames = (passing + failing)[0].files

        file_to_spectra = {}
        for fn in filenames:
            f_passing = [report[fn] for report in passing]
            f_failing = [report[fn] for report in failing]
            file_to_spectra[fn] = FileSpectra(f_passing, f_failing)

        return Spectra(file_to_spectra)


    def __init__(self, file_to_spectra: Dict[str, FileSpectra]) -> None:
        self.__file_to_spectra = file_to_spectra


    def __getitem__(self, fn: str) -> FileSpectra:
        """
        Retrieves the spectra information for a given file.
        """
        assert fn != ""
        return self.__file_to_spectra[fn]
