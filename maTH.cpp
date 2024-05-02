#include "maTH.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int factorial_rec(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int factorial(int n){
    int res = 1;
    for(int i = 1;i<=n;i++){
        res *= i;
    }
    return res;
}

