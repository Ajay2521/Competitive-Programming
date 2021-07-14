### LeetCode 704

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

**You must write an algorithm with O(log n) runtime complexity.**

#### Example 1:

```
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
```

#### Example 2:

```
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
``` 

#### Constraints:

<code>
  1 <= nums.length <= 10<sup>4</sup>
  
  -10<sup>4</sup> < nums[i], target < 10<sup>4</sup>
</code>  
  
  All the integers in nums are unique.
  
  nums is sorted in ascending order.


### GeeksForGeeks

Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.

#### Example 1:

```
Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.
```

#### Example 2:

```
Input:
N = 5
arr[] = {11 22 33 44 55} 
K = 445
Output: -1
Explanation: 445 is not present.
```

#### Your Task:  
You dont need to read input or print anything. Complete the function binarysearch() which takes arr[], N and K as input parameters and returns the index of K in the array. If K is not present in the array, return -1.

```
Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(LogN) if solving recursively and O(1) otherwise.
```

#### Constraints:

<code>  
  1 <= N <= 10<sup>4</sup>
  
  1 <= arr[i] <= 10<sup>4</sup>
</code>
  
### HackerRank

You need to find index (0-based) of a given key in a sorted array. Use only Binary Search.

#### Input Format

The first line contains N.Next line contains N integers of the array. 

The next line contains the key to be searched. 

If element is not found print -1.

#### Constraints

```
N<=1000000
```

#### Output Format

Single Interger index or -1.

#### Sample Input

```
5

1 2 3 4 5

4
```

#### Sample Output

```
3
```
#### Explanation

Element 4 is present at 3rd index.
  
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
BinarySearch(arr, target):
  
  // initialising the left and right element of an array
  left = 0;
  right = arr.length - 1;
  
  // looping through the entier array till the target is found
  while left <= right: 
    
    // finding the middle element of an array
    mid = (left + right) / 2;
    
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
#### Solution

- **Brute Force - Linear Search Algorithm**
    - [By Linear Search in C++]()
    - [By Linear Search in Java]()

- **Optimised - Binary Search Algorithm**
    - [By Binary Search in C++]()
    - [By Binary Search in Java(Faster)]()
 
