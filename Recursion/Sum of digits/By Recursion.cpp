
// including header file
#include<bits/stdc++.h>

// namespace
using namespace std;

int sumDigit(int n){
	
	// base case
	if (n == 0){
		return 0;
	}
	
	// recursion case
	return sumDigit(n/10) + n%10;
	
}

// main function
int main(){
	
	// n store digits
	long long n;
  int count = 0;
  cin>>n;
	
	// call recursion function and print
	cout<< sumDigit(n);
	
}
