import flask
from typing import Tuple, Dict
from enum import Enum


class ErrorCode(Enum):
    BUG_NOT_FOUND = ("No bug was found with the given UID.", 404)
    BUG_NOT_SPECIFIED = ("No bug ID was specified.", 400)
    BUG_ALREADY_INSTALLED = ("Bug has already been installed.", 200)
    CONTAINER_NOT_FOUND = ("No (running) container was found with the given UID.", 404)

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
