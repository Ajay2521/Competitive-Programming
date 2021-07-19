### Leetcode - 121

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

### InterviewBit

Say you have an array, A, for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Return the maximum possible profit.


**Problem Constraints**

- <code>0 <= len(A) <= 7e<sup>5</sup></code>

- <code>1 <= A[i] <= 1e<sup>7</sup></code>


**Input Format**

The first and the only argument is an array of integers, A.

**Output Format**

Return an integer, representing the maximum possible profit.

**Example Input**

```
Input 1:

 A = [1, 2]

Input 2:

 A = [1, 4, 5, 2, 4]
```

**Example Output**

```
Output 1:
 
 1

Output 2:

 4
```

**Example Explanation**

```
Explanation 1:

 Buy the stock on day 0, and sell it on day 1.

Explanation 2:

 Buy the stock on day 0, and sell it on day 2.
```

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
        
      else if prices[i] - minBuy > maxProfit:
         maxProfit = prices[i] - minBuy
         
   return maxProfit;

```

**Solution:**

- Brute Force - Iterative

    - [By iterative in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Stock%20buy%20and%20sell/By%20iterative.cpp)
    - [By iterative in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Stock%20buy%20and%20sell/By%20iterative.java)
    
- Optimised - One pass

    - [By one pass in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Stock%20buy%20and%20sell/By%20one%20pass.cpp)
    - [By one pass in Java(faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Stock%20buy%20and%20sell/By%20one%20pass.java)


    
