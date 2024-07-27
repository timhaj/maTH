# root

## Calculate the n-th root of a number

```cpp
root<return_type>(n, a);
```

will return the n-th root (index/degree) of a number (radicand). The return\_type specifies in which data type the result will be returned in, like shown in below example:&#x20;

```cpp
root<int>(3, -34); //-3
root<float>(5, 23123); //7.4612
root<bool>(3, -15); //1
------------------------
root<char>(15, 98756); //'ß'
```

{% hint style="danger" %}
The n-th root of a number is undefined for n (index/degree) being an even number and a (radicand) being an non-positive number. As a result, the compiler will throw the following exception:

```
Error: The nth root function is undefined for non-positive values of even root indexes (degrees)
```
{% endhint %}
