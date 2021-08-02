
// including header file
#include<bits/stdc++.h>

// namespace
using namespace std;

int multiplyDigit(int m, int n){
	
	// base case
	if (n == 0){
		return 0;
	}
	
	// recursion case
	return multiplyDigit(m,n-1) + m;
	
}


// main function
int main(){
	
	// initialize the variable
	int m, n, prod;
	
	// getting input from user
	cin>>m>>n;
	      
	// calling the resurcive function
	prod = multiplyDigit(m,n);
	
	cout<<prod;
}
