
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
	
	// recursive case
	printNumber(n-1);
	
  // printing the n
	cout<<n;
  
}

// main function
int main(){
	
  // calling the recursion function
	printNumber(5);
	
  return 0;

}
