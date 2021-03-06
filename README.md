# C/C++ Test Driven Development boilerplate
> Ready to go boilerplate for doing TDD for C/C++ and SCons as build system.

[![Build Status](https://travis-ci.org/jorgeacortes/cpp-tdd-boilerplate.svg?branch=master)](https://travis-ci.org/jorgeacortes/cpp-tdd-boilerplate)

Boilerplate for C/C++ development using TDD and [SCons](https://github.com/SCons/scons).

Uses [GoogleTest](https://github.com/google/googletest/) for unit testing and to create mocks.

Has already a sample module called _func1_ with some unit tests and mocks to ease the use of the boilerplate.

## Sample usage

To test that your setup is ready, run the following commands. If not, go to [Requirements](#requirements).

```sh
git clone --recursive https://github.com/jorgeacortes/c-tdd-boilerplate
scons # Builds the app and tests
```

`Build.py` is a file included in order to manage usual builds.
VS Code configuration and tasks are provided for compiling and debugging.
Dockerfile is also provided to compile over a linux container.

## Including your code

To include your code you need to modify at least:

* project.scons
  * include_path_list: add all include paths for production code or common ones.
  * mocks_list: in case mocks are needed.
* app.scons
  * productionCode_sources: include all sources to compile
* test.scons
  * tests_sources: include all sources to compile (mocks and tests)
  * Add more runners if needed

## Requirements

* Python
* SCons -> `pip install scons`
* Mingw or gcc

## Release History

* 1.1.0
    * Improvements for compiling gtest
    * Including Dockerfile
    * Including Dockerfile commands at build.py
* 1.0.0
    * First version

## Contributing

Feel free to contribute opening issues or pull requests.

## To do list

* Automatically launch all runners and show results.
* Include GMock.
* Include sample class and fixtures.
* Create a scons file only for google test library.
