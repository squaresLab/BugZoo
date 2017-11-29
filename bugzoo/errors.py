class SourceNotFoundWithURL(BaseException):
    """
    Indicates that no source has been found that matches a provided URL.
    """
    def __init__(self, url):
        self.__url = url
        super().__init__("no source registered with URL: {}".format(url))


    @property
    def url(self):
        return self.__url


class SourceNotFoundWithName(BaseException):
    """
    Indicates that there exists no source registered with a given name.
    """
    def __init__(self, name):
        self.__name = name
        super().__init__("no source registered with name: {}".format(name))


    @property
    def name(self):
        return self.__name


class SourceAlreadyRegisteredWithURL(BaseException):
    """
    Indicates that there exists a source that is already registered with a
    given URL.
    """
    def __init__(self, url):
        self.__url = url
        super().__init__("source already registered with URL: {}".format(url))


    @property
    def url(self):
        return self.__url
