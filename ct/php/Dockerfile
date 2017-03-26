FROM christimperley/repairbox:ubuntu64

#ADD test.sh /workspace/test.sh
#ADD compile.sh /workspace/compile.sh

# install PHP oracle and build deps
RUN sudo apt-get update && \
    sudo apt-get install -y php5 automake autoconf bison libxml2-dev moreutils && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# clone the PHP repo
RUN git clone https://github.com/php/php-src source
ARG PHP_REVISION
ENV PHP_REVISION ${PHP_REVISION}
RUN cd source && \
    git reset --hard ${PHP_REVISION}

# add the mutated files
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
          tests.txt passes.txt > fails.txt
