#!/bin/bash
#
# Generates a file called "test.commands", where each line describes the
# command that should be executed for the test case matching that line
# number (i.e. the first line corresponds to the command for t1).
#
# Requires: sponge (provided by manyutils on Linux and OSX)

# Remove the boilerplate at the top of the file
tail -n +11 test.sh > test.commands

# Replace all instances of the executable with $EXECUTABLE, then keep only
# those lines in the file
sed -i 's#../source/grep.exe#$EXECUTABLE#g' test.commands
sed -i 's#../inputs/#$INPUTS/#g' test.commands
grep '^$EXECUTABLE' test.commands | sponge test.commands
sed -i 's#> ../outputs/.*$##g' test.commands
