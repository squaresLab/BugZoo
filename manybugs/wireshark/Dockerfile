FROM squareslab/repairbox:manybugs-base

ADD doc.patch /experiment/doc.patch
RUN sudo apt-get update && \
    sudo apt-get install -y automake \
                            autoconf \
                            libtool \
                            python \
                            subversion \
                            pkg-config \
                            bison \
                            flex \
                            psmisc \
                            libgtk2.0-dev \
                            libpcap-dev

RUN wget -nv -O scenario.tar.gz \
      http://repairbenchmarks.cs.umass.edu/ManyBugs/scenarios/wireshark-bug-35419-35414.tar.gz && \
    tar -xf scenario.tar.gz && \
    rm scenario.tar.gz && \
    mv wireshark-bug-* scenario && \
    cd scenario && \
    rm -rf  *.cache \
            *~ \
            *.debug.* \
            *-failures \
            limit* \
            *lines \
            coverage* \
            sanity \
            fixed-program.txt \
            compile.pl \
            local-root && \
    mv wireshark src && \
    cd src && \
    make distclean && \
    cat /experiment/doc.patch | patch -p1 && \
    rm /experiment/doc.patch
RUN cd /experiment/scenario && \
    find . -type f -print0 | xargs -0 sed -i '' && \
    cd src && \
    svn upgrade && \
    ./autogen.sh && \
    ./configure --disable-warnings-as-errors
RUN mv scenario/bug-info . && \
    mv scenario/bugged-program.txt manifest.txt && \
    mv scenario/configuration-* . && \
    mv scenario/diffs . && \
    mv scenario/fixed . && \
    mv scenario/preprocessed . && \
    mv scenario/src . && \
    mv scenario/test . && \
    mv scenario/test.sh . && \
    mv scenario/wireshark-run-tests.sh . && \
    rm -rf scenario
