from typing import Optional
import sys

import docker

__all__ = ['PendingExecResponse', 'ExecResponse']


class PendingExecResponse(object):
    def __init__(self, exec_response, output) -> None:
        self.__exec_response = exec_response
        self.__output = output

    @property
    def running(self) -> bool:
        client = docker.from_env()
        return client.api.exec_inspect(self.exec_response)['Running']

    @property
    def exec_response(self):
        return self.__exec_response

    @property
    def output(self):
        return self.__output

    @property
    def exit_code(self) -> Optional[int]:
        if self.running:
            return None
        client = docker.from_env()
        id = self.exec_response['Id']
        return client.api.exec_inspect(id)


class ExecResponse(object):
    """
    Used to hold the response from a command execution.
    """
    @staticmethod
    def from_dict(d: dict) -> 'ExecResponse':
        return ExecResponse(d['code'],
                            d['duration'],
                            d['output'])

    def __init__(self,
                 code: int,
                 duration: float,
                 output: str
                 ) -> None:
        self.__code = code
        self.__duration = duration
        self.__output = output

    @property
    def code(self) -> int:
        """
        The exit code of the execution.
        """
        return self.__code

    @property
    def duration(self) -> float:
        """
        The length of time taken to complete the execution.
        """
        return self.__duration

    @property
    def output(self) -> str:
        """
        The output of the execution.
        """
        return self.__output

    def to_dict(self) -> dict:
        """
        Produces a JSON and YAML--ready dictionary description of this
        command execution response.
        """
        return {'code': self.code,
                'duration': self.duration,
                'output': self.output}
