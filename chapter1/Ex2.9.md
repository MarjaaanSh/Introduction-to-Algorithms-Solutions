#### Ex2.9:
Prove that a number is divisible by 3, if and only if the sum of its digits is divisible by 3.

#### Solution:

We aim to prove the stronger theorem asserting that the remainder of a number divided by three is equivalent to the remainder of the 
sum of its digits divided by three.

Base case: The remainder of n = 1 to 3 is 1.

Inductive hypothesis: The remainder of k divided by 3, denoted as r3(k), is equal to the remainder of the sum of its digits divided by 3, 
denoted as r3(sd(k)). Mathematically expressed:

$$r3(k) = r3(sd(k))$$

Inductive step: We want to show that inductive hypothesis is also true for $k+1$:

$$r3(k+1) = r3(sd(k+1))$$

Based on the inductive hypothesis, we know that $r3(k) = r3(sd(k))$. For $k+1$, we can express:

$$r3(k+1) = r3(k) + 1 = r3(sd(k)) + 1 = r3(sd(k) + 1)$$

If we demonstrate that $r3(sd(k) + 1) = r3(sd(k+1))$, then the proof is complete.

Two cases may arise:

a. The last digit of k is not 9. In this case, $sd(k+1) = sd(k) + 1$. Therefore, we can countiue the above equation as follows:

$$r3(sd(k) + 1) = r3(sd(k+1))$$

This confirms the inductive hypothesis.

b. The last digit of k is 9. In this scenario, if we add 1 to k, the last digit becomes 0, and 1 is added to the second last digit. 
The remainder of the last digit of k and k+1, which are 9 and 0, respectively, to 3 is 0. Moreover, for k+1, 1 is added to the second 
last digit. Thus, we can write:

$$r3(sd(k+1)) = r3(sd(k)) + 1$$

On the other hand, $r3(sd(k)) + 1 = r3(sd(k) + 1)$. Thus, we have demonstrated $r3(sd(k) + 1) = r3(sd(k+1))$. This concludes the proof.
