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
      
      // if the difference is already in the heapMap 
      // then return the map value and current "i-th value" 
      if map.containsKey(diff):
        
        return [map.get[nums[i]],i];
      
      // if the difference is not present in the heapmap
      // add the "i-th" value and its index to the heapmap
      map.put(nums[i],i);
      
  // if no pair is find, return exception
  return 0;
  
```

  
  
