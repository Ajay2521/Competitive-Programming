### Leetcode 58

Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

A word is a maximal substring consisting of non-space characters only.

#### Example 1:

```
Input: s = "Hello World"
Output: 5
```

#### Example 2:

```
Input: s = " "
Output: 0
``` 

#### Constraints:

<code> 1 <= s.length <= 10<sup>4</sup></code>

<code>s consists of only English letters and spaces ' '.</code>


### GeeksForGeeks

Given a string S consisting of upper/lower-case alphabets and empty space characters ‘ ‘. The string may contain spaces at the end. 

You will have return the length of last word which consists of alphabets only.

#### Example 1:

```
Input: S = "Geeks for Geeks"

Output: 5

Explanation: The last word is "Geeks" of length 5.
```

#### Example 2:

```
Input: S = "Start Coding Here "

Output: 4

Explanation: The last word is "Here" of length 4.
```

**Your Task:**

You don't need to read input or print anything.

Your task is to complete the function findLength() which takes a single argument(string S) and returns the length of last word of the string.

**Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).**

#### Constraints:

```
1<=|S|<=100

|S| denotes the length of the string S.
```

### InterviewBit

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

**Note: A word is defined as a character sequence consists of non-space characters only.**

#### Example:

```
Given s = "Hello World",

return 5 as length("World") = 5.
```

**Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.**

## Pseudo Code
#### Brute Force - Iterating from Beginning
#### Time Complexity T = O(n)
#### Space Complexity S = O(1)

```python
lenOfLastWord(s):
  
  // initializing the count to be zero
  count = 0;
  
  // finding the size of the given string
  n = s.size();
        
  // initializing the variable "i" for iteration
  i = 0;
   
  // looping through the given string.
  while(i < n):
  
      // if the given string has no space then increment the "count" and "i"
      if(s[i] != ' '):
          count++;
          i++;
      
      // if a space occured in a given String,
      else:
        // looping through the given string.                
        while(i < n && s[i] == ' '): i++;
        
        // if "i" reaches end of the string then return "count", 
        // since the last word in the string is already counted
        if(i == n):
           return count;
               
        // if "i" doesn't reach the end of the string 
        // then restart the count and for counting the next word in the string 
        else:
            count = 0;
     
  return count;
  
```


#### Optimised - Iterating from Last letter
#### Time Complexity T = O(n)
#### Space Complexity S = O(1)

```python
lenOfLastWord(s):
  
  // initializing the count to be zero
  count = 0;
  
  // finding the size of the given string
  n = s.size();
        
  // looping through the given string from last letter.
  for i from n-1 to 0:
            
       // if the given string has no space then increment the "count"
       if(s[i] != ' '):
            count++;
            
        // if a space occured in a given String,
        else:
                
          // if "count" is not "0" then return count, 
          // since the last word in the string is already counted
          if(count > 0):
                    return count;
            
  return count;
```  
  
#### Solution:
 
- Brute Force - Iterating from beginning
    -  [By iterating from Beginning in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/length%20of%20Last%20Word/By%20Iterating%20from%20beginning.cpp)
    -  [By iterating from Beginning in Java (Faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/length%20of%20Last%20Word/By%20Iterating%20from%20beginning.java)
    
- Optimised - Iterating from Last letter
    -  [By iterating from Last Letter in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/length%20of%20Last%20Word/By%20Iterating%20from%20last%20letter.cpp)
    -  [By iterating from Last Letter in Java (Faster)](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/length%20of%20Last%20Word/By%20Iterating%20from%20last%20letter.java)
  
 
