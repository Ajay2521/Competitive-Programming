## Letcode - 66: Plus One - Easy

Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.


**Example 1:**

```

Input: digits = [1,2,3]

Output: [1,2,4]

Explanation: The array represents the integer 123.

```

**Example 2:**

```

Input: digits = [4,3,2,1]

Output: [4,3,2,2]

Explanation: The array represents the integer 4321.

```

**Example 3:**

```

Input: digits = [0]

Output: [1]

``` 

**Constraints:**

```

1 <= digits.length <= 100

0 <= digits[i] <= 9

```

## Pesudo Code

**Iteration without Temp variable**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

plusOne(digits):

  n = len(digits);
  
  if n < 1:
     return digits;
     
  digits[n-1] += 1;
  
  carry = digits[n-1] / 10;
  
  digits[n-1] = digits[n-1]%10;
  
  for i from n-2 to 0:
  
      if carry != 0:
         
         digits[i] += carry;
         
         carry = digits[i] / 10;
         
         digits[i] = digits[i] % 10;
      
  if carray != 0:
  
      digits.insert(1);
  
  return digits;
  
```  
          
          
**Iteration with Temp variable**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

plusOne(digits):

  n = len(digits);
  
  if n < 1:
     return digits;
     
  carry = 1;
  
  for i from n-1 to 0:
      
      sum = digits[i] + carry;
      
      if sum >= 10:
         
         carry = 1;
         
         digits[i] = sum % 10;
      
      else:
         carry = 0;
         
         digits[i] = sum;
         
  if carray != 0:
  
      digits.insert(1);
  
  return digits;
  
```

**Solution:**

**Without temp variable**

   - [By not using temp variable in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Plus%20one/By%20iteration%20without%20temp.cpp)   
   
   - [By not using temp variable in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Plus%20one/By%20iteration%20without%20temp.java)
   
**With temp variable**

   - [By using temp variable in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Plus%20one/By%20iteration%20with%20temp.cpp)   
   
   - [By using temp variable in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Plus%20one/By%20iteration%20with%20temp.java)
   
