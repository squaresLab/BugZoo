#!/bin/sh
ulimit -t 10
MAGICKROOT=/home/claire/imagemagick/magick-root/bin/

for png in BASI0G01 BASN3P01 G10N2C08 S37N3P04 TBWN3P08 
do
  rm -rf gradient.png tmp.txt $png".txt"
  ./limit10 $MAGICKROOT/convert "pngsuite/"$png".PNG" -function Arcsin 4 gradient.png
  ./limit10 $MAGICKROOT/identify -verbose gradient.png > tmp.txt
  head -n 22 tmp.txt | tail -n 6 > $png".txt"
  diff $png".txt" "test_"$png".out" && echo "passed "$png".PNG" >> $2
done

rm TBWN3P08.txt tmp.txt gradient.png

exit 0
