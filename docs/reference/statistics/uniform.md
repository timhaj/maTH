# Uniform

Assigns equal probability to all outcomes within a specified range. It is characterized by two parameters: 𝑎 (the minimum value of the range) and 𝑏 (the maximum value of the range)

## Create a new Uniform distribution

```cpp
Uniform X = Uniform(a, b); 
```

creates a continuous Uniform probability distribution.&#x20;

#### Distribution properties:

<table data-full-width="true"><thead><tr><th>Property</th><th>Type/Return type</th><th>Description</th></tr></thead><tbody><tr><td><code>a</code></td><td>double</td><td>Minimum value of the range.</td></tr><tr><td><code>b</code></td><td>double</td><td>Maximum value of the range.</td></tr><tr><td><code>E()</code></td><td>double</td><td>Returns the expected value of the range. </td></tr><tr><td><code>D()</code></td><td>double</td><td>Represents variance, that measures the spread of dispersion of the random variable around its expected value E(X).</td></tr><tr><td><code>P(int k)</code></td><td>double</td><td>The cumulative distribution function: <code>P(X &#x3C; k)</code></td></tr></tbody></table>

{% hint style="info" %}
In continuous probability distributions, P(X = k) = 0.&#x20;
{% endhint %}

## Example

{% tabs %}
{% tab title="Example of a uniform distribution" %}
<pre class="language-cpp"><code class="lang-cpp">//Example: for a range [2, 5], whats the probability of getting the number 3?
<strong>double a = 2; //min. of range
</strong>double b = 5; //max. of range
Uniform X = Uniform(a, b);
std::cout &#x3C;&#x3C; X.P(3) &#x3C;&#x3C; std::endl; //0.333333
</code></pre>
{% endtab %}

{% tab title="Common errors" %}
```cpp
Uniform X = Uniform(5, 10); 
std::cout << X.P(11) << std::endl; //Error: Given value cannot be anything outside of [a, b].  
```
{% endtab %}
{% endtabs %}

{% hint style="info" %}
**Good to know:** _<mark style="color:orange;">`k`</mark>_ has to be within \[a, b]
{% endhint %}
