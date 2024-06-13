# radToDeg

## Convert radians to degrees

```cpp
radToDeg<return_type>(rad);
```

will return the converted degrees from given radians as the argument. The return\_type specifies in which data type the result will be returned in, like shown in below example:&#x20;

```cpp
radToDeg<int>(PI); //180
radToDeg<float>(PI/5.12); //35.1562
radToDeg<bool>(0); //0
------------------------
radToDeg<char>(PI/2); //'Z'
```
