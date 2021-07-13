### GeeksForGeeks, HackerRank, HackerEarth

Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

#### Input:

The first line of the input contains T denoting the number of testcases. First line of each test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

#### Output:

For each testcase, in a new line, output the rotated array.

#### Constraints:

```1 <= T <= 200
1 <= N <= 107
1 <= D <= N
0 <= arr[i] <= 105
```

#### Example:

#### Input:

```
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20
```

#### Output:
```
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6
```

#### Explanation :

```
Testcase 1: 1 2 3 4 5  when rotated by 2 elements, it becomes 3 4 5 1 2.
Testcase 2: 2 4 6 8 10 12 14 16 18 20  when rotated by 2 elements, it becomes 8 10 12 14 16 18 20 2 4 6.
```

### Solution:

- [By Reverse(Optimised)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Rotate%20Array/left%20rotation%20By%20Reverse.cpp)
- [By juggling](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Rotate%20Array/left%20rotation%20By%20Juggle.cpp)
- [By left one by one using c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Rotate%20Array/left%20rotation%20one%20by%20one.cpp) 
- [By left one by one using java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Rotate%20Array/left%20rotation%20one%20by%20one.java)


### Leetcode 189

Given an array, rotate the array to the right by k steps, where k is non-negative.

#### Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

#### Explanation:

```
rotate 1 steps to the right: [7,1,2,3,4,5,6]

rotate 2 steps to the right: [6,7,1,2,3,4,5]

rotate 3 steps to the right: [5,6,7,1,2,3,4]
```

#### Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]

#### Explanation: 

```
rotate 1 steps to the right: [99,-1,-100,3]

rotate 2 steps to the right: [3,99,-1,-100]
``` 

#### Constraints:

```
1 <= nums.length <= 105

-231 <= nums[i] <= 231 - 1

0 <= k <= 105
``` 

#### Solution:

- [By Reverse using java(Optimised)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Rotate%20Array/Right%20rotation%20By%20Reverse.java)
- [By Reverse using C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Rotate%20Array/Right%20rotation%20By%20Reverse.cpp)
