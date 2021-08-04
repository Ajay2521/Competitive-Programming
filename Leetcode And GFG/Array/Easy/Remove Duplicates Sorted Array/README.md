### Leetcode - 26: Remove Duplicates in a Sorted Array - Easy

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
 
**Example 1:**

```

Input: nums = [1,1,2]

Output: 2, nums = [1,2,_]

Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

```

**Example 2:**

```

Input: nums = [0,0,1,1,1,2,2,3,3,4]

Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

``` 

**Constraints:**

- <code>0 <= nums.length <= 3 * 10<sup>4</sup></code>

- <code>-10<sup>0</sup> <= nums[i] <= 10<sup>0</sup></code>

- <code>nums is sorted in non-decreasing order.</code>


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

**Optimised - Two Pointers**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

removeDuplicate(nums):

    unique = 0;
    
    for i from 1 to len(nums)-1:
    
        if nums[i] != nums[unique]:
        
           unique++;
           
           nums[unique] = nums[i];
           
    return unique + 1;

```

**Solution:**

**Brute Force - Iteration**

   - [By Iteration in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Remove%20Duplicates%20Sorted%20Array/By%20iteration.cpp)

   - [By Iteration in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Remove%20Duplicates%20Sorted%20Array/By%20iteration.java)

**Optimised - Two Pointers**

   - [By Two Pointers in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Remove%20Duplicates%20Sorted%20Array/By%20Two%20Pointers.cpp)

   - [By Two Pointers in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Remove%20Duplicates%20Sorted%20Array/By%20Two%20Pointers.java)
