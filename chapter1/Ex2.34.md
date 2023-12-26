#### Ex2.34:

Let $K_n$ denote the complete undirectedgraph with $n$ vertices (namely, every two vertices are connected), and let $n$ be an even number. 
Prove that the edges of $K_n$ can be partitioned into exactly $n/2$ spanning trees. (A spanning tree is a connected subgraph that contains 
all vertices and no cycles.)

#### Solution:

As a base case, for $n=2$, there is only one spanning tree connecting the two vertices.

Assuming the theorem holds for $n=2k$, where there are $k$ spanning trees, each with $2k-1$ edges. Now, consider adding two vertices, $u$ 
and $v$, to create a complete graph $K_{2k+2}$. This addition introduces $4k+1$ edges that were not present in the previous spanning trees.

To prove the theorem for $n = 2k + 2$, we aim to have $k+1$ spanning trees, each with $2k+1$ edges. To achieve this, two of the new edges 
should be added to each existing spanning tree to connect $u$ and $v$ to the existing tree. Additionally, a new spanning tree must be added 
while ensuring the edges of all spanning trees remain distinct.

To implement this, connect each newly added vertex to the existing vertices using $2k$ edges. For the new spanning tree, allocate $2k$ 
edges to connect $u$ to the other vertices and another $2k$ edges for $v$. Include the one edge between $u$ and $v$ in the newly formed 
tree. This ensures the creation of the new spanning tree while maintaining the distinctiveness of edges in all spanning trees, and 
completes the proof.
