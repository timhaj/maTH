#include <vector>
#ifndef MATH_H
#define MATH_H

constexpr long double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
constexpr long double E = 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;
constexpr long double PHI = 1.61803398874989484820458683436563811772030917980576286213544862270526046281890;
constexpr long double TAU = 0.61803398874989484820458683436563811772030917980576286213544862270526046281890;

template<typename ReturnType, typename T1, typename T2>
ReturnType add(T1 a, T2 b);

template<typename ReturnType, typename T1, typename T2>
ReturnType subtract(T1 a, T2 b);

template<typename ReturnType, typename T1, typename T2>
ReturnType multiply(T1 a, T2 b);

template<typename ReturnType, typename T1, typename T2>
ReturnType divide(T1 a, T2 b);

int factorial(int n);
int factorial_rec(int n);
std::vector<int> pascal(int n);
int combinations(int n, int k);
int combinationsWithRep(int n, int k);
int permutations(int n, int k);

template <typename returnType = double, typename T>
returnType sin(T x, int terms = 10);

template <typename returnType = double, typename T>
returnType cos(T x, int terms = 10);

#endif