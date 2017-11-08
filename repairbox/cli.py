import argparse
import tabulate
import typing

from operator import itemgetter
from repairbox.manager import RepairBox


def list_datasets(rbox: 'RepairBox') -> None:
    """
    Produces a list of all the datasets known to RepairBox.
    """
    hdrs = ['Dataset', 'URL', 'Version']
    tbl = []
    for ds in rbox.datasets:
        tbl.append([ds.name, ds.url, ds.version])

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def add_dataset(rbox: 'RepairBox', ds: str) -> None:
    rbox.datasets.add(ds)
    print('added dataset: {}'.format(ds))


def remove_dataset(rbox: 'RepairBox', ds: str) -> None:
    rbox.datasets.remove(ds)
    print('removed dataset: {}'.format(ds))


def update_datasets(rbox: 'RepairBox', ) -> None:
    print('updating datasets...')
    rbox.datasets.update()


def install_artefact(rbox: 'RepairBox', name: str, update: bool) -> None:
    print('installing artefact: {}'.format(name))
    artefact = rbox.artefacts[name]
    artefact.install(upgrade=update)


def build_artefact(rbox: 'RepairBox', name: str, force: bool) -> None:
    print('building artefact: {}'.format(name))
    artefact = rbox.artefacts[name]
    artefact.build(force=force)


def download_artefact(rbox: 'RepairBox', name: str, force: bool) -> None:
    print('downloading artefact: {}'.format(name))
    artefact = rbox.artefacts[name]
    artefact.download(force=force)


def upload_artefact(rbox: 'RepairBox', name: str) -> None:
    print('uploading artefact: {}'.format(name))
    artefact = rbox.artefacts[name]
    artefact.upload()


# TODO: wrong name!
def uninstall_bug(rbox: 'RepairBox', name: str, force: bool) -> None:
    print('uninstalling artefact: {}'.format(name))
    artefact = rbox.artefacts[name]
    artefact.uninstall(force=force)


###############################################################################
# [tool] group
###############################################################################

def install_tool(rbox: 'RepairBox', name: str, update: bool) -> None:
    print('installing tool: {}'.format(name))
    t = rbox.tools[name]
    t.install(upgrade=update)


def uninstall_tool(rbox: 'RepairBox', name: str, force: bool) -> None:
    print('uninstalling tool: {}'.format(name))
    rbox.tools[name].uninstall(force=force)


def build_tool(rbox: 'RepairBox', name: str, force: bool) -> None:
    print('building tool: {}'.format(name))
    rbox.tools[name].build(force=force)


def download_tool(rbox: 'RepairBox', name: str, force: bool) -> None:
    print('downloading tool: {}'.format(name))
    rbox.tools[name].download(force=force)


def upload_tool(rbox: 'RepairBox', name: str) -> None:
    print('uploading tool: {}'.format(name))
    rbox.tools[name].upload()


# TODO: tidy up copypasta
def list_tools(rbox: 'RepairBox', show_installed=None) -> None:
    tbl = []
    hdrs = ['Tool', 'Source', 'Installed?']
    for tool in rbox.tools:

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != tool.installed:
                continue

        installed = 'Yes' if tool.installed else 'No'
        ds = 'X' # tool.dataset.name
        row = [tool.identifier, ds, installed]
        tbl.append(row)

    # sort by dataset then by artefact
    tbl = sorted(tbl, key=itemgetter(1,2))

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


###############################################################################
# [container] group
###############################################################################


def launch(rbox: 'RepairBox', name: str) -> None:
    artefact = rbox.artefacts[name]
    artefact.install()
    try:
        c = None
        c = artefact.provision(tty=True)
        c.interact()
    finally:
        if c: # ensure the container is destroyed
            c.destroy()


def list_artefacts(rbox: 'RepairBox', show_installed=None) -> None:
    tbl = []
    hdrs = ['Artefact', 'Source', 'Installed?']
    for artefact in rbox.artefacts:

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != artefact.installed:
                continue

        installed = 'Yes' if artefact.installed else 'No'
        row = [artefact.identifier, artefact.dataset.name, installed]
        tbl.append(row)

    # sort by dataset then by artefact
    tbl = sorted(tbl, key=itemgetter(1,2))

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def main():
    #with open(os.path.join(os.path.dirname(__file__), "banner.txt"), "r") as f:
    #    desc = f.read()
    rbox = RepairBox()

    desc = ':-)'
    parser = argparse.ArgumentParser(description=desc,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    subparsers = parser.add_subparsers()
    parser.add_argument('--version', action='version', version='2.0.0')

    ###########################################################################
    # [dataset] group
    ###########################################################################
    g_ds = subparsers.add_parser('dataset')
    g_subparsers = g_ds.add_subparsers()

    # [dataset list]
    cmd = g_subparsers.add_parser('list')
    cmd.set_defaults(func=lambda args: list_datasets(rbox))

    # [dataset add :dataset]
    cmd = g_subparsers.add_parser('add')
    cmd.add_argument('dataset')
    cmd.set_defaults(func=lambda args: add_dataset(rbox, args.dataset))

    # [dataset remove :dataset]
    cmd = g_subparsers.add_parser('remove')
    cmd.add_argument('dataset')
    cmd.set_defaults(func=lambda args: remove_dataset(rbox, args.dataset))

    # [dataset update]
    cmd = g_subparsers.add_parser('update')
    cmd.set_defaults(func=lambda args: update_datasets())


    ###########################################################################
    # [tool] group
    ###########################################################################
    g_tool = subparsers.add_parser('tool')
    g_subparsers = g_tool.add_subparsers()

    # [tool install (--update) :tool]
    cmd = g_subparsers.add_parser('install')
    cmd.add_argument('tool')
    cmd.add_argument('--update',
                     action='store_true')
    cmd.set_defaults(func=lambda args: install_tool(rbox, args.tool, args.update))

    # [tool uninstall (--force) :tool]
    cmd = g_subparsers.add_parser('uninstall')
    cmd.add_argument('tool')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: uninstall_tool(rbox, args.tool, force=args.force))

    # [tool build (--update) :artefact]
    cmd = g_subparsers.add_parser('build')
    cmd.add_argument('tool')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: build_tool(rbox, args.tool, args.force))

    # [tool download (--force) :artefact]
    cmd = g_subparsers.add_parser('download')
    cmd.add_argument('tool')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: download_tool(rbox, args.tool, args.force))

    # [tool upload :artefact]
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
    # [container] group
    ###########################################################################
    g_container = subparsers.add_parser('container')
    g_subparsers = g_container.add_subparsers()

    # [container launch :artefact]
    cmd = g_subparsers.add_parser('launch')
    cmd.add_argument('artefact')
    cmd.set_defaults(func=lambda args: launch(rbox, args.artefact))

    # [container run :artefact]

    # [container connect :artefact]


    ###########################################################################
    # [artefact] group
    ###########################################################################
    g_artefact = subparsers.add_parser('artefact')
    g_subparsers = g_artefact.add_subparsers()

    # [artefact install (--update) :artefact]
    cmd = g_subparsers.add_parser('install')
    cmd.add_argument('artefact')
    cmd.add_argument('--update',
                     action='store_true')
    cmd.set_defaults(func=lambda args: install_artefact(rbox, args.artefact, args.update))

    # [artefact uninstall (--force) :artefact]
    cmd = g_subparsers.add_parser('uninstall')
    cmd.add_argument('artefact')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: uninstall_artefact(rbox, args.artefact, force=args.force))

    # [artefact build (--update) :artefact]
    cmd = g_subparsers.add_parser('build')
    cmd.add_argument('artefact')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: build_artefact(rbox, args.artefact, args.force))

    # [artefact download (--force) :artefact]
    cmd = g_subparsers.add_parser('download')
    cmd.add_argument('artefact')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: download_artefact(rbox, args.artefact, args.force))

    # [artefact upload :artefact]
    cmd = g_subparsers.add_parser('upload')
    cmd.add_argument('artefact')
    cmd.set_defaults(func=lambda args: upload_artefact(rbox, args.artefact))

    # [artefact list]
    cmd = g_subparsers.add_parser('list')
    cmd.add_argument('--installed',
                     dest='installed',
                     action='store_true')
    cmd.add_argument('--uninstalled',
                     dest='installed',
                     action='store_false')
    cmd.set_defaults(installed=None)
    cmd.set_defaults(func=lambda args: list_artefacts(rbox, args.installed))


    # parse and process arguments
    args = parser.parse_args()
    if 'func' in vars(args):
        args.func(args)


if __name__ == "__main__":
    main()
