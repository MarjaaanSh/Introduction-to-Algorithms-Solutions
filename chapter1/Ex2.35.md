#### Ex2.35:

Given an undirected graph $G = (V, E)$, a matching is a set of edges no two of which have a vertex in common. A perfect matching is one in 
which all vertices are matched. Construct a graph $G$ with $2n$ vertices and $n^2$ edges such that $G$ has exactly one unique perfect 
matching.

#### Solution: 

Based on the discussion [here](https://stackoverflow.com/questions/16123151/matching-and-perfect-math), this graph can be constructed by 
having two sets of vertices, $A =$<span>{</span>$1, 2, \dots, n$<span>}</span> and 
$B=$<span>{</span>$n+1, n+2, \dots, 2n$<span>}</span> in a way that each vertex in $B$ is connected to its counterpart vertex and all 
the vertices before that in $A$. Mathematically, the edge set can be explained as 
<span>{</span>$(i, i-j) | i \in B \land j \in [i-1, n]$<span>}</span>.

The graph with this edge set has $n + (n-1) + \dots + 1 = \frac{n(n+1)}{2}$ edges. However, we need our graph to have $n^2$ edges. Thus, 
we lack $\frac{n(n-1)}{2}$ edges, which is the number of edges for a complete graph with $n$ vertices. Also, we know that neither of the 
vertices in $A$ or $B$ are connected. Thus, we add <span>{</span>$(i, j) | i, j \in A \lor i, j \in B$<span>}</span> to make a graph with 
$n^2$ edges. 

For proving the graph has a unique matching, for the base case we have $n = 1$, and so 2 vertices with only one edge which have a unique 
perfect matching. Assuming we have $n$ vertices, increasing $n$ by $1$ is equivalent to adding $2$ vertices, like $a \in A$ and $b \in B$. 
Based on our method of construction, $a$ and $b$ should be conncected to all vertices in $A$. However, since we have a unique perfect 
matching for $n$ vertices, to add $a$ and $b$ to our matching, we cannot add any of these edges, since the other side of the edges are 
already in the matching. The only edge for making this matching is the edge between $a$ and $b$. Thus, our perfect matching is again unique, 
which completes the proof. 
