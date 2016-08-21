#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
fake_root="$here_dir/fake-root"

# Check if this test script is being used to compute coverage information.
[[ $(dirname $executable) = "coverage" ]] && coverage=0 || coverage=1
[[ $coverage = 0 ]] && timeout=10 || timeout=2


for png in BASI0G01 BASN3P01 G10N2C08 S37N3P04 TBWN3P08 
do
  rm -rf gradient.png tmp.txt $png".txt"
  timeout $timeout $fake_root/convert "pngsuite/"$png".PNG" -function Arcsin 4 gradient.png
  timeout $timeout $fake_root/identify -verbose gradient.png > tmp.txt
  head -n 22 tmp.txt | tail -n 6 > $png".txt"
  diff $png".txt" "test_"$png".out" && echo "passed "$png".PNG" >> $2
done

rm TBWN3P08.txt tmp.txt gradient.png

exit 0
