// Method = revering the array
// Time Complexity T = O(n)
// Space Complexity S = O(1)


#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

void reverse(vector<int>& nums, int start, int end){
    
    // run till start is greater than end
    while(start < end){
        
        // storing the start value to temp variable
        int temp = nums[start];
        
        // assigning the end value to the start
        nums[start] =  nums[end];
        
        // assigning the temp value to the end
        nums[end] = temp;
        
        // increment the start and decrement the end
        start++;
        end--;
    }
}


void rotate(vector<int>& nums, int k) {
        
    // if "k" is greater than nums, then "k" is remainder of k mod n  
    k = k % nums.size();
    
    // reversing the entier array from 0 to n
    reverse(nums, 0, nums.size());
    
    // reversing the array from 0 to n-k , which is from beginning to "k-1"th element
    reverse(nums, 0, nums.size() - k);
    
    // reversing the array from n-k to n , which is from "k" element to "n-1"th element
    reverse(nums, nums.size() - k , nums.size());
    
}


int main()
 {
	//code
	int t;
	cin>>t;
	
	for(int k=0; k<t; k++){
	
	    int n, r;
	
	    cin>>n>>r;
	
	    vector<int> nums;
	
	    for(int i=0; i<n; i++){
	        int num;
	        cin>>num;
	        nums.push_back(num);
	    }
	    
	    rotate(nums, r);
	    
	    for(int i=0; i<n; i++)
	        cout<<nums[i]<<" ";
	        
	   cout<<endl;
	}
	return 0;
}
