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
