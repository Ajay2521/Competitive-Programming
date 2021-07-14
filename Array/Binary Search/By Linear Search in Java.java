// Method - Linear Search (Brute Force)
// Time Complexity T = O(n)
// Space Complexity S = O(1)
  
class Solution {
    public int search(int[] nums, int target) {
       
        // looping runs from 0 to n-1 time,  till the target is found
        for(int i = 0; i < nums.length; i++){
        
            // matching the "i-th" value with the target
            if (nums[i] == target){
    
                // return the index, if the match is found
                return i;            
            
            }
        
        }
        
        //if match not found return -1;
        return -1;
    }
}
