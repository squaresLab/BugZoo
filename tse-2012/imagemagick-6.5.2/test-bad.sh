#!/bin/sh
ulimit -t 10
MAGICKROOT=/home/claire/imagemagick/magick-root/bin/

# test 1

rm -f gradient_bad.png tmp.txt bad.txt
./limit5 $MAGICKROOT/convert pngsuite/G05N0G16.PNG -function Arcsin 4,2 gradient_bad.png
./limit5 $MAGICKROOT/identify -verbose gradient_bad.png > tmp.txt
head -n 22 tmp.txt | tail -n 6 > bad.txt
diff testBAD.out bad.txt && echo 'passed G05N0G16.PNG' >> $2
wait
exit 0
