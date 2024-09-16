#### Ex3.1: 

Prove that, if $P(n)$ is a polynomial in $n$,then $O(\log(P(n))) = O(\log(n))$.


#### Solution:

Assuming the polynomial degree is $d$, then we can write:

$$P(n) \leq n^{(d+1)} \rightarrow \log(P(n)) \leq (d+1)\log(n) \rightarrow \log(P(n)) = O(\log(n)) \rightarrow O(\log(P(n))) = O(O(\log(n))) = O(\log(n))$$
