### Leetcode - 121: Buy and sell Stocks

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


**Example 1:**

```

Input: prices = [7,1,5,3,6,4]

Output: 5

Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

```

**Example 2:**

```

Input: prices = [7,6,4,3,1]

Output: 0

Explanation: In this case, no transactions are done and the max profit = 0.

``` 

**Constraints:**

- <code>1 <= prices.length <= 10<sup>5</sup></code>

- <code>0 <= prices[i] <= 10<sup>4</sup></code>


## Pseudo Code

#### Brute Force - Iterative

**Time complexity T - O(n^2)**

**Space complexity S - O(1)**

```python

buyAndSell(prices):
  
  // ensure prices are not empty
  if len(prices) is 0:
     return 0;
     
  // initialis the maxProfit
  maxProfit = 0;
  
  // run loop for 0 - n-1
  for i from 0 to len(prices)-1:
    // run loop from 1 - n
    for j from i+1 to len(prices):
    
        profit = prices[j] - prices[i];
        
        // ensure to get maximum profit
        if profit > maxProfit:
           maxProfit = profit 
        
   return maxProfit;

```

#### Optimised - One pass

**Time complexity T - O(n)**

**Space complexity S - O(1)**

```python

buyAndSell(prices):
  
  // ensure prices are not empty
  if len(prices) is 0:
     return 0;
     
  // initialis the maxProfit and minBuy
  maxProfit = 0;
  minBuy = prices[0]
  
  // run loop for 0 - n
  for i from 0 to len(prices):
      if prices[i] < minBuy:
         minBuy = prices[i]
        
      if prices[i] - minBuy > maxProfit:
         maxProfit = prices[i] - minBuy
         
   return maxProfit;

```

**Solution:**

**Brute Force - Iterative**

   - [By iterative in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Buy%20and%20sell%20stock/By%20iteration.cpp)
    
   - [By iterative in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Buy%20and%20sell%20stock/By%20iteration.java)
    
**Optimised - One pass**
    
   - [By one pass in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Buy%20and%20sell%20stock/By%20one%20pass.cpp)
    
   - [By one pass in Java(faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Leetcode%20And%20GFG/Array/Easy/Buy%20and%20sell%20stock/By%20one%20pass.java)


    
