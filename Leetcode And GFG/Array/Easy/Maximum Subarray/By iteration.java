// Brute Force - Iteration
// Time Complexity T - O(n^2), Since nested loop runs for "n^2" times
// Space Complexity S - O(1), BruteForce run on constant sapce time

class Solution {
    public int maxSubArray(int[] nums) {
        
        // ensure the array "nums" is non empty
        // if empty return "0"
        if(nums.length == 0 )
        {
            return 0;
        }
        
        // if array "nums" size is "1"
        // then return the "0"th value of the array
        if(nums.length == 1 )
        {
            return nums[0];
        }
        
        // maxmiumValue will return the maxmium value obtained by the sum of sub array
        int maximumValue = Integer.MIN_VALUE;
        
        // "sum" is used to store the sum of values
        int sum;
        
        // loop runs from "0" to "len(nums)-1"
        for(int i = 0; i < nums.length; i++)
        {
            
            // for every "i" sum is set to "0"
            sum = 0;
            
            // loop runf for "i" to "len(nums)-1"
            for(int j = i; j < nums.length; j++)
            {              
                // adding up the value
                sum += nums[j]; // sum = sum + nums[j]
               
                // get the max value
                maximumValue = Math.max(sum, maximumValue); 
            }
            
        }
        return maximumValue;
    }
}
