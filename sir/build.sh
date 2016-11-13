#!/bin/bash
HERE_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Constructs the Docker image for a particular SIR program.
build_program(){
  program=$1
  program_image="repairbox:sir-${program}"
  docker build -t ${program_image} "${HERE_DIR}/${program}"
}

# Constructs the Docker image for a particular version of a program within
# the SIR benchmarks.
build_program_version(){
  program=$1
  version=$2

  # Compute the name of the base image for the program
  program_image="repairbox:sir-${program}"

  # Compute the name of the image for this version
  version_image="${program_image}-v${version}"

  # Construct the image for this program version
  docker_dir=$(mktemp -d)
  docker_file="${docker_dir}/Dockerfile"
  cp ${HERE_DIR}/Dockerfile.version ${docker_file}
  sed -i "s#^FROM <BASE_FILE>\$#FROM ${program_image}#" ${docker_file}
  sed -i "s#<PROGRAM_VERSION>#${version}#" ${docker_file}
  cat ${docker_file}

  # Build the docker image
  docker build -t ${version_image} ${docker_dir}

  # Destroy the temporary directory
  rm -rf ${docker_dir}
}

# Builds the Docker image for a particular fault within the SIR benchmarks.
build_fault(){
  program=$1
  version=$2
  fault=$3
}


build_program grep

build_program_version grep v1
