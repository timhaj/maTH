# exp

## Calculate the exponential function of x

```cpp
exp<return_type>(x);
```

will return the result of raising the constant e (Euler's number) to the power of x (argument). The return\_type specifies in which data type the result will be returned in, like shown in below example:&#x20;

```cpp
exp<int>(0.069); //1
exp<float>(2); //7.38906
exp<bool>(0); //1
------------------------
exp<char>(5.5); //'ű'
```
