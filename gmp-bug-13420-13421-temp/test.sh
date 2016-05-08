#!/bin/bash
run_abbrev=False
bugrev=13420
time_limit=25
run_test()
{
    cd gmp
    /root/genprog-many-bugs/gmp-bug-13420-13421/limit /usr/bin/perl /root/genprog-many-bugs/gmp-bug-13420-13421/gmp-run-tests.pl $1 $run_abbrev
    RESULT=$?
    killall -r lt-.*
    cd ..
    return $RESULT
}
case $1 in
    p1) run_test 1 && exit 0 ;; 
    p2) run_test 2 && exit 0 ;; 
    p3) run_test 3 && exit 0 ;; 
    p4) run_test 4 && exit 0 ;; 
    p5) run_test 5 && exit 0 ;; 
    p6) run_test 6 && exit 0 ;; 
    p7) run_test 7 && exit 0 ;; 
    p8) run_test 8 && exit 0 ;; 
    p9) run_test 9 && exit 0 ;; 
    p10) run_test 10 && exit 0 ;; 
    p11) run_test 11 && exit 0 ;; 
    p12) run_test 12 && exit 0 ;; 
    p13) run_test 13 && exit 0 ;; 
    p14) run_test 14 && exit 0 ;; 
    p15) run_test 15 && exit 0 ;; 
    p16) run_test 16 && exit 0 ;; 
    p17) run_test 17 && exit 0 ;; 
    p18) run_test 18 && exit 0 ;; 
    p19) run_test 19 && exit 0 ;; 
    p20) run_test 20 && exit 0 ;; 
    p21) run_test 21 && exit 0 ;; 
    p22) run_test 22 && exit 0 ;; 
    p23) run_test 23 && exit 0 ;; 
    p24) run_test 24 && exit 0 ;; 
    p25) run_test 25 && exit 0 ;; 
    p26) run_test 26 && exit 0 ;; 
    p27) run_test 27 && exit 0 ;; 
    p28) run_test 28 && exit 0 ;; 
    p29) run_test 29 && exit 0 ;; 
    p30) run_test 31 && exit 0 ;; 
    p31) run_test 32 && exit 0 ;; 
    p32) run_test 33 && exit 0 ;; 
    p33) run_test 35 && exit 0 ;; 
    p34) run_test 36 && exit 0 ;; 
    p35) run_test 37 && exit 0 ;; 
    p36) run_test 39 && exit 0 ;; 
    p37) run_test 40 && exit 0 ;; 
    p38) run_test 41 && exit 0 ;; 
    p39) run_test 42 && exit 0 ;; 
    p40) run_test 43 && exit 0 ;; 
    p41) run_test 44 && exit 0 ;; 
    p42) run_test 45 && exit 0 ;; 
    p43) run_test 46 && exit 0 ;; 
    p44) run_test 47 && exit 0 ;; 
    p45) run_test 48 && exit 0 ;; 
    p46) run_test 49 && exit 0 ;; 
    p47) run_test 50 && exit 0 ;; 
    p48) run_test 51 && exit 0 ;; 
    p49) run_test 52 && exit 0 ;; 
    p50) run_test 53 && exit 0 ;; 
    p51) run_test 54 && exit 0 ;; 
    p52) run_test 55 && exit 0 ;; 
    p53) run_test 56 && exit 0 ;; 
    p54) run_test 57 && exit 0 ;; 
    p55) run_test 58 && exit 0 ;; 
    p56) run_test 59 && exit 0 ;; 
    p57) run_test 60 && exit 0 ;; 
    p58) run_test 61 && exit 0 ;; 
    p59) run_test 62 && exit 0 ;; 
    p60) run_test 63 && exit 0 ;; 
    p61) run_test 64 && exit 0 ;; 
    p62) run_test 65 && exit 0 ;; 
    p63) run_test 66 && exit 0 ;; 
    p64) run_test 67 && exit 0 ;; 
    p65) run_test 68 && exit 0 ;; 
    p66) run_test 69 && exit 0 ;; 
    p67) run_test 70 && exit 0 ;; 
    p68) run_test 71 && exit 0 ;; 
    p69) run_test 72 && exit 0 ;; 
    p70) run_test 73 && exit 0 ;; 
    p71) run_test 74 && exit 0 ;; 
    p72) run_test 75 && exit 0 ;; 
    p73) run_test 76 && exit 0 ;; 
    p74) run_test 77 && exit 0 ;; 
    p75) run_test 78 && exit 0 ;; 
    p76) run_test 79 && exit 0 ;; 
    p77) run_test 80 && exit 0 ;; 
    p78) run_test 81 && exit 0 ;; 
    p79) run_test 82 && exit 0 ;; 
    p80) run_test 83 && exit 0 ;; 
    p81) run_test 84 && exit 0 ;; 
    p82) run_test 85 && exit 0 ;; 
    p83) run_test 86 && exit 0 ;; 
    p84) run_test 87 && exit 0 ;; 
    p85) run_test 88 && exit 0 ;; 
    p86) run_test 89 && exit 0 ;; 
    p87) run_test 90 && exit 0 ;; 
    p88) run_test 91 && exit 0 ;; 
    p89) run_test 92 && exit 0 ;; 
    p90) run_test 93 && exit 0 ;; 
    p91) run_test 94 && exit 0 ;; 
    p92) run_test 95 && exit 0 ;; 
    p93) run_test 96 && exit 0 ;; 
    p94) run_test 97 && exit 0 ;; 
    p95) run_test 98 && exit 0 ;; 
    p96) run_test 99 && exit 0 ;; 
    p97) run_test 100 && exit 0 ;; 
    p98) run_test 101 && exit 0 ;; 
    p99) run_test 102 && exit 0 ;; 
    p100) run_test 103 && exit 0 ;; 
    p101) run_test 104 && exit 0 ;; 
    p102) run_test 105 && exit 0 ;; 
    p103) run_test 106 && exit 0 ;; 
    p104) run_test 107 && exit 0 ;; 
    p105) run_test 108 && exit 0 ;; 
    p106) run_test 109 && exit 0 ;; 
    p107) run_test 110 && exit 0 ;; 
    p108) run_test 111 && exit 0 ;; 
    p109) run_test 112 && exit 0 ;; 
    p110) run_test 113 && exit 0 ;; 
    p111) run_test 114 && exit 0 ;; 
    p112) run_test 115 && exit 0 ;; 
    p113) run_test 116 && exit 0 ;; 
    p114) run_test 117 && exit 0 ;; 
    p115) run_test 118 && exit 0 ;; 
    p116) run_test 119 && exit 0 ;; 
    p117) run_test 120 && exit 0 ;; 
    p118) run_test 121 && exit 0 ;; 
    p119) run_test 122 && exit 0 ;; 
    p120) run_test 123 && exit 0 ;; 
    p121) run_test 124 && exit 0 ;; 
    p122) run_test 125 && exit 0 ;; 
    p123) run_test 126 && exit 0 ;; 
    p124) run_test 127 && exit 0 ;; 
    p125) run_test 128 && exit 0 ;; 
    p126) run_test 129 && exit 0 ;; 
    p127) run_test 130 && exit 0 ;; 
    p128) run_test 131 && exit 0 ;; 
    p129) run_test 132 && exit 0 ;; 
    p130) run_test 133 && exit 0 ;; 
    p131) run_test 134 && exit 0 ;; 
    p132) run_test 135 && exit 0 ;; 
    p133) run_test 136 && exit 0 ;; 
    p134) run_test 139 && exit 0 ;; 
    p135) run_test 140 && exit 0 ;; 
    p136) run_test 141 && exit 0 ;; 
    p137) run_test 142 && exit 0 ;; 
    p138) run_test 143 && exit 0 ;; 
    p139) run_test 144 && exit 0 ;; 
    p140) run_test 146 && exit 0 ;; 
    n1) run_test 30 && exit 0 ;; 
    n2) run_test 34 && exit 0 ;; 
    n3) run_test 38 && exit 0 ;; 
esac
exit 1
