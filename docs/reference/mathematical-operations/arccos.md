# arccos

## Compute arccosine of a given argument

```cpp
arccos(x);
```

will return the arccosine of an argument, returned in degress in radians. There is no custom return type, the function always returns an double. &#x20;

```cpp
arccos(1); //0°
arccos(0.866); //PI/6 or 30°
arccos(0.707); //PI/4 or 45°
arccos(0.5); //PI/3 or 60°
arccos(0); //PI/2 or 90° 
arccos(-1); //PI or 180°
```

{% hint style="danger" %}
The argument domain is \[-1, 1]. If x is outside the range, the compiler throws:&#x20;

```cpp
"Error: arccos is undefined for values outside the domain range [-1, 1]."
```
{% endhint %}
