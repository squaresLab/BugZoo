# grep

Of the 57 individually seeded faults within grep, only 9 appear to fail at
least one test case; the remaining 48 appear to be neutral changes, with
respect to the test suite. For two of these nine faults, every test in the
test suite is failed, making them inappropriate for the purposes of automated
program repair. Resultingly, at present time, there are only 7 bug scenarios
for grep, listed below:

* v1-DG_4
* v1-DG_9
* v1-KP_5
* v2-DG_1
* v3-DG_3
* v3-KP_7
* v4-KP_6
