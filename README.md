# Rubik Cube

A cross platform (desktop) playable rubik cube using C++ and OpenGL with GLFW.

## Install Dependencies

Necessary tools:

- CMake
- C++ Complier
- OpenGL (Version ???)

### Windows

Download and install [Visual Studios](https://visualstudio.microsoft.com/downloads/), or install [MinGW](http://www.mingw.org/) and add `C:/MinGW/bin` to your `Path`.

Download and install [CMake](http://www.cmake.org/cmake/resources/software.html).

### Linux

Run the following commands to install g++ using build-essential, CMake:

```
    sudo apt-get update
    sudo apt-get upgrade
    sudo apt-get install build-essential cmake xorg-dev libgl1-mesa-dev
```

### MacOS

#### C++ Compiler

Download XCode from the app store.

#### CMake

Download and install [CMake](http://www.cmake.org/cmake/resources/software.html).

## Running Application

Run the following commands to clone, build, and run application:

```
git clone https://github.com/williamstyronejr/rubikcube-opengl.git --recursive
cd rubikcube-opengl
cmake .
make .
./main
```
