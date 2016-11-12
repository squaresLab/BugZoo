#
# TODO: oracle generation isn't reading std. err?
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

# Generate oracle outputs
RUN generate-oracle "${EXECUTABLE}" ${PROGRAM_VER}
#RUN cd scripts &&\
#    mts .. ../${EXECUTABLE} ../testplans.alt/$PROGRAM_VER/v0.cov.universe.esc R test.sh NULL NULL &&\
#    (./test.sh; exit 0) &&\
#    mkdir ../oracle &&\
#    mv ../outputs/* ../oracle &&\
#    rm test.sh

# Copy faulty version of program to "source"
#RUN cp -r versions.alt/versions.seeded/${PROGRAM_VER}/* source
#
## Activate selected fault
#RUN cd source &&\
#    sed -i "${FAULT_NUM} s#\/\* ##" FaultSeeds.h &&\
#    sed -i "${FAULT_NUM} s#\*\/##" FaultSeeds.h
#
## Build faulty program
#RUN cd source && make build
#
## Build the original test script for the problem
#RUN cd scripts &&\
#    mts ..\
#        ../${EXECUTABLE}\
#        ../testplans.alt/${PROGRAM_VER}/v0.cov.universe.esc\
#        D\
#        test.sh\
#        NULL\
#        ../outputs.alt
#
## Remove the boilerplate at the top of the file
#RUN cd scripts &&\
#    tail -n +11 test.sh > test.commands &&\
#    sed -i "s#../${EXECUTABLE}#${EXECUTABLE}#g" test.commands &&\
#    sed -i "s#../inputs/#inputs/#g" test.commands &&\
#    grep "^${EXECUTABLE}" test.commands | sponge test.commands &&\
#    sed -i 's#> ../outputs/.*$##g' test.commands &&\
#    rm test.sh
#
## Remove unnecessary files
#RUN rm -rf  testplans testplans.alt\
#            traces traces.alt\
#            versions versions.alt\
#            outputs outputs.alt\
#            originals info docs
#
# Move the test commands to the root of the bug scenario
#RUN mv scripts/test.commands test.commands && rmdir scripts
#
# Generate the test case mapping
#RUN generate-mapping
