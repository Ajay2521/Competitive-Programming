// Method - Greedy(Optimised)
// Time Complexity T - O(n), loop run for "n" time
// Space Complexity S - O(1), COnstant space

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        // declaring the lastIndex variable to the len(nums)-1;
        int lastIndex = nums.size() - 1;
        
        // loop runs for lastIndex - 1 to 0
        for(int i = lastIndex - 1; i >= 0; i--){
            
            // check where "i" + "nums[i]" is greater than or equal to lastIndex
            // then assign the "i" as a lastIndex
            // else ignore and reduce the value of "i" and check the if condition again
            if(i + nums[i] >= lastIndex){
              lastIndex = i;  
            } 
            
        }
        
        // after the loop if lastIndex is equal to 0
        // then return true, Since the array reach the last index successfully
        if(lastIndex == 0) {
            return true;
        }
        
        // if lastIndex is not "0", then return false, 
        // since array lost to reach the last    
        return false;
    }
};
