#### Ex2.10:

Find and prove an expression for the some of the $i^{th}$ row of Pascal triangle. In this triangle, each entry is the sum of the two entries 
directly above it, and the sides of the triangle are 1s. 

#### solution:

If s(i) is the sum for the $i^{th}$ row, it could be observed that:

$$s(1) = 2^0$$

$$s(2) = 2^1$$

$$s(3) = 2^2$$

$$s(4) = 2^3$$

$$s(5) = 2^4$$

Thus, we can consider the inductive hypothesis as:

$$s(i) = 2^{i-1}$$

Base case, $i = 1$, $s(1) = 1$, holds.

Inductive step: We will prove that for the row $i+1$:

$$s(i+1) = 2^{i}$$

Row i has i elements. The difference between the $e_{(i+1)j}$, which is the $j^{th}$ element in row $i+1$ with its counter part in 
the previous row equals e_{i(j-1)}. Thus, the difference between the sum of the $(i+1)^{th}$ and $i^{th}$ row is:

$$s(i+1) - s(i) = 0 + e_{i1} + e_{i2} + ... + e_{ii} + 1 = s(i)$$

Therefore, we can write:

$$s(i+1) = 2 \times s(i)$$

Using our assumption for $s(i)$:

$$s(i+1) = 2 \times 2^{i-1} = 2^i$$

Which concludes the proof. 
