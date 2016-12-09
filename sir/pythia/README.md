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
Generating oracle...
Finished.
Saved to disk at: oracle.pythia.json
```

### Running a test case and comparing to oracle

```
$ pythia run 17 -exe source/gzip.exe
FAIL

$ pythia run 17 -exe source/gzip.exe -v
FAIL: retval, stderr, sandbox
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
