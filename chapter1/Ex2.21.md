#### Ex2.21:

Prove that the regions formed by a planar map all of whose vertices have even degree can be colored with two colors such that no two 
neighboring regions have the same color.

#### Solution:

#### Ex2.21:

Prove that the regions formed by a planar map, all of whose vertices have even degree, can be colored with two colors such that no two neighboring regions have the same color.

#### Solution:

Assuming all vertices have even degrees, the graph consists of a collection of cycles. If this were not the case, at least two vertices 
would have odd degrees.

To prove by induction, consider the base case where $n = 2$. In this scenario, we can color the planar map with two colors. Now, assuming 
we have a graph with n vertices, all with even degrees, we remove one cycle along with all its edges. The resulting graph still maintains 
the required property, as removing two degrees leaves all vertices with even degrees. By the induction hypothesis, we can color this 
reduced graph with two colors.

When reintroducing the removed cycle, we reverse the colors of the regions inside the cycle. Consequently, the areas where their boundaries 
are the edges of the added cycle now differ in color. For the regions inside the added cycle whose boundaries consist of edges from the graph 
before adding the cycle, their colors were originally different, and we simply reversed them.
