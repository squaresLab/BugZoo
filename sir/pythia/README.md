# Pythia

## Installation

Build from source with `easy_install`.

## Usage

### Getting Help

```
$ pythia -h
...

$ pythia generate -h
...
```

### Generating an Oracle

```
$ pythia generate source/gzip.exe
generating oracle...
finished.
saved to disk at: oracle.pythia.json
```

### Running a test case and comparing to oracle

```
$ pythia run source/gzip.exe 17
running test case #17: <<EXECUTABLE>> -fgrx < <<INPUT>>/f.z
status: FAIL
```

### Generating a Test Mapping

## Examples

### Test Suite Manifest

### Example Oracle Definition

```
[
  {
    "retval": 0,
    "out": "the sum is: 7",
    "err": "",
    "sandbox": {}
  },
  ...
]
```
