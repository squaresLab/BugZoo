from typing import List, Dict, Iterable, Iterator
import numpy.random

from bugzoo.core.fileline import FileLine
from bugzoo.core.spectra import Spectra
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
                            filenames: Iterable[str]
                            ) -> 'Localization':
        """
        Returns a variant of this fault localization that only contains entries
        for lines that belong to any of the specified files.
        """
        scores = {l: s for (l, s) in self.__scores.items() \
                  if l.filename in filenames}
        return Localization(scores)

    def restricted_to_lines(self,
                            lines: Iterable[FileLine]
                            ) -> 'Localization':
        """
        Returns a variant of this fault localization that only contains entries
        for lines that belong to a provided set of lines.
        """
        restricted = {} # type: Dict[FileLine, float]
        for line in lines:
            try:
                restricted[line] = self.__scores[line]
            except KeyError:
                pass
        return Localization(restricted)

    def sample(self) -> FileLine:
        """
        Samples a line from this fault localization according to the
        probability distribution that is implicitly defined by the
        suspiciousness values in this localization.

        Returns:
            a line sampled from this localization.

        Raises:
            ValueError: if there are no suspicious lines within this fault
                localization.
        """
        lines = list(self.__normalized.keys())
        dist = [self.__normalized[line] for line in lines]
        try:
            return numpy.random.choice(lines, p=dist)
        except ValueError:
            raise ValueError

    def without_line(self,
                     line: FileLine,
                     error_if_absent: bool = False
                     ) -> 'Localization':
        """
        Returns a variant of this fault localization with a given line removed.

        Parameters:
            line: the line to remove.
            error_if_absent: an optional flag that, if set to True, will raise
                an error if the given line isn't represented by this
                localization.

        Returns:
            a variant of this fault localization without the given line.
        """
        scores = {l: s for (l, s) in self.__scores.items() if l != line}
        return Localization(scores)

    def score(self, line: FileLine) -> float:
        """
        Returns the suspiciousness score for a given line. If no suspiciousness
        score is recorded for the given line, then a suspiciousness of zero
        is returned instead.
        """
        return self.__scores.get(line, 0.0)

    __getitem__ = score

    def __iter__(self) -> Iterator[FileLine]:
        """
        Returns an iterator over all lines within this localization with a
        suspiciousness above zero.
        """
        return self.__scores.__iter__()
