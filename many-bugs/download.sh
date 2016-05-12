#!/bin/bash
#
# This script downloads the archive for a ManyBugs scenario given its name,
# from repairbenchmarks.cs.umass.edu/ManyBugs/scenarios, before unextracting
# it to the correct location and tidying up into a neater format, usable by the
# newest version of GenProg.
#
dir_here=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
many_bugs="http://repairbenchmarks.cs.umass.edu/ManyBugs/scenarios"

if [ $# -ne 1 ]; then
  echo "ERROR: no (full) scenario name supplied."
  exit 0
fi

scenario=$1
scenario_url="$many_bugs/$scenario.tar.gz"

if !(wget -q --spider $scenario_url); then
  echo "ERROR: failed to find scenario with given name on ManyBugs website."
  exit 0
fi

_parts=(${scenario//-/ })
program=${_parts[0]}
program_dir="$dir_here/$program"
archive="$program_dir/$scenario.tar.gz"
benchmark_dir="$program_dir/$scenario"

mkdir -p "$dir_here/$program"

echo "Downloading scenario archive from: $scenario_url"
wget $scenario_url -O $archive

echo "Unextracting downloaded archive at $archive to $benchmark_dir"

pushd $program_dir
tar -xf $archive
rm $archive
popd

echo "Tidying the benchmark directory"
$dir_here/tidy.sh $benchmark_dir
