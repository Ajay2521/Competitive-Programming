### Leetcode - 713, GeeksForGeeks

Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k. 

**Example 1:**

```

Input: nums = [10,5,2,6], k = 100

Output: 8

Explanation: The 8 subarrays that have product less than 100 are:

[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]

Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.

```

**Example 2:**

```

Input: nums = [1,2,3], k = 0

Output: 0

```

**Constraints:**

- <code>1 <= nums.length <= 3 * 10<sup>4</sup></code>

- <code>1 <= nums[i] <= 1000</code>

- <code>0 <= k <= 10<sup>6</sup></code>


## Pesudo Code

**BruteForce - Iterative**

**Time Complexity T - O(n^2)**

**Space Complexity S - O(1)**


```python

subarryProduct(nums, k):

  count=0, prod;
  
  for i from 0 to len(nums)-1:
      
      if (nums[i] < k):
          count++;
      
      product = nums[i];
      
      for j from i+1 to len(nums)-1:
      
          product = product * nums[j];
          
          if (product < k):
              count++;
          else:
              break;
  
  return count;

```

**Optimised - Sliding window**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**


```python

subarryProduct(nums, k):

  count=0, left = 0, prod;
  
  if k <= 1:
      return 0;
  
  for i from 0 to len(nums)-1:
      prod = prod * nums[i];
      
      while prod >= k:
            
            prod = prod / nums[lef++];
       
      count = count + (i-left+1)
  
  return count;

```

**Solution:**

- Brute Force - Iterative

    - [By Iterative in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Subarray%20Product%20Less%20than%20K/By%20iterative.cpp)
    
    - [By Iterative in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Subarray%20Product%20Less%20than%20K/By%20iterative.java)

- Optimised - Sliding Window

    - [By Sliding Window in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Subarray%20Product%20Less%20than%20K/By%20sliding%20window.cpp)
    
    - [By Sliding Window in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Subarray%20Product%20Less%20than%20K/By%20sliding%20window.java)
