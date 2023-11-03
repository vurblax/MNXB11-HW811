# MNXB11 Homework for tutorial 8-11
This readme contains instructions on how to build the libraries used in this repository. 

Note! The Makefile in this repo assumes that you have ROOT installed.

## CLI library
The CLI library used is the argh! library. It is a header-only library that requires C++11. Follow these instructions to build it:
1. Create the following directory structure from the root of this repository:
- dependencies/
- external/include/
2. Clone the [argh! repository](https://github.com/adishavit/argh) into the dependencies/ directory.
3. Copy the argh.h file from the cloned repository into the external/include/ directory.
4. Done.

## CSV library
The CSV library used is Fast C++ CSV Parser. It is also a header-only library that requires C++11. _Assuming that you have followed step 1 for the CLI library, **and therefore already have the dependencies/ directory and the external/include/ directory:**_
1. Clone the [Fast C++ CSV Parser repository](https://github.com/ben-strasser/fast-cpp-csv-parser) into the dependencies/ directory.
2. Copy the csv.h file from the cloned repository into the external/include/ directory.
3. Done.

## Date library
The date library used is Howard Hinnant's date library, which is also header-only. _Assuming that you have followed step 1 for the CLI library, **and therefore already have the dependencies/ directory and the external/include/ directory:**_
1. Clone the [date repository](https://github.com/HowardHinnant/date/tree/master) into the dependencies/ directory.
2. Copy the date.h file (found under ./date/include/date) from the cloned repository into the external/include directory.
3. Done

## FMT library
The fmt library is **not** a header-only library, so some extra steps are needed.
1. Clone the [fmt repository](https://github.com/fmtlib/fmt) into the dependencies/ directory.
2. At the repo root, create a build/ directory.
3. Within build/ create a directory called fmt.
4. Cd into build/fmt/ and run the following command and its arguments (note that you need to change the path to the actual path): cmake /path/to/source/directory/for/fmt -DCMAKE_INSTALL_PREFIX=../../external
5. Run make to build the library.
6. Run make install to install the library.
7. Done.