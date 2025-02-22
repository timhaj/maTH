# 🗿 Installation

This page serves as a guide to installing and properly using the libary in your project.

## Install the library

To install the library, simply do `git clone https://github.com/timhaj/maTH.git`.

### Including the library to your project, the manual way

To run your code with the library, simply run:

```
g++ <file_name> -L. -lmaTH -o main_executable
```

and run the executable using `./main_executable` or `main_executable.exe`

Don't have g++ compiler installed? [Check the installation guide here](https://code.visualstudio.com/docs/cpp/config-mingw)

Incase you're changing the code and the included library doesn't work anymore, compile the source code to an object file with:

```
g++ -c maTH.cpp -o maTH.o
```

and create the library with:

```
ar rcs libmaTH.a maTH.o
```

### Including the library to your project, using CMake

After modifying your CMakeLists.txt (a demo already included in the repository), you can build the project with these instructions:

```sh
mkdir build
cd build
cmake ..
make
main
```

Incase the Makefile doesn't appear, use:

```sh
mkdir build
cd build
cmake -G "Unix Makefiles" ..
make
main
```
