FROM christimperley/repairbox:ct-base

ENV MAKE_TIMEOUT 600
ENV TEST_TIMEOUT 300
ENV PROGRAM_NAME openssl
ENV TOP /experiment/source

#ADD compile.sh /experiment/compile.sh
ADD test-by-name.sh /experiment/test-by-name.sh

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

# preprocess the source code and generate the oracle
RUN (cd source && ./config && make -j CC="gcc -save-temps=obj")
#&& \
RUN ./extract-preprocessed.sh fixed
#&& \
RUN (cd source/test && perl run_tests.pl list) > tests.txt && \
    ./filter.sh tests.txt | sponge tests.txt && \
    (cd source && make clean) && \
    find . -name '*.i' -delete && \
    find . -name '*.s' -delete

# inject the buggy code and find the failing test cases

