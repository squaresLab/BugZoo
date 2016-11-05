#!/bin/bash
#
# (Re-)builds all of the RepairBox docker images, skipping any whose
# Dockerfile hasn't changed.

# build base images
docker build -t repairbox:fedora64 base/fedora64
docker build -t repairbox:ubuntu32 base/ubuntu32

# TSE benchmarks
docker build -t repairbox:atris tse-2012/atris
 docker build -t repairbox:ccrypt tse-2012/ccrypt
 docker build -t repairbox:deroff tse-2012/deroff
docker build -t repairbox:flex tse-2012/flex
docker build -t repairbox:gcd tse-2012/gcd
#docker build -t repairbox:imagemagick tse-2012/imagemagick
docker build -t repairbox:indent tse-2012/indent
#docker build -t repairbox:lighttpd tse-2012/lighttpd
docker build -t repairbox:look-svr tse-2012/look-svr
docker build -t repairbox:look-ultrix tse-2012/look-ultrix
#docker build -t repairbox:openldap tse-2012/openldap
docker build -t repairbox:php tse-2012/php
docker build -t repairbox:tiff tse-2012/tiff
docker build -t repairbox:uniq tse-2012/uniq
docker build -t repairbox:units tse-2012/units
#docker build -t repairbox:wuftpd tse-2012/wuftpd
docker build -t repairbox:zune tse-2012/zune

# ManyBugs; manually listed for now, but I'll automate this later
docker build -t repairbox:python-69224 many-bugs/python/python-bug-69223-69224
