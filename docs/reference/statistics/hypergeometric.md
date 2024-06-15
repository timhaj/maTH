# Hypergeometric

Describes the probability of 𝑘 k successes in 𝑛 n draws from a finite population of size 𝑁 N containing exactly 𝐾 K successes, without replacement. It is used when the sample is drawn from a population without replacement, making the trials dependent on each other.

## Create a new Hypergeometric distribution

```cpp
Hypergeometric X = Hypergeometric(K, N, n); 
```

creates a discrete Hypergeometric probability distribution.&#x20;

#### Distribution properties:

<table data-full-width="true"><thead><tr><th>Property</th><th>Type/Return type</th><th>Description</th></tr></thead><tbody><tr><td><code>K</code></td><td>int</td><td>Successes in population.</td></tr><tr><td><code>N</code></td><td>int</td><td>Population size. </td></tr><tr><td><code>n</code></td><td>int</td><td>Sample size.</td></tr><tr><td><code>E()</code></td><td>double</td><td>Returns the expected value of success items from a sample size n, from a population size N.</td></tr><tr><td><code>D()</code></td><td>double</td><td>Represents variance, that measures the spread of dispersion of the random variable around its expected value E(X).</td></tr><tr><td><code>P(int k)</code></td><td>double</td><td>Probability of getting exactly 𝑘 successes in 𝑛 draws from a population of size 𝑁 with 𝐾 successes: <code>P(X = k)</code></td></tr><tr><td><code>P_LT(int k)</code></td><td>double</td><td>Probability of getting less than 𝑘 successes in 𝑛 draws from a population of size 𝑁 with 𝐾 successes: <code>P(X &#x3C; k)</code></td></tr><tr><td><code>P_LTE(int k)</code></td><td>double</td><td>Probability of getting less than or exactly 𝑘 successes in 𝑛 draws from a population of size 𝑁 with 𝐾 successes: <code>P(X ≤ k)</code></td></tr><tr><td><code>P_HT(int k)</code></td><td>double</td><td>Probability of getting more than 𝑘 successes in 𝑛 draws from a population of size 𝑁 with 𝐾 successes: <code>P(X > k) = P(X ≤ k)</code></td></tr><tr><td><code>P_HTE(int k)</code></td><td>double</td><td>Probability of getting more than or exactly 𝑘 successes in 𝑛 draws from a population of size 𝑁 with 𝐾 successes: <code>P(X ≥ k) = P(X &#x3C; k)</code></td></tr></tbody></table>

## Example

{% tabs %}
{% tab title="Example of a hypergeometric distribution" %}
```cpp
//Example: Suppose you have a jar containing 15 marbles: 10 red marbles 
//(successes) and 5 blue marbles (failures). You draw 5 marbles without 
//replacement and want to find the probability of drawing exactly 3 red marbles
int K = 10; //4 successful items (red marbles)
int N = 15; //total population size
int n = 5; //sample size of 5
Hypergeometric X = Hypergeometric(K, N, n);
std::cout << X.P(3) << std::endl; //0.3996
```
{% endtab %}

{% tab title="Common errors" %}
```cpp
Hypergeometric X = Hypergeometric(5, 15, 2);
std::cout << X.P(-1) << std::endl; //Error: Number of successes in sample cannot be less than 0 or more than the sample size or more than the number of successes in population.
```
{% endtab %}
{% endtabs %}

{% hint style="info" %}
**Good to know:** _<mark style="color:orange;">`k`</mark>_ cannot be negative and has a max value of **`min(n, K)`**.
{% endhint %}
