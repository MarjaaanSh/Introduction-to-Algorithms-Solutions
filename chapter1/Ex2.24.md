#### Ex 2.24

Anti-Gray codes are characterized by maximizing the difference between two consecutive strings of length $k$, as opposed to minimizing it. 
Is it feasible to design anti-Gray codes for any even number of objects with $k$-bit differences between two consecutive strings? What about 
$k-1$, $k-2$, and so on? If achievable, present an efficient construction method.

#### Solution
If we have a string of length $k$, creating a second string with $k$ bits necessitates contradicting all bits, resulting in a third string identical to the first. Thus, achieving anti-Gray codes with $k$ bits per string and $k$ bits difference appears unattainable.


To formulate anti-Gray codes with $k-1$ different bits, one can leverage Gray codes of length $k$ bits. By contradicting all bits of $2i^{th}$ strings, the difference between two consecutive strings increases from 1 to $k-1$ bits. However, potential collisions may arise between the newly created strings. To mitigate this, append leading $0$s to the $2i^{th}$ objects and $1$ to the leading $(2i+1)^{th}$ objects. Consequently, the resulting anti-Gray codes are of length $k+1$, differing in $k$ bits. No two strings would collide this way since, for odd and even strings, the first bit is distinct. Moreover, among even or odd strings themselves, they are derived from Gray codes where their original differences were established.

Note that the solution is written after reading this solution:

[Algorithms - Spring 2009 - Suggested Solutions to HW #1](http://www.im.ntu.edu.tw/~tsay/dokuwiki/lib/exe/fetch.php?media=courses:alg2009:hw1s.pdf)
