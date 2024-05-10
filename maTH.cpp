#include "maTH.h"
#include <vector>
#include <cmath>

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

int pow(int a, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= a;
    }
    return result;
}