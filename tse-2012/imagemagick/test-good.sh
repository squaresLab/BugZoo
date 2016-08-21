#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
image_dir="$here_dir/images"
fake_root="$here_dir/fake-root"

# Check if this test script is being used to compute coverage information.
[[ $(dirname $executable) = "coverage" ]] && coverage=0 || coverage=1
[[ $coverage = 0 ]] && timeout=10 || timeout=2

# Performs the test on a given file from the image directory
execute(){
  png=$1
  tmp_image_file=$(mktemp)
  timeout $timeout $fake_root/bin/convert "$image_dir/$png.PNG" -function Arcsin 4 $tmp_image_file && \
  timeout $timeout $fake_root/bin/identify -verbose $tmp_image_file | head -n 22 | tail -n 6 |& \
  diff "$test_dir/test_"$png".out" - &> /dev/null && echo "passed "$png".PNG" || echo "failed "$png".PNG"
  rm -f $tmp_image_file
}

execute BASI0G01
execute BASN3P01
execute G10N2C08
execute S37N3P04
execute TBWN3P08
execute G05N0G16

exit 0
