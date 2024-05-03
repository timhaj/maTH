#include "maTH.h"
#include <vector>
#include <cmath>

template <typename ReturnType, typename T1, typename T2>
ReturnType add(T1 a, T2 b)
{
    return (ReturnType)a + (ReturnType)b;
}

template <typename ReturnType, typename T1, typename T2>
ReturnType subtract(T1 a, T2 b)
{
    return (ReturnType)a - (ReturnType)b;
}

template <typename ReturnType, typename T1, typename T2>
ReturnType multiply(T1 a, T2 b)
{
    return (ReturnType)a * (ReturnType)b;
}

template <typename ReturnType, typename T1, typename T2>
ReturnType divide(T1 a, T2 b)
{
    return (ReturnType)a / (ReturnType)b;
}

int factorial_rec(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

std::vector<int> pascal(int n)
{
    if (n == 1)
    {
        return {1};
    }
    else if (n == 2)
    {
        return {1, 1};
    }
    else
    {
        std::vector<int> arr(2, 1); // {1,1}
        for (int i = 0; i < n - 2; i++)
        {
            std::vector<int> tmp(arr.size() + 1);
            tmp[0] = 1;
            tmp[arr.size()] = 1;
            for (int j = 0; j < arr.size() - 1; j++)
            {
                tmp[j + 1] = arr[j] + arr[j + 1];
            }
            arr.swap(tmp);
        }
        return arr;
    }
}

int combinations(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int combinationsWithRep(int n, int k)
{
    return combinations(n + k - 1, k);
}

int permutations(int n, int k)
{
    return factorial(n) / factorial(n - k);
}

template <typename returnType = double, typename T>
returnType sin(T x, int terms = 10)
{
    x = fmod(x, PI); // Reduce x to the range of [-2pi, 2pi]
    if (x < -PI)
    {
        x += 2 * PI; // Adjust x to the range of [-pi, pi]
    }
    else if (x > PI)
    {
        x -= 2 * PI; // Adjust x to the range of [-pi, pi]
    }
    returnType result = 0;
    returnType term = x;
    returnType denom = 1;
    returnType sign = 1;
    for (int i = 1; i <= terms; ++i)
    {
        result += sign * (term / factorial(denom));
        term *= (x * x);
        denom += 2;
        sign *= -1;
    }
    return result;
}

template <typename returnType = double, typename T>
returnType cos(T x, int terms = 10)
{
    x = fmod(x, 2 * PI); // Reduce x to the range of [-2pi, 2pi]
    if (x < -PI)
    {
        x += 2 * PI; // Adjust x to the range of [-pi, pi]
    }
    else if (x > PI)
    {
        x -= 2 * PI; // Adjust x to the range of [-pi, pi]
    }
    returnType result = 0;
    returnType term = 1;
    returnType denom = 0;
    returnType sign = 1;
    for (int i = 0; i < terms; ++i)
    {
        result += sign * (term / factorial(denom));
        term *= (x * x);
        denom += 2;
        sign *= -1;
    }
    return result;
}