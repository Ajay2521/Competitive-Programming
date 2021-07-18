### Leetcode 283

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.


**Example 1:**

```
Input: nums = [0,1,0,3,12]

Output: [1,3,12,0,0]
```

**Example 2: **

```
Input: nums = [0]

Output: [0]
``` 

**Constraints:**

<code>1 <= nums.length <= 10<sup>4</sup></code>

<code>-2<sup>31</sup> <= nums[i] <= 2<sup>31</sup> - 1</code>
 
 
### GeeksForGeeks
 
Given an array arr[] of N positive integers. Push all the zero’s of the given array to the right end of the array while maitaining the order of non-zero elements.


**Example 1:**

```
Input:

N = 5

Arr[] = {3, 5, 0, 0, 4}

Output: 3 5 4 0 0

Explanation: The non-zero elements preserve their order while the 0 elements are moved to the right.
```

**Example 2:**

```
Input:

N = 4

Arr[] = {0, 0, 0, 4}

Output: 4 0 0 0

Explanation: 4 is the only non-zero element and it gets moved to the left.
```

**Your Task:**

You don't need to read input or print anything. 

Complete the function pushZerosToEnd() which takes the array arr[] and its size n as input parameters and modifies arr[] in-place such that all the zeroes are moved to the right.  

**Expected Time Complexity: O(N)**

**Expected Auxiliary Space: O(1)**

**Constraints:**

<code>1 ≤ N ≤ 10<sup>5</sup></code>

<code>0 ≤ arri ≤ 10<sup>5</sup></code>


## Pseudo Code:

#### Brute Force - Iterative

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python
moveZeroes(nums):
  
        // initializing the variable "nonZeroCount" for counting the nonZero elements and moving forward
        int nonZeroCount = 0;
        
        // If the current element is not 0, then we need to
        // append it just in front of last non 0 element we found.
        // loop run through 0 to "nums-1" element for nonZero elements
        for current from O to len(nums)-1:
            
            // chechking for nonZero number
            if nums[current] != 0:
            
                nums[nonZeroCount] = nums[current];
                // incrementing nonZeroCount
                nonZeroCount++;
                
         // filling up the remaining elements to "0's"
         // loop runs from nonZeroCount to "num-1" element
         for current from nonZeroCount to len(nums)-1;
              nums[current] = 0;
```

#### Optimised - Swap()

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**


```python
moveZeroes(nums):
  
        // initializing the variable "nonZeroCount" for counting the nonZero elements and moving forward
        int nonZeroCount = 0;
        
        // If the current element is not 0, then we need to
        // append it just in front of last non 0 element we found.
        // loop run through 0 to "nums-1" element for nonZero elements
        for current from O to len(nums)-1:
            
            // chechking for nonZero number
            if nums[current] != 0:
                
                //swapping
                swap(nums[nonZeroCount] = nums[current]);
                nonZeroCount++;
```

**Solution:**

- Brute Force - Iterative
      
  - [By iterating in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Move%20Zeroes/By%20iterative%20nonZeros.cpp)
      
   - [By iterating in Java(Faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Move%20Zeroes/By%20iterative%20nonZeros.java)

- Optimised - Swapping
      
   - [By swapping in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Move%20Zeroes/By%20swap.cpp)
      
   - [By swapping in Java(Faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Move%20Zeroes/By%20swap.java)


    
