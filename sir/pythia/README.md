# Pythia

## Usage

### Generating an Oracle

```
$ pythia generate -exe source/gzip.exe inputs
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

## Command-Line Options

* `--executable`: relative (or absolute) path to executable file, w.r.t.
  current working directory
* `--inputs`: relative (or absolute) path to input file directory, w.r.t
  current working directory); defaults to `inputs`
* `--verbose`: increases level of output to terminal
* `--quiet`: disables output to terminal
* `-i`: alias for `--inputs` flag
* `-v`: alias for `--verbose` flag
* `-q`: alias for `--quiet` flag


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
