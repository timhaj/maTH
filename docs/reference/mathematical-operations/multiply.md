# multiply

## Multiply any two numbers

```cpp
multiply<return_type>(a, b);
```

will return the product of the two given numbers. The return\_type specifies in which data type the multiplication will be returned in, like shown in below example:&#x20;

```cpp
multiply<int>(7.89, 6); //42
multiply<float>(3.21, 12); //38.52
multiply<bool>(-1, 5); //1, AND operator
------------------------
multiply<char>('a', 'b'); //'"'
```

{% hint style="warning" %}
Typically multiplication works only for numeric data types, but in this case, you have an additional option for characters. Before using it in that way, please test it before actually implementing something.&#x20;
{% endhint %}
