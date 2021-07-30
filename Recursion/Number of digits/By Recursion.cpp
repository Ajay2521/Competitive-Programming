
// including header file
#include<bits/stdc++.h>

// namespace
using namespace std;

int countDigit(int n){
	
	// base case
	if (n == 0){
		return 0;
	}
	
	// recursion case
	return countDigit(n/10)+1;
	
}

// main function
int main(){
	
	// n store digits
	long long n;
  int count = 0;
  cin>>n;
	
	// call recursion function and print
	cout<< countDigit(n);
	
}
