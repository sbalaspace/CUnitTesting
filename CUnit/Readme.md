## Introduction

This project contains examples for unit testing C code with cunit and CMake

To compile the code and run the test cases simply type 
```
./clean-cmake.sh
```

You need the following dependencies for the project to work
1. CUnit
2. CMake

The project directory structure is as follows

```
.
|-- CMakeLists.txt
|-- CMakeModules
|   `-- FindCUnit.cmake
|-- clean-cmake.sh
|-- clean.sh
|-- include
|   |-- CMakeLists.txt
|   `-- calc.h
|-- output
|-- src
|   |-- CMakeLists.txt
|   |-- CTestTestfile.cmake
|   `-- calc.c
`-- tests
    |-- CMakeLists.txt
    `-- check_calc.c
```

There is a top level CMakeLists.txt file

The CMakeModules directory contains a FindCUnit.cmake. This finds the CUnit libraries installed in your machine and correctly links them for compiling.

The include directory contains the include files and a simple CMakeLists.txt file

The src directory contains the program of interest without a main function (this will be in tests dir). It also contains a CMakeLists.txt to compile the src files.

The tests directory contains a program with test cases and test suite. This contains comments that can answer some faqs.

The output directory contains the sample output from my machine that can be compared with yours, if any doubt arises. I added one case that will fail, so expect some failure and errors similar to what is the sample_output.txt.

NOTE: I don't know how to add mutliple test cases to a single test suite. I am also not sure why the failure test cases are not failing correctly. These need to be investoigated further.

The clean.sh cleans all the make files.

The clean-cmake.sh cleans all the make files and builds them again. It also runs the test suite.



The following references where very useful in creating this setup

## References

For writing unit tests with CUnit and integrating CMake
https://github.com/k0ekk0ek/cmake-cunit
