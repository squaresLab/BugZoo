from typing import List, Dict, Optional
import operator

import cement

from ... import exceptions


class ContainerController(cement.Controller):
    class Meta:
        label = 'container'
        description = 'provision and manage containers'
        stacked_on = 'base'
        stacked_type = 'nested'
        output_handler = 'tabulate'
        extensions = ['tabulate']

    @cement.ex(
        help='launches an interactive container for a given bug',
        arguments=[
            (['bug'], {'help': 'the name of the bug that should be used'}),
            (['-v', '--volume'],
             {'help': 'adds a Docker host-container volume mapping',
              'dest': 'volumes',
              'action': 'append',
              'type': str,
              'default': []}),
            (['--with'],
             {'help': 'mounts a tool inside the container',
              'dest': 'tools',
              'action': 'append',
              'type': str,
              'default': []}),
            (['--net'],
             {'help': 'the Docker network mode that should be used by the container',
              'type': str,
              'choices': ['bridge', 'host'],
              'default': 'bridge'})
        ]
    )
    def launch(self) -> None:
        self.__start(self.app.pargs.bug,
                     arg_volumes=self.app.pargs.volumes,
                     arg_tools=self.app.pargs.tools,
                     network=self.app.pargs.net,
                     interactive=True)

    @cement.ex(
        help='creates a new container for a given bug and uses it to run a specific command',  # noqa: pycodestyle
        arguments=[
            (['bug'], {'help': 'the name of the bug that should be used'}),
            (['-v', '--volume'],
             {'help': 'adds a Docker host-container volume mapping',
              'dest': 'volumes',
              'action': 'append',
              'type': str,
              'default': []}),
            (['--with'],
             {'help': 'mounts a tool inside the container',
              'dest': 'tools',
              'action': 'append',
              'type': str,
              'default': []}),
            (['--net'],
             {'help': 'the Docker network mode that should be used by the container',
              'type': str,
              'choices': ['bridge', 'host'],
              'default': 'bridge'}),
            (['command'], {'help': 'the command that should be run inside the container'})  # noqa: pycodestyle
        ]
    )
    def run(self) -> None:
        self.__start(self.app.pargs.bug,
                     arg_volumes=self.app.pargs.volumes,
                     arg_tools=self.app.pargs.tools,
                     network=self.app.pargs.net,
                     command=self.app.pargs.command,
                     interactive=False)

    def __prepare_volumes(self, arg_volumes: List[str]) -> Dict[str, str]:
        volume_map = {}
        for v in arg_volumes:
            parts = v.split(':')
            if len(parts) < 2 or len(parts) > 3:
                raise ValueError("Illegal or ambiguous volume argument: {}".format(v))
            frm, to = parts[0:2]
            mode = parts[2] if len(parts) == 3 else 'rw'
            volume_map[frm] = {
                'bind': to,
                'mode': mode
            }
        return volume_map

    def __start(self,
                name_bug: str,
                arg_volumes: List[str],
                arg_tools: List[str],
                network: str,
                interactive: bool,
                command: Optional[str] = None
                ) -> None:
        bz = self.app.daemon
        try:
            bug = bz.bugs[name_bug]
        except KeyError as err:
            name = str(err)
            raise exceptions.BugNotFound(name)
        try:
            tools = [bz.tools[t] for t in arg_tools]
        except KeyError as err:
            name = str(err)
            raise exceptions.ToolNotFound(name)
        volumes = self.__prepare_volumes(arg_volumes)
        c = bz.containers.provision(bug=bug,
                                    interactive=True,
                                    tools=tools,
                                    volumes=volumes,
                                    network_mode=network)
        try:
            if command is not None:
                stream = \
                    bz.containers.command(c, command,
                                          stderr=True, stdout=True,
                                          block=False)
                for s in stream.output:
                    print(s.decode('utf8').strip())
            else:
                assert interactive
                bz.containers.interact(c)
        finally:
            del bz.containers[c.uid]
