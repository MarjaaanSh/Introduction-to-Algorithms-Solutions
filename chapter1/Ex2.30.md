#### Ex2.30:

A complete binary tree is defined inductively as follows. A complete binary tree of height $O$ consists of $1$ node which is the root. A 
complete binary tree of height $h + 1$ consists of two complete binary trees of height $h$ whose roots are connected to a new root. Let $T$ 
be a complete binary tree of height $h$. The height of a node in $T$ is $h$ minus the node's distance from the root (e.g., the root has 
height $h$, whereas a leaf has height $0$). Prove that the sum of the heights of all the nodes in $T$ is $2^{h+1} - h - 2$.

#### Solution:

Base case $h = 1$: A tree with height $1$ has three nodes. The sum of their heights, $0 + 1 + 1$, amounts to $3$, aligning with the provided formula.

Inductive hypothesis: Assuming a tree with height $h$ has a sum of heights for all nodes equal to $2^{h+1} - h - 2$, when connecting two trees of height $h$ to form a tree of height $h+1, an additional root node with height $h+1$ is introduced to all nodes. Consequently, the sum of the heights of the nodes from the two trees, along with the height of this new root, is expressed as:

$$2^{h+1} - h - 2 + 2^{h+1} - h - 2 + (h+1) = 2^{h+2} - h - 3 = 2^{h+2} - (h+1) - 2$$ 

This is equivalent to substituting $h+1$ in place of $h$ in the initial formula, thus completing the proof.
