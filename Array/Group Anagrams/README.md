### Leetcode - 49, GeeksForGeeks

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.


**Example 1:**

```
Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
```

**Example 2:**

```
Input: strs = [""]

Output: [[""]]
```

**Example 3:**

```
Input: strs = ["a"]

Output: [["a"]]
``` 

**Example 4:**

```
Input:

N = 5
words[] = {act,god,cat,dog,tac}

Output: 

god dog
act cat tac

Explanation:

There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.
```

**Example 5:**

```
Input:
N = 3
words[] = {no,on,is}

Output: 
no on
is

Explanation:

There are 2 groups of anagrams "no", "on" make group 1.
"is" makes group 2. 
```

**Your Task:**

The task is to complete the function Anagrams() that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.


**Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.

Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.**


**Constraints:**

- <code>1 <= strs.length <= 10<sup>4</sup></code>

- <code>0 <= strs[i].length <= 100</code>

- <code>strs[i] consists of lower-case English letters.</code>

## Pseudo Code - Hashing

**Time Complexity T - O(nk log k)**

**Space Complexity S - O(nk)**

```python

groupAnagrams(strs):
  
  if len(str) == 0:
     return [];
  
  map ={};
  
  for str in strs:
  
      charArr = str.toCharArray();
      
      sort(CharArr);
      
      key = valueOf(charArr);
      
      if key not in map:
         map.put(key,[]);
      
      map.get(key).add(str);
      
  return list(map.values());

```

**Solution:**

- [By using Hashmap in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Group%20Anagrams/By%20hashmap.cpp)
- [By using Hashmap in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Group%20Anagrams/By%20hashmap.java)
- [By using Frequency Hashmap in C++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Group%20Anagrams/By%20Frequency%20Hashmap.java)
- [By using Frequency Hashmap in Java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Array/Group%20Anagrams/By%20Frequency%20Hashmap.java)

