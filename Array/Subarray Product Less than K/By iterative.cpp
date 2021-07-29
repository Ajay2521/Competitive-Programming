// Method - Iterative(BruteForce)
// Time Complexity T - O(n^2), since nested loop takes n^2 time
// Space complexity - O(1), since brute force don't take extra space

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         // count variable for counting the no. of subarrays
        int count = 0;
        
        int i, j, product;
     
        // outter loop runs for 0 to n-1 times 
        for (i = 0; i < nums.size(); i++) {
            
            // Counting for single element,
            if (nums[i] < k){
                count++;
            }
                
            // assign the "i" value to the product
            product = nums[i];
            
            // inner loop runs for "i+1" to n-1 times
            for (j = i + 1; j < nums.size(); j++) {
                
                // prosuct of subarray "i" * "j" element
                product = product * nums[j];
                
                // If this product is less
                // than k, then increment the count
                if (product < k){
                    count++;
                }
                // else break the inner loop
                else
                    break;
            }
        }
       return count;  
    }
};
