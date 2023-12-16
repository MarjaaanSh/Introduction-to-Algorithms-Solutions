#### Ex2.26:

Let $d_1, d_2, \dots, d_n, n \geq 2$, be positive integers. Prove that, if: 

$$d_1 + d_2 + ... + d_n = 2n - 2$$

then there exists a tree with $n$ vertices whose degrees are exactly $d_1, d_2, \dots, d_n$.

#### Solution:

The base case is a tree with $e = 1$ edge, where the equation holds.

Assume the statement is true for a tree with $e$ edges. When adding another edge, $l$, to this tree, we must introduce a new vertex. If not, 
connecting existing vertices, say $a$ and $b$, would create a cycle, violating the tree definition. Therefore, we add a vertex with a 
degree of one. Additionally, we increase the degree of another vertex by one. This adjustment preserves the equation since it increments 
both sides by two.

By induction, the statement holds for all $n \geq 2$. Thus, there exists a tree with $n$ vertices whose degrees are precisely 
$d_1, d_2, \dots, d_n$.
