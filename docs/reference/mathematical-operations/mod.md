# mod

## Returns the remainder of the division of two given numbers

```cpp
mod<return_type>(dividend, divisor);
```

will return the remainder of the division between the dividend and the divisor. The return\_type specifies in which data type the result will be returned in, like shown in below example:&#x20;

```cpp
mod<int>(10.423, 3); //1
mod<float>(15, 4.13); //2.61
mod<bool>(21, 7); //0
```
