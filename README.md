# Market Parser

## How to build
Just type `make`. This will build `parser` and `tests/test_parser` executables. Also a standard make will run the unit tests

## How to run
After building - it can be run with `./parser test_data/input.csv`

## Directories

```.
├── 3rdparty
│   └── catch2
├── test_data
└── tests
```

### 3rdparty
External software dependices

### catch2
C++ Header only unit test library from https://github.com/catchorg/Catch2

### test_data
Datafiles for the unit tests and the project. Test data also contains some shell scripts and awk scripts that were used to generate code for some of the units tests. 

### tests
Code for the unit tests
