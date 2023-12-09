#### Ex2.11:
Find and prove an expression for the some of the $i^{th}$ row of a triangle in which each element of a row is the sum of the three elements 
directly above it.

#### solution:

Let s(i) represent the sum for the $i^{th}$ row. It can be observed that:

$$s(1) = 3^0$$

$$s(2) = 3^1$$

$$s(3) = 3^2$$

$$s(4) = 3^3$$

$$s(5) = 3^4$$

Thus, we can consider the inductive hypothesis as:

$$s(i) = 3^{i-1}$$

For the base case, when $i = 1$, $s(1) = 1$.

Inductive step: We will prove that for the row $i+1$:

$$s(i+1) = 3^{i}$$

Row i has $2i - 1$ elements. Also, the difference between the $e_{(i+1)j}$, which is the $j^{th}$ element in row $i+1$ with its counter part in 
the previous row equals $e_{i(j-1)} + e_{i(j-2)}. Thus, the difference between the sum of the $(i+1)^{th}$ and $i^{th}$ row is:

$$
\begin{aligned}
s(i+1) - s(i) & = 0 + e_{i1} + (e_{i1} + e_{i2}) + (e_{i2}+ e_{i3}) + \dots + (e_{i(2i-3)}+e_{i(2i-2)}) \\
 & + (e_{i(2i-2)} + e{i(2i-1)}) + e_{i(2i-1)} \\
 & = 2 * s(i)
\end{aligned}
$$

Therefore, we can write:

$$s(i+1) = 3 \times s(i)$$

Using our assumption for $s(i)$:

$$s(i+1) = 3 \times 3^{i-1} = 3^i$$

This concludes the proof. 
