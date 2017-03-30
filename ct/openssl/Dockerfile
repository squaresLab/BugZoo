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
RUN (cd source && ./config && make -j CC="gcc -save-temps=obj") && \
    ./extract-preprocessed.sh fixed && \
    (cd source/test && perl run_tests.pl list) > tests.txt && \
    ./filter.sh tests.txt | sponge tests.txt && \
    (cd source && make clean) && \
    find . -name '*.i' -delete && \
    find . -name '*.s' -delete

# inject the buggy code and find the failing test cases
RUN cp -r mutated/* source && \
    (cd source && make clean && make -j CC="gcc -save-temps=obj") && \
    ./filter.sh tests.txt > passes.txt && \
    ./extract-preprocessed.sh preprocessed && \
    (cd source && make clean) && \
    find . -name '*.i' -delete && \
    find . -name '*.s' -delete
RUN diff  --new-line-format="" \
          --unchanged-line-format="" \
          tests.txt passes.txt > fails.txt || exit 0
#&& \
#    ./blacklist.sh

# create the problem.json file [GENERIC]
RUN sed "s/<<POSITIVE_TESTS>>/$(wc -l passes.txt | cut -d' ' -f1)/" problem.template.json \
    | sed "s/<<NEGATIVE_TESTS>>/$(wc -l fails.txt | cut -d' ' -f1)/" \
    | sed "s/<<PROGRAM_NAME>>/${PROGRAM_NAME}/" \
    | sed "s/<<SCENARIO_NAME>>/${SCENARIO_NAME}/" > problem.json && \
    rm problem.template.json
