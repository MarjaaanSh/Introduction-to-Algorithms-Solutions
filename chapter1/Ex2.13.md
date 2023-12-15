#### Ex2.13:
Prove that, for all $n>1$:

$$1 + \frac{1}{2} + \frac{1}{3} + ... + \frac{1}{n} = \frac{k}{m}$$

where k is an odd number and m is an even number.

#### Solution:

For base case, $n=2$, the theorem holds:

$$1 + \frac{1}{2} = \frac{3}{2}$$

Assuming it is true for $n$, let's prove it is also true for $n + 1$:

$$
\begin{aligned}
&\frac{k}{m} + \frac{1}{n+1} = \\
&\frac{(n+1)k+m}{m(n+1)}
\end{aligned}
$$

The denominator is always even, as one of its multiplicands, $m$, is even.  

For the numerator, if $(n+1)k$ is even, it would be even as well because $m$ is even. However, if it is odd, the numerator will be odd. Since $k$ is odd, for the numerator to be odd, $n+1$ must be odd, which holds for even values of $n$. This proves the hypothesis 
for even values of $n$. However, if $n$ is odd, we have both the numerator and the denominator as odd numbers. We assume:

$$n + 1 = a \times 2^{t}$$

$$m = b \times 2^p$$

Where $t, p > 0$, and $a, b$ are odd numbers. This way, we can write:

$$
\begin{aligned}
&\frac{a2^t \times k + b \times 2^p}{a \times 2^p \times b \times 2^t} = \\
&\frac{2^t(a+2^{(p-t)b}}{2^{p+t}ab} = \\
&\frac{a+2^{p-t}b}{2^p(ab)}
\end{aligned}$$

The product of any power of two by any number is even. So we have an even denominator. Also, since $a$ is odd, the numerator is odd. Also, since $a$ is odd, the numerator is odd. This compeletes the proof for odd values of $n$.
