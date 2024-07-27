# ln

## Find the natural logarithm of x

```cpp
ln<return_type>(x);
```

will return the natural logarithm of x, given as the argument. The return\_type specifies in which data type the result will be returned in, like shown in below example:&#x20;

```cpp
ln<int>(123); //2
ln<float>(371283123789); //26.6402
ln<bool>(7); //1
```

{% hint style="danger" %}
Natural logarithm f(x) = ln(x) isn't defined for non-positive numbers, so the compiler will throw an exception:&#x20;

```
Error: The natural logarithm is undefined for non-positive values.
```
{% endhint %}

The function works so that it can also handle big integers/numbers aswell. How it works, as we first take the scientific notation of the number, calculate the value using the very fast converging expansion and then multiplying the value by n - 1 times of log10. You can find an in depth explanation of this approach here: [https://math.stackexchange.com/questions/977586/is-there-an-approximation-to-the-natural-log-function-at-large-values](https://math.stackexchange.com/questions/977586/is-there-an-approximation-to-the-natural-log-function-at-large-values).
