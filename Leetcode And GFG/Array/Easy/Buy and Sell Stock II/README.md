### Leetcode - 122: Buy and Sell Stock II - Easy

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

**Brute Force - Recursion**

  - [By Recursion in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Buy%20and%20Sell%20Stock%20II/By%20Recursion.cpp)

  - [By Recursion in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Buy%20and%20Sell%20Stock%20II/By%20Recursion.java)

**Optimised - One pass**

   - [By One pass in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Buy%20and%20Sell%20Stock%20II/By%20one%20pass.cpp)
   
   - [By One pass in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Buy%20and%20Sell%20Stock%20II/By%20one%20pass.java)

 
