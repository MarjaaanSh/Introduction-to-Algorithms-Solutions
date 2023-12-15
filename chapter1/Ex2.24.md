#### Ex 2.24

Anti-Gray codes are characterized by maximizing the difference between two consecutive strings of length $k$, as opposed to minimizing it. 
Is it feasible to design anti-Gray codes for any even number of objects with $k$-bit differences between two consecutive strings? What about 
$k-1$, $k-2$, and so on? If achievable, present an efficient construction method.

#### Solution

If we have a string of length $k$, making another string with $k$ bits differences means that we should contradict all of the bits. Thus, 
after making the second string with the desired property, the third one is exactly the same as the first one. Thus, it is impossible to make 
anti-Gray codes with $k$ bits per string and $k$ bits difference. 

To make anti-Gray codes with $k-1$ different bits, consider we have Gray codes of length $k$ bits. We can contradict all bits of $2i^{th}$ 
strings, in this way, since at first two consequative strings differed in 1 bit, now they differ in $k-1$ bits. However, they may be 
collision between newly made strings. Thus, we add leading $0$s to the $2i^{th}$ objects, and $1$ to the leading $(2i+1)^{th}$ objects. Thus, our anti-Grays code are of length $k+1$, and they differ in $k$ bits. 
