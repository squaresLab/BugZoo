#!/bin/bash
./test.sh n1 && \
./test.sh n2 && \
./test.sh p1 && \
./test.sh p2 && \
./test.sh p3 && echo "Fixed!" || echo "Garbage"
