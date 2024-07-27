# abs

## Returns the absolute value of a number

```cpp
abs<return_type>(a);
```

will return the absolute value of the argument (distance between the number and the number 0). The return\_type specifies in which data type the result will be returned in, like shown in below example:&#x20;

```cpp
abs<int>(-15.43); //15
abs<float>(3.222223); //3.222223
abs<bool>(5); //1
------------------------
abs<char>(105); //'i'
```
