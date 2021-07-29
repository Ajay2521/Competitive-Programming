// Method - Sliding window(Optimised)
// Time Complexity T - O(n)
// Space complexity - O(1), constant space

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         
        // count variable for counting the no. of subarrays
        int count = 0;
        
        // product is used to calculate the product of 2 values
        int product = 1;
        
        // points to the left moset array initialy
        int left = 0;
        
        // if k is less than or equal to 1 
        // the return 0
        if(k <= 1){
            return 0;
        }
     
        // outter loop runs for 0 to n-1 times 
        for (int i = 0; i < nums.size(); i++) {
            
            // claulcating the product
            product = product * nums[i];
                
            // loop runs when the product is geater than the value of "k"
            while(product >= k) {
                
                // diving the product by the value present in the left++ of an array
                product = product / nums[left++];
            }
            
            // counting the subarray
            count = count + (i - left +1);
        }
       return count;      
    }
};
