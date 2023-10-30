Problem: Prove

\[
1^2 - 2^2 + 3^2 + \ldots + (-1)^{k-1}k^2 = (-1)^{k+1}\frac{k(k+1)}{2}
\]

Solution:

The base case is when \(k=1\), and we have:

\[
1 = (-1)^2\cdot\frac{1\cdot2}{2} = 1.
\]

Assuming the statement is true for each \(k\), we can write:

\[
S(k+1) = (-1)^{k+1}\frac{k(k+1)}{2} + (-1)^{k+1-1}(k+1)^2.
\]

If \(k\) is odd, then \(k+1\) is even, thus:

\[
S(k+1) = \frac{k(k+1)}{2} - (k+1)^2 = (-1)(k+1)(k+2)/2 = (-1)^k(k+1)(k+2)/2.
\]

If \(k\) is even, then \(k+1\) is odd, thus:

\[
S(k+1) = -\frac{k(k+1)}{2} + (k+1)^2 = \frac{k(k+1)}{2} = (-1)^k\frac{k(k+1)}{2}.
\]

This concludes the proof.
