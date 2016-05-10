#!/usr/bin/perl -w
use strict;

my @tests = (
    "helin-segv.log",
    "help-version.log",
    "hufts.log",
    "memcpy-abuse.log",
    "mixed.log",
    "null-suffix-clobber.log",
    "stdin.log",
    "trailing-nul.log",
    "zdiff.log",
    "zgrep-f.log",
    "zgrep-signal.log",
    "znew-k.log"
);

if (length($ARGV[0]) == 0)
{
    die "Must specify a test number";
}

my $length = scalar @tests;
#If the string "length" is the only argument, then return the number of test cases and exit without error.
if ($ARGV[0] =~ m/length/) { print $length  ; exit 0 }

my $num = $ARGV[0] - 1;
my $name = $tests[$num];



if ($num < 0 || $num > $length)
{
    die "Invalid test number: $num" ;
}
chdir "tests" or die "We're in the wrong directory: $!" ;
system("rm -f $name");
my @result = `make $name`;
my $killall = system("killall gzip &> /dev/null");
chdir "..";
foreach my $line(@result)
{
    if ($line =~ m/^PASS/)
    {
        print "PASS: $name\n";
        exit 0;
    }
    elsif ($line =~ m/^FAIL/)
    {
        print "FAIL: $name\n";
        exit 1;
    }
}
