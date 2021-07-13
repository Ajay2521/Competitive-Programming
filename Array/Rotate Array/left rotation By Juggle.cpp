/*Method =  Juggling Algorithm(
Instead of moving one by one, divide the array in different sets 
where number of sets is equal to GCD of n and d and move the
elements within sets

Time Complexity T = O(n)
Space Complexity S = O(1)
*/

#include <iostream>

using namespace std;

// Fuction to get gcd of d and n
int gcd(int d, int n)
{
    // return the "d" if "n" is 0, condition to stop the recursion
    // the returning value is the GCD of d, n
    if (n == 0)
        return d;
    // else make a recursion
    else
        return gcd(n, d % n);
}
 
//Function to left rotate arr[] of size "n" by "d"
void leftRotate(int arr[], int d, int n)
{
    
    // if d >= n 
    d = d % n;
    
    // getting the GCD from the recusion function
    int g_c_d = gcd(d, n);
    
    // loop runs for GCD time
    for (int i = 0; i < g_c_d; i++) {
        // move i-th values of arr to temp 
        int temp = arr[i];
        
        int j = i;
        
        // loop will be run for complete iteration of the set
        while (1) {
            // k - is the set value which is used to rotate the "k" element based on "d" value
            int k = j + d;
            
            // checking the "k" value is greater than or equal to n
            if (k >= n)
                k = k - n;
            
            // end the while loop if the iteration is over
            if (k == i)
                break;
            
            // assigning the "k"th value to the "j" value of arr
            arr[j] = arr[k];
            
            j = k;
        }
        
        // assigning the temp to the "j"th value of an array
        arr[j] = temp;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}


/* Driver program to test above functions */
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function calling
	leftRotate(arr, 3, n);
	printArray(arr, n);

	return 0;
}
