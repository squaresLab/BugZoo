import sys
import textwrap
from collections.abc import Iterator
from typing import Any

import requests

__all__ = (
    "BugZooException",
    "ConnectionFailure",
    "BadManifestFile",
    "BadCoverageInstructions",
    "UnexpectedResponse",
    "UnexpectedServerError",
    "UnexpectedStatusCode",
    "BugAlreadyBuilt",
    "BugAlreadyExists",
    "BugNotFound",
    "SourceNotFoundWithURL",
    "SourceNotFoundWithName",
    "SourceAlreadyRegisteredWithURL",
    "NameInUseError",
    "BugNotInstalledError",
    "ImageBuildFailed",
    "FailedToComputeCoverage",
    "ContainerNotFound",
    "FileNotFound",
    "ArgumentNotSpecified",
    "ImageNotInstalled",
    "ImageAlreadyExists",
    "TestNotFound",
    "ToolNotFound",
    "NoCoverageInstructions",
    "PortInUseError",
)


class BugZooException(Exception):
    """The base class used by all BugZoo exceptions.
    """
    @staticmethod
    def from_dict(d: dict[str, Any]) -> "BugZooException":
        """Reconstructs a BugZoo exception from a dictionary-based description.
        """
        assert "error" in d
        d = d["error"]

        cls = getattr(sys.modules[__name__], d["kind"])
        assert issubclass(cls, BugZooException)
        return cls.from_message_and_data(d["message"],
                                         d.get("data", {}))

    def __init__(self, message: str) -> None:
        self.__message = message
        super().__init__(message)

    @property
    def message(self) -> str:
        """A short summary of the exception.
        """
        return self.__message

    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "BugZooException":
        """Reproduces an exception from the message and data contained in its
        dictionary-based description.
        """
        return cls(message)

    @property
    def data(self) -> dict[str, Any]:
        return {}

    def to_dict(self) -> dict[str, Any]:
        """Creates a dictionary-based description of this exception, ready to be
        serialised as JSON or YAML.
        """
        jsn = {
            "kind": self.__class__.__name__,
            "message": self.message,
        } # type: Dict[str, Any]
        data = self.data
        if data:
            jsn["data"] = data
        jsn = {"error": jsn}
        return jsn


class ConnectionFailure(BugZooException):
    """The client failed to connect to the BugZoo daemon within its allocated
    timeout window.
    """
    def __init__(self) -> None:
        super().__init__("failed to connect to BugZoo server within timeout window.")


class NoCoverageInstructions(BugZooException):
    """No coverage instructions were found for a given bug/container.
    """
    def __init__(self) -> None:
        super().__init__("no coverage instructions available for bug/container")


class UnexpectedServerError(BugZooException):
    """The server encountered an unexpected error whilst dealing with a request.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "UnexpectedServerError":
        return UnexpectedServerError(data["kind"], data["message"])

    @staticmethod
    def from_exception(exception: Exception) -> "UnexpectedServerError":
        cls_name = exception.__class__.__name__
        msg = str(exception)
        return UnexpectedServerError(cls_name, msg)

    def __init__(self, kind: str, message: str) -> None:
        super().__init__(message)
        self.__kind = kind

    @property
    def kind(self) -> str:
        return self.__kind

    @property
    def data(self) -> dict[str, Any]:
        return {
            "kind": self.kind,
            "message": self.message,
        }


class UnexpectedResponse(BugZooException):
    """The server produced a response that was not recognised by the client.
    """
    def __init__(self, response: requests.Response) -> None:
        response_text = textwrap.indent(response.text, " " * 4)
        msg = "unexpected response from server [{}]:\n{}"
        msg = msg.format(response.status_code, response_text)
        super().__init__(msg)
        self.__response = response

    @property
    def response(self) -> requests.Response:
        return self.__response


class BadCoverageInstructions(BugZooException):
    """The associated set of coverage instructions are illegal.
    """
    def __init__(self, reason: str) -> None:
        msg = f"bad coverage instructions: {reason}"
        super().__init__(msg)


class BadManifestFile(BugZooException):
    """The server failed to parse a manifest file.
    """
    def __init__(self, reason: str) -> None:
        msg = f"bad manifest file: {reason}"
        super().__init__(msg)


class UnexpectedStatusCode(BugZooException):
    """The server produced an unexpected status code in response to an
    API request.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "UnexpectedStatusCode":
        return UnexpectedStatusCode(data["code"])

    def __init__(self, code: int) -> None:
        self.__code = code
        super().__init__(f"API request produced unexpected status code: {code}")

    @property
    def code(self) -> int:
        """The unexpected status code that was produced by the API request.
        """
        return self.__code

    @property
    def data(self) -> dict[str, Any]:
        return {"code": self.code}


class BugAlreadyExists(BugZooException):
    """A bug is already registered under a given name on the server.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "BugAlreadyExists":
        return BugAlreadyExists(data["bug"])

    def __init__(self, bug: str) -> None:
        self.__bug = bug
        super().__init__(f"bug already exists: {bug}")

    @property
    def bug(self) -> str:
        """The name of the bug.
        """
        return self.__bug

    @property
    def data(self) -> dict[str, Any]:
        return {"bug": self.bug}


class BugAlreadyBuilt(BugZooException):
    """The given bug has already been installed on the server.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "BugAlreadyBuilt":
        return BugAlreadyBuilt(data["bug"])

    def __init__(self, bug: str) -> None:
        self.__bug = bug
        super().__init__(f"bug already built: {bug}")

    @property
    def bug(self) -> str:
        """The name of the bug.
        """
        return self.__bug

    @property
    def data(self) -> dict[str, Any]:
        return {"bug": self.bug}


class BugNotFound(BugZooException):
    """Indicates that no bug was found that matches the provided identifier.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "BugNotFound":
        return BugNotFound(data["bug"])

    def __init__(self, bug: str) -> None:
        self.__bug = bug
        super().__init__(f"no bug found with name: {bug}")

    @property
    def bug(self) -> str:
        """The name of the requested bug.
        """
        return self.__bug

    @property
    def data(self) -> dict[str, Any]:
        return {"bug": self.bug}


class ToolNotFound(BugZooException):
    """Indicates that no tool was found with the given name.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "ToolNotFound":
        return ToolNotFound(data["tool"])

    def __init__(self, tool: str) -> None:
        self.__tool = tool
        super().__init__(f"no tool found with name: {tool}")

    @property
    def tool(self) -> str:
        return self.__tool

    @property
    def data(self) -> dict[str, Any]:
        return {"tool": self.tool}


class ContainerNotFound(BugZooException):
    """No active container was found with a given identifier.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "ContainerNotFound":
        return ContainerNotFound(data["uid"])

    def __init__(self, uid: str) -> None:
        self.__uid = uid
        super().__init__(f"no container found with uid: {uid}")

    @property
    def uid(self) -> str:
        """The uid of the container.
        """
        return self.__uid

    @property
    def data(self) -> dict[str, Any]:
        return {"uid": self.uid}


class SourceNotFoundWithURL(BugZooException):
    """No source that matches a given URL was found.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "SourceNotFoundWithURL":
        return SourceNotFoundWithURL(data["url"])

    def __init__(self, url: str) -> None:
        self.__url = url
        super().__init__(f"no source registered with URL: {url}")

    @property
    def url(self) -> str:
        return self.__url

    @property
    def data(self) -> dict[str, Any]:
        return {"url": self.url}


class SourceNotFoundWithName(BugZooException):
    """No source that matches a given name was found.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "SourceNotFoundWithName":
        return SourceNotFoundWithName(data["name"])

    def __init__(self, name: str) -> None:
        self.__name = name
        super().__init__(f"no source registered with name: {name}")

    @property
    def name(self) -> str:
        return self.__name

    @property
    def data(self) -> dict[str, Any]:
        return {"name": self.name}


class SourceAlreadyRegisteredWithURL(BugZooException):
    """A source is already registered with a given URL.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "SourceAlreadyRegisteredWithURL":
        return SourceAlreadyRegisteredWithURL(data["url"])

    def __init__(self, url: str) -> None:
        self.__url = url
        super().__init__(f"source already registered with URL: {url}")

    @property
    def url(self) -> str:
        return self.__url

    @property
    def data(self) -> dict[str, Any]:
        return {"url": self.url}


class NameInUseError(BugZooException):
    """A given name is already in use by another resource.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "NameInUseError":
        return NameInUseError(data["name"])

    def __init__(self, name: str) -> None:
        self.__name = name
        super().__init__(f"name already in use: {name}")

    @property
    def name(self) -> str:
        return self.__name

    @property
    def data(self) -> dict[str, Any]:
        return {"name": self.name}


class BugNotInstalledError(BugZooException):
    """A given bug has not been installed.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "BugNotInstalledError":
        return BugNotInstalledError(data["bug"])

    def __init__(self, bug: str) -> None:
        self.__bug = bug
        super().__init__(f"bug not installed: {bug}")

    @property
    def bug(self) -> str:
        """The name of the bug that is not installed.
        """
        return self.__bug

    @property
    def data(self) -> dict[str, Any]:
        return {"bug": self.bug}


class ImageNotInstalled(BugZooException):
    """A given Docker image has not been installed on the server.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "ImageNotInstalled":
        return ImageNotInstalled(data["image"])

    def __init__(self, image: str) -> None:
        self.__image = image
        super().__init__(f"Docker image is not installed: {image}")

    @property
    def image(self) -> str:
        """The name of the Docker image that is not installed.
        """
        return self.__image

    @property
    def data(self) -> dict[str, Any]:
        return {"image": self.image}


class ImageAlreadyExists(BugZooException):
    """A given Docker image is already installed on the server.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "ImageAlreadyExists":
        return ImageAlreadyExists(data["image"])

    def __init__(self, image: str) -> None:
        self.__image = image
        super().__init__(f"Docker image already exists: {image}")

    @property
    def image(self) -> str:
        """The name of the Docker image.
        """
        return self.__image

    @property
    def data(self) -> dict[str, Any]:
        return {"image": self.image}


class PortInUseError(BugZooException):
    """A given port is already being used."""
    def __init__(self, port: int) -> None:
        self.__port = port
        msg = f"port is already in use: {port}"
        super().__init__(msg)

    @property
    def port(self) -> int:
        """The port that is occupied."""
        return self.__port

    @property
    def data(self) -> dict[str, Any]:
        return {"port": self.__port}


class ImageBuildFailed(BugZooException):
    """An attempt to build a given Docker image has failed."""
    def __init__(self,
                 image: str,
                 log: list[str],
                 ) -> None:
        self.__image = image
        self.__log = log.copy()
        msg = f"failed to build Docker image: {image}"
        super().__init__(msg)

    @property
    def image(self) -> str:
        """The name of the image that failed to build.
        """
        return self.__image

    @property
    def log(self) -> Iterator[str]:
        """A log of the failed build attempt.
        """
        return self.__log.__iter__()

    @property
    def data(self) -> dict[str, Any]:
        return {"image": self.image,
                "log": list(self.log)}


class TestNotFound(BugZooException):
    """No test was found with the given name.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "TestNotFound":
        return TestNotFound(data["uid"])

    def __init__(self, uid: str) -> None:
        self.__uid = uid
        super().__init__(f"no test found with uid: {uid}")

    @property
    def uid(self) -> str:
        """The uid of the test.
        """
        return self.__uid

    @property
    def data(self) -> dict[str, Any]:
        return {"uid": self.uid}


class FileNotFound(BugZooException):
    """No file was found at the given path inside the container.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "FileNotFound":
        return FileNotFound(data["path"])

    def __init__(self, path: str) -> None:
        self.__path = path
        super().__init__(f"no file found at path: {path}")

    @property
    def path(self) -> str:
        """The path of the missing file.
        """
        return self.__path

    @property
    def data(self) -> dict[str, Any]:
        return {"path": self.path}


class ArgumentNotSpecified(BugZooException):
    """An argument was expected but none was specified.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "ArgumentNotSpecified":
        return ArgumentNotSpecified(data["argument"])

    def __init__(self, argument: str) -> None:
        self.__argument = argument
        super().__init__(f"argument was not specified: {argument}.")

    @property
    def argument(self) -> str:
        """The name of the argument that was not specified.
        """
        return self.__argument

    @property
    def data(self) -> dict[str, Any]:
        return {"argument": self.argument}


class FailedToComputeCoverage(BugZooException):
    """An error was encountered inside the container whilst attempting to collect
    its coverage information.
    """
    @classmethod
    def from_message_and_data(cls,
                              message: str,
                              data: dict[str, Any],
                              ) -> "FailedToComputeCoverage":
        return FailedToComputeCoverage(data["reason"])

    def __init__(self, reason: str) -> None:
        self.__reason = reason
        super().__init__(f"failed to compute coverage: {reason}.")

    @property
    def reason(self) -> str:
        """The reason, if any, that BugZoo failed to compute coverage information.
        """
        return self.__reason

    @property
    def data(self) -> dict[str, Any]:
        return {"reason": self.reason}
