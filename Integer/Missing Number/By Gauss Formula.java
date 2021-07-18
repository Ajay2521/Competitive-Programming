// Method - Gauss Formula(Optimised)
// Time Complexity T - O(n)
// Space Complexity  S - O(1) 


class Solution {
    public int missingNumber(int[] nums) {
        
        // by using the gauss formula = (n(n+1))/2 
        // getting the expectedSum value
        int expectedSum = (nums.length * (nums.length + 1)) / 2;
        
        // actual sum 
        int actualSum = 0;
        
        // looping through 0 to "n-1"
        for(int i = 0; i<nums.length; i++){
            // getting the actual sum value
            actualSum = actualSum + nums[i];
        }
        // return the difference of the expected and actual sum
        return expectedSum - actualSum;
        
    }
}
