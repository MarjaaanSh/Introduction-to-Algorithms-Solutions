Prove the number is divisible by 3 if and only if the sum of its digits is divisible by 3. 

We use the stronger kind and prove that the remainder of a number by 3 is the remainder of the sum of its digits. 

Base case: n = 1 and it hold.
Assuming k is represented decimally by $a_1a_2 \dots a_n$, and $R_3(k)$ is the remainder of k by 3:

$R_3(k) = R_3(a_1 + a_2 + \dots + a_p$), 
if we increase k by 1, then $R_3(k+1) = R_3(k) + 1$. If $a_p \neq 9$, then 

$R_3(k+1) = a_1 + a_2 + \dots + (a_p$ + 1), and this is the sum of the digits of k + 1. 

If $a_p = 9$, there should be one then we have $R_3(k+1) = a_1 + a_2 + \dots + a_{p-1}$

