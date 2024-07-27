# log

## Find the logarithm of argument x with the base of a

```cpp
log<return_type>(a, x);
```

will return the logarithm of the argument x with the base a, both given as arguments. The return\_type specifies in which data type the result will be returned in, like shown in below example:&#x20;

```cpp
log<int>(20, 400); //2
log<float>(1.43, 543.18); //17.6066
```

{% hint style="danger" %}
Just like ln(x), log(a, x) isn't defined for all non-positive arguments x, as the compiler will throw an exception:

```
Error: Logarithm is undefined for non-positive values.
```
{% endhint %}

Because the ln(x) function is so precise,  we can just use the:&#x20;

$$
log_a(x) = \frac{ln(x)}{ln(a)}
$$

formula to calculate the given logarithm.&#x20;
