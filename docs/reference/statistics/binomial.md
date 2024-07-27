# Binomial

Represents the number of successes in a fixed number of independent and identically distributed Bernoulli trials (each trial having two possible outcomes: success or failure)

## Create a new Binomial distribution

```cpp
Binomial X = Binomial(n, p); 
```

creates a discrete Binomial probability distribution.&#x20;

#### Distribution properties:

<table data-full-width="true"><thead><tr><th>Property</th><th>Type/Return type</th><th>Description</th></tr></thead><tbody><tr><td><code>n</code></td><td>int</td><td>Number of executed events</td></tr><tr><td><code>p</code></td><td>double -> [0, 1]</td><td>Probability of a succesful event</td></tr><tr><td><code>E()</code></td><td>double</td><td>Returns the expected value of succesful events after executing <em><mark style="color:green;"><code>n</code></mark></em> independend events, all with constant probability of <em><mark style="color:purple;"><code>p</code></mark></em>.</td></tr><tr><td><code>D()</code></td><td>double</td><td>Represents variance, that measures the spread of dispersion of the random variable around its expected value E(X).</td></tr><tr><td><code>P(int k)</code></td><td>double</td><td>Probability of obtaining exactly 𝑘 successes in 𝑛 trials: <code>P(X = k)</code></td></tr><tr><td><code>P_LT(int k)</code></td><td>double</td><td>Probability of obtaining less than 𝑘 successes in 𝑛 trials: <code>P(X &#x3C; k)</code></td></tr><tr><td><code>P_LTE(int k)</code></td><td>double</td><td>Probability of obtaining less than or exactly 𝑘 successes in 𝑛 trials: <code>P(X ≤ k)</code></td></tr><tr><td><code>P_HT(int k)</code></td><td>double</td><td>Probability of obtaining more than 𝑘 successes in 𝑛 trials: <code>P(X > k) = P(X ≤ k)</code></td></tr><tr><td><code>P_HTE(int k)</code></td><td>double</td><td>Probability of obtaining more than or exactly 𝑘 successes in 𝑛 trials: <code>P(X ≥ k) = P(X &#x3C; k)</code></td></tr></tbody></table>

## Example

{% tabs %}
{% tab title="Example of a binomial distribution" %}
<pre class="language-cpp"><code class="lang-cpp">//Example: what's the probability of getting exactly 5 heads 
<strong>//when flipping a coin 10 times?
</strong>double p = 0.5; //probability of getting heads is 50%
int n = 10; //10 independed events
Binomial X = Binomial(n, p);
std::cout &#x3C;&#x3C; X.P(5) &#x3C;&#x3C; std::endl; //0.246094
</code></pre>
{% endtab %}

{% tab title="Common errors" %}
```cpp
Binomial X = Binomial(25, -0.5); //Error: Probability cannot be less than 0 or more than 1.
std::cout << X.P(30) << std::endl; //Error: The number of succesful trials cannot exceed the number of all trials or be less than 0.  
```
{% endtab %}
{% endtabs %}

{% hint style="info" %}
**Good to know:** _<mark style="color:orange;">`k`</mark>_ cannot exceed the number of executed events and probability _<mark style="color:purple;">`p`</mark>_ cannot be outside the bounds of \[0, 1].
{% endhint %}
