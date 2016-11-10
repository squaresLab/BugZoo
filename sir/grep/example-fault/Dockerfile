FROM repairbox:sir-grep

# Environmental variables for fault details?
ENV PROGRAM_VER v1
ENV FAULT_NUM 1

# Copy source code for original, fixed version of the program into "source"
RUN cp -r versions.alt/versions.orig/${PROGRAM_VER}/* source

# Build the original version of the program
RUN cd source && make build

# Generate expected test output fetching script
RUN cd scripts &&\
    mts .. ../source/grep.exe ../testplans.alt/$PROGRAM_VER/v0.cov.universe.esc R test.sh NULL NULL

# Generate oracle outputs
#    ./test.sh &&\
#    rm test.sh &&\
#    mkdir ../oracle &&\
#    mv outputs/* ../oracle
