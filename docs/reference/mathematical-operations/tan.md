# tan

## Divide any two numbers

```cpp
divide<return_type>(a, b);
```

will return the quotient of the two given numbers. The return\_type specifies in which data type the difference will be returned in, like shown in below example:&#x20;

```cpp
divide<int>(12, 3.53); //4
divide<float>(3.002, 3.522); //0.852357
divide<bool>(0, 2); //0
------------------------
divide<char>('z', 2); //'='
```

{% hint style="warning" %}
Typically division works only for numeric data types, but in this case, you have an additional option for characters. Before using it in that way, please test it before actually implementing something.&#x20;

Also be careful of the denominator being zero, because the compiler won't tell you that it is! It's not a bug, it's a feature.  :wink:
{% endhint %}
