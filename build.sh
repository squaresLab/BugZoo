#!/bin/bash
#
# (Re-)builds all of the RepairBox docker images, skipping any whose
# Dockerfile hasn't changed.

# build base images
docker build -t repairbox:fedora64 base/fedora64
docker build -t repairbox:ubuntu32 base/ubuntu32
