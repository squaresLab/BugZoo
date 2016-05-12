#!/bin/bash
#
# This script is responsible for performing benchmark directory tidying
# specific to PHP scenarios. Like other tidy scripts, it accepts the path to a
# benchmark directory, and then proceeds to performing tidying in that
# directory.
#
here=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
benchmark_dir=$1

$here/build-test-harness.sh $benchmark_dir

cp $here/php-helper.php $benchmark_dir
cp $here/libxml.patch $benchmark_dir

rm -rf $benchmark_dir/local-root
rm -f $benchmark_dir/php-tests-*tar.sh

# Disable problematic tests
$here/../disable-test-by-file-name.sh $benchmark_dir "ext/standard/tests/time/strptime_basic.phpt"
$here/../disable-test-by-file-name.sh $benchmark_dir "ext/dom/tests/DOMDocument_validate_external_dtd.phpt"
$here/../disable-test-by-file-name.sh $benchmark_dir "ext/standard/tests/strings/setlocale_variation2.phpt"
$here/../disable-test-by-file-name.sh $benchmark_dir "ext/dom/tests/dom007.phpt"
