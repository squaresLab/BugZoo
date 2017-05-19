#!/bin/bash
cd /experiment
export PATH="${EXTRA_PATH}:${PATH}"
exec "$@"
