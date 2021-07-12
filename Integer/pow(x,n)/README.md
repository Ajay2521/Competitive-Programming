### LeetCode 50

#### pow(x,n)

Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

#### Example 1:

```
Input: x = 2.00000, n = 10

Output: 1024.00000
```

#### Example 2:

``` 
Input: x = 2.10000, n = 3

Output: 9.26100
```
#### Example 3:

```
Input: x = 2.00000, n = -2

Output: 0.25000

Explanation: 2-2 = 1/22 = 1/4 = 0.25
``` 

#### Constraints:

```
-100.0 < x < 100.0

-231 <= n <= 231-1

-104 <= xn <= 104
```

#### Solution:

- [By using Recursion in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/pow(x%2Cn)/pow(x%2Cn)%20by%20Recursive.cpp)
- [By using Divide and Conquer in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/pow(x%2Cn)/pow(x%2Cn)%20by%20DivCon.cpp)
- [By using Divide and Conquer in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/pow(x%2Cn)/pow(x%2Cn)%20by%20DivCon.java)

### Pseudo Code - Recursive(Fails for Negative value)

#### Time Complexity T = O(n)

#### Space Complexity S = O(1)

```python
power(x, y):
 
    if (y == 0): 
      return 1
    
    else if (y % 2) == 0):
        return (power(x, (y / 2)) * power(x, (y / 2)))
    
    else:
        return (x * power(x, (y / 2)) * power(x, (y / 2)))
```

### Pseudo Code - Divide and conquer(Optimised)

#### Time Complexity T = O(log (base)2 (n))

#### Space Complexity S = O(1)

```python

power(x,y):
  
  ans = 1;
  
  if(y % 2 == 0):
    x *= x;
    n /= 2;
  
  else:
    ans = ans * x;
    n = n - 1;
 
``` 
