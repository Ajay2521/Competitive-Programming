### Leetcode - 108: Convert Sorted Array to Binary Search Tree

Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.



**Example 1:**

```

Input: nums = [-10,-3,0,5,9]

Output: [0,-3,9,-10,null,5]

Explanation: [0,-10,5,null,-3,null,9] is also accepted:

```

![image](https://user-images.githubusercontent.com/60919132/128285531-a31b87e6-b9a3-4410-8f14-954a54fad5f0.png)

**Example 2:**

```

Input: nums = [1,3]

Output: [3,1]

Explanation: [1,3] and [3,1] are both a height-balanced BSTs.

```

**Constraints:**

- <code>1 <= nums.length <= 10<sup>4</sup></code>

- <code>-10<sup>4</sup> <= nums[i] <= 10<sup>4</sup></code>

- <code>nums is sorted in a strictly increasing order.</code>

## Pesudo Code

**Optimised - Recursion / Binart Search Tree / Divide and Conquer**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

arrayToBst(nums, start, end):
    
    if start > end:
       return null;
    
    mid = (start + end) / 2;
    
    bst = (nums[mid]);
    
    bst.left = arrayToBst(nums, left, mid - 1);
    
    bst.right = arrayToBst(nums, mid + 1, right);
    
    return bst;

arrayToBst(nums):
    return arrayToBst(nums, 0, len(num) - 1);
    
```

**Solution:**

- [By Binary Search Tree in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Array%20to%20BST/By%20Recursion.cpp)

- [By Binary Search Tree (Same Function) in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Array%20to%20BST/By%20Recursion(SameFun).cpp)

- [By Binary Search Tree in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Array%20to%20BST/By%20Recursion.cpp)
