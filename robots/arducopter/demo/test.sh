#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test=$1

# find the name of the test
case ${test} in
  p1) t="throttle_failsafe";;
  p2) t="battery_failsafe";;
  p3) t="horizontal_fence";;
  p4) t="stability_patch";;
  p5) t="gps_glitch_loiter";;
  p6) t="gps_glitch_auto";;
  p7) t="loiter_ten";;
  p8) t="simple";;
  p9) t="super_simple";;
  p10) t="circle";;
  p11) t="copter_mission";;
  n1) t="square_stabilize";;
  default) exit 1
esac

# execute the test
"${here_dir}/test-harness.py" "${t}" &> /dev/null
exit $?
