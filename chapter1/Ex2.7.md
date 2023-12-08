#### Ex2.7
Prove that there are two numbers in a set of $n+1$ numbers out of the first $2n$ natural numbers, one of which devides the other. 

#### Solution:

For $n = 1$, consider the set {1, 2}. Here, 1 divides 2, and the base case holds.

Inductive hypothesis: 

Assume that for some positive integer $k$, there exist two numbers in the set of $k + 1$ numbers chosen from 1, 2, ..., 2k-1, 2k, where one divides the other.

Inductive step:

Now, consider $n = k + 1$. We aim to show that there exist $a$ and $b$ in set $A$, containing $k + 2$ numbers from ${1, 2, ..., 2k, 2k+1, 2k+2}$, such that $a | b$.
 

We explore three cases:

1. If $max(A) = 2k$, the inductive hypothesis implies the existence of two such numbers, completing the proof.

2. If $max(A) > 2k$ and only one of $2k+1$ or $2k+2$ is in $A$, removing them leaves us with set $B$ containing $k+1$ numbers selected from the first $2k$ integers. The inductive hypothesis then completes the proof.

3. If $max(A) > 2k$ and both $2k+1$ and $2k+2$ are in $A$, two sub-cases arise:
   
    a. If $k+1$ is in $A$, then $k+1 | 2k + 2$, and the proof is complete.
  
    b. If $k+1$ is not in $A$, replace $2k+2$ with $k+1$, creating set $B$. Now, prove that there exist $a$ and $b$ in $B$ such that $a | b$. If $b \neq k+1$, the proof is complete as $a$ and $b$ belong to $A$. If $b = k + 1$, then $a | (k+1)$, and $(k+1) | (2k+2)$, implying        $a | (2k+2)$. Note that $a$ cannot be $k+1$ since the first number it divides is $2k+2$, which is not in the set.


Thus, the inductive hypothesis is proven.

To find the proof of the third case, I referred to this link:

[Ex2.7 - StackExchange]([https://math.stackexchange.com/questions/1493253/prove-using-induction-that-from-a-set-of-n1-numbers-from-1-2-2n-at-l])
