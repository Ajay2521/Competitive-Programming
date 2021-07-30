### Leetcode 1306

Given an array of non-negative integers arr, you are initially positioned at start index of the array. When you are at index i, you can jump to i + arr[i] or i - arr[i], check if you can reach to any index with value 0.

Notice that you can not jump outside of the array at any time.
 

**Example 1:**

```

Input: arr = [4,2,3,0,3,1,2], start = 5

Output: true

Explanation: 

All possible ways to reach at index 3 with value 0 are: 
index 5 -> index 4 -> index 1 -> index 3 
index 5 -> index 6 -> index 4 -> index 1 -> index 3 

```

**Example 2:**

```

Input: arr = [4,2,3,0,3,1,2], start = 0

Output: true 

Explanation: 

One possible way to reach at index 3 with value 0 is: 
index 0 -> index 4 -> index 1 -> index 3

```

**Example 3:**

```

Input: arr = [3,0,2,1,2], start = 2

Output: false

Explanation: There is no way to reach at index 1 with value 0.

``` 

**Constraints:**

- <code>1 <= arr.length <= 5 * 10<sup>4</sup></code>

- <code>0 <= arr[i] < arr.length</code>

- <code>0 <= start < arr.length</code>


## Pesudo Code

**Optimised - Recursion(Depth First Search)**

**Time Complexity T - O(n)**

**Space Complexity S - O(n)**

```python

jumpGame(arr, start):

  if start >= 0 and start < len(arr) and arr[start] >=0:
      
      if arr[start] == 0:
         return true;
         
      arr[start] = -arr[start]
      
      return canReach(arr, start+arr[start]) or canReach(arr, start-arr[start]);
      
  return false;
  
```

**Solution:**

- BruteForce - Breadth First Search

    - [By BFS in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Jump%20Game%20III/By%20BreadthFirst%20Search.cpp)

    - [By BFS in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Jump%20Game%20III/By%20BreadthFirst%20Search.java)

- Optimised - Recursion / Depth First Search

    - [By Recursion/DFS in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Jump%20Game%20III/By%20Recursion.cpp)

    - [By Recursion/DFS in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Jump%20Game%20III/By%20Recursion.java)

