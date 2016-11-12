#
# TODO: Dispose of low quality test cases automatically?
#
FROM repairbox:sir-grep
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Environmental variables for fault details?
ENV EXECUTABLE source/grep.exe
ENV PROGRAM_VER v1
ENV FAULT_NUM 1

# Copy source code for original, fixed version of the program into "source"
RUN cp -r versions.alt/versions.orig/${PROGRAM_VER}/* source

# Build the original version of the program
RUN cd source && make build

# Fix a bug in the grep test universe file
RUN sed -i "76 s#QUOTE}#QUOTE}\"#" testplans.alt/$PROGRAM_VER/v0.cov.universe.esc

# Generate oracle outputs and a list of test commands
RUN generate-oracle "${EXECUTABLE}" ${PROGRAM_VER}

# Copy faulty version of program to "source"
RUN cp -r versions.alt/versions.seeded/${PROGRAM_VER}/* source
#
## Activate selected fault
RUN cd source &&\
    sed -i "${FAULT_NUM} s#\/\* ##" FaultSeeds.h &&\
    sed -i "${FAULT_NUM} s#\*\/##" FaultSeeds.h

## Build faulty program
RUN cd source && make build

## Build the original test script for the problem
RUN generate-test-runner "${EXECUTABLE}" ${PROGRAM_VER}

## Remove unnecessary files
RUN rm -rf  testplans testplans.alt\
            traces traces.alt\
            versions versions.alt\
            outputs outputs.alt\
            originals info docs\
            scripts

# Generate the test case mapping
#RUN generate-mapping
