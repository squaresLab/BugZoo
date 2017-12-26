from copy import copy
from typing import List, Dict, Iterable
from bugzoo.coverage import FileLine, \
                            Spectra
from bugzoo.localization.suspiciousness import SuspiciousnessMetric


class Localization(object):
    """
    Used to represent a line-level fault localization for a particular
    problem as a mapping from lines to their suspiciousness scores.
    """
    @staticmethod
    def from_spectra(spectra: Spectra,
                     metric: SuspiciousnessMetric
                     ) -> 'Localization':
        loc = {}
        for line in spectra:
            row = spectra[line]
            loc[line] = metric(row.ep, row.np, row.ef, row.nf)
        return Localization(loc)

    def __init__(self,
                 scores: Dict[FileLine, float]
                 ) -> None:
        self.__scores = {l: s for (l, s) in scores.items() if s > 0}

        sum_scores = float(sum(self.__scores.values()))

        self.__normalized = \
            {line: s/sum_scores for (line, s) in self.__scores.items()}

    def restricted_to_files(self,
                            filenames: List[str]
                            ) -> 'Localization':
        """
        Returns a variant of this fault localization that only contains entries
        for lines that belong to any of the specified files.
        """
        scores = {l: s for (l, s) in self.__scores.items() \
                  if l.filename in filenames}
        return Localization(scores)

    def score(self, line: FileLine) -> float:
        """
        Returns the suspiciousness score for a given line. If no suspiciousness
        score is recorded for the given line, then a suspiciousness of zero
        is returned instead.
        """
        return self.__scores.get(line, 0.0)

    __getitem__ = score

    def __iter__(self) -> List[FileLine]:
        """
        Returns an iterator over all lines within this localization with a
        suspiciousness above zero.
        """
        for line in self.__scores:
            yield line

    # TODO: restricted_to_files(loc, fns) -> Localization
    # TODO: restricted_to_functions(loc) -> Localization
