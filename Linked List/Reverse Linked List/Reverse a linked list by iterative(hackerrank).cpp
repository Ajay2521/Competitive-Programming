

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
        // creating a current node equal to head
        SinglyLinkedListNode* current = llist;
        
        // creating a previous node equal to null
        SinglyLinkedListNode* previous = NULL;
        
        // creating a next node equal to null
        SinglyLinkedListNode* next = NULL;
        
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
        
        llist = previous;
        
        return llist;
}

