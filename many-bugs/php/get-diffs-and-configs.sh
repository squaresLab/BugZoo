#!/bin/bash
HERE_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

fetch_bug(){
  scenario=$1
  pushd /tmp &&\
    wget -qq "http://repairbenchmarks.cs.umass.edu/ManyBugs/scenarios/${scenario}.tar.gz" &&\
    tar -xf "${scenario}.tar.gz" &&\
    cp "${scenario}/configuration-default" "$HERE_DIR/${scenario}/configuration-default" &&\
    cp "${scenario}/diff" "$HERE_DIR/${scenario}" &&\
    rm -rf "/tmp/${scenario}*" &&\
    popd
  echo "fetched bug: ${scenario}"
}
