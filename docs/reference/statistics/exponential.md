# Exponential

Represents the time between events in a Poisson process, where events occur continuously and independently at a constant average rate.

{% hint style="warning" %}
Don't get confused with Poisson distribution! One measures how many events happen in a given time frame, and the other measures the time between two independed events.
{% endhint %}

## Create a new Exponential distribution

```cpp
Exponential X = Exponential(lambda); 
```

creates a continuous Exponential probability distribution.&#x20;

#### Distribution properties:

<table data-full-width="true"><thead><tr><th>Property</th><th>Type/Return type</th><th>Description</th></tr></thead><tbody><tr><td><code>lambda (λ)</code></td><td>double</td><td>Events occur continuously and independently at a constant average rate.</td></tr><tr><td><code>E()</code></td><td>double</td><td>Returns the expected value of average time between two events. </td></tr><tr><td><code>D()</code></td><td>double</td><td>Represents variance, that measures the spread of dispersion of the random variable around its expected value E(X).</td></tr><tr><td><code>P(int k)</code></td><td>double</td><td>The cumulative distribution function: <code>P(X &#x3C; k)</code></td></tr></tbody></table>

{% hint style="info" %}
In continuous probability distributions, P(X = k) = 0.&#x20;
{% endhint %}

## Example

{% tabs %}
{% tab title="Example of a exponential distribution" %}
```cpp
//Example: The average number of clients is 15 students per hour. What is the 
//probability that you will have to wait not more than 3 minutes for a client 
//to appear?
double lambda = 0.25; //15 students per hour -> 1 client per 4 minutes. 
Exponential X = Exponential(lambda);
std::cout << X.P(3) << std::endl; //0.527633
```
{% endtab %}

{% tab title="Common errors" %}
```cpp
Exponential X = Exponential(0.125); 
std::cout << X.P(-1) << std::endl; //Error: Number of events cannot be less than 0.  
```
{% endtab %}
{% endtabs %}

{% hint style="info" %}
**Good to know:** _<mark style="color:orange;">`k`</mark>_ cannot be negative.&#x20;
{% endhint %}
