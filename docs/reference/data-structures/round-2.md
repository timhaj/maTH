# LinkedList

## Creating a linked list:

```cpp
LinkedList<return_type> list;
```

will create a **linked list** that stores elements of type `<return_type>`. A linked list is a dynamic data structure consisting of nodes, where each node contains a value and a pointer to the next node in the sequence.

### Functions:

| Function   | Description                                                                                          | O notation |
| ---------- | ---------------------------------------------------------------------------------------------------- | ---------- |
| push(x)    | Adds the element x of type `<return_type>` to the list.                                              | O(1)       |
| pop()      | Removes the lastly added element to the linked list (if any) and returns it.                         | O(1)       |
| find(v)    | Check whether a certain value `v` of type `<return_type>` exists within the list, returns a boolean. | O(n)       |
| remove(v)  | Removes all occurences of the value `v` of type `<return_type>` in the list, including repetitions.  | O(n)       |
| traverse() | Prints the whole list sequentially as a LIFO type structure.                                         | O(n)       |

### Example use case:

{% code fullWidth="true" %}
```cpp
LinkedList<int> list;
list.push(5);
list.push(10);
list.push(15);
std::cout << "List: ";
list.traverse();  // List: 15 10 5 
std::cout << "Finding 10: " << (list.find(10) ? "Found" : "Not Found") << std::endl; // Finding 10: Found
std::cout << "Removing 10..." << std::endl; // Removing 10...
list.remove(10);
std::cout << "List after removal: ";
list.traverse(); // List after removal: 15 5 
```
{% endcode %}
