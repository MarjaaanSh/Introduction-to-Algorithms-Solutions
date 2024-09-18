#### Ex3.1: 

Prove that, if $f(n) = o(g(n))$, then $f(n) = O(g(n))$. Is opposite true?

#### Solution:

$$f(n) = o(g(n)) \Rightarrow \lim_{{n \to \infty}} \frac{f(n)}{g(n)} = 0 \Rightarrow \\
 |\frac{f(n)}{g(n)} - 0 | \leq \epsilon \Rightarrow \\
f(n) \leq \epsilon \cdot g(n) \Rightarrow \\
f(n) = O(g(n))$$

The opposite is not true, assume: $f(n) = n^2$ and $g(n) = 2\cdot n^2$.
