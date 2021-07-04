// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
        
        // your code here
        // using floyds Algorithm
        if(head == NULL){
            return false;
        }
        
        // creating 2 linked list
        // one is of slow which points to next node
        // other is of fast which points to 2 next node
        SinglyLinkedListNode* slow = head;
        SinglyLinkedListNode* fast = head->next;
        
        while(slow != fast){
            
            // if fast is null or fast.next is null then it doesn't have a loop 
            if( fast == NULL || fast->next == NULL){
                return false;
            }
            
            // points to next node
            slow = slow->next;
                
            // points to 2nd next node
            fast = fast->next->next;
            
                
        }
        return true;
}

