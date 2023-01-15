# message

## Purpose
This repo is part of a series of repo used to test a meson setup.
This repo does not, with full intend contain a meson.build file of it's own.
A meson.build file for this repo is to be supplied by projects using this repo.
I.e. this project is to be used as a subproject, where the consuming project supplies meson.build file through the use of mesons wrap file functionality.
[Meson wrap dependency system manual](https://mesonbuild.com/Wrap-dependency-system-manual.html)

## Prerequisites
g++ compiler

## Compile
compile the code in this repo by running the following command on the command line
```sh
g++ -o message main.cpp src/message.cpp
```