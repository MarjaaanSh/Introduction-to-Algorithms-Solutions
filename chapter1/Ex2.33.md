#### Problem:

A bridge in an undirected graph is an edge whose removal disconnects the graph. Let $G = (V, E)$ be a connected undirected graph without a 
bridge. Prove that $G$ has the following "ear decomposition". The edges of $G$ can be partitioned into disjoint sets $E_1, E_2, \dots, E_k$, 
such that $E_1$ is a cycle, and, for each $i$, $1 < i \leq k$, $E_i$ is a path whose endpoints are vertices that already appear in a 
previous $E_j$, $j < i$ , and its other vertices (if any) have not appeared in previous $E_j$s. (The path may be a closed one, in which case 
it includes only one previous vertex.)

#### Solution:

Let's establish the base case with $E_1,$ which is a cycle and inherently lacks any bridges. Assuming an ear decomposition $E_1, 
E_2, \dots, E_k$ for a subgraph of $G$, we aim to construct $E_{k+1}.$

To form $E_{k+1}$, we choose an unused edge, $e$, with one of its vertices in the existing subgraph. This selection is feasible since the 
absence of such an edge would result in at least two components, contradicting the assumed connectivity of $G$.

Continuing the process, we select unused edges to create a path that terminates at one of the vertices in the subgraph. If the path 
concludes at a newly added vertex, it must be the initial vertex to prevent the formation of a bridge. Alternatively, if the path ends at a 
vertex in the existing subgraph, it ensures that it is part of a cycle, avoiding the creation of a bridge.

For more information and a sumemrized overview, you can read [Euler's Formula](https://ics.uci.edu/~eppstein/junkyard/euler/ear.html)
