FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV UNIVERSE_FILE /experiment/testplans.alt/v0.tsl.universe
ENV OBJECT_ARCHIVE gzip.tar.gz
ENV EXECUTABLE source/gzip.exe
ENV SOURCE_FILE source/allfile.c
ENV PREPROCESSED_FILE source/allfile.i

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf ${OBJECT_ARCHIVE} && mv gzip/* . && rmdir gzip && rm gzip.tar.gz

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
