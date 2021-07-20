### Leetcode - 448

Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 
**Example 1:**

```
Input: nums = [4,3,2,7,8,2,3,1]

Output: [5,6]
```

**Example 2:**

```
Input: nums = [1,1]

Output: [2]
```

**Constraints:**

- <code>n == nums.length</code>

- <code>1 <= n <= 10<sup>5</sup></code>

- <code>1 <= nums[i] <= n</code>


## Pseudo Code

### Brute Force - Set

**Time Complexity T - O(n)**

**Space Complexity S - O(n)**

```python

findAllMissingNumbers(nums):

  missingNum = [];
  
  numberSet = ();
  
  for i from 0 to len(nums):
      numberSet.add(nums[i])
      
  for i from 0 to len(nums):
      if i not in numberSet:
         missingNum.add(i)
         
  return missingNum
  
```  

### Optimised - index

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

findAllMissingNumbers(nums):

  missingNum = [];
  
  for i from 0 to len(nums):
      n = abs(nums[i]);
      
      if nums[n-1] > 0:
         nums[n-1] = -nums[n-1]
         
  for i from 0 to len(nums):
      if nums[i] > 0:
         missingNum.add(i+1)
         
  return missingNum
  
```

**Solution:**

- Brute Force - Set

  - [By set in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Find%20all%20Missing%20Number/By%20set.cpp)
  - [By set in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Find%20all%20Missing%20Number/By%20set.cpp)

- Optimised - Index

  - [By index in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Find%20all%20Missing%20Number/By%20index.cpp)
  - [By index in Java(faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Find%20all%20Missing%20Number/By%20index.java)
