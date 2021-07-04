// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}


 // } Driver Code Ends
/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        // using floyds Algorithm
        if(head == NULL){
            return false;
        }
        
        // creating 2 linked list
        // one is of slow which points to next node
        // other is of fast which points to 2 next node
        Node* slow = head;
        Node* fast = head -> next;
        
        while(slow != fast){
            
            // if slow == fast then loop occure
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
};

