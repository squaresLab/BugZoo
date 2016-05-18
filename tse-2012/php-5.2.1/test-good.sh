#!/bin/sh
ulimit -t 600

for i in 1 2 3 
do
    $PHPROOT/php "good"$i".php" | head -n 100 > "good"$i".out"
    diff "good"$i".out" "output.t"$i && echo "pass "$i >> $2
done
exit 0