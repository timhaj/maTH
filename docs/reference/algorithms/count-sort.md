# Count sort

### Sort a vector using count sort:

```cpp
countSort(arr, isAscending);
```

returns the sorted vector arr, based on provided isAscending condition (`true` for ascending and `false` for descending).

### Example use case:

Running

```cpp
std::vector<int> arr= {5, 2, 9, 1, 5, 6};

std::cout << "Original Vector: ";
for(int num : arr){
    std::cout << num << " ";
}    
std::cout << std::endl;

countSort(arr, true);

std::cout << "Sorted Ascending Vector: ";
for(int num : arr){
    std::cout << num << " ";
}
std::cout << std::endl;
```

, returns the following output:

```
Original Vector: 5 2 9 1 5 6 
Sorted Ascending Vector: 1 2 5 5 6 9 
```





