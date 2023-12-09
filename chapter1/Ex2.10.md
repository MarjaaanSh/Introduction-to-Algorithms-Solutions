#### Ex2.10:

Find and prove an expression for the some of the $i^{th}$ row of Pascal triangle. In this triangle, each entry is the sum of the two entries 
directly above it, and the sides of the triangle are 1s. 

#### Solution:

Let s(i) represent the sum for the $i^{th}$ row. It can be observed that:

$$s(1) = 2^0$$

$$s(2) = 2^1$$

$$s(3) = 2^2$$

$$s(4) = 2^3$$

$$s(5) = 2^4$$

Thus, we can consider the inductive hypothesis as:

$$s(i) = 2^{i-1}$$

For the base case, when $i = 1$, $s(1) = 1$.

Inductive step: We will prove that for the row $i+1$:

$$s(i+1) = 2^{i}$$

Row i has i elements. Also, the difference between the $e_{(i+1)j}$, which is the $j^{th}$ element in row $i+1$ with its counter part in 
the previous row equals e_{i(j-1)}. Thus, the difference between the sum of the $(i+1)^{th}$ and $i^{th}$ row is:

$$s(i+1) - s(i) = 0 + e_{i1} + e_{i2} + ... + e_{ii} + 1 = s(i)$$

Therefore, we can write:

$$s(i+1) = 2 \times s(i)$$

Using our assumption for $s(i)$:

$$s(i+1) = 2 \times 2^{i-1} = 2^i$$

This concludes the proof. 
