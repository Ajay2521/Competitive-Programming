### Leetcode - 442

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.


**Example 1:**

```
Input: nums = [4,3,2,7,8,2,3,1]

Output: [2,3]
```

**Example 2:**

```
Input: nums = [1,1,2]

Output: [1]
```

**Example 3:**

```
Input: nums = [1]

Output: []
```

**Constraints:**

- <code>n == nums.length</code>

- <code>1 <= n <= 10<sup>5</sup></code>

- <code>1 <= nums[i] <= n</code>

- <code>Each element in nums appears once or twice.</code>


## Pseudo Code

#### Brute Force - HashMap

**Time Complexity T - O(n)**

**Space Complexity S - O(n)**

```python

findAllDuplicate(num):

  duplicate = [];
  
  hashMap = {};
  
  for i from 0 to len(nums):
  
      if nums[i] not in hashMap:
          hashMap.set_value(nums[i], i);
      
      else:
          duplicate.add(nums[i]);
          
  return duplicate

```

#### Optimised - Index

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

findAllDuplicate(num):

  duplicate = [];
  
  for i from 0 to len(nums):
    
      n = abd(nums[i]);
      
      if nums[n-1] >= 0:
         nums[n-1] = -nums[n-1];
      
      else:
          duplicate.add(n);
          
  return duplicate

```

**Solution:**

- Brute Force - HashMap
  
   - [By HashMap in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Find%20all%20Duplicates%20in%20Array/By%20hashmap.cpp)
   - [By HashMap in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Find%20all%20Duplicates%20in%20Array/By%20hashmap.java)

- Optimised - Index
  
   - [By Index in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Find%20all%20Duplicates%20in%20Array/By%20index.cpp)
   - [By Index in Java(faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Find%20all%20Duplicates%20in%20Array/By%20index.java)


