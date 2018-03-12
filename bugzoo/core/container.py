from typing import List, Iterator, Dict, Optional, Union
from ipaddress import IPv4Address, IPv6Address
from tempfile import NamedTemporaryFile
from timeit import default_timer as timer
import copy
import sys
import os
import subprocess
import tempfile
import time

import docker

import bugzoo
from .language import Language
from .tool import Tool
from ..testing import TestOutcome, TestCase
from ..compiler import Compiler
from ..cmd import ExecResponse, PendingExecResponse


class Container(object):
    """
    Containers provide ephemeral, mutable instances of registered bugs,
    and are used to conduct studies of software bugs. Behind the scenes,
    containers are implemented as `Docker containers <https://docker.com>`_.
    """
    def __init__(self,
                 bug: str = 'bugzoo.bug.Bug',
                 tools: Optional[List[Tool]] = None,
                 volumes: Optional[Dict[str, str]] = None,
                 network_mode: str = 'bridge',
                 ports: Optional[Dict[int, int]] = None,
                 uid: str = None,
                 interactive=False) -> None:
        """
        Constructs a container for a given bug.
        """
        if tools is None:
            tools = []
        if volumes is None:
            volumes = {}
        if ports is None:
            ports = {}

        self.__bug = bug
        self.__tools = tools
        self.__tool_containers = [t.provision() for t in tools]
        tool_container_ids = [c.id for c in self.__tool_containers]

        # prepare the environment for the container
        env = [(k, v) for t in tools for (k, v) in t.environment.items()]
        env = ["{}=\"{}\"".format(k, v) for (k, v) in env]
        env = "\n".join(env)
        self.__env_file = tempfile.NamedTemporaryFile(mode='w', suffix='.bugzoo.env')
        self.__env_file.write(env)
        self.__env_file.flush()

        # we don't want to accidentally disturb the dictionary that was passed
        volumes = copy.deepcopy(volumes)

        # mount the environment file
        volumes[self.__env_file.name] = \
            {'bind': '/.environment.host', 'mode': 'ro'}

        # construct a Docker container for this bug
        cmd_cp = 'sudo cp /.environment.host /.environment'
        cmd_chown = 'sudo chown $(whoami) /.environment'
        cmd_source = 'source /.environment'
        cmd = '/bin/bash -v -c "{} && {} && {} && /bin/bash"'.format(cmd_cp,
                                                                  cmd_chown,
                                                                  cmd_source)
        client = docker.from_env() # nooooooooo
        self.__container = \
            client.containers.create(bug.image,
                                     cmd,
                                     volumes=volumes,
                                     volumes_from=tool_container_ids,
                                     ports=ports,
                                     network_mode=network_mode,
                                     stdin_open=True,
                                     tty=interactive,
                                     detach=True)
        self.__container.start()

    @property
    def id(self) -> str:
        """
        A unique identifier for this container.
        """
        assert self.alive
        return self.__container.id

    uid = id

    @property
    def tools(self) -> Iterator[Tool]:
        """
        A list of tools that are mounted inside this container.
        """
        for tool in self.__tools:
            yield tool

    @property
    def bug(self) -> 'bugzoo.bug.Bug':
        """
        The bug that was used to provision this container.
        """
        return self.__bug

    @property
    def container(self):
        """
        The Docker container underlying this object, or :code:`None`, if the
        container is no longer running.
        """
        return self.__container

    @property
    def alive(self) -> bool:
        """
        Indicates whether or not the container is still running.
        """
        return self.__container is not None

    def destroy(self) -> None:
        """
        Deallocates all resources associated with this container. If this
        container has already been destroyed, this method quietly returns
        (i.e., no errors are thrown).
        """
        if self.__container:
            self.__container.remove(force=True)

        # destroy tool containers
        for c in self.__tool_containers:
            c.remove(force=True)
        self.__tool_containers = []

        # destroy env file
        if self.__env_file:
            self.__env_file.close()
            self.__env_file = None

    def copy_to(self, source_fn: str, dest_fn: str) -> None:
        """
        Copies a given file from the host machine to a specified location
        inside this container.
        """
        ctr_id = self.container.id
        cmd = "docker cp '{}' '{}:{}'".format(source_fn, ctr_id, dest_fn)
        subprocess.check_output(cmd, shell=True)

    def copy_from(self, source_fn: str, dest_fn: str) -> None:
        """
        Copies a given file from the container to a specified location on the
        host machine.
        """
        ctr_id = self.container.id
        cmd = "docker cp '{}:{}' '{}'".format(ctr_id, source_fn, dest_fn)
        subprocess.check_output(cmd, shell=True)

    def command(self,
                cmd: str,
                context: Optional[str] = None,
                stdout: bool = True,
                stderr: bool = False,
                block: bool = True):
        """

        Returns a tuple containing the exit code, execution duration, and
        output, respectively.
        """
        # TODO: we need a better long-term alternative
        if context is None:
            context = os.path.join(self.bug.source_dir, '..')

        cmd = '/bin/bash -c "source /.environment && cd {} && {}"'.format(context, cmd)

        # based on: https://github.com/roidelapluie/docker-py/commit/ead9ffa34193281967de8cc0d6e1c0dcbf50eda5
        client = docker.from_env()
        response = client.api.exec_create(self.__container.id, cmd, stdout=stdout, stderr=stderr)

        # blocking mode
        if block:
            start_time = timer()
            out = client.api.exec_start(response['Id'], stream=False)
            out = out.decode('utf-8')
            end_time = timer()
            duration = end_time - start_time
            code = client.api.exec_inspect(response['Id'])['ExitCode']
            return ExecResponse(code, duration, out)

        # non-blocking mode
        else:
            out = client.api.exec_start(response['Id'], stream=True)
            return PendingExecResponse(response, out)
