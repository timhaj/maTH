# cos

## Compute cosine of a given argument

```cpp
cos(x);
```

will return the cosine of an argument, expressed in radians. There is no custom return type, the function always returns an double.&#x20;

```cpp
cos(0); // 1
cos(PI / 6) == cos(degToRad<float>(30); // sqrt(3)/2 = 0.866
cos(PI / 4) == cos(degToRad<float>(45); // sqrt(2)/2 = 0.707
cos(PI / 3) == cos(degToRad<float>(60); // 0.5
cos(PI / 2) == cos(degToRad<float>(90); // 0
cos(7 * PI / 6) == cos(degToRad<float>(210); // -0.866
```

{% hint style="warning" %}
Make sure you are passing radians as a argument. You can easily use [degToRad](degtorad.md) function to convert it within the argument itself.&#x20;
{% endhint %}
