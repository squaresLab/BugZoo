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
build_program flex

# gzip-v1
build_version gzip v1
build_fault gzip v1 KL_1
build_fault gzip v1 KL_2
build_fault gzip v1 KL_5
build_fault gzip v1 KL_6
build_fault gzip v1 KP_1
build_fault gzip v1 KP_2
build_fault gzip v1 KP_3
build_fault gzip v1 KP_4
build_fault gzip v1 KP_5
build_fault gzip v1 KP_6
build_fault gzip v1 KP_7
build_fault gzip v1 KP_8
build_fault gzip v1 KP_9
build_fault gzip v1 KP_10
build_fault gzip v1 KP_11
build_fault gzip v1 TW_3

# gzip-v2
build_version gzip v2
build_fault gzip v2 KL_1
build_fault gzip v2 KL_2
build_fault gzip v2 KL_3
build_fault gzip v2 KL_5
build_fault gzip v2 KL_6
build_fault gzip v2 KL_8
build_fault gzip v2 TW_1

# gzip-v3
build_version gzip v3
build_fault gzip v3 TW_1
build_fault gzip v3 KP_1
build_fault gzip v3 KP_2
build_fault gzip v3 KP_3
build_fault gzip v3 KP_4
build_fault gzip v3 KL_1
build_fault gzip v3 KL_2
build_fault gzip v3 KL_3
build_fault gzip v3 KL_4
build_fault gzip v3 KL_5

# gzip-v4
build_version gzip v4
build_fault gzip v4 KL_1
build_fault gzip v4 KL_2
build_fault gzip v4 KL_4
build_fault gzip v4 KL_6
build_fault gzip v4 KL_7
build_fault gzip v4 KL_8
build_fault gzip v4 KL_10
build_fault gzip v4 KP_1
build_fault gzip v4 KP_2
build_fault gzip v4 KP_3
build_fault gzip v4 KP_4
build_fault gzip v4 KP_5

# gzip-v5
build_version gzip v5
build_fault gzip v5 TW_1
build_fault gzip v5 TW_2
build_fault gzip v5 TW_4
build_fault gzip v5 TW_5
build_fault gzip v5 TW_6
build_fault gzip v5 KL_1
build_fault gzip v5 KL_2
build_fault gzip v5 KL_3
build_fault gzip v5 KL_4
build_fault gzip v5 KL_5
build_fault gzip v5 KL_6
build_fault gzip v5 KL_7
build_fault gzip v5 KL_8
build_fault gzip v5 KL_9

# flex-v1
build_version flex v1
build_fault flex v1 HD_1
build_fault flex v1 HD_2
build_fault flex v1 HD_3
build_fault flex v1 HD_4
build_fault flex v1 HD_5
build_fault flex v1 HD_6
build_fault flex v1 HD_7
build_fault flex v1 HD_8
build_fault flex v1 AA_1
build_fault flex v1 AA_2
build_fault flex v1 AA_3

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
