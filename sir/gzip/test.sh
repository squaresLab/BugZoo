#!/bin/bash
case $TEST_NUM in
  1) $EXECUTABLE -h;;
  2) $EXECUTABLE --help;;
  3) $EXECUTABLE -L;;
  4) $EXECUTABLE --license;;
  5) $EXECUTABLE -V < $INPUTS/;;
  6) $EXECUTABLE --version < $INPUTS/;;
  # can we repeat this pattern?
  7)
    fn=$(mktemp)
    cp $INPUTS/testdir/file26 $fn
    $EXECUTABLE $INPUTS/testdir/file26.tmp -c &&\
      !test -f $fn &&\
      eat ${fn}.gz 
    rm -f ${fn}*;;
  8)
    t=$(copy_tz "$INPUTS/gzdir/file9.z")
    cp $INPUTS/testdir/file27 $t
    $EXECUTABLE --stdout < $t &&\
    rm -f ${t}*;;
  9)
    fn=$(mktemp)
    fnz="$fn.z"
    cp $INPUTS/gzdir/file8.z $fnz
    $EXECUTABLE -d < $fnz &&\
      !test -f $fnz &&\
      eat ${fn}
    rm -f ${fn}*;;
  10)
    tz=$(copy_tz "$INPUTS/gzdir/file9.z")
    $EXECUTABLE $tz -d &&\
      !test -f $t &&\
      eat ${tz%:.z}
    rm -f ${tz%:.z}*;;
  11)
    tz=$(copy_tz "$INPUTS/gzdir/file5.z")
    $EXECUTABLE --decompress < $tz &&\
      !test -f $t &&\
      eat ${tz%:.z}
    rm -f ${tz%:.z}*;;
  12)
    tz=$(copy_tz "$INPUTS/gzdir/file6.z")
    $EXECUTABLE --uncompress < $tz &&\
      !test -f $t &&\
      eat ${tz%:.z}
    rm -f ${tz%:.z}*;;
  13)
    tz=$(copy_tz "$INPUTS/gzdir/file3")
    $EXECUTABLE $tz -f &&\
      !test -f $t &&\
      eat ${tz}.z
    rm -f ${tz}*;;
  14)
    tz=$(copy_tz "$INPUTS/gzdir/file4")
    $EXECUTABLE --force < $tz &&\
      !test -f $t &&\
      eat ${tz}.z
    rm -f ${tz}*;;
  15)
    tz=$(copy_tz "$INPUTS/gzdir/file32")
    $EXECUTABLE $tz -q &&\
      !test -f $t &&\
      eat ${tz}.z
    rm -f ${tz}*;;
  16)
    tz=$(copy_tz "$INPUTS/testdir/file10")
    $EXECUTABLE --quiet < $tz &&\
      !test -f $t &&\
      eat ${tz}.z
    rm -f ${tz}*;;
  17)
    t=$(mktmp -d)
    cp $INPUTS/test/subdir1/file $t/file
    $EXECUTABLE -r $t &&\
      !test -f "${t}/file" && eat ${t}/file.gz
    rm -rf ${t};;
  18)
    t=$(mktmp -d)
    cp $INPUTS/test/subdir2/file $t/file
    $EXECUTABLE $t -r &&\
      !test -f "${t}/file" && eat ${t}/file.gz
    rm -rf ${t};;
  19)
    t=$(mktmp -d)
    cp $INPUTS/test/subdir3/file $t/file
    $EXECUTABLE --recurse $t &&\
      !test -f "${t}/file" && eat ${t}/file.gz
    rm -rf ${t};;
  20)
    $EXECUTABLE -t < $INPUTS/gzdir/file1.z;;
  21)
    $EXECUTABLE $INPUTS/gzdir/file1.z -t;;
  22)
    $EXECUTABLE --test < $INPUTS/gzdir/file1.z;;
  23)
    $EXECUTABLE $INPUTS/testdir/file11 -v
    ../testplans.alt/testscripts/cpoptv.sh;;
  24)
    $EXECUTABLE --verbose < $INPUTS/testdir/file12;;
  25)
    $EXECUTABLE $INPUTS/testdir/file13 -1
    ../testplans.alt/testscripts/cpopt1.sh;;
  26)
    $EXECUTABLE --fast < $INPUTS/testdir/file14;;
  27)
    $EXECUTABLE $INPUTS/testdir/file15 -2
    ../testplans.alt/testscripts/cpopt2.sh;;
  28)
    $EXECUTABLE $INPUTS/testdir/file16 -3
    ../testplans.alt/testscripts/cpopt3.sh;;
  29)
    $EXECUTABLE $INPUTS/testdir/file17 -4
    ../testplans.alt/testscripts/cpopt4.sh;;
  30) # what are these commands doing?
    $EXECUTABLE $INPUTS/testdir/file18 -5
    ../testplans.alt/testscripts/cpopt5.sh;;
  31)
    $EXECUTABLE $INPUTS/testdir/file19 -6
    ../testplans.alt/testscripts/cpopt6.sh;;
  32)
    $EXECUTABLE $INPUTS/testdir/file20 -7
    ../testplans.alt/testscripts/cpopt7.sh;;
  33)
    $EXECUTABLE $INPUTS/testdir/file21 -8
    ../testplans.alt/testscripts/cpopt8.sh;;
  34)
    $EXECUTABLE $INPUTS/testdir/file22 -9
    ../testplans.alt/testscripts/cpopt9.sh;;
  35)
    $EXECUTABLE --best < $INPUTS/testdir/file23;;
  36) # TODO: directory
    $EXECUTABLE < $INPUTS/testdir/subdir;;
  37)
    $EXECUTABLE < $INPUTS/testdir/zerobytefile;;
  38)
    $EXECUTABLE < $INPUTS/testdir/2gbfile;;
  39)
    $EXECUTABLE -d < $INPUTS/gzdir/corruptfile.z;;
  40)
    $EXECUTABLE < $INPUTS/gzdir/zfile.z;;
  41)
    $EXECUTABLE -d < $INPUTS/gzdir/zipfile.zip;;
  42)
    $EXECUTABLE -d < $INPUTS/gzdir/compressfile.Z;;
  43)
    $EXECUTABLE -d < $INPUTS/gzdir/pkzipfile.Z;;
  44)
    $EXECUTABLE -d < $INPUTS/gzdir/packfile.z;;
  45)
    $EXECUTABLE < $INPUTS/testdir/symbolicfile;;
  46)
    $EXECUTABLE < $INPUTS/testdir/file4;;
  47)
    $EXECUTABLE < $INPUTS/testdir/binaryfile0;;
  48)
    $EXECUTABLE -d < $INPUTS/gzdir/file101.z;;
  49)
    $EXECUTABLE < $INPUTS/testdir/encryptfile;;
  50)
    $EXECUTABLE -d < $INPUTS/gzdir/encryptfile1.z;;
  51)
    $EXECUTABLE -d < $INPUTS/gzdir/errorfile.z;;
  52) # TODO: weird
    $EXECUTABLE $INPUTS/testdir/binaryfile1  
    ../testplans.alt/testscripts/breakscript.sh;;
  53)
    $EXECUTABLE < $INPUTS/testdir/tarfile.tar;;
  54)
    $EXECUTABLE -d < $INPUTS/gzdir/tarfile.tgz;;
  55)
    ../testplans.alt/testscripts/longfilename.sh
    $EXECUTABLE $INPUTS/length/abcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcde
    ../testplans.alt/testscripts/cplongname.sh;;
  56) # what are these commands doing?
    $EXECUTABLE -fqrv1 < $INPUTS/testdir/file2;;
  57)
    $EXECUTABLE -fqrv2 < $INPUTS/testdir/file2;;
  58)
    $EXECUTABLE -fqrv3 < $INPUTS/testdir/file2;;
  59)
    $EXECUTABLE -fqrv4 < $INPUTS/testdir/file2;;
  60)
    $EXECUTABLE -fqrv5 < $INPUTS/testdir/file2;;
  61)
    $EXECUTABLE -fqrv6 < $INPUTS/testdir/file2;;
  62)
    $EXECUTABLE -fqrv7 < $INPUTS/testdir/file2;;
  63)
    $EXECUTABLE -fqrv8 < $INPUTS/testdir/file2;;
  64)
    $EXECUTABLE -fqrv9 < $INPUTS/testdir/file2;;
  65)
    $EXECUTABLE -fqrv < $INPUTS/testdir/file2;;
  66)
    $EXECUTABLE -fqr1 < $INPUTS/testdir/file2;;
  67)
    $EXECUTABLE -fqr2 < $INPUTS/testdir/file2;;
  68)
    $EXECUTABLE -fqr3 < $INPUTS/testdir/file2;;
  69)
    $EXECUTABLE -fqr4 < $INPUTS/testdir/file2;;
  70)
    $EXECUTABLE -fqr5 < $INPUTS/testdir/file2;;
  71)
    $EXECUTABLE -fqr6 < $INPUTS/testdir/file2;;
  72)
    $EXECUTABLE -fqr7 < $INPUTS/testdir/file2;;
  73)
    $EXECUTABLE -fqr8 < $INPUTS/testdir/file2;;
  74)
    $EXECUTABLE -fqr9 < $INPUTS/testdir/file2;;
  75)
    $EXECUTABLE -fqr < $INPUTS/testdir/file2;;
  76)
    $EXECUTABLE -fqv1 < $INPUTS/testdir/file2;;
  77)
    $EXECUTABLE -fqv2 < $INPUTS/testdir/file2;;
  78)
    $EXECUTABLE -fqv3 < $INPUTS/testdir/file2;;
  79)
    $EXECUTABLE -fqv4 < $INPUTS/testdir/file2;;
  80)
    $EXECUTABLE -fqv5 < $INPUTS/testdir/file2;;
  81)
    $EXECUTABLE -fqv6 < $INPUTS/testdir/file2;;
  82)
    $EXECUTABLE -fqv7 < $INPUTS/testdir/file2;;
  83)
    $EXECUTABLE -fqv8 < $INPUTS/testdir/file2;;
  84)
    $EXECUTABLE -fqv9 < $INPUTS/testdir/file2;;
  85)
    $EXECUTABLE -fqv < $INPUTS/testdir/file2;;
  86)
    $EXECUTABLE -fq1 < $INPUTS/testdir/file2;;
  87)
    $EXECUTABLE -fq2 < $INPUTS/testdir/file2;;
  88)
    $EXECUTABLE -fq3 < $INPUTS/testdir/file2;;
  89)
    $EXECUTABLE -fq4 < $INPUTS/testdir/file2;;
  90)
    $EXECUTABLE -fq5 < $INPUTS/testdir/file2;;
  91)
    $EXECUTABLE -fq6 < $INPUTS/testdir/file2;;
  92)
    $EXECUTABLE -fq7 < $INPUTS/testdir/file2;;
  93)
    $EXECUTABLE -fq8 < $INPUTS/testdir/file2;;
  94)
    $EXECUTABLE -fq9 < $INPUTS/testdir/file2;;
  95)
    $EXECUTABLE -fq < $INPUTS/testdir/file2;;
  96)
    $EXECUTABLE -frv1 < $INPUTS/testdir/file2;;
  97)
    $EXECUTABLE -frv2 < $INPUTS/testdir/file2;;
  98)
    $EXECUTABLE -frv3 < $INPUTS/testdir/file2;;
  99)
    $EXECUTABLE -frv4 < $INPUTS/testdir/file2;;
  100)
    $EXECUTABLE -frv5 < $INPUTS/testdir/file2;;
  101)
    $EXECUTABLE -frv6 < $INPUTS/testdir/file2;;
  102)
    $EXECUTABLE -frv7 < $INPUTS/testdir/file2;;
  103)
    $EXECUTABLE -frv8 < $INPUTS/testdir/file2;;
  104)
    $EXECUTABLE -frv9 < $INPUTS/testdir/file2;;
  105)
    $EXECUTABLE -frv < $INPUTS/testdir/file2;;
  106)
    $EXECUTABLE -fr1 < $INPUTS/testdir/file2;;
  107)
    $EXECUTABLE -fr2 < $INPUTS/testdir/file2;;
  108)
    $EXECUTABLE -fr3 < $INPUTS/testdir/file2;;
  109)
    $EXECUTABLE -fr4 < $INPUTS/testdir/file2;;
  110)
    $EXECUTABLE -fr5 < $INPUTS/testdir/file2;;
  111)
    $EXECUTABLE -fr6 < $INPUTS/testdir/file2;;
  112)
    $EXECUTABLE -fr7 < $INPUTS/testdir/file2;;
  113)
    $EXECUTABLE -fr8 < $INPUTS/testdir/file2;;
  114)
    $EXECUTABLE -fr9 < $INPUTS/testdir/file2;;
  115)
    $EXECUTABLE -fr < $INPUTS/testdir/file2;;
  116)
    $EXECUTABLE -fv1 < $INPUTS/testdir/file2;;
  117)
    $EXECUTABLE -fv2 < $INPUTS/testdir/file2;; 
  118)
    $EXECUTABLE -fv3 < $INPUTS/testdir/file2;;
  119)
    $EXECUTABLE -fv4 < $INPUTS/testdir/file2;;
  120)
    $EXECUTABLE -fv5 < $INPUTS/testdir/file2;;
  121)
    $EXECUTABLE -fv6 < $INPUTS/testdir/file2;;
  122)
    $EXECUTABLE -fv7 < $INPUTS/testdir/file2;;
  123)
    $EXECUTABLE -fv8 < $INPUTS/testdir/file2;;
  124)
    $EXECUTABLE -fv9 < $INPUTS/testdir/file2;;
  125)
    $EXECUTABLE -fv < $INPUTS/testdir/file2;;
  126)
    $EXECUTABLE -f1 < $INPUTS/testdir/file2;;
  127)
    $EXECUTABLE -f2 < $INPUTS/testdir/file2;;
  128)
    $EXECUTABLE -f3 < $INPUTS/testdir/file2;;
  129)
    $EXECUTABLE -f4 < $INPUTS/testdir/file2;;
  130)
    $EXECUTABLE -f5 < $INPUTS/testdir/file2;;
  131)
    $EXECUTABLE -f6 < $INPUTS/testdir/file2;;
  132)
    $EXECUTABLE -f7 < $INPUTS/testdir/file2;;
  133)
    $EXECUTABLE -f8 < $INPUTS/testdir/file2;;
  134)
    $EXECUTABLE -f9 < $INPUTS/testdir/file2;;
  135)
    $EXECUTABLE -f < $INPUTS/testdir/file2;;
  136)
    $EXECUTABLE -qrv1 < $INPUTS/testdir/file2;; 
  137)
    $EXECUTABLE -qrv2 < $INPUTS/testdir/file2;;
  138)
    $EXECUTABLE -qrv3 < $INPUTS/testdir/file2;;
  139)
    $EXECUTABLE -qrv4 < $INPUTS/testdir/file2;;
  140)
    $EXECUTABLE -qrv5 < $INPUTS/testdir/file2;;
  141)
    $EXECUTABLE -qrv6 < $INPUTS/testdir/file2;;
  142)
    $EXECUTABLE -qrv7 < $INPUTS/testdir/file2;;
  143)
    $EXECUTABLE -qrv8 < $INPUTS/testdir/file2;;
  144)
    $EXECUTABLE -qrv9 < $INPUTS/testdir/file2;;
  145)
    $EXECUTABLE -qrv < $INPUTS/testdir/file2;;
  146)
    $EXECUTABLE -qr1 < $INPUTS/testdir/file2;;
  147)
    $EXECUTABLE -qr2 < $INPUTS/testdir/file2;;
  148)
    $EXECUTABLE -qr3 < $INPUTS/testdir/file2;;
  149)
    $EXECUTABLE -qr4 < $INPUTS/testdir/file2;;
  150)
    $EXECUTABLE -qr5 < $INPUTS/testdir/file2;;
  151)
    $EXECUTABLE -qr6 < $INPUTS/testdir/file2;;
  152)
    $EXECUTABLE -qr7 < $INPUTS/testdir/file2;;
  153)
    $EXECUTABLE -qr8 < $INPUTS/testdir/file2;;
  154)
    $EXECUTABLE -qr9 < $INPUTS/testdir/file2;;
  155)
    $EXECUTABLE -qr < $INPUTS/testdir/file2;;
  156)
    $EXECUTABLE -qv1 < $INPUTS/testdir/file2;;
  157)
    $EXECUTABLE -qv2 < $INPUTS/testdir/file2;;
  158)
    $EXECUTABLE -qv3 < $INPUTS/testdir/file2;;
  159)
    $EXECUTABLE -qv4 < $INPUTS/testdir/file2;;
  160)
    $EXECUTABLE -qv5 < $INPUTS/testdir/file2;;
  161)
    $EXECUTABLE -qv6 < $INPUTS/testdir/file2;;
  162)
    $EXECUTABLE -qv7 < $INPUTS/testdir/file2;;
  163)
    $EXECUTABLE -qv8 < $INPUTS/testdir/file2;;
  164)
    $EXECUTABLE -qv9 < $INPUTS/testdir/file2;;
  165)
    $EXECUTABLE -qv < $INPUTS/testdir/file2;;
  166)
    $EXECUTABLE -q1 < $INPUTS/testdir/file2;;
  167)
    $EXECUTABLE -q2 < $INPUTS/testdir/file2;;
  168)
    $EXECUTABLE -q3 < $INPUTS/testdir/file2;;
  169)
    $EXECUTABLE -q4 < $INPUTS/testdir/file2;;
  170)
    $EXECUTABLE -q5 < $INPUTS/testdir/file2;;
  171)
    $EXECUTABLE -q6 < $INPUTS/testdir/file2;;
  172)
    $EXECUTABLE -q7 < $INPUTS/testdir/file2;;
  173)
    $EXECUTABLE -q8 < $INPUTS/testdir/file2;;
  174)
    $EXECUTABLE -q9 < $INPUTS/testdir/file2;;
  175)
    $EXECUTABLE -q < $INPUTS/testdir/file2;;
  176)
    $EXECUTABLE -rv1 < $INPUTS/testdir/file2;; 
  177)
    $EXECUTABLE -rv2 < $INPUTS/testdir/file2;;
  178)
    $EXECUTABLE -rv3 < $INPUTS/testdir/file2;;
  179)
    $EXECUTABLE -rv4 < $INPUTS/testdir/file2;;
  180)
    $EXECUTABLE -rv5 < $INPUTS/testdir/file2;;
  181)
    $EXECUTABLE -rv6 < $INPUTS/testdir/file2;;
  182)
    $EXECUTABLE -rv7 < $INPUTS/testdir/file2;;
  183)
    $EXECUTABLE -rv8 < $INPUTS/testdir/file2;;
  184)
    $EXECUTABLE -rv9 < $INPUTS/testdir/file2;;
  185)
    $EXECUTABLE -rv < $INPUTS/testdir/file2;;
  186)
    $EXECUTABLE -r1 < $INPUTS/testdir/file2;;
  187)
    $EXECUTABLE -r2 < $INPUTS/testdir/file2;;
  188)
    $EXECUTABLE -r3 < $INPUTS/testdir/file2;;
  189)
    $EXECUTABLE -r4 < $INPUTS/testdir/file2;;
  190)
    $EXECUTABLE -r5 < $INPUTS/testdir/file2;;
  191)
    $EXECUTABLE -r6 < $INPUTS/testdir/file2;;
  192)
    $EXECUTABLE -r7 < $INPUTS/testdir/file2;;
  193)
    $EXECUTABLE -r8 < $INPUTS/testdir/file2;;
  194)
    $EXECUTABLE -r9 < $INPUTS/testdir/file2;;
  195)
    $EXECUTABLE -r < $INPUTS/testdir/file2;;
  196)
    $EXECUTABLE -v1 < $INPUTS/testdir/file2;;
  197)
    $EXECUTABLE -v2 < $INPUTS/testdir/file2;;
  198)
    $EXECUTABLE -v3 < $INPUTS/testdir/file2;;
  199)
    $EXECUTABLE -v4 < $INPUTS/testdir/file2;;
  200)
    $EXECUTABLE -v5 < $INPUTS/testdir/file2;;
  201)
    $EXECUTABLE -v6 < $INPUTS/testdir/file2;;
  202)
    $EXECUTABLE -v7 < $INPUTS/testdir/file2;;
  203)
    $EXECUTABLE -v8 < $INPUTS/testdir/file2;;
  204)
    $EXECUTABLE -v9 < $INPUTS/testdir/file2;;
  205)
    $EXECUTABLE -v < $INPUTS/testdir/file2;;
  206)
    $EXECUTABLE -1 < $INPUTS/testdir/file2;;
  207)
    $EXECUTABLE -2 < $INPUTS/testdir/file2;;
  208)
    $EXECUTABLE -3 < $INPUTS/testdir/file2;;
  209)
    $EXECUTABLE -4 < $INPUTS/testdir/file2;;
  210)
    $EXECUTABLE -5 < $INPUTS/testdir/file2;;
  211)
    $EXECUTABLE -6 < $INPUTS/testdir/file2;;
  212)
    $EXECUTABLE -7 < $INPUTS/testdir/file2;;
  213)
    $EXECUTABLE -8 < $INPUTS/testdir/file2;;
  214)
    $EXECUTABLE -9 < $INPUTS/testdir/file2;;
