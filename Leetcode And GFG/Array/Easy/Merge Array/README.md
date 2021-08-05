### Leetcode - 88: Merge Sorted Array - Easy

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 
**Example 1:**

```

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3

Output: [1,2,2,3,5,6]

Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

```

**Example 2:**

```

Input: nums1 = [1], m = 1, nums2 = [], n = 0

Output: [1]

Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
```

**Example 3:**

```

Input: nums1 = [0], m = 0, nums2 = [1], n = 1

Output: [1]

Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

``` 

**Constraints:**

- <code>nums1.length == m + n</code>

- <code>nums2.length == n</code>

- <code>0 <= m, n <= 200</code>

- <code>1 <= m + n <= 200</code>

- <code>-10<sup>9</sup> <= nums1[i], nums2[j] <= 10<sup>9</sup></code>
 

**Follow up:** Can you come up with an algorithm that runs in O(m + n) time?


## Pesudo Code

**Brute Force - Concatenate and Sort**

**Time Complexity T - O((n+m) log(n+m))**

**Space Complexity S - O(1)**

```python


mergeSort(num1, m, num2, n):

    for i from 0 to n-1:
        nums1[i+m] = nums2[i];
    
    sort(nums1);
 
``` 

**Optimised - Iterative**

**Time Complexity T - O(m+n)**

**Space Complexity S - O(1)**

```python

mergeSort(num1, m, num2, n):

    m = m-1; n = n-1;
    
    for i from m+n+1 to 0:
    
        a = m >=0 ? num1[m] : minint;
        b = n >=0 ? num2[n] : minint;
        
        if (a>b):
            num1[i] = a;
            m--;
        else:
            num1[i] = b;
            n--;

```

**Solution:**

**Brute Force - Concatenate and Sort**

   - [By Concatenate and Sort in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Merge%20Array/By%20Concatenate%20and%20Sort.cpp)
   
   - [By Concatenate and Sort in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Merge%20Array/By%20Concatenate%20and%20Sort.java)


**Optimised - Iteration**

   - [By Iteration in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Merge%20Array/By%20iteration.cpp)
   
   - [By Iteration in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Merge%20Array/By%20iteration.java)
