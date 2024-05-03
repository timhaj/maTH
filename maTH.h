#ifndef MATH_H
#define MATH_H

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

#endif