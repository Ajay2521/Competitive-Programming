// including header file
#include<bits/stdc++.h>

// namespace
using namespace std;

// main function
int main(){
	
	// n store digits
	long long n;
  int count = 0;
  cin>>n;
	
	int sum = 0;
	while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
  }
        
	cout<< sum;
	
}
