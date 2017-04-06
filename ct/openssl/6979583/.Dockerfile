FROM christimperley/repairbox:ct-openssl-base

# go to the specified revision
ADD revision.txt /experiment/.revision.txt
RUN test -f .revision.txt && \
    cd source && \
    git reset --hard $(cat /experiment/.revision.txt)

# scenario details
ARG SCENARIO_NAME
ENV SCENARIO_NAME ${SCENARIO_NAME} 

# generate manifest [GENERIC]
ADD mutated /experiment/mutated
RUN mkdir preprocessed && \
    cd mutated && \
    find . -type f | sed -e 's#^./##' > ../preprocessed/manifest.txt

# preprocess the source code and generate the oracle
ADD blacklist.txt /experiment/blacklist.txt
RUN (cd source && ./config && make -j CC="gcc -save-temps=obj") && \
    ./extract-preprocessed.sh fixed && \
    (cd source/test && perl run_tests.pl list) > tests.txt && \
    ./filter.sh tests.txt | sponge tests.txt && \
    ./blacklist.sh && \
    ./generate-pythia-manifest && rm generate-pythia-manifest && \
    pythia generate "${EXECUTABLE}" && \
    (cd source && make clean) && \
    find . -name '*.i' -delete && \
    find . -name '*.s' -delete

# inject the buggy code and find the failing test cases
RUN cp -r mutated/* source && \
    (cd source && make clean && make -j CC="gcc -save-temps=obj") && \
    ./extract-preprocessed.sh preprocessed && \
    pythia map "${EXECUTABLE}"&& \
    (cd source && make clean) && \
    find . -name '*.i' -delete && \
    find . -name '*.s' -delete

# create the problem.json file [GENERIC]
RUN ./generate-description && \
    rm generate-description
