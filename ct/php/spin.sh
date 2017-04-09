#!/bin/bash
docker rm genprog
docker create --log-driver none \
              -v /opt/genprog3 \
              --name genprog \
              christimperley/genprog
docker run  --log-driver none \
            --volumes-from genprog \
            --cpus 1.0 \
            --name rboxphp \
            --rm \
            -it christimperley/repairbox:ct-php-$1
