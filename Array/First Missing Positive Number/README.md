## Leetcode - 41

Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

 
**Example 1:**

```

Input: nums = [1,2,0]

Output: 3

```

**Example 2:**

```

Input: nums = [3,4,-1,1]

Output: 2

```

**Example 3:**

```

Input: nums = [7,8,9,11,12]

Output: 1

``` 

**Constraints:**


- <code>1 <= nums.length <= 5 * 10<sup>5</sup></code>

- <code>-2<sup>31</sup> <= nums[i] <= 2<sup>31</sup> - 1</code>


## Pesudo Code

**BruteForce - set**

**Time Complexity T - O(n)**

**Space Complexity S - O(n)**

```python 

firstMissing(nums):
  
  set = {}
  
  for i from 0 to len(nums):
      
      if nums[i]<=0: 
         continue;
      set.insert(nums[i]);
      
  for i from 0 to len(set):
      
      if set[i] not in set:
          return i
          
  return i;
  
```

**Optimised - Iteration**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**


```Python

firstMissing(nums):

    if len(nums) == 0: return 1;
    
    for i from o to len(nums):
    
        if nums[i] > len(nums) or nums[i] <= 0:
            i++
            
        else if nums[nums[i]-1] == nums[i]:
            i++
            
        else:
        
            tmp = nums[nums[i]-1];
            nums[nums[i]-1] = nums[i];
            nums[i] = tmp;
     
     i = 0
     
     for i from 0 to len(nums):
        
        if nums[i] != i+1: return i+1;

     return nums[i-1]+1;
    
 ```
 
 **Solution:**
 
- Brute Force - Set

    -[By set in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/First%20Missing%20Positive%20Number/By%20set.cpp)

    -[By set in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/First%20Missing%20Positive%20Number/By%20set.java)

- Optimised - Iterative

    -[By iterative in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/First%20Missing%20Positive%20Number/By%20iterative.cpp)

    -[By iterative in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/First%20Missing%20Positive%20Number/By%20iterative.java)

