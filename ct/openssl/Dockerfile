FROM christimperley/repairbox:ct-base

ENV MAKE_TIMEOUT 600
ENV TEST_TIMEOUT 300
ENV PROGRAM_NAME openssl
ENV TOP /experiment/source

#ADD compile.sh /experiment/compile.sh
ADD run-test-name.sh /experiment/run-test-name.sh

# clone the repo
RUN git clone https://github.com/openssl/openssl source

###############

# go to the specified revision [GENERIC]
#ARG REVISION
#ENV REVISION ${REVISION}
ENV REVISION 3fd5ece
RUN cd source && \
    git reset --hard ${REVISION}

# generate the manifest [GENERIC]
ADD mutated /experiment/mutated
RUN mkdir preprocessed && \
    cd mutated && \
    find . -type f | sed -e 's#^./##' > ../preprocessed/manifest.txt

# preprocess the source code [SEMI-GENERIC]
RUN cd source && \
    ./config && make -j CC="gcc -save-temps=obj"
#&& \
RUN ./extract-preprocessed.sh 

# compute the test set
RUN cd source/test && \
    perl run_tests.pl list > /experiment/tests.txt
#&& \
#    cd ../../ && \
#    ./filter.sh tests.txt | sponge tests.txt
