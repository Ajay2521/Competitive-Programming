/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>

using namespace std;

void reverse(int arr[], int start, int end){

	if (start >= end){
		return;
	}

	// revering the array using temp variable	
	int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

	reverse(arr, start+1, end-1); 

}

int main() {
	
	int num;
	// reading the array size
	cin >> num;				

	int arr[num];
	// reading the array value
	for(int i = 0; i<num; i++){
		cin >> arr[i]; 
	}					

	// revering the array using temp variable
	int start = 0;
	int end = num - 1;
	
	reverse(arr, start, end);

	// printing the reversed array
	for(int i = 0; i<num; i++){
		cout << arr[i] << endl; 
	}

}					
	
