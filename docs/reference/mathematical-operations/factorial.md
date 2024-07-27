# factorial

## Find the factorial of a given number

```cpp
int factorial(n);
```

will return the factorial of a given number. There is no custom return type, the function always returns an integer.&#x20;

```cpp
factorial(5); //120
factorial(0); //1
```

{% hint style="warning" %}
After n = 19, the function doesn't work anymore, as the numbers are too large for the integer sizing. Instead, use factorialL(n) for larger numbers.&#x20;
{% endhint %}
