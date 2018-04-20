import sys
from typing import Dict, List, Iterator, Any, Optional
from copy import copy


__ALL__ = [
    'BugZooException',
    'BadManifestFile',
    'UnexpectedStatusCode',
    'BugAlreadyBuilt',
    'BugNotFound',
    'SourceNotFoundWithURL',
    'SourceNotFoundWithName',
    'SourceAlreadyRegisteredWithURL',
    'NameInUseError',
    'BugNotInstalledError',
    'ImageBuildFailed'
]


class BugZooException(Exception):
    """
    Base class for all BugZoo exceptions.
    """
    @staticmethod
    def from_dict(d: Dict[str, Any]) -> 'BugZooException':
        """
        Reconstructs a BugZoo exception from a dictionary-based description.
        """
        assert 'error' in d
        d = d['error']

        cls = getattr(sys.modules[__name__], d['kind'])
        assert issubclass(cls, BugZooException)
        return cls.from_message_and_data(d['message'],
                                         d.get('data', {}))

    def __init__(self, message: str) -> None:
        self.__message = message
        super().__init__(message)

    @property
    def message(self) -> str:
        """
        A short summary of the exception.
        """
        return self.__message

    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'BugZooException':
        """
        Reproduces an exception from the message and data contained in its
        dictionary-based description.
        """
        return cls(message)

    @property
    def data(self) -> Dict[str, Any]:
        return {}

    def to_dict(self) -> Dict[str, Any]:
        """
        Creates a dictionary-based description of this exception, ready to be
        serialised as JSON or YAML.
        """
        jsn = {
            'kind': self.__class__.__name__,
            'message': self.message
        } # type: Dict[str, Any]
        data = self.data
        if data:
            jsn['data'] = data
        jsn = {'error': jsn}
        return jsn


class BadManifestFile(BugZooException):
    """
    Thrown when the server fails to parse a manifest file.
    """
    def __init__(self, reason: str) -> None:
        msg = "bad manifest file: {}".format(reason)
        super().__init__(msg)


class UnexpectedStatusCode(BugZooException):
    """
    Indicates that the API request produced an unexpected status code.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'UnexpectedStatusCode':
        return UnexpectedStatusCode(data['code'])

    def __init__(self, code: int) -> None:
        self.__code = code
        super().__init__("API request produced unexpected status code: {}".format(code))

    @property
    def code(self) -> int:
        """
        The unexpected status code that was produced by the API request.
        """
        return self.__code

    @property
    def data(self) -> Dict[str, Any]:
        return {'code': self.code}


class BugAlreadyBuilt(BugZooException):
    """
    Indicates that the given bug has already been installed on the server.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'BugAlreadyBuilt':
        return BugAlreadyBuilt(data['bug'])

    def __init__(self, bug: str) -> None:
        self.__bug = bug
        super().__init__("bug already built: {}".format(bug))

    @property
    def bug(self) -> str:
        """
        The name of the bug.
        """
        return self.__bug

    @property
    def data(self) -> Dict[str, Any]:
        return {'bug': self.bug}


class BugNotFound(BugZooException):
    """
    Indicates that no bug was found that matches the provided identifier.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'BugNotFound':
        return BugNotFound(data['bug'])

    def __init__(self, bug: str) -> None:
        self.__bug = bug
        super().__init__("no bug found with name: {}".format(bug))

    @property
    def bug(self) -> str:
        """
        The name of the requested bug.
        """
        return self.__bug

    @property
    def data(self) -> Dict[str, Any]:
        return {'bug': self.bug}


class SourceNotFoundWithURL(BugZooException):
    """
    Indicates that no source has been found that matches a provided URL.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'SourceNotFoundWithURL':
        return SourceNotFoundWithURL(data['url'])

    def __init__(self, url: str) -> None:
        self.__url = url
        super().__init__("no source registered with URL: {}".format(url))

    @property
    def url(self) -> str:
        return self.__url

    @property
    def data(self) -> Dict[str, Any]:
        return {'url': self.url}


class SourceNotFoundWithName(BugZooException):
    """
    Indicates that there exists no source registered with a given name.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'SourceNotFoundWithName':
        return SourceNotFoundWithName(data['name'])

    def __init__(self, name: str) -> None:
        self.__name = name
        super().__init__("no source registered with name: {}".format(name))

    @property
    def name(self) -> str:
        return self.__name

    @property
    def data(self) -> Dict[str, Any]:
        return {'name': self.name}


class SourceAlreadyRegisteredWithURL(BugZooException):
    """
    Indicates that there exists a source that is already registered with a
    given URL.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'SourceAlreadyRegisteredWithURL':
        return SourceAlreadyRegisteredWithURL(data['url'])

    def __init__(self, url: str) -> None:
        self.__url = url
        super().__init__("source already registered with URL: {}".format(url))

    @property
    def url(self) -> str:
        return self.__url

    @property
    def data(self) -> Dict[str, Any]:
        return {'url': self.url}


class NameInUseError(BugZooException):
    """
    Indicates that a given name is already in use by another resource.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'NameInUseError':
        return NameInUseError(data['name'])

    def __init__(self, name: str) -> None:
        self.__name = name
        super().__init__("name already in use: {}".format(name))

    @property
    def name(self) -> str:
        return self.__name

    @property
    def data(self) -> Dict[str, Any]:
        return {'name': self.name}


class BugNotInstalledError(BugZooException):
    """
    Indicates that a given bug hasn't been installed.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'BugNotInstalledError':
        return BugNotInstalledError(data['bug'])

    def __init__(self, bug: str) -> None:
        self.__bug = bug
        super().__init__("bug not installed: {}".format(bug))

    @property
    def bug(self) -> str:
        """
        The name of the bug that is not installed.
        """
        return self.__bug

    @property
    def data(self) -> Dict[str, Any]:
        return {'bug': self.bug}


class ImageNotInstalled(BugZooException):
    """
    Indicates that a given Docker image has not been installed on the server.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: Dict[str, Any]
                              ) -> 'ImageNotInstalled':
        return ImageNotInstalled(data['image'])

    def __init__(self, image: str) -> None:
        self.__image = image
        super().__init__(image)

    @property
    def image(self) -> str:
        """
        The name of the Docker image that is not installed.
        """
        return self.__image

    @property
    def data(self) -> Dict[str, Any]:
        return {'image': self.image}


class ImageBuildFailed(BugZooException):
    """
    Indicates that an attempt to build a given Docker image has failed.
    """
    def __init__(self,
                 image_name: str,
                 log: List[Dict[str, str]]
                 ) -> None:
        self.__image_name = image_name
        self.__log = copy(log)
        msg = "failed to build image: {}".format(image_name)
        super().__init__(image_name)

    @property
    def image_name(self) -> str:
        """
        The name of the image that failed to build.
        """
        return self.__image_name

    @property
    def log(self) -> Iterator[Dict[str, str]]:
        """
        A log of the failed build attempt.
        """
        for entry in self.__log:
            yield entry
