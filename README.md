# MNXB11 Homework for tutorial 8-11
This readme contains instructions on how to build the libraries used in this repository.

## CLI library
The CLI library used is the argh! library. It is a header-only library that requires C++11. Follow these instructions to build it:
1. Create the following directory structure from the root of this repository:
- dependencies/
- external/include/
2. Clone the [argh! repository](https://github.com/adishavit/argh) into the dependencies/ directory.
3. Copy the argh.h file from the cloned repository into the external/include/ directory.

## CSV library
The CSV library used is Fast C++ CSV Parser. It is also a header-only library that requires C++11. Assuming that you have followed step 1 for the CLI library, and therefore already have the dependencies/ directory and the external/include/ directory:
1. Clone the [Fast C++ CSV Parser repository](https://github.com/ben-strasser/fast-cpp-csv-parser) into the dependencies/ directory.
2. Copy the csv.h file from the cloned repository into the external/include/ directory.

