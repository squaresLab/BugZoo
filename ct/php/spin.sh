#!/bin/bash
docker run  --log-driver none \
            --volumes-from genprog \
            --rm \
            -it christimperley/repairbox:ct-php-98f801c
