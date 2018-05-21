from typing import List, Dict, Iterator

from .coverage import TestSuiteCoverage
from .fileline import FileLine


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

    def __repr__(self) -> str:
        return "({},{}; {},{})".format(self.ep, self.np, self.ef, self.nf)


class Spectra(object):
    """
    Contains a summary of the number of passing and failing tests that cover
    each line in a given project.
    """
    @staticmethod
    def from_coverage(coverage: TestSuiteCoverage) -> 'Spectra':
        # tally the number of times that each line is touched by a passing
        # or failing test
        tally_failing = {} # type: Dict[FileLine, int]
        tally_passing = {} # type: Dict[FileLine, int]

        for test in coverage.passing:
            for line in coverage[test].lines:
                tally_passing[line] = tally_passing.get(line, 1)

        for test in coverage.failing:
            for line in coverage[test].lines:
                tally_failing[line] = tally_failing.get(line, 1)

        return Spectra(len(coverage.passing),
                       len(coverage.failing),
                       FileLine.compactify(tally_passing),
                       FileLine.compactify(tally_failing))

    def __init__(self,
                 num_passing: int,
                 num_failing: int,
                 tally_passing: Dict[str, Dict[int, int]],
                 tally_failing: Dict[str, Dict[int, int]]
                 ) -> None:
        self.__num_passing = num_passing
        self.__num_failing = num_failing
        self.__tally_passing = tally_passing
        self.__tally_failing = tally_failing

    def __getitem__(self, line: FileLine) -> LineSpectra:
        """
        Retrieves the spectra information for a given line.
        """
        if not line.filename in self.__tally_passing:
            ep = 0
        else:
            ep = self.__tally_passing[line.filename].get(line.num, 0)

        if not line.filename in self.__tally_failing:
            ef = 0
        else:
            ef = self.__tally_failing[line.filename].get(line.num, 0)

        np = self.__num_passing - ep
        nf = self.__num_failing - ef

        return LineSpectra(ep, ef, np, nf)

    def __iter__(self) -> Iterator[FileLine]:
        """
        Returns an iterator over the source code lines that are represented
        in this spectra.
        """
        passing_lines = \
            set(FileLine.decompactify(self.__tally_passing).keys())
        failing_lines = \
            set(FileLine.decompactify(self.__tally_failing).keys())
        lines = passing_lines.union(failing_lines)
        for line in lines:
            yield line

    def __repr__(self) -> str:
        bfr = ["{}: {}".format(line, repr(self[line])) for line in self]
        return 'Spectra({})'.format('\n'.join(bfr))

    def restricted_to_files(self,
                            filenames: List[str]
                            ) -> 'Spectra':
        """
        Returns a variant of this spectra that only contains entries for
        lines that appear in any of the files whose name appear in the
        given list.
        """
        tally_passing = \
            {fn: entries for (fn, entries) in self.__tally_passing.items() \
             if fn in filenames}
        tally_failing = \
            {fn: entries for (fn, entries) in self.__tally_failing.items() \
             if fn in filenames}
        return Spectra(self.__num_passing,
                       self.__num_failing,
                       tally_passing,
                       tally_failing)
