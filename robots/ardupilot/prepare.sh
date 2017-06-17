#!/bin/bash
cd /experiment/source
./waf configure CFLAGS="--coverage" \
                CXXFLAGS="--coverage" \
                LDFLAGS="--coverage"
./waf build -j"$(nproc)"
mv build/sitl/compile_commands.json \
   /experiment/source/compile_commands.json
