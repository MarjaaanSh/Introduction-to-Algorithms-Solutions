Problem: Find the sum of:

\[S(n) = 1\cdot2 + 2\cdot3 + \ldots + n\cdot(n+1)\]

Solution:

If we define $S_1(n)$ and $S_2(n)$ as follows:

\[S_1(n) = 1 + 2 + \ldots + n = \frac{n(n+1)}{2}\]
\[S_2(n) = 2 + 3 + \ldots + (n+1) = \frac{(n+1)(n+2)}{2} - 1\]

We can express $S(n)$ as:

\[S(n) < S_1(n) \cdot S_2(n) = \mathcal{O}(n^4)\]

We can consider $S(n)$ as a polynomial of degree 4:

\[S(n) = k_4n^4 + k_3n^3 + k_2n^2 + k_1n + k_0\]

For $n = 1, 2, 3, 4, 5$ we have $S(n)=2,8,20,40,70$. After solving a system of five equations with five unknowns, 
we find the coefficients as:

\[k_4 = 0, \quad k_3 = \frac{1}{3}, \quad k_2 = 1, \quad k_1 = \frac{2}{3}, \quad k_0 = 0\]

Now, we can use mathematical induction to prove the generality of our solution. We have already shown it for 
the base case. Assuming it is true for $n = k$, for $n = k + 1$, we have:

\[S(k+1) = S(k) + (k+1)(k+2) = \frac{1}{3}k^3 + k^2 + \frac{2}{3}k + (k+1)(k+2) = \frac{1}{3}(k^3 + 3k^2 + 3k + 1) + (k^2 + 2k + 1) + \frac{2}{3}(k+1) = \frac{1}{3}(k+1)^3 + (k+1)^2 + \frac{2}{3}(k+1)\]

And thus, we have successfully solved the problem!
