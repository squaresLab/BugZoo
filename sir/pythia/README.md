# Pythia

### Example Test Suite Manifest

```
[
	{
		"description": "compresses a file at a given location",
		"command": "<<EXECUTABLE>> '<<INPUT>>/f' -c",
		"input": {
			"f": "testdir/file26"
		}
	},
  ...
]
```

### Example Oracle Definition

```
[
  {
    "retval": 0,
    "out": "7",
    "err": "",
    "sandbox": {}
  },
  ...
]
```
