<?php
	print "good :)\n";
	$filename = __DIR__ . '/sess_' . session_id();
	var_dump(unlink($filename));
?>
