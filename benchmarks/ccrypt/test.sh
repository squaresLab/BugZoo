#!/bin/bash
# $1 = EXE 
# $2 = test name  
# $3 = port 
# $4 = source name
# $5 = single-fitness-file name 
# exit 0 = success

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

export KEY="blahblah"
ulimit -c 8

case $2 in
  p1) $1 1071 1029        | diff $DIR/test/output.1071.1029 - && exit 0 ;;

  n1)
    rm -rf core.* # temporary files
    rm n1.txt.cpt

    # Backup the test case input.
    cp n1.txt save_n1.txt

    # What is happening here? Is this an oracle? If so, why do we recompute
    # every time, rather than saving the results?
    $DIR/ccrypt-root/bin/ccrypt -e -E KEY n1.txt

    cp save_n1.txt n1.txt
    
    # Again, what?
    # We don't check the output?!
    (./limit5 $1 -e -E KEY test6.txt < /dev/null)

    #
    if [ ! -f core.* ] ; exit 0 ; fi

    mv save_n1.txt n1.txt;;
esac 
exit 1


#!/bin/bash
rm -rf test1.out test2.txt.cpt test3.txt.cpt test4.txt.cpt 
rm -rf save_test2.txt save_test3.txt save_test4.txt test2.txt test3.txt test4.txt

cp test2.out test2.txt
cp test3.out test3.txt
cp test2.out test4.txt

cp test2.txt save_test2.txt
cp test3.txt save_test3.txt
cp test4.txt save_test4.txt

(./limit10 $1 -help > test1.out ; diff output.t1 test1.out && (echo "t1" >> $2))

./limit10 $1 -e -E KEY test2.txt && (echo "t2" >> $2)

./limit10 $1 -d -E KEY test2.txt.cpt ; diff test2.txt save_test2.txt && 
    (echo "t3" >> $2)

#cp test4.out test4.txt.cpt

rm test4-sub.txt

cat test2.txt test2.txt > test4-sub.txt
rm test4-sub.txt.cpt

./ccrypt-root/bin/ccrypt -e -E KEY test4-sub.txt

mv test4-sub.txt.cpt test4.cpt

cp test2.out test4.txt

rm yes.txt
echo "yes\n" > yes.txt

exec 3<> yes.txt

(./limit10 $1 -e -E KEY test4.txt <&3 && (echo "t4" >> $2))

exec 3>&-

(./limit10 $1 -d -E KEY test4.txt.cpt ; diff test4.txt save_test4.txt && (echo "t5" >> $2))

rm no.txt
rm test4.txt.cpt

cat test2.txt test2.txt > test4-sub.txt
cp test4-sub.txt test4-sub-ref.txt

echo "\n\n" > no.txt

rm test4-sub.txt.cpt

./ccrypt-root/bin/ccrypt -e -E KEY test4-sub.txt

mv test4-sub.txt.cpt test4.txt.cpt

cp test2.txt test4.txt

exec 4<> no.txt
(./limit10 $1 -e -E KEY test4.txt <&4 && (echo "t6" >> $2))

exec 4>&-

mv test4.txt.cpt test4-sub.txt.cpt

(./limit10 $1 -d -E KEY test4-sub.txt.cpt ; diff test4-sub.txt test4-sub-ref.txt && (echo "t7" >> $2))

