FROM repairbox:sir-sed
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Transform test suite to Pythia
RUN pythia build-manifest-from-mts . /experiment/testplans.alt/v1/v0_2.universe ${EXECUTABLE}

# Environmental variables for fault details?
ENV PROGRAM_VERSION v1

# Copy source code for original, fixed version of the program into "source"
RUN cp -r versions.alt/versions.seeded/${PROGRAM_VERSION}/* source

# Build the original version of the program
RUN cd source && make build

# Generate oracle outputs and a list of test commands
#RUN pythia generate "${EXECUTABLE}"

# Copy faulty version of program to "source"
#RUN cp -r versions.alt/versions.seeded/${PROGRAM_VERSION}/* source

# Fix the source code file such that the FaultSeeds header file is included
#RUN sed -i '1i#include "FaultSeeds.h"' ${SOURCE_FILE}

# Remove unnecessary files
#RUN rm -rf  testplans testplans.alt\
#            traces traces.alt\
#            versions versions.alt\
#            outputs outputs.alt\
#            originals info docs\
#            scripts
