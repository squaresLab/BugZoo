#!/bin/bash
#
# Converts a given configuration-default file into a JSON configuration for
# newer versions of GenProg
#
# * accepts the path to a configuration file as its input
# * produces its JSON equivalent in the same directory as the original file,
#   before deleting it
#
$cfg=$1
$cfg_dir=$(dirname $1)
$benchmark=$(basename $cfg_dir)

echo "Converting configuration-default in $cfg_dir...";
