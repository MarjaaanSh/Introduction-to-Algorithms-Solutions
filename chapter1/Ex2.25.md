#### Ex2.25:
Given a tree $T$ and $k$ subtrees of $T$ such that each pair of subtrees has at least one vertex in common, prove that there is at least one 
vertex in common to all the subtrees.


#### Solution:

Let's assume the pairwise property for $k$ subtrees of $T$, each containing $n$ vertices. If one of the $k$ subtrees has only one vertex, 
it serves as the common vertex for all subtrees, and the proof is complete. Therefore, we consider cases where each subtree has at least 
two vertices.

We proceed by induction on the number of vertices. Begin by removing a leaf node $v$ from $T$ to create $T^\prime$. Our goal is to prove 
that the pairwise property holds for the $k$ subtrees in $T^\prime$ with $n-1$ vertices.

If $v$ is not the common vertex between any two subtrees of $T$, removing it does not disrupt the pairwise property for $T^\prime$. If $v$ 
is the only common vertex between any two pairs of subtrees in $T$, its degree should be at least two, which contradicts the definition of 
a leaf. Thus, there must be another common vertex between those two subtrees, preserving the pairwise property upon removing $v$. By the 
induction hypothesis, the $k$ subtrees of $T^\prime$ have at least one vertex in common.

Now, reintroduce the removed leaf node $v$. Since the vertices of subtrees in $T^\prime$ are a subset of the vertices of subtrees in $T$, 
they share at least one vertex in common. Therefore, the $k$ subtrees of $T$ also have at least one common vertex, and the proof is complete.
