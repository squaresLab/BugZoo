FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV OBJECT_ARCHIVE flex.tar.gz
ENV EXECUTABLE source/flex
ENV SOURCE_FILE source/allfile.c
ENV PREPROCESSED_FILE source/allfile.i

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf ${OBJECT_ARCHIVE} && mv flex/* . && rmdir flex && rm flex.tar.gz

# Generate the MTS test script (for V0; use for all)
RUN cd scripts &&\
    mts .. "../${EXECUTABLE}" ../testplans.alt/v1/v0.tsl.universe R commands.txt NULL NULL

# Extract and prepare each of the commands for Pythia
RUN cd scripts &&\
    grep -e "^../${EXECUTABLE}" commands.txt |\
    sed "s; > ../outputs/.\+$;;g" |\
    sed "s;../${EXECUTABLE};<<EXECUTABLE>>;g" |\
    sed "s;../inputs;<<SANDBOX>>;g" |\
    sponge commands.txt

# Fix path problem in test scripts
#RUN cd testplans.alt/testscripts &&\
#    rm -f *.old &&\
#    find .  -name '*.sh'\
#            -maxdepth 1\
#            -exec sed -i 's#$experiment_root/gzip/#/experiment/#g' "{}" \;

# Add missing # to each FaultSeeds.h file
#RUN find .  -name 'FaultSeeds.h'\
#            -exec sed -i 's/ define/ #define/g' "{}" \;

# Dispose of redundant files
#RUN rm -f build.properties
