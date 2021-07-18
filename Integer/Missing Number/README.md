### Leetcode - 268

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?

 
**Example 1:**

```
Input: nums = [3,0,1]

Output: 2

Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
```

**Example 2:**

```
Input: nums = [0,1]

Output: 2

Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
```

**Example 3:**

```
Input: nums = [9,6,4,2,3,5,7,0,1]

Output: 8

Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
```

**Example 4:**

```
Input: nums = [0]

Output: 1

Explanation: n = 1 since there is 1 number, so all numbers are in the range [0,1]. 1 is the missing number in the range since it does not appear in nums.
```

**Constraints:**

- <code>n == nums.length</code>

- <code>1 <= n <= 10<sup>4</sup></code>

- <code>0 <= nums[i] <= n</code>
  
- <code>All the numbers of nums are unique.</code>

### GeeksForGeeks

Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

**Example 1:**

```
Input:

N = 5

A[] = {1,2,3,5}

Output: 4
```

**Example 2:**

```
Input:

N = 10

A[] = {1,2,3,4,5,6,7,8,10}

Output: 9
```

**Your Task :**

You don't need to read input or print anything. Complete the function MissingNumber() that takes array and N as input  parameters and returns the value of the missing number.


**Expected Time Complexity: O(N)**

**Expected Auxiliary Space: O(1)**

**Constraints:**

- <code>1 ≤ N ≤ 10<sup>6</sup></code>

- <code>1 ≤ A[i] ≤ 10<sup>6</sup></code>

## Pseudo Code

#### Brute Froce - Sorting

**Time Complexity T - O(n log n)**

**Space Complexity S - O(1)**

```python

missingNumber(nums):

    sort(nums);
    
    if nums[n-1] != n:
        return n-1;
        
    else if nums[0] != 0;
        return 0;
    
    else:
    
      for i from 1 to len(nums)-1:
          
          expected = nums[n-1]+1;
          
          if (nums[i] != expected):
              return expected
    
    // if no missing value is found
    return -1
```

```python

missingNumber(nums):
        
        expected_sum = len(nums)*(len(nums)+1)//2
        
        actual_sum = sum(nums)
        
        return expected_sum - actual_sum
        
 ```
 
 **Solution:**
 
 - Brute Force - By Sorting/Iterative

    - [By Sorting in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Missing%20Number/By%20sorting.cpp)
    - [By Sorting in Java(Faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Missing%20Number/By%20sorting.java)

- Optimised - By Gauss Formula

    - [By Gauss Formula in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Missing%20Number/By%20Gauss%20Formula.cpp)
    - [By Gauss Formula in Java(Faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Missing%20Number/By%20Gauss%20Formula.java)
 

