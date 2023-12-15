#### Ex2.8:
Prove:

$$2^{n-1}(a^n + b^n) \geq (a+b)^n$$

#### Solution:
Base case: 

Let's start with the base case, where $n$ is equal to 1:

$$2^{1-1}(a^1+b^1) \geq (a+b)^1$$

Which is correct.

Assuming it is true for $k$, we want to prove it for $k+1$:

$$2^{k-1}(a^k + b^k) \geq (a+b)^k$$

Now, we can proceed to prove the inequality for $k+1$:

$$2^{k-1}(a^k + b^k)(a+b) \geq (a+b)^{k+1}$$

Expanding the left-hand side:

$$2^{k-1}(a^{k+1} + b^{k+1} + ab^k + ba^k) \geq (a+b)^{k+1}$$

To establish our proof, we need to show that:

$$2^k(a^{k+1} + b^{k+1}) \geq 2^{k-1}(a^{k+1} + b^{k+1} + ab^k + ba^k)$$

Simplifying further:

$$2(a^{k+1} + b^{k+1}) \geq (a^{k+1} + b^{k+1} + ab^k + ba^k)$$

$$a^{k+1} + b^{k+1} - ab^k + ba^k \geq 0$$

Factoring out common terms:

$$a^k(a-b) - b^k(a-b) \geq 0$$

Finally, we can rewrite the inequality as:

$$(a-b)(a^k - b^k) \geq 0$$

This completes the proof.

Note that I used this link to find the solution to this question. :)

[Ex2.8 - StackExchange](https://math.stackexchange.com/questions/696917/prove-that-for-all-n-in-mathbbn-2n-1an-bn-ge-a-bn)

