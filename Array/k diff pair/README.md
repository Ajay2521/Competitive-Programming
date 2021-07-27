### Leetcode - 532, GeeksForGeeks

Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

```
0 <= i < j < nums.length

|nums[i] - nums[j]| == k

Notice that |val| denotes the absolute value of val.
```
 

**Example 1:**

```
Input: nums = [3,1,4,1,5], k = 2

Output: 2

Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).

Although we have two 1s in the input, we should only return the number of unique pairs.
```

**Example 2:**

```
Input: nums = [1,2,3,4,5], k = 1

Output: 4

Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).
```

**Example 3:**

```
Input: nums = [1,3,1,5,4], k = 0

Output: 1

Explanation: There is one 0-diff pair in the array, (1, 1).
```

**Example 4:**

```
Input: nums = [1,2,4,4,3,3,0,9,2,3], k = 3

Output: 2
```

**Example 5:**

```
Input: nums = [-1,-2,-3], k = 1

Output: 2
``` 

**Constraints:**

- <code>1 <= nums.length <= 10<sup>4</sup></code>

- <code>-10<sup>7</sup> <= nums[i] <= 10<sup>7</sup></code>

- <code>0 <= k <= 10<sup>7</sup></code>

## Pesudo Code

**Brute Force - Sorting**

**Time complexity T - O(n^2)**

**Space complexity S - O(n^2)**

```python

diffPair(nums, k):
  
  sort(nums);
  count = 0;
  
  for i from 0 to len(nums):
  
      if i > 0 and nums[i] == nums[i-1]:
         continue;
         
      for j from i+1 to len(nums):
          
          if nums[j] - nums[i] == k:
             count++;
             break;
  
  return count;
```

**Optimised - HashMap**

**Time complexity T - O(n)**

**Space complexity S - O(n)**

```python

diffPair(nums, k):
    
    count = 0;
    
    for i : nums:
        map(i, get(i) +1);
    
    for item in map:
        if k == 0:
           if item.values >= 2:
              count++;
        
        else:
          if item.key+k exit in map:
             count++;
   
    return count;

```

**Solution:**

- Brute Force - Sorting
  
    - [By sorting in c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/k%20diff%20pair/By%20sorting.cpp)
    - [By sorting in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/k%20diff%20pair/By%20sorting.java)

- Optimised - HashMap

    - [By HashMap in c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/k%20diff%20pair/By%20hashmap.cpp)
    - [By HashMap in Java(Faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/k%20diff%20pair/By%20hashmap.java)
