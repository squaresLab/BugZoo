# Pythia

## Usage

### Generating an Oracle

```
$ pythia generate test.manifest.json -exe source/gzip.exe inputs
Generating oracle...
Finished.
Saved to disk at: oracle.json
```

### Running a test case and comparing to oracle

```
$ pythia run 17 -exe source/gzip.exe
FAIL

$ pythia run 17 -exe source/gzip.exe -v
FAIL:
  * stdout differ
  * stderr differ
  * retvals differ
  * sandbox differ
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
