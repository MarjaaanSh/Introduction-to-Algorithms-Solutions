#### Ex2.31:

Let $n$ and $m$ be integers such that $1\leq m\leq n$. Prove by induction that

$$n^2 - m(n + 1) + 2n +m^2 \leq n^2 + n \tag{1}$$

(Hint: Use a "two sided" induction on $m$. Prove two base cases, $m = 1$ and $m = n$, and go either forward from $m = 1$ or backward from 
$m = n$.)

#### Solution:

Referring to Theorem 3.1.9 in [Math 127: Induction](https://www.math.cmu.edu/~mradclif/teaching/127S19/Notes/Induction.pdf), which defines 
a two-sided induction hypothesis, we aim to find an integer $g$, such that on one side, we progress forward to the interval boundary, and 
on the other side, we move backward.

Let's simplify equation $(1)$. If it holds, we can rearrange terms to obtain:

$$n + m^2 \leq m(n+1) \tag{2}$$

For base cases $m = 1$ and $m = n$, we have:

$$n + 1 \leq n+1$$

$$n + n^2 \leq n(n+1) = n^2 + n$$

Assuming $(2)$ holds for $m$, we seek to prove it for $m+1$. Thus, we must establish:

$$n + (m+1)^2 \leq (m+1)(n+1) \tag{3}$$

Starting from $(2)$, we aim to transform the left-hand side of $(3)$:

$$n + m^2 + 2m - 2m + 1 - 1 \leq m(n+1) $$

$$n + (m+1)^2 \leq m(n+1) + 2m + 1 \tag{4}$$

To prove $(3)$, it suffices to demonstrate:

$$m(n+1) + 2m + 1 \leq (m+1)(n+1)$$

This inequality holds for $m \leq \frac{1}{2}n$. Thus, starting from $m = \frac{1}{2}n$, and progressing forward to  $m = n$ establishes 
the validity of $(1)$.

Now, assuming $(1)$ holds for $m$, we aim to prove it for $m-1$. Rewriting $(2)$ for $m - 1$, we get:

$$n + (m - 1)^2 \leq (m - 1)(n + 1) \tag{5}$$

Once again, starting from $2$, we aim to adjust the left-hand side of $(5)$:

$$n + m^2 + 1 - 1 - 2m + 2m \leq m(n+1)$$

$$n + (m-1)^2 \leq m(n+1) - 2m - 1 \tag{6}$$

For $(5)$ to hold, we need to prove:

$$m(n+1)-2m-1 \leq (m-1)(n+1) \tag{7}$$

Solving $(7)$, we find $m \geq \frac{1}{2}n$. Utilizing induction in reverse, starting from $m = \frac{1}{2}n$ and proceeding backward until 
$m = 1$, completes the proof.
