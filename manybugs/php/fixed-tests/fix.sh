#!/bin/bash
from="/experiment/fixed-tests"
to="/experiment/src"
pushd "${from}"
cp -r . "${to}" && \
rm -rf /experiment/fixed-tests 
