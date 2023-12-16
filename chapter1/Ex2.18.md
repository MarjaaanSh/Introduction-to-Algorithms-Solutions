#### Ex2.18:

Prove that if any three out of $n$ points in the plane are contained in a unit-sized cycle, then all of $n$ points are contained in a 
unit-sized cycle. 

#### Solution:

A unit-sized cycle is a cycle in which the maximum distance between any pair of points in the cycle is 1. 

For $n=1$ and $n=2$, there is no cycle, so the statement is trivially true. 

Assume the induction hypothesis holds for a graph with the desired property with $n$ vertices, meaning that all of its vertices are contained in a unit-sized cycle. This implies that the distance between any pair of vertices in the graph is 1.

Now, let's add the $(n+1)^{th}$ vertex, $v$. To prove the induction hypothesis for the extended graph, we need to show that the distance between $v$ and any other vertex from the original graph is also 1.

To achieve this, first we need to establish the desired property in the new graph. Thus, we should include $v$ and any pair of remaining vertices in unit-sized cycle. Since any two vertices out of the original graph have a distance of one between them, we only need to add two edges between $v$ and each of those two vertices. Therefore, there should be one edge between $v$ and each of those $n$ vertices. This ensures that the distance between $v$ and all of $n$ vertices is one, completing the induction step and thus the proof.
