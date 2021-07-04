// iterative method
// Time Complexity T = O(n)
// Space Complexity S = O(1)

// { Driver Code Starts
//Initial Template for C
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();
void display(struct Node *head);

 // } Driver Code Ends
//User function Template for C

struct Node* reverseList(struct Node *head)
    {
        // creating a current node equal to head
        struct Node* current = head;
        
        // creating a previous node equal to null
        struct Node* previous = NULL;
        
        // creating a next node equal to null
        struct Node* next = NULL;
        
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

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      start = reverseList(start);
      display(start);
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
 
 void display(struct Node *head)
{
   while(head!=NULL)
  {
   printf("%d ",head->data);
    head=head->next;
  }
}




  // } Driver Code Ends
