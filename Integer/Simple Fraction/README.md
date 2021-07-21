## Leetcode - 166

Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.

If the fractional part is repeating, enclose the repeating part in parentheses.

If multiple answers are possible, return any of them.

It is guaranteed that the length of the answer string is less than 104 for all the given inputs.


**Example 1:**

```
Input: numerator = 1, denominator = 2

Output: "0.5"
```

**Example 2:**

```
Input: numerator = 2, denominator = 1

Output: "2"
```

**Example 3:**

```
Input: numerator = 2, denominator = 3

Output: "0.(6)"
```

**Example 4:**

```
Input: numerator = 4, denominator = 333

Output: "0.(012)"
```

**Example 5:**

```
Input: numerator = 1, denominator = 5

Output: "0.2"
``` 

**Constraints:**

- <code>-2<sup>31</sup> <= numerator, denominator <= 2<sup>31</sup> - 1</code>

- <code>denominator != 0</code>


**Solution:**

- [By string appending in c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Integer/Simple%20Fraction/By%20String%20appending.cpp)
