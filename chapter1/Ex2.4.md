Problem:
Find the sum of the series:
$S(n) = \frac{1}{2} + \frac{1}{4} + \ldots + \frac{1}{2^n}$

Solution:

For $n = 1$, $S(1) = \frac{1}{2} = \frac{2^1 - 1}{2^1}$. 

For $n = 2$, $S(2) = \frac{3}{4} = \frac{2^2 - 1}{2^2}$. 

For $n = 3$, $S(3) = \frac{7}{8} = \frac{2^3 - 1}{2^3}.

It seems that $S(n) = \frac{2^n - 1}{2^n}$.

Now, assuming it is true for $S(k)$, we can prove it for $S(k+1$) as follows:

$S(k+1) = S(k) + \frac{1}{2^{k+1}} = \frac{2^k - 1}{2^k} + \frac{1}{2^{k+1}} = $
$\frac{2^{k+1} - 2 + 1}{2^{k+1}} = \frac{2^{k+1} - 1}{2^{k+1}}$

And that's what we wanted to prove!
