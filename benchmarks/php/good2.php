<?php

function average($numbers) {
		 $a = explode(' ', $numbers);
		 $d = count($a);
		 for ($i=$d;$i;$i--) { $c = $c + $a[$i]; }
		 return number_format($c/$d, 0);
}

$numbers = "1 4 9 10 4 8";
print average($numbers);
print "\n";

?>