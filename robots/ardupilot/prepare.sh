#!/bin/bash
/experiment/source/waf configure  CFLAGS="--coverage" \
                                  CXXFLAGS="--coverage" \
                                  LDFLAGS="--coverage"
/experiment/source/Tools/autotest/autotest.py build.ArduPlane -j"$(nproc)"
mv /experiment/source/build/sitl/compile_commands.json \
   /experiment/source/compile_commands.json
