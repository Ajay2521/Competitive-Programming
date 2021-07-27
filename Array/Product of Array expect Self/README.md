### Leetcode - 238, GeeksForGeeks

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.


**Example 1:**

```
Input: nums = [1,2,3,4]

Output: [24,12,8,6]
```

**Example 2:**

```
Input: nums = [-1,1,0,-3,3]

Output: [0,0,9,0,0]
``` 

**Constraints:**

- <code>2 <= nums.length <= 10<sup>5</sup></code>

- <code>-30 <= nums[i] <= 30</code>

- <code>The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.</code>
 

**Follow up:** Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)

### HackerRank, HackerEarth

Given an array of n integers where , n>1, print an array such that output[i] is equal to the product of all the elements of nums except nums[i].

Solve the problem in O(N) without using division.

**Input Format**

Integer "n" denoting the number of elements followed by  "n" space-separated integers nums- .

`0 < nums[i] < 20`

**Constraints**

`1 < n < 10`

**Output Format**

"n" integers (an array output such that each  output[i] is equal to the product of all the elements of  nums except nums[i]).

**Sample Input 0**

```
5

1 2 3 4 5
```

**Sample Output 0**

```
120 60 40 30 24
```


## Pseudo Code

**Brute Force - Iterative**

**Time Complexity T - O(n^2)**

**Space Complexity T - O(1)**

```python

product(nums)

  product = [];
  
  for i from 0 to n-1:
      
      currentProd = 1;
      
      for j from 0 to n-1:
          
          if i != j:
             currentProd = currentProd * nums[j]; 
       
      product[i] = currentProd;
   
   return product;   

```


**Optimised - left and right**

**Time Complexity T - O(n)**

**Space Complexity T - O(1)**


```python

product(nums)

  product = [];
  
  left = 1;
  
  for i from 0 to n-1:
      
      product[i] = left;
      
      left = left * nums[i];
      
  right = 1
  
  for j from n-1 to 0:
      
      product[i] = product[i] * right;
      
      right = right * nums[i];
          
 
  return product;   

```

**Solution:**

- Brute force - iterative

    - [By Iterative in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Product%20of%20Array%20expect%20Self/By%20iterative.cpp)
    - [By Iterative in java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Product%20of%20Array%20expect%20Self/By%20iterative.java)
    
- Optimised - Left and right
    
    - [By left and right in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Product%20of%20Array%20expect%20Self/By%20left%20and%20right.cpp)
    - [By left and right in java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Product%20of%20Array%20expect%20Self/By%20left%20and%20right.java)
    
- Future Optimised - Left and right

    - [By left and right in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Product%20of%20Array%20expect%20Self/By%20left%20and%20right%20FO.cpp)
    - [By left and right in java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Product%20of%20Array%20expect%20Self/By%20left%20and%20right%20FO.java)
    
