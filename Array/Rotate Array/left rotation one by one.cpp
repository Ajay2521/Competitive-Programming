// Method = Rotate left one by one
// Time Complexity T = O(n * d)
// Space Complexity S = O(1)

#include <iostream>

using namespace std;

// function used to rotate the element one by one
void leftRotatebyOne(int arr[], int n)
{
    // decelare and sssign a arr[0] valeu to temp variable
	int temp = arr[0];

    // loop will run for n - 1 values
	for (int i = 0; i < n - 1; i++)
	{
	    // assigning the arr[i+1] value to the arr[i]
	    // which is assigning the next value to the current value
		arr[i] = arr[i + 1];
	}

    // assign the temp value to the last index of the array
	arr[n-1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
    
    // loop will run for "d" values
	for (int i = 0; i < d; i++)
	{  
	    // call the function for rotating the element one by one
		leftRotatebyOne(arr, n);
	}
}

// function used to print the value of an array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main() {
	//code
        // getting the "n" = size of array, "d"=size of rotation
	    cin>>n>>d;
	    
	    int  arr[n];
	    
	    // getting the array from user
	    for(int j = 0; j<n;j++){
	        cin>>arr[j];
	    }
	    
	    // calling the function to perform the array rotation 
	    leftRotate(arr,d,n);
	    
	    // calling the function to print the array
	    printArray(arr,n);
	
	}
	

	return 0;
}
