### Leetcode - 53 - Maximum Subarray

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

 

**Example 1:**

```

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]

Output: 6

Explanation: [4,-1,2,1] has the largest sum = 6.

```

**Example 2:**

```

Input: nums = [1]

Output: 1

```

**Example 3:**

```

Input: nums = [5,4,-1,7,8]

Output: 23

```

**Constraints:**

- <code>1 <= nums.length <= 3 * 10<sup>4</sup></code>

- <code>-10<sup>5</sup> <= nums[i] <= 10<sup>5</sup></code>
 

**Follow up:** If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.



## Pesudo Code


**Brute Force - Iteration**

**Time Complexity T - O(n^2)**

**Space Complexity S - O(1)**

```python

maxmiumSubarray(nums):

  if len(nums) == 1:
      
     return nums[0];
     
  sum;
  
  maxValue = minval;
  
  for i from 0 to len(nums)-1:
      
      sum = 0;
      
      for j from i to len(nums)-1:
      
          sum = sum + nums[j];
          
          maxValue = max(sum,maxValue); 
          
  return maxValue;
  
```  


**Optimised - Kadane's Algorithm (Dynamic Programming)**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

maxmiumSubarray(nums):

  if len(nums) == 1:
      
     return nums[0];
     
  sum = 0;
  
  maxValue = minval;
  
  for i from 0 to len(nums)-1:
  
      sum = sum + nums[i];
      
      if sum > maxValue:
         maxValue = sum;
         
      if sum < 0;
         sum = 0;
      
  return maxValue
 
``` 


**Solution:**

**Brute Force - Iteration**

  - [By iteration in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Maximum%20Subarray/By%20iteration.cpp)
  
  - [By iteration in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Maximum%20Subarray/By%20iteration.java)

**Optimised - Kadane's Algorithm**

  - [By Kadane's Algorithm in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Maximum%20Subarray/By%20kadane%20Algo.cpp)
  
  - [By Kadane's Algorithm in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Maximum%20Subarray/By%20kadane%20Algo.java)

