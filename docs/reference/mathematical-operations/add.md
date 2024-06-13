# add

## Add any two numbers together

```cpp
add<return_type>(a, b);
```

will return the sum of the two given numbers together. The return\_type specifies in which data type the sum will be returned in, like shown in below example:&#x20;

```cpp
add<int>(5, 15.1); //20
add<float>(0.2, 3); //3.2
add<bool>(-1, 200); //1
------------------------
add<char>('a', 1); //'b'
add<string>("abc", "abc"); //abcabc
```

{% hint style="warning" %}
Typically addition works only for numeric data types, but in this case, you have additional options for characters and strings. Before using it in that way, please test it before actually implementing something.&#x20;
{% endhint %}
