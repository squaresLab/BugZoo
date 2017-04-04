#!/bin/bash
docker rm genprog
docker create --log-driver none \
              -v /opt/genprog3 \
              --name genprog \
              christimperley/genprog
docker run  --log-driver none \
            --volumes-from genprog \
            --name rbox \
            --rm \
            -it christimperley/repairbox:ct-openssl-$1
