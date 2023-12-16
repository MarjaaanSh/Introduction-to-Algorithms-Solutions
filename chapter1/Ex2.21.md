#### Ex2.21:

Prove that the regions formed by a planar map all of whose vertices have even degree can be colored with two colors such that no two 
neighboring regions have the same color.

#### Solution:

We prove by induction on the number of regions. If there is only one region, it can be colored with two colors. 

To begin the reduction step, start from a vertex $v$ and remove one of the regions by continuing the path until reaching $v$ again. Since we traversed a cycle, two edges were removed from each vertex, and the reduced planar map maintains the desired property, vertices still have even degree. Thus, based on the induction hypothesis, it can be colored with two colors.

Upon adding the removed region again, some regions are inside the added region, and some are outside. Reverse the color of the inside regions and leave the outside ones the same as before. This results in a valid coloring, as if the boundry edge is inside the added region, then previously two regions adjacent to it had a valid coloring, and the colors are now just reversed. If the boundry is due to the added region, then the color of the inside is reversed while the outside remains the same. Thus, the proof is complete.
