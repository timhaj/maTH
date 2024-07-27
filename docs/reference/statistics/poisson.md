# Poisson

Represents the number of events occurring within a fixed interval of time or space. It is used for modeling the number of times an event happens in a given period of time, distance, area, or volume when these events occur with a known constant mean rate and independently of the time since the last event.

## Create a new Poisson distribution

```cpp
Poisson X = Poisson(lambda); 
```

creates a discrete Poisson probability distribution.&#x20;

#### Distribution properties:

<table data-full-width="true"><thead><tr><th>Property</th><th>Type/Return type</th><th>Description</th></tr></thead><tbody><tr><td><code>lambda (λ)</code></td><td>double</td><td>Average number of events in the interval (also known as the rate parameter)</td></tr><tr><td><code>E()</code></td><td>double</td><td>Returns the expected value of average number of events in the interval. </td></tr><tr><td><code>D()</code></td><td>double</td><td>Represents variance, that measures the spread of dispersion of the random variable around its expected value E(X).</td></tr><tr><td><code>P(int k)</code></td><td>double</td><td>Probability of observing exactly 𝑘 events in an interval: <code>P(X = k)</code></td></tr><tr><td><code>P_LT(int k)</code></td><td>double</td><td>Probability of observing less than 𝑘 events in an interval: <code>P(X &#x3C; k)</code></td></tr><tr><td><code>P_LTE(int k)</code></td><td>double</td><td>Probability of observing less than or exactly 𝑘 events in an interval: <code>P(X ≤ k)</code></td></tr><tr><td><code>P_HT(int k)</code></td><td>double</td><td>Probability of observing more than 𝑘 events in an interval: <code>P(X > k) = P(X ≤ k)</code></td></tr><tr><td><code>P_HTE(int k)</code></td><td>double</td><td>Probability of observing more than or exactly 𝑘 events in an interval: <code>P(X ≥ k) = P(X &#x3C; k)</code></td></tr></tbody></table>

## Example

{% tabs %}
{% tab title="Example of a poisson distribution" %}
```cpp
//Example: A bookstore expects 3 visitors per hour. What's the probability 
//of encountering 5 visitors in an hour?
double lambda = 3; //3 visitors per hour
Poisson X = Poisson(lambda);
std::cout << X.P(5) << std::endl; //0.100819
```
{% endtab %}

{% tab title="Common errors" %}
```cpp
Poisson X = Poisson(5); 
std::cout << X.P(-1) << std::endl; //Error: Random variable cannot be less than 0.  
```
{% endtab %}
{% endtabs %}

{% hint style="info" %}
**Good to know:** _<mark style="color:orange;">`k`</mark>_ cannot be negative.&#x20;
{% endhint %}
