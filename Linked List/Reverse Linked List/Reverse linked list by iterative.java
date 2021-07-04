/** Iterative Method **/
/** Time Complexity T = O(n) **/
/** Space Complexity S = O(1) **/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        // creating a current node equal to head
        ListNode current = head;
        
        // creating a previous node equal to null
        ListNode previous = null;
        
        // creating a next node equal to null
        ListNode next = null;
        
        // iterating the loop, till the current node reached the NULL
        while (current != null) {
            
            // Store the next
            next = current.next;
 
            // Reverse current node's pointer
            // where actual revering happines
            current.next = previous;
 
            // Move pointers one position ahead.
            previous = current;
            
            current = next;
        
        }
        head = previous;
        return head;
        
    }
}
