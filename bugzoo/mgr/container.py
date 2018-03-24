from typing import Iterator, List, Optional, Dict, Union
from ipaddress import IPv4Address, IPv6Address
from tempfile import NamedTemporaryFile
from timeit import default_timer as timer
import sys
import subprocess
import ipaddress
import tempfile
import os
import uuid
import copy

import docker

from ..core.tool import Tool
from ..core.patch import Patch
from ..core.container import Container
from ..core.bug import Bug
from ..compiler import CompilationOutcome
from ..testing import TestCase, TestOutcome
from ..cmd import ExecResponse, PendingExecResponse


class ContainerManager(object):
    def __init__(self, installation: 'BugZoo'):
        self.__installation = installation
        self.__logger = installation.logger.getChild('container')
        self.__client_docker = installation.docker
        self.__api_docker = self.__client_docker.api
        self.__containers = {}
        self.__logger = installation.logger.getChild('container')
        self.__dockerc = {}
        self.__env_files = {}
        self.__dockerc_tools = {}

    def __iter__(self) -> Iterator[Container]:
        """
        Returns an iterator over the set of running containers.
        """
        return self.__containers.values().__iter__()

    def __getitem__(self, uid: str) -> Container:
        """
        Returns the container associated with a given unique identifier.

        Raises:
            KeyError: if no container exists with the given UID.
        """
        return self.__containers[uid]

    def __delitem__(self, uid: str) -> None:
        """
        Deletes a running container with a given UID.

        Parameters:
            uid: the unique identifier of the container.

        Raises:
            KeyError: if no container was found with the given UID.
        """
        self.__logger.info("deleting container: %s", uid)
        try:
            container = self.__containers[uid]
            self.__dockerc[uid].remove(force=True)

            for container_tool in self.__dockerc_tools[uid]:
                container_tool.remove(force=True)

            if uid in self.__env_files:
                self.__env_files[uid].close()
                del self.__env_files[uid]

            del self.__dockerc[uid]
            del self.__dockerc_tools[uid]
            del self.__containers[uid]

        except KeyError:
            self.__logger.error("failed to delete container: %s [not found]", uid)
        self.__logger.info("deleted container: %s", uid)

    delete = __delitem__

    def provision(self,
                  bug: Bug,
                  uid: str = None,
                  tools: Optional[List[Tool]] = None,
                  volumes: Optional[Dict[str, str]] = None,
                  network_mode: str = 'bridge',
                  ports: Optional[Dict[int, int]] = None,
                  interactive: bool = False
                  ) -> Container:
        """
        Provisions and returns a container for a given bug.

        Parameters:
            bug: the bug that should be used to provision a container.
            uid: a unique identifier (UID) for the container. If no UID is
                provided then one will be automatically generated.

        Returns:
            a descroption of the provisioned container.
        """
        if tools is None:
            tools = []
        if volumes is None:
            volumes = {}
        if ports is None:
            ports = {}

        if uid is None:
            uid = str(uuid.uuid4())

        tool_containers = [self.__installation.tools.provision(t) for t in tools]
        self.__dockerc_tools[uid] = tool_containers
        tool_container_ids = [c.id for c in tool_containers]

        # prepare the environment for the container
        env = [(k, v) for t in tools for (k, v) in t.environment.items()]
        env = ["{}=\"{}\"".format(k, v) for (k, v) in env]
        env = "\n".join(env)
        env_file = tempfile.NamedTemporaryFile(mode='w', suffix='.bugzoo.env')
        env_file.write(env)
        env_file.flush()
        self.__env_files[uid] = env_file

        volumes = copy.deepcopy(volumes)
        volumes[env_file.name] = \
            {'bind': '/.environment.host', 'mode': 'ro'}

        cmd_cp = 'sudo cp /.environment.host /.environment'
        cmd_chown = 'sudo chown $(whoami) /.environment'
        cmd_source = 'source /.environment'
        cmd = '/bin/bash -v -c "{} && {} && {} && /bin/bash"'.format(cmd_cp,
                                                                  cmd_chown,
                                                                  cmd_source)
        dockerc = \
            self.__client_docker.containers.create(bug.image,
                                                   cmd,
                                                   name=uid,
                                                   volumes=volumes,
                                                   volumes_from=tool_container_ids,
                                                   ports=ports,
                                                   network_mode=network_mode,
                                                   stdin_open=True,
                                                   tty=interactive,
                                                   detach=True)
        self.__dockerc[uid] = dockerc
        dockerc.start()

        container = Container(bug=bug,
                              uid=uid,
                              tools=[t.name for t in tools])
        self.__containers[uid] = container
        return container

    def mktemp(self,
               container: Container
               ) -> str:
        """
        Creates a named temporary file within a given container.

        Returns:
            the absolute path to the created temporary file.
        """
        response = self.command(container, "mktemp")
        assert response.code == 0, "failed to create temporary file"
        fn = response.output.strip()
        return fn

    def ip_address(self,
                   container: Container,
                   raise_error: bool = False
                   ) -> Optional[Union[IPv4Address, IPv6Address]]:
        """
        The IP address used by a given container, or None if no IP address has
        been assigned to that container.
        """
         # TODO: refactor!
        api_client = docker.APIClient(base_url='unix://var/run/docker.sock')
        docker_info = api_client.inspect_container(container.id)
        address = docker_info['NetworkSettings']['IPAddress']
        try:
            return IPv4Address(address)
        except ipaddress.AddressValueError:
            try:
                return IPv6Address(address)
            except ipaddress.AddressValueError:
                if raise_error:
                    raise
                return None

    def patch(self, container: Container, p: Patch) -> bool:
        """
        Attempts to apply a given patch to the source code for a program inside
        a given container. All patch applications are guaranteed to be atomic;
        if the patch fails to apply, no changes will be made to the relevant
        source code files.

        Returns true if the patch application was successful, and false if
        the attempt was unsuccessful.
        """
        assert isinstance(p, Patch)
        file_container = None
        dockerc = self.__dockerc[container.uid]
        bug = container.bug # TODO migrate

        try:
            file_host = NamedTemporaryFile(mode='w', suffix='bugzoo')
            file_host.write(str(p))
            file_host.flush()

            # copy contents to a temporary file on the container
            (retcode, file_container) = dockerc.exec_run('mktemp')
            assert retcode == 0
            file_container = file_container.decode(sys.stdout.encoding).strip()
            self.copy_to(container, file_host.name, file_container)

            # run patch command inside the source directory
            # cmd = 'patch --no-backup-if-mismatch -p0 -u -i "{}"'.format(container_file, stderr=True)
            cmd = 'git apply -p0 "{}"'.format(file_container)
            outcome = self.command(container, cmd, context=bug.source_dir)
            return outcome.code == 0

        finally:
            if file_container:
                dockerc.exec_run('rm "{}"'.format(file_container))

    def interact(self, container: Container) -> None:
        """
        Connects to the PTY (pseudo-TTY) for a given container.
        Blocks until the user exits the PTY.
        """
        subprocess.call(['docker', 'attach', container.id])

    def execute(self,
                container: Container,
                test: TestCase,
                verbose: bool = False
                ) -> TestOutcome:
        """
        Runs a specified test inside a given container.

        Returns:
            the outcome of the test execution.
        """
        bug = self.__installation.bugs[container.bug.name]
        cmd, context = bug.harness.command(test)
        response = self.command(container, cmd, context, stderr=True, verbose=verbose)
        passed = response.code == 0
        return TestOutcome(response, passed)

    # TODO decouple
    def compile(self,
                container: Container,
                verbose: bool = False
                ) -> CompilationOutcome:
        """
        Attempts to compile the program inside a given container.

        Params:
            verbose: specifies whether to print the stdout and stderr produced
                by the compilation command to the stdout. If `True`, then the
                stdout and stderr will be printed.

        Returns:
            a summary of the outcome of the compilation attempt.
        """
        # TODO use container name
        bug = container.bug # self.__installation.bugs[container.bug]
        return bug.compiler.compile(self, container, verbose=verbose)

    # TODO decouple
    def compile_with_instrumentation(self,
                                     container: Container,
                                     verbose: bool = False
                                     ) -> CompilationOutcome:
        """
        Attempts to compile the program inside a given container with
        instrumentation enabled.

        See: `Container.compile`
        """
        bug = self.__installation.bugs[container.bug.name] # TODO port
        bug.compiler.clean(self, container, verbose=verbose) # TODO port
        return bug.compiler.compile_with_coverage_instrumentation(self,
                                                                  container,
                                                                  verbose=verbose)

    def copy_to(self,
                container: Container,
                fn_host: str,
                fn_container: str
                ) -> None:
        """
        Copies a file from the host machine to a specified location inside a
        container.
        """
        cmd = "docker cp '{}' '{}:{}'".format(fn_host, container.id, fn_container)
        # TODO implement error handling
        subprocess.check_output(cmd, shell=True)

    def copy_from(self,
                  container: Container,
                  fn_container: str,
                  fn_host: str
                  ) -> None:
        """
        Copies a given file from the container to a specified location on the
        host machine.
        """
        cmd = "docker cp '{}:{}' '{}'".format(container.id, fn_container, fn_host)
        # TODO implement error handling
        subprocess.check_output(cmd, shell=True)

    def command(self,
                container: Container,
                cmd: str,
                context: Optional[str] = None,
                stdout: bool = True,
                stderr: bool = False,
                block: bool = True,
                verbose: bool = False,
                time_limit: Optional[int] = None
                ) -> Union[ExecResponse, PendingExecResponse]:
        """
        Executes a provided shell command inside a given container.

        Parameters:
            time_limit: an optional parameter that is used to specify the
                number of seconds that the command should be allowed to run
                without completing before it is aborted. Only supported by
                blocking calls.

        Returns:
            a description of the response.

        Raises:
            TimeoutError: if a time limit is given and the command fails
                to complete within that time. Only supported by blocking calls.
        """
        logger = self.__logger.getChild(container.uid)
        bug = container.bug # TODO migrate

        # TODO: we need a better long-term alternative
        if context is None:
            context = os.path.join(bug.source_dir, '..')

        template_cmd = '/bin/bash -c "source /.environment && cd {} && {}"'
        cmd = template_cmd.format(context, cmd)

        # based on: https://github.com/roidelapluie/docker-py/commit/ead9ffa34193281967de8cc0d6e1c0dcbf50eda5
        logger.debug("executing command: %s", cmd)
        docker_client = self.__installation.docker
        response = docker_client.api.exec_create(container.id,
                                                 cmd,
                                                 tty=True,
                                                 stdout=stdout,
                                                 stderr=stderr)
        exec_id = response['Id']

        time_start = timer()
        out = self.__api_docker.exec_start(exec_id, stream=True)

        if not block:
            return PendingExecResponse(response, out)

        # while self.__api_docker.exec_inspect(exec_id)['Running']:
        #    time_running = timer() - time_start
        #    if time_limit and time_running > time_limit:
        #        # TODO kill exec
        #        raise TimeoutError()

        output = []
        for line in out:
            line = line.decode('utf-8').rstrip('\n')
            if verbose:
                print(line, flush=True)
            output.append(line)
        time_running = timer() - time_start
        output = '\n'.join(output)

        code = self.__api_docker.exec_inspect(exec_id)['ExitCode']
        return ExecResponse(code, time_running, output)
