#### Ex2.29:

The pigeonhole principle (in its simplest variation) states the following: If $n+1$ balls ($n≥1$) are put inside $n$ boxes, then at least 
one box will contain more than one ball. Prove this principle by induction.

#### Solution:

The base case, $n = 1$, is when we have 2 balls to place inside 1 box. It is evident that this box should contain more than one ball.

Assume we place $k+1$ balls inside $k$ boxes, and at least one of the boxes contains more than one ball.

We want to prove the same for $k+1$ boxes. In this case, we have $k+2$ balls and $k+1$ boxes. Based on the induction hypothesis, we can 
distribute $k+1$ balls among $k$ boxes, with at least one of them having more than one ball. Now, we have $(k+2)-(k+1)=1$ ball to put into
$k+1-k = 1$ box, which we can easily do, with at least one of the first $k$ boxes having more than one ball, and the proof is now complete.
