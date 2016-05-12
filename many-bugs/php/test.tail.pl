);

my $test_name = $tests[$ARGV[0] - 1];

my $cmd = "./sapi/cli/php ../php-helper.php -p ./sapi/cli/php -q $test_name";
print "$cmd\n";
my $res = system("$cmd");
if ($res == 0) {
  exit 0;
} else {
  exit 1;
}
