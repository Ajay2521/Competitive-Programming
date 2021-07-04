// Solution: Java using Floyd's Cycle Finding Algorithm
// Time Complexity T = O(n)
// Space Complexity T = O(1)
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
     
        // using Floyds algorithm
        if ( head == null){
            return false;
        }
        
        // creating a 2 list 
        // one is of slow which points to next node
        // other is of fast which points to 2 next node
        ListNode slow = head;
        ListNode fast = head.next;
        
        while(slow != fast){
            
            // if fast is null or fast.next is null then there is no cycle or loop 
          if( fast == null || fast.next == null){
                return false;
            }
            
            // points to next node
            slow = slow.next;
                
            // points to 2nd next node
            fast = fast.next.next;
            
                
        }
        return true;
    }
} 
