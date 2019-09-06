# -*- coding: utf-8 -*-
__all__ = ('FileLine', 'FileLineSet', 'FileLineMap')

import typing
import collections.abc
from typing import (Dict, List, Set, Iterator, Iterable, Any, FrozenSet,
                    Callable, Optional, Tuple, TypeVar, MutableMapping,
                    Mapping)

from deprecated import deprecated
import attr

T = TypeVar('T')


@attr.s(frozen=True, slots=True)
class FileLine:
    """Represents a one-indexed line within a specific file."""
    filename = attr.ib(type=str)
    num = attr.ib(type=int)

    @staticmethod
    def from_string(s: str) -> 'FileLine':
        fn, _, s_num = s.rpartition(':')
        num = int(s_num)
        return FileLine(fn, num)

    @staticmethod
    @deprecated(version='2.1.29', reason='Replaced by FileLineMap.')
    def compactify(d: Dict['FileLine', Any]) -> Dict[str, Dict[int, Any]]:
        """
        Converts a dictionary that is indexed by FileLine objects into a
        nested dictionary structures that maps from file names to a dictionary
        of line numbers.
        """
        assert isinstance(d, dict)
        assert all(isinstance(x, FileLine) for x in d)

        out = {} # type: Dict[str, Dict[int, Any]]
        for (line, val) in d.items():
            if not line.filename in out:
                out[line.filename] = {}
            out[line.filename][line.num] = val
        return out

    @staticmethod
    @deprecated(version='2.1.29', reason='Replaced by FileLineMap.')
    def decompactify(d: Dict[str, Dict[int, Any]]) -> 'Dict[FileLine, Any]':
        lines = {} # type: Dict['FileLine', Any]
        for fn in d:
            for num in d[fn]:
                lines[FileLine(fn, num)] = d[fn][num]
        return lines

    def __str__(self) -> str:
        return "{}:{}".format(self.filename, self.num)


# see: https://github.com/python/mypy/issues/5446
if typing.TYPE_CHECKING:
    BaseSet = Set[FileLine]
    BaseMap = MutableMapping[FileLine, T]
else:
    BaseSet = collections.abc.Set
    BaseMap = collections.abc.MutableMapping


class FileLineMap(BaseMap):
    """
    An efficient implementation of maps indexed by file lines.
    Note that operations on instances of this class are NOT thread safe.
    """
    def __init__(self, contents: Mapping[FileLine, T]) -> None:
        self.__contents = {}  # type: Dict[str, Dict[int, T]]
        self.__length = 0
        for line, val in contents.items():
            self[line] = val

    def __iter__(self) -> Iterator[FileLine]:
        for fn in self.__contents:
            for lineno in self.__contents[fn]:
                yield FileLine(fn, lineno)

    def __len__(self) -> int:
        return self.__length

    def __getitem__(self, line: FileLine) -> T:
        return self.__contents[line.filename][line.num]

    def __setitem__(self, line: FileLine, val: T) -> None:
        if line.filename not in self.__contents:
            self.__contents[line.filename] = {}
        if line.num not in self.__contents[line.filename]:
            self.__length += 1
        self.__contents[line.filename][line.num] = val

    def __delitem__(self, line: FileLine) -> None:
        del self.__contents[line.filename][line.num]
        if not self.__contents[line.filename]:
            del self.__contents[line.filename]
        self.__length -= 1


class FileLineSet(BaseSet):
    """A set of file lines."""
    @staticmethod
    def from_dict(d: Dict[str, List[int]]) -> 'FileLineSet':
        contents = {fn: set(lines) for (fn, lines) in d.items()}
        return FileLineSet(contents)

    @staticmethod
    def from_list(lst: List[FileLine]) -> 'FileLineSet':
        """Converts a list of file lines into a FileLineSet."""
        return FileLineSet.from_iter(lst)

    @staticmethod
    def from_iter(itr: Iterable[FileLine]) -> 'FileLineSet':
        d = {} # type: Dict[str, Set[int]]
        for line in itr:
            if not line.filename in d:
                d[line.filename] = set()
            d[line.filename].add(line.num)
        return FileLineSet(d)

    def __init__(self,
                 contents: Optional[Dict[str, Set[int]]] = None
                 ) -> None:
        if contents is None:
            contents = {}
        self.__contents = \
            {fn: frozenset(line_nums) for (fn, line_nums) in contents.items()} # type: Dict[str, FrozenSet[int]]

    def __iter__(self) -> Iterator[FileLine]:
        """Returns an iterator over the lines contained in this set."""
        for fn in self.__contents:
            for num in self.__contents[fn]:
                yield FileLine(fn, num)

    def __repr__(self) -> str:
        output = []
        for (fn, set_lines) in self.__contents.items():
            lines = sorted(set_lines)
            if lines == []:
                continue

            ranges = [[lines[0], lines[0]]]
            for num in lines[1:]:
                if num == ranges[-1][1] + 1:
                    ranges[-1][1] = num
                else:
                    ranges.append([num, num])

            range_strs = []
            for (start, stop) in ranges:
                if start == stop:
                    range_strs.append(str(start))
                else:
                    range_strs.append("{}..{}".format(start, stop))

            output.append("{}: {}".format(fn, '; '.join(range_strs)))
        return '\n'.join(output)

    def __len__(self) -> int:
        """Returns a count of the number of file lines in the set."""
        return sum(len(lines) for lines in self.__contents.values())

    def __getitem__(self, fn: str) -> Iterator[FileLine]:
        """
        Returns an iterator over all lines contained in this set that belong
        to a given file.
        """
        if not fn in self.__contents:
            raise StopIteration
        for num in self.__contents[fn]:
            yield FileLine(fn, num)

    def __contains__(self, elem: object) -> bool:
        """Determines whether this set contains a given element."""
        if not isinstance(elem, FileLine):
            return False
        return elem.filename in self.__contents and \
               elem.num in self.__contents[elem.filename]

    def filter(self,
               predicate: Callable[[FileLine], 'FileLineSet']
               ) -> 'FileLineSet':
        """
        Returns a subset of the file lines within this set that satisfy a given
        filtering criterion.
        """
        filtered = [fileline for fileline in self if predicate(fileline)]
        return FileLineSet.from_list(filtered)

    def union(self, *others: Iterable[FileLine]) -> Set[FileLine]:
        """
        Returns a set that contains the union of the file lines contained
        within this set and the given collections of file lines.
        """
        sources = (self,)  # type: Tuple[Iterable[FileLine], ...]
        sources = sources + others
        return FileLineSet.from_iter(l for src in sources for l in src)

    def intersection(self, *others: Iterable[FileLine]) -> Set[FileLine]:
        """
        Returns a set of file lines that contains the intersection of the lines
        within this set and a given set.
        """
        lines = set(self)
        for src in others:
            lines &= set(src)
        return FileLineSet.from_iter(lines)

    def restricted_to_files(self, filenames: List[str]) -> 'FileLineSet':
        """
        Returns a variant of this set that only contains lines that occur in
        any one of the given files. (I.e., returns the intersection of this set
        and the set of all lines from a given set of files.)
        """
        restricted = {} # type: Dict[str, Set[int]]
        for fn in filenames:
            if fn in self.__contents:
                restricted[fn] = set(self.__contents[fn])
        return FileLineSet(restricted)

    @property
    def files(self) -> List[str]:
        """
        A list of the names of the files that are represented by the file lines
        in this set.
        """
        return list(self.__contents.keys())

    def to_dict(self) -> Dict[str, List[int]]:
        """
        Returns the contents of this set as a JSON/YAML-ready dictionary.
        """
        return {fn: list(lines)
                for (fn, lines) in self.__contents.items()}
