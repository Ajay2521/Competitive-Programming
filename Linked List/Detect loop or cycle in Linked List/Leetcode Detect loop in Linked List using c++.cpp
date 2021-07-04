// Solution - C++ using Floyd's Cycle Finding Algorithm
// Time Complexity T = O(n)
// Space Complexity T = O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
     
        // using Floyds algorithm
        if ( head == NULL){
            return false;
        }
        
        // creating a 2 list 
        // one is of slow which points to next node
        // other is of fast which points to 2 next node
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(slow && fast && fast->next){
            // points to next node
            slow = slow -> next;
                
            // points to 2nd next node
            fast = fast -> next -> next;
            
            // if slow == fast then loop occure
            if( slow == fast){
                return true;
            }
                
        }
        return false;
    }
};
