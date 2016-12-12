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
build_version(){
  program=$1
  version=$2

  # Compute the name of the image for this program version
  program_image="repairbox:sir-${program}"
  version_image="${program_image}-${version}"

  # Construct the image for this program version
  docker_dir=$(mktemp -d)
  docker_file="${docker_dir}/Dockerfile"
  cp ${HERE_DIR}/Dockerfile.version ${docker_file}
  sed -i "s#^FROM <BASE_FILE>\$#FROM ${program_image}#" ${docker_file}
  sed -i "s#<PROGRAM_VERSION>#${version}#" ${docker_file}

  # Build the docker image
  echo "Building: ${version_image}"
  docker build -t ${version_image} ${docker_dir}

  # Destroy the temporary directory
  rm -rf ${docker_dir}
}

# Builds the Docker image for a particular fault within the SIR benchmarks.
build_fault(){
  program=$1
  version=$2
  fault=$3

  # compute the name of the Docker image
  version_image="repairbox:sir-${program}-${version}"
  fault_image="${version_image}-${fault}"

  # construct the Docker image
  docker_dir=$(mktemp -d)
  docker_file="${docker_dir}/Dockerfile"
  cp ${HERE_DIR}/Dockerfile.fault ${docker_file}
  sed -i "s#^FROM <BASE_FILE>\$#FROM ${version_image}#" ${docker_file}
  sed -i "s#<FAULT_ID>#${fault}#" ${docker_file}

  # Build the docker image
  echo "Building: ${fault_image}"
  docker build -t ${fault_image} ${docker_dir}

  rm -rf ${docker_dir}
}

# Build the base image for all SIR scenarios
docker build -t repairbox:sir .

build_program grep
build_program gzip

# gzip
build_version gzip v1
build_fault gzip v1 KL_1

#build_version grep v1
#build_version grep v2
#build_version grep v3
#build_version grep v4
#build_version grep v5

# Confirmed to be working:
#build_fault grep v1 DG_4
#build_fault grep v1 DG_9
#build_fault grep v1 KP_2
#build_fault grep v1 KP_5
#build_fault grep v2 DG_1
#build_fault grep v3 DG_3
#build_fault grep v3 KP_7
#build_fault grep v4 KP_6
