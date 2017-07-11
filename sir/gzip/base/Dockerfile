MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME gzip
ENV EXECUTABLE source/gzip.exe
ENV SOURCE_FILE allfile.c
ENV PREPROCESSED_FILE allfile.i

# Mount bug files to /experiment
ADD tests.pythia.json /experiment
ADD gzip.tar.gz /experiment
WORKDIR /experiment

RUN sudo chown -R docker /experiment && \
    mv gzip/inputs . && \
    mv gzip/versions.alt . && \
    rm -rf gzip

# Generate necessary zip archives
RUN find inputs/testdir -type f\
                        ! -name "*.z"\
                        ! -name "*.gz"\
                        -exec sh -c 'gzip "$0" -c > "$0.z"' {} \; && \
    mv inputs/testdir/tarfile.tar.z inputs/testdir/tarfile.tgz

# Add missing # to each FaultSeeds.h file
RUN find .  -name 'FaultSeeds.h'\
            -exec sed -i 's/ define/ #define/g' "{}" \;
