### Leetcode 1, GeeksForGeeks

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


#### Example 1:

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
```

#### Example 2:

```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

#### Example 3:

```
Input: nums = [3,3], target = 6
Output: [0,1]
``` 

#### Constraints:

```
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
```

#### Solution:

- [By using HashMap in Java(Faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Two%20Sum/Two%20Sum%20using%20HashMap.java)
- [By using HashMap in C++(Memory Management)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Two%20Sum/Two%20Sum%20using%20HashMap.cpp)
- [By using Iterative in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Two%20Sum/Two%20Sum%20using%20Iterative.java)
- [By using Iterative in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Two%20Sum/Two%20Sum%20using%20Iterative.cpp)

## Pseudo Code : 
### Brute Force - Iterative
#### Time Complexity T = O(n<sup>2</sup>)
#### Space Complexity S = O(1)

```python
twoSum(nums, target):

for i from 0 to len(nums) - 1:
  for j from i+1 to len(nums):
    
    // comparing the nums[i] + nums[j] is equal to traget
    if nums[i] + nums[j] == target:
        
        return [i,j];
  
  return null;
```
  
### Optimised - HashMap
#### Time Complexity T = O(n)
#### Space Complexity S = O(n)

```python
twoSum(nums, target):
  
  hashMap = new HashMap();
  for i from 0 to len(nums):
      
      // getting differece for target and "i-th" value
      diff = target - nums[i];
      
      // if the difference is already in the hashMap 
      // then return the map value and current "i-th value" 
      if map.containsKey(diff):
        
        return [map.get[nums[i]],i];
      
      // if the difference is not present in the hashMap
      // add the "i-th" value and its index to the hashMap
      map.put(nums[i],i);
      
  // if no pair is find, return exception
  return 0;
  
```

  
  
