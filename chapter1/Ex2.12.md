#### Ex2.12

Prove that, for all $n > 1$:

$$\frac{1}{n+1} + \frac{1}{n+2} + \ldots + \frac{1}{2n} > \frac{13}{24}$$

#### Solution:

We begin by establishing the base case for $k = 2$:

$$\frac{1}{2+1} + \frac{1}{2+2} > \frac{13}{24}$$

This inequality is true.

Now, assuming the given inequality holds for $k > 2$, we aim to prove it for $k+1$.

Let $A$ represent the left side of the inequality for $k$:

$$A = \frac{1}{k+1} + \frac{1}{k+2} + \ldots + \frac{1}{k+k}$$

For $k+1$, the left side can be expressed as:

$$
\begin{aligned}
B &= \frac{1}{k+1+1} + \frac{1}{k+1+2} + \ldots + \frac{1}{k+1+k-1} + \frac{1}{k+1+k} + \frac{1}{k+1+k+1}\\
  &= \frac{1}{k+2} + \frac{1}{k+3} + \ldots + \frac{1}{k+k} + \frac{1}{2k+1} + \frac{1}{2k+2}
\end{aligned}
$$

The relation between $A$ and $B$ can then be written as:

$$
\begin{aligned}
B &= A - \frac{1}{k+1} + \frac{1}{2k+1} + \frac{1}{2k+2} \\
  &= A + \frac{1}{(2k+2)(2k+1)}
\end{aligned}
$$

Since $\frac{1}{(2k+2)(2k+1)} > 0$, it follows that $B > A$. Based on the assumption that $A>\frac{13}{24}$, we conclude that 
$B>\frac{13}{24}$, thereby completing the proof.


