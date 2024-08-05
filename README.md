# maTH
Ongoing C++ library which covers a wide range of math operations and keeps growing to offer more tools for all sorts of calculations.

You can find the full in-depth documentation [here:](https://math-5.gitbook.io/math/)

Here's a short demo to use the library:
```cpp
// <file_name>
#include "maTH.h"
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    float x = 5.1, y = 2;
    cout << factorial(b) << endl;   // 120
    cout << PI << endl;  // you can directly use constants
    cout << "Addition: " << add<int>(a, x) << endl;   // 15
    cout << "Addition: " << add<float>(a, x) << endl; // 15.1
    return 0;
}
```
to run the code, run the following command with the library:
```console
g++ <file_name> -L. -lmaTH -o main_executable
```
and run the executable using ```./main_executable``` or ```main_executable.exe```

Don't have g++ compiler installed? [Check the installation guide here](https://code.visualstudio.com/docs/cpp/config-mingw)
___

Incase you're changing the code and the included library doesn't work anymore, compile the source code to an object file with:
```console
g++ -c maTH.cpp -o maTH.o
```
and create the library with:
```console
ar rcs libmaTH.a maTH.o
```

## CMake instructions
```cmd
mkdir build
cd build
cmake ..
make
main
```
Incase the Makefile doesn't appear, use:
```cmd
mkdir build
cd build
cmake -G "Unix Makefiles" ..
make
main
```

## Contributions
Contributions for the library are very much welcome! If you have ideas for new features, optimizations, or bug fixes, feel free to open an issue or submit a pull request.
___
TODO:
- gitbook docs, more detail for constants
- more math!, maybe DS&algos in future
