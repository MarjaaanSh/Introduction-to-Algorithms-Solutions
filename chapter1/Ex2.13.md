#### Ex2.13:
Prove that, for all $n>1$:

$$1 + \frac{1}{2} + \frac{1}{3} + ... + \frac{1}{n} = \frac{k}{m}$$

where k is an odd number and m is an even number.

#### Solution:

We will solve this question for even and odd values of $n$ seperately.


1. $n$ is even:
      a. For base case, $n=2$, the theorem holds.
         $$1 + 1/2 = 3/2$$
      b. Induction hypothesis: Assuming it is true for an even value of $n = k$, lets prove it is also true for $n = k + 2$:

$$
\begin{aligned}
&\frac{k}{m} + \frac{1}{n+1} + \frac{1}{n+2} = \\
&\frac{k}{m} + \frac{2n+3}{n^2+3n+2} = \\
&\frac{k(n^2+3n+2) + m(2n+3)}{m(n^2+3n+2)}
\end{aligned}
$$

For denuminator, m is even and so denuminator is even. 
If n is even, 
