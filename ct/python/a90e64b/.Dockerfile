FROM christimperley/repairbox:ct-python-base

# go to the specified revision
ARG REVISION
ENV REVISION ${REVISION}
RUN cd source && \
    git reset --hard ${REVISION}

# scenario details
ARG SCENARIO_NAME
ENV SCENARIO_NAME ${SCENARIO_NAME} 

# generate manifest [GENERIC]
ADD mutated /experiment/mutated
RUN mkdir preprocessed && \
    cd mutated && \
    find . -type f | sed -e 's#^./##' > ../preprocessed/manifest.txt

# build oracle and generate preprocessed code [GENERIC]
RUN cd source && \
    ./configure && \
    make -j CC="gcc -save-temps=obj" && \
    cd ../ && \
    ./extract-preprocessed.sh fixed && \
    find . -name '*.i' -delete && \
    find . -name '*.s' -delete && \
    (cd source && ./python -m test --list-tests > ../tests.txt) && \
    ./filter.sh tests.txt | sponge tests.txt && \
    (cd source && make clean)

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

# create the problem.json file [GENERIC]
RUN sed "s/<<POSITIVE_TESTS>>/$(wc -l passes.txt | cut -d' ' -f1)/" problem.template.json \
    | sed "s/<<NEGATIVE_TESTS>>/$(wc -l fails.txt | cut -d' ' -f1)/" \
    | sed "s/<<PROGRAM_NAME>>/${PROGRAM_NAME}/" \
    | sed "s/<<SCENARIO_NAME>>/${SCENARIO_NAME}/" > problem.json && \
    rm problem.template.json
