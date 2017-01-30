FROM christimperley/repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME bash
ENV OBJECT_ARCHIVE bash.tar.gz
ENV EXECUTABLE source/bash
#ENV SOURCE_FILE source/allfile.c
#ENV PREPROCESSED_FILE source/allfile.i

# Mount bug files to /experiment
ADD inputs.tar.gz /experiment
ADD versions.alt.tar.gz /experiment
ADD prepare-tests.sh /experiment
ADD build-test-manifest.py /experiment
WORKDIR /experiment

# Prepare the tests
RUN sed -i 's#TESTDIR=${HOME}/tmp#TESTDIR=${PWD}#g' inputs/setup1 && \
    sed -i 's#TESTDIR=${HOME}/tmp#TESTDIR=${PWD}#g' inputs/setup2 && \
    sed -i 's#$env(BASH_SRC_DIR)/bash#/experiment/source/bash#g'  inputs/setup0 && \
    find . -type f -exec sed -i 's/TESTS_SRC/PWD/g' {} \; && \
    find . -type f -exec sed -i 's#checkx ${PWD}/bgs.*##g' {} \;
RUN ./prepare-tests.sh && \
    rm -f prepare-tests.sh && \
    mv build-test-manifest.py inputs && \
    (cd inputs && ./build-test-manifest.py)
RUN mkdir -p source
