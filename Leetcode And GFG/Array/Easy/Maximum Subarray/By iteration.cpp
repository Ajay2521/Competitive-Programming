// Brute Force - Iteration
// Time Complexity T - O(n^2), Since nested loop runs for "n^2" times
// Space Complexity S - O(1), BruteForce run on constant sapce time

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // ensure the array "nums" is non empty
        // if empty return "0"
        if(nums.size() == 0 )
        {
            return 0;
        }
        
        // if array "nums" size is "1"
        // then return the "0"th value of the array
        if(nums.size() == 1 )
        {
            return nums[0];
        }
        
        // maxmiumValue will return the maxmium value obtained by the sum of sub array
        int maximumValue = INT_MIN;
        
        // "sum" is used to store the sum of values
        int sum;
        
        // loop runs from "0" to "len(nums)-1"
        for(int i = 0; i < nums.size(); i++)
        {
            
            // for every "i" sum is set to "0"
            sum = 0;
            
            // loop runf for "i" to "len(nums)-1"
            for(int j = i; j < nums.size(); j++)
            {              
                // adding up the value
                sum += nums[j]; // sum = sum + nums[j]
               
                // get the max value
                maximumValue = max(sum, maximumValue); 
            }
            
        }
        return maximumValue;
    }
};
