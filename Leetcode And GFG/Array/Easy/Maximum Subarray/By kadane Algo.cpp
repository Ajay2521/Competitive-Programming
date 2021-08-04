// Optimised - Kadane's algorithm(DP)
// Time Complexity T - O(n), Since loop runs for "n" times
// Space Complexity S - O(1), runs on constant sapce time

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
        int sum = 0;
        
        // loop runs from "0" to "len(nums)-1"
        for(int i = 0; i < nums.size(); i++)
        {
            
            // adding up the value
            sum += nums[i]; // sum = sum + nums[i]
            
            // if the "sum" is greater than "maxmiumValue"
            // then assign the value of "sum" to "maxmiumValue"
            if(maximumValue < sum){
                maximumValue = sum;
            }
            
            // if "sum" becomes less than "0",
            // then assign "sum" is "0"
            if(sum < 0){
                sum = 0;    
            } 
            
        }
        return maximumValue;
    }
};
