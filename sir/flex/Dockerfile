FROM christimperley/repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME flex
ENV OBJECT_ARCHIVE flex.tar.gz
ENV EXECUTABLE source/flex
ENV SOURCE_FILE source/flex.c
ENV PREPROCESSED_FILE source/flex.i

# Mount bug files to /experiment
ADD flex.tar.gz /experiment
RUN sudo chown -R docker /experiment
WORKDIR /experiment

# Move extracted archive contents into /experiment and dispose of unnecessary
# files
RUN mv flex/* . && rmdir flex && \
    rm -rf build.properties info

# Generate the Pythia script
RUN pythia build-manifest-from-mts . testplans.alt/v1/v0.tsl.universe ${EXECUTABLE}

# Reconstruct libfl.a for this machine
RUN cd versions.alt/versions.orig/v0 &&\
    rm -f libfl.a &&\
    cd lib_src &&\
    gcc -c libmain.c &&\
    gcc -c liballoc.c &&\
    gcc -c libstring.c &&\
    gcc -c libyywrap.c &&\
    ar cr libfl.a libmain.o liballoc.o libstring.o libyywrap.o &&\
    mv libfl.a /experiment/source 

# Remove all lib_src directories and libfl.a files from versions.alt
RUN find versions.alt -name libfl.a\
                      -type f\
                      -delete
RUN find versions.alt -name lib_src\
                      -type d |\
      xargs rm -rf

# Fix the COMPILE_PARAMETERS to avoid linking errors
ENV COMPILE_PARAMETERS "${COMPILE_PARAMETERS} -DHAVE_ALLOCA_H"
