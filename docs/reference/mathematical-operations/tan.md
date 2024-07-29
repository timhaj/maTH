# tan

## Compute tangent of a given argument

```cpp
tan(x);
```

will return the tangent of an argument, expressed in radians. There is no custom return type, the function always returns an double.&#x20;

```cpp
tan(0); // 0
tan(PI / 6) == tan(degToRad<float>(30); // 1/sqrt(3) = 0.577
tan(PI / 4) == tan(degToRad<float>(45); // 1
tan(PI / 3) == tan(degToRad<float>(60); // sqrt(3) = 1.732
tan(PI / 2) == tan(degToRad<float>(90); // 0, not infinity!
tan(-PI / 6) == tan(degToRad<float>(-30); // -0.577
```

{% hint style="warning" %}
Make sure you are passing radians as a argument. You can easily use [degToRad](degtorad.md) function to convert it within the argument itself.&#x20;
{% endhint %}
