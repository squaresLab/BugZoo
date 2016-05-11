#!/usr/bin/perl -w
use strict;

my @tests = (
    "ascii_tag.log",
    "long_tag.log",
    "short_tag.log",
    "strip_rw.log",
    "rewrite.log",
    "bmp2tiff_palette.sh.log",
    "bmp2tiff_rgb.sh.log",
    "gif2tiff.sh.log",
    "ppm2tiff_pbm.sh.log",
    "ppm2tiff_pgm.sh.log",
    "ppm2tiff_ppm.sh.log",
    "tiffcp-g3.sh.log",
    "tiffcp-g3-1d.sh.log",
    "tiffcp-g3-1d-fill.sh.log",
    "tiffcp-g3-2d.sh.log",
    "tiffcp-g3-2d-fill.sh.log",
    "tiffcp-g4.sh.log",
    "tiffcp-logluv.sh.log",
    "tiffcp-thumbnail.sh.log",
    "tiffdump.sh.log",
    "tiffinfo.sh.log",
    "tiffcp-split.sh.log",
    "tiffcp-split-join.sh.log",
    "tiff2ps-PS1.sh.log",
    "tiff2ps-PS2.sh.log",
    "tiff2ps-PS3.sh.log",
    "tiff2ps-EPS1.sh.log",
    "tiff2pdf.sh.log",
    "tiffcrop-doubleflip-logluv-3c-16b.sh.log",
    "tiffcrop-doubleflip-minisblack-1c-16b.sh.log",
    "tiffcrop-doubleflip-minisblack-1c-8b.sh.log",
    "tiffcrop-doubleflip-minisblack-2c-8b-alpha.sh.log",
    "tiffcrop-doubleflip-miniswhite-1c-1b.sh.log",
    "tiffcrop-doubleflip-palette-1c-1b.sh.log",
    "tiffcrop-doubleflip-palette-1c-4b.sh.log",
    "tiffcrop-doubleflip-palette-1c-8b.sh.log",
    "tiffcrop-doubleflip-rgb-3c-16b.sh.log",
    "tiffcrop-doubleflip-rgb-3c-8b.sh.log",
    "tiffcrop-extract-logluv-3c-16b.sh.log",
    "tiffcrop-extract-minisblack-1c-16b.sh.log",
    "tiffcrop-extract-minisblack-1c-8b.sh.log",
    "tiffcrop-extract-minisblack-2c-8b-alpha.sh.log",
    "tiffcrop-extract-miniswhite-1c-1b.sh.log",
    "tiffcrop-extract-palette-1c-1b.sh.log",
    "tiffcrop-extract-palette-1c-4b.sh.log",
    "tiffcrop-extract-palette-1c-8b.sh.log",
    "tiffcrop-extract-rgb-3c-16b.sh.log",
    "tiffcrop-extract-rgb-3c-8b.sh.log",
    "tiffcrop-extractz14-logluv-3c-16b.sh.log",
    "tiffcrop-extractz14-minisblack-1c-16b.sh.log",
    "tiffcrop-extractz14-minisblack-1c-8b.sh.log",
    "tiffcrop-extractz14-minisblack-2c-8b-alpha.sh.log",
    "tiffcrop-extractz14-miniswhite-1c-1b.sh.log",
    "tiffcrop-extractz14-palette-1c-1b.sh.log",
    "tiffcrop-extractz14-palette-1c-4b.sh.log",
    "tiffcrop-extractz14-palette-1c-8b.sh.log",
    "tiffcrop-extractz14-rgb-3c-16b.sh.log",
    "tiffcrop-extractz14-rgb-3c-8b.sh.log",
    "tiffcrop-R90-logluv-3c-16b.sh.log",
    "tiffcrop-R90-minisblack-1c-16b.sh.log",
    "tiffcrop-R90-minisblack-1c-8b.sh.log",
    "tiffcrop-R90-minisblack-2c-8b-alpha.sh.log",
    "tiffcrop-R90-miniswhite-1c-1b.sh.log",
    "tiffcrop-R90-palette-1c-1b.sh.log",
    "tiffcrop-R90-palette-1c-4b.sh.log",
    "tiffcrop-R90-palette-1c-8b.sh.log",
    "tiffcrop-R90-rgb-3c-16b.sh.log",
    "tiffcrop-R90-rgb-3c-8b.sh.log",
    "tiff2rgba-logluv-3c-16b.sh.log",
    "tiff2rgba-minisblack-1c-16b.sh.log",
    "tiff2rgba-minisblack-1c-8b.sh.log",
    "tiff2rgba-minisblack-2c-8b-alpha.sh.log",
    "tiff2rgba-miniswhite-1c-1b.sh.log",
    "tiff2rgba-palette-1c-1b.sh.log",
    "tiff2rgba-palette-1c-4b.sh.log",
    "tiff2rgba-palette-1c-8b.sh.log",
    "tiff2rgba-rgb-3c-16b.sh.log",
    "tiff2rgba-rgb-3c-8b.sh.log" 
);
    
if (length($ARGV[0]) == 0)
{
    die "Must specify a test number";
}

my $length = scalar @tests;
if ($ARGV[0] =~ m/length/) { print $length; exit 0 }

my $num = $ARGV[0] - 1;
my $name = $tests[$num];


if ($num < 0 || $num > $length)
{
    die "Invalid test number: $num";
}
chdir "test" or die "We're in the wrong directory: $!";
system("rm -f $name");
my @result = `make $name`;
chdir "..";
foreach my $line(@result)
{
    system("killall -r lt-.*" );
    
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



