# Pascal

Represents the number of trials required to achieve a specified number of successes in a sequence of independent and identically distributed Bernoulli trials. It generalizes the geometric distribution, which models the number of trials needed for a single success.

## Create a new Pascal distribution

```cpp
Pascal X = Pascal(r, p); 
```

creates a discrete Pascal probability distribution.&#x20;

#### Distribution properties:

<table data-full-width="true"><thead><tr><th>Property</th><th>Type/Return type</th><th>Description</th></tr></thead><tbody><tr><td><code>r</code></td><td>int</td><td>Number of successes needed. </td></tr><tr><td><code>p</code></td><td>double -> [0, 1] </td><td>Probability of a successful trial. </td></tr><tr><td><code>E()</code></td><td>double</td><td>Returns the expected value of executed Bernoulli trials before hitting <code>r</code> successful trials. </td></tr><tr><td><code>D()</code></td><td>double</td><td>Represents variance, that measures the spread of dispersion of the random variable around its expected value E(X).</td></tr><tr><td><code>P(int k)</code></td><td>double</td><td>Probability of observing the 𝑟-th success on the exactly 𝑘-th trial: <code>P(X = k)</code></td></tr><tr><td><code>P_LT(int k)</code></td><td>double</td><td>Probability of observing the 𝑟-th success on the on less than 𝑘-th trials: <code>P(X &#x3C; k)</code></td></tr><tr><td><code>P_LTE(int k)</code></td><td>double</td><td>Probability of observing the 𝑟-th success on the on less than or exactly 𝑘-th trials: <code>P(X ≤ k)</code></td></tr><tr><td><code>P_HT(int k)</code></td><td>double</td><td>Probability of observing the 𝑟-th success on the on more than 𝑘-th trials: <code>P(X > k) = P(X ≤ k)</code></td></tr><tr><td><code>P_HTE(int k)</code></td><td>double</td><td>Probability of observing the 𝑟-th success on the on more than or exactly 𝑘-th trials: <code>P(X ≥ k) = P(X &#x3C; k)</code></td></tr></tbody></table>

## Example

{% tabs %}
{% tab title="Example of a pascal distribution" %}
```cpp
//Example: A basketball player has a 20% chance of making a free throw. 
//What's the probability of his 3rd successful free throw on his 10th attempt?
int r = 3; //number of successful events
double p = 0.2; //probability of a successful event
Pascal X = Pascal(r, p);
std::cout << X.P(10) << std::endl; //0.060398
```
{% endtab %}

{% tab title="Common errors" %}
```cpp
Pascal X = Pascal(5, 0.2); //Error: Probability cannot be less than 0 or more than 1.
std::cout << X.P(2) << std::endl; //Error: Number of trials cannot be less than the number of required successful trials. 
```
{% endtab %}
{% endtabs %}

{% hint style="info" %}
**Good to know:** _<mark style="color:orange;">`k`</mark>_ cannot be less than <mark style="color:red;">**the number of required**</mark> successful trials and probability _<mark style="color:purple;">`p`</mark>_ cannot be outside the bounds of \[0, 1].
{% endhint %}
