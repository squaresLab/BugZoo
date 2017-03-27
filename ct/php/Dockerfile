FROM christimperley/repairbox:ubuntu64

ENV MAKE_TIMEOUT 600
ENV TEST_TIMEOUT 300
ADD test.sh /workspace/test.sh
ADD compile.sh /workspace/compile.sh

# install PHP oracle and build deps
RUN sudo apt-get update && \
    sudo apt-get install -y php5 automake autoconf bison libxml2-dev moreutils && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# clone the PHP repo
RUN git clone https://github.com/php/php-src source
ARG REVISION
ENV REVISION ${REVISION}
RUN cd source && \
    git reset --hard ${REVISION}

# scenario details
ARG PROGRAM_NAME
ARG SCENARIO_NAME
ENV PROGRAM_NAME ${PROGRAM_NAME}
ENV SCENARIO_NAME ${SCENARIO_NAME} 
ADD lines.txt /experiment/lines.txt
ADD manifest.txt /experiment/manifest.txt
ADD mutated /experiment/mutated

# create preprocessed version of "fixed" version of mutated file
# and find the set of passing tests
RUN cd source && \ 
    ./buildconf && ./configure && \
    make EXTRA_CFLAGS="${EXTRA_CFLAGS} -save-temps" -j$(nproc) && \
    php ./run-tests.php -p sapi/cli/php -g PASS > /experiment/tests.txt && \
    cd /experiment && \
    mkdir -p "fixed/$(dirname $(cat manifest.txt))" && \
    cp  "source/$(basename --suffix .c $(cat manifest.txt)).i" \
        "fixed/$(cat manifest.txt)" && \
    cd source && make clean && \
    find . -name '*.i' -delete && \
    find . -name '*.s' -delete

# create preprocessed versions for the single mutated file and find
# the set of failing test cases
RUN cp -r mutated/* source && \
    cd source && \
    make clean && make EXTRA_CFLAGS="${EXTRA_CFLAGS} -save-temps" -j$(nproc) && \
    php ./run-tests.php -p sapi/cli/php -g PASS > /experiment/passes.txt && \
    cd /experiment && \
    mkdir -p "preprocessed/$(dirname $(cat manifest.txt))" && \
    cp  "source/$(basename --suffix .c $(cat manifest.txt)).i" \
        "preprocessed/$(cat manifest.txt)" && \
    cd source && make clean && \
    find . -name '*.i' -delete && \
    find . -name '*.s' -delete

# figure out the number of failing tests
RUN grep -oPe "(?<=\[)[\w|\.|\-|\/|\d]+\.phpt(?=\] \$)" passes.txt | sponge passes.txt && \
    grep -oPe "(?<=\[)[\w|\.|\-|\/|\d]+\.phpt(?=\] \$)" tests.txt | sponge tests.txt && \
    diff  --new-line-format="" \
          --unchanged-line-format="" \
          tests.txt passes.txt > fails.txt || exit 0

# create the problem.json file
ADD problem.template.json /experiment/problem.template.json
RUN mv manifest.txt preprocessed/manifest.txt && \
    sed "s/<<POSITIVE_TESTS>>/$(wc -l passes.txt | cut -d' ' -f1)/" problem.template.json \
    | sed "s/<<NEGATIVE_TESTS>>/$(wc -l fails.txt | cut -d' ' -f1)/" \
    | sed "s/<<PROGRAM_NAME>>/$(wc -l fails.txt | cut -d' ' -f1)/" \
    | sed "s/<<SCENARIO_NAME>>/${SCENARIO_NAME}/" > problem.json && \
    rm problem.template.json
