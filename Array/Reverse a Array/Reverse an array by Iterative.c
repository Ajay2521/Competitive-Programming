#include <stdio.h>

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
	
	while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

	// printing the reversed array
	for(int i = 0; i<num; i++){
		printf("%d ",arr[i]); 
	}
	
	return 0;

}	

