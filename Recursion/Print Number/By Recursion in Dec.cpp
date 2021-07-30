
// including header file
#include<bits/stdc++.h>

// namespace
using namespace std;

// recursion function
void printNumber(int n){
	// base case
	if( n == 0){
		return;
	}
	
	// printing the "n"
	cout<<n;
	
	// recursive case
	printNumber(n-1);
	
	
}

// main function
int main(){
	// calling the recursion function
	printNumber(5);
	return 0;
}
