/** Iterative Method **/
/** Time Complexity T = O(n) **/
/** Space Complexity S = O(1) **/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
                // creating a current node equal to head
        ListNode* current = head;
        
        // creating a previous node equal to null
        ListNode* previous = NULL;
        
        // creating a next node equal to null
        ListNode* next = NULL;
        
        // iterating the loop, till the current node reached the NULL
        while (current != NULL) {
            
            // Store the next
            next = current->next;
 
            // Reverse current node's pointer
            // Now change next of current, where actual reversing happens 
            current->next = previous;
 
            // Move pointers one position ahead.
            previous = current;
            
            current = next;
        
        }
        
        head  = previous;
        
        return head;
    }

};
