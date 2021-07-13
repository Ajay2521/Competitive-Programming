// Brute Force - Iterative
// Time Complexity T = O(n2)
// Space Complexity S = O(1)

class Solution {
    public int[] twoSum(int[] nums, int target) {
        // ans is used to return the index of the obtained result, 
        // ans size is 2, since expected output size is 2
        int[] ans = new int[2];
        
        // looping through all the values in the array from 0 to n-1
        for(int i = 0; i<(nums.length-1); i++){
            
            // looping through all the values in the array from 1 to n
            for(int j = i+1; j<nums.length; j++){
                
                // checking whether "i-th" and "j-th" sum with the "target" value 
                if(nums[i]+nums[j]==target){
                    
                    // if sum of "i-th" and "j-th" makes of target
                    // then add the "i-th" and "j-th" index to the answer variable
                    ans[0] = i;
                    ans[1] = j;
                }
            }
        }
        
        // returning the answer
        return ans;
    }
}
