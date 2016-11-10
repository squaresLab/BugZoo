FROM repairbox:sir-grep

# Environmental variables for fault details?
ENV PROGRAM_VER v1
ENV FAULT_NUM 1

# Copy source code for original, fixed version of the program into "source"
RUN cp -r versions.alt/versions.orig/${PROGRAM_VER}/* source

# Build the original version of the program
RUN cd source && make build

# Fix a bug in the grep test universe file
RUN sed -i "76 s#QUOTE}#QUOTE}\"#" testplans.alt/$PROGRAM_VER/v0.cov.universe.esc

# Generate oracle outputs
RUN cd scripts &&\
    mts .. ../source/grep.exe ../testplans.alt/$PROGRAM_VER/v0.cov.universe.esc R test.sh NULL NULL &&\
    (./test.sh; exit 0) &&\
    mkdir ../oracle &&\
    mv ../outputs/* ../oracle &&\
    rm test.sh
