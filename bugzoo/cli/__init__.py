from typing import List, Optional, Dict
import sys
import os
import argparse
import logging
from operator import itemgetter

import tabulate

import bugzoo.exceptions
import bugzoo.version
from ..core.source import RemoteSource
from ..manager import BugZoo
from ..core.tool import Tool


def error(msg: str) -> None:
    """
    Prints a given error message to the standard output and causes the
    program to terminate.
    """
    sys.exit(msg)


def list_sources(rbox: 'BugZoo') -> None:
    """
    Produces a list of all the sources known to BugZoo.
    """
    hdrs = ['Source', 'Type', 'URL', 'Location', 'Version']
    tbl = []
    for src in rbox.sources:
        typ = 'Remote' if isinstance(src, RemoteSource) else 'Local'
        version = src.version if isinstance(src, RemoteSource) else '-'
        url = src.url if isinstance(src, RemoteSource) else '-'
        tbl.append([src.name, typ, url, src.location, version])

    # transform into a pretty table
    tbl = sorted(tbl, key=itemgetter(1,))
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def add_source(rbox: 'BugZoo', name: str, url_or_path: str) -> None:
    try:
        rbox.sources.add(name, url_or_path)
        print('added source: {} -> {}'.format(name, url_or_path))
    except bugzoo.exceptions.NameInUseError:
        print('source already registered with name: {}'.format(name))


def remove_source(rbox: 'BugZoo', name: str) -> None:
    try:
        source = rbox.sources[name]
        rbox.sources.remove(source)
        print('removed source: {}'.format(source.name))
    except KeyError:
        print("no source registered with name: {}".format(name))


def update_sources(rbox: 'BugZoo', ) -> None:
    print('updating sources...')
    rbox.sources.update()


###############################################################################
# [bug] group
###############################################################################
def validate_bug(rbox: 'BugZoo', name: str, verbose: bool = True) -> None:
    print('validating bug: {}'.format(name))
    bug = rbox.bugs[name]
    if rbox.bugs.validate(bug, verbose=verbose):
        print('OK')
    else:
        print('FAIL')


def coverage_bug(bz: 'BugZoo',
                 name: str,
                 use_cache: bool = True
                 ) -> None:
    print('computing coverage for bug: {}'.format(name))
    bug = bz.bugs[name]
    if use_cache:
        cov = bz.bugs.coverage(bug)
    else:
        container = bz.containers.provision(bug)
        try:
            cov = bz.coverage.coverage(container, bug.tests)
        except Exception as e:
            print("Encountered error when producing coverage:")
            print(e)
            sys.exit(1)
        finally:
            del bz.containers[container.uid]

    print(cov)


def build_bug(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('building bug: {}'.format(name))
    bug = rbox.bugs[name]
    rbox.bugs.build(bug, force=force)


def download_bug(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('downloading bug: {}'.format(name))
    bug = rbox.bugs[name]
    rbox.bugs.download(bug, force=force)


def upload_bug(rbox: 'BugZoo', name: str) -> None:
    print('uploading bug: {}'.format(name))
    bug = rbox.bugs[name]
    rbox.bugs.upload(bug)


def uninstall_bug(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('uninstalling bug: {}'.format(name))
    bug = rbox.bugs[name]
    rbox.bugs.uninstall(bug, force=force)


def list_bugs_quiet(rbox: 'BugZoo') -> None:
    for bug in rbox.bugs:
        print(bug.name)


def list_bugs(rbox: 'BugZoo',
              quiet: bool = False,
              show_installed: Optional[bool] = None
              ) -> None:
    if quiet:
        return list_bugs_quiet(rbox)

    tbl = []
    hdrs = ['Bug', 'Program', 'Dataset', 'Source', 'Installed?']
    for bug in rbox.bugs:
        is_installed = rbox.bugs.is_installed(bug)

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != is_installed:
                continue

        installed = 'Yes' if is_installed else 'No'
        dataset = bug.dataset if bug.dataset else '-'
        program = bug.program if bug.program else '-'
        source = bug.source if bug.source else '-'
        row = [bug.name, program, dataset, source, installed]
        tbl.append(row)

    tbl = sorted(tbl, key=itemgetter(3, 2, 1, 0))
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


###############################################################################
# [tool] group
###############################################################################
def uninstall_tool(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('uninstalling tool: {}'.format(name))
    try:
        tool = rbox.tools[name]
        rbox.tools.uninstall(tool, force=force)
    except KeyError:
        error("no tool found with the given name: {}".format(name))


def build_tool(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('building tool: {}'.format(name))
    try:
        tool = rbox.tools[name]
        rbox.tools.build(tool, force=force)
    except KeyError:
        error("no tool found with the given name: {}".format(name))


def download_tool(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('downloading tool: {}'.format(name))
    try:
        tool = rbox.tools[name]
        rbox.tools.download(tool, force=force)
    except KeyError:
        error("no tool found with the given name: {}".format(name))


def upload_tool(rbox: 'BugZoo', name: str) -> None:
    print('uploading tool: {}'.format(name))
    try:
        tool = rbox.tools[name]
        rbox.tools.upload(tool)
    except KeyError:
        error("no tool found with the given name: {}".format(name))


def list_tools_quiet(rbox: 'BugZoo') -> None:
    for tool in rbox.tools:
        print(tool.name)


# TODO: tidy up copypasta
def list_tools(rbox: 'BugZoo',
               quiet: bool = False,
               show_installed: Optional[bool] = None
               ) -> None:
    if quiet:
        return list_tools_quiet(rbox)

    tbl = []
    hdrs = ['Tool', 'Source', 'Installed?']
    for tool in rbox.tools:
        is_installed = rbox.tools.is_installed(tool)

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != is_installed:
                continue

        installed = 'Yes' if is_installed else 'No'
        source = tool.source if tool.source else '-'
        row = [tool.name, source, installed]
        tbl.append(row)

    tbl = sorted(tbl, key=itemgetter(1, 0))
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


###############################################################################
# [container] group
###############################################################################

def __prepare_volumes(volumes: List[str] = None) -> Dict[str, Dict[str, str]]:
    """
    Produces a volume-mapping dictionary, ready for use with Docker's Python
    API, from a list of volume commands.
    """
    if not volumes:
        return {}

    # transform the list of volumes into a dictionary
    volume_map = {}
    for v in volumes:
        parts = v.split(':')
        if len(parts) < 2 or len(parts) > 3:
            raise Exception("Illegal or ambiguous volume argument: {}".format(v))
        frm, to = parts[0:2]
        mode = parts[2] if len(parts) == 3 else 'rw'
        volume_map[frm] = {
            'bind': to,
            'mode': mode
        }

    return volume_map


def __prepare_tools(bz: 'BugZoo', tools: List[str] = None) -> List[Tool]:
    """
    Fetches the corresponding tool objects for a list of tools given by
    their names.
    """
    if not tools:
        return []
    return [bz.tools[t] for t in tools]


def launch(bz: 'BugZoo',
           bug_name: str,
           interactive: bool,
           network: Optional[str] = None,
           tool_names: Optional[List[str]] = None,
           volume_args: Optional[List[str]] = None,
           command: Optional[str] = None,
           ) -> None:
    volumes = __prepare_volumes(volume_args)
    tools = __prepare_tools(bz, tool_names)
    bug = bz.bugs[bug_name]

    if network is None:
        network = 'bridge'

    try:
        c = None
        c = bz.containers.provision(bug=bug,
                                    interactive=True,
                                    tools=tools,
                                    volumes=volumes,
                                    network_mode=network)
        if command is not None:
            stream = bz.containers.command(c, command, stderr=True, stdout=True, block=False)
            for s in stream.output:
                print(s.decode('utf8').strip())

        if interactive:
            bz.containers.interact(c)

    except bugzoo.exceptions.BugNotInstalledError:
        error("bug not installed: {}".format(bug_name))

    # ensure that the container is always destroyed
    finally:
        if c:
            del bz.containers[c.uid]


def build_parser():
    #with open(os.path.join(os.path.dirname(__file__), "banner.txt"), "r") as f:
    #    desc = f.read()
    rbox = BugZoo()

    desc = ':-)'
    parser = argparse.ArgumentParser(description=desc,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    subparsers = parser.add_subparsers()

    ###########################################################################
    # [version] option
    ###########################################################################
    parser.add_argument('-v', '--version',
                        action='version',
                        version=bugzoo.version.__version__)

    ###########################################################################
    # [source] group
    ###########################################################################
    g_src = subparsers.add_parser('source')
    g_subparsers = g_src.add_subparsers()

    # [source list]
    cmd = g_subparsers.add_parser('list')
    cmd.set_defaults(func=lambda args: list_sources(rbox))

    # [source add :name :url_or_path]
    cmd = g_subparsers.add_parser('add')
    cmd.add_argument('name', type=str)
    cmd.add_argument('url_or_path', type=str)
    cmd.set_defaults(func=lambda args: add_source(rbox, args.name, args.url_or_path))

    # [source remove :name]
    cmd = g_subparsers.add_parser('remove')
    cmd.add_argument('name', type=str)
    cmd.set_defaults(func=lambda args: remove_source(rbox, args.name))

    # [source update]
    cmd = g_subparsers.add_parser('update')
    cmd.set_defaults(func=lambda args: update_sources(rbox))


    ###########################################################################
    # [tool] group
    ###########################################################################
    g_tool = subparsers.add_parser('tool')
    g_subparsers = g_tool.add_subparsers()

    # [tool uninstall (-f|--force) :tool]
    cmd = g_subparsers.add_parser('uninstall')
    cmd.add_argument('tool')
    cmd.add_argument('-f', '--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: uninstall_tool(rbox, args.tool, force=args.force))

    # [tool build (-f|--force) :tool]
    cmd = g_subparsers.add_parser('build')
    cmd.add_argument('tool')
    cmd.add_argument('-f', '--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: build_tool(rbox, args.tool, args.force))

    # [tool download (-f|--force) :tool]
    cmd = g_subparsers.add_parser('download')
    cmd.add_argument('tool')
    cmd.add_argument('-f', '--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: download_tool(rbox, args.tool, args.force))

    # [tool upload :tool]
    cmd = g_subparsers.add_parser('upload')
    cmd.add_argument('tool')
    cmd.set_defaults(func=lambda args: upload_tool(rbox, args.tool))

    # [tool list]
    cmd = g_subparsers.add_parser('list')
    cmd.add_argument('-q', '--quiet',
                     dest='quiet',
                     action='store_true')
    cmd.add_argument('--installed',
                     dest='installed',
                     action='store_true')
    cmd.add_argument('--uninstalled',
                     dest='installed',
                     action='store_false')
    cmd.set_defaults(installed=None)
    cmd.set_defaults(func=lambda args: list_tools(rbox,
                                                  quiet=args.quiet,
                                                  show_installed=args.installed))


    ###########################################################################
    # [container] group
    ###########################################################################
    g_container = subparsers.add_parser('container')
    g_subparsers = g_container.add_subparsers()

    # [container launch :bug]
    cmd = g_subparsers.add_parser('launch')
    cmd.add_argument('bug')
    cmd.add_argument('-v', '--volume',
                     help='a host-container volume mapping',
                     dest='volumes',
                     action='append',
                     default=[])
    cmd.add_argument('--with',
                     help='name of a tool',
                     dest='tools',
                     action='append',
                     default=[])
    cmd.add_argument('--net',
                     help='which network should the container use?',
                     dest='net',
                     type=str,
                     choices=['bridge', 'host'],
                     default='bridge')
    cmd.set_defaults(func=lambda args: launch(rbox,
                                              args.bug,
                                              interactive=True,
                                              tool_names=args.tools,
                                              network=args.net,
                                              volume_args=args.volumes))

    # [container run :bug :command]
    cmd = g_subparsers.add_parser('run')
    cmd.add_argument('bug')
    cmd.add_argument('--with',
                     help='name of a tool',
                     dest='tools',
                     action='append',
                     default=[])
    cmd.add_argument('-v', '--volume',
                     help='a host-container volume mapping',
                     dest='volumes',
                     action='append',
                     default=[])
    cmd.add_argument('--net',
                     help='which network should the container use?',
                     dest='net',
                     type=str,
                     choices=['bridge', 'host'],
                     default='bridge')
    cmd.add_argument('command')
    cmd.set_defaults(func=lambda args: launch(rbox,
                                              args.bug,
                                              interactive=False,
                                              command=args.command,
                                              tools=args.tools,
                                              network=args.net,
                                              volume_args=args.volumes))

    # [container connect :bug]


    ###########################################################################
    # [bug] group
    ###########################################################################
    g_bug = subparsers.add_parser('bug')
    g_subparsers = g_bug.add_subparsers()

    # [bug validate (-v|--verbose) :bug]
    cmd = g_subparsers.add_parser('validate')
    cmd.add_argument('bug')
    cmd.add_argument('-v', '--verbose',
                     action='store_true')
    cmd.set_defaults(func=lambda args: validate_bug(rbox, args.bug, args.verbose))

    # [bug uninstall (--force) :bug]
    cmd = g_subparsers.add_parser('uninstall')
    cmd.add_argument('bug')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: uninstall_bug(rbox, args.bug, force=args.force))

    # [bug build (--update) :bug]
    cmd = g_subparsers.add_parser('build')
    cmd.add_argument('bug')
    cmd.add_argument('-f', '--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: build_bug(rbox, args.bug, args.force))

    # [bug download (--force) :bug]
    cmd = g_subparsers.add_parser('download')
    cmd.add_argument('bug')
    cmd.add_argument('-f', '--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: download_bug(rbox, args.bug, args.force))

    # [bug upload :bug]
    cmd = g_subparsers.add_parser('upload')
    cmd.add_argument('bug')
    cmd.set_defaults(func=lambda args: upload_bug(rbox, args.bug))

    # [bug coverage :bug]
    cmd = g_subparsers.add_parser('coverage')
    cmd.add_argument('bug')
    cmd.add_argument('--no-cache',
                     action='store_true')
    cmd.set_defaults(func=lambda args: coverage_bug(rbox, args.bug, not args.no_cache))

    # [bug list]
    cmd = g_subparsers.add_parser('list')
    cmd.add_argument('-q', '--quiet',
                     dest='quiet',
                     action='store_true')
    cmd.add_argument('--installed',
                     dest='installed',
                     action='store_true')
    cmd.add_argument('--uninstalled',
                     dest='installed',
                     action='store_false')
    cmd.set_defaults(installed=None)
    cmd.set_defaults(func=lambda args: list_bugs(rbox,
                                                 quiet=args.quiet,
                                                 show_installed=args.installed))

    return parser


def main():
    try:
        log_formatter = logging.Formatter('%(levelname)s:%(name)s:%(asctime)s: %(message)s')  # noqa: pycodestyle
        log_filename = os.path.join(os.getcwd(), "bugzood.log")
        log_to_file = logging.handlers.WatchedFileHandler(log_filename)
        log_to_file.setFormatter(log_formatter)
        logging.getLogger('bugzoo').setLevel(logging.DEBUG)
        logging.getLogger('bugzoo').addHandler(log_to_file)

        parser = build_parser()
        args = parser.parse_args()
        if 'func' in vars(args):
            args.func(args)
    except KeyboardInterrupt:
        pass


if __name__ == "__main__":
    main()
