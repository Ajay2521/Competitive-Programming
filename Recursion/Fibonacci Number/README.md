### Leetcode - 509, GeeksForGeeks, InterviewBit

The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1

F(n) = F(n - 1) + F(n - 2), for n > 1.

Given n, calculate F(n).

**Example 1:**

```
Input: n = 2

Output: 1

Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
```

**Example 2:**

```
Input: n = 3

Output: 2

Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
```

**Example 3:**

```
Input: n = 4

Output: 3

Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
``` 

**Constraints:**

`0 <= n <= 30`

## Pesudo Code

**Native - Iterative**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

fib(n):

  if n <= 1:
     return n;
     
  if n == 2:
     return 1;
  
  current = 0;
  prev1 = 1;
  prev2 = 1;
  
  for i from 3 to len(n):
      current = prev1 + prev2
      prev2 = prev1
      prev1 = current
  
  return current;
  
```

**Recursion**

**Time Complexity T - O(2^n)**

**Space Complexity S - O(n)**

```python

fib(n):

  if n <= 1:
     return n;
     
  if n == 2:
     return 1;
  
  return fib(n-1) + fib(n-2);
 
```

**Solution:**

- [By iterative in c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Recursion/Fibonacci%20Number/By%20iterative.cpp)

- [By iterative in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Recursion/Fibonacci%20Number/By%20iterative.java)

- [By Recusrion in c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Recursion/Fibonacci%20Number/By%20Recursion.cpp)

- [By Recursion in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Recursion/Fibonacci%20Number/By%20Recursion.java)
