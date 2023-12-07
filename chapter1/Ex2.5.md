#### Ex2.5:
Find the sum of the squares of the first $n$ natural numbers.

#### Solution: 
We aim to determine the value of 
$$S(n) = 1^2 + 2^2 + \ldots + n^2$$ 
Similar to Ex 2.3, we can define 

$$S_1(n) = 1 + 2 + \ldots + n$$

$$S_2(n) = S_1(n)$$

This way: 

$$S(n) = S_1(n) \cdot S_2(n) = O(n^4)$$

We can express $S(n)$ as a polynomial: 

$$S(n) = k_4n^4 + k_3n^3 + k_2n^2 + k_1n + k_0$$

Upon solving for the values of $k_0$, $k_1$, $k_2$, $k_3$, and $k_4$ for $n = 1, 2, 3, 4, 5$, we find: 

$$k_0 = 0$$ 

$$k_1 = \frac{1}{6}$$ 

$$k_2 = \frac{1}{2}$$ 

$$k_3 = \frac{1}{3}$$

$$k_4 = 0$$

Therefore, we have:

$$S(n) = \frac{1}{3}n^3 + \frac{1}{2}n^2 + \frac{1}{6}n$$

We will now prove it by induction. For the base case, we have already confirmed that the proposed equation works. 
Assuming it holds for $k$,

$$S(k+1) = S(k) + (k+1)^2 = $$

$$\frac{1}{3}k^3 + \frac{1}{2}k^2 + \frac{1}{6}k + k^2 + 2k + 1 = $$

$$\frac{1}{3}(k^3 + k^2 + k + 1) + \frac{1}{2}(k^2 + 2k + 1) + \frac{1}{6}(k+1) = $$

$$\frac{1}{3}(k+1)^3 + \frac{1}{2}(k+1)^2 + \frac{1}{6}(k+1)$$

And that is exactly what we wanted to proove!
