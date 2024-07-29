# arcsin

## Compute arcsine of the given argument

```cpp
arcsin(x);
```

will return the arcsine of an argument, returned in degress in radians. There is no custom return type, the function always returns an double. &#x20;

```cpp
arcsin(0); // 0°
arcsin(0.5); //PI/6 or 30°
arcsin(0.7854); //PI/4 or 45°
arcsin(1.0472); //PI/3 or 60°
arcsin(1); // PI/2 or 90° 
```

{% hint style="danger" %}
The argument domain is \[-1, 1]. If x is outside the range, the compiler throws:&#x20;

```cpp
"Error: arcsin is undefined for values outside the domain range [-1, 1]."
```
{% endhint %}
