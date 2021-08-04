## Pesudo Code

**Brute Force - Iteration**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

removeDuplicate(nums):

    duplicateCount = 0;
    
    for i from 1 to len(nums)-i:
    
         if nums[i] == nums[i-1]:
            duplicateCount++;
         
         else:
            nums[i-duplicateCount] = nums[i];
         
    return len(nums) - duplicateCount; 

```
