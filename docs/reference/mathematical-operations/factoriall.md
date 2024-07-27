# factorialL

## Find the factorial of a given number

```cpp
long long factorial(n);
```

will return the factorial of a given number. There is no custom return type, the function always returns an integer.&#x20;

```cpp
factorialL(5); //120
factorialL(0); //1
```

{% hint style="warning" %}
After n = 20, the function doesn't work anymore, as the numbers are too large for the integer sizing. Yeah, ..., `long long` allows you to store 1 more `n` than `int`, xD. This just tells you how big these numbers can become with increasing `n`.&#x20;
{% endhint %}
