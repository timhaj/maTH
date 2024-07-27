# Geometric

Represents the number of Bernoulli trials needed to get the first success.

## Create a new Geometric distribution

```cpp
Geometric X = Geometric(p); 
```

creates a discrete Geometric probability distribution.&#x20;

#### Distribution properties:

<table data-full-width="true"><thead><tr><th>Property</th><th>Type/Return type</th><th>Description</th></tr></thead><tbody><tr><td><code>p</code></td><td>double -> [0, 1] </td><td>Probability of a successful trial. </td></tr><tr><td><code>E()</code></td><td>double</td><td>Returns the expected value of executed Bernoulli trials before a successful trial. </td></tr><tr><td><code>D()</code></td><td>double</td><td>Represents variance, that measures the spread of dispersion of the random variable around its expected value E(X).</td></tr><tr><td><code>P(int k)</code></td><td>double</td><td>Probability that the first success occurs on the exactly 𝑘-th trial: <code>P(X = k)</code></td></tr><tr><td><code>P_LT(int k)</code></td><td>double</td><td>Probability that the first success occurs on less than 𝑘-th trials: <code>P(X &#x3C; k)</code></td></tr><tr><td><code>P_LTE(int k)</code></td><td>double</td><td>Probability that the first success occurs on less than or exactly 𝑘-th trials: <code>P(X ≤ k)</code></td></tr><tr><td><code>P_HT(int k)</code></td><td>double</td><td>Probability that the first success occurs on higher than 𝑘-th trials: <code>P(X > k) = P(X ≤ k)</code></td></tr><tr><td><code>P_HTE(int k)</code></td><td>double</td><td>Probability that the first success occurs on higher than or exactly 𝑘-th trials: <code>P(X ≥ k) = P(X &#x3C; k)</code></td></tr></tbody></table>

## Example

{% tabs %}
{% tab title="Example of a geometric distribution" %}
```cpp
//Example: A basketball player has a 20% chance of making a free throw. 
//What's the probability of his first successful free throw on his 4th attempt?
double p = 0.2; //probability of a successful event
Geometric X = Geometric(p);
std::cout << X.P(4) << std::endl; //0.1024
```
{% endtab %}

{% tab title="Common errors" %}
```cpp
Geometric X = Geometric(1.2); // Error: Probability cannot be less than 0 or more than 1.
std::cout << X.P(0) << std::endl; // Error: Number of trials cannot be less than 1. 
```
{% endtab %}
{% endtabs %}

{% hint style="info" %}
**Good to know:** _<mark style="color:orange;">`k`</mark>_ cannot be less than 1 and probability _<mark style="color:purple;">`p`</mark>_ cannot be outside the bounds of \[0, 1].
{% endhint %}
