class SourceNotFound(Exception):
    """
    Used to indicate that no source has been found that matches a provided URI.
    """
    def __init__(self, uri):
        self.__uri = uri
        super().__init__("no source registered with URI: {}".format(url))


    @property
    def uri(self):
        return self.__uri
