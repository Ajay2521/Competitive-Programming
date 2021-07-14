## Pseudo Code 
### Brute Force - Linear Search
#### Time Complexity T = O(n)
#### Space Complexity S = O(1)

```python

// let array be the sorted array
LinearSearch(arr, target):
  
  // looping through the entier array till the target is found
  for(i = 0; i<n; i++):
    
    // matching the "i-th" value with the target
    if arr[i] == target:
    
       // return the index, if the match is found
       return i;
    
    else:
    
      //if match not found return -1;
      return -1;
```

## Pseudo Code 
### Optimised - Binary Search
#### Time Complexity T = O(log (n))
#### Space Complexity S = O(1)

```python

// let array be the sorted array
LinearSearch(arr, target):
  
  // initialising the left and right element of an array
  left = 0;
  right = arr.length - 1;
  
  // looping through the entier array till the target is found
  while left <= right: 
    
    // finding the middle element of an array
    mid = (left + right) + 2;
    
    // matching the "mid" element value with the target
    if arr[mid] == target:
    
       // return the index, if the match is found
       return mid;
    
    // if the target value is less than the "mid" element value
    else if arr[mid] < target:
        
        // assign the "mid+1" element to the left, for futher iteration
        left = mid + 1;
    
    // if the target value is greater than the "mid" element value
    else:
        
        // assign the "mid-1" element to the right, for futher iteration
        right = mid - 1;
    
  //if match not found return -1;
  return -1;
```
