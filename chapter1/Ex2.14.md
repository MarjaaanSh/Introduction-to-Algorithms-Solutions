#### Ex2.14:

Prove that any positive integer can be written as a sum of distinct numbers from this series:

$$1, 2, 3, 4, 5, 10, 20, 40, \dots$$

#### Solution:

For base case, where n = 1, it holds true.

Induction hypothesis: Assum that it holds for k, lets show that it also holds for k+1.

If it holds for k, then because in the series, excluding the first four terms, the remaining terms are in the form of $5\times2^x$, where
$x$ is any positive integer, then we can express $k$ as:

$$k = 5\times2^x + r$$

where $r < 5$. 

Thus: 

$$k + 1 = 5\times2^x + r + 1$$

Two cases may occure:

  a. If $r + 1 < 5$, then we can use previously used numbers along with one of the first four numbers to write $k+1$.

  b. If $r+1 = 5$, then if 5 is already used for making $k$, now we have $2\times5$, and if again 10 is already used, we have $2\times10$, and
we continue this process until we reach a point where we have not used the newly made number.
