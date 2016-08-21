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

for png in BASI0G01 BASN3P01 G10N2C08 S37N3P04 TBWN3P08 
do
  tmp_image_file=$(mktemp)
  timeout $timeout $fake_root/bin/convert "$image_dir/$png.PNG" -function Arcsin 4 $tmp_image_file && \
  timeout $timeout $fake_root/bin/identify -verbose $tmp_image_file | head -n 22 | tail -n 6 |& \
  diff "$test_dir/test_"$png".out" - && echo "passed "$png".PNG"
  rm -f $tmp_image_file
done

exit 0
