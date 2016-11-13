#!/bin/bash

TMP_TEST_DIR=$(mktemp -d)


case $TEST_NUM in
  1) $EXECUTABLE -h;;
  2) $EXECUTABLE --help;;
  3) $EXECUTABLE -L;;
  4) $EXECUTABLE --license;;
  5) $EXECUTABLE -V < $INPUTS/;;
  6) $EXECUTABLE --version < $INPUTS/;;
  7)
    cp "$INPUTS/testdir/file26" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -c &&\
      !test -f $fn && eat ${fn}.gz;;
  8) 
    cp "$INPUTS/testdir/file27" "$TMP_TEST_DIR/f"
    $EXECUTABLE --stdout < "$TMP_TEST_DIR/f";;
  9)
    cp "$INPUTS/gzdir/file8.z" "$TMP_TEST_DIR/f.z"
    $EXECUTABLE -d < "$TMP_TEST_DIR/f.z" &&\
      !test -f "$TMP_TEST_DIR/f.z" && eat "$TMP_TEST_DIR/f";;
  10)
    cp "$INPUTS/gzdir/file9.z" "$TMP_TEST_DIR/f.z"
    $EXECUTABLE "$TMP_TEST_DIR/f.z" -d &&\
      !test -f "$TMP_TEST_DIR/f.z" && eat "$TMP_TEST_DIR/f";;
  11)
    cp "$INPUTS/gzdir/file5.z" "$TMP_TEST_DIR/f.z"
    $EXECUTABLE  --decompress < "$TMP_TEST_DIR/f.z" &&\
      !test -f "$TMP_TEST_DIR/f.z" && eat "$TMP_TEST_DIR/f";;
  12)
    cp "$INPUTS/gzdir/file6.z" "$TMP_TEST_DIR/f.z"
    $EXECUTABLE  --uncompress < "$TMP_TEST_DIR/f.z" &&\
      !test -f "$TMP_TEST_DIR/f.z" && eat "$TMP_TEST_DIR/f";;
  13)
    cp "$INPUTS/gzdir/file3" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -f &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  14)
    cp "$INPUTS/gzdir/file4" "$TMP_TEST_DIR/f"
    $EXECUTABLE --force < "$TMP_TEST_DIR/f" &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  15)
    cp "$INPUTS/gzdir/file32" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -q &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  16)
    cp "$INPUTS/gzdir/file10" "$TMP_TEST_DIR/f"
    $EXECUTABLE --quiet < "$TMP_TEST_DIR/f" &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  17)
    cp "$INPUTS/test/subdir1/file" "$TMP_TEST_DIR/f"
    $EXECUTABLE -r "$TMP_TEST_DIR/f" &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  18)
    cp "$INPUTS/test/subdir2/file" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -r &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  19)
    cp "$INPUTS/test/subdir3/file" "$TMP_TEST_DIR/f"
    $EXECUTABLE --recurse "$TMP_TEST_DIR/f" &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  20)
    cp "$INPUTS/gzdir/file1.z" "$TMP_TEST_DIR/f.z"
    $EXECUTABLE -t < "$TMP_TEST_DIR/f.z" &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  21)
    cp "$INPUTS/gzdir/file1.z" "$TMP_TEST_DIR/f.z"
    $EXECUTABLE "$TMP_TEST_DIR/f.z" -t &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  22)
    cp "$INPUTS/gzdir/file1.z" "$TMP_TEST_DIR/f.z"
    $EXECUTABLE --test < "$TMP_TEST_DIR/f.z" &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  23)
    cp "$INPUTS/testdir/file11" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -v &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  24)
    cp "$INPUTS/testdir/file12" "$TMP_TEST_DIR/f"
    $EXECUTABLE --verbose < "$TMP_TEST_DIR/f" &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  25)
    cp "$INPUTS/testdir/file13" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -1 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  26)
    cp "$INPUTS/testdir/file14" "$TMP_TEST_DIR/f"
    $EXECUTABLE --fast < "$TMP_TEST_DIR/f" &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  27)
    cp "$INPUTS/testdir/file15" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -2 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  28)
    cp "$INPUTS/testdir/file16" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -3 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  29)
    cp "$INPUTS/testdir/file17" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -4 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  30)
    cp "$INPUTS/testdir/file18" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -5 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  31)
    cp "$INPUTS/testdir/file19" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -6 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  32)
    cp "$INPUTS/testdir/file20" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -7 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  33)
    cp "$INPUTS/testdir/file21" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -8 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
  34)
    cp "$INPUTS/testdir/file22" "$TMP_TEST_DIR/f"
    $EXECUTABLE "$TMP_TEST_DIR/f" -9 &&\
      !test -f "$TMP_TEST_DIR/f" && eat "$TMP_TEST_DIR/f.z";;
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
esac
result=$?

# remove temporary files
rm -rf $TMP_TEST_DIR

exit $result
