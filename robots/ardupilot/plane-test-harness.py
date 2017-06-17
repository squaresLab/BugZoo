#!/usr/bin/env python
import sys
import os
import pexpect
from pymavlink import mavutil

# import autotest modules
testdir = os.path.abspath("source/Tools/autotest")
sys.path.append(testdir)

from common import *
from pysim import util

# what are these?
HOME_LOCATION = '-35.362938,149.165085,585,354'
WIND = "0,180,0.2"  # speed,direction,variance

homeloc = None

def takeoff(mavproxy, mav):
    """Takeoff get to 30m altitude."""
    # wait for EKF and GPS checks to pass
    mavproxy.expect('IMU0 is using GPS')

    mavproxy.send('arm throttle\n')
    mavproxy.expect('ARMED')

    mavproxy.send('switch 4\n')
    wait_mode(mav, 'FBWA')

    # some rudder to counteract the prop torque
    mavproxy.send('rc 4 1700\n')

    # some up elevator to keep the tail down
    mavproxy.send('rc 2 1200\n')

    # get it moving a bit first
    mavproxy.send('rc 3 1300\n')
    mav.recv_match(condition='VFR_HUD.groundspeed>6', blocking=True)

    # a bit faster again, straighten rudder
    mavproxy.send('rc 3 1600\n')
    mavproxy.send('rc 4 1500\n')
    mav.recv_match(condition='VFR_HUD.groundspeed>12', blocking=True)

    # hit the gas harder now, and give it some more elevator
    mavproxy.send('rc 2 1100\n')
    mavproxy.send('rc 3 2000\n')

    # gain a bit of altitude
    if not wait_altitude(mav, homeloc.alt+150, homeloc.alt+180, timeout=30):
        return False

    # level off
    mavproxy.send('rc 2 1500\n')

    print("TAKEOFF COMPLETE")
    return True


def setup_rc(mavproxy):
    """Setup RC override control."""
    for chan in [1, 2, 4, 5, 6, 7]:
        mavproxy.send('rc %u 1500\n' % chan)
    mavproxy.send('rc 3 1000\n')
    mavproxy.send('rc 8 1800\n')


def fly_mission(mavproxy, mav, filename, height_accuracy=-1, target_altitude=None):
    """Fly a mission from a file."""
    global homeloc # why do we need this?
    print("Flying mission %s" % filename)
    mavproxy.send('wp load %s\n' % filename)
    mavproxy.expect('Flight plan received')
    mavproxy.send('wp list\n')
    mavproxy.expect('Requesting [0-9]+ waypoints')
    mavproxy.send('switch 1\n')  # auto mode
    wait_mode(mav, 'AUTO')
    if not wait_waypoint(mav, 1, 7, max_dist=60):
        return False
    if not wait_groundspeed(mav, 0, 0.5, timeout=60):
        return False
    print("Mission OK")
    return True


def fly(mission):
    """Fly ArduPlane in SITL.

    you can pass viewerip as an IP address to optionally send fg and
    mavproxy packets too for local viewing of the flight in real time
    """
    global homeloc
	
    binary = '/experiment/source/build/sitl/bin/arduplane'
    valgrind = False
    use_map = False
    gdb = False
    options = '--sitl=127.0.0.1:5501 --out=127.0.0.1:19550 --streamrate=10'

    sitl = util.start_SITL(binary, model='plane-elevrev', home=HOME_LOCATION, speedup=10,
                          valgrind=valgrind, gdb=gdb,
                          defaults_file=os.path.join(testdir, 'default_params/plane-jsbsim.parm'))

    mavproxy = util.start_MAVProxy_SITL('ArduPlane', options=options)
    mavproxy.expect('Telemetry log: (\S+)')
    logfile = mavproxy.match.group(1)
    print("LOGFILE %s" % logfile)

    util.expect_setup_callback(mavproxy, expect_callback)
    mavproxy.expect('Received [0-9]+ parameters')
    expect_list_clear()
    expect_list_extend([sitl, mavproxy])

    print("Started simulator")

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
        mav.recv_match(condition='VFR_HUD.alt>10', blocking=True)
        mav.wait_gps_fix()
        while mav.location().alt < 10:
            mav.wait_gps_fix()
        homeloc = mav.location()
        print("Home location: %s" % homeloc)

        if not takeoff(mavproxy, mav):
            print("Failed takeoff")
            failed = True

    except pexpect.TIMEOUT as e:
        print("Failed with timeout")


    # try to run a mission?
    # "ArduPlane-Missions/CMAC-bigloop.txt"
    fly_mission(mavproxy, mav, "missions/{}".format(mission))

    # shutdown
    mav.close()
    util.pexpect_close(mavproxy)
    util.pexpect_close(sitl)

fly(sys.argv[1])
