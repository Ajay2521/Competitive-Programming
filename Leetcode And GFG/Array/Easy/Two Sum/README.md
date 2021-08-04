## Leetcode - 1: Two Sum - Easy

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


**Example 1:**

```

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

Output: Because nums[0] + nums[1] == 9, we return [0, 1].

```

**Example 2:**

```

Input: nums = [3,2,4], target = 6

Output: [1,2]

```

**Example 3:**

```

Input: nums = [3,3], target = 6

Output: [0,1]

```


**Constraints:**

- <code>2 <= nums.length <= 10<sup>4</sup></code>

- <code>-10<sup>9</sup> <= nums[i] <= 10<sup>9</sup></code>

- <code>-10<sup>9</sup> <= target <= 10<sup>9</sup></code>

- <code>Only one valid answer exists.</code>
 

**Follow-up:** Can you come up with an algorithm that is less than O(n2) time complexity?


## Pseudo Code

**Brute Force - Iteration**

**Time Complexity T - O(n^2)**

**Space Complexity S - O(1)**

```python

twoSum(nums, target):

  ans = [];
  
  for i from 0 to len(nums)-1:
      
      for j from i+1 to len(nums):
      
          if nums[i] + nums [j] = target:
             
             ans.add(i);
             ans.add(j);
             
  return ans;   
  
```

**Optimised - HashMap**

**Time Complexity T - O(n)**

**Space Complexity S - O(n)**

```python

twoSum(nums, target):

  map = {};

  for i from 0 to len(nums)-1:
  
      difference = target - nums[i];
      
      if difference in map:
         
         map.add(map[difference]);
         map.add(i);
         return map;
      
      else:
        
          map.add({nums[i],i});
  
  return {0,0};

```

**Solution:**

**Brute Force - Iteration**

  - [By iteration in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Two%20Sum/By%20iterative.cpp)

  - [By iteration in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Two%20Sum/By%20iterative.Java)

**OPtimised - HashMap**

  - [By Hashmap in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Two%20Sum/By%20hashmap.cpp)
  
  - [By Hashmap in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Two%20Sum/By%20hashmap.java)



