// including the header file
#include <iostream>

// using the namespace
using namespace std;

// main function of the program
int main(){
	
	// initialize the variable
	int m, n, prod=0;
	
	// getting input from user
	cin>>m>>n;
	
	// loop runs for "1" to "n"
	for(int i = 1; i<=n; i++){
		
		// suming the product = product + m;
		prod += m;
		
	}
	
	// print product
	cout<<prod;
}
