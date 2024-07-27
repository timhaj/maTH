# subtract

## Subtract any two numbers

```cpp
subtract<return_type>(a, b);
```

will return the difference of the two given numbers. The return\_type specifies in which data type the difference will be returned in, like shown in below example:&#x20;

```cpp
subtract<int>(6.9, 4.20); //2
subtract<float>(3.222, 5); //-1.778
subtract<bool>(0, 1); //1
------------------------
subtract<char>('c', 2); //'a'
```

{% hint style="warning" %}
Typically subtraction works only for numeric data types, but in this case, you have an additional option for characters. Before using it in that way, please test it before actually implementing something.&#x20;
{% endhint %}
