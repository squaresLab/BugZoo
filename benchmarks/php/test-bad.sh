#!/bin/sh
ulimit -t 5
ulimit -c 8
rm -rf ans.bad
$PHPROOT/php exploit.php >& ans.bad
diff output.bad ans.bad && (echo "bad" >> $2)
killall php
wait
exit 0
