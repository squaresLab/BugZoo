class FileChar(object):
    """
    Encodes the location of a given character in a source code file.
    """
    def __init__(self,
                 filename: str,
                 offset: int
                 ) -> None:
        self.__filename = filename
        self.__offset = offset

    def __str__(self) -> str:
        return "{}[{}]".format(self.filename, self.offset)

    @property
    def filename(self) -> str:
        """
        The name of the file to which this character belongs.
        """
        return self.__filename

    @property
    def offset(self) -> int:
        """
        The number of characters that precede this character in the file.
        """
        return self.__offset


class FileCharRange(object):
    """
    Describes a contiguous range of characters in a single file.
    """
    def __init__(self,
                 start: FileChar,
                 stop: FileChar
                 ) -> None:
        self.__start = start
        self.__stop = stop

    def __str__(self) -> str:
        return "{}[{}..{}]".format(self.filename,
                                   self.start.offset,
                                   self.stop.offset)

    @property
    def filename(self) -> str:
        """
        The name of the file that this character range covers.
        """
        return self.start.filename

    @property
    def start(self) -> FileChar:
        """
        The location of the character at which this range begins.
        """
        return self.__start

    @property
    def stop(self) -> FileChar:
        """
        The location of the character at which this range ends.

        TODO inclusive?
        """
        return self.__stop

    def __len__(self) -> int:
        """
        Returns the length of this range, as measured by the number of
        characters that it spans.
        """
        return self.stop.offset - self.start.offset
