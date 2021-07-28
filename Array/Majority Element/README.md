### Leetcode - 169, GeeksForGeeks

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


**Example 1:**

```
Input: nums = [3,2,3]

Output: 3
```

**Example 2:**

```
Input: nums = [2,2,1,1,1,2,2]

Output: 2
``` 

**Constraints:**

- <code>n == nums.length</code>

- <code>1 <= n <= 5 * 10<sup>4</sup></code>

- <code>-2<sup>31</sup> <= nums[i] <= 2<sup>31</sup> - 1</code>
 

**Follow-up:** Could you solve the problem in linear time and in O(1) space?

## pseudo Code

**Brute Force - Iterative**

**Time Complexity T - O(n^2)**

**Space Complexity S - O(1)**


```python

majorithyElement(nums):
  
  majority = len(nums)/2;
  
  for nums in nums:
      
      count = 0;
      
      for elem in nums:
      
          if elem == nums:
          
              count = count + 1;
              
      if count > majority:
         
          return num;
 
  return -1;  

```


**HashMap**

**Time Complexity T - O(n)**

**Space Complexity S - O(n)**


```python

majorithyElement(nums):
    
    map = {};
    
    result = nums[0];
    
    count = 0;
    
    for i from 0 to len(nums)-1:
        
        if nums[i] in map:
        
            count = max(count, map.get(nums[i]));
            
            map.put(nums[i], map.get(nums[i]) +1);
            
            if map.get(nums[i]) > count:
                
                result = nums[i];
        
        else:
            
            map.put(nums[i],1);
    
    return result;  
     
```


**Optimised - Moore Voting Algorithm**

**Time Complexity T - O(n^2)**

**Space Complexity S - O(1)**

```python

majorithyElement(nums):
  
  count = 0;
  
  result = 0;
  
  for i from 0 to len(nums)-1:
      
      if count == 0:
          
          result = nums[i];
      
      count += (result == nums[i]) ? 1 : -1;
      
  return result;  

```

**Solution:**

- Brute Force - Iterative
  
  - [By Iterative in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Majority%20Element/By%20iterative.cpp)
  - [By Iterative in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Majority%20Element/By%20iterative.java)
  
- Optimised - HashMap(O(n)) , Moore Voting(O(1))

  - [By HashMap in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Majority%20Element/By%20hashmap.cpp)
  - [By HashMap in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Majority%20Element/By%20hashmap.java)
  - [By Moore Votting in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Majority%20Element/By%20Moore%20Voting%20Algorithm.cpp)
  - [By Moore Votting in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Majority%20Element/By%20Moore%20Voting%20Algorithm.java)
  
