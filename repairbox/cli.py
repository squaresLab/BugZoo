#!/usr/bin/env python3
import argparse

from manager import RepairBox

def source_list():
    for src in RepairBox.sources.sources:
        print("- {}".format(src.url))


def main():
    #with open(os.path.join(os.path.dirname(__file__), "banner.txt"), "r") as f:
    #    desc = f.read()
    desc = ':-)'
    parser = argparse.ArgumentParser(description=desc,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    subparsers = parser.add_subparsers()
    parser.add_argument('--version', action='version', version='2.0.0')

    # action: build
    build_parser = subparsers.add_parser('source-list')
    build_parser.set_defaults(func=lambda args: source_list())

    args = parser.parse_args()
    if 'func' in vars(args):
        args.func(args)


if __name__ == "__main__":
    main()
