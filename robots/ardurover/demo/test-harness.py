#!/usr/bin/env python
import sys
import os
import pexpect
import time
import shutil

from pymavlink import mavutil, mavwp

# import autotest modules
testdir = os.path.abspath("source/Tools/autotest")
sys.path.append(testdir)

from common import *
from pysim import util, vehicleinfo

HOME = mavutil.location(37.9941253662109375, -78.39752197265625, 7299957275390625, 180)
homeloc = None

def wait_ready_to_arm(mavproxy):
    # wait for EKF and GPS checks to pass
    mavproxy.expect('IMU0 is using GPS')


def arm_rover(mavproxy, mav):
    wait_ready_to_arm(mavproxy);

    mavproxy.send('arm throttle\n')
    mavproxy.expect('ARMED')

    print("ROVER ARMED")
    return True


def setup_rc(mavproxy):
    """Setup RC override control."""
    for chan in [1, 2, 3, 4, 5, 6, 7]:
        mavproxy.send('rc %u 1500\n' % chan)
    mavproxy.send('rc 8 1800\n')


def drive_mission(mavproxy, mav, filename):
    """Drive a mission from a file."""
    global homeloc
    print("Driving mission %s" % filename)
    mavproxy.send('wp load %s\n' % filename)
    mavproxy.expect('Flight plan received')
    mavproxy.send('wp list\n')
    mavproxy.expect('Requesting [0-9]+ waypoints')
    mavproxy.send('switch 4\n')  # auto mode
    mavproxy.send('rc 3 1500\n')
    wait_mode(mav, 'AUTO')
    if not wait_waypoint(mav, 1, 4, max_dist=5):
        return False
    wait_mode(mav, 'HOLD')
    print("Mission OK")
    return True


def test(mission):
    global homeloc
    assert mission in ['good1','good2','good3','bad1','bad2']

    binary = '/experiment/source/build/sitl/bin/ardurover'
    options = '--sitl=127.0.0.1:5501 --out=127.0.0.1:19550 --streamrate=10'
    home = "%f,%f,%u,%u" % (HOME.lat, HOME.lng, HOME.alt, HOME.heading)
    sitl = util.start_SITL(binary, wipe=True, model='rover', home=home, speedup=10)
    mavproxy = util.start_MAVProxy_SITL('APMrover2', options=options)

    print("WAITING FOR PARAMETERS")
    mavproxy.expect('Received [0-9]+ parameters')

    # setup test parameters
    mavproxy.send("param load %s/default_params/rover.parm\n" % testdir)
    mavproxy.expect('Loaded [0-9]+ parameters')
    mavproxy.send("param set LOG_REPLAY 1\n")
    mavproxy.send("param set LOG_DISARMED 1\n")
    time.sleep(2)

    # restart with new parms
    util.pexpect_close(mavproxy)
    util.pexpect_close(sitl)

    sitl = util.start_SITL(binary, model='rover', home=home, speedup=10, gdb=False)
    mavproxy = util.start_MAVProxy_SITL('APMrover2', options=options)
    mavproxy.expect('Telemetry log: (\S+)')
    logfile = mavproxy.match.group(1)
    print("LOGFILE %s" % logfile)

    mavproxy.expect('Received [0-9]+ parameters')

    util.expect_setup_callback(mavproxy, expect_callback)

    expect_list_clear()
    expect_list_extend([sitl, mavproxy])

    # get a mavlink connection going
    try:
        mav = mavutil.mavlink_connection('127.0.0.1:19550', robust_parsing=True)
    except Exception as msg:
        print("Failed to start mavlink connection on 127.0.0.1:19550" % msg)
        raise
    mav.message_hooks.append(message_hook)
    mav.idle_hooks.append(idle_hook)

    try:
        print("Waiting for a heartbeat with mavlink protocol %s" % mav.WIRE_PROTOCOL_VERSION)
        mav.wait_heartbeat()

        print("Setting up RC parameters")
        setup_rc(mavproxy)

        print("Waiting for GPS fix")
        mav.wait_gps_fix()
        homeloc = mav.location()
        print("Home location: %s" % homeloc)

        # Perform mission
        return  arm_rover(mavproxy, mav) and \
                drive_mission(mavproxy, mav, "missions/{}.txt".format(mission))

    # enforce a time limit
    except pexpect.TIMEOUT:
        print("Failed: time out")
        return False

    finally:
        mav.close()
        util.pexpect_close(mavproxy)
        util.pexpect_close(sitl)


if __name__ == "__main__":
    test(sys.argv[1])
