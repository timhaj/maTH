# degToRad

## Convert degrees to radians

```cpp
degToRad<return_type>(deg);
```

will return the converted radians from given degrees as the argument. The return\_type specifies in which data type the result will be returned in, like shown in below example:

```cpp
radToDeg<int>(180); //3
radToDeg<float>(35.1562); //0.613591 -> PI/5.12
radToDeg<bool>(0); //0
------------------------
radToDeg<char>(105); //'☺'
```
