# Queue

## Creating a queue:

```cpp
Queue<return_type> queue;
```

will create a **queue** that stores elements of type `<return_type>`. The queue follows the **First In, First Out (FIFO)** principle, meaning the first element added is the first one to be removed.

### Functions:

| Function        | Description                                                               | O notation |
| --------------- | ------------------------------------------------------------------------- | ---------- |
| enqueue(x)      | Adds the element x of type `<return_type>` to the queue at the end.       | O(1)       |
| dequeue()       | Removes the firstly added element to the queue (if any) and returns it.   | O(1)       |
| enqueueFront(x) | Adds the element x of type `<return_type>` to the queue at the beginning. | O(1)       |
| dequeueBack()   | Removes the lastly added element to the queue (if any) and returns it.    | O(1)       |
| empty()         | Check whether the queue is empty, returns a boolean.                      | O(1)       |
| getFront()      | Returns the element that's first in queue (if any).                       | O(1)       |
| getBack()       | Returns the element that's last in queue (if any).                        | O(1)       |

### Example use case:

{% code fullWidth="true" %}
```cpp
Queue<int> queue;
queue.enqueue(1);
queue.enqueue(2);
queue.enqueue(3);
std::cout << "Dequeued: " << queue.dequeue() << std::endl; // Dequeued: 1
queue.enqueueFront(0);
std::cout << "Dequeued from back: " << queue.dequeueBack() << std::endl; // Dequeued from back: 3
std::cout << "Queue empty? " << (queue.empty() ? "Yes" : "No") << std::endl; // Queue empty? No
```
{% endcode %}
