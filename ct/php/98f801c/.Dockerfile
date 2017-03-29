FROM christimperley/repairbox:ct-php-base

# Install specified version of autoconf from source
ARG AUTOCONF_VERSION
ENV AUTOCONF_VERSION ${AUTOCONF_VERSION}
RUN cd /tmp && \
    wget -nv http://ftp.gnu.org/gnu/autoconf/autoconf-${AUTOCONF_VERSION}.tar.gz && \
    tar -xf autoconf-${AUTOCONF_VERSION}.tar.gz && \
    cd autoconf-${AUTOCONF_VERSION} && \
    ./configure && \
    sudo make install && \
    cd / && rm -rf /tmp/*

# Install specified version of bison from source
ARG BISON_VERSION
ENV BISON_VERSION ${BISON_VERSION}
RUN cd /tmp && \
    wget http://ftp.gnu.org/gnu/bison/bison-${BISON_VERSION}.tar.gz && \
    tar -xvf bison-${BISON_VERSION}.tar.gz && \
    cd bison-${BISON_VERSION} && \
    ./configure && \
    (make || exit 0) && \
    sed -i "s#_GL_WARN_ON_USE (gets#//_GL_WARN_ON_USE (gets#g" lib/stdio.h && \
    make && sudo make install && \
    cd / && rm -rf /tmp/*

# go to the specified revision
ARG REVISION
ENV REVISION ${REVISION}
RUN cd source && \
    git reset --hard ${REVISION}

# scenario details
ARG SCENARIO_NAME
ENV SCENARIO_NAME ${SCENARIO_NAME} 
ADD lines.txt /experiment/lines.txt
ADD manifest.txt /experiment/manifest.txt
ADD mutated /experiment/mutated

# create preprocessed version of "fixed" version of mutated file
# and find the set of passing tests
RUN cd source && \ 
    ./buildconf && ./configure && \
    make EXTRA_CFLAGS="${EXTRA_CFLAGS} -save-temps" && \
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
    make clean && make EXTRA_CFLAGS="${EXTRA_CFLAGS} -save-temps" && \
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
RUN mv manifest.txt preprocessed/manifest.txt && \
    sed "s/<<POSITIVE_TESTS>>/$(wc -l passes.txt | cut -d' ' -f1)/" problem.template.json \
    | sed "s/<<NEGATIVE_TESTS>>/$(wc -l fails.txt | cut -d' ' -f1)/" \
    | sed "s/<<PROGRAM_NAME>>/${PROGRAM_NAME}/" \
    | sed "s/<<SCENARIO_NAME>>/${SCENARIO_NAME}/" > problem.json && \
    rm problem.template.json
