# permutations

## Calculate the number of arrangements of items in a specific order

```cpp
int permutations(int n, int k);
```

will return the total number of possible arrangements of items in a specific order. There is no custom return type, the function always returns an integer.&#x20;

```cpp
permutations(4, 2); //12
permutations(5, 3); //60
permutations(6, 4); //360
```

{% hint style="warning" %}
This is the definition for "permutations with a subset": $$P(n, k) = \frac{n!}{(n-k)!}$$. For "permutations", use the $$n!$$ formula.&#x20;
{% endhint %}
