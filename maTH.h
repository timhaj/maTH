#include <vector>
#include <cmath>
#ifndef MATH_H
#define MATH_H

constexpr long double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
constexpr long double E = 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;
constexpr long double PHI = 1.61803398874989484820458683436563811772030917980576286213544862270526046281890;
constexpr long double TAU = 0.61803398874989484820458683436563811772030917980576286213544862270526046281890;

template <typename ReturnType, typename T1 = ReturnType, typename T2 = T1>
ReturnType add(T1 a, T2 b)
{
    ReturnType result = a + b;
    return result;
}

template <typename ReturnType, typename T1, typename T2 = T1>
ReturnType subtract(T1 a, T2 b)
{
    return (ReturnType)a - (ReturnType)b;
}

template <typename ReturnType, typename T1, typename T2 = T1>
ReturnType multiply(T1 a, T2 b)
{
    return (ReturnType)a * (ReturnType)b;
}

template <typename ReturnType, typename T1, typename T2 = T1>
ReturnType divide(T1 a, T2 b)
{
    return (ReturnType)a / (ReturnType)b;
}

int factorial(int n);
int factorial_rec(int n);
std::vector<int> pascal(int n);
int combinations(int n, int k);
int combinationsWithRep(int n, int k);
int permutations(int n, int k);

template <typename returnType = double, typename T>
returnType sin(T x)
{
    int terms = 10;
    // argument deduction
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
returnType cos(T x)
{
    int terms = 10;
    // argument deduction
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

template <typename returnType, typename T>
returnType ln(T x)
{
    int terms = 100;
    if (x <= 0)
    {
        //
    }
    returnType result = 0;
    returnType term = (x - 1) / (x + 1);
    int denom = 1;
    for (int i = 1; i <= terms; i++)
    {
        result += term;
        denom += 2;
        term *= (((x - 1) / (x + 1)) * ((x - 1) / (x + 1))) * 1 / denom;
    }
    return result * 2;
}

template <typename returnType, typename T1, typename T2 = T1>
returnType log(T1 base, T2 argument)
{
    return (returnType)(ln<returnType>(argument) / ln<returnType>(base));
}

template <typename returnType, typename T1 = returnType>
returnType radToDeg(T1 rad)
{
    return (returnType)(rad * (180 / PI));
}

template <typename returnType, typename T1 = returnType>
returnType degToRad(T1 deg)
{
    return (returnType)(deg * (PI / 180));
}

template <typename returnType, typename T1 = returnType, typename T2 = T1>
returnType mod(T1 dividend, T2 divisor)
{
    return (returnType)(dividend - (((int)(dividend / divisor)) * divisor));
}

#endif