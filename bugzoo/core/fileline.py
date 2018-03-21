from typing import Dict, List, Set, Iterator, Any


class FileLine(object):
    """
    Used to represent an one-indexed line within a specific file.
    """
    @staticmethod
    def compactify(d: Dict['FileLine', Any]) -> Dict[str, Dict[int, Any]]:
        """
        Converts a dictionary that is indexed by FileLine objects into a
        nested dictionary structures that maps from file names to a dictionary
        of line numbers.
        """
        assert isinstance(d, dict)
        assert all(isinstance(x, FileLine) for x in d)

        out = {}
        for (line, val) in d.items():
            if not line.filename in out:
                out[line.filename] = {}
            out[line.filename][line.num] = val
        return out

    @staticmethod
    def decompactify(d: Dict[str, Dict[int, Any]]) -> 'Dict[FileLine, Any]':
        lines = {}
        for fn in d:
            for num in d[fn]:
                lines[FileLine(fn, num)] = d[fn][num]
        return lines

    def __init__(self, fn: str, num: int):
        self.__fn = fn
        self.__num = num

    def __hash__(self) -> int:
        return hash((self.__fn, self.__num))

    def __eq__(self, other) -> bool:
        return  isinstance(other, FileLine) and \
                self.filename == other.filename and \
                self.num == other.num

    @property
    def filename(self) -> str:
        """
        The name of the file to which this line belongs.
        """
        return self.__fn

    fn = filename

    @property
    def num(self) -> int:
        """
        The one-indexed number of this line.
        """
        return self.__num

    def __str__(self) -> str:
        return "{}:{}".format(self.filename, self.num)

    __repr__ = __str__


class FileLineSet(object):
    T = Dict[str, Set[int]]

    @staticmethod
    def from_dict(d: Dict[str, List[int]]) -> 'FileLineSet':
        contents = {fn: frozenset(lines) for (fn, lines) in d.items()}
        return FileLineSet(contents)

    def from_list(lst: List[FileLine]) -> 'FileLineSet':
        """
        Converts a list of file lines into a FileLineSet.
        """
        d = {}
        for line in lst:
            if not line.filename in d:
                d[line.filename] = set()
            d[line.filename].add(line.num)
        return FileLineSet(d)

    def __init__(self, contents: T):
        self.__contents = \
            {fn: frozenset(line_nums) for (fn, line_nums) in contents.items()}

    def __iter__(self) -> Iterator[FileLine]:
        """
        Returns an iterator over the lines contained in this set.
        """
        for fn in self.__contents:
            for num in self.__contents[fn]:
                yield FileLine(fn, num)

    def __repr__(self) -> str:
        output = []
        for (fn, lines) in self.__contents.items():
            lines = sorted(lines)
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

    def __getitem__(self, fn: str) -> Iterator[FileLine]:
        """
        Returns an iterator over all lines contained in this set that belong
        to a given file.
        """
        if not fn in self.__contents:
            raise StopIteration
        for num in self.__contents[fn]:
            yield FileLine(fn, num)

    def __contains__(self, file_line: FileLine) -> bool:
        """
        Determines whether a given file-line is contained within this set.
        """
        return file_line.fn in self.__contents and \
               file_line.num in self.__contents[file_line.fn]

    def union(self, other: 'FileLineSet') -> 'FileLineSet':
        """
        Returns a set of file lines that contains the union of the lines within
        this set and a given set.
        """
        # this isn't the most efficient implementation, but frankly, it doesn't
        # need to be.
        assert isinstance(other, FileLineSet)
        l_self = list(self)
        l_other = list(other)
        l_union = l_self + l_other
        return FileLineSet.from_list(l_union)

    def intersection(self, other: 'FileLineSet') -> 'FileLineSet':
        """
        Returns a set of file lines that contains the intersection of the lines
        within this set and a given set.
        """
        # this isn't the most efficient implementation, but frankly, it doesn't
        # need to be.
        assert isinstance(other, FileLineSet)
        set_self = set(self)
        set_other = set(other)
        set_union = l_self & l_other
        return FileLineSet.from_list(list(set_union))

    def to_dict(self) -> Dict[str, List[int]]:
        """
        Returns the contents of this set as a JSON/YAML-ready dictionary.
        """
        return {fn: list(lines)
                for (fn, lines) in self.__contents.items()}
