# pow

## Calculate the raising of a base number to the exponent power

```cpp
int pow(int a, int n);
double pow(double a, int n);
double pow(int a, double n);
double pow(double a, double n);
```

will return the power function of the two given numbers. Depending on the function overloads, it can either return an integer if both arguments data types are an integer, or a double in every other scenario.&#x20;

```cpp
pow(2, 4); //16
pow(7.89, 3); //491.169
pow(5, 2.52); //57.7304
pow(5.12, 3.77); //472.006
```
