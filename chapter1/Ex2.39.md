#### Ex2.39:

Design an algorithm to convert a binary number to a decimal number. The algorithm should be the opposite of algorithm 
*Convert_to_Binary*.The input is an array of bits $b$ of length $k$, and the output is a number $n$. Prove the correctness of your 
algorithm by using a loop invariant.

#### Solution:

```
Convert_to_decimal(b, k):

# Input = b, an array of bits of length k
# Output = a number, decimal representation of b

begin
  dec = 0
  i = k
  while i > 0:
    dec = dec * 2 + b[i]
    i = i - 1
end

return dec
```

The algorithm has been written reading [this link](/http://www.im.ntu.edu.tw/~tsay/dokuwiki/lib/exe/fetch.php?media=courses:alg2011:hw2s.pdf).

To prove using a loop invariant, we should consider two parts. First, the part of the array that we just iterated over, which is saved to 
$dec$, and second, the remaining part from index $i$ to $1$, which we consider its decimal representation as $m$. At the end of the loop 
when we have visited index $i$, we can write $n$ as:

$$n = dec \times 2^i + m$$

When the loop is not started, $i = k$ and $dec = 0$. Thus, we have $n = m$, as expected.

When the loop is finished, $i = 0$ and we have no remaining part, so $m = 0$. Thus, $n = dec$, again as expected.

When $i$ is decreased by $1$, we have two cases:

  1. If $b[i-1] = 0$, then $dec_{i - 1} = 2dec_i + 0$. Also, $m_{i-1} = m_i$. So we can write:

$$
\begin{aligned}
n &= dec_{i} \times 2^{i-1} \times 2 + m_i \\
  &= \frac{1}{2} dec_{i - 1} \times 2^{i-1} \times 2 + m_{i-1} \\
  &= dec_{i - 1} \times 2^{i-1} + m_{i-1}
\end{aligned}
$$

  2. If $b[i-1] = 1$, then $dec_{i - 1} = 2dec_i + 1$. Also, $m_{i-1} = m_i - 2^{i-1}$. So we can write:

$$
\begin{aligned}
n &= dec_{i} \times 2^{i-1} \times 2 + m_i \\
  &= \frac{1}{2} (dec_{i - 1} - 1) \times 2^{i-1} \times 2 + m_{i-1} + 2^{i-1} \\
  &= dec_{i - 1} \times 2^{i-1} + m_{i-1}
\end{aligned}
$$

Thus, in both cases, the algorithm successfully works.
