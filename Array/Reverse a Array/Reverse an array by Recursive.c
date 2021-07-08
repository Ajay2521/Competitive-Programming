#include <stdio.h>


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

int main(void) {
	
	int num;
	// reading the array size
	scanf("%d",&num);				

	int arr[num];
	// reading the array value
	for(int i = 0; i<num; i++){
		scanf("%d",&arr[i]); 
	}					

	// revering the array using temp variable
	int start = 0;
	int end = num - 1;
	
	// calling the recurissive function
    reverse(arr, start, end);
    
	// printing the reversed array
	for(int i = 0; i<num; i++){
		printf("%d ",arr[i]); 
	}
	
	return 0;

}	

