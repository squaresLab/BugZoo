import sys
import argparse
import tabulate
import bugzoo.errors
import bugzoo.version

from typing import List, Optional, Dict
from operator import itemgetter
from bugzoo.manager import BugZoo
from bugzoo.tool import Tool


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
    hdrs = ['Source', 'URL', 'Version']
    tbl = []
    for src in rbox.sources:
        tbl.append([src.name, src.url, src.version])

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def add_source(rbox: 'BugZoo', url: str) -> None:
    try:
        rbox.sources.add(url)
        print('added source: {}'.format(url))
    except bugzoo.errors.SourceAlreadyRegisteredWithURL:
        print('source already registered with URL: {}'.format(url))


def remove_source(rbox: 'BugZoo', url: str) -> None:
    try:
        rbox.sources.remove_by_url(url)
        print('removed source: {}'.format(url))
    except bugzoo.errors.SourceNotFoundWithURL as err:
        print("no source registered with URL: {}".format(err.url))


def update_sources(rbox: 'BugZoo', ) -> None:
    print('updating sources...')
    rbox.sources.update()


###############################################################################
# [dataset] group
###############################################################################


def list_datasets(rbox: 'BugZoo') -> None:
    tbl = []
    hdrs = ['Dataset', 'Source', '# Bugs']
    for ds in rbox.datasets:
        row = [ds.name, ds.url, ds.size]
        tbl.append(row)

    tbl = sorted(tbl, key=itemgetter(0))

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


###############################################################################
# [bug] group
###############################################################################


def validate_bug(rbox: 'BugZoo', name: str, verbose: bool = True) -> None:
    print('validating bug: {}'.format(name))
    bug = rbox.bugs[name]
    if bug.validate(verbose=verbose):
        print('OK')
    else:
        print('FAIL')


def build_bug(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('building bug: {}'.format(name))
    bug = rbox.bugs[name]
    bug.build(force=force)


def download_bug(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('downloading bug: {}'.format(name))
    bug = rbox.bugs[name]
    bug.download(force=force)


def upload_bug(rbox: 'BugZoo', name: str) -> None:
    print('uploading bug: {}'.format(name))
    bug = rbox.bugs[name]
    bug.upload()


def uninstall_bug(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('uninstalling bug: {}'.format(name))
    bug = rbox.bugs[name]
    bug.uninstall(force=force)


def list_bugs(rbox: 'BugZoo', show_installed=None) -> None:
    tbl = []
    hdrs = ['Bug', 'Source', 'Installed?']
    for bug in rbox.bugs:

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != bug.installed:
                continue

        installed = 'Yes' if bug.installed else 'No'
        row = [bug.identifier, bug.dataset.name, installed]
        tbl.append(row)

    # sort by dataset then by bug
    tbl = sorted(tbl, key=itemgetter(1,2))

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


###############################################################################
# [tool] group
###############################################################################

def uninstall_tool(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('uninstalling tool: {}'.format(name))
    try:
        rbox.tools[name].uninstall(force=force)
    except IndexError:
        error("no tool found with the given name: {}".format(name))


def build_tool(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('building tool: {}'.format(name))
    try:
        rbox.tools[name].build(force=force)
    except IndexError:
        error("no tool found with the given name: {}".format(name))


def download_tool(rbox: 'BugZoo', name: str, force: bool) -> None:
    print('downloading tool: {}'.format(name))
    try:
        rbox.tools[name].download(force=force)
    except IndexError:
        error("no tool found with the given name: {}".format(name))


def upload_tool(rbox: 'BugZoo', name: str) -> None:
    print('uploading tool: {}'.format(name))
    try:
        rbox.tools[name].upload()
    except IndexError:
        error("no tool found with the given name: {}".format(name))


# TODO: tidy up copypasta
def list_tools(rbox: 'BugZoo', show_installed=None) -> None:
    tbl = []
    hdrs = ['Tool', 'Source', 'Installed?']
    for tool in rbox.tools:

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != tool.installed:
                continue

        installed = 'Yes' if tool.installed else 'No'
        row = [tool.name, tool.url, installed]
        tbl.append(row)

    # sort by dataset then by bug
    tbl = sorted(tbl, key=itemgetter(1,2))

    # transform into a pretty table
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
           tools: Optional[List[str]] = None,
           volumes: Optional[List[str]] = None,
           command: Optional[str] = None,
           ) -> None:
    volumes = __prepare_volumes(volumes)
    tools = __prepare_tools(bz, tools)
    bug = bz.bugs[bug_name]

    try:
        c = None
        c = bug.provision(tty=True,
                          tools=tools,
                          volumes=volumes)
        if command is not None:
            stream = c.command(command, stderr=True, stdout=True, block=False)
            for s in stream.output:
                print(s.decode('utf8').strip())

        if interactive:
            c.interact()

    except bugzoo.errors.BugNotInstalledError:
        error("bug not installed: {}".format(bug_name))

    # ensure that the container is always destroyed
    finally:
        if c:
            c.destroy()


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

    # [source add :url]
    cmd = g_subparsers.add_parser('add')
    cmd.add_argument('source')
    cmd.set_defaults(func=lambda args: add_source(rbox, args.source))

    # [source remove :url]
    cmd = g_subparsers.add_parser('remove')
    cmd.add_argument('source')
    cmd.set_defaults(func=lambda args: remove_source(rbox, args.source))

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
    cmd.add_argument('--installed',
                     dest='installed',
                     action='store_true')
    cmd.add_argument('--uninstalled',
                     dest='installed',
                     action='store_false')
    cmd.set_defaults(installed=None)
    cmd.set_defaults(func=lambda args: list_tools(rbox, args.installed))


    ###########################################################################
    # [dataset] group
    ###########################################################################
    g_dataset = subparsers.add_parser('dataset')
    g_subparsers = g_dataset.add_subparsers()

    # [dataset list]
    cmd = g_subparsers.add_parser('list')
    cmd.set_defaults(func=lambda args: list_datasets(rbox))


    ###########################################################################
    # [container] group
    ###########################################################################
    g_container = subparsers.add_parser('container')
    g_subparsers = g_container.add_subparsers()

    # [container launch :bug]
    cmd = g_subparsers.add_parser('launch')
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
    cmd.set_defaults(func=lambda args: launch(rbox,
                                              args.bug,
                                              interactive=True,
                                              tools=args.tools,
                                              volumes=args.volumes))

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
    cmd.add_argument('command')
    cmd.set_defaults(func=lambda args: launch(rbox,
                                              args.bug,
                                              interactive=False,
                                              command=args.command,
                                              tools=args.tools,
                                              volumes=args.volumes))

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

    # [bug list]
    cmd = g_subparsers.add_parser('list')
    cmd.add_argument('--installed',
                     dest='installed',
                     action='store_true')
    cmd.add_argument('--uninstalled',
                     dest='installed',
                     action='store_false')
    cmd.set_defaults(installed=None)
    cmd.set_defaults(func=lambda args: list_bugs(rbox, args.installed))

    return parser


def main():
    try:
        parser = build_parser()
        args = parser.parse_args()
        if 'func' in vars(args):
            args.func(args)
    except KeyboardInterrupt:
        pass


if __name__ == "__main__":
    main()
