FROM christimperley/repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME gzip
ENV UNIVERSE_FILE /experiment/testplans.alt/v0.tsl.universe
ENV EXECUTABLE source/gzip.exe
ENV SOURCE_FILE allfile.c
ENV PREPROCESSED_FILE allfile.i

# Mount bug files to /experiment
ADD tests.pythia.json /experiment
ADD gzip.tar.gz /experiment
WORKDIR /experiment
RUN sudo chown -R docker /experiment

RUN mv gzip/* . && rmdir gzip

# Fix path problem in test scripts
RUN cd testplans.alt/testscripts &&\
    rm -f *.old &&\
    find .  -name '*.sh'\
            -maxdepth 1\
            -exec sed -i 's#$experiment_root/gzip/#/experiment/#g' "{}" \;

# Generate necessary zip archives
RUN find inputs/testdir -type f\
                        ! -name "*.z"\
                        ! -name "*.gz"\
                        -exec sh -c 'gzip "$0" -c > "$0.z"' {} \;
RUN mv inputs/testdir/tarfile.tar.z inputs/testdir/tarfile.tgz

# Add missing # to each FaultSeeds.h file
RUN find .  -name 'FaultSeeds.h'\
            -exec sed -i 's/ define/ #define/g' "{}" \;

# Dispose of redundant files
RUN rm -f build.properties
