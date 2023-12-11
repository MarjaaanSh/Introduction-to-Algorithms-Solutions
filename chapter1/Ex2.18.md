#### Ex2.18:

Prove that if any three out of $n$ points in the plane are contained in a unit-sized cycle, then all of $n$ points are contained in a 
unit-sized cycle. 

#### Solution:

A unit-sized cycle is a cycle in which the maximum distance between any pair of points in the cycle is 1. 

For $n=1$ and $n=2$, there is no cycle, so the statement is trivially true. 

For $n\geq 3$, assume the result holds for $n-1$ points. Remove the $n^{th}$ point, leaving $n-1$ points. By the induction hypothesis, these 
points are contained in a unit-sized cycle. Now, adding the $n^{th}$ point back in, based on the assumption of the question, any two points 
with this new point should be a part of unit-sized cycle. Thus, the distance between this point and any other two points (which mean all
other points) is 1, and this puts all of the points in a unit-sized cycle.This completes the proof.
