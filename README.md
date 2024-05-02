# maTH
A forever developing library written in C++, which will consist of more or less all math operations.

Here's a short demo to use the library:
```cpp
// <file_name>
#include "maTH.h"
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    return 0;
}
```
to run the code, run the following command with the library (already included in the repo):
```
g++ <file_name> -L. -lmaTH -o main_executable
```
and run the executable using ```./main_executable``` or ```main_executable.exe```

Don't have g++ compiler installed? [Check the installation guide here:](https://code.visualstudio.com/docs/cpp/config-mingw)
___

Incase your changing the code and the included library doesn't work anymore, compile the source code to an object file with:
```
g++ -c maTH.cpp -o maTH.o
```
and create the library with:
```
ar rcs libmaTH.a maTH.o
```
