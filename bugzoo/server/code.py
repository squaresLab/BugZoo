import flask
from typing import Tuple, Dict
from enum import Enum


class ErrorCode(Enum):
    BUG_NOT_SPECIFIED = ("No bug ID was specified.", 400)
    IMAGE_NOT_INSTALLED = ("Image not installed.", 500)
    FAILED_TO_COMPUTE_COVERAGE = ("Failed to compute coverage.", 500)
    COMMAND_NOT_SPECIFIED = ("No command was specified.", 422)

    def __init__(self, message: str, status_code: int) -> None:
        self.__message = message
        self.__status_code = status_code

    @property
    def message(self) -> str:
        return self.__message

    @property
    def status_code(self) -> int:
        return self.__status_code

    def to_response(self) -> Tuple[Dict[str, str], int]:
        jsn = {'error': {'message': self.message}}
        return (flask.jsonify(jsn), self.status_code)
