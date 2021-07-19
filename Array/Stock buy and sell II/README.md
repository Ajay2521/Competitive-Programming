### Leetcode - 122

You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

**Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).**
 
**Example 1:**

```
Input: prices = [7,1,5,3,6,4]

Output: 7

Explanation: 

Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.

Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
```

**Example 2:**

```
Input: prices = [1,2,3,4,5]

Output: 4

Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.

Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are engaging multiple transactions at the same time. You must sell before buying again.
```

**Example 3:**

```
Input: prices = [7,6,4,3,1]

Output: 0

Explanation: In this case, no transaction is done, i.e., max profit = 0.
``` 

**Constraints:**

- <code>1 <= prices.length <= 3 * 10<sup>4</sup></code>

- <code>0 <= prices[i] <= 10<sup>4</sup></code>

### InterviewBit

Say you have an array, A, for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit.

You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

**Input Format:**

The first and the only argument is an array of integer, A.

**Output Format:**

Return an integer, representing the maximum possible profit.

**Constraints:**

- <code>1 <= len(A) <= 1e<sup>5</sup></code>

- <code>1 <= A[i] <= 1e<sup>7</sup></code>

**Example :**

```
Input 1:
    A = [1, 2, 3]

Output 1:
    2
```

**Explanation 1:**

```
    => Buy a stock on day 0.
    => Sell the stock on day 1. (Profit +1)
    => Buy a stock on day 1.
    => Sell the stock on day 2. (Profit +1)
    
    Overall profit = 2
```

```
Input 2:
    A = [5, 2, 10]

Output 2:
    8
```

**Explanation 2:**

```
    => Buy a stock on day 1.
    => Sell the stock on on day 2. (Profit +8)
    
    Overall profit = 8
    
```

## Pseudo Code

### Optimised - One pass

**Time complexity T - O(n)**

**Space complexity S - O(1)**

```python

maxProfit(prices):

  maxProfit = 0;
  
  for i from 1 to len(prices)-1:
  
       if prices[i] > prices[i-1]:
       
            maxProfit = maxProfit + prices[i] - prices[i-1]
   
   return maxProfit
   
```

**Solution:**

- Brute Force - Recursion

    - [By Recursion in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Stock%20buy%20and%20sell%20II/By%20Recursion.cpp)
    - [By Recursion in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Stock%20buy%20and%20sell%20II/By%20Recursion.java)

- Optimised - One pass

    - [By One pass in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Stock%20buy%20and%20sell%20II/By%20one%20pass.cpp)
    - [By One pass in Java(faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Stock%20buy%20and%20sell%20II/By%20one%20pass.java)

 
