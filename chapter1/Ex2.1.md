#### Ex2.1: 
Proof of:

$$(x - y) | (x^{k+1} - y^{k+1})$$

### Solution:
We want to prove that if $x^n - y^n$ is divisible by $x - y$ for some positive integer $n$, then $x^{n+1} - y^{n+1}$ is
also divisible by $x - y$. We will use mathematical induction to prove this.

The base case is given as:

$$x^1 - y^1 = x - y$$

This shows that for $k = 1$, $x^k - y^k$ is divisible by $x - y$.

Inductive Step: Assuming that for some positive integer $k$, $x^k - y^k$ is divisible by $x - y$, we will prove that this implies $x^{k+1} - y^{k+1}$ is also divisible by $x - y$.

We start with the expression $x^{k} - y^{k}$ and multiply it by $x + y$:

$$(x^k - y^k) \cdot (x + y) = x^{k+1} - xy^k + yx^k - y^{k+1} = x^{k+1} - y^{k+1} + xy(x^{k-1} - y^{k-1})$$

The left side of the above expression is divisible by $(x - y)$. Additionally, based on the assumption that it 
is true for $k$, we can infer that it is also true for $(k - 1)$. So the term $xy(x^{k-1} - y^{k-1})$ is also divisible by
$x - y$. Therefore, $x^{k+1} - y^{k+1}$ should be divisible by $x - y$, which is the desired result we aim to prove.
