#include "maTH.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 10, b = 5;
    float x = 5.1, y = 2;
    cout << "log5(125): " << ln<float>(125.0) / ln<float>(5.0) << endl;
    cout << "log5(125): " << log<float>(5.0, 125.0) << endl;
    return 0;
}