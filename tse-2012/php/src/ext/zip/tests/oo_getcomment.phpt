--TEST--
Get Comment
--SKIPIF--
<?php
/* $Id: oo_getcomment.phpt,v 1.1.2.2 2006/11/15 23:53:46 pajoye Exp $ */
if(!extension_loaded('zip')) die('skip');
?>
--FILE--
<?php
$dirname = dirname(__FILE__) . '/';
$file = $dirname . 'test_with_comment.zip';
include $dirname . 'utils.inc';
$zip = new ZipArchive;
if (!$zip->open($file)) {
	exit('failed');
}
$idx = $zip->locateName('foo');
echo $zip->getCommentName('foo') . "\n";
echo $zip->getCommentIndex($idx);

$zip->close();

?>
--EXPECTF--
foo comment
foo comment
