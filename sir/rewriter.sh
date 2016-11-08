#!/bin/bash
#
# Requires: sponge (provided by manyutils on Linux and OSX)

# Remove the boilerplate at the top of the file
tail -n +11 test.sh > tester.sh

# Replace all instances of the executable with $EXECUTABLE, then keep only
# those lines in the file
sed -i 's#../source/grep.exe#$EXECUTABLE#g' tester.sh
grep '^$EXECUTABLE' tester.sh | sponge tester.sh

# Make sure the new test script is executable
chmod +x tester.sh

# Debugging
less tester.sh
