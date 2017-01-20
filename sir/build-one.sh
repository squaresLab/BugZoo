#!/bin/bash
HERE_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
program=$1

# Builds a given version of the specified program
build_version(){
  version=$(basename $1)
  program=$(dirname $1)

  # Compute the name of the image for this program version
  program_image="christimperley/repairbox:sir-${program}"
  version_image="${program_image}-${version}"

  # Construct the image for this program version
  docker_dir=$(mktemp -d)
  docker_file="${docker_dir}/Dockerfile"
  cp ${HERE_DIR}/Dockerfile.version ${docker_file}
  sed -i "s#^FROM <BASE_FILE>\$#FROM ${program_image}#" ${docker_file}
  sed -i "s#<PROGRAM_VERSION>#${version}#" ${docker_file}

  # Build the docker image
  echo "Building: ${version_image}"
  docker build -t ${version_image} ${docker_dir} > /dev/null

  # Destroy the temporary directory
  rm -rf ${docker_dir}
}

# Builds the Docker image for a particular fault within the SIR benchmarks.
build_fault(){
  fault=$(basename $1)
  version=$(basename "$(dirname $1)")
  program=$(dirname "$(dirname $1)")

  # compute the name of the Docker image
  version_image="christimperley/repairbox:sir-${program}-${version}"
  fault_image="${version_image}-${fault}"

  # construct the Docker image
  docker_dir=$(mktemp -d)
  docker_file="${docker_dir}/Dockerfile"
  cp ${HERE_DIR}/Dockerfile.fault ${docker_file}
  sed -i "s#^FROM <BASE_FILE>\$#FROM ${version_image}#" ${docker_file}
  sed -i "s#<FAULT_ID>#${fault}#" ${docker_file}

  # Build the docker image
  echo "Building: ${fault_image}"
  docker build -t ${fault_image} ${docker_dir} > /dev/null

  rm -rf ${docker_dir}
}

if [ ! -d $program ]; then
  echo "ERROR: no directory for specified program ($program) was found."
  exit 1
fi

# build each version
while read v; do
  build_version $v
done < ${program}/versions.txt

# build each scenario
while read f; do
  build_fault $f
done < ${program}/scenarios.txt
