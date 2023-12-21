#### Ex2.31:

Let $F(n)$ be the $n_{th}$ Fibonacci number, which is defined inductively as follows: $F(1)=F(2)=1$. $F(n)=F(n-1)+F(n-2)$, for $n>2$. Prove 
that $F(n)^2+F(n+1)^2=F(2n+1)$. (Hint: Strengthen the induction hypothesis by proving two seemingly separate theorems at the same time, 
as is done in the sectionon Gray codes.)

#### Solution:

Base case, $n=1$:

$$F(1)^2+F(1+1)^2= 1 + 1 = 2$$

$$F(2\times1 + 1) = F(3) = 2$$

Thus, the formula holds for the base case.

For inductive step, assume that $F(n)^2+F(n+1)^2=F(2n+1)$ is true for some arbitrary $n$, and we aim to prove it for $n + 1$:

 $$F(n+1)^2+F(n+2)^2=F(2n+3) \tag{1}$$

Starting from the assumption, we create the left handside of equation $(1)$:

$$F(n)^2+F(n+1)^2=F(2n+1)$$

$$F(n)^2+F(n+1)^2 - F(n)^2=F(2n+1) - F(n)^2$$

$$F(n)^2+F(n+1)^2 - F(n)^2 + F(n+2)^2=F(2n+1) - F(n)^2 + F(n+2)^2 $$

Thus, this equation must be true:

$$ F(2n+1) - F(n)^2 + F(n+2)^2 = F(2n+3)$$

which simplifies to:

$$F(2n+3)-F(2n+1) = F(n+2)^2 - F(n)^2$$

This is equivalent to:

$$F(2n+2) = F(n+2)^2 - F(n)^2 \tag{2}$$

Thus, for (1) to be true, (2) should also be true. Assuming (2) is true, we have already proven (1) by induction. Now, assuming (1) is 
true, we aim to prove (2) by induction. 

For $n=1$:

$$F(1+2)^2 - F(1)^2 = 2^2 - 1^2 = 3$$

Which equals $F(2\times1+1) = F(3)$.

We should prove (2) is also true for $n+1$:

$$F(2n+4) = F(n+3)^2 - F(n+1)^2$$

So, we continue by expanding $F(2n+4)$:

$$F(2n+4) = F(2n+3) + F(2n+2)$$

Using $(1)$ as the substitution for $F(2n+3)$ and $(2)$ for $F(2n+2)$:

$$
\begin{aligned}
F(2n+4) &= F(n+1)^2 + F(n+2)^2 + F(n+2)^2 - F(n)^2 \\
& = (F(n+1)^2 -  F(n)^2) + 2F(n+2)^2 \\
& = (F(n+1) + F(n)) (F(n+1) - F(n)) + 2F(n+2)^2 \\
&= F(n+2)(F(n+1) - F(n))+ 2F(n+2)^2 \\
&= F(n+2)(F(n+1) - F(n) + 2F(n+2)) \\
&= F(n+2)(F(n+1) + F(n+2) - F(n) + F(n+2)) \\
&= F(n+2)(F(n+3) - F(n) + F(n+2)) \\
&= F(n+2)(F(n+3) + F(n+1)) \\
&= (F(n+3) - F(n+1))(F(n+3) + F(n+1)) \\
&= F(n+3)^2 - F(n+1)^2
\end{aligned}
$$

And this completes the proof. 

Note that to find the solution of this part, I have used this question on MathExchange:

[question link](https://math.stackexchange.com/questions/2484884/f2n-1-fn-12-fn2-where-fi-is-the-ith-fibonacci-number-for)
