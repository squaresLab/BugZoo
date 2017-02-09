  FROM christimperley/repairbox:manybugs64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD libxml.patch /experiment
ADD php-helper.php /experiment
RUN sudo chown -R docker /experiment

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libxml2-dev autoconf psmisc && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Install autoconf 2.13 from source (replacing any newer versions)
RUN cd /tmp && \
    wget -nv http://ftp.gnu.org/gnu/autoconf/autoconf-2.13.tar.gz && \
    tar -xf autoconf-2.13.tar.gz && \
    cd autoconf-2.13 && \
    ./configure && \
    sudo make install && \
    cd / && rm -rf /tmp/*

# Install bison 2.4.3 from source
RUN cd /tmp && \
    wget http://ftp.gnu.org/gnu/bison/bison-2.4.3.tar.gz && \
    tar -xvf bison-2.4.3.tar.gz && \
    cd bison-2.4.3 && \
    ./configure && \
    (make || exit 0) && \
    sed -i "s#_GL_WARN_ON_USE (gets#//_GL_WARN_ON_USE (gets#g" lib/stdio.h && \
    make && sudo make install && \
    cd / && rm -rf /tmp/*

# Download the Git repo for PHP
RUN git clone https://github.com/php/php-src.git src

# Download the PHP scenario archive from the ManyBugs website
ARG scenario
ENV SCENARIO_NAME ${scenario}
ENV OLD_LOCATION /root/mountpoint-genprog/genprog-many-bugs/${SCENARIO_NAME}
RUN cd /experiment && \
    wget  -nv http://repairbenchmarks.cs.umass.edu/ManyBugs/scenarios/${SCENARIO_NAME}.tar.gz \
          -O scenario.tar.gz && \
    tar -xf scenario.tar.gz && \
    mv ${SCENARIO_NAME} scenario && \
    rm scenario.tar.gz && \
    cd scenario && \
    rm -rf  php \
            coverage* \
            configuration-oracle \
            local-root \
            limit* \
            php-tests-* \
            *.cache \
            *.debug.* \
            sanity \
            compile.pl \
            fixed-program.txt
RUN cd scenario && \
    mv bug-failures bug-info && \
    mv bugged-program.txt manifest.txt && \
    mv *.lines bug-info && \
    mv fix-failures bug-info && \
    rm php-run-tests && \
    cd ../ && \
    mv scenario/* /experiment && \
    rm -rf scenario && \
    sudo chown -R docker /experiment

# Fix the test harness
RUN gcc -o php-run-tests php-run-tests.c && \
    sed -i "s/cd php/cd src/" test.sh && \
    sed -i "s#${OLD_LOCATION}#/experiment#g" test.sh && \
    sed -i "s#/experiment/limit#timeout 60#" test.sh

# Go back to the appropriate commit and apply the libxml patch
RUN cd src && \
    git checkout $(grep "bug revision:" ../bug-info/scenario-data.txt | cut -d " " -f3) && \
    cat ../libxml.patch | patch -p0 && \
    rm ../libxml.patch

# Configure!
RUN cd src && ./buildconf && ./configure
