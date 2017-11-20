import typing
from typing import Dict, List
from repairbox.coverage import CoverageReport, FileCoverageReport


class LineSpectra(object):
    """
    Summarises the coverage information for a single line in the program in
    terms of the number of passing and failing tests that do and do not
    cover it, respectively.
    """
    def __init__(self, ep: int, ef: int, np: int, nf: int) -> None:
        assert ep >= 0
        assert ef >= 0
        assert np >= 0
        assert nf >= 0

        self.__ep = ep
        self.__ef = ef
        self.__np = np
        self.__nf = nf


    @property
    def ep(self) -> int:
        """
        The number of passing tests that cover this line.
        """
        return self.__ep

    @property
    def ef(self) -> int:
        """
        The number of failing tests that cover this line.
        """
        return self.__ef


    @property
    def np(self) -> int:
        """
        The number of passing tests that do not cover this line.
        """
        return self.__np


    @property
    def nf(self) -> int:
        """
        The number of failing tests that do not cover this line.
        """
        return self.__nf


class FileSpectra(object):
    @staticmethod
    def from_coverage(passing: List[FileCoverageReport],
                      failing: List[FileCoverageReport]) -> 'FileSpectra':
        assert len(passing) + len(failing) > 0
        lines = (passing + failing).lines

        line_to_spectra = {}
        for line in lines:
            ep = ef = np = nf = 0

            for p in passing:
                if p.was_hit(line):
                    ep += 1
                else:
                    np += 1

            for f in failing:
                if f.was_hit(line):
                    ef += 1
                else:
                    nf += 1

            line_to_spectra[line] = LineSpectra(ep, ef, np, nf)

        return FileSpectra(line_to_spectra)


    def __init__(self, line_to_spectra: Dict[int, LineSpectra]) -> None:
        self.__line_to_row = line_to_spectra


    @property
    def lines(self) -> List[int]:
        """
        A list of the numbers of the lines that are included in this spectra.
        """
        return list(self.__line_to_spectra.keys())


    def __getitem__(self, num: int) -> LineSpectra:
        """
        Retrieves the spectra information for a given line (specified by line
        number) in this file.
        """
        assert num >= 0
        return self.__line_to_spectra[num]


class Spectra(object):
    
    @staticmethod
    def from_coverage(passing: List[CoverageReport],
                      failing: List[CoverageReport]) -> 'Spectra':
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


    @property
    def files(self) -> List[str]:
        """
        A list of the names of the files that are included in this spectra.
        """
        return list(self.__file_to_spectra.keys())


    def __getitem__(self, fn: str) -> FileSpectra:
        """
        Retrieves the spectra information for a given file.
        """
        assert fn != ""
        return self.__file_to_spectra[fn]
