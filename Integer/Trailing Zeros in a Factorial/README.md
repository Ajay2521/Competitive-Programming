## Leetcode(172), GeeksforGeeks, InterviewBit

Given an integer n, return the number of trailing zeroes in n!.

### Follow up: Could you write a solution that works in logarithmic time complexity?
 
### Example 1:

`Input: n = 3`

`Output: 0`

`Explanation: 3! = 6, no trailing zero.`

### Example 2:

`Input: n = 5`

`Output: 1`

`Explanation: 5! = 120, one trailing zero.`

### Example 3:

`Input: n = 0`

`Output: 0` 

### Constraints:

`0 <= n <= 104`

### Solution:

- [Solution by using java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Trailing%20Zeros%20in%20a%20Factorial/Factorial%20Trailing%20Zeros.java)
- [Solution by using C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Trailing%20Zeros%20in%20a%20Factorial/Factorial%20Trailing%20Zeros.c++)

## HackerRank

Given a number find the number of trailing zeroes in its factorial.

### Input Format

A single integer - N

### Output Format

Print a single integer which is the number of trailing zeroes.

### Input Constraints

1 <= N <= 1000

### Solution:

- [Solution by using java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Trailing%20Zeros%20in%20a%20Factorial/Trailing%20Zeros%20in%20Factorial.java)
- [Solution by using C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Trailing%20Zeros%20in%20a%20Factorial/Trailing%20Zeros%20in%20Factorial.cpp)

## Pseudo Code

`
    // Function for finding the trailing zeros in a factorial
 
    // let n = 5 for sample test case
 
    // n! = 5! = 120, which has 1 trailing zero

    trailing_zeros(n):
  
    // initialize the varible count to 0
    count = 0;
  
    // run a loop till the given n is less than or equal to 0
    while n >= 0:
    
      // divide the value of n by 5, since 2*5 makes a 10 
      // and counting the no. of 5 in a n can used to find the no. of zeros 
      n /= 5; /* n = 5/5 => n = 1 */
    
      // add the n value to count, now n = 1, so count is also 1
      count += n;
  
    // count holds the number of trailing zeros in factorial of "n"  
    return count;

`

### HINT:

If need to print "n" or performe without change the "n" value

instead of while loop try the below for loop

`for (int i = 5; n / i >= 1; i *= 5){
            
            countZeros += n / i;

}`
