#!/usr/bin/env python
TIMEOUT=30

class TestMission(object):

    @staticmethod
    def from_file(fn):
        with open(fn, "r") as f:
            for (num, line) in enumerate(f):
                line = line.strip('\n').strip('\r\r')
                if num == 0:
                    assert(line == "QGC WPL 110")
                commands = [TestMissionCommand.from_line(line) for line in lines]

    def __init__(self, commands):
        self.commands = commands


class TestMissionCommand(object):
    @staticmethod
    def from_line(line):
        parts = line.split('\t')
        assert(len(parts) == 12)

        typ = int(parts[3])
        builder = ({
            16: NavigateCommand
        })[typ]
        return builder.from_line(line)


class NavigateCommand(object):
    @staticmethod
    def from_line(line):
        parts = line.split('\t')
        return NavigateCommand()

    def execute():
        return wait_waypoint(mav, 0, 1, max_dist=2, timeout=TIMEOUT)


class NavigateCommand(object):
    @staticmethod
    def from_line(line):
        parts = line.split('\t')
        return NavigateCommand()

    def execute():
        return wait_waypoint(mav, 0, 1, max_dist=2, timeout=TIMEOUT)


TestMission.from_file("missions/bad1.txt")
