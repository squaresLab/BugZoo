#!/bin/bash
#
# Generic compilation script for ManyBugs problems, and in fact, most
# "multi-file" problems you might want to deal with in GenProg.
#
# Accepts the path for a target executable of a candidate patch, whose
# directory contains the patched source files for the variant, and applies the
# changes 
#
# In the event of sanity checking or coverage generation, the directory name
# of the provided executable should be "sanity" or "coverage", respectively,
# although neither of these cases should have any impact upon compilation.
#
# Usage: ./compile.sh __EXE_NAME__
