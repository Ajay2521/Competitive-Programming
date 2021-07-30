## Leetcode - 1291

An integer has sequential digits if and only if each digit in the number is one more than the previous digit.

Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.


**Example 1:**

```

Input: low = 100, high = 300

Output: [123,234]

```

**Example 2:**

```

Input: low = 1000, high = 13000

Output: [1234,2345,3456,4567,5678,6789,12345]

``` 

**Constraints:**

`10 <= low <= high <= 10^9`


## Pesudo Code

**Iteration**

**Time Complexity - O(1)**

**Space Complexity - O(1)**

```python

sequentialDigits(low, high):

  result = [];
  
  for i from 1 to 9:
      x = i;
      
      for j from i+1 to 9:
          x = x * 10;
          x = x + j;
          
          if x >= low and x<=high:
             result.add(x);
          
          if x > high:
              break;
  
  sort(result);
  return result;
  
```


**String Iteration**

**Time Complexity - O(1)**

**Space Complexity - O(1)**

```python

sequentialDigits(low, high):
  
  digits = "123456789";
  
  result = [];
  
  sizeLow = len(str(low);
  sizeHigh = len(str(high);
  
  for i from sizeLow to sizeHigh:
      for j from 0 to 10 - i:
          x = int(digits[j : j+i]);
          if x >= low and x<=high:
             result.add(x);
             
  return result;

```

**Solution:**

- [By iteration in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Sequential%20Digits/By%20iterative.cpp)

- [By iteration in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Sequential%20Digits/By%20iterative.java)

- [By String iteration in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Sequential%20Digits/By%20String%20Iteration.cpp)

- [By String iteration in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Sequential%20Digits/By%20String%20Iteration.java)
