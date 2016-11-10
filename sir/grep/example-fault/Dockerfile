FROM repairbox:sir-grep

# Environmental variables for fault details?
ENV PROG_VER v1
ENV FAULT_NUM 1

# Copy source code for original, fixed version of the program into "source"
RUN cp -r versions.alt/versions.orig/${PROG_VER}/* source

# Build the original version of the program
RUN cd source && make build
