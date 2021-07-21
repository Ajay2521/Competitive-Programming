## Leetcode - 1491

Given an array of unique integers salary where salary[i] is the salary of the employee i.

Return the average salary of employees excluding the minimum and maximum salary. 

**Example 1:**

```
Input: salary = [4000,3000,1000,2000]

Output: 2500.00000

Explanation: Minimum salary and maximum salary are 1000 and 4000 respectively.

Average salary excluding minimum and maximum salary is (2000+3000)/2= 2500
```

**Example 2:**

```
Input: salary = [1000,2000,3000]

Output: 2000.00000

Explanation: Minimum salary and maximum salary are 1000 and 3000 respectively.

Average salary excluding minimum and maximum salary is (2000)/1= 2000
```

**Example 3:**

```
Input: salary = [6000,5000,4000,3000,2000,1000]

Output: 3500.00000
```

**Example 4:**

```
Input: salary = [8000,9000,2000,3000,6000,1000]

Output: 4750.00000
``` 

**Constraints:**

- <code>3 <= salary.length <= 100</code>

- <code>10<sup>3</sup> <= salary[i] <= 10<sup>6</sup></code>

- <code>salary[i] is unique.</code>

- <code>Answers within 10<sup>-5</sup> of the actual value will be accepted as correct.</code>


## Pseudo Code

**Brute Force - Sorting**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

CalAvg(salary):
  
  sort(salary);
  
  sum = 0;
  avg;
  
  for i from 1 to len(salary)-1:
  
      sum += salary[i];
  
  avg = sum / (len(salary) - 2);
  
  return avg;
  
```


**Optimised - MinMax**

**Time Complexity T - O(n)**

**Space Complexity S - O(1)**

```python

CalAvg(salary):
  
  minSal = MAX_VALUE;
  maxSal = MIN_VALUE;
  
  sum = 0;
  avg;
  
  for i from 0 to len(salary):
      minSal = min(minSal, salary[i]);
      maxSal = max(maxSal, salary[i]);
      
  for i from 0 to len(salary):
      
      if salary[i] != minSal and salary[i] != maxSal:
         
         sum += salary[i];
  
  avg = sum / (len(salary) - 2);
  
  return avg;
  
```


**Solution:**

- Brute Force - Sorting

  - [By Sorting in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Average%20by%20exclude%20min%20and%20max/By%20sorting.cpp)
  - [By Sorting in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Average%20by%20exclude%20min%20and%20max/By%20sorting.java)
  
- Optimised - MinMax
  - [By MinMax in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Average%20by%20exclude%20min%20and%20max/By%20MinMax.cpp)
  - [By MinMax in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Average%20by%20exclude%20min%20and%20max/By%20MinMax.java)
  
  
  
