// iterative method
// Time Complexity T = O(n)
// Space Complexity S = O(1)

// { Driver Code Starts
import java.util.*;
import java.io.*;

class Node{
    int data;
    Node next;
    
    Node(int x){
        data = x;
        next = null;
    }
    
}
class GFG{
	static void printList(Node node) 
	{ 
		while (node != null) 
		{ 
			System.out.print(node.data + " "); 
			node = node.next; 
		} 
		System.out.println(); 
	}
    public static void main(String args[]) throws IOException { 
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t > 0){
        
        	int n = sc.nextInt();
        
            Node head = new Node(sc.nextInt());
            Node tail = head;
        
            for(int i=0; i<n-1; i++)
            {
                tail.next = new Node(sc.nextInt());
                tail = tail.next;
            }
        
            Solution ob = new Solution();
            head = ob.reverseList(head);
            printList(head); 
            t--;
        }
    } 
} 
   // } Driver Code Ends


//function Template for Java

/* linked list node class:

class Node {
    int value;
    Node next;
    Node(int value) {
        this.value = value;
    }
}

*/

class Solution
{
    //Function to reverse a linked list.
    Node reverseList(Node head)
    {
        // code here
        // creating a current node equal to head
        Node current = head;
        
        // creating a previous node equal to null
        Node previous = null;
        
        // creating a next node equal to null
        Node next = null;
        
        // iterating the loop, till the current node reached the NULL
        while (current != null) {
            
            // Store the next
            next = current.next;
 
            // Reverse current node's pointer
            // Now change next of current, where actual reversing happens 
            current.next = previous;
 
            // Move pointers one position ahead.
            previous = current;
            
            current = next;
        
        }
        
        head  = previous;
        
        return head;
    }
}
