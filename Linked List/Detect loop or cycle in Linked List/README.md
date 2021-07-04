## Leetcode - Linked List Cycle - Easy

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.
 
### Example 1:

![image](https://user-images.githubusercontent.com/60919132/124374434-c27d0b00-dcb8-11eb-9b45-85ac865622c7.png)

`Input: head = [3,2,0,-4], pos = 1`

`Output: true`

`Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).`

### Example 2:

![image](https://user-images.githubusercontent.com/60919132/124374640-babe6600-dcba-11eb-8db7-377a03d12cb1.png)


`Input: head = [1,2], pos = 0`

`Output: true`

`Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.`

### Example 3:

![image](https://user-images.githubusercontent.com/60919132/124374644-c6aa2800-dcba-11eb-8dd2-9f35d9c674b9.png)


`Input: head = [1], pos = -1`

`Output: false`

`Explanation: There is no cycle in the linked list.`
 

### Constraints:

- The number of the nodes in the list is in the range [0, 104].
- -10<sup>5</sup> <= Node.val <= 10<sup>5</sup>
- pos is -1 or a valid index in the linked-list.
 
### Solution:

- [Linked list Cycle using c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Linked%20List/Detect%20loop%20or%20cycle%20in%20Linked%20List/Linked%20List%20Cycle.cpp) 
- [Linked list Cycle using java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Linked%20List/Detect%20loop%20or%20cycle%20in%20Linked%20List/Linked%20List%20Cycle.java) 

## GeeksForGeeks - Detect Loop in Linked List - Easy

### Your Task:
The task is to complete the function detectloop() which contains reference to the head as only argument. This function should return 1 if linked list contains loop, else return 0.

### Expected Time Complexity: O(N)
### Expected Auxiliary Space: O(1)

### Constraints:
1 <= N <= 10<sup>4</sup>
1 <= Data on Node <= 10<sup>3</sup>

### Solution:

- [Detect Loop in Linked List using c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Linked%20List/Detect%20loop%20or%20cycle%20in%20Linked%20List/Detect%20Loop%20in%20Linked%20List.cpp) 
- [Detect Loop in Linked List using java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Linked%20List/Detect%20loop%20or%20cycle%20in%20Linked%20List/Detect%20Loop%20in%20Linked%20List.java) 

## HackerRank - Cycle Detection - Easy

A linked list is said to contain a cycle if any node is visited more than once while traversing the list. Given a pointer to the head of a linked list, determine if it contains a cycle. If it does, return . Otherwise, return .

### Example

head refers to the list of nodes 1 -> 2 -> 3 -> NULL 

The numbers shown are the node numbers, not their data values. There is no cycle in this list so return .

head refers to the list of nodes 1-> 2 ->  3 -> 1 -> NULL 

There is a cycle where node 3 points back to node 1, so return .

### Function Description

Complete the has_cycle function in the editor below.

It has the following parameter:

- SinglyLinkedListNode pointer head: a reference to the head of the list

### Returns

**int**:  if there is a cycle or  if there is not
**Note**: If the list is empty,  will be null.

### Input Format

The code stub reads from stdin and passes the appropriate argument to your function. The custom test cases format will not be described for this question due to its complexity. Expand the section for the main function and review the code if you would like to figure out how to create a custom case.

### Constraints
- 0 <= list size <= 1000

### Sample Input

References to each of the following linked lists are passed as arguments to your function:

![image](https://user-images.githubusercontent.com/60919132/124374797-d5dda580-dcbb-11eb-938b-1e00797ae6f6.png)

### Sample Output

`0`

`1`

### Solution:

- [Cycle Detection using c++](https://github.com/Ajay2521/Competitive-Programming/blob/main/Linked%20List/Detect%20loop%20or%20cycle%20in%20Linked%20List/Cycle%20Detection.cpp) 
- [Cycle Detection using java](https://github.com/Ajay2521/Competitive-Programming/blob/main/Linked%20List/Detect%20loop%20or%20cycle%20in%20Linked%20List/Cycle%20Detection.java) 
