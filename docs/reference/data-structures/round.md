# Stack

## Creating a stack:

```cpp
Stack<return_type> stack;
```

will create a stack that stores elements of type `<return_type>`. The stack follows the **Last In, First Out (LIFO)** principle, meaning the last element added is the first one to be removed.

### Functions:

| Function | Description                                                            | O notation |
| -------- | ---------------------------------------------------------------------- | ---------- |
| push(x)  | Adds the element x of type `<return_type>` to the stack.               | O(1)       |
| pop()    | Removes the lastly added element to the stack (if any) and returns it. | O(1)       |
| top()    | Return the lastly added element to the stack (if any).                 | O(1)       |
| empty()  | Check whether the stack is empty, returns a boolean.                   | O(1)       |

### Example use case:

{% code fullWidth="true" %}
```cpp
Stack<int> stack;
stack.push(10);
stack.push(20);
stack.push(30);
std::cout << "Top element: " << stack.top() << std::endl; // Top element: 30
std::cout << "Popped: " << stack.pop() << std::endl; // Popped: 30
std::cout << "Stack empty? " << (stack.empty() ? "Yes" : "No") << std::endl; // Stack empty? No
```
{% endcode %}
