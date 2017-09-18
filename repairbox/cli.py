#!/usr/bin/env python3
import argparse
import tabulate

from repairbox.manager import RepairBoxManager

def list_sources() -> None:
    for src in RepairBoxManager.sources.sources:
        print("- {}".format(src.url))


def add_source(src: str) -> None:
    RepairBoxManager.sources.add(src)
    print('added source: {}'.format(src))


def remove_source(src: str) -> None:
    RepairBoxManager.sources.remove(src)
    print('removed source: {}'.format(src))


def update_sources() -> None:
    print('updating sources...')
    RepairBoxManager.sources.update()


def install_bug(name: str, update: bool) -> None:
    print('installing bug: {}'.format(name))
    bug = RepairBoxManager.bugs[name]
    bug.install(upgrade=update)


def launch(name: str) -> None:
    bug = RepairBoxManager.bugs[name]
    bug.install()
    try:
        container = bug.launch()
    finally:
        container.remove(force=True)


def list_bugs() -> None:
    tbl = []
    hdrs = ['Bug', 'Dataset', 'Source', 'Installed?']
    for bug in RepairBoxManager.bugs:
        installed = 'Yes' if bug.installed else 'No'
        row = [bug.identifier, bug.dataset, bug.source.url, installed]
        tbl.append(row)
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def main():
    #with open(os.path.join(os.path.dirname(__file__), "banner.txt"), "r") as f:
    #    desc = f.read()

    desc = ':-)'
    parser = argparse.ArgumentParser(description=desc,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    subparsers = parser.add_subparsers()
    parser.add_argument('--version', action='version', version='2.0.0')

    # list-sources
    list_sources_parser = subparsers.add_parser('list-sources')
    list_sources_parser.set_defaults(func=lambda args: list_sources())

    # add-source [src]
    add_source_parser = subparsers.add_parser('add-source')
    add_source_parser.add_argument('src')
    add_source_parser.set_defaults(func=lambda args: add_source(args.src))

    # remove-source [src]
    remove_source_parser = subparsers.add_parser('remove-source')
    remove_source_parser.add_argument('src')
    remove_source_parser.set_defaults(func=lambda args: remove_source(args.src))

    # install-bug [src]
    install_bug_parser = subparsers.add_parser('install-bug')
    install_bug_parser.add_argument('bug')
    install_bug_parser.add_argument('--update',
                                    action='store_true')
    install_bug_parser.set_defaults(func=lambda args: install_bug(args.bug, args.update))

    # launch [src]
    launch_parser = subparsers.add_parser('launch')
    launch_parser.add_argument('bug')
    launch_parser.set_defaults(func=lambda args: launch(args.bug))

    # list-bugs
    list_bugs_parser = subparsers.add_parser('list-bugs')
    list_bugs_parser.set_defaults(func=lambda args: list_bugs())

    # update-sources
    update_sources_parser = subparsers.add_parser('update-sources')
    update_sources_parser.set_defaults(func=lambda args: update_sources())


    args = parser.parse_args()
    if 'func' in vars(args):
        args.func(args)


if __name__ == "__main__":
    main()
