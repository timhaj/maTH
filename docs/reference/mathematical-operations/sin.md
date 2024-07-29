# sin

## Compute sine of an given argument

```cpp
sin(x);
```

will return the sine of an argument, expressed in radians. There is no custom return type, the function always returns an double.&#x20;

```cpp
sin(0); // 0
sin(PI / 6) == sin(degToRad<float>(30); // 0.5
sin(PI / 4) == sin(degToRad<float>(45); // sqrt(2)/2 = 0.707
sin(PI / 3) == sin(degToRad<float>(60); // sqrt(3)/2 = 0.866
sin(PI / 2) == sin(degToRad<float>(90); // 1
sin(7 * PI / 6) == sin(degToRad<float>(210); // -0.5
```

{% hint style="warning" %}
Make sure you are passing radians as a argument. You can easily use [degToRad](degtorad.md) function to convert it within the argument itself.&#x20;
{% endhint %}
